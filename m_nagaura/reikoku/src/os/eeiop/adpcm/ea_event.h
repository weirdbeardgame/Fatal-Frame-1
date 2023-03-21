// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_EVENT_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_EVENT_H

void EAdpcmEventMain();
void AdpcmPlayEvent(int file_no, u_short start_flm, int fade_flm);
void AdpcmStopEvent(int fout_flm);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_EVENT_H
