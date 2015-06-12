/* This file was generated.
 *
 * The pack/unpack routines will not work on big-endian architectures.
 */

static uint32_t
pack0_n(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  (void)in;
  (void)out;
  return (0);
}

static uint32_t
unpack0_n(uint32_t base, const uint8_t *in, uint32_t *out) {
  int k;
  (void)in;
  for (k = 0; k < 32; ++k) {
    out[k] = base;
  }
  return (0);
}

static uint32_t
pack0_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  (void)base;
  (void)in;
  (void)out;
  (void)length;
  return (0);
}

static uint32_t
unpack0_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t k;
  (void)in;
  for (k = 0; k < length; ++k) {
    out[k] = base;
  }
  return (0);
}

static uint32_t
pack1_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 1;
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 3;
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 5;
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 7;
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 9;
  tmp |= (*(in + 10) - base) << 10;
  tmp |= (*(in + 11) - base) << 11;
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 13;
  tmp |= (*(in + 14) - base) << 14;
  tmp |= (*(in + 15) - base) << 15;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 17;
  tmp |= (*(in + 18) - base) << 18;
  tmp |= (*(in + 19) - base) << 19;
  tmp |= (*(in + 20) - base) << 20;
  tmp |= (*(in + 21) - base) << 21;
  tmp |= (*(in + 22) - base) << 22;
  tmp |= (*(in + 23) - base) << 23;
  tmp |= (*(in + 24) - base) << 24;
  tmp |= (*(in + 25) - base) << 25;
  tmp |= (*(in + 26) - base) << 26;
  tmp |= (*(in + 27) - base) << 27;
  tmp |= (*(in + 28) - base) << 28;
  tmp |= (*(in + 29) - base) << 29;
  tmp |= (*(in + 30) - base) << 30;
  tmp |= (*(in + 31) - base) << 31;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 4) */
  *(uint32_t *)out = tmp;
  return (4);
}

static uint32_t
unpack1_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1);
  *(out + 1)  = base + ((tmp >> 1) & 1);
  *(out + 2)  = base + ((tmp >> 2) & 1);
  *(out + 3)  = base + ((tmp >> 3) & 1);
  *(out + 4)  = base + ((tmp >> 4) & 1);
  *(out + 5)  = base + ((tmp >> 5) & 1);
  *(out + 6)  = base + ((tmp >> 6) & 1);
  *(out + 7)  = base + ((tmp >> 7) & 1);
  *(out + 8)  = base + ((tmp >> 8) & 1);
  *(out + 9)  = base + ((tmp >> 9) & 1);
  *(out + 10)  = base + ((tmp >> 10) & 1);
  *(out + 11)  = base + ((tmp >> 11) & 1);
  *(out + 12)  = base + ((tmp >> 12) & 1);
  *(out + 13)  = base + ((tmp >> 13) & 1);
  *(out + 14)  = base + ((tmp >> 14) & 1);
  *(out + 15)  = base + ((tmp >> 15) & 1);
  *(out + 16)  = base + ((tmp >> 16) & 1);
  *(out + 17)  = base + ((tmp >> 17) & 1);
  *(out + 18)  = base + ((tmp >> 18) & 1);
  *(out + 19)  = base + ((tmp >> 19) & 1);
  *(out + 20)  = base + ((tmp >> 20) & 1);
  *(out + 21)  = base + ((tmp >> 21) & 1);
  *(out + 22)  = base + ((tmp >> 22) & 1);
  *(out + 23)  = base + ((tmp >> 23) & 1);
  *(out + 24)  = base + ((tmp >> 24) & 1);
  *(out + 25)  = base + ((tmp >> 25) & 1);
  *(out + 26)  = base + ((tmp >> 26) & 1);
  *(out + 27)  = base + ((tmp >> 27) & 1);
  *(out + 28)  = base + ((tmp >> 28) & 1);
  *(out + 29)  = base + ((tmp >> 29) & 1);
  *(out + 30)  = base + ((tmp >> 30) & 1);
  *(out + 31)  = base + ((tmp >> 31) & 1);
  /* remaining: 0 bits */
  return (4);
}

static uint32_t
pack2_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 2;
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 6;
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 10;
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 14;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 18;
  tmp |= (*(in + 10) - base) << 20;
  tmp |= (*(in + 11) - base) << 22;
  tmp |= (*(in + 12) - base) << 24;
  tmp |= (*(in + 13) - base) << 26;
  tmp |= (*(in + 14) - base) << 28;
  tmp |= (*(in + 15) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 2;
  tmp |= (*(in + 18) - base) << 4;
  tmp |= (*(in + 19) - base) << 6;
  tmp |= (*(in + 20) - base) << 8;
  tmp |= (*(in + 21) - base) << 10;
  tmp |= (*(in + 22) - base) << 12;
  tmp |= (*(in + 23) - base) << 14;
  tmp |= (*(in + 24) - base) << 16;
  tmp |= (*(in + 25) - base) << 18;
  tmp |= (*(in + 26) - base) << 20;
  tmp |= (*(in + 27) - base) << 22;
  tmp |= (*(in + 28) - base) << 24;
  tmp |= (*(in + 29) - base) << 26;
  tmp |= (*(in + 30) - base) << 28;
  tmp |= (*(in + 31) - base) << 30;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 8) */
  *(uint32_t *)out = tmp;
  return (8);
}

static uint32_t
unpack2_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 2) & 3);
  *(out + 2)  = base + ((tmp >> 4) & 3);
  *(out + 3)  = base + ((tmp >> 6) & 3);
  *(out + 4)  = base + ((tmp >> 8) & 3);
  *(out + 5)  = base + ((tmp >> 10) & 3);
  *(out + 6)  = base + ((tmp >> 12) & 3);
  *(out + 7)  = base + ((tmp >> 14) & 3);
  *(out + 8)  = base + ((tmp >> 16) & 3);
  *(out + 9)  = base + ((tmp >> 18) & 3);
  *(out + 10)  = base + ((tmp >> 20) & 3);
  *(out + 11)  = base + ((tmp >> 22) & 3);
  *(out + 12)  = base + ((tmp >> 24) & 3);
  *(out + 13)  = base + ((tmp >> 26) & 3);
  *(out + 14)  = base + ((tmp >> 28) & 3);
  *(out + 15)  = base + ((tmp >> 30) & 3);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 16)  = base + ((tmp >> 0) & 3);
  *(out + 17)  = base + ((tmp >> 2) & 3);
  *(out + 18)  = base + ((tmp >> 4) & 3);
  *(out + 19)  = base + ((tmp >> 6) & 3);
  *(out + 20)  = base + ((tmp >> 8) & 3);
  *(out + 21)  = base + ((tmp >> 10) & 3);
  *(out + 22)  = base + ((tmp >> 12) & 3);
  *(out + 23)  = base + ((tmp >> 14) & 3);
  *(out + 24)  = base + ((tmp >> 16) & 3);
  *(out + 25)  = base + ((tmp >> 18) & 3);
  *(out + 26)  = base + ((tmp >> 20) & 3);
  *(out + 27)  = base + ((tmp >> 22) & 3);
  *(out + 28)  = base + ((tmp >> 24) & 3);
  *(out + 29)  = base + ((tmp >> 26) & 3);
  *(out + 30)  = base + ((tmp >> 28) & 3);
  *(out + 31)  = base + ((tmp >> 30) & 3);
  /* remaining: 0 bits */
  return (8);
}

static uint32_t
pack3_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 3;
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 9;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 15;
  tmp |= (*(in + 6) - base) << 18;
  tmp |= (*(in + 7) - base) << 21;
  tmp |= (*(in + 8) - base) << 24;
  tmp |= (*(in + 9) - base) << 27;
  tmp |= (*(in + 10) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 10) - base) >> (3 - 1);
  tmp |= (*(in + 11) - base) << 1;
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 7;
  tmp |= (*(in + 14) - base) << 10;
  tmp |= (*(in + 15) - base) << 13;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 19;
  tmp |= (*(in + 18) - base) << 22;
  tmp |= (*(in + 19) - base) << 25;
  tmp |= (*(in + 20) - base) << 28;
  tmp |= (*(in + 21) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 21) - base) >> (3 - 2);
  tmp |= (*(in + 22) - base) << 2;
  tmp |= (*(in + 23) - base) << 5;
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 11;
  tmp |= (*(in + 26) - base) << 14;
  tmp |= (*(in + 27) - base) << 17;
  tmp |= (*(in + 28) - base) << 20;
  tmp |= (*(in + 29) - base) << 23;
  tmp |= (*(in + 30) - base) << 26;
  tmp |= (*(in + 31) - base) << 29;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 12) */
  *(uint32_t *)out = tmp;
  return (12);
}

static uint32_t
unpack3_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 3) & 7);
  *(out + 2)  = base + ((tmp >> 6) & 7);
  *(out + 3)  = base + ((tmp >> 9) & 7);
  *(out + 4)  = base + ((tmp >> 12) & 7);
  *(out + 5)  = base + ((tmp >> 15) & 7);
  *(out + 6)  = base + ((tmp >> 18) & 7);
  *(out + 7)  = base + ((tmp >> 21) & 7);
  *(out + 8)  = base + ((tmp >> 24) & 7);
  *(out + 9)  = base + ((tmp >> 27) & 7);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 1)) << (3 - 1);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 1) & 7);
  *(out + 12)  = base + ((tmp >> 4) & 7);
  *(out + 13)  = base + ((tmp >> 7) & 7);
  *(out + 14)  = base + ((tmp >> 10) & 7);
  *(out + 15)  = base + ((tmp >> 13) & 7);
  *(out + 16)  = base + ((tmp >> 16) & 7);
  *(out + 17)  = base + ((tmp >> 19) & 7);
  *(out + 18)  = base + ((tmp >> 22) & 7);
  *(out + 19)  = base + ((tmp >> 25) & 7);
  *(out + 20)  = base + ((tmp >> 28) & 7);
  *(out + 21)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 2)) << (3 - 2);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 2) & 7);
  *(out + 23)  = base + ((tmp >> 5) & 7);
  *(out + 24)  = base + ((tmp >> 8) & 7);
  *(out + 25)  = base + ((tmp >> 11) & 7);
  *(out + 26)  = base + ((tmp >> 14) & 7);
  *(out + 27)  = base + ((tmp >> 17) & 7);
  *(out + 28)  = base + ((tmp >> 20) & 7);
  *(out + 29)  = base + ((tmp >> 23) & 7);
  *(out + 30)  = base + ((tmp >> 26) & 7);
  *(out + 31)  = base + ((tmp >> 29) & 7);
  /* remaining: 0 bits */
  return (12);
}

static uint32_t
pack4_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 4;
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 12;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 20;
  tmp |= (*(in + 6) - base) << 24;
  tmp |= (*(in + 7) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 4;
  tmp |= (*(in + 10) - base) << 8;
  tmp |= (*(in + 11) - base) << 12;
  tmp |= (*(in + 12) - base) << 16;
  tmp |= (*(in + 13) - base) << 20;
  tmp |= (*(in + 14) - base) << 24;
  tmp |= (*(in + 15) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 4;
  tmp |= (*(in + 18) - base) << 8;
  tmp |= (*(in + 19) - base) << 12;
  tmp |= (*(in + 20) - base) << 16;
  tmp |= (*(in + 21) - base) << 20;
  tmp |= (*(in + 22) - base) << 24;
  tmp |= (*(in + 23) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 4;
  tmp |= (*(in + 26) - base) << 8;
  tmp |= (*(in + 27) - base) << 12;
  tmp |= (*(in + 28) - base) << 16;
  tmp |= (*(in + 29) - base) << 20;
  tmp |= (*(in + 30) - base) << 24;
  tmp |= (*(in + 31) - base) << 28;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 16) */
  *(uint32_t *)out = tmp;
  return (16);
}

static uint32_t
unpack4_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 4) & 15);
  *(out + 2)  = base + ((tmp >> 8) & 15);
  *(out + 3)  = base + ((tmp >> 12) & 15);
  *(out + 4)  = base + ((tmp >> 16) & 15);
  *(out + 5)  = base + ((tmp >> 20) & 15);
  *(out + 6)  = base + ((tmp >> 24) & 15);
  *(out + 7)  = base + ((tmp >> 28) & 15);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 8)  = base + ((tmp >> 0) & 15);
  *(out + 9)  = base + ((tmp >> 4) & 15);
  *(out + 10)  = base + ((tmp >> 8) & 15);
  *(out + 11)  = base + ((tmp >> 12) & 15);
  *(out + 12)  = base + ((tmp >> 16) & 15);
  *(out + 13)  = base + ((tmp >> 20) & 15);
  *(out + 14)  = base + ((tmp >> 24) & 15);
  *(out + 15)  = base + ((tmp >> 28) & 15);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 16)  = base + ((tmp >> 0) & 15);
  *(out + 17)  = base + ((tmp >> 4) & 15);
  *(out + 18)  = base + ((tmp >> 8) & 15);
  *(out + 19)  = base + ((tmp >> 12) & 15);
  *(out + 20)  = base + ((tmp >> 16) & 15);
  *(out + 21)  = base + ((tmp >> 20) & 15);
  *(out + 22)  = base + ((tmp >> 24) & 15);
  *(out + 23)  = base + ((tmp >> 28) & 15);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 24)  = base + ((tmp >> 0) & 15);
  *(out + 25)  = base + ((tmp >> 4) & 15);
  *(out + 26)  = base + ((tmp >> 8) & 15);
  *(out + 27)  = base + ((tmp >> 12) & 15);
  *(out + 28)  = base + ((tmp >> 16) & 15);
  *(out + 29)  = base + ((tmp >> 20) & 15);
  *(out + 30)  = base + ((tmp >> 24) & 15);
  *(out + 31)  = base + ((tmp >> 28) & 15);
  /* remaining: 0 bits */
  return (16);
}

static uint32_t
pack5_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 5;
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 15;
  tmp |= (*(in + 4) - base) << 20;
  tmp |= (*(in + 5) - base) << 25;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 6) - base) >> (5 - 3);
  tmp |= (*(in + 7) - base) << 3;
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 13;
  tmp |= (*(in + 10) - base) << 18;
  tmp |= (*(in + 11) - base) << 23;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 12) - base) >> (5 - 1);
  tmp |= (*(in + 13) - base) << 1;
  tmp |= (*(in + 14) - base) << 6;
  tmp |= (*(in + 15) - base) << 11;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 21;
  tmp |= (*(in + 18) - base) << 26;
  tmp |= (*(in + 19) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 19) - base) >> (5 - 4);
  tmp |= (*(in + 20) - base) << 4;
  tmp |= (*(in + 21) - base) << 9;
  tmp |= (*(in + 22) - base) << 14;
  tmp |= (*(in + 23) - base) << 19;
  tmp |= (*(in + 24) - base) << 24;
  tmp |= (*(in + 25) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 25) - base) >> (5 - 2);
  tmp |= (*(in + 26) - base) << 2;
  tmp |= (*(in + 27) - base) << 7;
  tmp |= (*(in + 28) - base) << 12;
  tmp |= (*(in + 29) - base) << 17;
  tmp |= (*(in + 30) - base) << 22;
  tmp |= (*(in + 31) - base) << 27;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 20) */
  *(uint32_t *)out = tmp;
  return (20);
}

static uint32_t
unpack5_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 31);
  *(out + 1)  = base + ((tmp >> 5) & 31);
  *(out + 2)  = base + ((tmp >> 10) & 31);
  *(out + 3)  = base + ((tmp >> 15) & 31);
  *(out + 4)  = base + ((tmp >> 20) & 31);
  *(out + 5)  = base + ((tmp >> 25) & 31);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 31);
  *(out + 8)  = base + ((tmp >> 8) & 31);
  *(out + 9)  = base + ((tmp >> 13) & 31);
  *(out + 10)  = base + ((tmp >> 18) & 31);
  *(out + 11)  = base + ((tmp >> 23) & 31);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 1)) << (5 - 1);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 1) & 31);
  *(out + 14)  = base + ((tmp >> 6) & 31);
  *(out + 15)  = base + ((tmp >> 11) & 31);
  *(out + 16)  = base + ((tmp >> 16) & 31);
  *(out + 17)  = base + ((tmp >> 21) & 31);
  *(out + 18)  = base + ((tmp >> 26) & 31);
  *(out + 19)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (5 - 4);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 4) & 31);
  *(out + 21)  = base + ((tmp >> 9) & 31);
  *(out + 22)  = base + ((tmp >> 14) & 31);
  *(out + 23)  = base + ((tmp >> 19) & 31);
  *(out + 24)  = base + ((tmp >> 24) & 31);
  *(out + 25)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 2)) << (5 - 2);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 2) & 31);
  *(out + 27)  = base + ((tmp >> 7) & 31);
  *(out + 28)  = base + ((tmp >> 12) & 31);
  *(out + 29)  = base + ((tmp >> 17) & 31);
  *(out + 30)  = base + ((tmp >> 22) & 31);
  *(out + 31)  = base + ((tmp >> 27) & 31);
  /* remaining: 0 bits */
  return (20);
}

static uint32_t
pack6_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 6;
  tmp |= (*(in + 2) - base) << 12;
  tmp |= (*(in + 3) - base) << 18;
  tmp |= (*(in + 4) - base) << 24;
  tmp |= (*(in + 5) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 5) - base) >> (6 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 10;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 22;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 10) - base) >> (6 - 2);
  tmp |= (*(in + 11) - base) << 2;
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 14;
  tmp |= (*(in + 14) - base) << 20;
  tmp |= (*(in + 15) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 6;
  tmp |= (*(in + 18) - base) << 12;
  tmp |= (*(in + 19) - base) << 18;
  tmp |= (*(in + 20) - base) << 24;
  tmp |= (*(in + 21) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 21) - base) >> (6 - 4);
  tmp |= (*(in + 22) - base) << 4;
  tmp |= (*(in + 23) - base) << 10;
  tmp |= (*(in + 24) - base) << 16;
  tmp |= (*(in + 25) - base) << 22;
  tmp |= (*(in + 26) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 26) - base) >> (6 - 2);
  tmp |= (*(in + 27) - base) << 2;
  tmp |= (*(in + 28) - base) << 8;
  tmp |= (*(in + 29) - base) << 14;
  tmp |= (*(in + 30) - base) << 20;
  tmp |= (*(in + 31) - base) << 26;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 24) */
  *(uint32_t *)out = tmp;
  return (24);
}

static uint32_t
unpack6_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 63);
  *(out + 1)  = base + ((tmp >> 6) & 63);
  *(out + 2)  = base + ((tmp >> 12) & 63);
  *(out + 3)  = base + ((tmp >> 18) & 63);
  *(out + 4)  = base + ((tmp >> 24) & 63);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 63);
  *(out + 7)  = base + ((tmp >> 10) & 63);
  *(out + 8)  = base + ((tmp >> 16) & 63);
  *(out + 9)  = base + ((tmp >> 22) & 63);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 2) & 63);
  *(out + 12)  = base + ((tmp >> 8) & 63);
  *(out + 13)  = base + ((tmp >> 14) & 63);
  *(out + 14)  = base + ((tmp >> 20) & 63);
  *(out + 15)  = base + ((tmp >> 26) & 63);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 16)  = base + ((tmp >> 0) & 63);
  *(out + 17)  = base + ((tmp >> 6) & 63);
  *(out + 18)  = base + ((tmp >> 12) & 63);
  *(out + 19)  = base + ((tmp >> 18) & 63);
  *(out + 20)  = base + ((tmp >> 24) & 63);
  *(out + 21)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 4) & 63);
  *(out + 23)  = base + ((tmp >> 10) & 63);
  *(out + 24)  = base + ((tmp >> 16) & 63);
  *(out + 25)  = base + ((tmp >> 22) & 63);
  *(out + 26)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 2) & 63);
  *(out + 28)  = base + ((tmp >> 8) & 63);
  *(out + 29)  = base + ((tmp >> 14) & 63);
  *(out + 30)  = base + ((tmp >> 20) & 63);
  *(out + 31)  = base + ((tmp >> 26) & 63);
  /* remaining: 0 bits */
  return (24);
}

