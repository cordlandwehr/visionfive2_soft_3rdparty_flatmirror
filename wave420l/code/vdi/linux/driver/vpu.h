/* SPDX-License-Identifier:  LGPL-2.1 OR BSD-3-Clause */
//--=========================================================================--
//  This file is linux device driver for VPU.
//-----------------------------------------------------------------------------
//
//       This confidential and proprietary software may be used only
//     as authorized by a licensing agreement from Chips&Media Inc.
//     In the event of publication, the following notice is applicable:
//
//            (C) COPYRIGHT 2006 - 2015  CHIPS&MEDIA INC.
//                      ALL RIGHTS RESERVED
//
//       The entire notice above must be reproduced on all authorized
//       copies.
//
//--=========================================================================--

#ifndef __VPU_DRV_H__
#define __VPU_DRV_H__

#include <linux/fs.h>
#include <linux/types.h>

#define USE_VMALLOC_FOR_INSTANCE_POOL_MEMORY
#ifndef PTHREAD_MUTEX_ROBUST_NP
#define PTHREAD_MUTEX_ROBUST_NP     1
#endif

#define VDI_IOCTL_MAGIC  'V'
#define VDI_IOCTL_ALLOCATE_PHYSICAL_MEMORY	_IO(VDI_IOCTL_MAGIC, 0)
#define VDI_IOCTL_FREE_PHYSICALMEMORY		_IO(VDI_IOCTL_MAGIC, 1)
#define VDI_IOCTL_WAIT_INTERRUPT			_IO(VDI_IOCTL_MAGIC, 2)
#define VDI_IOCTL_SET_CLOCK_GATE			_IO(VDI_IOCTL_MAGIC, 3)
#define VDI_IOCTL_RESET						_IO(VDI_IOCTL_MAGIC, 4)
#define VDI_IOCTL_GET_INSTANCE_POOL			_IO(VDI_IOCTL_MAGIC, 5)
#define VDI_IOCTL_GET_COMMON_MEMORY			_IO(VDI_IOCTL_MAGIC, 6)
#define VDI_IOCTL_GET_RESERVED_VIDEO_MEMORY_INFO _IO(VDI_IOCTL_MAGIC, 8)
#define VDI_IOCTL_OPEN_INSTANCE				_IO(VDI_IOCTL_MAGIC, 9)
#define VDI_IOCTL_CLOSE_INSTANCE			_IO(VDI_IOCTL_MAGIC, 10)
#define VDI_IOCTL_GET_INSTANCE_NUM			_IO(VDI_IOCTL_MAGIC, 11)
#define VDI_IOCTL_GET_REGISTER_INFO			_IO(VDI_IOCTL_MAGIC, 12)
#define VDI_IOCTL_FLUSH_DCACHE				_IO(VDI_IOCTL_MAGIC, 14)
#define VDI_IOCTL_DEVFREQ_SET				_IO(VDI_IOCTL_MAGIC, 15)

#define DRAM_MEM2SYS(addr) ((addr) > 0x40000000 && (addr) < 0x43FFFFFFF ? ((addr)+0x400000000):(addr))

#define ioremap_nocache ioremap

typedef struct vpudrv_flush_cache_t {
    unsigned long start;
    unsigned long size;
    unsigned char flag;
} vpudrv_flush_cache_t;

typedef struct vpudrv_devfreq_info_t {
    int picWidth;
    int picHeight;
    int frameRateInfo;
} vpudrv_devfreq_info_t;

typedef struct vpudrv_buffer_t {
	unsigned int size;
	unsigned long phys_addr;
	unsigned long base;							/* kernel logical address in use kernel */
	unsigned long virt_addr;				/* virtual user space address */
} vpudrv_buffer_t;

typedef struct vpu_bit_firmware_info_t {
	unsigned int size;						/* size of this structure*/
	unsigned int core_idx;
	unsigned long reg_base_offset;
	unsigned short bit_code[512];
} vpu_bit_firmware_info_t;

typedef struct vpudrv_inst_info_t {
	unsigned int core_idx;
	unsigned int inst_idx;
	int inst_open_count;	/* for output only*/
} vpudrv_inst_info_t;

typedef struct vpudrv_intr_info_t {
	unsigned int timeout;
	int			intr_reason;
} vpudrv_intr_info_t;
#endif
 
