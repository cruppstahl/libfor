
sub consume
{
  my $old = shift;
  my $c = shift;
  my $t = $old + $c;
  print "  /* consumed: $c bytes (total: $t) */\n";
  return $t;
}

sub bitmask
{
  my $bits = shift;
  my $mask = 0;
  for (my $m = 0; $m < $bits; $m++) {
    $mask |= 1 << $m;
  }
  return $mask;
}

#
# TODO
# if bits are aligned (i.e. $bits_per_word % $bits == 0), then use 4 different
# tmp variables (tmp0..tmp3), iterate between them and OR the result!
#
sub generate_pack_impl
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = shift;

  my $consumed = 0;
  my $inittmp = 1;

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint32_t *in, uint8_t *out) {\n";

  # optimized path for 32bit
  if ($bits == 32) {
    print "  uint32_t i;\n";
    print "  uint32_t *out32 = (uint32_t *)out;\n";
    print "  for (i = 0; i < $block; i++)\n";
    print "    out32[i] = in[i] - base;\n";
    print "  return $block * sizeof(uint32_t);\n";
    print "}\n\n";
    return;
  }

  print "  $type tmp, length;\n";

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        if ($inittmp != 0) {
          print "  tmp  = (*(in + $j) - base) << $b;\n";
          $inittmp = 0;
        }
        else {
          print "  tmp |= (*(in + $j) - base) << $b;\n";
        }
        $b += $bits;
      }
      # if not then encode at a word boundary
      else {
        print "  tmp |= (*(in + $j) - base) << $b;\n";
        print "  *($type *)out = tmp;\n";
        print "  out += sizeof($type);\n";
        $consumed = consume($consumed, $bits_per_word / 8);
        my $d = ($b + $bits) - 32;
        print "  tmp  = (*(in + $j) - base) >> ($bits - $d);\n";
        $b = $d;
      }

      $j++;
      $i++;
    }

    # move to next block
    if ($i < $block) {
      print "  *($type *)out = tmp;\n";
      print "  out += sizeof($type);\n";
      $inittmp = 1;
      $consumed = consume($consumed, $bits_per_word / 8);
    }
    # or reached the end?
    else {
      use integer; # force integer division
      print "  /* remaining: " . ($bits_per_word - $b) . " bits */\n";
      print "  length = ($bits_per_word / 8) - ($bits_per_word - $b) / 8;\n";
      $consumed = consume($consumed,
                        ($bits_per_word / 8) - ($bits_per_word - $b) / 8);
      print "  memcpy(out, &tmp, length);\n";
      print "  return $consumed;\n";
      last;
    }
  }
  print "}\n\n";
}

sub generate_pack
{
  my $bits = shift;
  my $block = shift;

  my $fname = "pack$bits" . '_' . $block;

  generate_pack_impl($fname, 'uint32_t', 32, $bits, $block);
}

sub generate_unpack_impl
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = shift;

  my $mask = bitmask($bits);

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint8_t *in, uint32_t *out) {\n";

  # optimized path for 32bit
  if ($bits == 32) {
    print "  uint32_t i;\n";
    print "  uint32_t *in32 = (uint32_t *)in;\n";
    print "  for (i = 0; i < $block; i++)\n";
    print "    out[i] = base + in32[i];\n";
    print "  return $block * sizeof(uint32_t);\n";
    print "}\n\n";
    return;
  }

  print "  $type *in32 = ($type *)in;\n";
  print "  $type tmp; (void)tmp;\n";
  my $consumed = 4;

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        print "  *(out + $j)  = base + ((*in32 >> $b) & $mask);\n";
        $b += $bits;
      }
      # if not then decode at a word boundary
      else {
        print "  tmp = (*in32 >> $b);\n";
        print "  in32++;\n";
        $consumed = consume($consumed, $bits_per_word / 8);
        my $d = ($b + $bits) - 32;
        print "  tmp |= (*in32 % (1U << $d)) << ($bits - $d);\n";
        print "  *(out + $j) = base + tmp;\n";
        $b = $d;
      }
      $j++;
      $i++;
    }

    # move to next block
    if ($i < $block) {
      print "  in32++;\n";
      $consumed = consume($consumed, $bits_per_word / 8);
    }
    # or reached the end?
    else {
      use integer; # force integer division
      my $remaining = $bits_per_word - $b;
      print "  /* remaining: $remaining bits */\n";
      $consumed -= $remaining / 8;
      print "  return $consumed;\n";
      last;
    }
  }
  print "}\n\n";
}

