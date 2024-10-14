/**
  ******************************************************************************
  * @file  stfdrv_isp_isp_in.h
  * @author  StarFive Isp Team
  * @version  V1.0
  * @date  03/24/2021
  * @brief
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STARFIVE SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * Copyright (C)  2019 - 2022 StarFive Technology Co., Ltd.
  */
#ifndef __STFDRV_ISP_ISP_IN_H__
#define __STFDRV_ISP_ISP_IN_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* ISP input driver structure */


/* ISP input driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_ISP_IN_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_ISP_IN_RDMA *pstIspIspInRdma
    );

//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_ISP_IN_SetMultipleFrame(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    EN_ISP_MULTI_FRAME_MODE enIspMultiFrameMode
    );

extern
STF_RESULT STFDRV_ISP_ISP_IN_SetFirstPixel(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    EN_ISP_1ST_PXL enFirstPixel
    );

extern
STF_RESULT STFDRV_ISP_ISP_IN_SetCaptureSize(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    ST_SIZE stCaptureSize
    );

//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_ISP_IN_H__

