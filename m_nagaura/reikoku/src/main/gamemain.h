// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_MAIN_GAMEMAIN_H
#define M_NAGAURA_REIKOKU_SRC_MAIN_GAMEMAIN_H

extern int init_load_id;
extern int init_load_adr;
extern int init_load_size;

void GameMain();
int GameInit();
int GameInitLoad();
void GameModeChange(u_char mode);

#endif // M_NAGAURA_REIKOKU_SRC_MAIN_GAMEMAIN_H
