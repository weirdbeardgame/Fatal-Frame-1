// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EV_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EV_H

typedef struct {
	int count;
	u_char sew_no0;
	char mode;
} SE_EV_WRK;

extern SE_EV_WRK se_ev_wrk[24];

void SeEvInit();
void SeEvMain();
void SeEvStopAll();
void SeEvStop(int se_ev_pos);
void SeEvReq(int se_req_no, int se_ev_pos, int count, char mode);
void SeEvSetPitch(int se_ev_pos, u_short pitch);
u_short SeEvGetPitch(int se_ev_pos);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EV_H
