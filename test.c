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
#include <stdio.h>
#include <stdlib.h>

#include "for.h"

typedef uint32_t (*for_unpackfunc_t) (uint32_t, const uint8_t *, uint32_t *);
typedef uint32_t (*for_packfunc_t)   (uint32_t, const uint32_t *, uint8_t *);
extern for_packfunc_t for_pack32[33];
extern for_unpackfunc_t for_unpack32[33];
extern for_packfunc_t for_pack16[33];
extern for_unpackfunc_t for_unpack16[33];
extern for_packfunc_t for_pack8[33];
extern for_unpackfunc_t for_unpack8[33];

#define VERIFY(c)     while (!c) {                                          \
                        printf("%s:%d: expression failed\n",                \
                                        __FILE__, __LINE__);                \
                        exit(-1);                                           \
                      }

#define VERIFY_ARRAY(a1, a2, len)                                           \
                      do {                                                  \
                        uint32_t i;                                         \
                        for (i = 0; i < len; i++) {                         \
                          if (a1[i] != a2[i]) {                             \
                            printf("data mismatch at %u\n", i);             \
                            exit(-1);                                       \
                          }                                                 \
                        }                                                   \
                      } while (0)

static uint32_t inbuf[1024];

static uint32_t *
generate_sorted_input(uint32_t base, uint32_t length, int stride)
{
  uint32_t i;
  for (i = 0; i < length; i++)
    inbuf[i] = base + i * stride;
  return &inbuf[0];
}

static void
lowlevel_block_func(for_packfunc_t pack, for_unpackfunc_t unpack, uint32_t *in,
                uint32_t base, uint32_t length)
{
  uint8_t out[1024];
  uint32_t tmp[1024];

  uint32_t s1 = pack(base, in, out);
  uint32_t s2 = unpack(base, out, tmp);
  VERIFY(s1 == s2);
  VERIFY_ARRAY(in, tmp, length);
}

static void
lowlevel_block32(int bits)
{
  uint32_t *in = generate_sorted_input(10, 32, bits == 0 ? 0 : 1);

  printf("lowlevel pack/unpack 32 ints, %2d bits\n", bits);
  lowlevel_block_func(for_pack32[bits], for_unpack32[bits], in, 10, 32);
}

static void
lowlevel_block16(int bits)
{
  uint32_t *in = generate_sorted_input(10, 16, bits == 0 ? 0 : 1);

  printf("lowlevel pack/unpack 16 ints, %2d bits\n", bits);
  lowlevel_block_func(for_pack16[bits], for_unpack16[bits], in, 10, 16);
}

static void
lowlevel_block8(int bits)
{
  uint32_t *in = generate_sorted_input(10, 8, bits == 0 ? 0 : 1);

  printf("lowlevel pack/unpack  8 ints, %2d bits\n", bits);
  lowlevel_block_func(for_pack8[bits], for_unpack8[bits], in, 10, 8);
}

static void
lowlevel_blockx(int length, int bits)
{
  (void)length;
  (void)bits;

  printf("lowlevel pack/unpack  %d ints, %2d bits - TODO TODO\n", length, bits);
  
  /*int i;
  uint8_t tmp[1024];
  uint32_t *in = generate_sorted_input(10, 8, bits == 0 ? 0 : 1);

  lowlevel_block_func(for_pack8[bits], unpack8[bits], in, out, 10, 8);
  */
}

int
main()
{
  int i, b;

  for (i = 0; i <= 32; i++)
    lowlevel_block32(i);

  for (i = 0; i <= 32; i++)
    lowlevel_block16(i);

  for (i = 0; i <= 32; i++)
    lowlevel_block8(i);

  for (i = 0; i < 32; i++) {
    for (b = 0; b < 8; b++)
      lowlevel_blockx(b, i);
  }

  return 0;
}
