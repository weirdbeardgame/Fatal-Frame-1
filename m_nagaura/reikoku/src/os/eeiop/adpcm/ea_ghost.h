// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_GHOST_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_GHOST_H

void AdpcmPlayGhost(int file_no, sceVu0FVECTOR *mpos, u_short vol, u_char ewrk_no, int fade_flm);
void AdpcmStopGhost(int fout_flm);
void EAdpcmGhostMain();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_GHOST_H
