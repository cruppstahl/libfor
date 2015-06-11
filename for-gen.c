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
  /* consumed: 4 bytes (total: 8) */
  *(uint32_t *)out = tmp;
  return (8);
}

static uint32_t
unpack2_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 2);
  *(out + 1)  = base + ((tmp >> 2) & 2);
  *(out + 2)  = base + ((tmp >> 4) & 2);
  *(out + 3)  = base + ((tmp >> 6) & 2);
  *(out + 4)  = base + ((tmp >> 8) & 2);
  *(out + 5)  = base + ((tmp >> 10) & 2);
  *(out + 6)  = base + ((tmp >> 12) & 2);
  *(out + 7)  = base + ((tmp >> 14) & 2);
  *(out + 8)  = base + ((tmp >> 16) & 2);
  *(out + 9)  = base + ((tmp >> 18) & 2);
  *(out + 10)  = base + ((tmp >> 20) & 2);
  *(out + 11)  = base + ((tmp >> 22) & 2);
  *(out + 12)  = base + ((tmp >> 24) & 2);
  *(out + 13)  = base + ((tmp >> 26) & 2);
  *(out + 14)  = base + ((tmp >> 28) & 2);
  *(out + 15)  = base + ((tmp >> 30) & 2);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 2);
  *(out + 1)  = base + ((tmp >> 2) & 2);
  *(out + 2)  = base + ((tmp >> 4) & 2);
  *(out + 3)  = base + ((tmp >> 6) & 2);
  *(out + 4)  = base + ((tmp >> 8) & 2);
  *(out + 5)  = base + ((tmp >> 10) & 2);
  *(out + 6)  = base + ((tmp >> 12) & 2);
  *(out + 7)  = base + ((tmp >> 14) & 2);
  *(out + 8)  = base + ((tmp >> 16) & 2);
  *(out + 9)  = base + ((tmp >> 18) & 2);
  *(out + 10)  = base + ((tmp >> 20) & 2);
  *(out + 11)  = base + ((tmp >> 22) & 2);
  *(out + 12)  = base + ((tmp >> 24) & 2);
  *(out + 13)  = base + ((tmp >> 26) & 2);
  *(out + 14)  = base + ((tmp >> 28) & 2);
  *(out + 15)  = base + ((tmp >> 30) & 2);
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
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 3) & 3);
  *(out + 2)  = base + ((tmp >> 6) & 3);
  *(out + 3)  = base + ((tmp >> 9) & 3);
  *(out + 4)  = base + ((tmp >> 12) & 3);
  *(out + 5)  = base + ((tmp >> 15) & 3);
  *(out + 6)  = base + ((tmp >> 18) & 3);
  *(out + 7)  = base + ((tmp >> 21) & 3);
  *(out + 8)  = base + ((tmp >> 24) & 3);
  *(out + 9)  = base + ((tmp >> 27) & 3);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 1)) << (3 - 1);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 1) & 3);
  *(out + 12)  = base + ((tmp >> 4) & 3);
  *(out + 13)  = base + ((tmp >> 7) & 3);
  *(out + 14)  = base + ((tmp >> 10) & 3);
  *(out + 15)  = base + ((tmp >> 13) & 3);
  *(out + 16)  = base + ((tmp >> 16) & 3);
  *(out + 17)  = base + ((tmp >> 19) & 3);
  *(out + 18)  = base + ((tmp >> 22) & 3);
  *(out + 19)  = base + ((tmp >> 25) & 3);
  *(out + 20)  = base + ((tmp >> 28) & 3);
  *(out + 21)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 2)) << (3 - 2);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 2) & 3);
  *(out + 23)  = base + ((tmp >> 5) & 3);
  *(out + 24)  = base + ((tmp >> 8) & 3);
  *(out + 25)  = base + ((tmp >> 11) & 3);
  *(out + 26)  = base + ((tmp >> 14) & 3);
  *(out + 27)  = base + ((tmp >> 17) & 3);
  *(out + 28)  = base + ((tmp >> 20) & 3);
  *(out + 29)  = base + ((tmp >> 23) & 3);
  *(out + 30)  = base + ((tmp >> 26) & 3);
  *(out + 31)  = base + ((tmp >> 29) & 3);
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
  /* consumed: 4 bytes (total: 8) */
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
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 4;
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 12;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 20;
  tmp |= (*(in + 6) - base) << 24;
  tmp |= (*(in + 7) - base) << 28;
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
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
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
  *(out + 0)  = base + ((tmp >> 0) & 5);
  *(out + 1)  = base + ((tmp >> 5) & 5);
  *(out + 2)  = base + ((tmp >> 10) & 5);
  *(out + 3)  = base + ((tmp >> 15) & 5);
  *(out + 4)  = base + ((tmp >> 20) & 5);
  *(out + 5)  = base + ((tmp >> 25) & 5);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 5);
  *(out + 8)  = base + ((tmp >> 8) & 5);
  *(out + 9)  = base + ((tmp >> 13) & 5);
  *(out + 10)  = base + ((tmp >> 18) & 5);
  *(out + 11)  = base + ((tmp >> 23) & 5);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 1)) << (5 - 1);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 1) & 5);
  *(out + 14)  = base + ((tmp >> 6) & 5);
  *(out + 15)  = base + ((tmp >> 11) & 5);
  *(out + 16)  = base + ((tmp >> 16) & 5);
  *(out + 17)  = base + ((tmp >> 21) & 5);
  *(out + 18)  = base + ((tmp >> 26) & 5);
  *(out + 19)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (5 - 4);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 4) & 5);
  *(out + 21)  = base + ((tmp >> 9) & 5);
  *(out + 22)  = base + ((tmp >> 14) & 5);
  *(out + 23)  = base + ((tmp >> 19) & 5);
  *(out + 24)  = base + ((tmp >> 24) & 5);
  *(out + 25)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 2)) << (5 - 2);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 2) & 5);
  *(out + 27)  = base + ((tmp >> 7) & 5);
  *(out + 28)  = base + ((tmp >> 12) & 5);
  *(out + 29)  = base + ((tmp >> 17) & 5);
  *(out + 30)  = base + ((tmp >> 22) & 5);
  *(out + 31)  = base + ((tmp >> 27) & 5);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 6;
  tmp |= (*(in + 2) - base) << 12;
  tmp |= (*(in + 3) - base) << 18;
  tmp |= (*(in + 4) - base) << 24;
  tmp |= (*(in + 5) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 5) - base) >> (6 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 10;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 22;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 10) - base) >> (6 - 2);
  tmp |= (*(in + 11) - base) << 2;
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 14;
  tmp |= (*(in + 14) - base) << 20;
  tmp |= (*(in + 15) - base) << 26;
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
  *(out + 0)  = base + ((tmp >> 0) & 6);
  *(out + 1)  = base + ((tmp >> 6) & 6);
  *(out + 2)  = base + ((tmp >> 12) & 6);
  *(out + 3)  = base + ((tmp >> 18) & 6);
  *(out + 4)  = base + ((tmp >> 24) & 6);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 6);
  *(out + 7)  = base + ((tmp >> 10) & 6);
  *(out + 8)  = base + ((tmp >> 16) & 6);
  *(out + 9)  = base + ((tmp >> 22) & 6);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 2) & 6);
  *(out + 12)  = base + ((tmp >> 8) & 6);
  *(out + 13)  = base + ((tmp >> 14) & 6);
  *(out + 14)  = base + ((tmp >> 20) & 6);
  *(out + 15)  = base + ((tmp >> 26) & 6);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 6);
  *(out + 1)  = base + ((tmp >> 6) & 6);
  *(out + 2)  = base + ((tmp >> 12) & 6);
  *(out + 3)  = base + ((tmp >> 18) & 6);
  *(out + 4)  = base + ((tmp >> 24) & 6);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 6);
  *(out + 7)  = base + ((tmp >> 10) & 6);
  *(out + 8)  = base + ((tmp >> 16) & 6);
  *(out + 9)  = base + ((tmp >> 22) & 6);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 2) & 6);
  *(out + 12)  = base + ((tmp >> 8) & 6);
  *(out + 13)  = base + ((tmp >> 14) & 6);
  *(out + 14)  = base + ((tmp >> 20) & 6);
  *(out + 15)  = base + ((tmp >> 26) & 6);
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
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 7) & 7);
  *(out + 2)  = base + ((tmp >> 14) & 7);
  *(out + 3)  = base + ((tmp >> 21) & 7);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 7);
  *(out + 6)  = base + ((tmp >> 10) & 7);
  *(out + 7)  = base + ((tmp >> 17) & 7);
  *(out + 8)  = base + ((tmp >> 24) & 7);
  *(out + 9)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (7 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 7);
  *(out + 11)  = base + ((tmp >> 13) & 7);
  *(out + 12)  = base + ((tmp >> 20) & 7);
  *(out + 13)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (7 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 7);
  *(out + 15)  = base + ((tmp >> 9) & 7);
  *(out + 16)  = base + ((tmp >> 16) & 7);
  *(out + 17)  = base + ((tmp >> 23) & 7);
  *(out + 18)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 5)) << (7 - 5);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 5) & 7);
  *(out + 20)  = base + ((tmp >> 12) & 7);
  *(out + 21)  = base + ((tmp >> 19) & 7);
  *(out + 22)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 1)) << (7 - 1);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 1) & 7);
  *(out + 24)  = base + ((tmp >> 8) & 7);
  *(out + 25)  = base + ((tmp >> 15) & 7);
  *(out + 26)  = base + ((tmp >> 22) & 7);
  *(out + 27)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (7 - 4);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 4) & 7);
  *(out + 29)  = base + ((tmp >> 11) & 7);
  *(out + 30)  = base + ((tmp >> 18) & 7);
  *(out + 31)  = base + ((tmp >> 25) & 7);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
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
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
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
  *(out + 0)  = base + ((tmp >> 0) & 9);
  *(out + 1)  = base + ((tmp >> 9) & 9);
  *(out + 2)  = base + ((tmp >> 18) & 9);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 9);
  *(out + 5)  = base + ((tmp >> 13) & 9);
  *(out + 6)  = base + ((tmp >> 22) & 9);
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 9);
  *(out + 9)  = base + ((tmp >> 17) & 9);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 3)) << (9 - 3);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 3) & 9);
  *(out + 12)  = base + ((tmp >> 12) & 9);
  *(out + 13)  = base + ((tmp >> 21) & 9);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 7)) << (9 - 7);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 7) & 9);
  *(out + 16)  = base + ((tmp >> 16) & 9);
  *(out + 17)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 2)) << (9 - 2);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 2) & 9);
  *(out + 19)  = base + ((tmp >> 11) & 9);
  *(out + 20)  = base + ((tmp >> 20) & 9);
  *(out + 21)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 6)) << (9 - 6);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 6) & 9);
  *(out + 23)  = base + ((tmp >> 15) & 9);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 1)) << (9 - 1);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 1) & 9);
  *(out + 26)  = base + ((tmp >> 10) & 9);
  *(out + 27)  = base + ((tmp >> 19) & 9);
  *(out + 28)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 5)) << (9 - 5);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 5) & 9);
  *(out + 30)  = base + ((tmp >> 14) & 9);
  *(out + 31)  = base + ((tmp >> 23) & 9);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 10;
  tmp |= (*(in + 2) - base) << 20;
  tmp |= (*(in + 3) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 3) - base) >> (10 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 18;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 6) - base) >> (10 - 6);
  tmp |= (*(in + 7) - base) << 6;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 9) - base) >> (10 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 14;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 12) - base) >> (10 - 2);
  tmp |= (*(in + 13) - base) << 2;
  tmp |= (*(in + 14) - base) << 12;
  tmp |= (*(in + 15) - base) << 22;
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
  *(out + 0)  = base + ((tmp >> 0) & 10);
  *(out + 1)  = base + ((tmp >> 10) & 10);
  *(out + 2)  = base + ((tmp >> 20) & 10);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 10);
  *(out + 5)  = base + ((tmp >> 18) & 10);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 10);
  *(out + 8)  = base + ((tmp >> 16) & 10);
  *(out + 9)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 10);
  *(out + 11)  = base + ((tmp >> 14) & 10);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 2) & 10);
  *(out + 14)  = base + ((tmp >> 12) & 10);
  *(out + 15)  = base + ((tmp >> 22) & 10);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 10);
  *(out + 1)  = base + ((tmp >> 10) & 10);
  *(out + 2)  = base + ((tmp >> 20) & 10);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 10);
  *(out + 5)  = base + ((tmp >> 18) & 10);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 10);
  *(out + 8)  = base + ((tmp >> 16) & 10);
  *(out + 9)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 10);
  *(out + 11)  = base + ((tmp >> 14) & 10);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 2) & 10);
  *(out + 14)  = base + ((tmp >> 12) & 10);
  *(out + 15)  = base + ((tmp >> 22) & 10);
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
  *(out + 0)  = base + ((tmp >> 0) & 11);
  *(out + 1)  = base + ((tmp >> 11) & 11);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 11);
  *(out + 4)  = base + ((tmp >> 12) & 11);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 11);
  *(out + 7)  = base + ((tmp >> 13) & 11);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 3)) << (11 - 3);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 3) & 11);
  *(out + 10)  = base + ((tmp >> 14) & 11);
  *(out + 11)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (11 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 11);
  *(out + 13)  = base + ((tmp >> 15) & 11);
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 5)) << (11 - 5);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 5) & 11);
  *(out + 16)  = base + ((tmp >> 16) & 11);
  *(out + 17)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 6)) << (11 - 6);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 6) & 11);
  *(out + 19)  = base + ((tmp >> 17) & 11);
  *(out + 20)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 7)) << (11 - 7);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 7) & 11);
  *(out + 22)  = base + ((tmp >> 18) & 11);
  *(out + 23)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (11 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 11);
  *(out + 25)  = base + ((tmp >> 19) & 11);
  *(out + 26)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 9)) << (11 - 9);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 9) & 11);
  *(out + 28)  = base + ((tmp >> 20) & 11);
  *(out + 29)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 10)) << (11 - 10);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 10) & 11);
  *(out + 31)  = base + ((tmp >> 21) & 11);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
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
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
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
  *(out + 0)  = base + ((tmp >> 0) & 13);
  *(out + 1)  = base + ((tmp >> 13) & 13);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 13);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 13);
  *(out + 6)  = base + ((tmp >> 14) & 13);
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 13);
  *(out + 9)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (13 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 13);
  *(out + 11)  = base + ((tmp >> 15) & 13);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 9)) << (13 - 9);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 9) & 13);
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 3)) << (13 - 3);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 3) & 13);
  *(out + 16)  = base + ((tmp >> 16) & 13);
  *(out + 17)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 10)) << (13 - 10);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 10) & 13);
  *(out + 19)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 4)) << (13 - 4);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 4) & 13);
  *(out + 21)  = base + ((tmp >> 17) & 13);
  *(out + 22)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 11)) << (13 - 11);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 11) & 13);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 5)) << (13 - 5);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 5) & 13);
  *(out + 26)  = base + ((tmp >> 18) & 13);
  *(out + 27)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 12)) << (13 - 12);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 12) & 13);
  *(out + 29)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 6)) << (13 - 6);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 6) & 13);
  *(out + 31)  = base + ((tmp >> 19) & 13);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 14;
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 2) - base) >> (14 - 10);
  tmp |= (*(in + 3) - base) << 10;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 4) - base) >> (14 - 6);
  tmp |= (*(in + 5) - base) << 6;
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 6) - base) >> (14 - 2);
  tmp |= (*(in + 7) - base) << 2;
  tmp |= (*(in + 8) - base) << 16;
  tmp |= (*(in + 9) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 9) - base) >> (14 - 12);
  tmp |= (*(in + 10) - base) << 12;
  tmp |= (*(in + 11) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 11) - base) >> (14 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 13) - base) >> (14 - 4);
  tmp |= (*(in + 14) - base) << 4;
  tmp |= (*(in + 15) - base) << 18;
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
  *(out + 0)  = base + ((tmp >> 0) & 14);
  *(out + 1)  = base + ((tmp >> 14) & 14);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 14);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 14);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 14);
  *(out + 8)  = base + ((tmp >> 16) & 14);
  *(out + 9)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 12) & 14);
  *(out + 11)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 14);
  *(out + 13)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 4) & 14);
  *(out + 15)  = base + ((tmp >> 18) & 14);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 14);
  *(out + 1)  = base + ((tmp >> 14) & 14);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 14);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 14);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 14);
  *(out + 8)  = base + ((tmp >> 16) & 14);
  *(out + 9)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 12) & 14);
  *(out + 11)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 14);
  *(out + 13)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 4) & 14);
  *(out + 15)  = base + ((tmp >> 18) & 14);
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
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 15) & 15);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 15);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 15);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 15);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 7)) << (15 - 7);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 7) & 15);
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 5)) << (15 - 5);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 5) & 15);
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 3)) << (15 - 3);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 3) & 15);
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 1)) << (15 - 1);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 1) & 15);
  *(out + 16)  = base + ((tmp >> 16) & 15);
  *(out + 17)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 17) |= (tmp % (1U << 14)) << (15 - 14);
  *(out + 17) += base;
  *(out + 18)  = base + ((tmp >> 14) & 15);
  *(out + 19)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 19) |= (tmp % (1U << 12)) << (15 - 12);
  *(out + 19) += base;
  *(out + 20)  = base + ((tmp >> 12) & 15);
  *(out + 21)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 21) |= (tmp % (1U << 10)) << (15 - 10);
  *(out + 21) += base;
  *(out + 22)  = base + ((tmp >> 10) & 15);
  *(out + 23)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (15 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 15);
  *(out + 25)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 25) |= (tmp % (1U << 6)) << (15 - 6);
  *(out + 25) += base;
  *(out + 26)  = base + ((tmp >> 6) & 15);
  *(out + 27)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 27) |= (tmp % (1U << 4)) << (15 - 4);
  *(out + 27) += base;
  *(out + 28)  = base + ((tmp >> 4) & 15);
  *(out + 29)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 29) |= (tmp % (1U << 2)) << (15 - 2);
  *(out + 29) += base;
  *(out + 30)  = base + ((tmp >> 2) & 15);
  *(out + 31)  = base + ((tmp >> 17) & 15);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
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
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 36) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
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
  *(out + 0)  = base + ((tmp >> 0) & 17);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 17);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 17);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 17);
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 17);
  *(out + 9)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 10)) << (17 - 10);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 10) & 17);
  *(out + 11)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (17 - 12);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 12) & 17);
  *(out + 13)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 14)) << (17 - 14);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 14) & 17);
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
  *(out + 17)  = base + ((tmp >> 1) & 17);
  *(out + 18)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 3)) << (17 - 3);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 3) & 17);
  *(out + 20)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 20) |= (tmp % (1U << 5)) << (17 - 5);
  *(out + 20) += base;
  *(out + 21)  = base + ((tmp >> 5) & 17);
  *(out + 22)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 22) |= (tmp % (1U << 7)) << (17 - 7);
  *(out + 22) += base;
  *(out + 23)  = base + ((tmp >> 7) & 17);
  *(out + 24)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 24) |= (tmp % (1U << 9)) << (17 - 9);
  *(out + 24) += base;
  *(out + 25)  = base + ((tmp >> 9) & 17);
  *(out + 26)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 26) |= (tmp % (1U << 11)) << (17 - 11);
  *(out + 26) += base;
  *(out + 27)  = base + ((tmp >> 11) & 17);
  *(out + 28)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 13)) << (17 - 13);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 13) & 17);
  *(out + 30)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 15)) << (17 - 15);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 15) & 17);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 1) - base) >> (18 - 4);
  tmp |= (*(in + 2) - base) << 4;
  tmp |= (*(in + 3) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 3) - base) >> (18 - 8);
  tmp |= (*(in + 4) - base) << 8;
  tmp |= (*(in + 5) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 5) - base) >> (18 - 12);
  tmp |= (*(in + 6) - base) << 12;
  tmp |= (*(in + 7) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 7) - base) >> (18 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 8) - base) >> (18 - 2);
  tmp |= (*(in + 9) - base) << 2;
  tmp |= (*(in + 10) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 10) - base) >> (18 - 6);
  tmp |= (*(in + 11) - base) << 6;
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 12) - base) >> (18 - 10);
  tmp |= (*(in + 13) - base) << 10;
  tmp |= (*(in + 14) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 14) - base) >> (18 - 14);
  tmp |= (*(in + 15) - base) << 14;
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
  *(out + 0)  = base + ((tmp >> 0) & 18);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 18);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 18);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 18);
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
  *(out + 9)  = base + ((tmp >> 2) & 18);
  *(out + 10)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 6) & 18);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 10) & 18);
  *(out + 14)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 14) & 18);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 18);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 18);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 18);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 18);
  *(out + 7)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (18 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 2)) << (18 - 2);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 2) & 18);
  *(out + 10)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 6) & 18);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 10) & 18);
  *(out + 14)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 14) & 18);
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
  *(out + 0)  = base + ((tmp >> 0) & 19);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 19);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 19);
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
  *(out + 7)  = base + ((tmp >> 5) & 19);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 11)) << (19 - 11);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 11) & 19);
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
  *(out + 12)  = base + ((tmp >> 4) & 19);
  *(out + 13)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 10)) << (19 - 10);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 10) & 19);
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
  *(out + 17)  = base + ((tmp >> 3) & 19);
  *(out + 18)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 18) |= (tmp % (1U << 9)) << (19 - 9);
  *(out + 18) += base;
  *(out + 19)  = base + ((tmp >> 9) & 19);
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
  *(out + 22)  = base + ((tmp >> 2) & 19);
  *(out + 23)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 23) |= (tmp % (1U << 8)) << (19 - 8);
  *(out + 23) += base;
  *(out + 24)  = base + ((tmp >> 8) & 19);
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
  *(out + 27)  = base + ((tmp >> 1) & 19);
  *(out + 28)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 28) |= (tmp % (1U << 7)) << (19 - 7);
  *(out + 28) += base;
  *(out + 29)  = base + ((tmp >> 7) & 19);
  *(out + 30)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 13)) << (19 - 13);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 13) & 19);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
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
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
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
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
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
  *(out + 0)  = base + ((tmp >> 0) & 21);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 21);
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
  *(out + 5)  = base + ((tmp >> 9) & 21);
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
  *(out + 8)  = base + ((tmp >> 8) & 21);
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
  *(out + 11)  = base + ((tmp >> 7) & 21);
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
  *(out + 14)  = base + ((tmp >> 6) & 21);
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
  *(out + 17)  = base + ((tmp >> 5) & 21);
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
  *(out + 20)  = base + ((tmp >> 4) & 21);
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
  *(out + 23)  = base + ((tmp >> 3) & 21);
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
  *(out + 26)  = base + ((tmp >> 2) & 21);
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
  *(out + 29)  = base + ((tmp >> 1) & 21);
  *(out + 30)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 30) |= (tmp % (1U << 11)) << (21 - 11);
  *(out + 30) += base;
  *(out + 31)  = base + ((tmp >> 11) & 21);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 1) - base) >> (22 - 12);
  tmp |= (*(in + 2) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 2) - base) >> (22 - 2);
  tmp |= (*(in + 3) - base) << 2;
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 4) - base) >> (22 - 14);
  tmp |= (*(in + 5) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 5) - base) >> (22 - 4);
  tmp |= (*(in + 6) - base) << 4;
  tmp |= (*(in + 7) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 7) - base) >> (22 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 8) - base) >> (22 - 6);
  tmp |= (*(in + 9) - base) << 6;
  tmp |= (*(in + 10) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 10) - base) >> (22 - 18);
  tmp |= (*(in + 11) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 11) - base) >> (22 - 8);
  tmp |= (*(in + 12) - base) << 8;
  tmp |= (*(in + 13) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 13) - base) >> (22 - 20);
  tmp |= (*(in + 14) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 14) - base) >> (22 - 10);
  tmp |= (*(in + 15) - base) << 10;
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
  *(out + 0)  = base + ((tmp >> 0) & 22);
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
  *(out + 3)  = base + ((tmp >> 2) & 22);
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
  *(out + 6)  = base + ((tmp >> 4) & 22);
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
  *(out + 9)  = base + ((tmp >> 6) & 22);
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
  *(out + 12)  = base + ((tmp >> 8) & 22);
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
  *(out + 15)  = base + ((tmp >> 10) & 22);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 0)  = base + ((tmp >> 0) & 22);
  *(out + 1)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 12)) << (22 - 12);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 2)) << (22 - 2);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 2) & 22);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 14)) << (22 - 14);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (22 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 22);
  *(out + 7)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (22 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 6)) << (22 - 6);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 6) & 22);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 18)) << (22 - 18);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (22 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 22);
  *(out + 13)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 20)) << (22 - 20);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 10)) << (22 - 10);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 10) & 22);
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
  *(out + 0)  = base + ((tmp >> 0) & 23);
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
  *(out + 3)  = base + ((tmp >> 5) & 23);
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
  *(out + 7)  = base + ((tmp >> 1) & 23);
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
  *(out + 10)  = base + ((tmp >> 6) & 23);
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
  *(out + 14)  = base + ((tmp >> 2) & 23);
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
  *(out + 17)  = base + ((tmp >> 7) & 23);
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
  *(out + 21)  = base + ((tmp >> 3) & 23);
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
  *(out + 24)  = base + ((tmp >> 8) & 23);
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
  *(out + 28)  = base + ((tmp >> 4) & 23);
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
  *(out + 31)  = base + ((tmp >> 9) & 23);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
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
  *(out + 0)  = base + ((tmp >> 0) & 24);
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
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 76) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 88) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
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
  *(out + 0)  = base + ((tmp >> 0) & 25);
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
  *(out + 4)  = base + ((tmp >> 4) & 25);
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
  *(out + 9)  = base + ((tmp >> 1) & 25);
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
  *(out + 13)  = base + ((tmp >> 5) & 25);
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
  *(out + 18)  = base + ((tmp >> 2) & 25);
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
  *(out + 22)  = base + ((tmp >> 6) & 25);
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
  *(out + 27)  = base + ((tmp >> 3) & 25);
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
  *(out + 31)  = base + ((tmp >> 7) & 25);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 1) - base) >> (26 - 20);
  tmp |= (*(in + 2) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 2) - base) >> (26 - 14);
  tmp |= (*(in + 3) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 3) - base) >> (26 - 8);
  tmp |= (*(in + 4) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 4) - base) >> (26 - 2);
  tmp |= (*(in + 5) - base) << 2;
  tmp |= (*(in + 6) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 6) - base) >> (26 - 22);
  tmp |= (*(in + 7) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 7) - base) >> (26 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 8) - base) >> (26 - 10);
  tmp |= (*(in + 9) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 9) - base) >> (26 - 4);
  tmp |= (*(in + 10) - base) << 4;
  tmp |= (*(in + 11) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 11) - base) >> (26 - 24);
  tmp |= (*(in + 12) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 12) - base) >> (26 - 18);
  tmp |= (*(in + 13) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 13) - base) >> (26 - 12);
  tmp |= (*(in + 14) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 14) - base) >> (26 - 6);
  tmp |= (*(in + 15) - base) << 6;
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
  *(out + 0)  = base + ((tmp >> 0) & 26);
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
  *(out + 5)  = base + ((tmp >> 2) & 26);
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
  *(out + 10)  = base + ((tmp >> 4) & 26);
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
  *(out + 15)  = base + ((tmp >> 6) & 26);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 0)  = base + ((tmp >> 0) & 26);
  *(out + 1)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 20)) << (26 - 20);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 14)) << (26 - 14);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (26 - 8);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 2)) << (26 - 2);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 2) & 26);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 22)) << (26 - 22);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (26 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 10)) << (26 - 10);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (26 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 26);
  *(out + 11)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 24)) << (26 - 24);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 18)) << (26 - 18);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 12)) << (26 - 12);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 6)) << (26 - 6);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 6) & 26);
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
  *(out + 0)  = base + ((tmp >> 0) & 27);
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
  *(out + 6)  = base + ((tmp >> 2) & 27);
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
  *(out + 12)  = base + ((tmp >> 4) & 27);
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
  *(out + 19)  = base + ((tmp >> 1) & 27);
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
  *(out + 25)  = base + ((tmp >> 3) & 27);
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
  *(out + 31)  = base + ((tmp >> 5) & 27);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
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
  *(out + 0)  = base + ((tmp >> 0) & 28);
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
  *(out + 7)  = base + ((tmp >> 4) & 28);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 28);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 28);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 0)  = base + ((tmp >> 0) & 28);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 28);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 88) */
  *(out + 0)  = base + ((tmp >> 0) & 28);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 28);
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
  *(out + 0)  = base + ((tmp >> 0) & 29);
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
  *(out + 10)  = base + ((tmp >> 2) & 29);
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
  *(out + 21)  = base + ((tmp >> 1) & 29);
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
  *(out + 31)  = base + ((tmp >> 3) & 29);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 30;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 1) - base) >> (30 - 28);
  tmp |= (*(in + 2) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 2) - base) >> (30 - 26);
  tmp |= (*(in + 3) - base) << 26;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 3) - base) >> (30 - 24);
  tmp |= (*(in + 4) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 4) - base) >> (30 - 22);
  tmp |= (*(in + 5) - base) << 22;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 5) - base) >> (30 - 20);
  tmp |= (*(in + 6) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 6) - base) >> (30 - 18);
  tmp |= (*(in + 7) - base) << 18;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 7) - base) >> (30 - 16);
  tmp |= (*(in + 8) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 8) - base) >> (30 - 14);
  tmp |= (*(in + 9) - base) << 14;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 9) - base) >> (30 - 12);
  tmp |= (*(in + 10) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 10) - base) >> (30 - 10);
  tmp |= (*(in + 11) - base) << 10;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 11) - base) >> (30 - 8);
  tmp |= (*(in + 12) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 12) - base) >> (30 - 6);
  tmp |= (*(in + 13) - base) << 6;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp  = (*(in + 13) - base) >> (30 - 4);
  tmp |= (*(in + 14) - base) << 4;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp  = (*(in + 14) - base) >> (30 - 2);
  tmp |= (*(in + 15) - base) << 2;
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
  *(out + 0)  = base + ((tmp >> 0) & 30);
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
  *(out + 15)  = base + ((tmp >> 2) & 30);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 30);
  *(out + 1)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 28)) << (30 - 28);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 26)) << (30 - 26);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 24)) << (30 - 24);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 22)) << (30 - 22);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 20)) << (30 - 20);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 18)) << (30 - 18);
  *(out + 6) += base;
  *(out + 7)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 16)) << (30 - 16);
  *(out + 7) += base;
  *(out + 8)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 14)) << (30 - 14);
  *(out + 8) += base;
  *(out + 9)  = tmp >> 14;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (30 - 12);
  *(out + 9) += base;
  *(out + 10)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 10)) << (30 - 10);
  *(out + 10) += base;
  *(out + 11)  = tmp >> 10;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (30 - 8);
  *(out + 11) += base;
  *(out + 12)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 6)) << (30 - 6);
  *(out + 12) += base;
  *(out + 13)  = tmp >> 6;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (30 - 4);
  *(out + 13) += base;
  *(out + 14)  = tmp >> 4;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 120) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 2)) << (30 - 2);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 2) & 30);
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
  *(out + 0)  = base + ((tmp >> 0) & 31);
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
  *(out + 31)  = base + ((tmp >> 1) & 31);
  /* remaining: 0 bits */
  return (124);
}