static uint32_t
pack7_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 7;
  tmp |= (*(in + 2) - base) << 14;
  tmp |= (*(in + 3) - base) << 21;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) >> (7 - 3);
  tmp |= (*(in + 5) - base) << 3;
  tmp |= (*(in + 6) - base) << 10;
  tmp |= (*(in + 7) - base) << 17;
  tmp |= (*(in + 8) - base) << 24;
  tmp |= (*(in + 9) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 9) - base) >> (7 - 6);
  tmp |= (*(in + 10) - base) << 6;
  tmp |= (*(in + 11) - base) << 13;
  tmp |= (*(in + 12) - base) << 20;
  tmp |= (*(in + 13) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 13) - base) >> (7 - 2);
  tmp |= (*(in + 14) - base) << 2;
  tmp |= (*(in + 15) - base) << 9;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 23;
  tmp |= (*(in + 18) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 18) - base) >> (7 - 5);
  tmp |= (*(in + 19) - base) << 5;
  tmp |= (*(in + 20) - base) << 12;
  tmp |= (*(in + 21) - base) << 19;
  tmp |= (*(in + 22) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 22) - base) >> (7 - 1);
  tmp |= (*(in + 23) - base) << 1;
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 15;
  tmp |= (*(in + 26) - base) << 22;
  tmp |= (*(in + 27) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 27) - base) >> (7 - 4);
  tmp |= (*(in + 28) - base) << 4;
  tmp |= (*(in + 29) - base) << 11;
  tmp |= (*(in + 30) - base) << 18;
  tmp |= (*(in + 31) - base) << 25;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 28) */
  *(uint32_t *)out = tmp;
  return (28);
}

static uint32_t
unpack7_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 127);
  *(out + 1)  = base + ((tmp >> 7) & 127);
  *(out + 2)  = base + ((tmp >> 14) & 127);
  *(out + 3)  = base + ((tmp >> 21) & 127);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 127);
  *(out + 6)  = base + ((tmp >> 10) & 127);
  *(out + 7)  = base + ((tmp >> 17) & 127);
  *(out + 8)  = base + ((tmp >> 24) & 127);
  *(out + 9)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (7 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 127);
  *(out + 11)  = base + ((tmp >> 13) & 127);
  *(out + 12)  = base + ((tmp >> 20) & 127);
  *(out + 13)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (7 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 127);
  *(out + 15)  = base + ((tmp >> 9) & 127);
  *(out + 16)  = base + ((tmp >> 16) & 127);
  *(out + 17)  = base + ((tmp >> 23) & 127);
  *(out + 18)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 5)) << (7 - 5);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 5) & 127);
  *(out + 20)  = base + ((tmp >> 12) & 127);
  *(out + 21)  = base + ((tmp >> 19) & 127);
  *(out + 22)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 1)) << (7 - 1);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 1) & 127);
  *(out + 24)  = base + ((tmp >> 8) & 127);
  *(out + 25)  = base + ((tmp >> 15) & 127);
  *(out + 26)  = base + ((tmp >> 22) & 127);
  *(out + 27)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (7 - 4);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 4) & 127);
  *(out + 29)  = base + ((tmp >> 11) & 127);
  *(out + 30)  = base + ((tmp >> 18) & 127);
  *(out + 31)  = base + ((tmp >> 25) & 127);
  /* remaining: 0 bits */
  return (28);
}

static uint32_t
pack8_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 8;
  tmp |= (*(in + 6) - base) << 16;
  tmp |= (*(in + 7) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 8;
  tmp |= (*(in + 10) - base) << 16;
  tmp |= (*(in + 11) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 8;
  tmp |= (*(in + 14) - base) << 16;
  tmp |= (*(in + 15) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 8;
  tmp |= (*(in + 18) - base) << 16;
  tmp |= (*(in + 19) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 20) - base) << 0;
  tmp |= (*(in + 21) - base) << 8;
  tmp |= (*(in + 22) - base) << 16;
  tmp |= (*(in + 23) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 8;
  tmp |= (*(in + 26) - base) << 16;
  tmp |= (*(in + 27) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 28) - base) << 0;
  tmp |= (*(in + 29) - base) << 8;
  tmp |= (*(in + 30) - base) << 16;
  tmp |= (*(in + 31) - base) << 24;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 32) */
  *(uint32_t *)out = tmp;
  return (32);
}

static uint32_t
unpack8_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 255);
  *(out + 1)  = base + ((tmp >> 8) & 255);
  *(out + 2)  = base + ((tmp >> 16) & 255);
  *(out + 3)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 4)  = base + ((tmp >> 0) & 255);
  *(out + 5)  = base + ((tmp >> 8) & 255);
  *(out + 6)  = base + ((tmp >> 16) & 255);
  *(out + 7)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 8)  = base + ((tmp >> 0) & 255);
  *(out + 9)  = base + ((tmp >> 8) & 255);
  *(out + 10)  = base + ((tmp >> 16) & 255);
  *(out + 11)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 12)  = base + ((tmp >> 0) & 255);
  *(out + 13)  = base + ((tmp >> 8) & 255);
  *(out + 14)  = base + ((tmp >> 16) & 255);
  *(out + 15)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 16)  = base + ((tmp >> 0) & 255);
  *(out + 17)  = base + ((tmp >> 8) & 255);
  *(out + 18)  = base + ((tmp >> 16) & 255);
  *(out + 19)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 20)  = base + ((tmp >> 0) & 255);
  *(out + 21)  = base + ((tmp >> 8) & 255);
  *(out + 22)  = base + ((tmp >> 16) & 255);
  *(out + 23)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 24)  = base + ((tmp >> 0) & 255);
  *(out + 25)  = base + ((tmp >> 8) & 255);
  *(out + 26)  = base + ((tmp >> 16) & 255);
  *(out + 27)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 28)  = base + ((tmp >> 0) & 255);
  *(out + 29)  = base + ((tmp >> 8) & 255);
  *(out + 30)  = base + ((tmp >> 16) & 255);
  *(out + 31)  = base + ((tmp >> 24) & 255);
  /* remaining: 0 bits */
  return (32);
}

static uint32_t
pack9_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 9;
  tmp |= (*(in + 2) - base) << 18;
  tmp |= (*(in + 3) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (9 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 13;
  tmp |= (*(in + 6) - base) << 22;
  tmp |= (*(in + 7) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 7) - base) >> (9 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 17;
  tmp |= (*(in + 10) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 10) - base) >> (9 - 3);
  tmp |= (*(in + 11) - base) << 3;
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 21;
  tmp |= (*(in + 14) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 14) - base) >> (9 - 7);
  tmp |= (*(in + 15) - base) << 7;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 17) - base) >> (9 - 2);
  tmp |= (*(in + 18) - base) << 2;
  tmp |= (*(in + 19) - base) << 11;
  tmp |= (*(in + 20) - base) << 20;
  tmp |= (*(in + 21) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 21) - base) >> (9 - 6);
  tmp |= (*(in + 22) - base) << 6;
  tmp |= (*(in + 23) - base) << 15;
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 24) - base) >> (9 - 1);
  tmp |= (*(in + 25) - base) << 1;
  tmp |= (*(in + 26) - base) << 10;
  tmp |= (*(in + 27) - base) << 19;
  tmp |= (*(in + 28) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 28) - base) >> (9 - 5);
  tmp |= (*(in + 29) - base) << 5;
  tmp |= (*(in + 30) - base) << 14;
  tmp |= (*(in + 31) - base) << 23;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 36) */
  *(uint32_t *)out = tmp;
  return (36);
}

static uint32_t
unpack9_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 511);
  *(out + 1)  = base + ((tmp >> 9) & 511);
  *(out + 2)  = base + ((tmp >> 18) & 511);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 511);
  *(out + 5)  = base + ((tmp >> 13) & 511);
  *(out + 6)  = base + ((tmp >> 22) & 511);
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 511);
  *(out + 9)  = base + ((tmp >> 17) & 511);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 3)) << (9 - 3);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 3) & 511);
  *(out + 12)  = base + ((tmp >> 12) & 511);
  *(out + 13)  = base + ((tmp >> 21) & 511);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 7)) << (9 - 7);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 7) & 511);
  *(out + 16)  = base + ((tmp >> 16) & 511);
  *(out + 17)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 2)) << (9 - 2);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 2) & 511);
  *(out + 19)  = base + ((tmp >> 11) & 511);
  *(out + 20)  = base + ((tmp >> 20) & 511);
  *(out + 21)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 6)) << (9 - 6);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 6) & 511);
  *(out + 23)  = base + ((tmp >> 15) & 511);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 1)) << (9 - 1);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 1) & 511);
  *(out + 26)  = base + ((tmp >> 10) & 511);
  *(out + 27)  = base + ((tmp >> 19) & 511);
  *(out + 28)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 5)) << (9 - 5);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 5) & 511);
  *(out + 30)  = base + ((tmp >> 14) & 511);
  *(out + 31)  = base + ((tmp >> 23) & 511);
  /* remaining: 0 bits */
  return (36);
}

static uint32_t
pack10_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 10;
  tmp |= (*(in + 2) - base) << 20;
  tmp |= (*(in + 3) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (10 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 18;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 6) - base) >> (10 - 6);
  tmp |= (*(in + 7) - base) << 6;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 9) - base) >> (10 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 14;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 12) - base) >> (10 - 2);
  tmp |= (*(in + 13) - base) << 2;
  tmp |= (*(in + 14) - base) << 12;
  tmp |= (*(in + 15) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 10;
  tmp |= (*(in + 18) - base) << 20;
  tmp |= (*(in + 19) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 19) - base) >> (10 - 8);
  tmp |= (*(in + 20) - base) << 8;
  tmp |= (*(in + 21) - base) << 18;
  tmp |= (*(in + 22) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 22) - base) >> (10 - 6);
  tmp |= (*(in + 23) - base) << 6;
  tmp |= (*(in + 24) - base) << 16;
  tmp |= (*(in + 25) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 25) - base) >> (10 - 4);
  tmp |= (*(in + 26) - base) << 4;
  tmp |= (*(in + 27) - base) << 14;
  tmp |= (*(in + 28) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 28) - base) >> (10 - 2);
  tmp |= (*(in + 29) - base) << 2;
  tmp |= (*(in + 30) - base) << 12;
  tmp |= (*(in + 31) - base) << 22;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 40) */
  *(uint32_t *)out = tmp;
  return (40);
}

static uint32_t
unpack10_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1023);
  *(out + 1)  = base + ((tmp >> 10) & 1023);
  *(out + 2)  = base + ((tmp >> 20) & 1023);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 1023);
  *(out + 5)  = base + ((tmp >> 18) & 1023);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 1023);
  *(out + 8)  = base + ((tmp >> 16) & 1023);
  *(out + 9)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 1023);
  *(out + 11)  = base + ((tmp >> 14) & 1023);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 2) & 1023);
  *(out + 14)  = base + ((tmp >> 12) & 1023);
  *(out + 15)  = base + ((tmp >> 22) & 1023);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 16)  = base + ((tmp >> 0) & 1023);
  *(out + 17)  = base + ((tmp >> 10) & 1023);
  *(out + 18)  = base + ((tmp >> 20) & 1023);
  *(out + 19)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 8) & 1023);
  *(out + 21)  = base + ((tmp >> 18) & 1023);
  *(out + 22)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 6) & 1023);
  *(out + 24)  = base + ((tmp >> 16) & 1023);
  *(out + 25)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 4) & 1023);
  *(out + 27)  = base + ((tmp >> 14) & 1023);
  *(out + 28)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 2) & 1023);
  *(out + 30)  = base + ((tmp >> 12) & 1023);
  *(out + 31)  = base + ((tmp >> 22) & 1023);
  /* remaining: 0 bits */
  return (40);
}

static uint32_t
pack11_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 11;
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (11 - 1);
  tmp |= (*(in + 3) - base) << 1;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (11 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 13;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 8) - base) >> (11 - 3);
  tmp |= (*(in + 9) - base) << 3;
  tmp |= (*(in + 10) - base) << 14;
  tmp |= (*(in + 11) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 11) - base) >> (11 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 15;
  tmp |= (*(in + 14) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 14) - base) >> (11 - 5);
  tmp |= (*(in + 15) - base) << 5;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 17) - base) >> (11 - 6);
  tmp |= (*(in + 18) - base) << 6;
  tmp |= (*(in + 19) - base) << 17;
  tmp |= (*(in + 20) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 20) - base) >> (11 - 7);
  tmp |= (*(in + 21) - base) << 7;
  tmp |= (*(in + 22) - base) << 18;
  tmp |= (*(in + 23) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 23) - base) >> (11 - 8);
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 19;
  tmp |= (*(in + 26) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 26) - base) >> (11 - 9);
  tmp |= (*(in + 27) - base) << 9;
  tmp |= (*(in + 28) - base) << 20;
  tmp |= (*(in + 29) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 29) - base) >> (11 - 10);
  tmp |= (*(in + 30) - base) << 10;
  tmp |= (*(in + 31) - base) << 21;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 44) */
  *(uint32_t *)out = tmp;
  return (44);
}

static uint32_t
unpack11_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2047);
  *(out + 1)  = base + ((tmp >> 11) & 2047);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 2047);
  *(out + 4)  = base + ((tmp >> 12) & 2047);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 2047);
  *(out + 7)  = base + ((tmp >> 13) & 2047);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 3)) << (11 - 3);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 3) & 2047);
  *(out + 10)  = base + ((tmp >> 14) & 2047);
  *(out + 11)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (11 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 2047);
  *(out + 13)  = base + ((tmp >> 15) & 2047);
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 5)) << (11 - 5);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 5) & 2047);
  *(out + 16)  = base + ((tmp >> 16) & 2047);
  *(out + 17)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 6)) << (11 - 6);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 6) & 2047);
  *(out + 19)  = base + ((tmp >> 17) & 2047);
  *(out + 20)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 7)) << (11 - 7);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 7) & 2047);
  *(out + 22)  = base + ((tmp >> 18) & 2047);
  *(out + 23)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (11 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 2047);
  *(out + 25)  = base + ((tmp >> 19) & 2047);
  *(out + 26)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 9)) << (11 - 9);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 9) & 2047);
  *(out + 28)  = base + ((tmp >> 20) & 2047);
  *(out + 29)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 10)) << (11 - 10);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 10) & 2047);
  *(out + 31)  = base + ((tmp >> 21) & 2047);
  /* remaining: 0 bits */
  return (44);
}

static uint32_t
pack12_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 12;
  tmp |= (*(in + 10) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 10) - base) >> (12 - 4);
  tmp |= (*(in + 11) - base) << 4;
  tmp |= (*(in + 12) - base) << 16;
  tmp |= (*(in + 13) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 13) - base) >> (12 - 8);
  tmp |= (*(in + 14) - base) << 8;
  tmp |= (*(in + 15) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 12;
  tmp |= (*(in + 18) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 18) - base) >> (12 - 4);
  tmp |= (*(in + 19) - base) << 4;
  tmp |= (*(in + 20) - base) << 16;
  tmp |= (*(in + 21) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 21) - base) >> (12 - 8);
  tmp |= (*(in + 22) - base) << 8;
  tmp |= (*(in + 23) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 12;
  tmp |= (*(in + 26) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 26) - base) >> (12 - 4);
  tmp |= (*(in + 27) - base) << 4;
  tmp |= (*(in + 28) - base) << 16;
  tmp |= (*(in + 29) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 29) - base) >> (12 - 8);
  tmp |= (*(in + 30) - base) << 8;
  tmp |= (*(in + 31) - base) << 20;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 48) */
  *(uint32_t *)out = tmp;
  return (48);
}

static uint32_t
unpack12_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4095);
  *(out + 1)  = base + ((tmp >> 12) & 4095);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 4095);
  *(out + 4)  = base + ((tmp >> 16) & 4095);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 4095);
  *(out + 7)  = base + ((tmp >> 20) & 4095);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 8)  = base + ((tmp >> 0) & 4095);
  *(out + 9)  = base + ((tmp >> 12) & 4095);
  *(out + 10)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 4) & 4095);
  *(out + 12)  = base + ((tmp >> 16) & 4095);
  *(out + 13)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 8) & 4095);
  *(out + 15)  = base + ((tmp >> 20) & 4095);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 16)  = base + ((tmp >> 0) & 4095);
  *(out + 17)  = base + ((tmp >> 12) & 4095);
  *(out + 18)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 4) & 4095);
  *(out + 20)  = base + ((tmp >> 16) & 4095);
  *(out + 21)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 8) & 4095);
  *(out + 23)  = base + ((tmp >> 20) & 4095);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 24)  = base + ((tmp >> 0) & 4095);
  *(out + 25)  = base + ((tmp >> 12) & 4095);
  *(out + 26)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 4) & 4095);
  *(out + 28)  = base + ((tmp >> 16) & 4095);
  *(out + 29)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 8) & 4095);
  *(out + 31)  = base + ((tmp >> 20) & 4095);
  /* remaining: 0 bits */
  return (48);
}

static uint32_t
pack13_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 13;
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (13 - 7);
  tmp |= (*(in + 3) - base) << 7;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (13 - 1);
  tmp |= (*(in + 5) - base) << 1;
  tmp |= (*(in + 6) - base) << 14;
  tmp |= (*(in + 7) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 7) - base) >> (13 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 9) - base) >> (13 - 2);
  tmp |= (*(in + 10) - base) << 2;
  tmp |= (*(in + 11) - base) << 15;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 12) - base) >> (13 - 9);
  tmp |= (*(in + 13) - base) << 9;
  tmp |= (*(in + 14) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 14) - base) >> (13 - 3);
  tmp |= (*(in + 15) - base) << 3;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 17) - base) >> (13 - 10);
  tmp |= (*(in + 18) - base) << 10;
  tmp |= (*(in + 19) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 19) - base) >> (13 - 4);
  tmp |= (*(in + 20) - base) << 4;
  tmp |= (*(in + 21) - base) << 17;
  tmp |= (*(in + 22) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 22) - base) >> (13 - 11);
  tmp |= (*(in + 23) - base) << 11;
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 24) - base) >> (13 - 5);
  tmp |= (*(in + 25) - base) << 5;
  tmp |= (*(in + 26) - base) << 18;
  tmp |= (*(in + 27) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 27) - base) >> (13 - 12);
  tmp |= (*(in + 28) - base) << 12;
  tmp |= (*(in + 29) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 29) - base) >> (13 - 6);
  tmp |= (*(in + 30) - base) << 6;
  tmp |= (*(in + 31) - base) << 19;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 52) */
  *(uint32_t *)out = tmp;
  return (52);
}

static uint32_t
unpack13_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8191);
  *(out + 1)  = base + ((tmp >> 13) & 8191);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 8191);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 8191);
  *(out + 6)  = base + ((tmp >> 14) & 8191);
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 8191);
  *(out + 9)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (13 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 8191);
  *(out + 11)  = base + ((tmp >> 15) & 8191);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 9)) << (13 - 9);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 9) & 8191);
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 3)) << (13 - 3);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 3) & 8191);
  *(out + 16)  = base + ((tmp >> 16) & 8191);
  *(out + 17)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 10)) << (13 - 10);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 10) & 8191);
  *(out + 19)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (13 - 4);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 4) & 8191);
  *(out + 21)  = base + ((tmp >> 17) & 8191);
  *(out + 22)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 11)) << (13 - 11);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 11) & 8191);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 5)) << (13 - 5);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 5) & 8191);
  *(out + 26)  = base + ((tmp >> 18) & 8191);
  *(out + 27)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 12)) << (13 - 12);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 12) & 8191);
  *(out + 29)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 6)) << (13 - 6);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 6) & 8191);
  *(out + 31)  = base + ((tmp >> 19) & 8191);
  /* remaining: 0 bits */
  return (52);
}

static uint32_t
pack14_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 14;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (14 - 10);
  tmp |= (*(in + 3) - base) << 10;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (14 - 6);
  tmp |= (*(in + 5) - base) << 6;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (14 - 2);
  tmp |= (*(in + 7) - base) << 2;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 9) - base) >> (14 - 12);
  tmp |= (*(in + 10) - base) << 12;
  tmp |= (*(in + 11) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 11) - base) >> (14 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 13) - base) >> (14 - 4);
  tmp |= (*(in + 14) - base) << 4;
  tmp |= (*(in + 15) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 14;
  tmp |= (*(in + 18) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 18) - base) >> (14 - 10);
  tmp |= (*(in + 19) - base) << 10;
  tmp |= (*(in + 20) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 20) - base) >> (14 - 6);
  tmp |= (*(in + 21) - base) << 6;
  tmp |= (*(in + 22) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 22) - base) >> (14 - 2);
  tmp |= (*(in + 23) - base) << 2;
  tmp |= (*(in + 24) - base) << 16;
  tmp |= (*(in + 25) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 25) - base) >> (14 - 12);
  tmp |= (*(in + 26) - base) << 12;
  tmp |= (*(in + 27) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 27) - base) >> (14 - 8);
  tmp |= (*(in + 28) - base) << 8;
  tmp |= (*(in + 29) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 29) - base) >> (14 - 4);
  tmp |= (*(in + 30) - base) << 4;
  tmp |= (*(in + 31) - base) << 18;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 56) */
  *(uint32_t *)out = tmp;
  return (56);
}

