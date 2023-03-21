// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_MAGATOKI_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_MAGATOKI_H

void EAdpcmMagatokiMain();
void AdpcmPreMagatokiFadeOut(u_short fout_flm);
u_char IsFadeoutEndAdpcmMagatoki();
void AdpcmMagatokiPlay(int file_no);
void AdpcmMagatokiStop();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_MAGATOKI_H