static uint32_t
pack32_32(uint32_t base, const uint32_t *in, uint8_t *out) {
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 64) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 68) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 72) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 76) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 80) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 84) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 88) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 92) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 96) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 100) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 104) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 108) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 112) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 116) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 120) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 124) */
  tmp  = (*(in + 0) - base) << 0;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 128) */
  *(uint32_t *)out = tmp;
  return (128);
}

static uint32_t
unpack32_32(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 36) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 68) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 72) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 76) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 80) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 84) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 88) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 92) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 96) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 100) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 104) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 108) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 112) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 116) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 120) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 124) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 128) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  /* remaining: 0 bits */
  return (128);
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
  *(out + 0)  = base + ((tmp >> 0) & 2);
  *(out + 1)  = base + ((tmp >> 2) & 2);
  *(out + 2)  = base + ((tmp >> 4) & 2);
  *(out + 3)  = base + ((tmp >> 6) & 2);
  *(out + 4)  = base + ((tmp >> 8) & 2);
  *(out + 5)  = base + ((tmp >> 10) & 2);
  *(out + 6)  = base + ((tmp >> 12) & 2);
  *(out + 7)  = base + ((tmp >> 14) & 2);
  *(out + 8)  = base + ((tmp >> 16) & 2);
  *(out + 9)  = base + ((tmp >> 18) & 2);
  *(out + 10)  = base + ((tmp >> 20) & 2);
  *(out + 11)  = base + ((tmp >> 22) & 2);
  *(out + 12)  = base + ((tmp >> 24) & 2);
  *(out + 13)  = base + ((tmp >> 26) & 2);
  *(out + 14)  = base + ((tmp >> 28) & 2);
  *(out + 15)  = base + ((tmp >> 30) & 2);
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
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 3) & 3);
  *(out + 2)  = base + ((tmp >> 6) & 3);
  *(out + 3)  = base + ((tmp >> 9) & 3);
  *(out + 4)  = base + ((tmp >> 12) & 3);
  *(out + 5)  = base + ((tmp >> 15) & 3);
  *(out + 6)  = base + ((tmp >> 18) & 3);
  *(out + 7)  = base + ((tmp >> 21) & 3);
  *(out + 8)  = base + ((tmp >> 24) & 3);
  *(out + 9)  = base + ((tmp >> 27) & 3);
  *(out + 10)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 1)) << (3 - 1);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 1) & 3);
  *(out + 12)  = base + ((tmp >> 4) & 3);
  *(out + 13)  = base + ((tmp >> 7) & 3);
  *(out + 14)  = base + ((tmp >> 10) & 3);
  *(out + 15)  = base + ((tmp >> 13) & 3);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 4;
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 12;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 20;
  tmp |= (*(in + 6) - base) << 24;
  tmp |= (*(in + 7) - base) << 28;
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
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
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
  *(out + 0)  = base + ((tmp >> 0) & 5);
  *(out + 1)  = base + ((tmp >> 5) & 5);
  *(out + 2)  = base + ((tmp >> 10) & 5);
  *(out + 3)  = base + ((tmp >> 15) & 5);
  *(out + 4)  = base + ((tmp >> 20) & 5);
  *(out + 5)  = base + ((tmp >> 25) & 5);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 5);
  *(out + 8)  = base + ((tmp >> 8) & 5);
  *(out + 9)  = base + ((tmp >> 13) & 5);
  *(out + 10)  = base + ((tmp >> 18) & 5);
  *(out + 11)  = base + ((tmp >> 23) & 5);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 1)) << (5 - 1);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 1) & 5);
  *(out + 14)  = base + ((tmp >> 6) & 5);
  *(out + 15)  = base + ((tmp >> 11) & 5);
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
  *(out + 0)  = base + ((tmp >> 0) & 6);
  *(out + 1)  = base + ((tmp >> 6) & 6);
  *(out + 2)  = base + ((tmp >> 12) & 6);
  *(out + 3)  = base + ((tmp >> 18) & 6);
  *(out + 4)  = base + ((tmp >> 24) & 6);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 6);
  *(out + 7)  = base + ((tmp >> 10) & 6);
  *(out + 8)  = base + ((tmp >> 16) & 6);
  *(out + 9)  = base + ((tmp >> 22) & 6);
  *(out + 10)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 2)) << (6 - 2);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 2) & 6);
  *(out + 12)  = base + ((tmp >> 8) & 6);
  *(out + 13)  = base + ((tmp >> 14) & 6);
  *(out + 14)  = base + ((tmp >> 20) & 6);
  *(out + 15)  = base + ((tmp >> 26) & 6);
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
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 7) & 7);
  *(out + 2)  = base + ((tmp >> 14) & 7);
  *(out + 3)  = base + ((tmp >> 21) & 7);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 7);
  *(out + 6)  = base + ((tmp >> 10) & 7);
  *(out + 7)  = base + ((tmp >> 17) & 7);
  *(out + 8)  = base + ((tmp >> 24) & 7);
  *(out + 9)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 6)) << (7 - 6);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 6) & 7);
  *(out + 11)  = base + ((tmp >> 13) & 7);
  *(out + 12)  = base + ((tmp >> 20) & 7);
  *(out + 13)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 2)) << (7 - 2);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 2) & 7);
  *(out + 15)  = base + ((tmp >> 9) & 7);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
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
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
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
  *(out + 0)  = base + ((tmp >> 0) & 9);
  *(out + 1)  = base + ((tmp >> 9) & 9);
  *(out + 2)  = base + ((tmp >> 18) & 9);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 9);
  *(out + 5)  = base + ((tmp >> 13) & 9);
  *(out + 6)  = base + ((tmp >> 22) & 9);
  *(out + 7)  = tmp >> 31;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (9 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 9);
  *(out + 9)  = base + ((tmp >> 17) & 9);
  *(out + 10)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 3)) << (9 - 3);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 3) & 9);
  *(out + 12)  = base + ((tmp >> 12) & 9);
  *(out + 13)  = base + ((tmp >> 21) & 9);
  *(out + 14)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 7)) << (9 - 7);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 7) & 9);
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
  *(out + 0)  = base + ((tmp >> 0) & 10);
  *(out + 1)  = base + ((tmp >> 10) & 10);
  *(out + 2)  = base + ((tmp >> 20) & 10);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 10);
  *(out + 5)  = base + ((tmp >> 18) & 10);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 10);
  *(out + 8)  = base + ((tmp >> 16) & 10);
  *(out + 9)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 4)) << (10 - 4);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 4) & 10);
  *(out + 11)  = base + ((tmp >> 14) & 10);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 2)) << (10 - 2);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 2) & 10);
  *(out + 14)  = base + ((tmp >> 12) & 10);
  *(out + 15)  = base + ((tmp >> 22) & 10);
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
  *(out + 0)  = base + ((tmp >> 0) & 11);
  *(out + 1)  = base + ((tmp >> 11) & 11);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 11);
  *(out + 4)  = base + ((tmp >> 12) & 11);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 11);
  *(out + 7)  = base + ((tmp >> 13) & 11);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 3)) << (11 - 3);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 3) & 11);
  *(out + 10)  = base + ((tmp >> 14) & 11);
  *(out + 11)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 4)) << (11 - 4);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 4) & 11);
  *(out + 13)  = base + ((tmp >> 15) & 11);
  *(out + 14)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 5)) << (11 - 5);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 5) & 11);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 12;
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 2) - base) >> (12 - 4);
  tmp |= (*(in + 3) - base) << 4;
  tmp |= (*(in + 4) - base) << 16;
  tmp |= (*(in + 5) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 5) - base) >> (12 - 8);
  tmp |= (*(in + 6) - base) << 8;
  tmp |= (*(in + 7) - base) << 20;
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
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
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
  *(out + 0)  = base + ((tmp >> 0) & 13);
  *(out + 1)  = base + ((tmp >> 13) & 13);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 13);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 13);
  *(out + 6)  = base + ((tmp >> 14) & 13);
  *(out + 7)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (13 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 13);
  *(out + 9)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 2)) << (13 - 2);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 2) & 13);
  *(out + 11)  = base + ((tmp >> 15) & 13);
  *(out + 12)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 9)) << (13 - 9);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 9) & 13);
  *(out + 14)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 3)) << (13 - 3);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 3) & 13);
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
  *(out + 0)  = base + ((tmp >> 0) & 14);
  *(out + 1)  = base + ((tmp >> 14) & 14);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 14);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 14);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 14);
  *(out + 8)  = base + ((tmp >> 16) & 14);
  *(out + 9)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 12)) << (14 - 12);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 12) & 14);
  *(out + 11)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 8)) << (14 - 8);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 8) & 14);
  *(out + 13)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 4)) << (14 - 4);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 4) & 14);
  *(out + 15)  = base + ((tmp >> 18) & 14);
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
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 15) & 15);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 15);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 15);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 15);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 7)) << (15 - 7);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 7) & 15);
  *(out + 10)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 5)) << (15 - 5);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 5) & 15);
  *(out + 12)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 3)) << (15 - 3);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 3) & 15);
  *(out + 14)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 1)) << (15 - 1);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 1) & 15);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
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
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
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
  *(out + 0)  = base + ((tmp >> 0) & 17);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 17);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 17);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 17);
  *(out + 7)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 7) |= (tmp % (1U << 8)) << (17 - 8);
  *(out + 7) += base;
  *(out + 8)  = base + ((tmp >> 8) & 17);
  *(out + 9)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 9) |= (tmp % (1U << 10)) << (17 - 10);
  *(out + 9) += base;
  *(out + 10)  = base + ((tmp >> 10) & 17);
  *(out + 11)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 11) |= (tmp % (1U << 12)) << (17 - 12);
  *(out + 11) += base;
  *(out + 12)  = base + ((tmp >> 12) & 17);
  *(out + 13)  = tmp >> 29;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 14)) << (17 - 14);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 14) & 17);
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
  *(out + 0)  = base + ((tmp >> 0) & 18);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 18);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 18);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 18);
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
  *(out + 9)  = base + ((tmp >> 2) & 18);
  *(out + 10)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 10) |= (tmp % (1U << 6)) << (18 - 6);
  *(out + 10) += base;
  *(out + 11)  = base + ((tmp >> 6) & 18);
  *(out + 12)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 12) |= (tmp % (1U << 10)) << (18 - 10);
  *(out + 12) += base;
  *(out + 13)  = base + ((tmp >> 10) & 18);
  *(out + 14)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 14) |= (tmp % (1U << 14)) << (18 - 14);
  *(out + 14) += base;
  *(out + 15)  = base + ((tmp >> 14) & 18);
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
  *(out + 0)  = base + ((tmp >> 0) & 19);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 19);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 19);
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
  *(out + 7)  = base + ((tmp >> 5) & 19);
  *(out + 8)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 8) |= (tmp % (1U << 11)) << (19 - 11);
  *(out + 8) += base;
  *(out + 9)  = base + ((tmp >> 11) & 19);
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
  *(out + 12)  = base + ((tmp >> 4) & 19);
  *(out + 13)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 13) |= (tmp % (1U << 10)) << (19 - 10);
  *(out + 13) += base;
  *(out + 14)  = base + ((tmp >> 10) & 19);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 1) - base) >> (20 - 8);
  tmp |= (*(in + 2) - base) << 8;
  tmp |= (*(in + 3) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 3) - base) >> (20 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 4) - base) >> (20 - 4);
  tmp |= (*(in + 5) - base) << 4;
  tmp |= (*(in + 6) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 6) - base) >> (20 - 12);
  tmp |= (*(in + 7) - base) << 12;
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
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
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
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
  *(out + 3)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (20 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 4)) << (20 - 4);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
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
  *(out + 0)  = base + ((tmp >> 0) & 21);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 21);
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
  *(out + 5)  = base + ((tmp >> 9) & 21);
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
  *(out + 8)  = base + ((tmp >> 8) & 21);
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
  *(out + 11)  = base + ((tmp >> 7) & 21);
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
  *(out + 14)  = base + ((tmp >> 6) & 21);
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
  *(out + 0)  = base + ((tmp >> 0) & 22);
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
  *(out + 3)  = base + ((tmp >> 2) & 22);
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
  *(out + 6)  = base + ((tmp >> 4) & 22);
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
  *(out + 9)  = base + ((tmp >> 6) & 22);
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
  *(out + 12)  = base + ((tmp >> 8) & 22);
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
  *(out + 15)  = base + ((tmp >> 10) & 22);
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
  *(out + 0)  = base + ((tmp >> 0) & 23);
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
  *(out + 3)  = base + ((tmp >> 5) & 23);
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
  *(out + 7)  = base + ((tmp >> 1) & 23);
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
  *(out + 10)  = base + ((tmp >> 6) & 23);
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
  *(out + 14)  = base + ((tmp >> 2) & 23);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
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
  *(out + 0)  = base + ((tmp >> 0) & 24);
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
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
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
  *(out + 0)  = base + ((tmp >> 0) & 25);
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
  *(out + 4)  = base + ((tmp >> 4) & 25);
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
  *(out + 9)  = base + ((tmp >> 1) & 25);
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
  *(out + 13)  = base + ((tmp >> 5) & 25);
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
  *(out + 0)  = base + ((tmp >> 0) & 26);
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
  *(out + 5)  = base + ((tmp >> 2) & 26);
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
  *(out + 10)  = base + ((tmp >> 4) & 26);
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
  *(out + 15)  = base + ((tmp >> 6) & 26);
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
  *(out + 0)  = base + ((tmp >> 0) & 27);
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
  *(out + 6)  = base + ((tmp >> 2) & 27);
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
  *(out + 12)  = base + ((tmp >> 4) & 27);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 28;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 1) - base) >> (28 - 24);
  tmp |= (*(in + 2) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 2) - base) >> (28 - 20);
  tmp |= (*(in + 3) - base) << 20;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 3) - base) >> (28 - 16);
  tmp |= (*(in + 4) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 4) - base) >> (28 - 12);
  tmp |= (*(in + 5) - base) << 12;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 5) - base) >> (28 - 8);
  tmp |= (*(in + 6) - base) << 8;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 6) - base) >> (28 - 4);
  tmp |= (*(in + 7) - base) << 4;
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
  *(out + 0)  = base + ((tmp >> 0) & 28);
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
  *(out + 7)  = base + ((tmp >> 4) & 28);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 28);
  *(out + 1)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 24)) << (28 - 24);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 20)) << (28 - 20);
  *(out + 2) += base;
  *(out + 3)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 16)) << (28 - 16);
  *(out + 3) += base;
  *(out + 4)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 12)) << (28 - 12);
  *(out + 4) += base;
  *(out + 5)  = tmp >> 12;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (28 - 8);
  *(out + 5) += base;
  *(out + 6)  = tmp >> 8;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 4)) << (28 - 4);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 4) & 28);
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
  *(out + 0)  = base + ((tmp >> 0) & 29);
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
  *(out + 10)  = base + ((tmp >> 2) & 29);
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
  *(out + 0)  = base + ((tmp >> 0) & 30);
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
  *(out + 15)  = base + ((tmp >> 2) & 30);
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
  *(out + 0)  = base + ((tmp >> 0) & 31);
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
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 32) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 36) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 40) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 44) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 48) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 52) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 56) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 60) */
  tmp  = (*(in + 0) - base) << 0;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 64) */
  *(uint32_t *)out = tmp;
  return (64);
}

