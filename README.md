libfor - Fast C Library for Frame of Reference Integer Compression
======================

As the name suggests, this is a C/C++ library with a fast scalar (non-SIMD)
implementation for Frame of Reference integer compression.

More about FOR
-----------------------

* Daniel Lemire, Leonid Boytsov, Nathan Kurz, SIMD Compression and the Intersection of Sorted Integers, Software Practice & Experience (to appear) http://arxiv.org/abs/1401.6399
* Daniel Lemire and Leonid Boytsov, Decoding billions of integers per second through vectorization, Software Practice & Experience 45 (1), 2015.  http://arxiv.org/abs/1209.2137 http://onlinelibrary.wiley.com/doi/10.1002/spe.2203/abstract
* Jeff Plaisance, Nathan Kurz, Daniel Lemire, Vectorized VByte Decoding, International Symposium on Web Algorithms 2015, 2015. http://arxiv.org/abs/1503.07387
* Wayne Xin Zhao, Xudong Zhang, Daniel Lemire, Dongdong Shan, Jian-Yun Nie, Hongfei Yan, Ji-Rong Wen, A General SIMD-based Approach to Accelerating Compression Algorithms, ACM Transactions on Information Systems 33 (3), 2015. http://arxiv.org/abs/1502.01916

Simple demo
------------------------

    uint32_t in[100] = {0};
    uint8_t out[512];

    // now fill |in| with numbers of your choice
    // ...

    // now compress; can also use for_compress_sorted() if the numbers are
    // sorted. This is slightly faster.
    uint32_t size = for_compress_unsorted(&in[0], &out[0], 100);
    printf("compressing 100 integers requires %u bytes\n", size);

   // and now decompress again
   uint32_t decompressed[100];
   for_uncompress(&out[0], decompressed, 100);

Usage
------------------------

make
./test

(follow the instructions)

Where is this used?
----------------------

I use this library to compress 32bit integers for hamsterdb pro, a very
fast embedded key/value store (see http://hamsterdb.com). 

If you would like me to add your application to this list then please send
me a mail at chris@crupp.de.

Licensing
------------------------

Apache License, Version 2.0

Requirements
------------------------

This library only works with little-endian CPUs.

Tested on Linux. Porting it should not be difficult.

Acknowledgement
------------------------

This work is based on Daniel Lemire (http://lemire.me)'s ideas and
implementation at https://github.com/lemire/FrameOfReference.

For further information, see
* Goldstein J, Ramakrishnan R, Shaft U. Compressing relations and indexes. Proceedings of the Fourteenth International Conference on Data Engineering, ICDE ’98, IEEE Computer Society: Washington, DC, USA, 1998; 370–379.
* Daniel Lemire and Leonid Boytsov, Decoding billions of integers per second through vectorization, Software Practice & Experience 45 (1), 2015.  http://arxiv.org/abs/1209.2137 http://onlinelibrary.wiley.com/doi/10.1002/spe.2203/abstract
* Daniel Lemire, Leonid Boytsov, Nathan Kurz, SIMD Compression and the Intersection of Sorted Integers, Software Practice & Experience (to appear) http://arxiv.org/abs/1401.6399
* Jeff Plaisance, Nathan Kurz, Daniel Lemire, Vectorized VByte Decoding, International Symposium on Web Algorithms 2015, 2015. http://arxiv.org/abs/1503.07387
* Wayne Xin Zhao, Xudong Zhang, Daniel Lemire, Dongdong Shan, Jian-Yun Nie, Hongfei Yan, Ji-Rong Wen, A General SIMD-based Approach to Accelerating Compression Algorithms, ACM Transactions on Information Systems 33 (3), 2015. http://arxiv.org/abs/1502.01916


