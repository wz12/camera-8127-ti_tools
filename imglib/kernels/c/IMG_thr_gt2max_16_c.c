/* ======================================================================== */
/*  TEXAS INSTRUMENTS, INC.                                                 */
/*                                                                          */
/*  IMGLIB-2  DSP Image/Video Processing Library                            */
/*                                                                          */
/*      Release:        Revision 2.0.1                                      */
/*      Snapshot date:  6-May-2008                                          */
/*                                                                          */
/*  This library contains proprietary intellectual property of Texas        */
/*  Instruments, Inc.  The library and its source code are protected by     */
/*  various copyrights, and portions may also be protected by patents or    */
/*  other legal protections.                                                */
/*                                                                          */
/*  This software is licensed for use with Texas Instruments TMS320         */
/*  family DSPs.  This license was provided to you prior to installing      */
/*  the software.  You may review this license by consulting the file       */
/*  TI_license.PDF which accompanies the files in this library.             */
/* ------------------------------------------------------------------------ */
/*          Copyright (C) 2008 Texas Instruments, Incorporated.             */
/*                          All Rights Reserved.                            */
/* ======================================================================== */
/* ========================================================================== */
/*   NAME                                                                     */
/*       IMG_thr_gt2max_16: unsigned 16-bit thresholding to u16 max           */
/*                                                                            */
/*   USAGE                                                                    */
/*       This routine has the following C prototype:                          */
/*                                                                            */
/*       void IMG_thr_gt2max_16                                               */
/*       (                                                                    */
/*           const unsigned short    *in_data,     //  Input image data       */
/*           unsigned short *restrict out_data,    //  Output image data      */
/*           short cols, short rows,               //  Image dimensions       */
/*           unsigned short           threshold    //  Threshold value        */
/*       )                                                                    */
/*                                                                            */
/*       This routine performs a thresholding operation on an input           */
/*       image in in_data[] whose dimensions are given in the arguments       */
/*       'cols' and 'rows'.  The thresholded pixels are written to the        */
/*       output image pointed to by out_data[].  The input and output         */
/*       are exactly the same dimensions.                                     */
/*                                                                            */
/*   DESCRIPTION                                                              */
/*       Pixels that are below the threshold value are written to the         */
/*       output unmodified.  Pixels that are greater than the threshold       */
/*       are set to 65535 in the output image.                                */
/*                                                                            */
/*       The exact thresholding function performed is described by            */
/*       the following transfer function diagram:                             */
/*                                                                            */
/*                                                                            */
/*                65535_|          _________                                  */
/*                      |         |                                           */
/*                      |         |                                           */
/*             O        |         |                                           */
/*             U        |         |                                           */
/*             T    th _|. . . . .|                                           */
/*             P        |        /.                                           */
/*             U        |      /  .                                           */
/*             T        |    /    .                                           */
/*                      |  /      .                                           */
/*                    0_|/________.__________                                 */
/*                      |         |        |                                  */
/*                      0        th       65535                               */
/*                                                                            */
/*                              INPUT                                         */
/*                                                                            */
/*       See the IMGLIB functions IMG_thr_le2thr_16, IMG_thr_gt2thr_16        */
/*       and IMG_thr_le2min_16 for other thresholding operations.             */
/*                                                                            */
/*   ASSUMPTIONS                                                              */
/*     - The input and output buffers do not alias.                           */
/*     - The input and output buffers must be double-word aligned.            */
/*     - The total number of pixels rows*cols must be at least                */
/*       16 and a multiple of 16.                                             */
/*                                                                            */
/*   TECHNIQUES                                                               */
/*     - The loop is unrolled 16x.  Packed-data processing techniques         */
/*       allow us to process all 16 pixels in parallel.                       */
/*                                                                            */
/*     - We use CMPGT2 for comparison, but we have to change the unsigned     */
/*       value to signed value first, using XOR instructions                  */
/*                                                                            */
/*   MEMORY NOTE                                                              */
/*     - This code is ENDIAN NEUTRAL.                                         */
/*     - The input and output arrays must be double-word aligned.             */
/*     - No bank conflicts occur, regardless of the relative alignment of     */
/*       in_data[] and out_data[].                                            */
/*                                                                            */
/*   CYCLES                                                                   */
/*       cycles = rows * cols * 7 / 16 + 26.                                  */
/*       For rows = 256 and cols = 3, cycles = 362.                           */
/*                                                                            */
/*       This number includes 6 cycles of function call overhead.  The        */
/*       exact overhead will vary depending on compiler options used.         */
/* -------------------------------------------------------------------------- */
/*            Copyright (c) 2008 Texas Instruments, Incorporated.             */
/*                           All Rights Reserved.                             */
/* ========================================================================== */

#include "host_build.h"

void IMG_thr_gt2max_16_cn
(
    const unsigned short *restrict in_data,      /*  Input image data    */
    unsigned short       *restrict out_data,     /*  Output image data   */
    short cols, short rows,                      /*  Image dimensions    */
    unsigned short       threshold               /*  Threshold value     */
)
{
    int i, pixels = rows * cols;

    /* -------------------------------------------------------------------- */
    /*  Step through input image copying pixels to the output.  If the      */
    /*  pixels are above our threshold, set them to the threshold value.    */
    /* -------------------------------------------------------------------- */
 	#pragma UNROLL(16)
    for (i = 0; i < pixels; i++)
        out_data[i] = in_data[i] > threshold ? 0xffff : in_data[i];
}

/*========================================================================= */
/*   End of file:  IMG_conv_3x3_16_c.c                                      */
/* ------------------------------------------------------------------------ */
/*             Copyright (c) 2008 Texas Instruments, Incorporated.          */
/*                            All Rights Reserved.                          */
/* ======================================================================== */