sub generate_unpack
{
  my $bits = shift;
  my $block = shift;

  my $fname = "unpack$bits" . '_' . $block;

  generate_unpack_impl($fname, 'uint32_t', 32, $bits, $block);
}

sub generate_packx
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = 8;

  my $inittmp = 1;

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {\n";
  print "  $type tmp, remaining;\n";
  print "  if (length == 0)\n";
  print "    return 0;\n";

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        if ($inittmp != 0) {
          print "  tmp  = (*(in + $j) - base) << $b;\n";
          $inittmp = 0;
        }
        else {
          print "  tmp |= (*(in + $j) - base) << $b;\n";
        }
        $b += $bits;
      }
      # if not then encode at a word boundary
      else {
        print "  tmp |= (*(in + $j) - base) << $b;\n";
        print "  *($type *)out = tmp;\n";
        print "  out += sizeof($type);\n";
        my $d = ($b + $bits) - 32;
        print "  tmp  = (*(in + $j) - base) >> ($bits - $d);\n";
        $b = $d;
      }

      $j++;
      $i++;

      print "  if (length == $j)\n    goto bail;\n";
    }

    # move to next block
    if ($i < $block) {
      print "  *($type *)out = tmp;\n";
      print "  out += sizeof($type);\n";
      $inittmp = 1;
    }
    # or reached the end?
    else {
      print "bail:\n";
      print "  remaining = (((length * $bits) + 7) / 8) % 4;\n";
      print "  if (remaining == 0) remaining = 4;\n";
      print "  memcpy(out, &tmp, remaining);\n";
      print "  return ((length * $bits) + 7) / 8;\n";
      last;
    }
  }
  print "}\n\n";
}

sub generate_unpackx
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = 8;

  my $mask = bitmask($bits);

  my $inittmp = 1;

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {\n";
  print "  $type tmp;\n";
  print "  if (length == 0)\n";
  print "    return 0;\n";

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      if ($inittmp != 0) {
        print "  tmp = *($type *)in;\n";
        $inittmp = 0;
      }

      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        print "  *(out + $j)  = base + ((tmp >> $b) & $mask);\n";
        $b += $bits;
      }
      # if not then decode at a word boundary
      else {
        print "  *(out + $j)  = tmp >> $b;\n";
        print "  in += sizeof($type);\n";
        my $d = ($b + $bits) - 32;
        print "  tmp = *($type *)in;\n";
        print "  *(out + $j) |= (tmp % (1U << $d)) << ($bits - $d);\n";
        print "  *(out + $j) += base;\n";
        $b = $d;
      }

      $j++;
      $i++;

      print "  if (length == $j)\n    goto bail;\n";
    }

    # move to next block
    if ($i < $block) {
      print "  in += sizeof($type);\n";
      $inittmp = 1;
    }
    # or reached the end?
    else {
      print "bail:\n";
      print "  return ((length * $bits) + 7) / 8;\n";
      last;
    }
  }
  print "}\n\n";
}

sub generate_packer_array
{
  my $n = shift;
  my $b = shift;
  my $f = shift;
  print "$f for_$n$b\[33\] = {\n";
  if ($b == 'x') {
    print "                       $n"."0_x,\n";
  }
  else {
    print "                       $n"."0_" . "$b,\n";
  }
  for (my $i = 1; $i < 32; $i++) {
    print "                       $n$i" . '_' . "$b,\n";
  }
  print "                       $n" . "32_$b\n";
  print "};\n\n";
}

