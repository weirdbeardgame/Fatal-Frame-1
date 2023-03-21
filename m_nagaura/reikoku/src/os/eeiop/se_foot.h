// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_FOOT_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_FOOT_H

int SFootLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to);
int SFootLoadReqAndSet(int load_id, u_short door_id);
u_char SFootGetSeNo(int call_no);
u_char SFootGetSeNoFromFileNo(int file_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_FOOT_H
