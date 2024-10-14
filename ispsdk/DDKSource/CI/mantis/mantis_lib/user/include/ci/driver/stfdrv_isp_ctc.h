/**
  ******************************************************************************
  * @file  stfdrv_isp_ctc.h
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
#ifndef __STFDRV_ISP_CTC_H__
#define __STFDRV_ISP_CTC_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_isp.h"
#include "ci/ci_api_structs.h"


/* crosstalk compensation filter driver structure */


/* crosstalk compensation filter driver interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_CTC_SetReg(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_CTC_RDMA *pstIspCtcRdma
    );

#if defined(EXTEND_IOCTL_COMMAND_CTC)
//-----------------------------------------------------------------------------
extern
STF_RESULT STFDRV_ISP_CTC_SetMode(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    STF_U8 u8IspIdx,
    EN_CTC_MODE enCtcMode
    );

extern
STF_RESULT STFDRV_ISP_CTC_SetThreshold(
#if defined(VIRTUAL_IO_MAPPING)
    CI_CONNECTION *pConnection,
#endif //VIRTUAL_IO_MAPPING
    ST_ISP_CTC_THRESHOLD_PARAM *pstIspCtcThreshold
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_CTC)
//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__STFDRV_ISP_CTC_H__

