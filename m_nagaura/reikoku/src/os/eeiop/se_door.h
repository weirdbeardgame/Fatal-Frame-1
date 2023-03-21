// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_DOOR_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_DOOR_H

int SDoorLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to);
int SDoorLoadReqAndSet(int load_id, u_short door_id);
void SeDoorOpen(int dwrk_no);
void SeDoorClose(int dwrk_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_DOOR_H
