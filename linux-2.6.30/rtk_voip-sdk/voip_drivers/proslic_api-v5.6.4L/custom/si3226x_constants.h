/*
** Copyright (c) 2010 Silicon Laboratories, Inc.
** 2010-05-11 15:21:11
**
** Si3226x ProSLIC API Configuration Tool Version 1.10L
*/


#ifndef SI3226X_CONSTANTS_H
#define SI3226X_CONSTANTS_H

/** Ringing Presets */
enum {
	RING_MAX_VBAT_PROVISIONING,
	RING_F20_45VRMS_0VDC_LPR,
	RING_F20_45VRMS_0VDC_BAL
};

/** DC_Feed Presets */
enum {
	DCFEED_48V_20MA,
	DCFEED_48V_25MA,
	DCFEED_PSTN_DET_1,
	DCFEED_PSTN_DET_2
};

/** Impedance Presets */
enum {
	ZSYN_600_0_0_30_0,
	ZSYN_270_750_150_30_0,
	ZSYN_370_620_310_30_0,
	ZSYN_220_820_120_30_0,
	ZSYN_600_0_1000_30_0,
	ZSYN_200_680_100_30_0,
	ZSYN_220_820_115_30_0
};

/** FSK Presets */
enum {
	DEFAULT_FSK
};

/** Pulse_Metering Presets */
enum {
	DEFAULT_PULSE_METERING
};

/** Tone Presets */
enum {
	TONEGEN_FCC_DIAL,
	TONEGEN_FCC_BUSY,
	TONEGEN_FCC_RINGBACK,
	TONEGEN_FCC_REORDER,
	TONEGEN_FCC_CONGESTION
};

/** PCM Presets */
enum {
	PCM_8ULAW,
	PCM_8ALAW,
	PCM_16LIN,
	PCM_16LIN_WB
};

/** Multiple General Parameter Options */
enum {
      GEN_PARAM_FLYBACK,
      GEN_PARAM_TSS,
      GEN_PARAM_TSS_ISO
};


#endif

