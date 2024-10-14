/**
  ******************************************************************************
  * @file  stfdrv_isp_oecf.h
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
#ifndef __STFDRV_ISP_OECF_H__
#define __STFDRV_ISP_OECF_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* oecf driver structure */


/* oecf driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_OECF_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_OECF_RDMA *pstIspOecfRdma
    );

#if defined(EXTEND_IOCTL_COMMAND_OECF)
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_OECF_SetInput(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_OECF_RDMA *pstIspOecfRdma
    );

extern
STF_RESULT STFDRV_ISP_OECF_SetOutput(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_OECF_RDMA *pstIspOecfRdma
    );

extern
STF_RESULT STFDRV_ISP_OECF_SetSlope(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_OECF_RDMA *pstIspOecfRdma
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_OECF)
//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_OECF_H__

