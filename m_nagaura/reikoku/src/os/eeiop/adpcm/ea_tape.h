// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_TAPE_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_TAPE_H

void EAdpcmTapeMain();
void AdpcmPlayTape(int file_no, u_short vol, int fade_flm);
void AdpcmStopTape(int fout_flm);
u_char IsEndAdpcmTape();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_TAPE_H
