// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_SPD_MENU_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_SPD_MENU_H

typedef struct {
	u_char sopt;
	u_char smap;
	u_char slod;
	u_char lod_ret;
} SPD_MNU;

extern SPD_MNU spd_mnu;

void SpdMenuInit();
char SpdMenuCtrl();
void SpdMapMain();
void SpdOptStart();
void SpdOptMain();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_SPD_MENU_H
