/**
  ******************************************************************************
  * @file  stfdrv_isp_dump.h
  * @author  StarFive Isp Team
  * @version  V1.0
  * @date  12/14/2019
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
#ifndef __STFDRV_ISP_DUMP_H__
#define __STFDRV_ISP_DUMP_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* CSI raw data dump driver structure */


/* CSI raw data dump driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_DUMP_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_DUMP_RDMA *pstIspDumpRdma
    );

#if defined(EXTEND_IOCTL_COMMAND_DUMP)
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_DUMP_SetBufAddr(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U32 u32BufAddr
    );

extern
STF_RESULT STFDRV_ISP_DUMP_SetStride(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U16 u16Stride
    );

extern
STF_RESULT STFDRV_ISP_DUMP_SetBurstLen(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U8 u8BurstLen
    );

extern
STF_RESULT STFDRV_ISP_DUMP_SetPixelRightShift(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U8 u8Shift
    );

extern
STF_RESULT STFDRV_ISP_DUMP_SetAxiId(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U8 u8AxiId
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_DUMP)
//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_DUMP_H__

