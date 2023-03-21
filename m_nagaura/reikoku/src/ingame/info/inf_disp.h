// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_INFO_INF_DISP_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_INFO_INF_DISP_H

extern SPRT_DAT spr_dat[0];
extern short unsigned int flip_table[0];
extern float NC_ADJ;
extern SPRT_DAT raze_sprt;
extern INFO_WRK info_wrk;
extern char point_get_end;

void InformationDispInit();
void InformationDispMain();
void InformationDispModeCtrl();
void InformationDispWrkSet();
void PlayerInformationDisp(short int pos_x, short int pos_y);
void FinderDisp(short int pos_x, short int pos_y);
void PhotoScoreDispOnOff(int on_off);
void YVH_CUT(short int tmp_y, u_char tmp_h, short int up_lmt, short int dwn_lmt, short int *dsp_y, signed char *dsp_v, u_char *dsp_h);
void InfoDispPause();
void InfoDispRestart();
int isDispLamp();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_INFO_INF_DISP_H
