#ifndef LMS7002M_MCU_DEFINES_H
#define LMS7002M_MCU_DEFINES_H

enum MCU_ERROR_CODES
{
    MCU_NO_ERROR = 0,
    MCU_ERROR,
    MCU_CGEN_TUNE_FAILED,
    MCU_SXR_TUNE_FAILED,
    MCU_SXT_TUNE_FAILED,
    MCU_LOOPBACK_SIGNAL_WEAK,
    MCU_INVALID_RX_PATH,
    MCU_INVALID_TX_BAND,
    MCU_RX_LPF_OUT_OF_RANGE,
    MCU_RX_INVALID_TIA,
    MCU_TX_LPF_OUT_OF_RANGE,
    MCU_PROCEDURE_DISABLED,
    MCU_R_CTL_LPF_LIMIT_REACHED,
    MCU_CFB_TIA_RFE_LIMIT_REACHED,
    MCU_RCAL_LPF_LIMIT_REACHED,

    MCU_ERROR_CODES_COUNT
};

#endif