static uint32_t
unpack14_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16383);
  *(out + 1)  = base + ((tmp >> 14) & 16383);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 16383);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 16383);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 16383);
  *(out + 8)  = base + ((tmp >> 16) & 16383);
  *(out + 9)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 12) & 16383);
  *(out + 11)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 16383);
  *(out + 13)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 4) & 16383);
  *(out + 15)  = base + ((tmp >> 18) & 16383);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 16)  = base + ((tmp >> 0) & 16383);
  *(out + 17)  = base + ((tmp >> 14) & 16383);
  *(out + 18)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 10) & 16383);
  *(out + 20)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 6) & 16383);
  *(out + 22)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 2) & 16383);
  *(out + 24)  = base + ((tmp >> 16) & 16383);
  *(out + 25)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 12) & 16383);
  *(out + 27)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 8) & 16383);
  *(out + 29)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 4) & 16383);
  *(out + 31)  = base + ((tmp >> 18) & 16383);
  /* remaining: 0 bits */
  return (56);
}

static uint32_t
pack15_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 15;
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (15 - 13);
  tmp |= (*(in + 3) - base) << 13;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (15 - 11);
  tmp |= (*(in + 5) - base) << 11;
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (15 - 9);
  tmp |= (*(in + 7) - base) << 9;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 8) - base) >> (15 - 7);
  tmp |= (*(in + 9) - base) << 7;
  tmp |= (*(in + 10) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 10) - base) >> (15 - 5);
  tmp |= (*(in + 11) - base) << 5;
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 12) - base) >> (15 - 3);
  tmp |= (*(in + 13) - base) << 3;
  tmp |= (*(in + 14) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 14) - base) >> (15 - 1);
  tmp |= (*(in + 15) - base) << 1;
  tmp |= (*(in + 16) - base) << 16;
  tmp |= (*(in + 17) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 17) - base) >> (15 - 14);
  tmp |= (*(in + 18) - base) << 14;
  tmp |= (*(in + 19) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 19) - base) >> (15 - 12);
  tmp |= (*(in + 20) - base) << 12;
  tmp |= (*(in + 21) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 21) - base) >> (15 - 10);
  tmp |= (*(in + 22) - base) << 10;
  tmp |= (*(in + 23) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 23) - base) >> (15 - 8);
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 25) - base) >> (15 - 6);
  tmp |= (*(in + 26) - base) << 6;
  tmp |= (*(in + 27) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 27) - base) >> (15 - 4);
  tmp |= (*(in + 28) - base) << 4;
  tmp |= (*(in + 29) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 29) - base) >> (15 - 2);
  tmp |= (*(in + 30) - base) << 2;
  tmp |= (*(in + 31) - base) << 17;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 60) */
  *(uint32_t *)out = tmp;
  return (60);
}

static uint32_t
unpack15_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32767);
  *(out + 1)  = base + ((tmp >> 15) & 32767);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 32767);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 32767);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 32767);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 7)) << (15 - 7);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 7) & 32767);
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 5)) << (15 - 5);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 5) & 32767);
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 3)) << (15 - 3);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 3) & 32767);
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 1)) << (15 - 1);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 1) & 32767);
  *(out + 16)  = base + ((tmp >> 16) & 32767);
  *(out + 17)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 14)) << (15 - 14);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 14) & 32767);
  *(out + 19)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 12)) << (15 - 12);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 12) & 32767);
  *(out + 21)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 10)) << (15 - 10);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 10) & 32767);
  *(out + 23)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (15 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 32767);
  *(out + 25)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 6)) << (15 - 6);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 6) & 32767);
  *(out + 27)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (15 - 4);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 4) & 32767);
  *(out + 29)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 2)) << (15 - 2);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 2) & 32767);
  *(out + 31)  = base + ((tmp >> 17) & 32767);
  /* remaining: 0 bits */
  return (60);
}

static uint32_t
pack16_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) << 0;
  tmp |= (*(in + 3) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) << 0;
  tmp |= (*(in + 7) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 10) - base) << 0;
  tmp |= (*(in + 11) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 14) - base) << 0;
  tmp |= (*(in + 15) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 18) - base) << 0;
  tmp |= (*(in + 19) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 20) - base) << 0;
  tmp |= (*(in + 21) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 22) - base) << 0;
  tmp |= (*(in + 23) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 26) - base) << 0;
  tmp |= (*(in + 27) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 28) - base) << 0;
  tmp |= (*(in + 29) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 30) - base) << 0;
  tmp |= (*(in + 31) - base) << 16;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 64) */
  *(uint32_t *)out = tmp;
  return (64);
}

static uint32_t
unpack16_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 65535);
  *(out + 1)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 2)  = base + ((tmp >> 0) & 65535);
  *(out + 3)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 4)  = base + ((tmp >> 0) & 65535);
  *(out + 5)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 6)  = base + ((tmp >> 0) & 65535);
  *(out + 7)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 8)  = base + ((tmp >> 0) & 65535);
  *(out + 9)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 10)  = base + ((tmp >> 0) & 65535);
  *(out + 11)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 12)  = base + ((tmp >> 0) & 65535);
  *(out + 13)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 14)  = base + ((tmp >> 0) & 65535);
  *(out + 15)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 36) */
  *(out + 16)  = base + ((tmp >> 0) & 65535);
  *(out + 17)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 18)  = base + ((tmp >> 0) & 65535);
  *(out + 19)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 20)  = base + ((tmp >> 0) & 65535);
  *(out + 21)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 22)  = base + ((tmp >> 0) & 65535);
  *(out + 23)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 24)  = base + ((tmp >> 0) & 65535);
  *(out + 25)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 26)  = base + ((tmp >> 0) & 65535);
  *(out + 27)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 28)  = base + ((tmp >> 0) & 65535);
  *(out + 29)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 30)  = base + ((tmp >> 0) & 65535);
  *(out + 31)  = base + ((tmp >> 16) & 65535);
  /* remaining: 0 bits */
  return (64);
}

static uint32_t
pack17_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (17 - 2);
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (17 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (17 - 6);
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (17 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 9) - base) >> (17 - 10);
  tmp |= (*(in + 10) - base) << 10;
  tmp |= (*(in + 11) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 11) - base) >> (17 - 12);
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 13) - base) >> (17 - 14);
  tmp |= (*(in + 14) - base) << 14;
  tmp |= (*(in + 15) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 15) - base) >> (17 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 16) - base) >> (17 - 1);
  tmp |= (*(in + 17) - base) << 1;
  tmp |= (*(in + 18) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 18) - base) >> (17 - 3);
  tmp |= (*(in + 19) - base) << 3;
  tmp |= (*(in + 20) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 20) - base) >> (17 - 5);
  tmp |= (*(in + 21) - base) << 5;
  tmp |= (*(in + 22) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 22) - base) >> (17 - 7);
  tmp |= (*(in + 23) - base) << 7;
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 24) - base) >> (17 - 9);
  tmp |= (*(in + 25) - base) << 9;
  tmp |= (*(in + 26) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 26) - base) >> (17 - 11);
  tmp |= (*(in + 27) - base) << 11;
  tmp |= (*(in + 28) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 28) - base) >> (17 - 13);
  tmp |= (*(in + 29) - base) << 13;
  tmp |= (*(in + 30) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 30) - base) >> (17 - 15);
  tmp |= (*(in + 31) - base) << 15;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 68) */
  *(uint32_t *)out = tmp;
  return (68);
}

static uint32_t
unpack17_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 131071);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 131071);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 131071);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 131071);
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 131071);
  *(out + 9)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 10)) << (17 - 10);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 10) & 131071);
  *(out + 11)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (17 - 12);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 12) & 131071);
  *(out + 13)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 14)) << (17 - 14);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 14) & 131071);
  *(out + 15)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (17 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 1)) << (17 - 1);
  *(out + 16) += base;
  *(out + 17)  = base + ((tmp >> 1) & 131071);
  *(out + 18)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 3)) << (17 - 3);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 3) & 131071);
  *(out + 20)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 5)) << (17 - 5);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 5) & 131071);
  *(out + 22)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 7)) << (17 - 7);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 7) & 131071);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 9)) << (17 - 9);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 9) & 131071);
  *(out + 26)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 11)) << (17 - 11);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 11) & 131071);
  *(out + 28)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 13)) << (17 - 13);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 13) & 131071);
  *(out + 30)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 15)) << (17 - 15);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 15) & 131071);
  /* remaining: 0 bits */
  return (68);
}

static uint32_t
pack18_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (18 - 4);
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (18 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (18 - 12);
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (18 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) >> (18 - 2);
  tmp |= (*(in + 9) - base) << 2;
  tmp |= (*(in + 10) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 10) - base) >> (18 - 6);
  tmp |= (*(in + 11) - base) << 6;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 12) - base) >> (18 - 10);
  tmp |= (*(in + 13) - base) << 10;
  tmp |= (*(in + 14) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 14) - base) >> (18 - 14);
  tmp |= (*(in + 15) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 17) - base) >> (18 - 4);
  tmp |= (*(in + 18) - base) << 4;
  tmp |= (*(in + 19) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 19) - base) >> (18 - 8);
  tmp |= (*(in + 20) - base) << 8;
  tmp |= (*(in + 21) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 21) - base) >> (18 - 12);
  tmp |= (*(in + 22) - base) << 12;
  tmp |= (*(in + 23) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 23) - base) >> (18 - 16);
  tmp |= (*(in + 24) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 24) - base) >> (18 - 2);
  tmp |= (*(in + 25) - base) << 2;
  tmp |= (*(in + 26) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 26) - base) >> (18 - 6);
  tmp |= (*(in + 27) - base) << 6;
  tmp |= (*(in + 28) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 28) - base) >> (18 - 10);
  tmp |= (*(in + 29) - base) << 10;
  tmp |= (*(in + 30) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 30) - base) >> (18 - 14);
  tmp |= (*(in + 31) - base) << 14;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 72) */
  *(uint32_t *)out = tmp;
  return (72);
}

static uint32_t
unpack18_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 262143);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 262143);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 262143);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 262143);
  *(out + 7)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 2)) << (18 - 2);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 2) & 262143);
  *(out + 10)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 6) & 262143);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 10) & 262143);
  *(out + 14)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 14) & 262143);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 16)  = base + ((tmp >> 0) & 262143);
  *(out + 17)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 4) & 262143);
  *(out + 19)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 8) & 262143);
  *(out + 21)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 12) & 262143);
  *(out + 23)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 2)) << (18 - 2);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 2) & 262143);
  *(out + 26)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 6) & 262143);
  *(out + 28)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 10) & 262143);
  *(out + 30)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 14) & 262143);
  /* remaining: 0 bits */
  return (72);
}

static uint32_t
pack19_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (19 - 6);
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (19 - 12);
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (19 - 18);
  tmp |= (*(in + 6) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (19 - 5);
  tmp |= (*(in + 7) - base) << 5;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) >> (19 - 11);
  tmp |= (*(in + 9) - base) << 11;
  tmp |= (*(in + 10) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 10) - base) >> (19 - 17);
  tmp |= (*(in + 11) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 11) - base) >> (19 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 13) - base) >> (19 - 10);
  tmp |= (*(in + 14) - base) << 10;
  tmp |= (*(in + 15) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 15) - base) >> (19 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 16) - base) >> (19 - 3);
  tmp |= (*(in + 17) - base) << 3;
  tmp |= (*(in + 18) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 18) - base) >> (19 - 9);
  tmp |= (*(in + 19) - base) << 9;
  tmp |= (*(in + 20) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 20) - base) >> (19 - 15);
  tmp |= (*(in + 21) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 21) - base) >> (19 - 2);
  tmp |= (*(in + 22) - base) << 2;
  tmp |= (*(in + 23) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 23) - base) >> (19 - 8);
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 25) - base) >> (19 - 14);
  tmp |= (*(in + 26) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 26) - base) >> (19 - 1);
  tmp |= (*(in + 27) - base) << 1;
  tmp |= (*(in + 28) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 28) - base) >> (19 - 7);
  tmp |= (*(in + 29) - base) << 7;
  tmp |= (*(in + 30) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 30) - base) >> (19 - 13);
  tmp |= (*(in + 31) - base) << 13;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 76) */
  *(uint32_t *)out = tmp;
  return (76);
}

static uint32_t
unpack19_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 524287);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 524287);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 524287);
  *(out + 5)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 18)) << (19 - 18);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 5)) << (19 - 5);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 5) & 524287);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 11)) << (19 - 11);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 11) & 524287);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 17)) << (19 - 17);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (19 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 524287);
  *(out + 13)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 10)) << (19 - 10);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 10) & 524287);
  *(out + 15)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (19 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 3)) << (19 - 3);
  *(out + 16) += base;
  *(out + 17)  = base + ((tmp >> 3) & 524287);
  *(out + 18)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 9)) << (19 - 9);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 9) & 524287);
  *(out + 20)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 15)) << (19 - 15);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 2)) << (19 - 2);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 2) & 524287);
  *(out + 23)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (19 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 524287);
  *(out + 25)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 14)) << (19 - 14);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 1)) << (19 - 1);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 1) & 524287);
  *(out + 28)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 7)) << (19 - 7);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 7) & 524287);
  *(out + 30)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 13)) << (19 - 13);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 13) & 524287);
  /* remaining: 0 bits */
  return (76);
}

static uint32_t
pack20_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 9) - base) >> (20 - 8);
  tmp |= (*(in + 10) - base) << 8;
  tmp |= (*(in + 11) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 11) - base) >> (20 - 16);
  tmp |= (*(in + 12) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 12) - base) >> (20 - 4);
  tmp |= (*(in + 13) - base) << 4;
  tmp |= (*(in + 14) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 14) - base) >> (20 - 12);
  tmp |= (*(in + 15) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 17) - base) >> (20 - 8);
  tmp |= (*(in + 18) - base) << 8;
  tmp |= (*(in + 19) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 19) - base) >> (20 - 16);
  tmp |= (*(in + 20) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 20) - base) >> (20 - 4);
  tmp |= (*(in + 21) - base) << 4;
  tmp |= (*(in + 22) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 22) - base) >> (20 - 12);
  tmp |= (*(in + 23) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 25) - base) >> (20 - 8);
  tmp |= (*(in + 26) - base) << 8;
  tmp |= (*(in + 27) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 27) - base) >> (20 - 16);
  tmp |= (*(in + 28) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 28) - base) >> (20 - 4);
  tmp |= (*(in + 29) - base) << 4;
  tmp |= (*(in + 30) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 30) - base) >> (20 - 12);
  tmp |= (*(in + 31) - base) << 12;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 80) */
  *(uint32_t *)out = tmp;
  return (80);
}

static uint32_t
unpack20_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1048575);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 1048575);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 1048575);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 1048575);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 8)  = base + ((tmp >> 0) & 1048575);
  *(out + 9)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 8) & 1048575);
  *(out + 11)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 4) & 1048575);
  *(out + 14)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 12) & 1048575);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 16)  = base + ((tmp >> 0) & 1048575);
  *(out + 17)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 8) & 1048575);
  *(out + 19)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 4) & 1048575);
  *(out + 22)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 12) & 1048575);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 24)  = base + ((tmp >> 0) & 1048575);
  *(out + 25)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 8) & 1048575);
  *(out + 27)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 4) & 1048575);
  *(out + 30)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 12) & 1048575);
  /* remaining: 0 bits */
  return (80);
}

static uint32_t
pack21_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (21 - 10);
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (21 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (21 - 9);
  tmp |= (*(in + 5) - base) << 9;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (21 - 19);
  tmp |= (*(in + 7) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (21 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 9) - base) >> (21 - 18);
  tmp |= (*(in + 10) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 10) - base) >> (21 - 7);
  tmp |= (*(in + 11) - base) << 7;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 12) - base) >> (21 - 17);
  tmp |= (*(in + 13) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 13) - base) >> (21 - 6);
  tmp |= (*(in + 14) - base) << 6;
  tmp |= (*(in + 15) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 15) - base) >> (21 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 16) - base) >> (21 - 5);
  tmp |= (*(in + 17) - base) << 5;
  tmp |= (*(in + 18) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 18) - base) >> (21 - 15);
  tmp |= (*(in + 19) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 19) - base) >> (21 - 4);
  tmp |= (*(in + 20) - base) << 4;
  tmp |= (*(in + 21) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 21) - base) >> (21 - 14);
  tmp |= (*(in + 22) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 22) - base) >> (21 - 3);
  tmp |= (*(in + 23) - base) << 3;
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 24) - base) >> (21 - 13);
  tmp |= (*(in + 25) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 25) - base) >> (21 - 2);
  tmp |= (*(in + 26) - base) << 2;
  tmp |= (*(in + 27) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 27) - base) >> (21 - 12);
  tmp |= (*(in + 28) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 28) - base) >> (21 - 1);
  tmp |= (*(in + 29) - base) << 1;
  tmp |= (*(in + 30) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 30) - base) >> (21 - 11);
  tmp |= (*(in + 31) - base) << 11;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 84) */
  *(uint32_t *)out = tmp;
  return (84);
}

static uint32_t
unpack21_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2097151);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 2097151);
  *(out + 3)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (21 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 9)) << (21 - 9);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 9) & 2097151);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 19)) << (21 - 19);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (21 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 2097151);
  *(out + 9)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 18)) << (21 - 18);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 7)) << (21 - 7);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 7) & 2097151);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 17)) << (21 - 17);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 6)) << (21 - 6);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 6) & 2097151);
  *(out + 15)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (21 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 5)) << (21 - 5);
  *(out + 16) += base;
  *(out + 17)  = base + ((tmp >> 5) & 2097151);
  *(out + 18)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 15)) << (21 - 15);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (21 - 4);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 4) & 2097151);
  *(out + 21)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 14)) << (21 - 14);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 3)) << (21 - 3);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 3) & 2097151);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 13)) << (21 - 13);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 2)) << (21 - 2);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 2) & 2097151);
  *(out + 27)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 12)) << (21 - 12);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 1)) << (21 - 1);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 1) & 2097151);
  *(out + 30)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 11)) << (21 - 11);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 11) & 2097151);
  /* remaining: 0 bits */
  return (84);
}

static uint32_t
pack22_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (22 - 12);
  tmp |= (*(in + 2) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (22 - 2);
  tmp |= (*(in + 3) - base) << 2;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (22 - 14);
  tmp |= (*(in + 5) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (22 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (22 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) >> (22 - 6);
  tmp |= (*(in + 9) - base) << 6;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 10) - base) >> (22 - 18);
  tmp |= (*(in + 11) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 11) - base) >> (22 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 13) - base) >> (22 - 20);
  tmp |= (*(in + 14) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 14) - base) >> (22 - 10);
  tmp |= (*(in + 15) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 17) - base) >> (22 - 12);
  tmp |= (*(in + 18) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 18) - base) >> (22 - 2);
  tmp |= (*(in + 19) - base) << 2;
  tmp |= (*(in + 20) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 20) - base) >> (22 - 14);
  tmp |= (*(in + 21) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 21) - base) >> (22 - 4);
  tmp |= (*(in + 22) - base) << 4;
  tmp |= (*(in + 23) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 23) - base) >> (22 - 16);
  tmp |= (*(in + 24) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 24) - base) >> (22 - 6);
  tmp |= (*(in + 25) - base) << 6;
  tmp |= (*(in + 26) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 26) - base) >> (22 - 18);
  tmp |= (*(in + 27) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 27) - base) >> (22 - 8);
  tmp |= (*(in + 28) - base) << 8;
  tmp |= (*(in + 29) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 29) - base) >> (22 - 20);
  tmp |= (*(in + 30) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 30) - base) >> (22 - 10);
  tmp |= (*(in + 31) - base) << 10;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 88) */
  *(uint32_t *)out = tmp;
  return (88);
}

static uint32_t
unpack22_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4194303);
  *(out + 1)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 2) & 4194303);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 4194303);
  *(out + 7)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 6)) << (22 - 6);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 6) & 4194303);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 18)) << (22 - 18);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (22 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 4194303);
  *(out + 13)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 20)) << (22 - 20);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 10)) << (22 - 10);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 10) & 4194303);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 16)  = base + ((tmp >> 0) & 4194303);
  *(out + 17)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 2) & 4194303);
  *(out + 20)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 4) & 4194303);
  *(out + 23)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 6)) << (22 - 6);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 6) & 4194303);
  *(out + 26)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 18)) << (22 - 18);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 8)) << (22 - 8);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 8) & 4194303);
  *(out + 29)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 20)) << (22 - 20);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 10)) << (22 - 10);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 10) & 4194303);
  /* remaining: 0 bits */
  return (88);
}

