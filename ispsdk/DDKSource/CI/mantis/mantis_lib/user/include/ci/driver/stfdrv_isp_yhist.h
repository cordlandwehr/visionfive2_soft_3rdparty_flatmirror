/**
  ******************************************************************************
  * @file  stfdrv_isp_yhist.h
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
#ifndef __STFDRV_ISP_YHIST_H__
#define __STFDRV_ISP_YHIST_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* y histogram driver structure */


/* y histogram driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_YHIST_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

//-----------------------------------------------------------------------------
#if defined(EXTEND_IOCTL_COMMAND_YHIST)
extern
STF_RESULT STFDRV_ISP_YHIST_SetStartLocation(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

extern
STF_RESULT STFDRV_ISP_YHIST_SetWindowSize(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

extern
STF_RESULT STFDRV_ISP_YHIST_SetDecimation(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

extern
STF_RESULT STFDRV_ISP_YHIST_SetMuxSel(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

extern
STF_RESULT STFDRV_ISP_YHIST_SetDumpBufAddr(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RDMA *pstIspYHistRdma
    );

extern
STF_BOOL8 STFDRV_ISP_YHIST_GetDumpStatus(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx
    );

extern
STF_BOOL8 STFDRV_ISP_YHIST_GetAccValidStatus(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_YHIST)
extern
STF_RESULT STFDRV_ISP_YHIST_GetAccResult(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_YHIST_RESULT_PARAM *pstIspYHistResult
    );

STF_RESULT STFDRV_ISP_YHIST_GetAccResult2(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_VOID *pvBuffer
    );

//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_YHIST_H__

