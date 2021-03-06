/*******************************************************************************
 *                                                                             *
 * Copyright (c) 2009 Texas Instruments Incorporated - http://www.ti.com/      *
 *                        ALL RIGHTS RESERVED                                  *
 *                                                                             *
 ******************************************************************************/

#ifndef _DISPLAY_LINK_PRIV_H_
#define _DISPLAY_LINK_PRIV_H_

#include <ti/psp/examples/common/vps/chains/links/displayLink.h>
#include <ti/psp/examples/common/vps/chains/links/system/system_priv.h>

#define DISPLAY_LINK_BLANK_FRAME_CHANNEL_NUM     (0xFFFF)

#define DISPLAY_LINK_BLANK_FRAME_INIT_QUE        (6)

#define DISPLAY_LINK_OBJ_MAX (3)

#define DISPLAY_LINK_CMD_DO_DEQUE                (0x0500)

typedef struct
{
    UInt32 tskId;

    VpsUtils_TskHndl tsk;

    DisplayLink_CreateParams createArgs;

    System_LinkInfo      *pInTskInfo;

    System_LinkQueInfo   inQueInfo;

    Semaphore_Handle    lock;
    Semaphore_Handle    complete;

    UInt32 curDisplayChannelNum;
    UInt32 queueCount;

    FVID2_Handle         displayHndl;

    Vps_DispCreateParams displayCreateArgs;
    Vps_DispCreateStatus displayCreateStatus;
    FVID2_Format         displayFormat;
    UInt32               displayInstId;

    FVID2_Frame          blankFrame;

    UInt32               dequeCount;
    UInt32               cbCount;

    UInt32               totalTime;

    UInt32               startTime;
    UInt32               prevTime;
    UInt32               minCbTime;
    UInt32               maxCbTime;
    Uint32               lastCbTime;

} DisplayLink_Obj;



Int32 DisplayLink_drvCreate(DisplayLink_Obj *pObj, DisplayLink_CreateParams *pPrm);
Int32 DisplayLink_drvStart(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvProcessData(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvStop(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvDelete(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvLock(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvUnlock(DisplayLink_Obj *pObj);
Int32 DisplayLink_drvSwitchCh(DisplayLink_Obj *pObj, UInt32 channelNum);

#endif