static uint32_t
pack23_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (23 - 14);
  tmp |= (*(in + 2) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (23 - 5);
  tmp |= (*(in + 3) - base) << 5;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (23 - 19);
  tmp |= (*(in + 5) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (23 - 10);
  tmp |= (*(in + 6) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (23 - 1);
  tmp |= (*(in + 7) - base) << 1;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) >> (23 - 15);
  tmp |= (*(in + 9) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 9) - base) >> (23 - 6);
  tmp |= (*(in + 10) - base) << 6;
  tmp |= (*(in + 11) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 11) - base) >> (23 - 20);
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 12) - base) >> (23 - 11);
  tmp |= (*(in + 13) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 13) - base) >> (23 - 2);
  tmp |= (*(in + 14) - base) << 2;
  tmp |= (*(in + 15) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 15) - base) >> (23 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 16) - base) >> (23 - 7);
  tmp |= (*(in + 17) - base) << 7;
  tmp |= (*(in + 18) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 18) - base) >> (23 - 21);
  tmp |= (*(in + 19) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 19) - base) >> (23 - 12);
  tmp |= (*(in + 20) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 20) - base) >> (23 - 3);
  tmp |= (*(in + 21) - base) << 3;
  tmp |= (*(in + 22) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 22) - base) >> (23 - 17);
  tmp |= (*(in + 23) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 23) - base) >> (23 - 8);
  tmp |= (*(in + 24) - base) << 8;
  tmp |= (*(in + 25) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 25) - base) >> (23 - 22);
  tmp |= (*(in + 26) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 26) - base) >> (23 - 13);
  tmp |= (*(in + 27) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 27) - base) >> (23 - 4);
  tmp |= (*(in + 28) - base) << 4;
  tmp |= (*(in + 29) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 29) - base) >> (23 - 18);
  tmp |= (*(in + 30) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 30) - base) >> (23 - 9);
  tmp |= (*(in + 31) - base) << 9;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 92) */
  *(uint32_t *)out = tmp;
  return (92);
}

static uint32_t
unpack23_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8388607);
  *(out + 1)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 14)) << (23 - 14);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 5)) << (23 - 5);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 5) & 8388607);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 19)) << (23 - 19);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 10)) << (23 - 10);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 1)) << (23 - 1);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 1) & 8388607);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 15)) << (23 - 15);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (23 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 8388607);
  *(out + 11)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 20)) << (23 - 20);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 11)) << (23 - 11);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (23 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 8388607);
  *(out + 15)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (23 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 7)) << (23 - 7);
  *(out + 16) += base;
  *(out + 17)  = base + ((tmp >> 7) & 8388607);
  *(out + 18)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 21)) << (23 - 21);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 12)) << (23 - 12);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 3)) << (23 - 3);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 3) & 8388607);
  *(out + 22)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 17)) << (23 - 17);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (23 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 8388607);
  *(out + 25)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 22)) << (23 - 22);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 13)) << (23 - 13);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (23 - 4);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 4) & 8388607);
  *(out + 29)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 18)) << (23 - 18);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 9)) << (23 - 9);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 9) & 8388607);
  /* remaining: 0 bits */
  return (92);
}

static uint32_t
pack24_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (24 - 16);
  tmp |= (*(in + 6) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (24 - 8);
  tmp |= (*(in + 7) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 9) - base) >> (24 - 16);
  tmp |= (*(in + 10) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 10) - base) >> (24 - 8);
  tmp |= (*(in + 11) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 13) - base) >> (24 - 16);
  tmp |= (*(in + 14) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 14) - base) >> (24 - 8);
  tmp |= (*(in + 15) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 17) - base) >> (24 - 16);
  tmp |= (*(in + 18) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 18) - base) >> (24 - 8);
  tmp |= (*(in + 19) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 20) - base) << 0;
  tmp |= (*(in + 21) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 21) - base) >> (24 - 16);
  tmp |= (*(in + 22) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 22) - base) >> (24 - 8);
  tmp |= (*(in + 23) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 25) - base) >> (24 - 16);
  tmp |= (*(in + 26) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 26) - base) >> (24 - 8);
  tmp |= (*(in + 27) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 28) - base) << 0;
  tmp |= (*(in + 29) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 29) - base) >> (24 - 16);
  tmp |= (*(in + 30) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 30) - base) >> (24 - 8);
  tmp |= (*(in + 31) - base) << 8;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 96) */
  *(uint32_t *)out = tmp;
  return (96);
}

static uint32_t
unpack24_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16777215);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 4)  = base + ((tmp >> 0) & 16777215);
  *(out + 5)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 8)  = base + ((tmp >> 0) & 16777215);
  *(out + 9)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 12)  = base + ((tmp >> 0) & 16777215);
  *(out + 13)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 16)  = base + ((tmp >> 0) & 16777215);
  *(out + 17)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 20)  = base + ((tmp >> 0) & 16777215);
  *(out + 21)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 76) */
  *(out + 24)  = base + ((tmp >> 0) & 16777215);
  *(out + 25)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 88) */
  *(out + 28)  = base + ((tmp >> 0) & 16777215);
  *(out + 29)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 8) & 16777215);
  /* remaining: 0 bits */
  return (96);
}

static uint32_t
pack25_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (25 - 18);
  tmp |= (*(in + 2) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (25 - 11);
  tmp |= (*(in + 3) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (25 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (25 - 22);
  tmp |= (*(in + 6) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (25 - 15);
  tmp |= (*(in + 7) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (25 - 8);
  tmp |= (*(in + 8) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (25 - 1);
  tmp |= (*(in + 9) - base) << 1;
  tmp |= (*(in + 10) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 10) - base) >> (25 - 19);
  tmp |= (*(in + 11) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 11) - base) >> (25 - 12);
  tmp |= (*(in + 12) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 12) - base) >> (25 - 5);
  tmp |= (*(in + 13) - base) << 5;
  tmp |= (*(in + 14) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 14) - base) >> (25 - 23);
  tmp |= (*(in + 15) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 15) - base) >> (25 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 16) - base) >> (25 - 9);
  tmp |= (*(in + 17) - base) << 9;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 17) - base) >> (25 - 2);
  tmp |= (*(in + 18) - base) << 2;
  tmp |= (*(in + 19) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 19) - base) >> (25 - 20);
  tmp |= (*(in + 20) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 20) - base) >> (25 - 13);
  tmp |= (*(in + 21) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 21) - base) >> (25 - 6);
  tmp |= (*(in + 22) - base) << 6;
  tmp |= (*(in + 23) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 23) - base) >> (25 - 24);
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 24) - base) >> (25 - 17);
  tmp |= (*(in + 25) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 25) - base) >> (25 - 10);
  tmp |= (*(in + 26) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 26) - base) >> (25 - 3);
  tmp |= (*(in + 27) - base) << 3;
  tmp |= (*(in + 28) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 28) - base) >> (25 - 21);
  tmp |= (*(in + 29) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 29) - base) >> (25 - 14);
  tmp |= (*(in + 30) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 30) - base) >> (25 - 7);
  tmp |= (*(in + 31) - base) << 7;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 100) */
  *(uint32_t *)out = tmp;
  return (100);
}

static uint32_t
unpack25_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 33554431);
  *(out + 1)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 18)) << (25 - 18);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 11)) << (25 - 11);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (25 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 33554431);
  *(out + 5)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 22)) << (25 - 22);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 15)) << (25 - 15);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (25 - 8);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 1)) << (25 - 1);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 1) & 33554431);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 19)) << (25 - 19);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (25 - 12);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 5)) << (25 - 5);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 5) & 33554431);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 23)) << (25 - 23);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (25 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 9)) << (25 - 9);
  *(out + 16) += base;
  *(out + 17)  = tmp >> 9;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 2)) << (25 - 2);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 2) & 33554431);
  *(out + 19)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 20)) << (25 - 20);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 13)) << (25 - 13);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 6)) << (25 - 6);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 6) & 33554431);
  *(out + 23)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 24)) << (25 - 24);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 17)) << (25 - 17);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 10)) << (25 - 10);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 3)) << (25 - 3);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 3) & 33554431);
  *(out + 28)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 21)) << (25 - 21);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 14)) << (25 - 14);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 7)) << (25 - 7);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 7) & 33554431);
  /* remaining: 0 bits */
  return (100);
}

static uint32_t
pack26_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (26 - 20);
  tmp |= (*(in + 2) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (26 - 14);
  tmp |= (*(in + 3) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (26 - 8);
  tmp |= (*(in + 4) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (26 - 2);
  tmp |= (*(in + 5) - base) << 2;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (26 - 22);
  tmp |= (*(in + 7) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (26 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (26 - 10);
  tmp |= (*(in + 9) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (26 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 11) - base) >> (26 - 24);
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 12) - base) >> (26 - 18);
  tmp |= (*(in + 13) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 13) - base) >> (26 - 12);
  tmp |= (*(in + 14) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 14) - base) >> (26 - 6);
  tmp |= (*(in + 15) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 17) - base) >> (26 - 20);
  tmp |= (*(in + 18) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 18) - base) >> (26 - 14);
  tmp |= (*(in + 19) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 19) - base) >> (26 - 8);
  tmp |= (*(in + 20) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 20) - base) >> (26 - 2);
  tmp |= (*(in + 21) - base) << 2;
  tmp |= (*(in + 22) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 22) - base) >> (26 - 22);
  tmp |= (*(in + 23) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 23) - base) >> (26 - 16);
  tmp |= (*(in + 24) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 24) - base) >> (26 - 10);
  tmp |= (*(in + 25) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 25) - base) >> (26 - 4);
  tmp |= (*(in + 26) - base) << 4;
  tmp |= (*(in + 27) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 27) - base) >> (26 - 24);
  tmp |= (*(in + 28) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 28) - base) >> (26 - 18);
  tmp |= (*(in + 29) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 29) - base) >> (26 - 12);
  tmp |= (*(in + 30) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 30) - base) >> (26 - 6);
  tmp |= (*(in + 31) - base) << 6;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 104) */
  *(uint32_t *)out = tmp;
  return (104);
}

static uint32_t
unpack26_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 67108863);
  *(out + 1)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 2) & 67108863);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 10)) << (26 - 10);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (26 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 67108863);
  *(out + 11)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 24)) << (26 - 24);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 18)) << (26 - 18);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 12)) << (26 - 12);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 6)) << (26 - 6);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 6) & 67108863);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 16)  = base + ((tmp >> 0) & 67108863);
  *(out + 17)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 2) & 67108863);
  *(out + 22)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 10)) << (26 - 10);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 4)) << (26 - 4);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 4) & 67108863);
  *(out + 27)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 24)) << (26 - 24);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 18)) << (26 - 18);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 12)) << (26 - 12);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 6)) << (26 - 6);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 6) & 67108863);
  /* remaining: 0 bits */
  return (104);
}

static uint32_t
pack27_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (27 - 22);
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (27 - 17);
  tmp |= (*(in + 3) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (27 - 12);
  tmp |= (*(in + 4) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (27 - 7);
  tmp |= (*(in + 5) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (27 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (27 - 24);
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (27 - 19);
  tmp |= (*(in + 9) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (27 - 14);
  tmp |= (*(in + 10) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 10) - base) >> (27 - 9);
  tmp |= (*(in + 11) - base) << 9;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (27 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 13) - base) >> (27 - 26);
  tmp |= (*(in + 14) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 14) - base) >> (27 - 21);
  tmp |= (*(in + 15) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 15) - base) >> (27 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 16) - base) >> (27 - 11);
  tmp |= (*(in + 17) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 17) - base) >> (27 - 6);
  tmp |= (*(in + 18) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 18) - base) >> (27 - 1);
  tmp |= (*(in + 19) - base) << 1;
  tmp |= (*(in + 20) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 20) - base) >> (27 - 23);
  tmp |= (*(in + 21) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 21) - base) >> (27 - 18);
  tmp |= (*(in + 22) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 22) - base) >> (27 - 13);
  tmp |= (*(in + 23) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 23) - base) >> (27 - 8);
  tmp |= (*(in + 24) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 24) - base) >> (27 - 3);
  tmp |= (*(in + 25) - base) << 3;
  tmp |= (*(in + 26) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 26) - base) >> (27 - 25);
  tmp |= (*(in + 27) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 27) - base) >> (27 - 20);
  tmp |= (*(in + 28) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 28) - base) >> (27 - 15);
  tmp |= (*(in + 29) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 29) - base) >> (27 - 10);
  tmp |= (*(in + 30) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 30) - base) >> (27 - 5);
  tmp |= (*(in + 31) - base) << 5;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 108) */
  *(uint32_t *)out = tmp;
  return (108);
}

static uint32_t
unpack27_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 134217727);
  *(out + 1)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 22)) << (27 - 22);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 17)) << (27 - 17);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (27 - 12);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 7)) << (27 - 7);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 7;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (27 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 134217727);
  *(out + 7)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (27 - 24);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 19)) << (27 - 19);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 14)) << (27 - 14);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 9)) << (27 - 9);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 9;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (27 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 134217727);
  *(out + 13)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 26)) << (27 - 26);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 21)) << (27 - 21);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (27 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 11)) << (27 - 11);
  *(out + 16) += base;
  *(out + 17)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 6)) << (27 - 6);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 1)) << (27 - 1);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 1) & 134217727);
  *(out + 20)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 23)) << (27 - 23);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 18)) << (27 - 18);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 13)) << (27 - 13);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (27 - 8);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 3)) << (27 - 3);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 3) & 134217727);
  *(out + 26)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 25)) << (27 - 25);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 20)) << (27 - 20);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 15)) << (27 - 15);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 10)) << (27 - 10);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 5)) << (27 - 5);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 5) & 134217727);
  /* remaining: 0 bits */
  return (108);
}

static uint32_t
pack28_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (28 - 24);
  tmp |= (*(in + 10) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 10) - base) >> (28 - 20);
  tmp |= (*(in + 11) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (28 - 16);
  tmp |= (*(in + 12) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 12) - base) >> (28 - 12);
  tmp |= (*(in + 13) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 13) - base) >> (28 - 8);
  tmp |= (*(in + 14) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 14) - base) >> (28 - 4);
  tmp |= (*(in + 15) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 17) - base) >> (28 - 24);
  tmp |= (*(in + 18) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 18) - base) >> (28 - 20);
  tmp |= (*(in + 19) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 19) - base) >> (28 - 16);
  tmp |= (*(in + 20) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 20) - base) >> (28 - 12);
  tmp |= (*(in + 21) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 21) - base) >> (28 - 8);
  tmp |= (*(in + 22) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 22) - base) >> (28 - 4);
  tmp |= (*(in + 23) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 24) - base) << 0;
  tmp |= (*(in + 25) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 25) - base) >> (28 - 24);
  tmp |= (*(in + 26) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 26) - base) >> (28 - 20);
  tmp |= (*(in + 27) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 27) - base) >> (28 - 16);
  tmp |= (*(in + 28) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 28) - base) >> (28 - 12);
  tmp |= (*(in + 29) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 29) - base) >> (28 - 8);
  tmp |= (*(in + 30) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 30) - base) >> (28 - 4);
  tmp |= (*(in + 31) - base) << 4;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 112) */
  *(uint32_t *)out = tmp;
  return (112);
}

static uint32_t
unpack28_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 268435455);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 268435455);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 8)  = base + ((tmp >> 0) & 268435455);
  *(out + 9)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 4) & 268435455);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 16)  = base + ((tmp >> 0) & 268435455);
  *(out + 17)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 4) & 268435455);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 88) */
  *(out + 24)  = base + ((tmp >> 0) & 268435455);
  *(out + 25)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 4) & 268435455);
  /* remaining: 0 bits */
  return (112);
}

static uint32_t
pack29_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (29 - 26);
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (29 - 23);
  tmp |= (*(in + 3) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (29 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (29 - 17);
  tmp |= (*(in + 5) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (29 - 14);
  tmp |= (*(in + 6) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (29 - 11);
  tmp |= (*(in + 7) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (29 - 8);
  tmp |= (*(in + 8) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (29 - 5);
  tmp |= (*(in + 9) - base) << 5;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (29 - 2);
  tmp |= (*(in + 10) - base) << 2;
  tmp |= (*(in + 11) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (29 - 28);
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 12) - base) >> (29 - 25);
  tmp |= (*(in + 13) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 13) - base) >> (29 - 22);
  tmp |= (*(in + 14) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 14) - base) >> (29 - 19);
  tmp |= (*(in + 15) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 15) - base) >> (29 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 16) - base) >> (29 - 13);
  tmp |= (*(in + 17) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 17) - base) >> (29 - 10);
  tmp |= (*(in + 18) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 18) - base) >> (29 - 7);
  tmp |= (*(in + 19) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 19) - base) >> (29 - 4);
  tmp |= (*(in + 20) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 20) - base) >> (29 - 1);
  tmp |= (*(in + 21) - base) << 1;
  tmp |= (*(in + 22) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 22) - base) >> (29 - 27);
  tmp |= (*(in + 23) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 23) - base) >> (29 - 24);
  tmp |= (*(in + 24) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 24) - base) >> (29 - 21);
  tmp |= (*(in + 25) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 25) - base) >> (29 - 18);
  tmp |= (*(in + 26) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 26) - base) >> (29 - 15);
  tmp |= (*(in + 27) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 27) - base) >> (29 - 12);
  tmp |= (*(in + 28) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 28) - base) >> (29 - 9);
  tmp |= (*(in + 29) - base) << 9;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 29) - base) >> (29 - 6);
  tmp |= (*(in + 30) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp  = (*(in + 30) - base) >> (29 - 3);
  tmp |= (*(in + 31) - base) << 3;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 116) */
  *(uint32_t *)out = tmp;
  return (116);
}

static uint32_t
unpack29_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 536870911);
  *(out + 1)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 26)) << (29 - 26);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 23)) << (29 - 23);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (29 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 17)) << (29 - 17);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 14)) << (29 - 14);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 11)) << (29 - 11);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (29 - 8);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 5)) << (29 - 5);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 5;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (29 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 536870911);
  *(out + 11)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 28)) << (29 - 28);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 25)) << (29 - 25);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 22)) << (29 - 22);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 19)) << (29 - 19);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (29 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 13)) << (29 - 13);
  *(out + 16) += base;
  *(out + 17)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 10)) << (29 - 10);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 7)) << (29 - 7);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 7;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (29 - 4);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 1)) << (29 - 1);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 1) & 536870911);
  *(out + 22)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 27)) << (29 - 27);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 24)) << (29 - 24);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 21)) << (29 - 21);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 18)) << (29 - 18);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 15)) << (29 - 15);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 12)) << (29 - 12);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 9)) << (29 - 9);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 9;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 6)) << (29 - 6);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 3)) << (29 - 3);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 3) & 536870911);
  /* remaining: 0 bits */
  return (116);
}

static uint32_t
pack30_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (30 - 28);
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (30 - 26);
  tmp |= (*(in + 3) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (30 - 24);
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (30 - 22);
  tmp |= (*(in + 5) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (30 - 20);
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (30 - 18);
  tmp |= (*(in + 7) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (30 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (30 - 14);
  tmp |= (*(in + 9) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (30 - 12);
  tmp |= (*(in + 10) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 10) - base) >> (30 - 10);
  tmp |= (*(in + 11) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 11) - base) >> (30 - 8);
  tmp |= (*(in + 12) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 12) - base) >> (30 - 6);
  tmp |= (*(in + 13) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 13) - base) >> (30 - 4);
  tmp |= (*(in + 14) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 14) - base) >> (30 - 2);
  tmp |= (*(in + 15) - base) << 2;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 16) - base) << 0;
  tmp |= (*(in + 17) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 17) - base) >> (30 - 28);
  tmp |= (*(in + 18) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 18) - base) >> (30 - 26);
  tmp |= (*(in + 19) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 19) - base) >> (30 - 24);
  tmp |= (*(in + 20) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 20) - base) >> (30 - 22);
  tmp |= (*(in + 21) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 21) - base) >> (30 - 20);
  tmp |= (*(in + 22) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 22) - base) >> (30 - 18);
  tmp |= (*(in + 23) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 23) - base) >> (30 - 16);
  tmp |= (*(in + 24) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 24) - base) >> (30 - 14);
  tmp |= (*(in + 25) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 25) - base) >> (30 - 12);
  tmp |= (*(in + 26) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 26) - base) >> (30 - 10);
  tmp |= (*(in + 27) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 27) - base) >> (30 - 8);
  tmp |= (*(in + 28) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 28) - base) >> (30 - 6);
  tmp |= (*(in + 29) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp  = (*(in + 29) - base) >> (30 - 4);
  tmp |= (*(in + 30) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp  = (*(in + 30) - base) >> (30 - 2);
  tmp |= (*(in + 31) - base) << 2;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 120) */
  *(uint32_t *)out = tmp;
  return (120);
}

static uint32_t
unpack30_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1073741823);
  *(out + 1)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 14)) << (30 - 14);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (30 - 12);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 10)) << (30 - 10);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (30 - 8);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 6)) << (30 - 6);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (30 - 4);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 2)) << (30 - 2);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 2) & 1073741823);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 16)  = base + ((tmp >> 0) & 1073741823);
  *(out + 17)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 14)) << (30 - 14);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 12)) << (30 - 12);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 10)) << (30 - 10);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 8)) << (30 - 8);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 6)) << (30 - 6);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 4)) << (30 - 4);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 120) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 2)) << (30 - 2);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 2) & 1073741823);
  /* remaining: 0 bits */
  return (120);
}

