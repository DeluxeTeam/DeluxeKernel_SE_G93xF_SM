#ifndef FIMC_IS_VENDOR_CONFIG_GRACE_H
#define FIMC_IS_VENDOR_CONFIG_GRACE_H

#ifdef CONFIG_COMPANION_C3_USE
#include "fimc-is-from-rear-c3-imx260_v003.h"
#else
#include "fimc-is-from-rear-c2-imx240_v003.h"
#endif
#include "fimc-is-eeprom-front-c3-4e6_v004.h"

#define VENDER_PATH

#define CAMERA_SYSFS_V2
#define SSRM_CAMERA_INFO
#define CAMERA_MODULE_DUALIZE
#ifdef CAMERA_MODULE_DUALIZE
#define CAMERA_MODULE_COMPRESSED_FW_DUMP
#define CAMERA_MODULE_FRONT_SETF_DUMP
#endif
#define CAMERA_MODULE_AVAILABLE_DUMP_VERSION "D12LL"
#define CAMERA_USE_OIS_VDD_1_8V
#define CAMERA_USE_OIS_EXT_CLK

#ifdef CONFIG_PREPROCESSOR_STANDBY_USE
#define CAMERA_PARALLEL_RETENTION_SEQUENCE
#define CONFIG_COMPANION_STANDBY_CRC
#define CONFIG_COMPANION_AUTOMATIC_CRC_ON_CLOSE
#endif

#define CAMERA_MODULE_CORE_CS_VERSION 'D'
#define CAMERA_OIS_DOM_UPDATE_VERSION 'O'
#define CAMERA_OIS_SEC_UPDATE_VERSION 'P'
#define CAMERA_MODULE_ES_VERSION_REAR 'B'
#define CAMERA_MODULE_ES_VERSION_FRONT 'B'
#define CAL_MAP_ES_VERSION_REAR '1'
#define CAL_MAP_ES_VERSION_FRONT '3'
#define FIMC_IS_MAX_FW_BUFFER_SIZE (3500 * 1024)

#define CAMERA_OIS_GYRO_OFFSET_SPEC 30000
#ifdef CONFIG_COMPANION_C3_USE
#define C3_CSI_ERROR_RECOVERY
#endif

#define CAMERA_PAF_CAL_ERROR_CHECK
#define SELECT_SETFILE_BY_FROM_VERSION

/* Sync with SUPPORT_GROUP_MIGRATION in HAL Side. */
/* #define CONFIG_SUPPORT_GROUP_MIGRATION_FOR_TDNR */
/* #define CONFIG_ENABLE_TDNR */

#endif /* FIMC_IS_VENDOR_CONFIG_GRACE_H */
