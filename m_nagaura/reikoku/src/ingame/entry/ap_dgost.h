// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_DGOST_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_DGOST_H

extern u_char dgst_room[0];
extern MSN_LOAD_DAT dgst_load[3];
extern DGST_WRK dgst_wrk;

void DeadGhostAppearReq();
void DeadGhostAppearMain();
int DeadGhostAppearJudge();
void DeadGhostLoadReq();
int DeadGhostLoad();
void DeadGhostBattleEnd();
int EnemyNoDeadGhostJudge(int ene_no);
void DeadGhostSetLoad();
void DeadGhostLoadDel();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_DGOST_H