sub generate_linsearch_impl
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = shift;

  my $consumed = 0;
  my $inittmp = 1;

  my $mask = bitmask($bits);

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint8_t *in, uint32_t value, int *found) {\n";

  # optimized path for 32bit
  if ($bits == 32) {
    print "  uint32_t i;\n";
    print "  uint32_t *in32 = (uint32_t *)in;\n";
    print "  value -= base;\n";
    print "  for (i = 0; i < $block; i++) {\n";
    print "    if (in32[i] == value) {\n";
    print "      *found = i;\n";
    print "      return 0;\n";
    print "    }\n";
    print "  }\n";
    print "  return $block * sizeof(uint32_t);\n";
    print "}\n\n";
    return;
  }

  print "  $type tmp, tmp2;\n";
  print "  value -= base;\n";
  print "  (void)tmp2;\n";

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      if ($inittmp != 0) {
        print "  tmp = *($type *)in;\n";
        $consumed = consume($consumed, $bits_per_word / 8);
        $inittmp = 0;
      }

      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        print "  if (((tmp >> $b) & $mask) == value) {\n";
        print "    *found = $j;\n";
        print "    return $j;\n";
        print "  }\n";
        $b += $bits;
      }
      # if not then decode at a word boundary
      else {
        print "  tmp2 = tmp >> $b;\n";
        print "  in += sizeof($type);\n";
        $consumed = consume($consumed, $bits_per_word / 8);
        my $d = ($b + $bits) - 32;
        print "  tmp = *($type *)in;\n";
        print "  if ((tmp2 | (tmp % (1U << $d)) << ($bits - $d)) == value) {\n";
        print "    *found = $j;\n";
        print "    return $j;\n";
        print "  }\n";
        $b = $d;
      }
      $j++;
      $i++;
    }

    # move to next block
    if ($i < $block) {
      print "  in += sizeof($type);\n";
      $inittmp = 1;
    }
    # or reached the end?
    else {
      use integer; # force integer division
      my $remaining = $bits_per_word - $b;
      print "  /* remaining: $remaining bits */\n";
      $consumed -= $remaining / 8;
      print "  return ($consumed);\n";
      last;
    }
  }
  print "}\n\n";
}

sub generate_linsearch
{
  my $bits = shift;
  my $block = shift;

  my $fname = "linsearch$bits" . '_' . $block;

  generate_linsearch_impl($fname, 'uint32_t', 32, $bits, $block);
}

sub generate_linsearchx
{
  my $fname = shift;
  my $type = shift;
  my $bits_per_word = shift;
  my $bits = shift;
  my $block = 8;

  my $mask = bitmask($bits);

  my $inittmp = 1;

  print "static uint32_t\n";
  print "$fname(uint32_t base, const uint8_t *in, uint32_t length, uint32_t value, int *found) {\n";
  print "  $type tmp, tmp2;\n";
  print "  (void)tmp2;\n";
  print "  if (length == 0)\n";
  print "    return 0;\n";
  print "  value -= base;\n";

  my $i = 0;
  my $j = 0;

  while (1) {
    my $b = 0;
    while ($b < $bits_per_word and $i < $block) {
      if ($inittmp != 0) {
        print "  tmp = *($type *)in;\n";
        $inittmp = 0;
      }

      # new value fits into the current word?
      if ($b + $bits <= $bits_per_word) {
        print "  if (value == ((tmp >> $b) & $mask)) {\n";
        print "    *found = $j;\n";
        print "    return $j;\n";
        print "  }\n";
        $b += $bits;
      }
      # if not then decode at a word boundary
      else {
        print "  tmp2 = tmp >> $b;\n";
        print "  in += sizeof($type);\n";
        my $d = ($b + $bits) - 32;
        print "  tmp = *($type *)in;\n";
        print "  if ((tmp2 | (tmp % (1U << $d)) << ($bits - $d)) == value) {\n";
        print "    *found = $j;\n";
        print "    return $j;\n";
        print "  }\n";
        $b = $d;
      }

      $j++;
      $i++;

      print "  if (length == $j)\n    goto bail;\n";
    }

    # move to next block
    if ($i < $block) {
      print "  in += sizeof($type);\n";
      $inittmp = 1;
    }
    # or reached the end?
    else {
      print "bail:\n";
      print "  return ((length * $bits) + 7) / 8;\n";
      last;
    }
  }
  print "}\n\n";
}