static uint32_t
unpack32_16(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 36) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 40) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 44) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 48) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 52) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 56) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 60) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 64) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  /* remaining: 0 bits */
  return (64);
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
  *(out + 0)  = base + ((tmp >> 0) & 2);
  *(out + 1)  = base + ((tmp >> 2) & 2);
  *(out + 2)  = base + ((tmp >> 4) & 2);
  *(out + 3)  = base + ((tmp >> 6) & 2);
  *(out + 4)  = base + ((tmp >> 8) & 2);
  *(out + 5)  = base + ((tmp >> 10) & 2);
  *(out + 6)  = base + ((tmp >> 12) & 2);
  *(out + 7)  = base + ((tmp >> 14) & 2);
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
  *(out + 0)  = base + ((tmp >> 0) & 3);
  *(out + 1)  = base + ((tmp >> 3) & 3);
  *(out + 2)  = base + ((tmp >> 6) & 3);
  *(out + 3)  = base + ((tmp >> 9) & 3);
  *(out + 4)  = base + ((tmp >> 12) & 3);
  *(out + 5)  = base + ((tmp >> 15) & 3);
  *(out + 6)  = base + ((tmp >> 18) & 3);
  *(out + 7)  = base + ((tmp >> 21) & 3);
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
  *(out + 0)  = base + ((tmp >> 0) & 4);
  *(out + 1)  = base + ((tmp >> 4) & 4);
  *(out + 2)  = base + ((tmp >> 8) & 4);
  *(out + 3)  = base + ((tmp >> 12) & 4);
  *(out + 4)  = base + ((tmp >> 16) & 4);
  *(out + 5)  = base + ((tmp >> 20) & 4);
  *(out + 6)  = base + ((tmp >> 24) & 4);
  *(out + 7)  = base + ((tmp >> 28) & 4);
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
  *(out + 0)  = base + ((tmp >> 0) & 5);
  *(out + 1)  = base + ((tmp >> 5) & 5);
  *(out + 2)  = base + ((tmp >> 10) & 5);
  *(out + 3)  = base + ((tmp >> 15) & 5);
  *(out + 4)  = base + ((tmp >> 20) & 5);
  *(out + 5)  = base + ((tmp >> 25) & 5);
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 3) & 5);
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
  *(out + 0)  = base + ((tmp >> 0) & 6);
  *(out + 1)  = base + ((tmp >> 6) & 6);
  *(out + 2)  = base + ((tmp >> 12) & 6);
  *(out + 3)  = base + ((tmp >> 18) & 6);
  *(out + 4)  = base + ((tmp >> 24) & 6);
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 4) & 6);
  *(out + 7)  = base + ((tmp >> 10) & 6);
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
  *(out + 0)  = base + ((tmp >> 0) & 7);
  *(out + 1)  = base + ((tmp >> 7) & 7);
  *(out + 2)  = base + ((tmp >> 14) & 7);
  *(out + 3)  = base + ((tmp >> 21) & 7);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 3) & 7);
  *(out + 6)  = base + ((tmp >> 10) & 7);
  *(out + 7)  = base + ((tmp >> 17) & 7);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 8;
  tmp |= (*(in + 2) - base) << 16;
  tmp |= (*(in + 3) - base) << 24;
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
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 8);
  *(out + 1)  = base + ((tmp >> 8) & 8);
  *(out + 2)  = base + ((tmp >> 16) & 8);
  *(out + 3)  = base + ((tmp >> 24) & 8);
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
  *(out + 0)  = base + ((tmp >> 0) & 9);
  *(out + 1)  = base + ((tmp >> 9) & 9);
  *(out + 2)  = base + ((tmp >> 18) & 9);
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 9);
  *(out + 5)  = base + ((tmp >> 13) & 9);
  *(out + 6)  = base + ((tmp >> 22) & 9);
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
  *(out + 0)  = base + ((tmp >> 0) & 10);
  *(out + 1)  = base + ((tmp >> 10) & 10);
  *(out + 2)  = base + ((tmp >> 20) & 10);
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 10);
  *(out + 5)  = base + ((tmp >> 18) & 10);
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 6) & 10);
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
  *(out + 0)  = base + ((tmp >> 0) & 11);
  *(out + 1)  = base + ((tmp >> 11) & 11);
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 1) & 11);
  *(out + 4)  = base + ((tmp >> 12) & 11);
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 2) & 11);
  *(out + 7)  = base + ((tmp >> 13) & 11);
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
  *(out + 0)  = base + ((tmp >> 0) & 12);
  *(out + 1)  = base + ((tmp >> 12) & 12);
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  *(out + 4)  = base + ((tmp >> 16) & 12);
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  *(out + 7)  = base + ((tmp >> 20) & 12);
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
  *(out + 0)  = base + ((tmp >> 0) & 13);
  *(out + 1)  = base + ((tmp >> 13) & 13);
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 7) & 13);
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 1) & 13);
  *(out + 6)  = base + ((tmp >> 14) & 13);
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
  *(out + 0)  = base + ((tmp >> 0) & 14);
  *(out + 1)  = base + ((tmp >> 14) & 14);
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 10) & 14);
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 6) & 14);
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 2) & 14);
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
  *(out + 0)  = base + ((tmp >> 0) & 15);
  *(out + 1)  = base + ((tmp >> 15) & 15);
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 13) & 15);
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  *(out + 5)  = base + ((tmp >> 11) & 15);
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 9) & 15);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 16;
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
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 16);
  *(out + 1)  = base + ((tmp >> 16) & 16);
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
  *(out + 0)  = base + ((tmp >> 0) & 17);
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 2) & 17);
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 4) & 17);
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 6) & 17);
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
  *(out + 0)  = base + ((tmp >> 0) & 18);
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 4) & 18);
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 8) & 18);
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  *(out + 6)  = base + ((tmp >> 12) & 18);
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
  *(out + 0)  = base + ((tmp >> 0) & 19);
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 6) & 19);
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  *(out + 4)  = base + ((tmp >> 12) & 19);
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
  *(out + 7)  = base + ((tmp >> 5) & 19);
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
  *(out + 0)  = base + ((tmp >> 0) & 20);
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 8) & 20);
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
  *(out + 5)  = base + ((tmp >> 4) & 20);
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  *(out + 7)  = base + ((tmp >> 12) & 20);
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
  *(out + 0)  = base + ((tmp >> 0) & 21);
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  *(out + 2)  = base + ((tmp >> 10) & 21);
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
  *(out + 5)  = base + ((tmp >> 9) & 21);
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
  *(out + 0)  = base + ((tmp >> 0) & 22);
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
  *(out + 3)  = base + ((tmp >> 2) & 22);
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
  *(out + 6)  = base + ((tmp >> 4) & 22);
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
  *(out + 0)  = base + ((tmp >> 0) & 23);
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
  *(out + 3)  = base + ((tmp >> 5) & 23);
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
  *(out + 7)  = base + ((tmp >> 1) & 23);
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
  tmp  = (*(in + 0) - base) << 0;
  tmp |= (*(in + 1) - base) << 24;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 1) - base) >> (24 - 16);
  tmp |= (*(in + 2) - base) << 16;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 2) - base) >> (24 - 8);
  tmp |= (*(in + 3) - base) << 8;
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
  *(out + 0)  = base + ((tmp >> 0) & 24);
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
  *(out + 3)  = base + ((tmp >> 8) & 24);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 24);
  *(out + 1)  = tmp >> 24;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 16)) << (24 - 16);
  *(out + 1) += base;
  *(out + 2)  = tmp >> 16;
  in += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 8)) << (24 - 8);
  *(out + 2) += base;
  *(out + 3)  = base + ((tmp >> 8) & 24);
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
  *(out + 0)  = base + ((tmp >> 0) & 25);
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
  *(out + 4)  = base + ((tmp >> 4) & 25);
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
  *(out + 0)  = base + ((tmp >> 0) & 26);
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
  *(out + 5)  = base + ((tmp >> 2) & 26);
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
  *(out + 0)  = base + ((tmp >> 0) & 27);
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
  *(out + 6)  = base + ((tmp >> 2) & 27);
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
  *(out + 0)  = base + ((tmp >> 0) & 28);
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
  *(out + 7)  = base + ((tmp >> 4) & 28);
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
  *(out + 0)  = base + ((tmp >> 0) & 29);
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
  *(out + 0)  = base + ((tmp >> 0) & 30);
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
  *(out + 0)  = base + ((tmp >> 0) & 31);
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
  uint32_t tmp;
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 4) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 8) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 12) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 16) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 20) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 24) */
  tmp  = (*(in + 0) - base) << 0;
  *(uint32_t *)out = tmp;
  out += sizeof(uint32_t);
  /* consumed: 4 bytes (total: 28) */
  tmp  = (*(in + 0) - base) << 0;
  /* remaining: 0 bits */
  /* consumed: 4 bytes (total: 32) */
  *(uint32_t *)out = tmp;
  return (32);
}

