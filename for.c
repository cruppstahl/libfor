/*
 * Copyright (C) 2005-2015 Christoph Rupp (chris@crupp.de).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "for.h"

#include <assert.h>
#include <string.h> /* for memcpy */

typedef uint32_t (*for_unpackfunc_t) (uint32_t, const uint8_t *, uint32_t *);
typedef uint32_t (*for_packfunc_t)   (uint32_t, const uint32_t *, uint8_t *);
typedef uint32_t (*for_unpackxfunc_t) (uint32_t, const uint8_t *, uint32_t *,
                        uint32_t);
typedef uint32_t (*for_packxfunc_t)   (uint32_t, const uint32_t *, uint8_t *,
                        uint32_t);

/* include the generated file */
#include "for-gen.c"

static inline uint32_t
bits(const uint32_t v)
{
  return v == 0 ? 0 : 32 - __builtin_clz(v);
}

uint32_t
for_compressed_size_bits(uint32_t length, uint32_t bits)
{
  uint32_t c = 0;

  assert(bits <= 32);

  /* each block is byte-aligned */
  while (length > 32) {
    c += (32 * bits) + 7 / 8;
    length -= 32;
  }

  while (length > 16) {
    c += (16 * bits) + 7 / 8;
    length -= 16;
  }

  while (length > 8) {
    c += (8 * bits) + 7 / 8;
    length -= 8;
  }

  return c + ((length * bits) + 7) / 8;
}

uint32_t
for_compressed_size_unsorted(const uint32_t *in, uint32_t length)
{
  uint32_t i, b, m, M;

  if (length == 0)
    return 0;

  /* calculate min/max */
  m = in[0];
  M = m;

  for (i = 1; i < length; i++) {
    if (in[i] < m)
      m = in[i];
    if (in[i] > M)
      M = in[i];
  }

  /* calculate the bits */
  b = bits(M - m);

  return 8 + for_compressed_size_bits(length, b);
}

uint32_t
for_compressed_size_sorted(const uint32_t *in, uint32_t length)
{
  uint32_t b, m, M;

  if (length == 0)
    return 0;

  /* calculate min/max */
  m = in[0];
  M = in[length - 1];

  /* calculate the bits */
  b = bits(M - m);

  return 8 + for_compressed_size_bits(length, b);
}

uint32_t
for_compress_bits(const uint32_t *in, uint8_t *out, uint32_t length,
                uint32_t base, uint32_t bits)
{
  uint32_t i = 0;
  uint32_t written = 0;

  assert(bits <= 32);

  for (; i + 32 <= length; i += 32, in += 32)
    written += for_pack32[bits](base, in, out + written);

  for (; i + 16 <= length; i += 16, in += 16)
    written += for_pack16[bits](base, in, out + written);

  for (; i + 8 <= length; i += 8, in += 8)
    written += for_pack8[bits](base, in, out + written);

  return written + for_packx[bits](base, in, out + written, length - i);
}

uint32_t
for_compress_unsorted(const uint32_t *in, uint8_t *out, uint32_t length)
{
  uint32_t i, b, m, M;

  if (length == 0)
    return 0;

  /* calculate min/max */
  m = in[0];
  M = m;

  for (i = 1; i < length; i++) {
    if (in[i] < m)
      m = in[i];
    if (in[i] > M)
      M = in[i];
  }

  /* calculate the bits */
  b = bits(M - m);

  /* store m and M */
  *(uint32_t *)(out + 0) = m;
  *(uint32_t *)(out + 4) = M;
  return 8 + for_compress_bits(in, out + 8, length, m, b);
}

uint32_t
for_compress_sorted(const uint32_t *in, uint8_t *out, uint32_t length)
{
  uint32_t m, M, b;

  if (length == 0)
    return 0;

  /* fetch min/max */
  m = in[0];
  M = in[length - 1];

  /* calculate the bits */
  b = bits(M - m);

  /* store m and M */
  *(uint32_t *)(out + 0) = m;
  *(uint32_t *)(out + 4) = M;
  return 8 + for_compress_bits(in, out + 8, length, m, b);
}

uint32_t
for_uncompress_bits(const uint8_t *in, uint32_t *out, uint32_t length,
                uint32_t base, uint32_t bits)
{
  uint32_t i = 0;
  const uint8_t *bin = in;

  assert(bits <= 32);

  for (; i + 32 <= length; i += 32, out += 32)
    in += for_unpack32[bits](base, in, out);

  for (; i + 16 <= length; i += 16, out += 16)
    in += for_unpack16[bits](base, in, out);

  for (; i + 8 <= length; i += 8, out += 8)
    in += for_unpack8[bits](base, in, out);

  return (in - bin) + for_unpackx[bits](base, in, out, length - i);
}

uint32_t
for_uncompress(const uint8_t *in, uint32_t *out, uint32_t length)
{
  uint32_t m, M, b;

  if (length == 0)
    return 0;

  /* read min/max */
  m = *(uint32_t *)(in + 0);
  M = *(uint32_t *)(in + 4);

  /* calculate the bits */
  b = bits(M - m);

  return 8 + for_uncompress_bits(in + 8, out, length, m, b);
}