static uint32_t
pack31_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (31 - 30);
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (31 - 29);
  tmp |= (*(in + 3) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (31 - 28);
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (31 - 27);
  tmp |= (*(in + 5) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (31 - 26);
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (31 - 25);
  tmp |= (*(in + 7) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (31 - 24);
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (31 - 23);
  tmp |= (*(in + 9) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (31 - 22);
  tmp |= (*(in + 10) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 10) - base) >> (31 - 21);
  tmp |= (*(in + 11) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 11) - base) >> (31 - 20);
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 12) - base) >> (31 - 19);
  tmp |= (*(in + 13) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 13) - base) >> (31 - 18);
  tmp |= (*(in + 14) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 14) - base) >> (31 - 17);
  tmp |= (*(in + 15) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 15) - base) >> (31 - 16);
  tmp |= (*(in + 16) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 16) - base) >> (31 - 15);
  tmp |= (*(in + 17) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 17) - base) >> (31 - 14);
  tmp |= (*(in + 18) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 18) - base) >> (31 - 13);
  tmp |= (*(in + 19) - base) << 13;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 19) - base) >> (31 - 12);
  tmp |= (*(in + 20) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 20) - base) >> (31 - 11);
  tmp |= (*(in + 21) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 21) - base) >> (31 - 10);
  tmp |= (*(in + 22) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 22) - base) >> (31 - 9);
  tmp |= (*(in + 23) - base) << 9;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 23) - base) >> (31 - 8);
  tmp |= (*(in + 24) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 24) - base) >> (31 - 7);
  tmp |= (*(in + 25) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 25) - base) >> (31 - 6);
  tmp |= (*(in + 26) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 26) - base) >> (31 - 5);
  tmp |= (*(in + 27) - base) << 5;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 27) - base) >> (31 - 4);
  tmp |= (*(in + 28) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp  = (*(in + 28) - base) >> (31 - 3);
  tmp |= (*(in + 29) - base) << 3;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp  = (*(in + 29) - base) >> (31 - 2);
  tmp |= (*(in + 30) - base) << 2;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 120) */
  tmp  = (*(in + 30) - base) >> (31 - 1);
  tmp |= (*(in + 31) - base) << 1;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 124) */
  *(uint32_t *)out = tmp;
  return (124);
}

static uint32_t
unpack31_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2147483647);
  *(out + 1)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 30)) << (31 - 30);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 29)) << (31 - 29);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 28)) << (31 - 28);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 27)) << (31 - 27);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 26)) << (31 - 26);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 25)) << (31 - 25);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (31 - 24);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 23)) << (31 - 23);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 22)) << (31 - 22);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 21)) << (31 - 21);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 20)) << (31 - 20);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 19)) << (31 - 19);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 18)) << (31 - 18);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 17)) << (31 - 17);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (31 - 16);
  *(out + 15) += base;
  *(out + 16)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 16) |= (tmp % (1U << 15)) << (31 - 15);
  *(out + 16) += base;
  *(out + 17)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 14)) << (31 - 14);
  *(out + 17) += base;
  *(out + 18)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 13)) << (31 - 13);
  *(out + 18) += base;
  *(out + 19)  = tmp >> 13;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 12)) << (31 - 12);
  *(out + 19) += base;
  *(out + 20)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 11)) << (31 - 11);
  *(out + 20) += base;
  *(out + 21)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 10)) << (31 - 10);
  *(out + 21) += base;
  *(out + 22)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 9)) << (31 - 9);
  *(out + 22) += base;
  *(out + 23)  = tmp >> 9;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (31 - 8);
  *(out + 23) += base;
  *(out + 24)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 7)) << (31 - 7);
  *(out + 24) += base;
  *(out + 25)  = tmp >> 7;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 6)) << (31 - 6);
  *(out + 25) += base;
  *(out + 26)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 5)) << (31 - 5);
  *(out + 26) += base;
  *(out + 27)  = tmp >> 5;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (31 - 4);
  *(out + 27) += base;
  *(out + 28)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 3)) << (31 - 3);
  *(out + 28) += base;
  *(out + 29)  = tmp >> 3;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 120) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 2)) << (31 - 2);
  *(out + 29) += base;
  *(out + 30)  = tmp >> 2;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 124) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 1)) << (31 - 1);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 1) & 2147483647);
  /* remaining: 0 bits */
  return (124);
}

static uint32_t
pack32_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  memcpy(out, in, 32 * sizeof(uint32_t));
  return 32 * sizeof(uint32_t);
}

static uint32_t
unpack32_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  (void)base;
  memcpy(out, in, 32 * sizeof(uint32_t));
  return 32 * sizeof(uint32_t);
}

for_packfunc_t for_pack32[33] = {
                       pack0_n,
                       pack1_32,
                       pack2_32,
                       pack3_32,
                       pack4_32,
                       pack5_32,
                       pack6_32,
                       pack7_32,
                       pack8_32,
                       pack9_32,
                       pack10_32,
                       pack11_32,
                       pack12_32,
                       pack13_32,
                       pack14_32,
                       pack15_32,
                       pack16_32,
                       pack17_32,
                       pack18_32,
                       pack19_32,
                       pack20_32,
                       pack21_32,
                       pack22_32,
                       pack23_32,
                       pack24_32,
                       pack25_32,
                       pack26_32,
                       pack27_32,
                       pack28_32,
                       pack29_32,
                       pack30_32,
                       pack31_32,
                       pack32_32
};

for_unpackfunc_t for_unpack32[33] = {
                       unpack0_n,
                       unpack1_32,
                       unpack2_32,
                       unpack3_32,
                       unpack4_32,
                       unpack5_32,
                       unpack6_32,
                       unpack7_32,
                       unpack8_32,
                       unpack9_32,
                       unpack10_32,
                       unpack11_32,
                       unpack12_32,
                       unpack13_32,
                       unpack14_32,
                       unpack15_32,
                       unpack16_32,
                       unpack17_32,
                       unpack18_32,
                       unpack19_32,
                       unpack20_32,
                       unpack21_32,
                       unpack22_32,
                       unpack23_32,
                       unpack24_32,
                       unpack25_32,
                       unpack26_32,
                       unpack27_32,
                       unpack28_32,
                       unpack29_32,
                       unpack30_32,
                       unpack31_32,
                       unpack32_32
};

static uint32_t
pack1_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 1;
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 3;
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 5;
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 7;
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 9;
  tmp |= (*(in + 10) - base) << 10;
  tmp |= (*(in + 11) - base) << 11;
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 13;
  tmp |= (*(in + 14) - base) << 14;
  tmp |= (*(in + 15) - base) << 15;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 2) */
  *(uint32_t *)out = tmp;
  return (2);
}

static uint32_t
unpack1_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1);
  *(out + 1)  = base + ((tmp >> 1) & 1);
  *(out + 2)  = base + ((tmp >> 2) & 1);
  *(out + 3)  = base + ((tmp >> 3) & 1);
  *(out + 4)  = base + ((tmp >> 4) & 1);
  *(out + 5)  = base + ((tmp >> 5) & 1);
  *(out + 6)  = base + ((tmp >> 6) & 1);
  *(out + 7)  = base + ((tmp >> 7) & 1);
  *(out + 8)  = base + ((tmp >> 8) & 1);
  *(out + 9)  = base + ((tmp >> 9) & 1);
  *(out + 10)  = base + ((tmp >> 10) & 1);
  *(out + 11)  = base + ((tmp >> 11) & 1);
  *(out + 12)  = base + ((tmp >> 12) & 1);
  *(out + 13)  = base + ((tmp >> 13) & 1);
  *(out + 14)  = base + ((tmp >> 14) & 1);
  *(out + 15)  = base + ((tmp >> 15) & 1);
  /* remaining: 16 bits */
  return (2);
}

static uint32_t
pack2_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 2;
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 6;
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 10;
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 14;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 18;
  tmp |= (*(in + 10) - base) << 20;
  tmp |= (*(in + 11) - base) << 22;
  tmp |= (*(in + 12) - base) << 24;
  tmp |= (*(in + 13) - base) << 26;
  tmp |= (*(in + 14) - base) << 28;
  tmp |= (*(in + 15) - base) << 30;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 4) */
  *(uint32_t *)out = tmp;
  return (4);
}

static uint32_t
unpack2_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 2) & 3);
  *(out + 2)  = base + ((tmp >> 4) & 3);
  *(out + 3)  = base + ((tmp >> 6) & 3);
  *(out + 4)  = base + ((tmp >> 8) & 3);
  *(out + 5)  = base + ((tmp >> 10) & 3);
  *(out + 6)  = base + ((tmp >> 12) & 3);
  *(out + 7)  = base + ((tmp >> 14) & 3);
  *(out + 8)  = base + ((tmp >> 16) & 3);
  *(out + 9)  = base + ((tmp >> 18) & 3);
  *(out + 10)  = base + ((tmp >> 20) & 3);
  *(out + 11)  = base + ((tmp >> 22) & 3);
  *(out + 12)  = base + ((tmp >> 24) & 3);
  *(out + 13)  = base + ((tmp >> 26) & 3);
  *(out + 14)  = base + ((tmp >> 28) & 3);
  *(out + 15)  = base + ((tmp >> 30) & 3);
  /* remaining: 0 bits */
  return (4);
}

static uint32_t
pack3_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 3;
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 9;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 15;
  tmp |= (*(in + 6) - base) << 18;
  tmp |= (*(in + 7) - base) << 21;
  tmp |= (*(in + 8) - base) << 24;
  tmp |= (*(in + 9) - base) << 27;
  tmp |= (*(in + 10) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 10) - base) >> (3 - 1);
  tmp |= (*(in + 11) - base) << 1;
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 7;
  tmp |= (*(in + 14) - base) << 10;
  tmp |= (*(in + 15) - base) << 13;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 6) */
  *(uint32_t *)out = tmp;
  return (6);
}

static uint32_t
unpack3_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 3) & 7);
  *(out + 2)  = base + ((tmp >> 6) & 7);
  *(out + 3)  = base + ((tmp >> 9) & 7);
  *(out + 4)  = base + ((tmp >> 12) & 7);
  *(out + 5)  = base + ((tmp >> 15) & 7);
  *(out + 6)  = base + ((tmp >> 18) & 7);
  *(out + 7)  = base + ((tmp >> 21) & 7);
  *(out + 8)  = base + ((tmp >> 24) & 7);
  *(out + 9)  = base + ((tmp >> 27) & 7);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 1)) << (3 - 1);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 1) & 7);
  *(out + 12)  = base + ((tmp >> 4) & 7);
  *(out + 13)  = base + ((tmp >> 7) & 7);
  *(out + 14)  = base + ((tmp >> 10) & 7);
  *(out + 15)  = base + ((tmp >> 13) & 7);
  /* remaining: 16 bits */
  return (6);
}

static uint32_t
pack4_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 4;
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 12;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 20;
  tmp |= (*(in + 6) - base) << 24;
  tmp |= (*(in + 7) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 4;
  tmp |= (*(in + 10) - base) << 8;
  tmp |= (*(in + 11) - base) << 12;
  tmp |= (*(in + 12) - base) << 16;
  tmp |= (*(in + 13) - base) << 20;
  tmp |= (*(in + 14) - base) << 24;
  tmp |= (*(in + 15) - base) << 28;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 8) */
  *(uint32_t *)out = tmp;
  return (8);
}

static uint32_t
unpack4_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 4) & 15);
  *(out + 2)  = base + ((tmp >> 8) & 15);
  *(out + 3)  = base + ((tmp >> 12) & 15);
  *(out + 4)  = base + ((tmp >> 16) & 15);
  *(out + 5)  = base + ((tmp >> 20) & 15);
  *(out + 6)  = base + ((tmp >> 24) & 15);
  *(out + 7)  = base + ((tmp >> 28) & 15);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 8)  = base + ((tmp >> 0) & 15);
  *(out + 9)  = base + ((tmp >> 4) & 15);
  *(out + 10)  = base + ((tmp >> 8) & 15);
  *(out + 11)  = base + ((tmp >> 12) & 15);
  *(out + 12)  = base + ((tmp >> 16) & 15);
  *(out + 13)  = base + ((tmp >> 20) & 15);
  *(out + 14)  = base + ((tmp >> 24) & 15);
  *(out + 15)  = base + ((tmp >> 28) & 15);
  /* remaining: 0 bits */
  return (8);
}

static uint32_t
pack5_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 5;
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 15;
  tmp |= (*(in + 4) - base) << 20;
  tmp |= (*(in + 5) - base) << 25;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 6) - base) >> (5 - 3);
  tmp |= (*(in + 7) - base) << 3;
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 13;
  tmp |= (*(in + 10) - base) << 18;
  tmp |= (*(in + 11) - base) << 23;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 12) - base) >> (5 - 1);
  tmp |= (*(in + 13) - base) << 1;
  tmp |= (*(in + 14) - base) << 6;
  tmp |= (*(in + 15) - base) << 11;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 10) */
  *(uint32_t *)out = tmp;
  return (10);
}

static uint32_t
unpack5_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 31);
  *(out + 1)  = base + ((tmp >> 5) & 31);
  *(out + 2)  = base + ((tmp >> 10) & 31);
  *(out + 3)  = base + ((tmp >> 15) & 31);
  *(out + 4)  = base + ((tmp >> 20) & 31);
  *(out + 5)  = base + ((tmp >> 25) & 31);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 31);
  *(out + 8)  = base + ((tmp >> 8) & 31);
  *(out + 9)  = base + ((tmp >> 13) & 31);
  *(out + 10)  = base + ((tmp >> 18) & 31);
  *(out + 11)  = base + ((tmp >> 23) & 31);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 1)) << (5 - 1);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 1) & 31);
  *(out + 14)  = base + ((tmp >> 6) & 31);
  *(out + 15)  = base + ((tmp >> 11) & 31);
  /* remaining: 16 bits */
  return (10);
}

static uint32_t
pack6_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 6;
  tmp |= (*(in + 2) - base) << 12;
  tmp |= (*(in + 3) - base) << 18;
  tmp |= (*(in + 4) - base) << 24;
  tmp |= (*(in + 5) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 5) - base) >> (6 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 10;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 22;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 10) - base) >> (6 - 2);
  tmp |= (*(in + 11) - base) << 2;
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 14;
  tmp |= (*(in + 14) - base) << 20;
  tmp |= (*(in + 15) - base) << 26;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 12) */
  *(uint32_t *)out = tmp;
  return (12);
}

static uint32_t
unpack6_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 63);
  *(out + 1)  = base + ((tmp >> 6) & 63);
  *(out + 2)  = base + ((tmp >> 12) & 63);
  *(out + 3)  = base + ((tmp >> 18) & 63);
  *(out + 4)  = base + ((tmp >> 24) & 63);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 63);
  *(out + 7)  = base + ((tmp >> 10) & 63);
  *(out + 8)  = base + ((tmp >> 16) & 63);
  *(out + 9)  = base + ((tmp >> 22) & 63);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 2) & 63);
  *(out + 12)  = base + ((tmp >> 8) & 63);
  *(out + 13)  = base + ((tmp >> 14) & 63);
  *(out + 14)  = base + ((tmp >> 20) & 63);
  *(out + 15)  = base + ((tmp >> 26) & 63);
  /* remaining: 0 bits */
  return (12);
}

static uint32_t
pack7_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 7;
  tmp |= (*(in + 2) - base) << 14;
  tmp |= (*(in + 3) - base) << 21;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) >> (7 - 3);
  tmp |= (*(in + 5) - base) << 3;
  tmp |= (*(in + 6) - base) << 10;
  tmp |= (*(in + 7) - base) << 17;
  tmp |= (*(in + 8) - base) << 24;
  tmp |= (*(in + 9) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 9) - base) >> (7 - 6);
  tmp |= (*(in + 10) - base) << 6;
  tmp |= (*(in + 11) - base) << 13;
  tmp |= (*(in + 12) - base) << 20;
  tmp |= (*(in + 13) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 13) - base) >> (7 - 2);
  tmp |= (*(in + 14) - base) << 2;
  tmp |= (*(in + 15) - base) << 9;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 14) */
  *(uint32_t *)out = tmp;
  return (14);
}

static uint32_t
unpack7_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 127);
  *(out + 1)  = base + ((tmp >> 7) & 127);
  *(out + 2)  = base + ((tmp >> 14) & 127);
  *(out + 3)  = base + ((tmp >> 21) & 127);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 127);
  *(out + 6)  = base + ((tmp >> 10) & 127);
  *(out + 7)  = base + ((tmp >> 17) & 127);
  *(out + 8)  = base + ((tmp >> 24) & 127);
  *(out + 9)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (7 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 127);
  *(out + 11)  = base + ((tmp >> 13) & 127);
  *(out + 12)  = base + ((tmp >> 20) & 127);
  *(out + 13)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (7 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 127);
  *(out + 15)  = base + ((tmp >> 9) & 127);
  /* remaining: 16 bits */
  return (14);
}

static uint32_t
pack8_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 8;
  tmp |= (*(in + 6) - base) << 16;
  tmp |= (*(in + 7) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 8;
  tmp |= (*(in + 10) - base) << 16;
  tmp |= (*(in + 11) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 8;
  tmp |= (*(in + 14) - base) << 16;
  tmp |= (*(in + 15) - base) << 24;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 16) */
  *(uint32_t *)out = tmp;
  return (16);
}

static uint32_t
unpack8_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 255);
  *(out + 1)  = base + ((tmp >> 8) & 255);
  *(out + 2)  = base + ((tmp >> 16) & 255);
  *(out + 3)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 4)  = base + ((tmp >> 0) & 255);
  *(out + 5)  = base + ((tmp >> 8) & 255);
  *(out + 6)  = base + ((tmp >> 16) & 255);
  *(out + 7)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 8)  = base + ((tmp >> 0) & 255);
  *(out + 9)  = base + ((tmp >> 8) & 255);
  *(out + 10)  = base + ((tmp >> 16) & 255);
  *(out + 11)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 12)  = base + ((tmp >> 0) & 255);
  *(out + 13)  = base + ((tmp >> 8) & 255);
  *(out + 14)  = base + ((tmp >> 16) & 255);
  *(out + 15)  = base + ((tmp >> 24) & 255);
  /* remaining: 0 bits */
  return (16);
}

static uint32_t
pack9_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 9;
  tmp |= (*(in + 2) - base) << 18;
  tmp |= (*(in + 3) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (9 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 13;
  tmp |= (*(in + 6) - base) << 22;
  tmp |= (*(in + 7) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 7) - base) >> (9 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 17;
  tmp |= (*(in + 10) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 10) - base) >> (9 - 3);
  tmp |= (*(in + 11) - base) << 3;
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 21;
  tmp |= (*(in + 14) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 14) - base) >> (9 - 7);
  tmp |= (*(in + 15) - base) << 7;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 18) */
  *(uint32_t *)out = tmp;
  return (18);
}

static uint32_t
unpack9_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 511);
  *(out + 1)  = base + ((tmp >> 9) & 511);
  *(out + 2)  = base + ((tmp >> 18) & 511);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 511);
  *(out + 5)  = base + ((tmp >> 13) & 511);
  *(out + 6)  = base + ((tmp >> 22) & 511);
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 511);
  *(out + 9)  = base + ((tmp >> 17) & 511);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 3)) << (9 - 3);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 3) & 511);
  *(out + 12)  = base + ((tmp >> 12) & 511);
  *(out + 13)  = base + ((tmp >> 21) & 511);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 7)) << (9 - 7);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 7) & 511);
  /* remaining: 16 bits */
  return (18);
}

static uint32_t
pack10_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 10;
  tmp |= (*(in + 2) - base) << 20;
  tmp |= (*(in + 3) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (10 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 18;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 6) - base) >> (10 - 6);
  tmp |= (*(in + 7) - base) << 6;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 9) - base) >> (10 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 14;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 12) - base) >> (10 - 2);
  tmp |= (*(in + 13) - base) << 2;
  tmp |= (*(in + 14) - base) << 12;
  tmp |= (*(in + 15) - base) << 22;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 20) */
  *(uint32_t *)out = tmp;
  return (20);
}

static uint32_t
unpack10_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1023);
  *(out + 1)  = base + ((tmp >> 10) & 1023);
  *(out + 2)  = base + ((tmp >> 20) & 1023);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 1023);
  *(out + 5)  = base + ((tmp >> 18) & 1023);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 1023);
  *(out + 8)  = base + ((tmp >> 16) & 1023);
  *(out + 9)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 1023);
  *(out + 11)  = base + ((tmp >> 14) & 1023);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 2) & 1023);
  *(out + 14)  = base + ((tmp >> 12) & 1023);
  *(out + 15)  = base + ((tmp >> 22) & 1023);
  /* remaining: 0 bits */
  return (20);
}