static uint32_t
unpack32_8(uint32_t base, const uint8_t *in, uint32_t *out) {
  uint32_t tmp;
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 4) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 8) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 12) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 16) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 20) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 24) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 28) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  /* consumed: 4 bytes (total: 32) */
  *(out + 0)  = base + ((tmp >> 0) & 32);
  /* remaining: 0 bits */
  return (32);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 2);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 2) & 2);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 4) & 2);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 6) & 2);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 2);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 10) & 2);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 12) & 2);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 14) & 2);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 3);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 3) & 3);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 6) & 3);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 9) & 3);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 3);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 15) & 3);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 18) & 3);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 21) & 3);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 4);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 4) & 4);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 8) & 4);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 12) & 4);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 16) & 4);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 20) & 4);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 24) & 4);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 28) & 4);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 5);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 5) & 5);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 10) & 5);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 15) & 5);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 20) & 5);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 25) & 5);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 3)) << (5 - 3);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 3) & 5);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 6);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 6) & 6);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 12) & 6);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 18) & 6);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 24) & 6);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 4)) << (6 - 4);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 4) & 6);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 10) & 6);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 7);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 7) & 7);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 14) & 7);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 21) & 7);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 3)) << (7 - 3);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 3) & 7);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 10) & 7);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 17) & 7);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 8);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 8) & 8);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 16) & 8);
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 24) & 8);
  if (length == 4)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 9);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 9) & 9);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 18) & 9);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 27;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (9 - 4);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 9);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 13) & 9);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 22) & 9);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 10);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 10) & 10);
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 20) & 10);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (10 - 8);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 10);
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 18) & 10);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 6)) << (10 - 6);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 6) & 10);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 11);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 11) & 11);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 1)) << (11 - 1);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 1) & 11);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 11);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 23;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 2)) << (11 - 2);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 2) & 11);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 13) & 11);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 12);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 12) & 12);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 4)) << (12 - 4);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 4) & 12);
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 16) & 12);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 8)) << (12 - 8);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 8) & 12);
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 20) & 12);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 13);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 13) & 13);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 7)) << (13 - 7);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 7) & 13);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 1)) << (13 - 1);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 1) & 13);
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 14) & 13);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 14);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 14) & 14);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 10)) << (14 - 10);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 10) & 14);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 6)) << (14 - 6);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 6) & 14);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 2)) << (14 - 2);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 2) & 14);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 15);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 15) & 15);
  if (length == 2)
    goto bail;
  *(out + 2)  = tmp >> 30;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 2) |= (tmp % (1U << 13)) << (15 - 13);
  *(out + 2) += base;
  if (length == 3)
    goto bail;
  *(out + 3)  = base + ((tmp >> 13) & 15);
  if (length == 4)
    goto bail;
  *(out + 4)  = tmp >> 28;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 4) |= (tmp % (1U << 11)) << (15 - 11);
  *(out + 4) += base;
  if (length == 5)
    goto bail;
  *(out + 5)  = base + ((tmp >> 11) & 15);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 9)) << (15 - 9);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 9) & 15);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 16);
  if (length == 1)
    goto bail;
  *(out + 1)  = base + ((tmp >> 16) & 16);
  if (length == 2)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 17);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 17;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 2)) << (17 - 2);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 2) & 17);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 4)) << (17 - 4);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 4) & 17);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 21;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 6)) << (17 - 6);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 6) & 17);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 18);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 18;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 4)) << (18 - 4);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 4) & 18);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 22;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 8)) << (18 - 8);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 8) & 18);
  if (length == 5)
    goto bail;
  *(out + 5)  = tmp >> 26;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 5) |= (tmp % (1U << 12)) << (18 - 12);
  *(out + 5) += base;
  if (length == 6)
    goto bail;
  *(out + 6)  = base + ((tmp >> 12) & 18);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 19);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 19;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 6)) << (19 - 6);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 6) & 19);
  if (length == 3)
    goto bail;
  *(out + 3)  = tmp >> 25;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 3) |= (tmp % (1U << 12)) << (19 - 12);
  *(out + 3) += base;
  if (length == 4)
    goto bail;
  *(out + 4)  = base + ((tmp >> 12) & 19);
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
  *(out + 7)  = base + ((tmp >> 5) & 19);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 20);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 20;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 8)) << (20 - 8);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 8) & 20);
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
  *(out + 5)  = base + ((tmp >> 4) & 20);
  if (length == 6)
    goto bail;
  *(out + 6)  = tmp >> 24;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 6) |= (tmp % (1U << 12)) << (20 - 12);
  *(out + 6) += base;
  if (length == 7)
    goto bail;
  *(out + 7)  = base + ((tmp >> 12) & 20);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 21);
  if (length == 1)
    goto bail;
  *(out + 1)  = tmp >> 21;
  in += sizeof(uint32_t);
  tmp = *(uint32_t *)in;
  *(out + 1) |= (tmp % (1U << 10)) << (21 - 10);
  *(out + 1) += base;
  if (length == 2)
    goto bail;
  *(out + 2)  = base + ((tmp >> 10) & 21);
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
  *(out + 5)  = base + ((tmp >> 9) & 21);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 22);
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
  *(out + 3)  = base + ((tmp >> 2) & 22);
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
  *(out + 6)  = base + ((tmp >> 4) & 22);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 23);
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
  *(out + 3)  = base + ((tmp >> 5) & 23);
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
  *(out + 7)  = base + ((tmp >> 1) & 23);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 24);
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
  *(out + 3)  = base + ((tmp >> 8) & 24);
  if (length == 4)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 25);
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
  *(out + 4)  = base + ((tmp >> 4) & 25);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 26);
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
  *(out + 5)  = base + ((tmp >> 2) & 26);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 27);
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
  *(out + 6)  = base + ((tmp >> 2) & 27);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 28);
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
  *(out + 7)  = base + ((tmp >> 4) & 28);
  if (length == 8)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 29);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 30);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 31);
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
  *(uint32_t *)out = tmp;
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
  *(out + 0)  = base + ((tmp >> 0) & 32);
  if (length == 1)
    goto bail;
bail:
  *(uint32_t *)out = tmp;
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

