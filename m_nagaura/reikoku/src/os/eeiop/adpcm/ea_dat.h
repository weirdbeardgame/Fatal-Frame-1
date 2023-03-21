// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_DAT_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_DAT_H

typedef struct {
	int file_no;
	u_short vol;
} ADPCM_VOL;

extern ADPCM_VOL adpcm_vol_tbl[0];

u_short GetAdpcmVol(int file_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_DAT_H