static uint32_t
pack11_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 11;
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (11 - 1);
  tmp |= (*(in + 3) - base) << 1;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (11 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 13;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 8) - base) >> (11 - 3);
  tmp |= (*(in + 9) - base) << 3;
  tmp |= (*(in + 10) - base) << 14;
  tmp |= (*(in + 11) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 11) - base) >> (11 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 15;
  tmp |= (*(in + 14) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 14) - base) >> (11 - 5);
  tmp |= (*(in + 15) - base) << 5;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 22) */
  *(uint32_t *)out = tmp;
  return (22);
}

static uint32_t
unpack11_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2047);
  *(out + 1)  = base + ((tmp >> 11) & 2047);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 2047);
  *(out + 4)  = base + ((tmp >> 12) & 2047);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 2047);
  *(out + 7)  = base + ((tmp >> 13) & 2047);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 3)) << (11 - 3);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 3) & 2047);
  *(out + 10)  = base + ((tmp >> 14) & 2047);
  *(out + 11)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (11 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 2047);
  *(out + 13)  = base + ((tmp >> 15) & 2047);
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 5)) << (11 - 5);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 5) & 2047);
  /* remaining: 16 bits */
  return (22);
}

static uint32_t
pack12_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 12;
  tmp |= (*(in + 10) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 10) - base) >> (12 - 4);
  tmp |= (*(in + 11) - base) << 4;
  tmp |= (*(in + 12) - base) << 16;
  tmp |= (*(in + 13) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 13) - base) >> (12 - 8);
  tmp |= (*(in + 14) - base) << 8;
  tmp |= (*(in + 15) - base) << 20;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 24) */
  *(uint32_t *)out = tmp;
  return (24);
}

static uint32_t
unpack12_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4095);
  *(out + 1)  = base + ((tmp >> 12) & 4095);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 4095);
  *(out + 4)  = base + ((tmp >> 16) & 4095);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 4095);
  *(out + 7)  = base + ((tmp >> 20) & 4095);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 8)  = base + ((tmp >> 0) & 4095);
  *(out + 9)  = base + ((tmp >> 12) & 4095);
  *(out + 10)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 4) & 4095);
  *(out + 12)  = base + ((tmp >> 16) & 4095);
  *(out + 13)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 8) & 4095);
  *(out + 15)  = base + ((tmp >> 20) & 4095);
  /* remaining: 0 bits */
  return (24);
}

static uint32_t
pack13_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 13;
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (13 - 7);
  tmp |= (*(in + 3) - base) << 7;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (13 - 1);
  tmp |= (*(in + 5) - base) << 1;
  tmp |= (*(in + 6) - base) << 14;
  tmp |= (*(in + 7) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 7) - base) >> (13 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 9) - base) >> (13 - 2);
  tmp |= (*(in + 10) - base) << 2;
  tmp |= (*(in + 11) - base) << 15;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 12) - base) >> (13 - 9);
  tmp |= (*(in + 13) - base) << 9;
  tmp |= (*(in + 14) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 14) - base) >> (13 - 3);
  tmp |= (*(in + 15) - base) << 3;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 26) */
  *(uint32_t *)out = tmp;
  return (26);
}

static uint32_t
unpack13_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8191);
  *(out + 1)  = base + ((tmp >> 13) & 8191);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 8191);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 8191);
  *(out + 6)  = base + ((tmp >> 14) & 8191);
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 8191);
  *(out + 9)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (13 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 8191);
  *(out + 11)  = base + ((tmp >> 15) & 8191);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 9)) << (13 - 9);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 9) & 8191);
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 3)) << (13 - 3);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 3) & 8191);
  /* remaining: 16 bits */
  return (26);
}

static uint32_t
pack14_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 14;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (14 - 10);
  tmp |= (*(in + 3) - base) << 10;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (14 - 6);
  tmp |= (*(in + 5) - base) << 6;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (14 - 2);
  tmp |= (*(in + 7) - base) << 2;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 9) - base) >> (14 - 12);
  tmp |= (*(in + 10) - base) << 12;
  tmp |= (*(in + 11) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 11) - base) >> (14 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 13) - base) >> (14 - 4);
  tmp |= (*(in + 14) - base) << 4;
  tmp |= (*(in + 15) - base) << 18;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 28) */
  *(uint32_t *)out = tmp;
  return (28);
}

static uint32_t
unpack14_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16383);
  *(out + 1)  = base + ((tmp >> 14) & 16383);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 16383);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 16383);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 16383);
  *(out + 8)  = base + ((tmp >> 16) & 16383);
  *(out + 9)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 12) & 16383);
  *(out + 11)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 16383);
  *(out + 13)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 4) & 16383);
  *(out + 15)  = base + ((tmp >> 18) & 16383);
  /* remaining: 0 bits */
  return (28);
}

static uint32_t
pack15_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 15;
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (15 - 13);
  tmp |= (*(in + 3) - base) << 13;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (15 - 11);
  tmp |= (*(in + 5) - base) << 11;
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (15 - 9);
  tmp |= (*(in + 7) - base) << 9;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 8) - base) >> (15 - 7);
  tmp |= (*(in + 9) - base) << 7;
  tmp |= (*(in + 10) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 10) - base) >> (15 - 5);
  tmp |= (*(in + 11) - base) << 5;
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 12) - base) >> (15 - 3);
  tmp |= (*(in + 13) - base) << 3;
  tmp |= (*(in + 14) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 14) - base) >> (15 - 1);
  tmp |= (*(in + 15) - base) << 1;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 30) */
  *(uint32_t *)out = tmp;
  return (30);
}

static uint32_t
unpack15_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32767);
  *(out + 1)  = base + ((tmp >> 15) & 32767);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 32767);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 32767);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 32767);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 7)) << (15 - 7);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 7) & 32767);
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 5)) << (15 - 5);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 5) & 32767);
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 3)) << (15 - 3);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 3) & 32767);
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 1)) << (15 - 1);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 1) & 32767);
  /* remaining: 16 bits */
  return (30);
}

static uint32_t
pack16_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) << 0;
  tmp |= (*(in + 3) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) << 0;
  tmp |= (*(in + 7) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 10) - base) << 0;
  tmp |= (*(in + 11) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 14) - base) << 0;
  tmp |= (*(in + 15) - base) << 16;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 32) */
  *(uint32_t *)out = tmp;
  return (32);
}

static uint32_t
unpack16_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 65535);
  *(out + 1)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 2)  = base + ((tmp >> 0) & 65535);
  *(out + 3)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 4)  = base + ((tmp >> 0) & 65535);
  *(out + 5)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 6)  = base + ((tmp >> 0) & 65535);
  *(out + 7)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 8)  = base + ((tmp >> 0) & 65535);
  *(out + 9)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 10)  = base + ((tmp >> 0) & 65535);
  *(out + 11)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 12)  = base + ((tmp >> 0) & 65535);
  *(out + 13)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 14)  = base + ((tmp >> 0) & 65535);
  *(out + 15)  = base + ((tmp >> 16) & 65535);
  /* remaining: 0 bits */
  return (32);
}

static uint32_t
pack17_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (17 - 2);
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (17 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (17 - 6);
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (17 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 9) - base) >> (17 - 10);
  tmp |= (*(in + 10) - base) << 10;
  tmp |= (*(in + 11) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 11) - base) >> (17 - 12);
  tmp |= (*(in + 12) - base) << 12;
  tmp |= (*(in + 13) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 13) - base) >> (17 - 14);
  tmp |= (*(in + 14) - base) << 14;
  tmp |= (*(in + 15) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 15) - base) >> (17 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 34) */
  *(uint32_t *)out = tmp;
  return (34);
}

static uint32_t
unpack17_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 131071);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 131071);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 131071);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 131071);
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 131071);
  *(out + 9)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 10)) << (17 - 10);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 10) & 131071);
  *(out + 11)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (17 - 12);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 12) & 131071);
  *(out + 13)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 14)) << (17 - 14);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 14) & 131071);
  *(out + 15)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (17 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (34);
}

static uint32_t
pack18_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (18 - 4);
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (18 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (18 - 12);
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (18 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) >> (18 - 2);
  tmp |= (*(in + 9) - base) << 2;
  tmp |= (*(in + 10) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 10) - base) >> (18 - 6);
  tmp |= (*(in + 11) - base) << 6;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 12) - base) >> (18 - 10);
  tmp |= (*(in + 13) - base) << 10;
  tmp |= (*(in + 14) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 14) - base) >> (18 - 14);
  tmp |= (*(in + 15) - base) << 14;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 36) */
  *(uint32_t *)out = tmp;
  return (36);
}

static uint32_t
unpack18_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 262143);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 262143);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 262143);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 262143);
  *(out + 7)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 2)) << (18 - 2);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 2) & 262143);
  *(out + 10)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 6) & 262143);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 10) & 262143);
  *(out + 14)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 14) & 262143);
  /* remaining: 0 bits */
  return (36);
}

static uint32_t
pack19_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (19 - 6);
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (19 - 12);
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (19 - 18);
  tmp |= (*(in + 6) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (19 - 5);
  tmp |= (*(in + 7) - base) << 5;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) >> (19 - 11);
  tmp |= (*(in + 9) - base) << 11;
  tmp |= (*(in + 10) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 10) - base) >> (19 - 17);
  tmp |= (*(in + 11) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 11) - base) >> (19 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 13) - base) >> (19 - 10);
  tmp |= (*(in + 14) - base) << 10;
  tmp |= (*(in + 15) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 15) - base) >> (19 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 38) */
  *(uint32_t *)out = tmp;
  return (38);
}

static uint32_t
unpack19_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 524287);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 524287);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 524287);
  *(out + 5)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 18)) << (19 - 18);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 5)) << (19 - 5);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 5) & 524287);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 11)) << (19 - 11);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 11) & 524287);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 17)) << (19 - 17);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (19 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 524287);
  *(out + 13)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 10)) << (19 - 10);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 10) & 524287);
  *(out + 15)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (19 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (38);
}

static uint32_t
pack20_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 9) - base) >> (20 - 8);
  tmp |= (*(in + 10) - base) << 8;
  tmp |= (*(in + 11) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 11) - base) >> (20 - 16);
  tmp |= (*(in + 12) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 12) - base) >> (20 - 4);
  tmp |= (*(in + 13) - base) << 4;
  tmp |= (*(in + 14) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 14) - base) >> (20 - 12);
  tmp |= (*(in + 15) - base) << 12;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 40) */
  *(uint32_t *)out = tmp;
  return (40);
}

static uint32_t
unpack20_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1048575);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 1048575);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 1048575);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 1048575);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 8)  = base + ((tmp >> 0) & 1048575);
  *(out + 9)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 8) & 1048575);
  *(out + 11)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 4) & 1048575);
  *(out + 14)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 12) & 1048575);
  /* remaining: 0 bits */
  return (40);
}

static uint32_t
pack21_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (21 - 10);
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (21 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (21 - 9);
  tmp |= (*(in + 5) - base) << 9;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (21 - 19);
  tmp |= (*(in + 7) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (21 - 8);
  tmp |= (*(in + 8) - base) << 8;
  tmp |= (*(in + 9) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 9) - base) >> (21 - 18);
  tmp |= (*(in + 10) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 10) - base) >> (21 - 7);
  tmp |= (*(in + 11) - base) << 7;
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 12) - base) >> (21 - 17);
  tmp |= (*(in + 13) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 13) - base) >> (21 - 6);
  tmp |= (*(in + 14) - base) << 6;
  tmp |= (*(in + 15) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 15) - base) >> (21 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 42) */
  *(uint32_t *)out = tmp;
  return (42);
}

static uint32_t
unpack21_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2097151);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 2097151);
  *(out + 3)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (21 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 9)) << (21 - 9);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 9) & 2097151);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 19)) << (21 - 19);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (21 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 2097151);
  *(out + 9)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 18)) << (21 - 18);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 7)) << (21 - 7);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 7) & 2097151);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 17)) << (21 - 17);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 6)) << (21 - 6);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 6) & 2097151);
  *(out + 15)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (21 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (42);
}

static uint32_t
pack22_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (22 - 12);
  tmp |= (*(in + 2) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (22 - 2);
  tmp |= (*(in + 3) - base) << 2;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (22 - 14);
  tmp |= (*(in + 5) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (22 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (22 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) >> (22 - 6);
  tmp |= (*(in + 9) - base) << 6;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 10) - base) >> (22 - 18);
  tmp |= (*(in + 11) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 11) - base) >> (22 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 13) - base) >> (22 - 20);
  tmp |= (*(in + 14) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 14) - base) >> (22 - 10);
  tmp |= (*(in + 15) - base) << 10;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 44) */
  *(uint32_t *)out = tmp;
  return (44);
}

static uint32_t
unpack22_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4194303);
  *(out + 1)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 2) & 4194303);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 4194303);
  *(out + 7)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 6)) << (22 - 6);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 6) & 4194303);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 18)) << (22 - 18);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (22 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 4194303);
  *(out + 13)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 20)) << (22 - 20);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 10)) << (22 - 10);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 10) & 4194303);
  /* remaining: 0 bits */
  return (44);
}

static uint32_t
pack23_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (23 - 14);
  tmp |= (*(in + 2) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (23 - 5);
  tmp |= (*(in + 3) - base) << 5;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (23 - 19);
  tmp |= (*(in + 5) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (23 - 10);
  tmp |= (*(in + 6) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (23 - 1);
  tmp |= (*(in + 7) - base) << 1;
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) >> (23 - 15);
  tmp |= (*(in + 9) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 9) - base) >> (23 - 6);
  tmp |= (*(in + 10) - base) << 6;
  tmp |= (*(in + 11) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 11) - base) >> (23 - 20);
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 12) - base) >> (23 - 11);
  tmp |= (*(in + 13) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 13) - base) >> (23 - 2);
  tmp |= (*(in + 14) - base) << 2;
  tmp |= (*(in + 15) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 15) - base) >> (23 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 46) */
  *(uint32_t *)out = tmp;
  return (46);
}

static uint32_t
unpack23_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8388607);
  *(out + 1)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 14)) << (23 - 14);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 5)) << (23 - 5);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 5) & 8388607);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 19)) << (23 - 19);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 10)) << (23 - 10);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 1)) << (23 - 1);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 1) & 8388607);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 15)) << (23 - 15);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (23 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 8388607);
  *(out + 11)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 20)) << (23 - 20);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 11)) << (23 - 11);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (23 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 8388607);
  *(out + 15)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (23 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (46);
}

static uint32_t
pack24_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (24 - 16);
  tmp |= (*(in + 6) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (24 - 8);
  tmp |= (*(in + 7) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 9) - base) >> (24 - 16);
  tmp |= (*(in + 10) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 10) - base) >> (24 - 8);
  tmp |= (*(in + 11) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 12) - base) << 0;
  tmp |= (*(in + 13) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 13) - base) >> (24 - 16);
  tmp |= (*(in + 14) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 14) - base) >> (24 - 8);
  tmp |= (*(in + 15) - base) << 8;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 48) */
  *(uint32_t *)out = tmp;
  return (48);
}

static uint32_t
unpack24_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16777215);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 4)  = base + ((tmp >> 0) & 16777215);
  *(out + 5)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 8)  = base + ((tmp >> 0) & 16777215);
  *(out + 9)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 12)  = base + ((tmp >> 0) & 16777215);
  *(out + 13)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 8) & 16777215);
  /* remaining: 0 bits */
  return (48);
}

static uint32_t
pack25_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (25 - 18);
  tmp |= (*(in + 2) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (25 - 11);
  tmp |= (*(in + 3) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (25 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (25 - 22);
  tmp |= (*(in + 6) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (25 - 15);
  tmp |= (*(in + 7) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (25 - 8);
  tmp |= (*(in + 8) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (25 - 1);
  tmp |= (*(in + 9) - base) << 1;
  tmp |= (*(in + 10) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 10) - base) >> (25 - 19);
  tmp |= (*(in + 11) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 11) - base) >> (25 - 12);
  tmp |= (*(in + 12) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 12) - base) >> (25 - 5);
  tmp |= (*(in + 13) - base) << 5;
  tmp |= (*(in + 14) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 14) - base) >> (25 - 23);
  tmp |= (*(in + 15) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 15) - base) >> (25 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 50) */
  *(uint32_t *)out = tmp;
  return (50);
}

static uint32_t
unpack25_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 33554431);
  *(out + 1)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 18)) << (25 - 18);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 11)) << (25 - 11);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (25 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 33554431);
  *(out + 5)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 22)) << (25 - 22);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 15)) << (25 - 15);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (25 - 8);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 1)) << (25 - 1);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 1) & 33554431);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 19)) << (25 - 19);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (25 - 12);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 5)) << (25 - 5);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 5) & 33554431);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 23)) << (25 - 23);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (25 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (50);
}

static uint32_t
pack26_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (26 - 20);
  tmp |= (*(in + 2) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (26 - 14);
  tmp |= (*(in + 3) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (26 - 8);
  tmp |= (*(in + 4) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (26 - 2);
  tmp |= (*(in + 5) - base) << 2;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (26 - 22);
  tmp |= (*(in + 7) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (26 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (26 - 10);
  tmp |= (*(in + 9) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (26 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 11) - base) >> (26 - 24);
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 12) - base) >> (26 - 18);
  tmp |= (*(in + 13) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 13) - base) >> (26 - 12);
  tmp |= (*(in + 14) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 14) - base) >> (26 - 6);
  tmp |= (*(in + 15) - base) << 6;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 52) */
  *(uint32_t *)out = tmp;
  return (52);
}

static uint32_t
unpack26_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 67108863);
  *(out + 1)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 2) & 67108863);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 10)) << (26 - 10);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (26 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 67108863);
  *(out + 11)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 24)) << (26 - 24);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 18)) << (26 - 18);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 12)) << (26 - 12);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 6)) << (26 - 6);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 6) & 67108863);
  /* remaining: 0 bits */
  return (52);
}

static uint32_t
pack27_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (27 - 22);
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (27 - 17);
  tmp |= (*(in + 3) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (27 - 12);
  tmp |= (*(in + 4) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (27 - 7);
  tmp |= (*(in + 5) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (27 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (27 - 24);
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) >> (27 - 19);
  tmp |= (*(in + 9) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (27 - 14);
  tmp |= (*(in + 10) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 10) - base) >> (27 - 9);
  tmp |= (*(in + 11) - base) << 9;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (27 - 4);
  tmp |= (*(in + 12) - base) << 4;
  tmp |= (*(in + 13) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 13) - base) >> (27 - 26);
  tmp |= (*(in + 14) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 14) - base) >> (27 - 21);
  tmp |= (*(in + 15) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 15) - base) >> (27 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 54) */
  *(uint32_t *)out = tmp;
  return (54);
}

static uint32_t
unpack27_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 134217727);
  *(out + 1)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 22)) << (27 - 22);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 17)) << (27 - 17);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (27 - 12);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 7)) << (27 - 7);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 7;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (27 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 134217727);
  *(out + 7)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (27 - 24);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 19)) << (27 - 19);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 14)) << (27 - 14);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 9)) << (27 - 9);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 9;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (27 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 134217727);
  *(out + 13)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 26)) << (27 - 26);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 21)) << (27 - 21);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (27 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (54);
}

static uint32_t
pack28_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 8) - base) << 0;
  tmp |= (*(in + 9) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (28 - 24);
  tmp |= (*(in + 10) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 10) - base) >> (28 - 20);
  tmp |= (*(in + 11) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (28 - 16);
  tmp |= (*(in + 12) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 12) - base) >> (28 - 12);
  tmp |= (*(in + 13) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 13) - base) >> (28 - 8);
  tmp |= (*(in + 14) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 14) - base) >> (28 - 4);
  tmp |= (*(in + 15) - base) << 4;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 56) */
  *(uint32_t *)out = tmp;
  return (56);
}

static uint32_t
unpack28_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 268435455);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 268435455);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 8)  = base + ((tmp >> 0) & 268435455);
  *(out + 9)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 4) & 268435455);
  /* remaining: 0 bits */
  return (56);
}

static uint32_t
pack29_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (29 - 26);
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (29 - 23);
  tmp |= (*(in + 3) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (29 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (29 - 17);
  tmp |= (*(in + 5) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (29 - 14);
  tmp |= (*(in + 6) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (29 - 11);
  tmp |= (*(in + 7) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (29 - 8);
  tmp |= (*(in + 8) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (29 - 5);
  tmp |= (*(in + 9) - base) << 5;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (29 - 2);
  tmp |= (*(in + 10) - base) << 2;
  tmp |= (*(in + 11) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 11) - base) >> (29 - 28);
  tmp |= (*(in + 12) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 12) - base) >> (29 - 25);
  tmp |= (*(in + 13) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 13) - base) >> (29 - 22);
  tmp |= (*(in + 14) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 14) - base) >> (29 - 19);
  tmp |= (*(in + 15) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 15) - base) >> (29 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 58) */
  *(uint32_t *)out = tmp;
  return (58);
}

