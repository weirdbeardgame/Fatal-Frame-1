// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OUTGAME_TITLE_H
#define M_NAGAURA_REIKOKU_SRC_OUTGAME_TITLE_H

typedef struct {
	int load_id;
	u_char mode;
	u_char sub_mode;
	u_char next_mode;
	u_char csr;
	u_char load_side;
} TITLE_WRK;

extern SPRT_DAT title_sprt[11];
extern SPRT_DAT font_sprt[20];
extern int opening_movie_type;
extern TITLE_WRK title_wrk;

void TitleCtrl();
void TitleWaitMode();
void TitleStartSlct();
void TitleStartSlctYW(u_char pad_off, u_char alp_max);
void TitleLoadCtrl();
void TitleSelectMode();
void TitleSelectModeYW(u_char pad_off, u_char alp_max);
void TitleSelectDifficultyYW();
void NewGameInit();
void LoadGameInit();
void InitOutDither();
void MakeOutDither();
void DispOutDither();

#endif // M_NAGAURA_REIKOKU_SRC_OUTGAME_TITLE_H
