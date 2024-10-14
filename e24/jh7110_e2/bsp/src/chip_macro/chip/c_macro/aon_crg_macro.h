
#ifndef _AON_CRG_MACRO_H_
#define _AON_CRG_MACRO_H_

//#define AON_CRG_BASE_ADDR 0x0
#define CLK_OSC_DIV4_CTRL_REG_ADDR                                   (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x0U)
#define CLK_AON_APB_FUNC_CTRL_REG_ADDR                               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x4U)
#define CLK_U0_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR                  (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x8U)
#define CLK_U0_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR                  (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0xCU)
#define CLK_GMAC0_RMII_RTX_CTRL_REG_ADDR                             (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x10U)
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR                   (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x14U)
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x18U)
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR                   (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1CU)
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x20U)
#define CLK_U0_OTPC_CLK_APB_CTRL_REG_ADDR                            (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x24U)
#define CLK_U0_RTC_HMS_CLK_APB_CTRL_REG_ADDR                         (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x28U)
#define CLK_RTC_INTERNAL_CTRL_REG_ADDR                               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2CU)
#define CLK_U0_RTC_HMS_CLK_OSC32K_CTRL_REG_ADDR                      (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x30U)
#define CLK_U0_RTC_HMS_CLK_CAL_CTRL_REG_ADDR                         (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x34U)


#define AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x38U)

#define AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR               (U0_AON_CRG__SAIF_BD_APBS__BASE_ADDR + 0x3CU)


#define CLK_OSC_DIV4_DIV_SHIFT                                       0
#define CLK_OSC_DIV4_DIV_MASK                                        0x7U
#define CLK_AON_APB_FUNC_SW_SHIFT                                    24
#define CLK_AON_APB_FUNC_SW_MASK                                     0x1000000U
#define CLK_AON_APB_FUNC_SW_CLK_OSC_DIV4_DATA                        0
#define CLK_AON_APB_FUNC_SW_CLK_OSC_DATA                             1
#define CLK_U0_DW_GMAC5_AXI64_CLK_AHB_ENABLE_DATA                    1
#define CLK_U0_DW_GMAC5_AXI64_CLK_AHB_DISABLE_DATA                   0
#define CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT                       31
#define CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_MASK                        0x80000000U
#define CLK_U0_DW_GMAC5_AXI64_CLK_AXI_ENABLE_DATA                    1
#define CLK_U0_DW_GMAC5_AXI64_CLK_AXI_DISABLE_DATA                   0
#define CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT                       31
#define CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_MASK                        0x80000000U
#define CLK_GMAC0_RMII_RTX_DIV_SHIFT                                 0
#define CLK_GMAC0_RMII_RTX_DIV_MASK                                  0x1FU
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_ENABLE_DATA                     1
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_DISABLE_DATA                    0
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT                        31
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_MASK                         0x80000000U
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT                        24
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_MASK                         0x1000000U
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_CLK_U0_SYS_CRG_CLK_GMAC0_GTXCLK_DATA 0
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC0_RMII_RTX_DATA      1
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_DATA               1
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_UN_POLARITY_DATA            0
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT              30
#define CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK               0x40000000U
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT                        24
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_MASK                         0x1000000U
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC0_RGMII_RXIN_DATA    0
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC0_RMII_RTX_DATA      1
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT                       0
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_MASK                        0x3FU
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_DATA               1
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_UN_POLARITY_DATA            0
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT              30
#define CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK               0x40000000U
#define CLK_U0_OTPC_CLK_APB_ENABLE_DATA                              1
#define CLK_U0_OTPC_CLK_APB_DISABLE_DATA                             0
#define CLK_U0_OTPC_CLK_APB_EN_SHIFT                                 31
#define CLK_U0_OTPC_CLK_APB_EN_MASK                                  0x80000000U
#define CLK_U0_RTC_HMS_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_RTC_HMS_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_RTC_HMS_CLK_APB_EN_SHIFT                              31
#define CLK_U0_RTC_HMS_CLK_APB_EN_MASK                               0x80000000U
#define CLK_RTC_INTERNAL_DIV_SHIFT                                   0
#define CLK_RTC_INTERNAL_DIV_MASK                                    0x3FFU
#define CLK_U0_RTC_HMS_CLK_OSC32K_SW_SHIFT                           24
#define CLK_U0_RTC_HMS_CLK_OSC32K_SW_MASK                            0x1000000U
#define CLK_U0_RTC_HMS_CLK_OSC32K_SW_CLK_RTC_DATA                    0
#define CLK_U0_RTC_HMS_CLK_OSC32K_SW_CLK_RTC_INTERNAL_DATA           1
#define CLK_U0_RTC_HMS_CLK_CAL_ENABLE_DATA                           1
#define CLK_U0_RTC_HMS_CLK_CAL_DISABLE_DATA                          0
#define CLK_U0_RTC_HMS_CLK_CAL_EN_SHIFT                              31
#define CLK_U0_RTC_HMS_CLK_CAL_EN_MASK                               0x80000000U