static uint32_t
unpack29_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 536870911);
  *(out + 1)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 26)) << (29 - 26);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 23)) << (29 - 23);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (29 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 17)) << (29 - 17);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 14)) << (29 - 14);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 11)) << (29 - 11);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (29 - 8);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 5)) << (29 - 5);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 5;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (29 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 536870911);
  *(out + 11)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 28)) << (29 - 28);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 25)) << (29 - 25);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 22)) << (29 - 22);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 19)) << (29 - 19);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (29 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (58);
}

static uint32_t
pack30_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (30 - 28);
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (30 - 26);
  tmp |= (*(in + 3) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (30 - 24);
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (30 - 22);
  tmp |= (*(in + 5) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (30 - 20);
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (30 - 18);
  tmp |= (*(in + 7) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (30 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (30 - 14);
  tmp |= (*(in + 9) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (30 - 12);
  tmp |= (*(in + 10) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 10) - base) >> (30 - 10);
  tmp |= (*(in + 11) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 11) - base) >> (30 - 8);
  tmp |= (*(in + 12) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 12) - base) >> (30 - 6);
  tmp |= (*(in + 13) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 13) - base) >> (30 - 4);
  tmp |= (*(in + 14) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 14) - base) >> (30 - 2);
  tmp |= (*(in + 15) - base) << 2;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 60) */
  *(uint32_t *)out = tmp;
  return (60);
}

static uint32_t
unpack30_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1073741823);
  *(out + 1)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 14)) << (30 - 14);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (30 - 12);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 10)) << (30 - 10);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (30 - 8);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 6)) << (30 - 6);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (30 - 4);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 2)) << (30 - 2);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 2) & 1073741823);
  /* remaining: 0 bits */
  return (60);
}

static uint32_t
pack31_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (31 - 30);
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (31 - 29);
  tmp |= (*(in + 3) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (31 - 28);
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (31 - 27);
  tmp |= (*(in + 5) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (31 - 26);
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (31 - 25);
  tmp |= (*(in + 7) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (31 - 24);
  tmp |= (*(in + 8) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 8) - base) >> (31 - 23);
  tmp |= (*(in + 9) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 9) - base) >> (31 - 22);
  tmp |= (*(in + 10) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 10) - base) >> (31 - 21);
  tmp |= (*(in + 11) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 11) - base) >> (31 - 20);
  tmp |= (*(in + 12) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 12) - base) >> (31 - 19);
  tmp |= (*(in + 13) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 13) - base) >> (31 - 18);
  tmp |= (*(in + 14) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 14) - base) >> (31 - 17);
  tmp |= (*(in + 15) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 15) - base) >> (31 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 62) */
  *(uint32_t *)out = tmp;
  return (62);
}

static uint32_t
unpack31_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2147483647);
  *(out + 1)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 30)) << (31 - 30);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 29)) << (31 - 29);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 28)) << (31 - 28);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 27)) << (31 - 27);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 26)) << (31 - 26);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 25)) << (31 - 25);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (31 - 24);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 23)) << (31 - 23);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 22)) << (31 - 22);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 21)) << (31 - 21);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 20)) << (31 - 20);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 19)) << (31 - 19);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 18)) << (31 - 18);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 17)) << (31 - 17);
  *(out + 14) += base;
  *(out + 15)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 15) |= (tmp % (1U << 16)) << (31 - 16);
  *(out + 15) += base;
  /* remaining: 16 bits */
  return (62);
}

static uint32_t
pack32_16(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  memcpy(out, in, 16 * sizeof(uint32_t));
  return 16 * sizeof(uint32_t);
}

static uint32_t
unpack32_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  (void)base;
  memcpy(out, in, 16 * sizeof(uint32_t));
  return 16 * sizeof(uint32_t);
}

for_packfunc_t for_pack16[33] = {
                       pack0_n,
                       pack1_16,
                       pack2_16,
                       pack3_16,
                       pack4_16,
                       pack5_16,
                       pack6_16,
                       pack7_16,
                       pack8_16,
                       pack9_16,
                       pack10_16,
                       pack11_16,
                       pack12_16,
                       pack13_16,
                       pack14_16,
                       pack15_16,
                       pack16_16,
                       pack17_16,
                       pack18_16,
                       pack19_16,
                       pack20_16,
                       pack21_16,
                       pack22_16,
                       pack23_16,
                       pack24_16,
                       pack25_16,
                       pack26_16,
                       pack27_16,
                       pack28_16,
                       pack29_16,
                       pack30_16,
                       pack31_16,
                       pack32_16
};

for_unpackfunc_t for_unpack16[33] = {
                       unpack0_n,
                       unpack1_16,
                       unpack2_16,
                       unpack3_16,
                       unpack4_16,
                       unpack5_16,
                       unpack6_16,
                       unpack7_16,
                       unpack8_16,
                       unpack9_16,
                       unpack10_16,
                       unpack11_16,
                       unpack12_16,
                       unpack13_16,
                       unpack14_16,
                       unpack15_16,
                       unpack16_16,
                       unpack17_16,
                       unpack18_16,
                       unpack19_16,
                       unpack20_16,
                       unpack21_16,
                       unpack22_16,
                       unpack23_16,
                       unpack24_16,
                       unpack25_16,
                       unpack26_16,
                       unpack27_16,
                       unpack28_16,
                       unpack29_16,
                       unpack30_16,
                       unpack31_16,
                       unpack32_16
};

static uint32_t
pack1_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 1;
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 3;
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 5;
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 7;
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 1) */
  *(uint32_t *)out = tmp;
  return (1);
}

static uint32_t
unpack1_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1);
  *(out + 1)  = base + ((tmp >> 1) & 1);
  *(out + 2)  = base + ((tmp >> 2) & 1);
  *(out + 3)  = base + ((tmp >> 3) & 1);
  *(out + 4)  = base + ((tmp >> 4) & 1);
  *(out + 5)  = base + ((tmp >> 5) & 1);
  *(out + 6)  = base + ((tmp >> 6) & 1);
  *(out + 7)  = base + ((tmp >> 7) & 1);
  /* remaining: 24 bits */
  return (1);
}

static uint32_t
pack2_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 2;
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 6;
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 10;
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 14;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 2) */
  *(uint32_t *)out = tmp;
  return (2);
}

static uint32_t
unpack2_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 2) & 3);
  *(out + 2)  = base + ((tmp >> 4) & 3);
  *(out + 3)  = base + ((tmp >> 6) & 3);
  *(out + 4)  = base + ((tmp >> 8) & 3);
  *(out + 5)  = base + ((tmp >> 10) & 3);
  *(out + 6)  = base + ((tmp >> 12) & 3);
  *(out + 7)  = base + ((tmp >> 14) & 3);
  /* remaining: 16 bits */
  return (2);
}

static uint32_t
pack3_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 3;
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 9;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 15;
  tmp |= (*(in + 6) - base) << 18;
  tmp |= (*(in + 7) - base) << 21;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 3) */
  *(uint32_t *)out = tmp;
  return (3);
}

static uint32_t
unpack3_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 3) & 7);
  *(out + 2)  = base + ((tmp >> 6) & 7);
  *(out + 3)  = base + ((tmp >> 9) & 7);
  *(out + 4)  = base + ((tmp >> 12) & 7);
  *(out + 5)  = base + ((tmp >> 15) & 7);
  *(out + 6)  = base + ((tmp >> 18) & 7);
  *(out + 7)  = base + ((tmp >> 21) & 7);
  /* remaining: 8 bits */
  return (3);
}

static uint32_t
pack4_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 4;
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 12;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 20;
  tmp |= (*(in + 6) - base) << 24;
  tmp |= (*(in + 7) - base) << 28;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 4) */
  *(uint32_t *)out = tmp;
  return (4);
}

static uint32_t
unpack4_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 4) & 15);
  *(out + 2)  = base + ((tmp >> 8) & 15);
  *(out + 3)  = base + ((tmp >> 12) & 15);
  *(out + 4)  = base + ((tmp >> 16) & 15);
  *(out + 5)  = base + ((tmp >> 20) & 15);
  *(out + 6)  = base + ((tmp >> 24) & 15);
  *(out + 7)  = base + ((tmp >> 28) & 15);
  /* remaining: 0 bits */
  return (4);
}

static uint32_t
pack5_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 5;
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 15;
  tmp |= (*(in + 4) - base) << 20;
  tmp |= (*(in + 5) - base) << 25;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 6) - base) >> (5 - 3);
  tmp |= (*(in + 7) - base) << 3;
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 5) */
  *(uint32_t *)out = tmp;
  return (5);
}

static uint32_t
unpack5_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 31);
  *(out + 1)  = base + ((tmp >> 5) & 31);
  *(out + 2)  = base + ((tmp >> 10) & 31);
  *(out + 3)  = base + ((tmp >> 15) & 31);
  *(out + 4)  = base + ((tmp >> 20) & 31);
  *(out + 5)  = base + ((tmp >> 25) & 31);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 31);
  /* remaining: 24 bits */
  return (5);
}

static uint32_t
pack6_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 6;
  tmp |= (*(in + 2) - base) << 12;
  tmp |= (*(in + 3) - base) << 18;
  tmp |= (*(in + 4) - base) << 24;
  tmp |= (*(in + 5) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 5) - base) >> (6 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 10;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 6) */
  *(uint32_t *)out = tmp;
  return (6);
}

static uint32_t
unpack6_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 63);
  *(out + 1)  = base + ((tmp >> 6) & 63);
  *(out + 2)  = base + ((tmp >> 12) & 63);
  *(out + 3)  = base + ((tmp >> 18) & 63);
  *(out + 4)  = base + ((tmp >> 24) & 63);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 63);
  *(out + 7)  = base + ((tmp >> 10) & 63);
  /* remaining: 16 bits */
  return (6);
}

static uint32_t
pack7_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 7;
  tmp |= (*(in + 2) - base) << 14;
  tmp |= (*(in + 3) - base) << 21;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) >> (7 - 3);
  tmp |= (*(in + 5) - base) << 3;
  tmp |= (*(in + 6) - base) << 10;
  tmp |= (*(in + 7) - base) << 17;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 7) */
  *(uint32_t *)out = tmp;
  return (7);
}

static uint32_t
unpack7_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 127);
  *(out + 1)  = base + ((tmp >> 7) & 127);
  *(out + 2)  = base + ((tmp >> 14) & 127);
  *(out + 3)  = base + ((tmp >> 21) & 127);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 127);
  *(out + 6)  = base + ((tmp >> 10) & 127);
  *(out + 7)  = base + ((tmp >> 17) & 127);
  /* remaining: 8 bits */
  return (7);
}

static uint32_t
pack8_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 8;
  tmp |= (*(in + 6) - base) << 16;
  tmp |= (*(in + 7) - base) << 24;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 8) */
  *(uint32_t *)out = tmp;
  return (8);
}

static uint32_t
unpack8_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 255);
  *(out + 1)  = base + ((tmp >> 8) & 255);
  *(out + 2)  = base + ((tmp >> 16) & 255);
  *(out + 3)  = base + ((tmp >> 24) & 255);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 4)  = base + ((tmp >> 0) & 255);
  *(out + 5)  = base + ((tmp >> 8) & 255);
  *(out + 6)  = base + ((tmp >> 16) & 255);
  *(out + 7)  = base + ((tmp >> 24) & 255);
  /* remaining: 0 bits */
  return (8);
}

static uint32_t
pack9_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 9;
  tmp |= (*(in + 2) - base) << 18;
  tmp |= (*(in + 3) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (9 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 13;
  tmp |= (*(in + 6) - base) << 22;
  tmp |= (*(in + 7) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 7) - base) >> (9 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 9) */
  *(uint32_t *)out = tmp;
  return (9);
}

static uint32_t
unpack9_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 511);
  *(out + 1)  = base + ((tmp >> 9) & 511);
  *(out + 2)  = base + ((tmp >> 18) & 511);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 511);
  *(out + 5)  = base + ((tmp >> 13) & 511);
  *(out + 6)  = base + ((tmp >> 22) & 511);
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (9);
}

static uint32_t
pack10_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 10;
  tmp |= (*(in + 2) - base) << 20;
  tmp |= (*(in + 3) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 3) - base) >> (10 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 18;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 6) - base) >> (10 - 6);
  tmp |= (*(in + 7) - base) << 6;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 10) */
  *(uint32_t *)out = tmp;
  return (10);
}

static uint32_t
unpack10_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1023);
  *(out + 1)  = base + ((tmp >> 10) & 1023);
  *(out + 2)  = base + ((tmp >> 20) & 1023);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 1023);
  *(out + 5)  = base + ((tmp >> 18) & 1023);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 1023);
  /* remaining: 16 bits */
  return (10);
}

static uint32_t
pack11_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 11;
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (11 - 1);
  tmp |= (*(in + 3) - base) << 1;
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (11 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 13;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 11) */
  *(uint32_t *)out = tmp;
  return (11);
}

static uint32_t
unpack11_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2047);
  *(out + 1)  = base + ((tmp >> 11) & 2047);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 2047);
  *(out + 4)  = base + ((tmp >> 12) & 2047);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 2047);
  *(out + 7)  = base + ((tmp >> 13) & 2047);
  /* remaining: 8 bits */
  return (11);
}

static uint32_t
pack12_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 12) */
  *(uint32_t *)out = tmp;
  return (12);
}

static uint32_t
unpack12_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4095);
  *(out + 1)  = base + ((tmp >> 12) & 4095);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 4095);
  *(out + 4)  = base + ((tmp >> 16) & 4095);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 4095);
  *(out + 7)  = base + ((tmp >> 20) & 4095);
  /* remaining: 0 bits */
  return (12);
}

static uint32_t
pack13_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 13;
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (13 - 7);
  tmp |= (*(in + 3) - base) << 7;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (13 - 1);
  tmp |= (*(in + 5) - base) << 1;
  tmp |= (*(in + 6) - base) << 14;
  tmp |= (*(in + 7) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 7) - base) >> (13 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 13) */
  *(uint32_t *)out = tmp;
  return (13);
}

static uint32_t
unpack13_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8191);
  *(out + 1)  = base + ((tmp >> 13) & 8191);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 8191);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 8191);
  *(out + 6)  = base + ((tmp >> 14) & 8191);
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (13);
}

static uint32_t
pack14_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 14;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (14 - 10);
  tmp |= (*(in + 3) - base) << 10;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (14 - 6);
  tmp |= (*(in + 5) - base) << 6;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (14 - 2);
  tmp |= (*(in + 7) - base) << 2;
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 14) */
  *(uint32_t *)out = tmp;
  return (14);
}

static uint32_t
unpack14_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16383);
  *(out + 1)  = base + ((tmp >> 14) & 16383);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 16383);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 16383);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 16383);
  /* remaining: 16 bits */
  return (14);
}

static uint32_t
pack15_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 15;
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) >> (15 - 13);
  tmp |= (*(in + 3) - base) << 13;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) >> (15 - 11);
  tmp |= (*(in + 5) - base) << 11;
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) >> (15 - 9);
  tmp |= (*(in + 7) - base) << 9;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 15) */
  *(uint32_t *)out = tmp;
  return (15);
}

static uint32_t
unpack15_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32767);
  *(out + 1)  = base + ((tmp >> 15) & 32767);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 32767);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 32767);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 32767);
  /* remaining: 8 bits */
  return (15);
}

static uint32_t
pack16_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 2) - base) << 0;
  tmp |= (*(in + 3) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 6) - base) << 0;
  tmp |= (*(in + 7) - base) << 16;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 16) */
  *(uint32_t *)out = tmp;
  return (16);
}

static uint32_t
unpack16_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 65535);
  *(out + 1)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 2)  = base + ((tmp >> 0) & 65535);
  *(out + 3)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 4)  = base + ((tmp >> 0) & 65535);
  *(out + 5)  = base + ((tmp >> 16) & 65535);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 6)  = base + ((tmp >> 0) & 65535);
  *(out + 7)  = base + ((tmp >> 16) & 65535);
  /* remaining: 0 bits */
  return (16);
}

static uint32_t
pack17_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (17 - 2);
  tmp |= (*(in + 2) - base) << 2;
  tmp |= (*(in + 3) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (17 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (17 - 6);
  tmp |= (*(in + 6) - base) << 6;
  tmp |= (*(in + 7) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (17 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 17) */
  *(uint32_t *)out = tmp;
  return (17);
}

static uint32_t
unpack17_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 131071);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 131071);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 131071);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 131071);
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (17);
}

static uint32_t
pack18_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (18 - 4);
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (18 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (18 - 12);
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 7) - base) >> (18 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 18) */
  *(uint32_t *)out = tmp;
  return (18);
}

static uint32_t
unpack18_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 262143);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 262143);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 262143);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 262143);
  *(out + 7)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 7) += base;
  /* remaining: 16 bits */
  return (18);
}

static uint32_t
pack19_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (19 - 6);
  tmp |= (*(in + 2) - base) << 6;
  tmp |= (*(in + 3) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (19 - 12);
  tmp |= (*(in + 4) - base) << 12;
  tmp |= (*(in + 5) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 5) - base) >> (19 - 18);
  tmp |= (*(in + 6) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (19 - 5);
  tmp |= (*(in + 7) - base) << 5;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 19) */
  *(uint32_t *)out = tmp;
  return (19);
}

static uint32_t
unpack19_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 524287);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 524287);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 524287);
  *(out + 5)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 18)) << (19 - 18);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 5)) << (19 - 5);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 5) & 524287);
  /* remaining: 8 bits */
  return (19);
}

static uint32_t
pack20_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 20) */
  *(uint32_t *)out = tmp;
  return (20);
}

static uint32_t
unpack20_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1048575);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 1048575);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 1048575);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 1048575);
  /* remaining: 0 bits */
  return (20);
}

static uint32_t
pack21_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (21 - 10);
  tmp |= (*(in + 2) - base) << 10;
  tmp |= (*(in + 3) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 3) - base) >> (21 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (21 - 9);
  tmp |= (*(in + 5) - base) << 9;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 6) - base) >> (21 - 19);
  tmp |= (*(in + 7) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (21 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 21) */
  *(uint32_t *)out = tmp;
  return (21);
}

static uint32_t
unpack21_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2097151);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 2097151);
  *(out + 3)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (21 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 9)) << (21 - 9);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 9) & 2097151);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 19)) << (21 - 19);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (21 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (21);
}

static uint32_t
pack22_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (22 - 12);
  tmp |= (*(in + 2) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (22 - 2);
  tmp |= (*(in + 3) - base) << 2;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (22 - 14);
  tmp |= (*(in + 5) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (22 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 7) - base) >> (22 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 22) */
  *(uint32_t *)out = tmp;
  return (22);
}

static uint32_t
unpack22_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 4194303);
  *(out + 1)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 2) & 4194303);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 4194303);
  *(out + 7)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 7) += base;
  /* remaining: 16 bits */
  return (22);
}

static uint32_t
pack23_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (23 - 14);
  tmp |= (*(in + 2) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (23 - 5);
  tmp |= (*(in + 3) - base) << 5;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) >> (23 - 19);
  tmp |= (*(in + 5) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (23 - 10);
  tmp |= (*(in + 6) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (23 - 1);
  tmp |= (*(in + 7) - base) << 1;
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 23) */
  *(uint32_t *)out = tmp;
  return (23);
}

static uint32_t
unpack23_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 8388607);
  *(out + 1)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 14)) << (23 - 14);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 5)) << (23 - 5);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 5) & 8388607);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 19)) << (23 - 19);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 10)) << (23 - 10);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 1)) << (23 - 1);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 1) & 8388607);
  /* remaining: 8 bits */
  return (23);
}

static uint32_t
pack24_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 4) - base) << 0;
  tmp |= (*(in + 5) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (24 - 16);
  tmp |= (*(in + 6) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (24 - 8);
  tmp |= (*(in + 7) - base) << 8;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 24) */
  *(uint32_t *)out = tmp;
  return (24);
}

static uint32_t
unpack24_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 16777215);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 16777215);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 4)  = base + ((tmp >> 0) & 16777215);
  *(out + 5)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 8) & 16777215);
  /* remaining: 0 bits */
  return (24);
}

static uint32_t
pack25_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (25 - 18);
  tmp |= (*(in + 2) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (25 - 11);
  tmp |= (*(in + 3) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (25 - 4);
  tmp |= (*(in + 4) - base) << 4;
  tmp |= (*(in + 5) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (25 - 22);
  tmp |= (*(in + 6) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (25 - 15);
  tmp |= (*(in + 7) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (25 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 25) */
  *(uint32_t *)out = tmp;
  return (25);
}

static uint32_t
unpack25_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 33554431);
  *(out + 1)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 18)) << (25 - 18);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 11)) << (25 - 11);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (25 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 33554431);
  *(out + 5)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 22)) << (25 - 22);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 15)) << (25 - 15);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 15;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (25 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (25);
}