# print the prologue
print <<EOL;
/* This file was generated.
 *
 * The pack/unpack routines will not work on big-endian architectures.
 */

static uint32_t
pack0_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  (void)in;
  (void)out;
  return 0;
}

static uint32_t
pack0_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  (void)in;
  (void)out;
  return 0;
}

static uint32_t
pack0_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  (void)in;
  (void)out;
  return 0;
}

static uint32_t
unpack0_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  int k;
  (void)in;
  for (k = 0; k < 32; ++k) {
    out[k] = base;
  }
  return 0;
}

static uint32_t
unpack0_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  int k;
  (void)in;
  for (k = 0; k < 16; ++k) {
    out[k] = base;
  }
  return 0;
}

static uint32_t
unpack0_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  int k;
  (void)in;
  for (k = 0; k < 8; ++k) {
    out[k] = base;
  }
  return 0;
}

static uint32_t
pack0_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  (void)base;
  (void)in;
  (void)out;
  (void)length;
  return 0;
}

static uint32_t
unpack0_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t k;
  (void)in;
  for (k = 0; k < length; ++k) {
    out[k] = base;
  }
  return 0;
}

static uint32_t
linsearch0_32(uint32_t base, const uint8_t *in, uint32_t value, int *found) {
  (void)in;
  if (base == value)
    *found = 0;
  return 0;
}

static uint32_t
linsearch0_16(uint32_t base, const uint8_t *in, uint32_t value, int *found) {
  (void)in;
  if (base == value)
    *found = 0;
  return 0;
}

static uint32_t
linsearch0_8(uint32_t base, const uint8_t *in, uint32_t value, int *found) {
  (void)in;
  if (base == value)
    *found = 0;
  return 0;
}

static uint32_t
linsearch0_x(uint32_t base, const uint8_t *in, uint32_t length, uint32_t value,
                int *found) {
  (void)in;
  if (base == value && length > 0)
    *found = 0;
  return 0;
}

EOL

for (my $b = 1; $b <= 32; $b++) {
  generate_pack($b, 32);
  generate_unpack($b, 32);
}

generate_packer_array('pack', 32, 'for_packfunc_t');
generate_packer_array('unpack', 32, 'for_unpackfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_pack($b, 16);
  generate_unpack($b, 16);
}

generate_packer_array('pack', 16, 'for_packfunc_t');
generate_packer_array('unpack', 16, 'for_unpackfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_pack($b, 8);
  generate_unpack($b, 8);
}

generate_packer_array('pack', 8, 'for_packfunc_t');
generate_packer_array('unpack', 8, 'for_unpackfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_packx("pack$b" . '_x', 'uint32_t', 32, $b);
  generate_unpackx("unpack$b" . '_x', 'uint32_t', 32, $b);
}

generate_packer_array('pack', 'x', 'for_packxfunc_t');
generate_packer_array('unpack', 'x', 'for_unpackxfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_linsearch($b, 32);
}

generate_packer_array('linsearch', 32, 'for_linsearchfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_linsearch($b, 16);
}

generate_packer_array('linsearch', 16, 'for_linsearchfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_linsearch($b, 8);
}

generate_packer_array('linsearch',  8, 'for_linsearchfunc_t');

for (my $b = 1; $b <= 32; $b++) {
  generate_linsearchx("linsearch$b" . '_x', 'uint32_t', 32, $b);
}

generate_packer_array('linsearch', 'x', 'for_linsearchxfunc_t');