#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_SHIFT                        0
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_MASK                         (0x1 << 0)
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_ASSERT                       1
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_CLEAR                        0
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_SHIFT                        1
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_MASK                         (0x1 << 1)
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_ASSERT                       1
#define RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_CLEAR                        0
#define RSTN_U0_AON_IOMUX_PRESETN_SHIFT                              2
#define RSTN_U0_AON_IOMUX_PRESETN_MASK                               (0x1 << 2)
#define RSTN_U0_AON_IOMUX_PRESETN_ASSERT                             1
#define RSTN_U0_AON_IOMUX_PRESETN_CLEAR                              0
#define RSTN_U0_PMU_RSTN_APB_SHIFT                                   3
#define RSTN_U0_PMU_RSTN_APB_MASK                                    (0x1 << 3)
#define RSTN_U0_PMU_RSTN_APB_ASSERT                                  1
#define RSTN_U0_PMU_RSTN_APB_CLEAR                                   0
#define RSTN_U0_PMU_RSTN_WKUP_SHIFT                                  4
#define RSTN_U0_PMU_RSTN_WKUP_MASK                                   (0x1 << 4)
#define RSTN_U0_PMU_RSTN_WKUP_ASSERT                                 1
#define RSTN_U0_PMU_RSTN_WKUP_CLEAR                                  0
#define RSTN_U0_RTC_HMS_RSTN_APB_SHIFT                               5
#define RSTN_U0_RTC_HMS_RSTN_APB_MASK                                (0x1 << 5)
#define RSTN_U0_RTC_HMS_RSTN_APB_ASSERT                              1
#define RSTN_U0_RTC_HMS_RSTN_APB_CLEAR                               0
#define RSTN_U0_RTC_HMS_RSTN_CAL_SHIFT                               6
#define RSTN_U0_RTC_HMS_RSTN_CAL_MASK                                (0x1 << 6)
#define RSTN_U0_RTC_HMS_RSTN_CAL_ASSERT                              1
#define RSTN_U0_RTC_HMS_RSTN_CAL_CLEAR                               0
#define RSTN_U0_RTC_HMS_RSTN_OSC32K_SHIFT                            7
#define RSTN_U0_RTC_HMS_RSTN_OSC32K_MASK                             (0x1 << 7)
#define RSTN_U0_RTC_HMS_RSTN_OSC32K_ASSERT                           1
#define RSTN_U0_RTC_HMS_RSTN_OSC32K_CLEAR                            0

