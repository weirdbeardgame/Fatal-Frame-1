// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_RANK_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_RANK_H

typedef struct {
	u_char adr_no;
	u_char msn_no;
	u_char room;
	u_char status;
	u_short subject[3][2];
	u_int score;
	sceCdCLOCK time;
} PICTURE_WRK;

typedef struct {
	PICTURE_WRK pic_inf[10];
	u_short pic_num;
	u_short best_score;
} SAVE_RANK;

extern SAVE_RANK save_rank;

void NewgameMenuRankInit();
void LoadgameMenuRankInit();
void StartRankModeInit();
void IngameMenuRank();
void IngameMenuRankDisp();
void RankingChkMem(PICTURE_WRK new_pic);
int CheckSamePic(PICTURE_WRK *newp);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_RANK_H
