// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OUTGAME_MODE_SLCT_H
#define M_NAGAURA_REIKOKU_SRC_OUTGAME_MODE_SLCT_H

typedef struct {
	u_long tex0;
	u_short u;
	u_short v;
	u_short w;
	u_short h;
	int x;
	int y;
	int pri;
	u_char alpha;
} SPRT_DAT;

typedef struct {
	u_char costume;
	u_char clear_info;
} CLEAR_BONUS;

extern SPRT_DAT msl_bg_btl[11];
extern SPRT_DAT msl_bg_fsm[11];
extern SPRT_DAT msl_bg_opt[11];
extern SPRT_DAT msl_bg_snd[11];
extern SPRT_DAT msl_bg_sty[11];
extern SPRT_DAT msel_sprt[0];
extern int cmn_tex_load;
extern int title_bgm_no;
extern CLEAR_BONUS cribo;

void ModeSlctInit(u_char top, u_char end);
void ModeSlctLoop();
void ModeSlctCtrl(u_char mode);
char ModeSlctPad(u_char mode);
void ModeSlctDspBak(u_char alp, u_char mode);
void ModeSlctDspChr(u_char alp, u_char mode);
void DspModeSlect(u_char alp);
void DspStoryMode(u_char alp, float flsh);
void DspBattleMode(u_char alp, float flsh);
void DspMissionSelect(u_char alp);
void PutChrOne(u_short chr, short int px, short int py, u_char rgb, u_char alp, u_char flp);
void PutChrOneRGB(u_short chr, short int px, short int py, u_int rgb, u_char alp, u_char flp);
void ModeSlctDspFlm(u_char per, u_char alp, u_char mode);
void FilmCutter(u_short chr, short int px, short int py, short int ex, u_char rgb, u_char alp);
void ModeSlctDspWin(u_char alp);
void MsLoadCtrl(u_char mode);
void TitleModeEnd();
void ChangeModeSel(int mode);
void BattleModeExit();
void BattleModeNext();
int CheckClearStage();
void ModeSlctDspMsg(u_char alp, u_char mode);
void SetCsrInfoStoryMode();

#endif // M_NAGAURA_REIKOKU_SRC_OUTGAME_MODE_SLCT_H
