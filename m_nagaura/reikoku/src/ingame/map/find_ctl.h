// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FIND_CTL_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FIND_CTL_H

typedef struct {
	u_char mode;
	u_char dummy;
	u_short req_no;
	u_short msg_no;
	u_short pos_req[10];
} FIND_WRK;

extern u_char find_stts[250];
extern FIND_WRK find_wrk;

void InitFindStatus();
void FindMapInit();
u_char FindMapReqJudge();
u_char FindMapCtrl();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FIND_CTL_H
