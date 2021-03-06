/** ==================================================================
 *  @file   unicache_ctm_cred.h                                                  
 *                                                                    
 *  @path   /ti/psp/iss/hal/cred_cram/cred/inc/cortexm3_sys_ape/                                                  
 *                                                                    
 *  @desc   This  File contains.                                      
 * ===================================================================
 *  Copyright (c) Texas Instruments Inc 2011, 2012                    
 *                                                                    
 *  Use of this software is controlled by the terms and conditions found
 *  in the license agreement under which this software has been supplied
 * ===================================================================*/

/* ============================================================================ 
 * TEXAS INSTRUMENTS INCORPORATED PROPRIETARY INFORMATION Property of Texas
 * Instruments For Unrestricted Internal Use Only Unauthorized reproduction
 * and/or distribution is strictly prohibited.  This product is protected
 * under copyright law and trade secret law as an unpublished work.  Created
 * 2008, (C) Copyright 2008 Texas Instruments.  All rights reserved. */

/**
 *  @Component:   UNICACHE_CTM
 *
 *  @Filename:    unicache_ctm_cred.h
 *
 *  @Description: Component description is not available
 *
 *  Generated by: Socrates CRED generator prototype
 *
    *//* ====================================================================== */

#ifndef __UNICACHE_CTM_CRED_H
#define __UNICACHE_CTM_CRED_H

