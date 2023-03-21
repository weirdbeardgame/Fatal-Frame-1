// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EVENT_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EVENT_H

int SEventLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to);
int SEventLoadReqAndSet(int load_id, u_short door_id);
u_char SEventGetSeNo(int file_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_EVENT_H
