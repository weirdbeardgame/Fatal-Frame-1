// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_BTLMODE_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_BTLMODE_H

void EAdpcmBtlmodeMain();
void AdpcmPreBtlmodeFadeOut(u_short fout_flm);
u_char IsEndAdpcmBtlmode();
void AdpcmPreBtlmodePreload(int file_no);
u_char IsPreLoadEndAdpcmBtlmode();
void AdpcmBtlmodePreLoadEndPlay();
void AdpcmBtlmodePlay(int file_no);
void AdpcmBtlmodeEnd();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_BTLMODE_H
