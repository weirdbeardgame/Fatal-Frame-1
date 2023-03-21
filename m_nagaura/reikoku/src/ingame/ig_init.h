// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_IG_INIT_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_IG_INIT_H

extern LOAD_START_WRK load_start_wrk;

void InitCamera();
void InitPlyr();
void InitPlyr2(int film_no);
void InitPlyrAfterLoad();
void InitEnemy();
void EnemyActDataLoad();
void InitFlyWrk();
void InitFilm();
void LoadStartDataInit();
int LoadStartDataSet();
void InitLoadStartLock();
int GetLoadStartLock();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_IG_INIT_H
