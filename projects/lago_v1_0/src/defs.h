#define  _CRT_SECURE_NO_WARNINGS

#define _FILE_OFFSET_BITS  64

#ifndef EXP
#define EXP "LAGO"
#endif

/* Output format version */
#define DATAVERSION 			5
#define VERSION 				2
#define REVISION	 			0

#define MAXCHRLEN 				1024
#define BLOCKSIZE				16384
#define MAXFILENAMELEN			255
#define MAXPRESS 				1100 //1100Hpa
#define PRESSUREBLOCKSIZE		22
#define GPSBLOCKSIZE 			64

#define XIL_AXI_INTC_BASEADDR 0x40000000
#define XIL_AXI_INTC_HIGHADDR 0x40000FFF

#define XIL_AXI_INTC_ISR_OFFSET    0x0
#define XIL_AXI_INTC_IPR_OFFSET    0x4
#define XIL_AXI_INTC_IER_OFFSET    0x8
#define XIL_AXI_INTC_IAR_OFFSET    0xC
#define XIL_AXI_INTC_SIE_OFFSET    0x10
#define XIL_AXI_INTC_CIE_OFFSET    0x14
#define XIL_AXI_INTC_IVR_OFFSET    0x18
#define XIL_AXI_INTC_MER_OFFSET    0x1C
#define XIL_AXI_INTC_IMR_OFFSET    0x20
#define XIL_AXI_INTC_ILR_OFFSET    0x24
#define XIL_AXI_INTC_IVAR_OFFSET   0x100

#define XIL_AXI_INTC_MER_ME_MASK 0x00000001
#define XIL_AXI_INTC_MER_HIE_MASK 0x00000002

//CFG
#define CFG_RESET_GRAL_OFFSET    0x0
#define CFG_NSAMPLES_OFFSET      0x4
#define CFG_TRLVL_1_OFFSET       0x8
#define CFG_TRLVL_2_OFFSET       0xC
#define CFG_STRLVL_1_OFFSET      0x10
#define CFG_STRLVL_2_OFFSET      0x14
#define CFG_TEMPERATURE_OFFSET   0x18
#define CFG_PRESSURE_OFFSET      0x1C
#define CFG_TIME_OFFSET          0x20
#define CFG_LATITUDE_OFFSET      0x24
#define CFG_LONGITUDE_OFFSET     0x28
#define CFG_ALTITUDE_OFFSET      0x2C
#define CFG_SATELLITE_OFFSET     0x30
#define CFG_HV1_OFFSET           0x40
#define CFG_HV2_OFFSET           0x44

//CFG Slow DAC
#define CFG_DAC_PWM0_OFFSET 0x40
#define CFG_DAC_PWM1_OFFSET 0x44
#define CFG_DAC_PWM2_OFFSET 0x48
#define CFG_DAC_PWM3_OFFSET 0x4C

#define ENBL_ALL_MASK         0xFFFFFFFF
#define RST_ALL_MASK          0x00000000
#define RST_PPS_TRG_FIFO_MASK 0x00000001
#define RST_TLAST_GEN_MASK    0x00000002
#define RST_WRITER_MASK       0x00000004
#define RST_AO_MASK           0x00000008
#define FGPS_EN_MASK          0x00000010

//STS
#define STS_STATUS_OFFSET     0x0

//XADC
#define XADC_SRR_OFFSET          0x0
#define XADC_SR_OFFSET           0x4
#define XADC_AOSR_OFFSET         0x8
#define XADC_CONVSTR_OFFSET      0xC
#define XADC_SYSMONRR_OFFSET     0x10
#define XADC_GIER_OFFSET         0x5C
#define XADC_IPISR_OFFSET        0x60
#define XADC_IPIER_OFFSET        0x68
#define XADC_TEMPERATURE_OFFSET  0x200
#define XADC_VCCINT_OFFSET       0x204
#define XADC_VCCAUX_OFFSET       0x208
#define XADC_VPVN_OFFSET         0x20C
#define XADC_VREFP_OFFSET        0x210
#define XADC_VREFN_OFFSET        0x214
#define XADC_VBRAM_OFFSET        0x218
#define XADC_UNDEF_OFFSET        0x21C
#define XADC_SPLYOFF_OFFSET      0x220
#define XADC_ADCOFF_OFFSET       0x224
#define XADC_GAIN_ERR_OFFSET     0x228
#define XADC_ZDC_SPLY_OFFSET     0x234
#define XADC_ZDC_AUX_SPLY_OFFSET 0x238
#define XADC_ZDC_MEM_SPLY_OFFSET 0x23C
#define XADC_VAUX_PN_0_OFFSET    0x240
#define XADC_VAUX_PN_1_OFFSET    0x244
#define XADC_VAUX_PN_2_OFFSET    0x248
#define XADC_VAUX_PN_3_OFFSET    0x24C
#define XADC_VAUX_PN_4_OFFSET    0x250
#define XADC_VAUX_PN_5_OFFSET    0x254
#define XADC_VAUX_PN_6_OFFSET    0x258
#define XADC_VAUX_PN_7_OFFSET    0x25C
#define XADC_VAUX_PN_8_OFFSET    0x260
#define XADC_VAUX_PN_9_OFFSET    0x264
#define XADC_VAUX_PN_10_OFFSET   0x268
#define XADC_VAUX_PN_11_OFFSET   0x26C
#define XADC_VAUX_PN_12_OFFSET   0x270
#define XADC_VAUX_PN_13_OFFSET   0x274
#define XADC_VAUX_PN_14_OFFSET   0x278
#define XADC_VAUX_PN_15_OFFSET   0x27C

#define XADC_AI0_OFFSET XADC_VAUX_PN_8_OFFSET
#define XADC_AI1_OFFSET XADC_VAUX_PN_0_OFFSET
#define XADC_AI2_OFFSET XADC_VAUX_PN_1_OFFSET
#define XADC_AI3_OFFSET XADC_VAUX_PN_9_OFFSET

#define XADC_CONV_VAL 0.00171191993362 //(A_ip/2^12)*(34.99/4.99)


//#define XIL_AXI_INTC_IPISR_INT_OCCURED_MASK 0x00000001
//#define XIL_AXI_INTC2_IPISR_INT_OCCURED_MASK  0x00000002
//#define XIL_AXI_INTC_GIER_ENABLE_INT_MASK 0x80000000
//
//#define XIL_AXI_INTC_CSR_CASC_MASK    0x00000800
//#define XIL_AXI_INTC_CSR_ENABLE_ALL_MASK  0x00000400
//#define XIL_AXI_INTC_CSR_ENABLE_PWM_MASK  0x00000200
//#define XIL_AXI_INTC_CSR_ENABLE_TMR_MASK  0x00000080
//#define XIL_AXI_INTC_CSR_ENABLE_INT_MASK  0x00000040
//#define XIL_AXI_INTC_CSR_LOAD_MASK    0x00000020
//#define XIL_AXI_INTC_CSR_AUTO_RELOAD_MASK 0x00000010
//#define XIL_AXI_INTC_CSR_EXT_CAPTURE_MASK 0x00000008
//#define XIL_AXI_INTC_CSR_EXT_GENERATE_MASK  0x00000004
//#define XIL_AXI_INTC_CSR_DOWN_COUNT_MASK  0x00000002
//#define XIL_AXI_INTC_CSR_CAPTURE_MODE_MASK  0x00000001