#ifdef __cplusplus
extern "C" {
#endif

    /* 
     * Instance UNICACHE_CTM of component UNICACHE_CTM mapped in MONICA at address 0x40000400
     */

                                                                              /*-------------------------------------------------------------------------*//**
 * @DEFINITION   BITFIELD
 *
 * @BRIEF        The bitfield must be defined according to register width
 *               of the component - 64/32/16/8
 *
    *//*------------------------------------------------------------------------ */
#undef BITFIELD
#define BITFIELD BITFIELD_32

    /* 
     *  List of Register arrays for component UNICACHE_CTM
     *
     */

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__TINTVLR
 *
 * @BRIEF        These registers contain the interval match value for the 
 *               corresponding timers in the SCTM 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__TINTVLR                              0x40ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__TINTVLR__ELSIZE
 *
 * @BRIEF        TINTVLR register array element size in Bytes
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__TINTVLR__ELSIZE                      0x4ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__TINTVLR__NELEMS
 *
 * @BRIEF        TINTVLR register array number of elements
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__TINTVLR__NELEMS                      2

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT
 *
 * @BRIEF        These registers contain the control and status settings for 
 *               a single 
 *               counter in the module. There will be a CTCR for every 
 *               counter in the module 
 *               (WT: with timer) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT                              0x100ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__ELSIZE
 *
 * @BRIEF        CTCR_WT register array element size in Bytes
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__ELSIZE                      0x4ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__NELEMS
 *
 * @BRIEF        CTCR_WT register array number of elements
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__NELEMS                      2

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT
 *
 * @BRIEF        These registers contain the control and status settings for 
 *               a single 
 *               counter in the module. There will be a CTCR for every 
 *               counter in the module 
 *               (WOT: without timer) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT                             0x108ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__ELSIZE
 *
 * @BRIEF        CTCR_WOT register array element size in Bytes
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__ELSIZE                     0x4ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__NELEMS
 *
 * @BRIEF        CTCR_WOT register array number of elements
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__NELEMS                     6

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTR
 *
 * @BRIEF        These registers contain the value of an individual counter 
 *               in the moduel. 
 *               There will be a CTCNTR for every counter in the module 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTR                               0x180ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTR__ELSIZE
 *
 * @BRIEF        CTCNTR register array element size in Bytes
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTR__ELSIZE                       0x4ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTR__NELEMS
 *
 * @BRIEF        CTCNTR register array number of elements
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTR__NELEMS                       8

    /* 
     *  List of bundle arrays for component UNICACHE_CTM
     *
     */

    /* 
     *  List of bundles for component UNICACHE_CTM
     *
     */

    /* 
     * List of registers for component UNICACHE_CTM
     *
     */

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL
 *
 * @BRIEF        Register description is not available
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL                               0x0ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTDBGNUM
 *
 * @BRIEF        Counter Timer Number Debug Event Register 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTDBGNUM                             0x7Cul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTGNBL
 *
 * @BRIEF        These registers provide for simultaneous enable/disable of 
 *               32 counters 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTGNBL                               0xF0ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTGRST
 *
 * @BRIEF        These registers provide for simultaneous reset of 32 
 *               counters 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTGRST                               0xF8ul

    /* 
     * List of register bitfields for component UNICACHE_CTM
     *
     */

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__NUMSTM   
 *
 * @BRIEF        Number of timers that can export via STM - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__NUMSTM                  BITFIELD(31, 26)
#define UNICACHE_CTM__CTCNTL__NUMSTM__POS             26

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__NUMINPT   
 *
 * @BRIEF        Number of event input signals - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__NUMINPT                 BITFIELD(25, 18)
#define UNICACHE_CTM__CTCNTL__NUMINPT__POS            18

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__NUMTIMR   
 *
 * @BRIEF        Number of timers in the module - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__NUMTIMR                 BITFIELD(17, 13)
#define UNICACHE_CTM__CTCNTL__NUMTIMR__POS            13

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__NUMCNTR   
 *
 * @BRIEF        Number of counters in the module - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__NUMCNTR                 BITFIELD(12, 7)
#define UNICACHE_CTM__CTCNTL__NUMCNTR__POS            7

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__REVID   
 *
 * @BRIEF        Revision ID of SCTM - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__REVID                   BITFIELD(6, 3)
#define UNICACHE_CTM__CTCNTL__REVID__POS              3

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__IDLEMODE   
 *
 * @BRIEF        Idle mode control - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__IDLEMODE                BITFIELD(2, 1)
#define UNICACHE_CTM__CTCNTL__IDLEMODE__POS           1

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__ENBL   
 *
 * @BRIEF        SCTM global enable - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__ENBL                    BITFIELD(0, 0)
#define UNICACHE_CTM__CTCNTL__ENBL__POS               0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__TINTVLR__INTERVAL   
 *
 * @BRIEF        Interval match value for the timers in the SCTM - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__TINTVLR__INTERVAL               BITFIELD(31, 0)
#define UNICACHE_CTM__TINTVLR__INTERVAL__POS          0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTDBGNUM__NUMEVT   
 *
 * @BRIEF        Number of input selectors for debug events - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTDBGNUM__NUMEVT                BITFIELD(2, 0)
#define UNICACHE_CTM__CTDBGNUM__NUMEVT__POS           0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTGNBL__ENABLE   
 *
 * @BRIEF        The counter enable bit-field - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTGNBL__ENABLE                  BITFIELD(7, 0)
#define UNICACHE_CTM__CTGNBL__ENABLE__POS             0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTGRST__RESET   
 *
 * @BRIEF        The counter reset bit-field - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTGRST__RESET                   BITFIELD(7, 0)
#define UNICACHE_CTM__CTGRST__RESET__POS              0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__INPSEL   
 *
 * @BRIEF        Counter Timer input selection - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__INPSEL                 BITFIELD(20, 16)
#define UNICACHE_CTM__CTCR_WT__INPSEL__POS            16

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__RESTART   
 *
 * @BRIEF        Restart the timer after an interval match - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__RESTART                BITFIELD(10, 10)
#define UNICACHE_CTM__CTCR_WT__RESTART__POS           10

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__DBG   
 *
 * @BRIEF        Signal debug logic on interval match - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__DBG                    BITFIELD(9, 9)
#define UNICACHE_CTM__CTCR_WT__DBG__POS               9

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__INT   
 *
 * @BRIEF        Generate interrupt on interval match - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__INT                    BITFIELD(8, 8)
#define UNICACHE_CTM__CTCR_WT__INT__POS               8

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__OVRFLW   
 *
 * @BRIEF        Counter has wrapped since it was last read - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__OVRFLW                 BITFIELD(6, 6)
#define UNICACHE_CTM__CTCR_WT__OVRFLW__POS            6

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__IDLE   
 *
 * @BRIEF        Counter ignores processor IDLE state - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__IDLE                   BITFIELD(5, 5)
#define UNICACHE_CTM__CTCR_WT__IDLE__POS              5

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__FREE   
 *
 * @BRIEF        Counter ignores processor debug halt state - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__FREE                   BITFIELD(4, 4)
#define UNICACHE_CTM__CTCR_WT__FREE__POS              4

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__DURMODE   
 *
 * @BRIEF        Counter is in duration or occurrence mode - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__DURMODE                BITFIELD(3, 3)
#define UNICACHE_CTM__CTCR_WT__DURMODE__POS           3

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__CHAIN   
 *
 * @BRIEF        Counter is chained to an adjacent counter - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__CHAIN                  BITFIELD(2, 2)
#define UNICACHE_CTM__CTCR_WT__CHAIN__POS             2

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__RESET   
 *
 * @BRIEF        Counter reset control - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__RESET                  BITFIELD(1, 1)
#define UNICACHE_CTM__CTCR_WT__RESET__POS             1

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WT__ENBL   
 *
 * @BRIEF        Counter enable control - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WT__ENBL                   BITFIELD(0, 0)
#define UNICACHE_CTM__CTCR_WT__ENBL__POS              0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__INPSEL   
 *
 * @BRIEF        Counter Timer input selection - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__INPSEL                BITFIELD(20, 16)
#define UNICACHE_CTM__CTCR_WOT__INPSEL__POS           16

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__OVRFLW   
 *
 * @BRIEF        Counter has wrapped since it was last read - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__OVRFLW                BITFIELD(6, 6)
#define UNICACHE_CTM__CTCR_WOT__OVRFLW__POS           6

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__IDLE   
 *
 * @BRIEF        Counter ignores processor IDLE state - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__IDLE                  BITFIELD(5, 5)
#define UNICACHE_CTM__CTCR_WOT__IDLE__POS             5

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__FREE   
 *
 * @BRIEF        Counter ignores processor debug halt state - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__FREE                  BITFIELD(4, 4)
#define UNICACHE_CTM__CTCR_WOT__FREE__POS             4

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__DURMODE   
 *
 * @BRIEF        Counter is in duration or occurrence mode - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__DURMODE               BITFIELD(3, 3)
#define UNICACHE_CTM__CTCR_WOT__DURMODE__POS          3

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__CHAIN   
 *
 * @BRIEF        Counter is chained to an adjacent counter - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__CHAIN                 BITFIELD(2, 2)
#define UNICACHE_CTM__CTCR_WOT__CHAIN__POS            2

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__RESET   
 *
 * @BRIEF        Counter reset control - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__RESET                 BITFIELD(1, 1)
#define UNICACHE_CTM__CTCR_WOT__RESET__POS            1

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCR_WOT__ENBL   
 *
 * @BRIEF        Counter enable control - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCR_WOT__ENBL                  BITFIELD(0, 0)
#define UNICACHE_CTM__CTCR_WOT__ENBL__POS             0

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTR__COUNT   
 *
 * @BRIEF        Counter value - (RO) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTR__COUNT                   BITFIELD(31, 0)
#define UNICACHE_CTM__CTCNTR__COUNT__POS              0

    /* 
     * List of register bitfields values for component UNICACHE_CTM
     *
     */

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__IDLEMODE__FORCE_IDLE
 *
 * @BRIEF        Force Idle mode - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__IDLEMODE__FORCE_IDLE    0x0ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__IDLEMODE__NO_IDLE
 *
 * @BRIEF        Ths SCTM will acknoledge the idle request, but never 
 *               transition to the idle state - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__IDLEMODE__NO_IDLE       0x1ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__IDLEMODE__SMART_IDLE
 *
 * @BRIEF        Ths SCTM uses the smart idle protocol. This is the default 
 *               mode - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__IDLEMODE__SMART_IDLE    0x2ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__IDLEMODE__SMART_IDLE_WAKEUP
 *
 * @BRIEF        Since the SCTM does not support internal wakeup, this mode 
 *               is identical to smart_idle - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__IDLEMODE__SMART_IDLE_WAKEUP 0x3ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__ENBL__DISABLE
 *
 * @BRIEF        Ths mode is disable. Only the configuration interface is 
 *               functional. All other logic is reset - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__ENBL__DISABLE           0x0ul

                                                                             /*-------------------------------------------------------------------------*//**
 * @DEFINITION   UNICACHE_CTM__CTCNTL__ENBL__ENABLE
 *
 * @BRIEF        The module is enabled and individual counter/timers can be 
 *               configured - (RW) 
 *
    *//*------------------------------------------------------------------------ */
#define UNICACHE_CTM__CTCNTL__ENBL__ENABLE            0x1ul

#ifdef __cplusplus
}
#endif
#endif                                                     /* __UNICACHE_CTM_CRED_H 
                                                            */