#define _DIVIDE_CLOCK_CLK_OSC_DIV4_(div) 			saif_set_reg(CLK_OSC_DIV4_CTRL_REG_ADDR, div, CLK_OSC_DIV4_DIV_SHIFT, CLK_OSC_DIV4_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_OSC_DIV4_ 		saif_get_reg(CLK_OSC_DIV4_CTRL_REG_ADDR, CLK_OSC_DIV4_DIV_SHIFT, CLK_OSC_DIV4_DIV_MASK)
#define _SWITCH_CLOCK_CLK_AON_APB_FUNC_SOURCE_CLK_OSC_DIV4_ 	saif_set_reg(CLK_AON_APB_FUNC_CTRL_REG_ADDR, CLK_AON_APB_FUNC_SW_CLK_OSC_DIV4_DATA, CLK_AON_APB_FUNC_SW_SHIFT, CLK_AON_APB_FUNC_SW_MASK)
#define _SWITCH_CLOCK_CLK_AON_APB_FUNC_SOURCE_CLK_OSC_ 	saif_set_reg(CLK_AON_APB_FUNC_CTRL_REG_ADDR, CLK_AON_APB_FUNC_SW_CLK_OSC_DATA, CLK_AON_APB_FUNC_SW_SHIFT, CLK_AON_APB_FUNC_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_AON_APB_FUNC_ 		saif_get_reg(CLK_AON_APB_FUNC_CTRL_REG_ADDR, CLK_AON_APB_FUNC_SW_SHIFT, CLK_AON_APB_FUNC_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_AON_APB_FUNC_(x) 		saif_set_reg(CLK_AON_APB_FUNC_CTRL_REG_ADDR, x, CLK_AON_APB_FUNC_SW_SHIFT, CLK_AON_APB_FUNC_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_ENABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_DISABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_ENABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_DISABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC0_RMII_RTX_(div) 			saif_set_reg(CLK_GMAC0_RMII_RTX_CTRL_REG_ADDR, div, CLK_GMAC0_RMII_RTX_DIV_SHIFT, CLK_GMAC0_RMII_RTX_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC0_RMII_RTX_ 		saif_get_reg(CLK_GMAC0_RMII_RTX_CTRL_REG_ADDR, CLK_GMAC0_RMII_RTX_DIV_SHIFT, CLK_GMAC0_RMII_RTX_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_ENABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_ 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_DISABLE_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_U0_SYS_CRG_CLK_GMAC0_GTXCLK_ 	saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_CLK_U0_SYS_CRG_CLK_GMAC0_GTXCLK_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_GMAC0_RMII_RTX_ 	saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC0_RMII_RTX_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SET_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_ 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_ 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_UN_POLARITY_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC0_RGMII_RXIN_ 	saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC0_RGMII_RXIN_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC0_RMII_RTX_ 	saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC0_RMII_RTX_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_RX_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_RX_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SET_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_(dly) 			saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, dly, CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_MASK)
#define _GET_CLOCK_DELAY_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_RX_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_DLY_MASK)
#define _SET_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_ 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_ 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_UN_POLARITY_DATA, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_ 		saif_get_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_(x) 		saif_set_reg(CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, x, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U0_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _ENABLE_CLOCK_CLK_U0_OTPC_CLK_APB_ 			saif_set_reg(CLK_U0_OTPC_CLK_APB_CTRL_REG_ADDR, CLK_U0_OTPC_CLK_APB_ENABLE_DATA, CLK_U0_OTPC_CLK_APB_EN_SHIFT, CLK_U0_OTPC_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_OTPC_CLK_APB_ 			saif_set_reg(CLK_U0_OTPC_CLK_APB_CTRL_REG_ADDR, CLK_U0_OTPC_CLK_APB_DISABLE_DATA, CLK_U0_OTPC_CLK_APB_EN_SHIFT, CLK_U0_OTPC_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_OTPC_CLK_APB_ 		saif_get_reg(CLK_U0_OTPC_CLK_APB_CTRL_REG_ADDR, CLK_U0_OTPC_CLK_APB_EN_SHIFT, CLK_U0_OTPC_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_OTPC_CLK_APB_(x) 		saif_set_reg(CLK_U0_OTPC_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_OTPC_CLK_APB_EN_SHIFT, CLK_U0_OTPC_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_RTC_HMS_CLK_APB_ 			saif_set_reg(CLK_U0_RTC_HMS_CLK_APB_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_APB_ENABLE_DATA, CLK_U0_RTC_HMS_CLK_APB_EN_SHIFT, CLK_U0_RTC_HMS_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_RTC_HMS_CLK_APB_ 			saif_set_reg(CLK_U0_RTC_HMS_CLK_APB_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_APB_DISABLE_DATA, CLK_U0_RTC_HMS_CLK_APB_EN_SHIFT, CLK_U0_RTC_HMS_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_RTC_HMS_CLK_APB_ 		saif_get_reg(CLK_U0_RTC_HMS_CLK_APB_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_APB_EN_SHIFT, CLK_U0_RTC_HMS_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_RTC_HMS_CLK_APB_(x) 		saif_set_reg(CLK_U0_RTC_HMS_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_RTC_HMS_CLK_APB_EN_SHIFT, CLK_U0_RTC_HMS_CLK_APB_EN_MASK)
#define _DIVIDE_CLOCK_CLK_RTC_INTERNAL_(div) 			saif_set_reg(CLK_RTC_INTERNAL_CTRL_REG_ADDR, div, CLK_RTC_INTERNAL_DIV_SHIFT, CLK_RTC_INTERNAL_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_RTC_INTERNAL_ 		saif_get_reg(CLK_RTC_INTERNAL_CTRL_REG_ADDR, CLK_RTC_INTERNAL_DIV_SHIFT, CLK_RTC_INTERNAL_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U0_RTC_HMS_CLK_OSC32K_SOURCE_CLK_RTC_ 	saif_set_reg(CLK_U0_RTC_HMS_CLK_OSC32K_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_OSC32K_SW_CLK_RTC_DATA, CLK_U0_RTC_HMS_CLK_OSC32K_SW_SHIFT, CLK_U0_RTC_HMS_CLK_OSC32K_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_RTC_HMS_CLK_OSC32K_SOURCE_CLK_RTC_INTERNAL_ 	saif_set_reg(CLK_U0_RTC_HMS_CLK_OSC32K_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_OSC32K_SW_CLK_RTC_INTERNAL_DATA, CLK_U0_RTC_HMS_CLK_OSC32K_SW_SHIFT, CLK_U0_RTC_HMS_CLK_OSC32K_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_RTC_HMS_CLK_OSC32K_ 		saif_get_reg(CLK_U0_RTC_HMS_CLK_OSC32K_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_OSC32K_SW_SHIFT, CLK_U0_RTC_HMS_CLK_OSC32K_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_RTC_HMS_CLK_OSC32K_(x) 		saif_set_reg(CLK_U0_RTC_HMS_CLK_OSC32K_CTRL_REG_ADDR, x, CLK_U0_RTC_HMS_CLK_OSC32K_SW_SHIFT, CLK_U0_RTC_HMS_CLK_OSC32K_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_RTC_HMS_CLK_CAL_ 			saif_set_reg(CLK_U0_RTC_HMS_CLK_CAL_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_CAL_ENABLE_DATA, CLK_U0_RTC_HMS_CLK_CAL_EN_SHIFT, CLK_U0_RTC_HMS_CLK_CAL_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_RTC_HMS_CLK_CAL_ 			saif_set_reg(CLK_U0_RTC_HMS_CLK_CAL_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_CAL_DISABLE_DATA, CLK_U0_RTC_HMS_CLK_CAL_EN_SHIFT, CLK_U0_RTC_HMS_CLK_CAL_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_RTC_HMS_CLK_CAL_ 		saif_get_reg(CLK_U0_RTC_HMS_CLK_CAL_CTRL_REG_ADDR, CLK_U0_RTC_HMS_CLK_CAL_EN_SHIFT, CLK_U0_RTC_HMS_CLK_CAL_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_RTC_HMS_CLK_CAL_(x) 		saif_set_reg(CLK_U0_RTC_HMS_CLK_CAL_CTRL_REG_ADDR, x, CLK_U0_RTC_HMS_CLK_CAL_EN_SHIFT, CLK_U0_RTC_HMS_CLK_CAL_EN_MASK)


