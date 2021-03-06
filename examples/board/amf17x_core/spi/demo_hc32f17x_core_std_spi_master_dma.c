/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief SPI 主机 DMA 方式例程，通过标准接口实现
 *
 * - 操作步骤：
 *   1. 将 SPI 的 MOSI 引脚和 MISO 引脚用线相连，模拟从机设备，回环测试；。
 *
 * - 实验现象：
 *   1. 主机通过 MOSI 发送数据，发出的数据从 MOSI 读回；
 *   2. 串口打印出测试结果。
 *
 * \note
 *    如需观察串口打印的调试信息，需要将 PIOA_10 引脚连接 PC 串口的 TXD，
 *    PIOA_9 引脚连接 PC 串口的 RXD。
 *
 * \par 源代码
 * \snippet demo_hc32f17x_std_spi_master_dma.c src_hc32f17x_std_spi_master_dma
 *
 * \internal
 * \par History
 * - 1.00 19-09-20  zp, first implementation.
 * \endinternal
 */

/**
 * \addtogroup demo_if_hc32f17x_std_spi_master_dma
 * \copydoc demo_hc32f17x_std_spi_master_dma.c
 */

/** [src_hc32f17x_std_spi_master_dma] */
#include "ametal.h"
#include "am_vdebug.h"
#include "hc32_pin.h"
#include "am_hc32f17x_inst_init.h"
#include "demo_std_entries.h"
#include "demo_amf17x_core_entries.h"

/**
 * \brief 例程入口
 */
void demo_hc32f17x_core_std_spi_master_dma_entry (void)
{
    am_spi_handle_t spi_handle = am_hc32_spi1_dma_inst_init();

    AM_DBG_INFO("demo amf17x_core std spi master dma!\r\n");

    demo_std_spi_master_entry(spi_handle, PIOA_4); 
}
/** [src_hc32f17x_std_spi_master_dma] */

/* end of file */
