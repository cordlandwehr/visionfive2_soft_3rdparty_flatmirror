/**
  ******************************************************************************
  * @file  stfdrv_isp_dc.h
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
#ifndef __STFDRV_ISP_DC_H__
#define __STFDRV_ISP_DC_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* defective pixel correction driver structure */


/* defective pixel correction driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_DC_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_DC_RDMA *pstIspDcRdma
    );

#if defined(EXTEND_IOCTL_COMMAND_DC)
//-----------------------------------------------------------------------------
extern
STF_U32 STFDRV_ISP_DC_GetDataBufferAddress(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx
    );

extern
STF_RESULT STFDRV_ISP_DC_SetDataBufferAddress(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U32 u32DataBufferAddress
    );

extern
STF_RESULT STFDRV_ISP_DC_SetAxiId(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    STF_U8 u8AxiId
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_DC)
//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_DC_H__

