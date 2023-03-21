// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_FURN_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_FURN_H

void EAdpcmFurnMain();
void AdpcmPlayFurn(int file_no, float *pos, u_short vol, int fade_flm);
void AdpcmStopFurn(int fout_flm);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_FURN_H