#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_SHIFT, RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_SHIFT, RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AON_IOMUX_PRESETN_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_AON_IOMUX_PRESETN_SHIFT, RSTN_U0_AON_IOMUX_PRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AON_IOMUX_PRESETN_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_AON_IOMUX_PRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AON_IOMUX_PRESETN_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_AON_IOMUX_PRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PMU_RSTN_APB_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_APB_SHIFT, RSTN_U0_PMU_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PMU_RSTN_APB_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PMU_RSTN_APB_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PMU_RSTN_WKUP_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_WKUP_SHIFT, RSTN_U0_PMU_RSTN_WKUP_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PMU_RSTN_WKUP_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_WKUP_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PMU_RSTN_WKUP_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_PMU_RSTN_WKUP_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_RTC_HMS_RSTN_APB_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_APB_SHIFT, RSTN_U0_RTC_HMS_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_APB_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_APB_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_RTC_HMS_RSTN_CAL_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_CAL_SHIFT, RSTN_U0_RTC_HMS_RSTN_CAL_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_CAL_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_CAL_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_CAL_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_CAL_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_RTC_HMS_RSTN_OSC32K_ 	saif_get_reg(AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_OSC32K_SHIFT, RSTN_U0_RTC_HMS_RSTN_OSC32K_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_OSC32K_ 	saif_assert_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_OSC32K_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_OSC32K_ 	saif_clear_rst(AON_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, AON_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_RTC_HMS_RSTN_OSC32K_MASK)


#endif //_AON_CRG_MACRO_H_
