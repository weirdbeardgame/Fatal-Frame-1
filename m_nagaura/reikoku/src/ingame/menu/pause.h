// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MENU_PAUSE_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MENU_PAUSE_H

typedef struct {
	u_char lock;
	u_char no_pause;
} PAD_CTRL;

typedef struct {
	u_char mode;
	u_char opti;
	u_char csr[3];
	u_short timer;
} PAUSE_WRK;

extern PAD_CTRL pad_ctrl;
extern PAUSE_WRK pause_wrk;
extern char in_pause;

void PauseInit();
int PauseMain();
void PauseDisp();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MENU_PAUSE_H
