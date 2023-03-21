// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_AUTOG_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_AUTOG_H

void AdpcmPlayAutoGhost(int file_no, sceVu0FVECTOR *mpos, u_short vol, u_char ewrk_no, int fade_flm);
void AdpcmStopAutoGhost(int fout_flm);
void EAdpcmAutogMain();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_AUTOG_H
