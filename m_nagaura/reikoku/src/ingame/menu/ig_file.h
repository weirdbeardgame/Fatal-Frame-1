// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_FILE_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_FILE_H

extern u_char file_kind[0];
extern SPRT_DAT spr_dat_tmp[0];
extern RELATION_COM rel_com[0];
extern RELATION_PRT rel_prt[0];
extern RELATION_DAT rel_dat[0];
extern RELATION_YAJI rel_yaj[0];
extern CAPTION_LIST caption_list[0];
extern CAPTION_DATA caption_data[0];
extern enum NAME_PLATE_RABEL {
	SAKKA = 0,
	SAKKA2 = 1,
	JYOSYU = 2,
	JYOSYU2 = 3,
	HENSYU = 4,
	HENSYU2 = 5,
	TOUSYU = 6,
	TOUSYU2 = 7,
	KIRIE = 8,
	KIRIE2 = 9,
	KIRIE3 = 10,
	KIRIE4 = 11,
	SINKAN = 12,
	SINKAN2 = 13,
	KIMONO = 14,
	KIMONO2 = 15,
	KIMONO3 = 16,
	RYOZO = 17,
	RYOZO2 = 18,
	YAE = 19,
	YAE2 = 20,
	MIKOTO = 21,
	MIKOTO2 = 22,
	MIKOTO3 = 23,
	MAFUYU = 24,
	MAFUYU2 = 25,
	MAFUYU3 = 26,
	MIKU = 27,
	MIYUKI = 28,
	MIYUKI2 = 29,
	OMOI = 30,
	OMOI2 = 31
};
extern enum PARENT_RABEL {
	SAKKA_PRT = 0,
	HIMURO_PRT = 1,
	MUNA_PRT = 2,
	HINA_PRT = 3,
	OMOI_PRT = 4
};
extern enum REL_DIRECTION {
	R_UP = 0,
	R_DOWN = 1,
	R_LEFT = 2,
	R_RIGHT = 3
};
extern enum REL_ALPB {
	R_A = 0,
	R_B = 1,
	R_C = 2,
	R_D = 3,
	R_E = 4,
	R_F = 5,
	R_G = 6,
	R_G2 = 7,
	R_H = 8,
	R_I = 9,
	R_J = 10,
	R_J2 = 11,
	R_K = 12,
	R_K2 = 13,
	R_L = 14,
	R_L2 = 15,
	R_N = 16,
	R_O = 17,
	R_P = 18,
	R_Q = 19,
	R_R = 20,
	R_S = 21,
	R_T = 22,
	R_U = 23,
	R_V = 24,
	R_W = 25,
	R_X = 26,
	R_Y = 27,
	R_Z = 28
};
extern RELATION_CSR rel_csr;

void NewgameMenuFileInit();
void LoadgameMenuFileInit();
void StartFileModeInit();
void IngameMenuFile();
void IngameMenuFileDisp();
void IngameMenuFileData();
void IngameMenuFileDataDisp();
void GetDispMenuFile(u_char csr);
void SideBar(u_char hav_now, u_char dsp_max, u_short mov_lng, u_char lst_top, u_short chr_top, u_char alp, short int dx, short int dy);
void PageInfo(u_char now, u_char all, short int pos_x, short int pos_y, u_char alpha);
void DokiDokiLetter(u_char level);
void RelationShip();
void RelationMapInit();
void RelAtributeChg();
void RelComAtributeChg();
void MoveBeyondData();
void MoveBeyondGroup();
void RelMapScroolX(RELATION_DAT *r_dat);
void RelMapScroolY(RELATION_PRT *r_prt);
int ButtonManager();
void RelationDispDat(RELATION_DAT *r_dat);
void RelDspYajirusi(RELATION_YAJI *r_yaj);
void RelDspComment();
void RelDspPrtFla(RELATION_PRT *r_prt);
void RelDspPrt(RELATION_PRT *r_prt);
void RelDspBackGrd();
void RelationDispMsg(RELATION_DAT *r_dat);
void SimpleDispSprtDS(SPRT_DAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate);
void TestPk2DataSou(long int sendtexaddr);
void DispCaption(int no, u_char alp);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_FILE_H
