// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SOUL_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SOUL_H

void EAdpcmSoulMain();
void AdpcmPreSoulFadeOut(u_short fout_flm);
u_char IsFadeoutEndAdpcmSoul();
void AdpcmPlaySoul(int file_no, u_short vol, int fade_flm);
void AdpcmStopSoul(int fout_flm);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SOUL_H
