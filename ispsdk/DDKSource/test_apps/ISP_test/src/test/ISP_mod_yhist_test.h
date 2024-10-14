/**
  ******************************************************************************
  * @file  ISP_mod_yhist_test.h
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
#ifndef __ISP_MOD_YHIST_TEST_H__
#define __ISP_MOD_YHIST_TEST_H__


#ifdef __cplusplus
extern "C" {
#endif


#include "stf_include.h"


/* ISPC YHIST driver test structure */


/* ISPC YHIST driver test variables */


/* ISPC YHIST driver test interface */
//-----------------------------------------------------------------------------
extern
STF_RESULT Test_YHIST_SetReg(
    STF_VOID
    );

//-----------------------------------------------------------------------------
#if defined(EXTEND_IOCTL_COMMAND_YHIST)
extern
STF_RESULT Test_YHIST_SetStartLocation(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_SetWindowSize(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_SetDecimation(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_SetMuxSel(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_SetDumpBufAddr(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_GetDumpStatus(
    STF_VOID
    );

extern
STF_RESULT Test_YHIST_GetAccValidStatus(
    STF_VOID
    );

#endif //#if defined(EXTEND_IOCTL_COMMAND_YHIST)
extern
STF_RESULT Test_YHIST_GetAccResult(
    STF_VOID
    );

//-----------------------------------------------------------------------------
extern
STF_RESULT ISP_Mod_YHist_Test(
    STF_VOID
    );

//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif


#endif //__ISP_MOD_YHIST_TEST_H__

