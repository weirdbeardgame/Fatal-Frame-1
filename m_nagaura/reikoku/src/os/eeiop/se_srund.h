// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_SRUND_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_SRUND_H

int SSrundLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to);
int SSrundLoadReqAndSet(int load_id, u_short door_id);
u_char SSrundGetSeNo(int file_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_SRUND_H
