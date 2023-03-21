// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MAP_ROTD_CTL_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MAP_ROTD_CTL_H

int CheckRotDoorOpenStatus(int dwrk_no, u_char type);
void ChangeRotDoorFace(u_short door_id);
void ChangeRotDoorFaceRoomId(u_short door_id, u_char room_id);
void ChangeRotDoorFace2Room(u_short door_id, u_char room_id);
int JudgePlyrRotForRotDoor(int dwrk_no);
u_char ChkRotDoorRot(int dwrk_no);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MAP_ROTD_CTL_H
