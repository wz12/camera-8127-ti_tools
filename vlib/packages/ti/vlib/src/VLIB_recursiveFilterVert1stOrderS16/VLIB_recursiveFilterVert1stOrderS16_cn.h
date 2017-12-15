/*******************************************************************************
**+--------------------------------------------------------------------------+**
**|                            ****                                          |**
**|                            ****                                          |**
**|                            ******o***                                    |**
**|                      ********_///_****                                   |**
**|                      ***** /_//_/ ****                                   |**
**|                       ** ** (__/ ****                                    |**
**|                           *********                                      |**
**|                            ****                                          |**
**|                            ***                                           |**
**|                                                                          |**
**|         Copyright (c) 2007-2012 Texas Instruments Incorporated           |**
**|                        ALL RIGHTS RESERVED                               |**
**|                                                                          |**
**| Permission to use, copy, modify, or distribute this software,            |**
**| whether in part or in whole, for any purpose is forbidden without        |**
**| a signed licensing agreement and NDA from Texas Instruments              |**
**| Incorporated (TI).                                                       |**
**|                                                                          |**
**| TI makes no representation or warranties with respect to the             |**
**| performance of this computer program, and specifically disclaims         |**
**| any responsibility for any damages, special or consequential,            |**
**| connected with the use of this program.                                  |**
**|                                                                          |**
**+--------------------------------------------------------------------------+**
*******************************************************************************/

#ifndef VLIB_RECURSIVEFILTERVERT1STORDERS16_CN_H_
#define VLIB_RECURSIVEFILTERVERT1STORDERS16_CN_H_ 1

int32_t VLIB_recursiveFilterVert1stOrderS16_cn(int16_t *out,
                                               const int16_t *in,
                                               const int32_t width,
                                               const int32_t height,
                                               const int16_t weight,
                                               const int16_t *boundaryTop,
                                               const int16_t *boundaryBottom,
                                               int16_t *scratch);

#endif

/* ======================================================================== */
/*  End of file:  VLIB_recursiveFilterVert1stOrderS16_cn.h                  */
/* ======================================================================== */
