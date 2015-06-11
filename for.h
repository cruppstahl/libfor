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

/**
 * A fast implementation for Frame of Reference encoding.
 *
 * See the README.md file for more information, example code and references.
 *
 * Feel free to send comments/questions to chris@crupp.de. I am available
 * for consulting.
 */

#ifndef FOR_H_5580af15_4570_41f9_ba2b_8afb1400e81e
#define FOR_H_5580af15_4570_41f9_ba2b_8afb1400e81e

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Returns the size required to compress a sequence of |length| ints,
 * each compressed with |bits| bits
 *
 * Invariant: bits <= 32
 */
extern uint32_t
for_compressed_size_bits(uint32_t length, uint32_t bits);

/**
 * Returns the size required to compress an unsorted sequence of |length| ints.
 * 
 * This routine scans |in| for the min/max values and then calls
 * for_compressed_size_bits().
 */
extern uint32_t
for_compressed_size_unsorted(const uint32_t *in, uint32_t length);

/**
 * Returns the size required to compress a sorted sequence of |length| ints.
 * 
 * This routine extracts min/max values at the beginning and end of
 * the sequence, then calls for_compressed_size_bits().
 */
extern uint32_t
for_compressed_size_sorted(const uint32_t *in, uint32_t length);

/**
 * Compresses a sequence of |length| ints at |in| and stores the result
 * in |out|.
 *
 * |base| is the "offset" (or common delta value) of all ints. It is usually
 * set to the minimum value of the uncompressed sequence.
 *
 * |bits| are the bits required to store a single integer.
 *
 * Returns the number of bytes used for compression.
 *
 * Invariant: bits <= 32
 */
extern uint32_t
for_compress_bits(const uint32_t *in, uint8_t *out, uint32_t length,
                uint32_t base, uint32_t bits);

/**
 * Compresses an unsorted sequence of |length| ints at |in| and stores the
 * result in |out|.
 *
 * This routine scans |in| for the min/max values and then calls
 * for_compress_bits().
 */
extern uint32_t
for_compress_unsorted(const uint32_t *in, uint8_t *out, uint32_t length);

/**
 * Compresses a sorted sequence of |length| ints at |in| and stores the
 * result in |out|.
 *
 * This routine extracts min/max values at the beginning and end of
 * the sequence, then calls for_compress_bits().
 */
extern uint32_t
for_compress_sorted(const uint32_t *in, uint8_t *out, uint32_t length);

/**
 * Uncompresses a sequence of |length| ints at |in| and stores the
 * result in |out|.
 *
 * |base| is the "offset" (or common delta value) of all ints. It is usually
 * set to the minimum value of the uncompressed sequence.
 *
 * |bits| are the bits required to store a single integer.
 *
 * Returns the number of compressed bytes processed.
 *
 * Invariant: bits <= 32
 */
extern uint32_t
for_uncompress_bits(const uint8_t *in, uint32_t *out, uint32_t length,
                uint32_t base, uint32_t bits);

/**
 * Uncompresses a sequence of |length| ints at |in| and stores the
 * result in |out|.
 *
 * This function is a convenience wrapper for for_uncompress_bits().
 *
 * Returns the number of compressed bytes processed.
 */
extern uint32_t
for_uncompress(const uint8_t *in, uint32_t *out, uint32_t length);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* FOR_H_5580af15_4570_41f9_ba2b_8afb1400e81e */