static uint32_t
pack26_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (26 - 20);
  tmp |= (*(in + 2) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (26 - 14);
  tmp |= (*(in + 3) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (26 - 8);
  tmp |= (*(in + 4) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (26 - 2);
  tmp |= (*(in + 5) - base) << 2;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 6) - base) >> (26 - 22);
  tmp |= (*(in + 7) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (26 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 26) */
  *(uint32_t *)out = tmp;
  return (26);
}

static uint32_t
unpack26_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 67108863);
  *(out + 1)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 2) & 67108863);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 7) += base;
  /* remaining: 16 bits */
  return (26);
}

static uint32_t
pack27_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (27 - 22);
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (27 - 17);
  tmp |= (*(in + 3) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (27 - 12);
  tmp |= (*(in + 4) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (27 - 7);
  tmp |= (*(in + 5) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (27 - 2);
  tmp |= (*(in + 6) - base) << 2;
  tmp |= (*(in + 7) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 7) - base) >> (27 - 24);
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 27) */
  *(uint32_t *)out = tmp;
  return (27);
}

static uint32_t
unpack27_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 134217727);
  *(out + 1)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 22)) << (27 - 22);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 17)) << (27 - 17);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (27 - 12);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 7)) << (27 - 7);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 7;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (27 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 134217727);
  *(out + 7)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (27 - 24);
  *(out + 7) += base;
  /* remaining: 8 bits */
  return (27);
}

static uint32_t
pack28_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 28) */
  *(uint32_t *)out = tmp;
  return (28);
}

static uint32_t
unpack28_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 268435455);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 268435455);
  /* remaining: 0 bits */
  return (28);
}

static uint32_t
pack29_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (29 - 26);
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (29 - 23);
  tmp |= (*(in + 3) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (29 - 20);
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (29 - 17);
  tmp |= (*(in + 5) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (29 - 14);
  tmp |= (*(in + 6) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (29 - 11);
  tmp |= (*(in + 7) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (29 - 8);
  /* remaining: 24 bits */
  /* consumed: 1 bytes (total: 29) */
  *(uint32_t *)out = tmp;
  return (29);
}

static uint32_t
unpack29_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 536870911);
  *(out + 1)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 26)) << (29 - 26);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 23)) << (29 - 23);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (29 - 20);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 17)) << (29 - 17);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 14)) << (29 - 14);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 11)) << (29 - 11);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 11;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (29 - 8);
  *(out + 7) += base;
  /* remaining: 24 bits */
  return (29);
}

static uint32_t
pack30_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (30 - 28);
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (30 - 26);
  tmp |= (*(in + 3) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (30 - 24);
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (30 - 22);
  tmp |= (*(in + 5) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (30 - 20);
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (30 - 18);
  tmp |= (*(in + 7) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (30 - 16);
  /* remaining: 16 bits */
  /* consumed: 2 bytes (total: 30) */
  *(uint32_t *)out = tmp;
  return (30);
}

static uint32_t
unpack30_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 1073741823);
  *(out + 1)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 7) += base;
  /* remaining: 16 bits */
  return (30);
}

static uint32_t
pack31_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 1) - base) >> (31 - 30);
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 2) - base) >> (31 - 29);
  tmp |= (*(in + 3) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 3) - base) >> (31 - 28);
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 4) - base) >> (31 - 27);
  tmp |= (*(in + 5) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (31 - 26);
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 6) - base) >> (31 - 25);
  tmp |= (*(in + 7) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 7) - base) >> (31 - 24);
  /* remaining: 8 bits */
  /* consumed: 3 bytes (total: 31) */
  *(uint32_t *)out = tmp;
  return (31);
}

static uint32_t
unpack31_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2147483647);
  *(out + 1)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 30)) << (31 - 30);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 29)) << (31 - 29);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 28)) << (31 - 28);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 27)) << (31 - 27);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 26)) << (31 - 26);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 25)) << (31 - 25);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (31 - 24);
  *(out + 7) += base;
  /* remaining: 8 bits */
  return (31);
}

static uint32_t
pack32_8(uint32_t base, const uint32_t *in, uint8_t *out) {
  (void)base;
  memcpy(out, in, 8 * sizeof(uint32_t));
  return 8 * sizeof(uint32_t);
}

static uint32_t
unpack32_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  (void)base;
  memcpy(out, in, 8 * sizeof(uint32_t));
  return 8 * sizeof(uint32_t);
}

for_packfunc_t for_pack8[33] = {
                       pack0_n,
                       pack1_8,
                       pack2_8,
                       pack3_8,
                       pack4_8,
                       pack5_8,
                       pack6_8,
                       pack7_8,
                       pack8_8,
                       pack9_8,
                       pack10_8,
                       pack11_8,
                       pack12_8,
                       pack13_8,
                       pack14_8,
                       pack15_8,
                       pack16_8,
                       pack17_8,
                       pack18_8,
                       pack19_8,
                       pack20_8,
                       pack21_8,
                       pack22_8,
                       pack23_8,
                       pack24_8,
                       pack25_8,
                       pack26_8,
                       pack27_8,
                       pack28_8,
                       pack29_8,
                       pack30_8,
                       pack31_8,
                       pack32_8
};

for_unpackfunc_t for_unpack8[33] = {
                       unpack0_n,
                       unpack1_8,
                       unpack2_8,
                       unpack3_8,
                       unpack4_8,
                       unpack5_8,
                       unpack6_8,
                       unpack7_8,
                       unpack8_8,
                       unpack9_8,
                       unpack10_8,
                       unpack11_8,
                       unpack12_8,
                       unpack13_8,
                       unpack14_8,
                       unpack15_8,
                       unpack16_8,
                       unpack17_8,
                       unpack18_8,
                       unpack19_8,
                       unpack20_8,
                       unpack21_8,
                       unpack22_8,
                       unpack23_8,
                       unpack24_8,
                       unpack25_8,
                       unpack26_8,
                       unpack27_8,
                       unpack28_8,
                       unpack29_8,
                       unpack30_8,
                       unpack31_8,
                       unpack32_8
};

static uint32_t
pack1_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 1;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 2;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 3;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 4;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 5;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 6;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 7;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 1) + 7) / 8;
}

static uint32_t
unpack1_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 1);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 1) & 1);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 2) & 1);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 3) & 1);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 1);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 5) & 1);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 6) & 1);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 7) & 1);
  if (length == 8)
    goto bail;
bail:
  return ((length * 1) + 7) / 8;
}

static uint32_t
pack2_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 2;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 4;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 6;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 8;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 10;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 12;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 14;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 2) + 7) / 8;
}

static uint32_t
unpack2_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 3);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 2) & 3);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 4) & 3);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 6) & 3);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 3);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 10) & 3);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 12) & 3);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 14) & 3);
  if (length == 8)
    goto bail;
bail:
  return ((length * 2) + 7) / 8;
}

static uint32_t
pack3_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 3;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 6;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 9;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 12;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 15;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 18;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 21;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 3) + 7) / 8;
}

static uint32_t
unpack3_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 7);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 3) & 7);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 6) & 7);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 9) & 7);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 7);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 15) & 7);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 18) & 7);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 21) & 7);
  if (length == 8)
    goto bail;
bail:
  return ((length * 3) + 7) / 8;
}

static uint32_t
pack4_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 4;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 8;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 12;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 16;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 20;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 24;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 28;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 4) + 7) / 8;
}

static uint32_t
unpack4_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 15);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 4) & 15);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 8) & 15);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 12) & 15);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 16) & 15);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 20) & 15);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 24) & 15);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 28) & 15);
  if (length == 8)
    goto bail;
bail:
  return ((length * 4) + 7) / 8;
}

static uint32_t
pack5_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 5;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 10;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 15;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 20;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 25;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (5 - 3);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 3;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 5) + 7) / 8;
}

static uint32_t
unpack5_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 31);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 5) & 31);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 10) & 31);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 15) & 31);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 20) & 31);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 25) & 31);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 3) & 31);
  if (length == 8)
    goto bail;
bail:
  return ((length * 5) + 7) / 8;
}

static uint32_t
pack6_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 6;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 12;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 18;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 24;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (6 - 4);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 4;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 10;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 6) + 7) / 8;
}

static uint32_t
unpack6_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 63);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 6) & 63);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 12) & 63);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 18) & 63);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 24) & 63);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 4) & 63);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 10) & 63);
  if (length == 8)
    goto bail;
bail:
  return ((length * 6) + 7) / 8;
}

static uint32_t
pack7_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 7;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 14;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 21;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (7 - 3);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 3;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 10;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 17;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 7) + 7) / 8;
}

static uint32_t
unpack7_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 127);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 7) & 127);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 14) & 127);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 21) & 127);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 3) & 127);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 10) & 127);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 17) & 127);
  if (length == 8)
    goto bail;
bail:
  return ((length * 7) + 7) / 8;
}

static uint32_t
pack8_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 8;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 16;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 24;
  if (length == 4)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 8) + 7) / 8;
}

static uint32_t
unpack8_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 255);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 8) & 255);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 16) & 255);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 24) & 255);
  if (length == 4)
    goto bail;
bail:
  return ((length * 8) + 7) / 8;
}

static uint32_t
pack9_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 9;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 18;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (9 - 4);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 4;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 13;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 22;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (9 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 9) + 7) / 8;
}

static uint32_t
unpack9_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 511);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 9) & 511);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 18) & 511);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 511);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 13) & 511);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 22) & 511);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 9) + 7) / 8;
}

static uint32_t
pack10_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 10;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 20;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (10 - 8);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 8;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 18;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (10 - 6);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 6;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 10) + 7) / 8;
}

static uint32_t
unpack10_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 1023);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 10) & 1023);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 20) & 1023);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 1023);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 18) & 1023);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 6) & 1023);
  if (length == 8)
    goto bail;
bail:
  return ((length * 10) + 7) / 8;
}

static uint32_t
pack11_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 11;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (11 - 1);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 1;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 12;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (11 - 2);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 2;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 13;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 11) + 7) / 8;
}

static uint32_t
unpack11_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 2047);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 11) & 2047);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 1) & 2047);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 2047);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 2) & 2047);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 13) & 2047);
  if (length == 8)
    goto bail;
bail:
  return ((length * 11) + 7) / 8;
}

static uint32_t
pack12_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 12;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (12 - 4);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 4;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 16;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (12 - 8);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 8;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 20;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 12) + 7) / 8;
}

static uint32_t
unpack12_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 4095);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 12) & 4095);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 4) & 4095);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 16) & 4095);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 8) & 4095);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 20) & 4095);
  if (length == 8)
    goto bail;
bail:
  return ((length * 12) + 7) / 8;
}

static uint32_t
pack13_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 13;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (13 - 7);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 7;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (13 - 1);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 1;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 14;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (13 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 13) + 7) / 8;
}

static uint32_t
unpack13_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 8191);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 13) & 8191);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 7) & 8191);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 1) & 8191);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 14) & 8191);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 13) + 7) / 8;
}

static uint32_t
pack14_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 14;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (14 - 10);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 10;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (14 - 6);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 6;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (14 - 2);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 2;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 14) + 7) / 8;
}

static uint32_t
unpack14_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 16383);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 14) & 16383);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 10) & 16383);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 6) & 16383);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 2) & 16383);
  if (length == 8)
    goto bail;
bail:
  return ((length * 14) + 7) / 8;
}

static uint32_t
pack15_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 15;
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (15 - 13);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 13;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (15 - 11);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 11;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (15 - 9);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 9;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 15) + 7) / 8;
}

static uint32_t
unpack15_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 32767);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 15) & 32767);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 13) & 32767);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 11) & 32767);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 9) & 32767);
  if (length == 8)
    goto bail;
bail:
  return ((length * 15) + 7) / 8;
}

static uint32_t
pack16_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 16;
  if (length == 2)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 16) + 7) / 8;
}

static uint32_t
unpack16_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 65535);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 16) & 65535);
  if (length == 2)
    goto bail;
bail:
  return ((length * 16) + 7) / 8;
}

static uint32_t
pack17_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (17 - 2);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 2;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (17 - 4);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 4;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (17 - 6);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 6;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (17 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 17) + 7) / 8;
}

static uint32_t
unpack17_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 131071);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 2) & 131071);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 131071);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 6) & 131071);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 17) + 7) / 8;
}

static uint32_t
pack18_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (18 - 4);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 4;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (18 - 8);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 8;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (18 - 12);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 12;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (18 - 16);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 18) + 7) / 8;
}

static uint32_t
unpack18_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 262143);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 4) & 262143);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 262143);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 12) & 262143);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 18) + 7) / 8;
}

static uint32_t
pack19_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (19 - 6);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 6;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (19 - 12);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 12;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (19 - 18);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (19 - 5);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 5;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 19) + 7) / 8;
}

static uint32_t
unpack19_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 524287);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 6) & 524287);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 524287);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 31;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 18)) << (19 - 18);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 18;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 5)) << (19 - 5);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 5) & 524287);
  if (length == 8)
    goto bail;
bail:
  return ((length * 19) + 7) / 8;
}

static uint32_t
pack20_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (20 - 8);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 8;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (20 - 16);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (20 - 4);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 4;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (20 - 12);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 12;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 20) + 7) / 8;
}

static uint32_t
unpack20_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 1048575);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 8) & 1048575);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 4) & 1048575);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 12) & 1048575);
  if (length == 8)
    goto bail;
bail:
  return ((length * 20) + 7) / 8;
}

static uint32_t
pack21_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 21;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (21 - 10);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 10;
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (21 - 20);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (21 - 9);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 9;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (21 - 19);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (21 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 21) + 7) / 8;
}

static uint32_t
unpack21_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 2097151);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 10) & 2097151);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 31;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (21 - 20);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 9)) << (21 - 9);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 9) & 2097151);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 19)) << (21 - 19);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (21 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 21) + 7) / 8;
}

static uint32_t
pack22_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (22 - 12);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (22 - 2);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 2;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (22 - 14);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (22 - 4);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 4;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (22 - 16);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 22) + 7) / 8;
}

static uint32_t
unpack22_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 4194303);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 12;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 2) & 4194303);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 14;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 4) & 4194303);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 22) + 7) / 8;
}

static uint32_t
pack23_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (23 - 14);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (23 - 5);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 5;
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (23 - 19);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 19;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (23 - 10);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (23 - 1);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 1;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 23) + 7) / 8;
}

static uint32_t
unpack23_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 8388607);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 23;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 14)) << (23 - 14);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 14;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 5)) << (23 - 5);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 5) & 8388607);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 19)) << (23 - 19);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 10)) << (23 - 10);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 10;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 1)) << (23 - 1);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 1) & 8388607);
  if (length == 8)
    goto bail;
bail:
  return ((length * 23) + 7) / 8;
}

static uint32_t
pack24_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (24 - 16);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (24 - 8);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 8;
  if (length == 4)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 24) + 7) / 8;
}

static uint32_t
unpack24_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 16777215);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 8) & 16777215);
  if (length == 4)
    goto bail;
bail:
  return ((length * 24) + 7) / 8;
}

static uint32_t
pack25_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (25 - 18);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (25 - 11);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (25 - 4);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 4;
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (25 - 22);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (25 - 15);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 15;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (25 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 25) + 7) / 8;
}

static uint32_t
unpack25_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 33554431);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 25;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 18)) << (25 - 18);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 18;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 11)) << (25 - 11);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 11;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (25 - 4);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 33554431);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 29;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 22)) << (25 - 22);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 15)) << (25 - 15);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 15;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (25 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 25) + 7) / 8;
}

static uint32_t
pack26_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (26 - 20);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (26 - 14);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (26 - 8);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (26 - 2);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 2;
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (26 - 22);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (26 - 16);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 26) + 7) / 8;
}

static uint32_t
unpack26_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 67108863);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 14;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 8;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 2) & 67108863);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 26) + 7) / 8;
}

static uint32_t
pack27_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (27 - 22);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (27 - 17);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (27 - 12);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (27 - 7);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 7;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (27 - 2);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 2;
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (27 - 24);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 27) + 7) / 8;
}

static uint32_t
unpack27_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 134217727);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 27;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 22)) << (27 - 22);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 17)) << (27 - 17);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 17;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (27 - 12);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 12;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 7)) << (27 - 7);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 7;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (27 - 2);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 2) & 134217727);
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 29;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (27 - 24);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 27) + 7) / 8;
}

static uint32_t
pack28_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (28 - 24);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (28 - 20);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (28 - 16);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (28 - 12);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (28 - 8);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (28 - 4);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 4;
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 28) + 7) / 8;
}

static uint32_t
unpack28_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 268435455);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 4) & 268435455);
  if (length == 8)
    goto bail;
bail:
  return ((length * 28) + 7) / 8;
}

static uint32_t
pack29_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (29 - 26);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (29 - 23);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 23;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (29 - 20);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (29 - 17);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 17;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (29 - 14);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (29 - 11);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 11;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (29 - 8);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 29) + 7) / 8;
}

static uint32_t
unpack29_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 536870911);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 29;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 26)) << (29 - 26);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 23)) << (29 - 23);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 23;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 20)) << (29 - 20);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 17)) << (29 - 17);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 17;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 14)) << (29 - 14);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 14;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 11)) << (29 - 11);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 11;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (29 - 8);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 29) + 7) / 8;
}

static uint32_t
pack30_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (30 - 28);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (30 - 26);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (30 - 24);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (30 - 22);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (30 - 20);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (30 - 18);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (30 - 16);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 30) + 7) / 8;
}

static uint32_t
unpack30_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 1073741823);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 18;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 30) + 7) / 8;
}

static uint32_t
pack31_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
  tmp |= (*(in + 1) - base) << 31;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 1) - base) >> (31 - 30);
  if (length == 2)
    goto bail;
  tmp |= (*(in + 2) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 2) - base) >> (31 - 29);
  if (length == 3)
    goto bail;
  tmp |= (*(in + 3) - base) << 29;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 3) - base) >> (31 - 28);
  if (length == 4)
    goto bail;
  tmp |= (*(in + 4) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 4) - base) >> (31 - 27);
  if (length == 5)
    goto bail;
  tmp |= (*(in + 5) - base) << 27;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 5) - base) >> (31 - 26);
  if (length == 6)
    goto bail;
  tmp |= (*(in + 6) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 6) - base) >> (31 - 25);
  if (length == 7)
    goto bail;
  tmp |= (*(in + 7) - base) << 25;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  tmp  = (*(in + 7) - base) >> (31 - 24);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 31) + 7) / 8;
}

static uint32_t
unpack31_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 2147483647);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 31;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 30)) << (31 - 30);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 29)) << (31 - 29);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 29;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 28)) << (31 - 28);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 27)) << (31 - 27);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 27;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 26)) << (31 - 26);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 25)) << (31 - 25);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = tmp >> 25;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 24)) << (31 - 24);
  *(out + 7) += base;
  if (length == 8)
    goto bail;
bail:
  return ((length * 31) + 7) / 8;
}

static uint32_t
pack32_x(uint32_t base, const uint32_t *in, uint8_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp  = (*(in + 0) - base) << 0;
  if (length == 1)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
  return ((length * 32) + 7) / 8;
}

static uint32_t
unpack32_x(uint32_t base, const uint8_t *in, uint32_t *out, uint32_t length) {
  uint32_t tmp;
  if (length == 0)
    return 0;
  tmp = *(uint32_t *)in;
  *(out + 0)  = base + ((tmp >> 0) & 4294967295);
  if (length == 1)
    goto bail;
bail:
  return ((length * 32) + 7) / 8;
}

for_packxfunc_t for_packx[33] = {
                       pack0_x,
                       pack1_x,
                       pack2_x,
                       pack3_x,
                       pack4_x,
                       pack5_x,
                       pack6_x,
                       pack7_x,
                       pack8_x,
                       pack9_x,
                       pack10_x,
                       pack11_x,
                       pack12_x,
                       pack13_x,
                       pack14_x,
                       pack15_x,
                       pack16_x,
                       pack17_x,
                       pack18_x,
                       pack19_x,
                       pack20_x,
                       pack21_x,
                       pack22_x,
                       pack23_x,
                       pack24_x,
                       pack25_x,
                       pack26_x,
                       pack27_x,
                       pack28_x,
                       pack29_x,
                       pack30_x,
                       pack31_x,
                       pack32_x
};

for_unpackxfunc_t for_unpackx[33] = {
                       unpack0_x,
                       unpack1_x,
                       unpack2_x,
                       unpack3_x,
                       unpack4_x,
                       unpack5_x,
                       unpack6_x,
                       unpack7_x,
                       unpack8_x,
                       unpack9_x,
                       unpack10_x,
                       unpack11_x,
                       unpack12_x,
                       unpack13_x,
                       unpack14_x,
                       unpack15_x,
                       unpack16_x,
                       unpack17_x,
                       unpack18_x,
                       unpack19_x,
                       unpack20_x,
                       unpack21_x,
                       unpack22_x,
                       unpack23_x,
                       unpack24_x,
                       unpack25_x,
                       unpack26_x,
                       unpack27_x,
                       unpack28_x,
                       unpack29_x,
                       unpack30_x,
                       unpack31_x,
                       unpack32_x
};

