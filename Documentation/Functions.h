// *****************************************************************************
// FILE -- /usr/local/sce/ee/lib/crt0.s
// *****************************************************************************

/* 00100008 000000ac */ _start() {}
/* 001000b8 00000008 */ _exit() {}
/* 001000c0 00000008 */ static _root() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/main/main.c
// *****************************************************************************

/* 001000c8 00000094 */ int main() {}
/* 00100160 00000074 */ void InitGameFirst() {}

/* 001001d8 000000dc */ void CallSoftReset() {
	/* s0 16 */ int lcount;
}

/* 001002b8 000000c4 */ int SoftResetChk() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/mode_slct.c
// *****************************************************************************

/* 00100380 0000008c */ void ModeSlctInit(/* a0 4 */ u_char top, /* a1 5 */ u_char end) {}
/* 00100410 00000038 */ void ModeSlctLoop() {}

/* 00100448 00000510 */ void ModeSlctCtrl(/* s2 18 */ u_char mode) {
	/* s0 16 */ int adpcm_no;
}

/* 00100958 000013ac */ char ModeSlctPad(/* a0 4 */ u_char mode) {
	/* s4 20 */ u_char rtrn;
	/* 0x0(sp) */ u_char sm_slct_num[3];
	/* 0x10(sp) */ u_char bm_slct_num[1];
	/* s3 19 */ int level;
}

/* 00101d08 00000138 */ void ModeSlctDspBak(/* s1 17 */ u_char alp, /* s2 18 */ u_char mode) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00101e40 00000164 */ void ModeSlctDspChr(/* s0 16 */ u_char alp, /* s1 17 */ u_char mode) {
	/* 0x0(sp) */ u_char dsp_rgb[11];
	/* 0x10(sp) */ u_char dsp_alp[11];
	/* f12 50 */ float flsh;
}

/* 00101fa8 0000010c */ void DspModeSlect(/* s0 16 */ u_char alp) {
	/* a1 5 */ int i;
	/* 0x0(sp) */ u_char dsp_rgb[5];
	/* 0x10(sp) */ u_char dsp_alp[5];
}

/* 001020b8 000005cc */ void DspStoryMode(/* s0 16 */ u_char alp, /* f12 50 */ float flsh) {
	/* t3 11 */ int i;
	/* 0x0(sp) */ u_int dsp_rgb[11];
	/* 0x30(sp) */ u_char dsp_alp[11];
}

/* 00102688 0000036c */ void DspBattleMode(/* s0 16 */ u_char alp, /* f12 50 */ float flsh) {
	/* a1 5 */ int i;
	/* 0x0(sp) */ u_char dsp_rgb[9];
	/* 0x10(sp) */ u_char dsp_alp[9];
}

/* 001029f8 00000698 */ void DspMissionSelect(/* s6 22 */ u_char alp) {
	/* s7 23 */ int i;
	/* a1 5 */ int ene_no;
	/* a2 6 */ int msn_no;
	/* a1 5 */ int rank;
	/* s2 18 */ int no;
	/* fp 30 */ int page_base_no;
	/* sdata 356313 */ static u_char csr_alpha;
	/* sdata 356314 */ static u_char csr_brink;
	/* s5 21 */ int level;
}

/* 00103090 00000110 */ void PutChrOne(/* a0 4 */ u_short chr, /* a1 5 */ short int px, /* a2 6 */ short int py, /* a3 7 */ u_char rgb, /* t0 8 */ u_char alp, /* s4 20 */ u_char flp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001031a0 00000134 */ void PutChrOneRGB(/* a0 4 */ u_short chr, /* a1 5 */ short int px, /* a2 6 */ short int py, /* s2 18 */ u_int rgb, /* t0 8 */ u_char alp, /* s6 22 */ u_char flp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001032d8 0000022c */ void ModeSlctDspFlm(/* a0 4 */ u_char per, /* s1 17 */ u_char alp, /* a2 6 */ u_char mode) {
	/* s0 16 */ short int mx;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00103508 0000014c */ void FilmCutter(/* a0 4 */ u_short chr, /* s1 17 */ short int px, /* s3 19 */ short int py, /* a3 7 */ short int ex, /* s2 18 */ u_char rgb, /* s4 20 */ u_char alp) {
	/* a2 6 */ short int cut;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00103658 00000044 */ void ModeSlctDspWin(/* a0 4 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001036a0 0000022c */ void MsLoadCtrl(/* a0 4 */ u_char mode) {}
/* 001038d0 00000060 */ void TitleModeEnd() {}
/* 00103930 0000001c */ void ChangeModeSel(/* v1 3 */ int mode) {}
/* 00103950 00000008 */ void BattleModeExit() {}
/* 00103958 00000008 */ void BattleModeNext() {}

/* 00103960 00000078 */ int CheckClearStage() {
	/* a1 5 */ int i;
	/* a0 4 */ int j;
}

/* 001039d8 000000bc */ void ModeSlctDspMsg(/* t1 9 */ u_char alp, /* a1 5 */ u_char mode) {}
/* 00103a98 00000094 */ void SetCsrInfoStoryMode() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/memory_album.c
// *****************************************************************************

/* 00103b30 00000164 */ void MemAlbmInit(/* a0 4 */ u_char h_type, /* s5 21 */ u_char src_pht_max, /* s4 20 */ u_char cpy_pht_max, /* s6 22 */ u_char src_cl_type, /* 0x0(sp) */ u_char cpy_cl_type, /* s7 23 */ u_char src_slot, /* 0x4(sp) */ u_char cpy_slot, /* fp 30 */ u_char src_file, /* 0xb0(sp) */ int cpy_file) {
	/* s2 18 */ u_char cpy_file;
}

/* 00103c98 0000007c */ void MemAlbmInit2(/* a0 4 */ u_char side, /* a1 5 */ u_char pht_max, /* a2 6 */ u_char cl_type, /* a3 7 */ u_char slot, /* t0 8 */ u_char file) {}
/* 00103d18 0000004c */ void MemAlbmInit3() {}

/* 00103d68 000000e8 */ void NewAlbumInit(/* s1 17 */ u_char side) {
	/* v0 2 */ int i;
}

/* 00103e50 00000594 */ char SweetMemories(/* a0 4 */ u_char mode, /* a1 5 */ u_char alp) {
	/* v1 3 */ u_char rtrn;
	/* s2 18 */ u_char alp_max;
	/* s0 16 */ u_char alp_m0;
	/* s6 22 */ u_char alp_m1;
	/* s4 20 */ u_char alp_s0;
	/* s5 21 */ u_char alp_s1;
}

/* 001043e8 00000758 */ void DspPhotInTopPage(/* s3 19 */ u_char alp) {
	/* s7 23 */ int i;
	/* a1 5 */ u_char pht_adr;
	/* a0 4 */ u_char csr_alp;
	/* s0 16 */ int csr_rgb;
	/* f23 61 */ float flsh;
	/* t0 8 */ u_char base_alp;
	/* 0x10(sp) */ short int px[8];
	/* 0x20(sp) */ short int py[8];
}

/* 00104b40 00000dc4 */ char NmlPadInTopPage() {
	/* s7 23 */ char rtrn;
	/* s6 22 */ char rtrn2;
	/* s3 19 */ u_char csr_movable;
	/* 0x0(sp) */ CSR_ADD csr_ax[8];
	/* 0x20(sp) */ CSR_ADD csr_ay[8];
}

/* 00105908 00000064 */ char SamePhotoChk() {
	/* v1 3 */ int i;
	/* a3 7 */ char same;
}

/* 00105970 000000c4 */ void KillRingBuffer() {
	/* a1 5 */ int i;
}

/* 00105a38 000005e0 */ char AbnPadInBigPage(/* s2 18 */ u_char alp) {
	/* s1 17 */ u_char target;
}

/* 00106018 0000033c */ void MiniPht(/* s3 19 */ u_char alp) {
	/* s0 16 */ u_char n_mode;
	/* a1 5 */ u_char p_mode;
	/* a2 6 */ u_char pre;
	/* s1 17 */ u_char nxt;
	/* a1 5 */ u_char pht_adr;
}

/* 00106358 00000d28 */ char MenuPadCmn() {
	/* s5 21 */ u_char rtrn;
}

/* 00107080 00000290 */ char PasteCtrl() {
	/* s3 19 */ char rtrn;
}

/* 00107310 0000012c */ void Paste() {
	/* a1 5 */ int i;
}

/* 00107440 000003d4 */ void BuffPadCmn() {}

/* 00107818 00000344 */ void BuffPadMnu() {
	/* a1 5 */ int i;
}

/* 00107b60 000001f0 */ void CopyToOsugi(/* a0 4 */ u_char from, /* a1 5 */ u_char no1, /* s1 17 */ u_char to, /* a3 7 */ u_char no2) {
	/* s2 18 */ u_char pht_adr1;
	/* s3 19 */ u_char pht_adr2;
}

/* 00107d50 00000084 */ void CopyDataWithoutAdr(/* a0 4 */ u_char from, /* a1 5 */ u_char no1, /* a2 6 */ u_char to, /* a3 7 */ u_char no2) {}

/* 00107dd8 0000025c */ void DelPyon(/* s1 17 */ u_char file, /* s0 16 */ u_char csr) {
	/* a3 7 */ int i;
	/* a1 5 */ int j;
	/* t1 9 */ int dust;
}

/* 00108038 00000364 */ void DspOgAlbumTop1(/* s0 16 */ u_char alp, /* s1 17 */ u_char alp0, /* s2 18 */ u_char alp1) {
	/* 0x0(sp) */ short int px[8];
	/* 0x10(sp) */ short int py[8];
}

/* 001083a0 00000054 */ void DspOgAlbumTop2(/* a0 4 */ u_char alp, /* a1 5 */ u_char alp0, /* a2 6 */ u_char alp1) {}

/* 001083f8 000001d0 */ void DspOgAlbumBig(/* s1 17 */ u_char alp) {
	/* s0 16 */ u_char side;
}

/* 001085c8 00000b38 */ void InfoWin(/* s7 23 */ u_char mode, /* a1 5 */ u_char side, /* a2 6 */ u_char alp) {
	/* s3 19 */ u_char alp0;
	/* s0 16 */ u_char alp1;
	/* s2 18 */ short int adj1;
	/* s5 21 */ short int adj2;
	/* f12 50 */ float rad;
	/* f24 62 */ float flsh1;
}

/* 00109100 000002d0 */ void Navion(/* s2 18 */ u_char type, /* a1 5 */ u_char sw, /* a2 6 */ u_char alp) {
	/* a0 4 */ u_char max;
	/* a1 5 */ u_char csr;
	/* s1 17 */ u_char alp_l;
	/* s0 16 */ u_char alp_r;
	/* sbss 357888 */ static FLSH_CORE flsh;
}

/* 001093d0 00000678 */ void ComWin(/* s1 17 */ u_char mode, /* s3 19 */ u_char csr, /* s0 16 */ u_char alp) {
	/* sbss 357890 */ static FLSH_CORE flsh;
	/* s2 18 */ u_char alp_csr;
}

/* 00109a48 000004e4 */ void BufWin(/* a0 4 */ u_char type, /* s2 18 */ u_char alp) {
	/* s0 16 */ int i;
	/* s1 17 */ u_char tmp;
	/* a1 5 */ u_char pht_adr;
	/* f14 52 */ float flsh1;
	/* f20 58 */ float flsh2;
}

/* 00109f30 00000784 */ void DtlWin(/* a0 4 */ u_char mode, /* s1 17 */ u_char type, /* s0 16 */ u_char alp) {
	/* s2 18 */ u_char target;
}

/* 0010a6b8 00000648 */ void TruthPhoto(/* a0 4 */ u_char mode, /* t2 10 */ short int px, /* t3 11 */ short int py, /* a3 7 */ u_char alp) {
	/* s1 17 */ int i;
	/* 0x10(sp) */ DISP_STR ds;
	/* a0 4 */ u_char obj_num;
	/* fp 30 */ u_char str_alp;
	/* 0x50(sp) */ u_short obj_py[4][3];
	/* 0x70(sp) */ u_short obj_py2[4][3];
	/* 0x90(sp) */ PICTURE_WRK tmp_pic;
}

/* 0010ad00 0000007c */ void BtnExt(/* a0 4 */ u_char mode, /* s0 16 */ u_char alp) {}

/* 0010ad80 00000194 */ char InKeyTamusi() {
	/* s0 16 */ u_char hit;
}

/* 0010af18 00000050 */ char GetAlbumCurPos(/* a0 4 */ char side) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/main/gamemain.c
// *****************************************************************************

/* 0010af68 000000f4 */ void GameMain() {}
/* 0010b060 00000030 */ int GameInit() {}
/* 0010b090 0000013c */ int GameInitLoad() {}
/* 0010b1d0 00000128 */ void GameModeChange(/* a0 4 */ u_char mode) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/system.c
// *****************************************************************************

/* 0010b2f8 0000008c */ void InitSystem() {}
/* 0010b388 00000008 */ void EndSystem() {}
/* 0010b390 00000028 */ static void InitIop() {}
/* 0010b3b8 0000003c */ static void LoadDefModule() {}
/* 0010b3f8 00000114 */ void LoadIRX() {}
/* 0010b510 00000048 */ void InitSysWrk() {}
/* 0010b558 00000054 */ void GetNowClock(/* s0 16 */ sceCdCLOCK *nc) {}
/* 0010b5b0 00000050 */ void InitOptionWrk() {}

/* 0010b600 000000d4 */ void InitGraphics() {
	/* 0x0(sp) */ sceDmaEnv env;
}

/* 0010b6d8 00000088 */ int userGsSwapDBuff(/* s0 16 */ sceGsDBuff *db, /* a1 5 */ int id) {
	/* s1 17 */ int ret;
}

/* 0010b760 00000028 */ int vblankHandler(/* a0 4 */ int val) {}

/* 0010b788 00000180 */ void vfunc() {
	/* sdata 356344 */ static int count;
	/* sdata 356348 */ static int dfro;
}

/* 0010b908 00000030 */ void SetSysBackColor(/* a0 4 */ u_char r, /* a1 5 */ u_char g, /* a2 6 */ u_char b) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/fileload.c
// *****************************************************************************

/* 0010b938 000000d4 */ int FileLoadInit() {
	/* v0 2 */ int i;
}

/* 0010ba10 00000078 */ void FileLoadNReq(/* a0 4 */ int file_no, /* a1 5 */ long int addr) {}
/* 0010ba88 00000008 */ int FileLoadNEnd(/* a0 4 */ int file_no) {}
/* 0010ba90 00000010 */ void FileLoadB(/* a0 4 */ int file_no, /* a1 5 */ long int addr) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/key_cnf.c
// *****************************************************************************

/* 0010baa0 00000128 */ void SetDefaultKeyType() {}

/* 0010bbc8 00000080 */ void SetKeyType() {
	/* t0 8 */ u_char i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/backup.c
// *****************************************************************************

/* 0010bc48 00000080 */ void SaveDataSet(/* t1 9 */ u_char *addr0) {
	/* a1 5 */ u_char *addr1;
	/* t0 8 */ int i;
	/* a2 6 */ int j;
}

/* 0010bcc8 000000cc */ void SavePCFile() {
	/* s0 16 */ int fd;
	/* 0x0(sp) */ u_char fname[27];
}

/* 0010bd98 000000c4 */ void LoadPCFile() {
	/* s0 16 */ int fd;
	/* 0x0(sp) */ u_char fname[27];
}

/* 0010be60 00000080 */ void LoadDataDevelop(/* t1 9 */ u_char *addr0) {
	/* a1 5 */ u_char *addr1;
	/* t0 8 */ int i;
	/* a2 6 */ int j;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/pad.c
// *****************************************************************************

/* 0010bee0 000001e4 */ int InitPad() {
	/* a3 7 */ PAD_STRUCT *psp;
	/* a2 6 */ int i;
	/* a1 5 */ int j;
	/* a0 4 */ int loop;
	/* 0x0(sp) */ int port_slot[2][2];
}

/* 0010c0c8 00000418 */ int PadSyncCallback() {
	/* s0 16 */ int id;
	/* a0 4 */ int i;
	/* s0 16 */ int state;
	/* v0 2 */ int wrk;
	/* a0 4 */ int exid;
	/* s3 19 */ int p_id;
	/* fp 30 */ int intr;
	/* s1 17 */ PAD_STRUCT *psp;
	/* 0x0(sp) */ char act_align[6];
}

/* 0010c4e0 000001dc */ int PadReadFunc(/* s0 16 */ PAD_STRUCT *psp, /* s1 17 */ int p_id) {
	/* 0x0(sp) */ char r_data[32];
	/* a1 5 */ int i;
	/* a2 6 */ int j;
}

/* 0010c6c0 00000204 */ void SetAnlgInfo(/* a0 4 */ PAD_STRUCT *psp, /* a1 5 */ int p_id) {
	/* f3 41 */ float rot;
	/* a0 4 */ short int pad_x;
	/* v1 3 */ short int pad_y;
	/* s1 17 */ u_char i;
	/* s6 22 */ u_char dir_old;
}

/* 0010c8c8 00000040 */ u_short VibrateRequest(/* a0 4 */ u_short p_id, /* a1 5 */ u_short act1, /* a2 6 */ u_short act2) {
	/* a0 4 */ PAD_STRUCT *psp;
}

/* 0010c908 00000038 */ u_short VibrateRequest1(/* a0 4 */ u_short p_id, /* a1 5 */ u_short act_1) {
	/* a0 4 */ PAD_STRUCT *psp;
}

/* 0010c940 0000003c */ u_short VibrateRequest2(/* a0 4 */ u_short p_id, /* a1 5 */ u_short act_2) {
	/* a0 4 */ PAD_STRUCT *psp;
}

/* 0010c980 000000e4 */ void PadClearCount(/* t1 9 */ int p_id) {
	/* a3 7 */ u_int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/eeiop.c
// *****************************************************************************

/* 0010ca68 00000020 */ void EiInit() {}

/* 0010ca88 00000078 */ int EiMain() {
	/* s1 17 */ int i;
}

/* 0010cb00 0000002c */ void SetIopCmdSm(/* a0 4 */ int cmd_no, /* a1 5 */ int data1, /* a2 6 */ int data2, /* a3 7 */ int data3) {
	/* 0x0(sp) */ IOP_COMMAND cmd;
}

/* 0010cb30 0000003c */ void SetIopCmdLg(/* a0 4 */ int cmd_no, /* a1 5 */ int data1, /* a2 6 */ int data2, /* a3 7 */ int data3, /* t0 8 */ int data4, /* t1 9 */ int data5, /* t2 10 */ int data6, /* t3 11 */ int data7) {
	/* 0x0(sp) */ IOP_COMMAND cmd;
}

/* 0010cb70 00000094 */ static int EiInitRpc() {
	/* v0 2 */ int i;
}

/* 0010cc08 00000054 */ static int EiInitIopDev() {}
/* 0010cc60 00000024 */ static void InitIopCmd(/* a0 4 */ IOP_COMMAND *cmdp) {}
/* 0010cc88 000000a8 */ static void SetIopCmd(/* s0 16 */ IOP_COMMAND *cmdp) {}
/* 0010cd30 00000008 */ static void TidyUpIopCmd(/* a0 4 */ IOP_COMMAND *cmdp) {}
/* 0010cd38 00000020 */ int checkIOP() {}

/* 0010cd58 000000b4 */ static int EiSendCmd() {
	/* v1 3 */ int ret;
}

/* 0010ce10 0000000c */ IOP_STAT* GetIopStatP() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/cdvd/eecdvd.c
// *****************************************************************************

/* 0010ce20 0000001c */ void CdvdInit() {}
/* 0010ce40 0000001c */ void CdvdInitSoftReset() {}

/* 0010ce60 00000044 */ static void CdvdInitEe() {
	/* v1 3 */ int i;
}

/* 0010cea8 00000014 */ static void CdvdInitIop() {}
/* 0010cec0 00000014 */ static void CdvdInitResetIop() {}

/* 0010ced8 00000044 */ int LoadReq(/* s0 16 */ int file_no, /* s1 17 */ u_int addr) {
	/* v0 2 */ IMG_ARRANGEMENT *img_arng;
}

/* 0010cf20 00000078 */ u_int LoadReqGetAddr(/* s1 17 */ int file_no, /* s2 18 */ u_int addr, /* s3 19 */ int *id) {
	/* s0 16 */ IMG_ARRANGEMENT *img_arng;
	/* v0 2 */ u_int ret;
}

/* 0010cf98 0000007c */ int LoadReqSe(/* s2 18 */ int file_no, /* a1 5 */ u_char se_type) {
	/* s1 17 */ IMG_ARRANGEMENT *img_arng;
	/* s0 16 */ int ret;
}

/* 0010d018 00000078 */ int LoadReqNSector(/* a0 4 */ int file_no, /* s1 17 */ int sector, /* s2 18 */ int size, /* s3 19 */ int addr) {
	/* s0 16 */ int ret;
}

/* 0010d090 00000008 */ int LoadReqNFno(/* a0 4 */ int file_no, /* a1 5 */ int addr) {}
/* 0010d098 00000008 */ int LoadReqBFno(/* a0 4 */ int file_no, /* a1 5 */ int addr) {}
/* 0010d0a0 00000008 */ u_int LoadReqBFnoGetAddr(/* a0 4 */ int file_no, /* a1 5 */ int addr) {}
/* 0010d0a8 00000060 */ int IsLoadEndAll() {}
/* 0010d108 00000020 */ int IsLoadEnd(/* a0 4 */ int id) {}

/* 0010d128 000000f0 */ static int IsLoadEndIop(/* t0 8 */ int id) {
	/* a3 7 */ int i;
	/* a2 6 */ u_char pos;
}

/* 0010d218 0000006c */ void LoadEndFlgRenew() {
	/* a1 5 */ int i;
}

/* 0010d288 0000000c */ u_char IsExistLoadReq() {}

/* 0010d298 00000060 */ static int GetFreeId() {
	/* v0 2 */ int ret;
}

/* 0010d2f8 00000010 */ IMG_ARRANGEMENT* GetImgArrangementP(/* a0 4 */ int file_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_ctrl.c
// *****************************************************************************

/* 0010d308 000000b4 */ void AdpcmMapCtrlInit() {}
/* 0010d3c0 00000010 */ void AdpcmMapUse() {}
/* 0010d3d0 0000000c */ void AdpcmMapNoUse() {}
/* 0010d3e0 00000290 */ void AdpcmMapCtrl() {}
/* 0010d670 00000030 */ void AdpcmShiftMovie() {}
/* 0010d6a0 00000024 */ void AdpcmReturnFromMovie() {}

/* 0010d6c8 00000068 */ static u_char UpdateAdpcmMenuFade() {
	/* a2 6 */ u_char update_flg;
}

/* 0010d730 00000024 */ void SetTargetVolAdpcmMenuFade(/* a0 4 */ int tgt_vol) {}
/* 0010d758 00000028 */ void EAdpcmFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010d780 00000040 */ u_char IsEndAdpcmFadeOut() {}
/* 0010d7c0 00000034 */ void EAdpcmFadeOutGameEnd(/* a0 4 */ u_short fout_flm) {}
/* 0010d7f8 000006cc */ u_char IsHighModeUse(/* a0 4 */ u_char my_mode) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_cmd.c
// *****************************************************************************

/* 0010dec8 00000014 */ void EAdpcmCmdInit(/* a0 4 */ u_int dev_init) {}

/* 0010dee0 000000bc */ void EAdpcmCmdPlay(/* a0 4 */ u_char channel, /* a1 5 */ u_char loop, /* s5 21 */ int file_no, /* fp 30 */ int start_flm, /* t0 8 */ u_short vol, /* t1 9 */ u_short pan, /* t2 10 */ u_short pitch, /* t3 11 */ u_short fin_flm) {
	/* v0 2 */ IMG_ARRANGEMENT *iap;
	/* s0 16 */ int flg;
}

/* 0010dfa0 00000054 */ void EAdpcmCmdPreload(/* a0 4 */ u_char channel, /* s0 16 */ int file_no, /* s1 17 */ int start_flm, /* a3 7 */ u_short fin_flm) {
	/* v0 2 */ IMG_ARRANGEMENT *iap;
}

/* 0010dff8 0000004c */ void EAdpcmCmdPreEndPlay(/* a0 4 */ u_char channel, /* a1 5 */ u_char loop, /* a2 6 */ int file_no, /* a3 7 */ u_short vol, /* t0 8 */ u_short pan, /* t1 9 */ u_short pitch, /* t2 10 */ u_short fin_flm) {
	/* v1 3 */ int flg;
}

/* 0010e048 00000024 */ void EAdpcmCmdStop(/* a0 4 */ u_char channel, /* a1 5 */ int file_no, /* a2 6 */ u_short fout_flm) {}
/* 0010e070 00000020 */ void EAdpcmCmdPause(/* a0 4 */ u_char channel, /* a1 5 */ int file_no, /* a2 6 */ u_short fout_flm) {}
/* 0010e090 00000020 */ void EAdpcmCmdRestart(/* a0 4 */ u_char channel, /* a1 5 */ int file_no, /* a2 6 */ u_short fin_flm) {}
/* 0010e0b0 00000020 */ void EAdpcmCmdFadeVol(/* a0 4 */ u_char channel, /* a1 5 */ int file_no, /* a2 6 */ u_short vol_percent, /* a3 7 */ u_short fin_flm) {}
/* 0010e0d0 00000028 */ void EAdpcmCmdPos(/* a0 4 */ u_char channel, /* a1 5 */ int file_no, /* a2 6 */ u_short vol, /* a3 7 */ u_short pan, /* t0 8 */ u_short pitch) {}
/* 0010e0f8 0000000c */ short int EAGetRetStat() {}
/* 0010e108 0000000c */ short int EAGetRetTune() {}
/* 0010e118 0000000c */ int EAGetRetCount() {}
/* 0010e128 00000044 */ u_char IsAdpcmPlay(/* s0 16 */ int file_no) {}

/* 0010e170 00000044 */ u_short EAdpcmGetPan(/* f12 50 */ float rot) {
	/* f0 38 */ float panf;
}

/* 0010e1b8 0000004c */ u_short EAdpcmGetVol(/* f12 50 */ float dist, /* a0 4 */ u_short vol) {
	/* f12 50 */ float ratio_dist;
}

/* 0010e208 000000fc */ u_short EAdpcmGetPitch(/* f12 50 */ float rot, /* f13 51 */ float dist, /* v0 2 */ u_short pitch) {
	/* f0 38 */ float fpitch_rate;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_dat.c
// *****************************************************************************

/* 0010e308 0000004c */ u_short GetAdpcmVol(/* a0 4 */ int file_no) {
	/* a1 5 */ ADPCM_VOL *avp;
	/* a2 6 */ int i;
	/* a3 7 */ u_short vol;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_btlmode.c
// *****************************************************************************

/* 0010e358 0000011c */ void EAdpcmBtlmodeMain() {}
/* 0010e478 0000001c */ void AdpcmPreBtlmodeFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010e498 00000014 */ u_char IsEndAdpcmBtlmode() {}
/* 0010e4b0 00000044 */ void AdpcmPreBtlmodePreload(/* a0 4 */ int file_no) {}
/* 0010e4f8 00000064 */ u_char IsPreLoadEndAdpcmBtlmode() {}
/* 0010e560 00000058 */ void AdpcmBtlmodePreLoadEndPlay() {}
/* 0010e5b8 0000005c */ void AdpcmBtlmodePlay(/* v0 2 */ int file_no) {}
/* 0010e618 00000040 */ void AdpcmBtlmodeEnd() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_gameover.c
// *****************************************************************************

/* 0010e658 00000154 */ void EAdpcmGoverMain() {}
/* 0010e7b0 00000068 */ void AdpcmPlayGameOver(/* v0 2 */ int file_no, /* a1 5 */ u_short vol, /* s1 17 */ int fade_flm) {}
/* 0010e818 00000044 */ void AdpcmStopGameOver(/* a0 4 */ int fout_flm) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_scene.c
// *****************************************************************************

/* 0010e860 00000118 */ void EAdpcmSceneMain() {}
/* 0010e978 0000001c */ void AdpcmPreSceneFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010e998 00000014 */ u_char IsFadeoutEndAdpcmScene() {}
/* 0010e9b0 00000050 */ void AdpcmScenePreLoadReq(/* a0 4 */ int scene_no) {}
/* 0010ea00 00000064 */ int IsAdpcmScenePreLoadEnd() {}
/* 0010ea68 00000058 */ void AdpcmScenePreLoadEndPlay(/* a0 4 */ int scene_no) {}
/* 0010eac0 00000050 */ void AdpcmSceneStop() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_magatoki.c
// *****************************************************************************

/* 0010eb10 00000230 */ void EAdpcmMagatokiMain() {}
/* 0010ed40 0000001c */ void AdpcmPreMagatokiFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010ed60 00000014 */ u_char IsFadeoutEndAdpcmMagatoki() {}
/* 0010ed78 0000006c */ void AdpcmMagatokiPlay(/* v1 3 */ int file_no) {}
/* 0010ede8 00000054 */ void AdpcmMagatokiStop() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_shinkan.c
// *****************************************************************************

/* 0010ee40 00000278 */ void EAdpcmShinkanMain() {}
/* 0010f0b8 00000068 */ void AdpcmPlayShinkan(/* v0 2 */ int file_no, /* s1 17 */ int fade_flm) {}
/* 0010f120 00000020 */ void AdpcmStopShinkan(/* a0 4 */ int fout_flm) {}
/* 0010f140 00000034 */ u_char IsEndAdpcmShinkan() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_puzzle.c
// *****************************************************************************

/* 0010f178 0000011c */ void EAdpcmPuzzleMain() {}
/* 0010f298 0000001c */ void AdpcmPrePuzzleFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010f2b8 00000014 */ u_char IsEndAdpcmPuzzle() {}
/* 0010f2d0 00000044 */ void AdpcmPreLoadPuzzle(/* a0 4 */ int file_no) {}
/* 0010f318 00000064 */ u_char IsPreLoadEndAdpcmPuzzle() {}
/* 0010f380 00000058 */ void AdpcmPuzzlePreLoadEndPlay() {}
/* 0010f3d8 0000005c */ void AdpcmPuzzlePlay(/* v0 2 */ int file_no) {}
/* 0010f438 00000040 */ void AdpcmPuzzleEnd() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_soul.c
// *****************************************************************************

/* 0010f478 000001c4 */ void EAdpcmSoulMain() {}
/* 0010f640 0000001c */ void AdpcmPreSoulFadeOut(/* a0 4 */ u_short fout_flm) {}
/* 0010f660 00000014 */ u_char IsFadeoutEndAdpcmSoul() {}
/* 0010f678 00000080 */ void AdpcmPlaySoul(/* v0 2 */ int file_no, /* a1 5 */ u_short vol, /* s1 17 */ int fade_flm) {}
/* 0010f6f8 00000044 */ void AdpcmStopSoul(/* a0 4 */ int fout_flm) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_tape.c
// *****************************************************************************

/* 0010f740 00000148 */ void EAdpcmTapeMain() {}
/* 0010f888 00000068 */ void AdpcmPlayTape(/* v0 2 */ int file_no, /* a1 5 */ u_short vol, /* s1 17 */ int fade_flm) {}
/* 0010f8f0 00000044 */ void AdpcmStopTape(/* a0 4 */ int fout_flm) {}
/* 0010f938 00000010 */ u_char IsEndAdpcmTape() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_gdead.c
// *****************************************************************************

/* 0010f948 0000017c */ void EAdpcmGdeadMain() {}
/* 0010fac8 00000068 */ void AdpcmPlayGhostDead(/* v0 2 */ int file_no, /* a1 5 */ u_short vol, /* s1 17 */ int fade_flm) {}
/* 0010fb30 00000044 */ void AdpcmStopGhostDead(/* a0 4 */ int fout_flm) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_event.c
// *****************************************************************************

/* 0010fb78 00000200 */ void EAdpcmEventMain() {}
/* 0010fd78 000001d4 */ void AdpcmPlayEvent(/* a0 4 */ int file_no, /* s1 17 */ u_short start_flm, /* s2 18 */ int fade_flm) {}
/* 0010ff50 00000048 */ void AdpcmStopEvent(/* a0 4 */ int fout_flm) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_ghost.c
// *****************************************************************************

/* 0010ff98 00000068 */ void AdpcmPlayGhost(/* v1 3 */ int file_no, /* a1 5 */ sceVu0FVECTOR *mpos, /* a2 6 */ u_short vol, /* a3 7 */ u_char ewrk_no, /* s2 18 */ int fade_flm) {}
/* 00110000 00000060 */ void AdpcmStopGhost(/* s1 17 */ int fout_flm) {}

/* 00110060 0000023c */ void EAdpcmGhostMain() {
	/* sbss 35789c */ static int wait_cnt;
}

/* 001102a0 0000015c */ static void EAdpcmGhostParaSet(/* s1 17 */ ADPCM_TUNE_PARAM *atpp) {
	/* sdata 356350 */ static int cnt;
	/* f20 58 */ float rot_cam;
	/* f21 59 */ float rot_oc;
	/* f20 58 */ float dist_obj;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_autog.c
// *****************************************************************************

/* 00110400 0000009c */ void AdpcmPlayAutoGhost(/* a2 6 */ int file_no, /* a1 5 */ sceVu0FVECTOR *mpos, /* a2 6 */ u_short vol, /* s1 17 */ u_char ewrk_no, /* s2 18 */ int fade_flm) {}
/* 001104a0 00000044 */ void AdpcmStopAutoGhost(/* a0 4 */ int fout_flm) {}
/* 001104e8 00000308 */ void EAdpcmAutogMain() {}
/* 001107f0 00000050 */ static void EadpcmUpdateAutog(/* a1 5 */ ADPCM_TUNE_PARAM *atpp) {}

/* 00110840 00000114 */ static void EAdpcmAutogParaSet(/* s2 18 */ ADPCM_TUNE_PARAM *atpp) {
	/* sdata 356354 */ static int cnt;
	/* f20 58 */ float rot_cam;
	/* f21 59 */ float rot_oc;
	/* f20 58 */ float dist_obj;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_hiso.c
// *****************************************************************************

/* 00110958 00000134 */ void AdpcmPlayHiso(/* a0 4 */ int file_no, /* s1 17 */ int fade_flm) {
	/* a1 5 */ int call_no;
}

/* 00110a90 00000058 */ void AdpcmStopHiso(/* s1 17 */ int fout_flm) {}
/* 00110ae8 0000022c */ void EAdpcmHisoMain() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_furn.c
// *****************************************************************************

/* 00110d18 00000228 */ void EAdpcmFurnMain() {}

/* 00110f40 00000110 */ static void EAdpcmFurnParaSet(/* s2 18 */ ADPCM_TUNE_PARAM *atpp) {
	/* sdata 356358 */ static int cnt;
	/* f20 58 */ float rot_cam;
	/* f21 59 */ float rot_oc;
	/* f20 58 */ float dist_obj;
}

/* 00111050 00000170 */ void AdpcmPlayFurn(/* a0 4 */ int file_no, /* a1 5 */ float *pos, /* a2 6 */ u_short vol, /* s1 17 */ int fade_flm) {}
/* 001111c0 00000058 */ void AdpcmStopFurn(/* s1 17 */ int fout_flm) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_map.c
// *****************************************************************************

/* 00111218 000001c4 */ void EAdpcmMapMain() {
	/* a1 5 */ int file_no;
	/* sbss 3578a0 */ static int wait_cnt;
}

/* 001113e0 0000003c */ static int EAGetNowMapFileNo() {}
/* 00111420 0000003c */ static u_short EAGetNowMapBgmVol() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/eese.c
// *****************************************************************************

/* 00111460 00000098 */ void InitSe() {}

/* 001114f8 00000048 */ void InitSeGhost() {
	/* v1 3 */ int i;
}

/* 00111540 00000020 */ void InitSeMenuFade() {}
/* 00111560 00000064 */ void UpdateSeMenuFade() {}
/* 001115c8 00000024 */ void SetTargetVolSeMenuFade(/* a0 4 */ int tgt_vol) {}

/* 001115f0 00000034 */ void SeInitSeWrk() {
	/* s0 16 */ int i;
}

/* 00111628 00000020 */ static void SeInitSeWrkSub(/* a0 4 */ int pos) {}
/* 00111648 0000004c */ static void SeInitSeWrkP(/* a0 4 */ SE_WRK *swp) {}
/* 00111698 00000014 */ void SetReverbVolume(/* a0 4 */ u_short vol) {}
/* 001116b0 000000ec */ void SeStopAndBackup() {}

/* 001117a0 00000048 */ void SeBackupInit() {
	/* s1 17 */ int i;
}

/* 001117e8 000001c8 */ void SeRevival(/* s1 17 */ u_short fin_spd) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s2 18 */ int i;
}

/* 001119b0 000000d0 */ int SeStartFix(/* s0 16 */ int se_no, /* s2 18 */ u_short fin_spd, /* s3 19 */ u_short vol_max, /* s4 20 */ u_short pitch, /* s5 21 */ u_char menu) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s1 17 */ int vpos;
}

/* 00111a80 00000050 */ int SeStartFixFlame(/* a0 4 */ int se_no, /* v1 3 */ u_short flame, /* a2 6 */ u_short vol_max, /* a3 7 */ u_short pitch, /* t0 8 */ u_char menu) {
	/* a1 5 */ u_short fin_spd;
}

/* 00111ad0 000000b8 */ int SeStartFixV(/* s0 16 */ int se_no, /* s2 18 */ u_short fin_spd, /* s3 19 */ u_short vol_max, /* s4 20 */ u_short pitch, /* s1 17 */ u_char voice_no) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s6 22 */ int vpos;
}

/* 00111b88 000000e0 */ int SeStartPos(/* s2 18 */ int se_no, /* s0 16 */ float *pos, /* s3 19 */ u_short fin_spd, /* s4 20 */ u_short vol_max, /* s5 21 */ u_short pitch, /* s6 22 */ u_char room_id) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s1 17 */ int vpos;
}

/* 00111c68 00000050 */ int SeStartPosFlame(/* a0 4 */ int se_no, /* a1 5 */ float *pos, /* v1 3 */ u_short flame, /* a3 7 */ u_short vol_max, /* t0 8 */ u_short pitch, /* t1 9 */ u_char room_id) {
	/* a2 6 */ u_short fin_spd;
}

/* 00111cb8 000000e0 */ int SeStartPut(/* s2 18 */ int se_no, /* s0 16 */ float *pos, /* s3 19 */ u_short fin_spd, /* s4 20 */ u_short vol_max, /* s5 21 */ u_short pitch, /* s6 22 */ u_char room_id) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s1 17 */ int vpos;
}

/* 00111d98 00000050 */ int SeStartPutFlame(/* a0 4 */ int se_no, /* a1 5 */ float *pos, /* v1 3 */ u_short flame, /* a3 7 */ u_short vol_max, /* t0 8 */ u_short pitch, /* t1 9 */ u_char room_id) {
	/* a2 6 */ u_short fin_spd;
}

/* 00111de8 000000fc */ int SeStartGhost(/* v1 3 */ int se_no, /* s3 19 */ int ewrk_no, /* s4 20 */ u_short fin_spd, /* s5 21 */ u_short vol_max, /* s6 22 */ u_short pitch, /* a0 4 */ u_char gno) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s0 16 */ int vpos;
}

/* 00111ee8 00000050 */ int SeStartGhostFlame(/* a0 4 */ int se_no, /* a1 5 */ int ewrk_no, /* v1 3 */ u_short flame, /* a3 7 */ u_short vol_max, /* t0 8 */ u_short pitch, /* t1 9 */ u_char gno) {
	/* a2 6 */ u_short fin_spd;
}

/* 00111f38 000000c4 */ int SeStartPlyr(/* s0 16 */ int se_no, /* s2 18 */ u_short fin_spd, /* s3 19 */ u_short vol_max, /* s4 20 */ u_short pitch) {
	/* 0x0(sp) */ SE_REQ_TMP_STR tmp;
	/* s1 17 */ int vpos;
}

/* 00112000 0000004c */ int SeStartPlyrFlame(/* a0 4 */ int se_no, /* v1 3 */ u_short flame, /* a2 6 */ u_short vol_max, /* a3 7 */ u_short pitch) {
	/* a1 5 */ u_short fin_spd;
}

/* 00112050 00000398 */ static void SeStartVp(/* s3 19 */ SE_REQ_TMP_STR *tmp_str) {
	/* s2 18 */ SE_WRK *swp;
	/* f20 58 */ float rot_oc;
}

/* 001123e8 00000130 */ int SeStartPosSrundFlame(/* t1 9 */ u_char room_id, /* a1 5 */ float *pos, /* a2 6 */ u_short flame, /* a3 7 */ u_short vol_max, /* t0 8 */ u_short pitch) {
	/* t2 10 */ int i;
	/* t3 11 */ int req_file_no;
	/* t5 13 */ int req_se_no;
}

/* 00112518 00000180 */ int SeStartPosEventFlame(/* t5 13 */ u_char room_id, /* a1 5 */ u_char req_pos, /* t7 15 */ float *pos, /* a2 6 */ u_short flame, /* a3 7 */ u_short vol_max, /* t0 8 */ u_short pitch) {
	/* t2 10 */ int i;
	/* t3 11 */ int req_file_no;
	/* t6 14 */ int req_se_no;
}

/* 00112698 000000a8 */ static int SeGetFreeVoice(/* s0 16 */ int start_no, /* s2 18 */ int get) {
	/* s1 17 */ SE_VSTAT *svp;
	/* s0 16 */ int i;
}

/* 00112740 00000034 */ int SeStopAll() {}
/* 00112778 00000030 */ int SeStop(/* a0 4 */ int voice_num) {}

/* 001127a8 00000048 */ void SeFadeOut(/* a0 4 */ int voice_num, /* s1 17 */ int fout_spd, /* s0 16 */ int tgt_vol) {
	/* v1 3 */ SE_WRK *swp;
}

/* 001127f0 000000dc */ void SeFadeFlame(/* s1 17 */ int voice_num, /* s0 16 */ u_short flame, /* s2 18 */ u_short tgt_vol) {
	/* a0 4 */ SE_WRK *swp;
}

/* 001128d0 00000070 */ void SeFadeFlameAll(/* s3 19 */ u_short flame, /* s2 18 */ u_short tgt_vol) {
	/* s0 16 */ SE_WRK *swp;
	/* s1 17 */ int i;
}

/* 00112940 00000080 */ void SeWrkUpdate() {
	/* s0 16 */ IOP_STAT *isp;
	/* v1 3 */ SE_WRK *swp;
	/* a0 4 */ int i;
}

/* 001129c0 0000002c */ u_char IsEndSe(/* a0 4 */ int v_no) {}
/* 001129f0 0000005c */ u_char IsEndSeGhost(/* a0 4 */ int v_no, /* a1 5 */ u_char se_no, /* a2 6 */ u_char gno) {}
/* 00112a50 00000014 */ void SeSetEfctVol(/* a0 4 */ u_short vol) {}

/* 00112a68 00000040 */ void SeSetMVol(/* a0 4 */ u_short vol) {
	/* v0 2 */ int iop_vol;
}

/* 00112aa8 0000002c */ void SeSetSteMono(/* a0 4 */ u_char mono) {}

/* 00112ad8 0000017c */ int SeFileLoadAndSet(/* a2 6 */ u_int file_no, /* a1 5 */ int type) {
	/* s0 16 */ int ret;
}

/* 00112c58 00000078 */ int SeFileLoadAndSetFGhost(/* a2 6 */ u_int file_no, /* a1 5 */ int type) {
	/* s0 16 */ int ret;
}

/* 00112cd0 00000088 */ int SeFileLoadAndSetWide(/* a0 4 */ u_short lbl_no) {
	/* a0 4 */ u_int file_no;
}

/* 00112d58 00000070 */ char SeGetGhostPos(/* a0 4 */ u_int se_file_no, /* a1 5 */ u_char type) {
	/* a2 6 */ char i;
}

/* 00112dc8 00000058 */ char SeGetAutoGhostPos(/* a0 4 */ u_int se_file_no) {
	/* a2 6 */ char i;
}

/* 00112e20 00000024 */ SE_WRK* SeGetSeWrk(/* a0 4 */ int no) {}
/* 00112e48 00000030 */ int SeGetSvStat(/* s0 16 */ int v_no) {}

/* 00112e78 000000a0 */ int SeStartCmn(/* s1 17 */ int se_no, /* s2 18 */ float *pos, /* s3 19 */ float *mb, /* s4 20 */ int fin_spd, /* s5 21 */ u_short vol_max) {
	/* s0 16 */ int vpos;
}

/* 00112f18 000001c0 */ void SeStartVpCmn(/* s1 17 */ int se_no, /* s5 21 */ int vpos, /* s3 19 */ float *pos, /* a3 7 */ float *mb, /* s0 16 */ int fin_spd, /* t1 9 */ u_short vol_max) {
	/* s2 18 */ SE_WRK *swp;
	/* s4 20 */ int mode;
	/* f20 58 */ float rot_oc;
}

/* 001130d8 00000020 */ static int SeChkReqMode(/* a0 4 */ float *pos, /* a1 5 */ float *mb) {
	/* v1 3 */ int mode;
}

/* 001130f8 00000008 */ u_char SeGetFreeSv() {}
/* 00113100 00000008 */ int SeStartV(/* a0 4 */ int se_no, /* a1 5 */ u_char voice_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_cmd.c
// *****************************************************************************

/* 00113108 00000008 */ void SeCtrlInit() {}

/* 00113110 00000474 */ void SeCtrlMain() {
	/* 0x0(sp) */ SE_WRK tmp_sw;
	/* s1 17 */ SE_WRK *swp;
	/* s2 18 */ int cmd_flg;
	/* s4 20 */ int i;
	/* f20 58 */ float rot_oc;
	/* f21 59 */ float dist_obj;
	/* f22 60 */ float rot_cam;
	/* s5 21 */ u_char stop_flg;
}

/* 00113588 00000044 */ u_short SeCmdGetPan(/* f12 50 */ float rot) {
	/* f0 38 */ float panf;
}

/* 001135d0 00000030 */ u_short SeCmdGetPhase(/* f12 50 */ float rot) {}

/* 00113600 00000050 */ u_short SeCmdGetPitch(/* f12 50 */ float rot, /* a0 4 */ u_short pitch) {
	/* f0 38 */ float fpitch_rate;
}

/* 00113650 0000004c */ u_short SeCmdGetVol(/* f12 50 */ float dist, /* a0 4 */ u_short vol) {
	/* f12 50 */ float ratio_dist;
}

/* 001136a0 00000008 */ void SeCmdSetVolForStts(/* a0 4 */ SE_WRK *swp) {}
/* 001136a8 00000008 */ static void SeCmdAjstVolChng(/* a0 4 */ u_short *new_vol, /* a1 5 */ u_short old_vol) {}
/* 001136b0 00000008 */ int SeCmdFdIn(/* a0 4 */ int sw_no, /* a1 5 */ u_short vol_tgt, /* a2 6 */ short int vol_inc) {}

/* 001136b8 00000074 */ int SeCmdFdOut(/* s0 16 */ int sw_no, /* a1 5 */ short int vol_inc) {
	/* v1 3 */ SE_WRK *swp;
}

/* 00113730 00000008 */ static void SeSetVolReg(/* a0 4 */ SE_WRK *swp) {}

/* 00113738 00000028 */ float SeCmdGetAngle(/* f12 50 */ float rot0, /* f13 51 */ float rot1) {
	/* 0x0(sp) */ float rot_oc;
}

/* 00113760 00000008 */ static int SeCmdGetRotRatio(/* f12 50 */ float rot, /* a0 4 */ float *ratio_rot_l, /* a1 5 */ float *ratio_rot_r) {}
/* 00113768 00000014 */ int SeCmdSetPitch(/* a0 4 */ int sw_no, /* a1 5 */ u_short pitch) {}
/* 00113780 00000008 */ u_short SeCmdGetDataPitch(/* a0 4 */ int se_req_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_data.c
// *****************************************************************************

/* 00113788 000003b4 */ char CheckSeUse(/* a0 4 */ int se_no) {
	/* a2 6 */ u_char se_pos;
	/* a0 4 */ u_char type;
	/* a1 5 */ u_char tbl_no;
}

/* 00113b40 00000130 */ char GetSeUseTbl(/* a0 4 */ u_char type, /* a1 5 */ u_char tbl_no, /* a2 6 */ u_char se_no) {}
/* 00113c70 00000014 */ SE_STE* SeGetSeSte(/* a0 4 */ int num) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_ev.c
// *****************************************************************************

/* 00113c88 00000048 */ void SeEvInit() {
	/* s0 16 */ SE_EV_WRK *seewp;
	/* s1 17 */ int i;
}

/* 00113cd0 0000001c */ static void SeEvInitOne(/* a0 4 */ SE_EV_WRK *seewp) {}

/* 00113cf0 000000bc */ void SeEvMain() {
	/* s0 16 */ SE_EV_WRK *seewp;
	/* v0 2 */ SE_WRK *swp;
	/* s2 18 */ int i;
}

/* 00113db0 00000034 */ void SeEvStopAll() {
	/* s0 16 */ int i;
}

/* 00113de8 00000058 */ void SeEvStop(/* a0 4 */ int se_ev_pos) {
	/* s0 16 */ SE_EV_WRK *seewp;
}

/* 00113e40 000000f0 */ void SeEvReq(/* s0 16 */ int se_req_no, /* a1 5 */ int se_ev_pos, /* s3 19 */ int count, /* s2 18 */ char mode) {
	/* s1 17 */ SE_EV_WRK *seewp;
	/* s0 16 */ SE_STE *ssp;
	/* v1 3 */ u_char free_sw;
}

/* 00113f30 00000054 */ void SeEvSetPitch(/* a0 4 */ int se_ev_pos, /* a1 5 */ u_short pitch) {
	/* a0 4 */ SE_EV_WRK *seewp;
}

/* 00113f88 00000034 */ u_short SeEvGetPitch(/* a0 4 */ int se_ev_pos) {
	/* v0 2 */ SE_EV_WRK *seewp;
}

/* 00113fc0 00000028 */ static SE_EV_WRK* SeEvGetSeEvWrk(/* a0 4 */ u_char no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_trans.c
// *****************************************************************************

/* 00113fe8 0000008c */ void FGTransInit() {}
/* 00114078 00000014 */ u_char IsEndFgTrans() {}
/* 00114090 00000020 */ static u_char ChkLoadReqQueueFree() {}

/* 001140b0 00000090 */ static u_char ChkFGhostAlreadySet() {
	/* a3 7 */ int i;
}

/* 00114140 0000005c */ static u_char ChkNeedsFGhostSe() {
	/* a0 4 */ int i;
	/* a2 6 */ u_char ret;
}

/* 001141a0 00000044 */ void FloatGhostSENotEmpty() {
	/* a0 4 */ int i;
}

/* 001141e8 00000048 */ static void GetSeTransSize() {}

/* 00114230 00000044 */ static void DmaTransReq() {
	/* 0x0(sp) */ sceSifDmaData dma;
}

/* 00114278 00000028 */ static u_char ChkDmaTransEndSe() {}
/* 001142a0 00000020 */ static void TransReqIopCmd() {}
/* 001142c0 00000014 */ static u_char TransWaitIopCmd() {}
/* 001142d8 00000048 */ static void UseOkFGhost() {}

/* 00114320 00000100 */ int SeFGhostTransCtrl() {
	/* s3 19 */ int ret;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_door.c
// *****************************************************************************

/* 00114420 0000011c */ static void SDoorNoUse(/* a0 4 */ u_char room_id0, /* a1 5 */ u_char room_id1) {
	/* v1 3 */ u_int *dp;
	/* s3 19 */ u_int *sedp;
	/* v1 3 */ int i;
	/* s1 17 */ int k;
	/* 0x0(sp) */ u_char room_id[2];
	/* fp 30 */ u_char exist_flg;
}

/* 00114540 0000010c */ static void SDoorSetLoadTbl(/* s2 18 */ u_int *ld_tbl, /* a0 4 */ u_char room_id) {
	/* v1 3 */ u_int *idp;
	/* s0 16 */ int i;
	/* a0 4 */ int j;
	/* t0 8 */ u_char vflg;
}

/* 00114650 00000128 */ int SDoorLoadReqAndSetSub(/* s4 20 */ int load_id, /* a1 5 */ u_char room_from, /* a2 6 */ u_char room_to) {
	/* 0x0(sp) */ u_int load_file_tbl[3];
	/* 0x10(sp) */ u_char empty_tbl[3];
	/* a0 4 */ int i;
	/* a1 5 */ int j;
}

/* 00114778 000000b0 */ int SDoorLoadReqAndSet(/* s1 17 */ int load_id, /* s0 16 */ u_short door_id) {
	/* v1 3 */ u_char *addr_uc;
	/* a0 4 */ int i;
	/* s2 18 */ u_char room_from;
	/* a2 6 */ u_char room_to;
	/* a1 5 */ u_char dr_num;
}

/* 00114828 0000004c */ static u_char SDoorGetSeNo(/* a0 4 */ int file_no, /* a1 5 */ u_char shut) {
	/* v1 3 */ int i;
}

/* 00114878 0000006c */ void SeDoorOpen(/* a0 4 */ int dwrk_no) {}
/* 001148e8 0000006c */ void SeDoorClose(/* a0 4 */ int dwrk_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_foot.c
// *****************************************************************************

/* 00114958 0000011c */ static void SFootNoUse(/* a0 4 */ u_char room_id0, /* a1 5 */ u_char room_id1) {
	/* v1 3 */ u_int *fp;
	/* s3 19 */ u_int *sefp;
	/* v1 3 */ int i;
	/* s1 17 */ int k;
	/* 0x0(sp) */ u_char room_id[2];
	/* fp 30 */ u_char exist_flg;
}

/* 00114a78 0000010c */ static void SFootSetLoadTbl(/* s2 18 */ u_int *ld_tbl, /* a0 4 */ u_char room_id) {
	/* v1 3 */ u_int *ifp;
	/* s0 16 */ int i;
	/* a0 4 */ int j;
	/* t0 8 */ u_char vflg;
}

/* 00114b88 00000128 */ int SFootLoadReqAndSetSub(/* s4 20 */ int load_id, /* a1 5 */ u_char room_from, /* a2 6 */ u_char room_to) {
	/* 0x0(sp) */ u_int load_file_tbl[5];
	/* 0x20(sp) */ u_char empty_tbl[8];
	/* a0 4 */ int i;
	/* a1 5 */ int j;
}

/* 00114cb0 000000b0 */ int SFootLoadReqAndSet(/* s1 17 */ int load_id, /* s0 16 */ u_short door_id) {
	/* v1 3 */ u_char *addr_uc;
	/* a0 4 */ int i;
	/* s2 18 */ u_char room_from;
	/* a2 6 */ u_char room_to;
	/* a1 5 */ u_char dr_num;
}

/* 00114d60 0000005c */ u_char SFootGetSeNo(/* a0 4 */ int call_no) {
	/* a1 5 */ int i;
	/* a0 4 */ int file_no;
}

/* 00114dc0 0000004c */ u_char SFootGetSeNoFromFileNo(/* a0 4 */ int file_no) {
	/* v1 3 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_event.c
// *****************************************************************************

/* 00114e10 000000e8 */ static void SEventNoUse(/* a0 4 */ u_char room_id0, /* a1 5 */ u_char room_id1) {
	/* s1 17 */ u_int *seep;
	/* v1 3 */ int i;
	/* s0 16 */ int j;
	/* 0x0(sp) */ u_char room_id[2];
	/* s5 21 */ u_char exist_flg;
}

/* 00114ef8 00000090 */ static void SEventSetLoadTbl(/* s1 17 */ u_int *ld_tbl, /* a1 5 */ u_char room_id) {
	/* a2 6 */ u_int load_file_no;
	/* a1 5 */ int j;
	/* a3 7 */ u_char vflg;
}

/* 00114f88 000000e0 */ int SEventLoadReqAndSetSub(/* s1 17 */ int load_id, /* a1 5 */ u_char room_from, /* a2 6 */ u_char room_to) {
	/* 0x10(sp) */ u_int load_file_no;
	/* 0x0(sp) */ u_char empty_tbl[2];
	/* a1 5 */ int i;
	/* a1 5 */ int j;
}

/* 00115068 000000b0 */ int SEventLoadReqAndSet(/* s1 17 */ int load_id, /* s0 16 */ u_short door_id) {
	/* v1 3 */ u_char *addr_uc;
	/* a0 4 */ int i;
	/* s2 18 */ u_char room_from;
	/* a2 6 */ u_char room_to;
	/* a1 5 */ u_char dr_num;
}

/* 00115118 00000038 */ u_char SEventGetSeNo(/* a0 4 */ int file_no) {
	/* v1 3 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_srund.c
// *****************************************************************************

/* 00115150 000000e8 */ static void SSrundNoUse(/* a0 4 */ u_char room_id0, /* a1 5 */ u_char room_id1) {
	/* s1 17 */ u_int *sesp;
	/* v1 3 */ int i;
	/* s0 16 */ int j;
	/* 0x0(sp) */ u_char room_id[2];
	/* s5 21 */ u_char exist_flg;
}

/* 00115238 00000090 */ static void SSrundSetLoadTbl(/* s1 17 */ u_int *ld_tbl, /* a1 5 */ u_char room_id) {
	/* a2 6 */ u_int load_file_no;
	/* a1 5 */ int j;
	/* a3 7 */ u_char vflg;
}

/* 001152c8 000000e0 */ int SSrundLoadReqAndSetSub(/* s1 17 */ int load_id, /* a1 5 */ u_char room_from, /* a2 6 */ u_char room_to) {
	/* 0x10(sp) */ u_int load_file_no;
	/* 0x0(sp) */ u_char empty_tbl[2];
	/* a1 5 */ int i;
	/* a1 5 */ int j;
}

/* 001153a8 000000b0 */ int SSrundLoadReqAndSet(/* s1 17 */ int load_id, /* s0 16 */ u_short door_id) {
	/* v1 3 */ u_char *addr_uc;
	/* a0 4 */ int i;
	/* s2 18 */ u_char room_from;
	/* a2 6 */ u_char room_to;
	/* a1 5 */ u_char dr_num;
}

/* 00115458 00000038 */ u_char SSrundGetSeNo(/* a0 4 */ int file_no) {
	/* v1 3 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/sd_room.c
// *****************************************************************************

/* 00115490 0000001c */ ROOM_SOUND_INFO* GetSdrDatP(/* a0 4 */ u_char room_id) {}
/* 001154b0 00000040 */ int GetSdrAdpcmFno(/* a0 4 */ u_char room_id) {}
/* 001154f0 00000040 */ u_short GetSdrAdpcmVol(/* a0 4 */ u_char room_id) {}
/* 00115530 00000020 */ u_short GetSdrReverbVol(/* a0 4 */ u_char room_id) {}

/* 00115550 00000034 */ void SetRoomReverbVol(/* a0 4 */ u_char room_id) {
	/* v0 2 */ u_short vol;
}

/* 00115588 0000004c */ u_int* GetSdrDoorSeTblP(/* a0 4 */ u_char room_id) {
	/* a3 7 */ u_char door_no;
}

/* 001155d8 00000034 */ u_int* GetSdrFootSeTblP(/* a0 4 */ u_char room_id) {}
/* 00115610 00000034 */ u_int GetSdrSrundSe(/* a0 4 */ u_char room_id) {}
/* 00115648 00000034 */ u_int GetSdrEventSe(/* a0 4 */ u_char room_id) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_plyr.c
// *****************************************************************************

/* 00115680 000003b8 */ int SeReqFootStep(/* s6 22 */ float *pos) {
	/* v0 2 */ u_int *addr;
	/* s0 16 */ int i;
	/* s3 19 */ int rd0;
	/* s2 18 */ int rd1;
	/* 0x0(sp) */ int foot_rand_per[3];
	/* a1 5 */ int foot_rand;
	/* s3 19 */ u_short px;
	/* s2 18 */ u_short pz;
	/* s5 21 */ u_short call_no;
	/* s1 17 */ u_char room_no;
	/* a0 4 */ u_char se_no;
	/* a1 5 */ u_char dscv_flg;
	/* 0x10(sp) */ u_short frand_tbl[2][3];
}

/* 00115a38 0000013c */ u_char IsKarehaZone(/* v0 2 */ float *pos) {
	/* v0 2 */ u_int *addr;
	/* s0 16 */ int i;
	/* s2 18 */ u_short px;
	/* s4 20 */ u_short pz;
	/* s5 21 */ u_short call_no;
	/* s1 17 */ u_char room_no;
}

/* 00115b78 0000013c */ u_char IsTakenohaZone(/* v0 2 */ float *pos) {
	/* v0 2 */ u_int *addr;
	/* s0 16 */ int i;
	/* s2 18 */ u_short px;
	/* s4 20 */ u_short pz;
	/* s5 21 */ u_short call_no;
	/* s1 17 */ u_char room_no;
}

/* 00115cb8 00000014 */ u_char IsHokoriZone() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/common/ul_math.c
// *****************************************************************************

/* 00115cd0 00000018 */ void GetSquare(/* a0 4 */ sceVu0FVECTOR *v0, /* a1 5 */ sceVu0FVECTOR *v1) {}

/* 00115ce8 0000006c */ float GetDist(/* f12 50 */ float x, /* f13 51 */ float z) {
	/* 0x0(sp) */ sceVu0FVECTOR v0;
	/* 0x10(sp) */ sceVu0FVECTOR v1;
}

/* 00115d58 0000008c */ float GetDistV(/* v0 2 */ float *p0, /* v1 3 */ float *p1) {
	/* 0x0(sp) */ sceVu0FVECTOR v0;
	/* 0x10(sp) */ sceVu0FVECTOR v1;
}

/* 00115de8 000000f4 */ float GetDistV2(/* s0 16 */ float *p0, /* s1 17 */ float *p1) {
	/* 0x0(sp) */ sceVu0FVECTOR v0;
	/* 0x10(sp) */ sceVu0FVECTOR v1;
}

/* 00115ee0 000000e4 */ void RotFvector(/* s2 18 */ float *rot, /* s1 17 */ float *tv) {
	/* 0x0(sp) */ sceVu0FMATRIX work;
	/* 0x40(sp) */ sceVu0FMATRIX rot_matrix;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/common/utility.c
// *****************************************************************************

/* 00115fc8 00000060 */ char* StrToLower(/* s1 17 */ char *str) {
	/* s0 16 */ char *strp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/compress.c
// *****************************************************************************

/* 00116028 000004d8 */ float SlideEncode(/* s5 21 */ u_char *base, /* s6 22 */ u_char *addrs, /* s4 20 */ int max_size) {
	/* s7 23 */ short int s;
	/* 0x20(sp) */ short int r;
	/* t2 10 */ short int len;
	/* fp 30 */ short int codeptr;
	/* s0 16 */ short int i;
	/* s3 19 */ short int lastmatchlen;
	/* s0 16 */ u_char c;
	/* 0x0(sp) */ u_char code[17];
	/* 0x24(sp) */ u_char mask;
	/* 0x28(sp) */ u_int incount;
	/* 0x2c(sp) */ u_int size;
	/* 0x30(sp) */ u_int *savep;
	/* s1 17 */ int save_size;
}

/* 00116500 00000140 */ void SlideDecode(/* t4 12 */ u_char *base, /* a1 5 */ u_char *addrs) {
	/* 0x0(sp) */ u_char textbuf[2065];
	/* t5 13 */ int i;
	/* a3 7 */ int j;
	/* t2 10 */ int k;
	/* t3 11 */ int r;
	/* v0 2 */ int c;
	/* t1 9 */ u_short flags;
	/* t0 8 */ u_int rest;
}

/* 00116640 00000074 */ void init_tree() {
	/* v1 3 */ short int i;
}

/* 001166b8 000001f0 */ void insert_node(/* t5 13 */ short int r) {
	/* t3 11 */ short int p;
	/* a0 4 */ short int cmp;
	/* a2 6 */ short int i;
	/* t1 9 */ u_char *key;
}

/* 001168a8 00000184 */ void delete_node(/* t8 24 */ short int p) {
	/* t3 11 */ short int q;
}

/* 00116a30 00000224 */ float CompressFile(/* a0 4 */ u_short *input, /* s4 20 */ char *output, /* fp 30 */ u_int max_size, /* a3 7 */ char quality) {
	/* s0 16 */ int row;
	/* v1 3 */ int col;
	/* a2 6 */ int i;
	/* a0 4 */ int j;
	/* 0x0(sp) */ u_char *input_array[8];
	/* 0x20(sp) */ int output_array[8][8];
	/* 0x120(sp) */ BIT_FILE bit_file;
	/* v0 2 */ u_int size;
	/* 0x130(sp) */ u_short *top;
	/* s1 17 */ u_short *addr;
	/* v1 3 */ u_int tmp;
}

/* 00116c58 00000010 */ char CheckPhotoExpandEnd() {}
/* 00116c68 00000010 */ void InitPhotoExpand() {}
/* 00116c78 00000008 */ void ReqPhotoExpand() {}

/* 00116c80 00000210 */ void ExpandFile(/* s0 16 */ char *input, /* a2 6 */ u_short *output2) {
	/* v1 3 */ int row;
	/* v1 3 */ int col;
	/* a3 7 */ int i;
	/* a0 4 */ int j;
	/* 0x0(sp) */ int input_array[8][8];
	/* 0x100(sp) */ u_char *output_array[8];
	/* a0 4 */ u_int quality;
	/* sbss 3578a4 */ static u_int *in_header;
	/* sbss 3578a8 */ static u_int *out_header;
	/* sbss 3578ac */ static u_short *top;
	/* bss 358ad0 */ static BIT_FILE bit_file;
	/* sbss 3578b0 */ static u_short *output;
	/* s6 22 */ u_int end;
}

/* 00116e90 00000248 */ static void InitCompress(/* t0 8 */ char quality) {
	/* s1 17 */ u_int i;
	/* s2 18 */ u_int j;
	/* f20 58 */ float val;
}

/* 001170d8 00000164 */ static void ForwardDCT(/* a0 4 */ u_char **input, /* a1 5 */ int *output[8]) {
	/* 0x0(sp) */ float temp[8][8];
	/* f2 40 */ float temp1;
	/* v1 3 */ u_int i;
	/* a3 7 */ u_int j;
	/* a3 7 */ u_int k;
}

/* 00117240 000001ac */ static void InverseDCT(/* a0 4 */ int *input[8], /* a1 5 */ u_char **output) {
	/* 0x0(sp) */ float temp[8][8];
	/* f2 40 */ float temp1;
	/* v1 3 */ u_int i;
	/* a2 6 */ u_int j;
	/* t0 8 */ u_int k;
}

/* 001173f0 000000ec */ static void WriteDCTData(/* s3 19 */ BIT_FILE *output_file, /* s2 18 */ int *output_data[8]) {
	/* s1 17 */ int i;
	/* v0 2 */ int row;
	/* v1 3 */ int col;
	/* f0 38 */ float result;
}

/* 001174e0 00000094 */ static u_short* ReadPixelStrip(/* a0 4 */ u_short *input, /* t3 11 */ u_char *strip[384], /* a2 6 */ u_char type) {
	/* a1 5 */ int row;
	/* a1 5 */ int col;
	/* v0 2 */ u_short c;
}

/* 00117578 000000d0 */ static int InputCode(/* s1 17 */ BIT_FILE *input_file) {
	/* s0 16 */ int bit_count;
	/* v1 3 */ int result;
}

/* 00117648 000000a8 */ static void ReadDCTData(/* s5 21 */ BIT_FILE *input_file, /* s4 20 */ int *input_data[8]) {
	/* s3 19 */ int i;
	/* s0 16 */ int row;
	/* s1 17 */ int col;
}

/* 001176f0 00000160 */ static void OutputCode(/* s3 19 */ BIT_FILE *output_file, /* s0 16 */ int code) {
	/* s2 18 */ int top_of_range;
	/* a0 4 */ int abs_code;
	/* s1 17 */ int bit_count;
}

/* 00117850 000000c8 */ static u_short* WritePixelStrip(/* a0 4 */ u_short *output, /* t6 14 */ u_char *strip[384], /* a2 6 */ u_char type) {
	/* v1 3 */ int row;
	/* a3 7 */ int col;
}

/* 00117918 00000074 */ static void OutputBits(/* a0 4 */ BIT_FILE *bit_file, /* a1 5 */ u_int code, /* a2 6 */ int count) {
	/* a2 6 */ u_int mask;
}

/* 00117990 00000074 */ static int InputBits(/* a2 6 */ BIT_FILE *bit_file, /* a1 5 */ int bit_count) {
	/* a3 7 */ u_int mask;
	/* t0 8 */ int return_value;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect.c
// *****************************************************************************

/* 00117a08 000000f8 */ void InitEffects() {}

/* 00117b00 0000044c */ void InitEffectsEF() {
	/* s0 16 */ int i;
	/* data 26c780 */ static void *e[3];
	/* sdata 356378 */ static float aalp;
	/* data 26c790 */ static sceVu0FVECTOR canal1;
	/* data 26c7a0 */ static sceVu0FVECTOR canal2;
	/* data 26c7b0 */ static sceVu0FVECTOR torch_pos[3];
}

/* 00117f50 00000008 */ void EffectEndSet() {}

/* 00117f58 00000d44 */ void* SetEffects(/* s0 16 */ int id, /* s2 18 */ int fl) {
	/* a0 4 */ int ret;
	/* s0 16 */ va_list ap;
	/* s1 17 */ EFFECT_CONT *ec;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 00118ca0 00000010 */ void ResetEffects(/* a0 4 */ void *p) {}

/* 00118cb0 0000005c */ int SearchEmptyEffectBuf() {
	/* a0 4 */ int i;
	/* a1 5 */ int fl;
	/* v1 3 */ EFFECT_CONT *ecm;
}

/* 00118d10 00000364 */ void EffectZSort() {
	/* s1 17 */ int i;
	/* v1 3 */ int j;
	/* s5 21 */ int num;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR vpos;
	/* 0x20(sp) */ sceVu0FVECTOR vtw;
	/* 0x30(sp) */ sceVu0FVECTOR wpos;
	/* 0x40(sp) */ sceVu0FMATRIX wlm;
	/* 0x80(sp) */ sceVu0FMATRIX slm;
	/* fp 30 */ EFFECT_CONT *ecm;
	/* a2 6 */ EFFECT_CONT *ec;
	/* bss 3599e0 */ static int efzsort[48];
	/* v0 2 */ float *v1;
}

/* 00119078 00000258 */ void EffectZSort2() {
	/* s1 17 */ int i;
	/* v1 3 */ int j;
	/* s5 21 */ int num;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR vpos;
	/* 0x20(sp) */ sceVu0FVECTOR vtw;
	/* 0x30(sp) */ sceVu0FVECTOR wpos;
	/* 0x40(sp) */ sceVu0FMATRIX wlm;
	/* 0x80(sp) */ sceVu0FMATRIX slm;
	/* s6 22 */ EFFECT_CONT *ecm;
	/* a0 4 */ EFFECT_CONT *ec;
	/* bss 359aa0 */ static int efzsort[48];
	/* v0 2 */ float *v1;
}

/* 001192d0 00000240 */ void EffectZSort3() {
	/* s1 17 */ int i;
	/* v1 3 */ int j;
	/* s5 21 */ int num;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR vpos;
	/* 0x20(sp) */ sceVu0FVECTOR vtw;
	/* 0x30(sp) */ sceVu0FVECTOR wpos;
	/* 0x40(sp) */ sceVu0FMATRIX wlm;
	/* 0x80(sp) */ sceVu0FMATRIX slm;
	/* s6 22 */ EFFECT_CONT *ecm;
	/* a0 4 */ EFFECT_CONT *ec;
	/* bss 359b60 */ static int efzsort[48];
	/* v0 2 */ float *v1;
}

/* 00119510 0000002c */ int CheckEffectScrBuffer(/* a0 4 */ int eno) {
	/* v0 2 */ int ret;
}

/* 00119540 00000034 */ void ResetEffectScrBuffer(/* a0 4 */ int eno) {}

/* 00119578 0000069c */ void EffectControl(/* a0 4 */ int no) {
	/* sbss 3578c0 */ static int fl;
	/* bss 359c20 */ static void *ecw[3];
	/* s1 17 */ EFFECT_CONT *ecm;
	/* s0 16 */ int n;
}

/* 00119c18 0000000c */ void SetBlurOff() {}
/* 00119c28 0000001c */ void SetDebugMenuSwitch(/* a0 4 */ int sw) {}

/* 00119c48 000002e8 */ void pblur() {
	/* 0x0(sp) */ sceVu0FVECTOR vpos;
	/* 0x10(sp) */ SPRITE_DATA sd;
	/* 0x70(sp) */ DRAW_ENV de;
	/* f20 58 */ float fy;
	/* f22 60 */ float ss1;
	/* f2 40 */ float ss2;
	/* f12 50 */ float xx;
	/* f1 39 */ float yy;
	/* f0 38 */ float zz;
	/* f1 39 */ float l;
	/* f23 61 */ float ll;
	/* sdata 356388 */ static float d1;
}

/* 00119f30 00000018 */ void TmpEffectOff(/* a0 4 */ int id) {}
/* 00119f48 00000008 */ void tes_p10() {}
/* 00119f50 00000008 */ void tes_p11() {}

/* 00119f58 000001f8 */ void tes_p20() {
	/* sdata 35638c */ static void *ene_fire_work;
	/* 0x0(sp) */ sceVu0FVECTOR fire_pos;
	/* 0x10(sp) */ sceVu0FVECTOR fire_pos2;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* f21 59 */ float alp;
	/* sdata 356390 */ static float off_x;
	/* sdata 356394 */ static float off_z;
}

/* 0011a150 00000008 */ void tes_p21() {}
/* 0011a158 00000008 */ void tes_p3() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_sub.c
// *****************************************************************************

/* 0011a160 0000002c */ void InitEffectSub() {}
/* 0011a190 00000028 */ void SetParam(/* a0 4 */ int alp, /* a1 5 */ int time, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* t1 9 */ int flag) {}
/* 0011a1b8 0000011c */ int ScreenCtrl() {}
/* 0011a2d8 00000028 */ void SetSquareS(/* a0 4 */ int pri, /* f12 50 */ float x1, /* f13 51 */ float y1, /* f14 52 */ float x4, /* f15 53 */ float y4, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}

/* 0011a300 00000394 */ void SetSquare(/* a0 4 */ int pri, /* f25 63 */ float x1, /* f22 60 */ float y1, /* f26 64 */ float x2, /* f23 61 */ float y2, /* f27 65 */ float x3, /* f24 62 */ float y3, /* f28 66 */ float x4, /* f21 59 */ float y4, /* fp 30 */ u_char r, /* 0x20(sp) */ u_char g, /* 0x24(sp) */ u_char b, /* s1 17 */ u_char a) {
	/* 0x0(sp) */ int x[4];
	/* 0x10(sp) */ int y[4];
	/* a0 4 */ int z;
	/* s0 16 */ int mpri;
	/* f20 58 */ float div;
}

/* 0011a698 0000037c */ void SetSquare2s(/* a0 4 */ int pri, /* f23 61 */ float x1, /* f22 60 */ float y1, /* f24 62 */ float x4, /* f21 59 */ float y4, /* s4 20 */ u_char r1, /* s5 21 */ u_char g1, /* s6 22 */ u_char b1, /* s7 23 */ u_char r2, /* fp 30 */ u_char g2, /* 0x20(sp) */ u_char b2, /* s3 19 */ u_char a) {
	/* 0x0(sp) */ int x[4];
	/* 0x10(sp) */ int y[4];
	/* t1 9 */ int z;
	/* s0 16 */ int mpri;
	/* f20 58 */ float div;
}

/* 0011aa18 0000025c */ void SetSquareZ(/* s0 16 */ int pri, /* f23 61 */ float x1, /* f22 60 */ float y1, /* f24 62 */ float x4, /* f21 59 */ float y4, /* s1 17 */ int z) {
	/* 0x0(sp) */ int x[4];
	/* 0x10(sp) */ int y[4];
	/* f20 58 */ float div;
}

/* 0011ac78 00000024 */ void SetPanel(/* a0 4 */ u_int pri, /* f12 50 */ float x1, /* f13 51 */ float y1, /* f14 52 */ float x2, /* f15 53 */ float y2, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}

/* 0011aca0 00000198 */ void SetPanel2(/* s1 17 */ u_int pri, /* f22 60 */ float x1, /* f23 61 */ float y1, /* f20 58 */ float x2, /* f21 59 */ float y2, /* s0 16 */ int z, /* s4 20 */ u_char r, /* s3 19 */ u_char g, /* s2 18 */ u_char b, /* s6 22 */ u_char a) {
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0x20(sp) */ DISP_SQAR dq;
	/* a2 6 */ int i;
}

/* 0011ae38 00000028 */ void SetSquareSN(/* a0 4 */ int pri, /* f12 50 */ float x1, /* f13 51 */ float y1, /* f14 52 */ float x4, /* f15 53 */ float y4, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}
/* 0011ae60 00000008 */ void SetSquareN(/* a0 4 */ int pri, /* f12 50 */ float x1, /* f13 51 */ float y1, /* f14 52 */ float x2, /* f15 53 */ float y2, /* f16 54 */ float x3, /* f17 55 */ float y3, /* f18 56 */ float x4, /* f19 57 */ float y4, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}

/* 0011ae68 000002ec */ void SetTriangle(/* a0 4 */ int pri, /* f24 62 */ float x1, /* f22 60 */ float y1, /* f25 63 */ float x2, /* f23 61 */ float y2, /* f26 64 */ float x3, /* f21 59 */ float y3, /* s4 20 */ u_char r, /* s5 21 */ u_char g, /* s6 22 */ u_char b, /* s3 19 */ u_char a) {
	/* 0x0(sp) */ int x[3];
	/* 0x10(sp) */ int y[3];
	/* a1 5 */ int z;
	/* s0 16 */ int mpri;
	/* f20 58 */ float div;
}

/* 0011b158 0000034c */ void SetTriangleZ(/* v1 3 */ int pri, /* f26 64 */ float x1, /* f23 61 */ float y1, /* f27 65 */ float z1, /* f25 63 */ float x2, /* f22 60 */ float y2, /* f28 66 */ float z2, /* f24 62 */ float x3, /* f21 59 */ float y3, /* 0xe0(sp) */ float z3, /* s3 19 */ u_char r, /* s4 20 */ u_char g, /* s5 21 */ u_char b, /* s2 18 */ u_char a) {
	/* 0x0(sp) */ int x[3];
	/* 0x10(sp) */ int y[3];
	/* f20 58 */ float div;
}

/* 0011b4a8 00000270 */ void SetLine(/* a0 4 */ int pri, /* f23 61 */ float x1, /* f22 60 */ float y1, /* f24 62 */ float x2, /* f21 59 */ float y2, /* s2 18 */ u_char r, /* s3 19 */ u_char g, /* s4 20 */ u_char b, /* s1 17 */ u_char a) {
	/* 0x0(sp) */ int x[2];
	/* 0x10(sp) */ int y[2];
	/* a1 5 */ int z;
	/* s0 16 */ int mpri;
	/* f20 58 */ float div;
}

/* 0011b718 00000204 */ void SetLine2(/* s3 19 */ int pri, /* f20 58 */ float x1, /* f21 59 */ float y1, /* f22 60 */ float x2, /* f23 61 */ float y2, /* s0 16 */ u_char r, /* s1 17 */ u_char g, /* s2 18 */ u_char b, /* s4 20 */ u_char a) {
	/* a1 5 */ u_char rr;
	/* a2 6 */ u_char gg;
	/* a3 7 */ u_char bb;
	/* f1 39 */ float d;
	/* f0 38 */ float dw;
}

/* 0011b920 00000254 */ void DrawPoint(/* s0 16 */ float *mpos, /* s2 18 */ int no) {
	/* a2 6 */ int n;
	/* v0 2 */ int clip;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR fzero;
	/* 0x90(sp) */ sceVu0IVECTOR ivec;
}

/* 0011bb78 00000268 */ void DrawPoint2(/* s0 16 */ float *mpos, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {
	/* a2 6 */ int n;
	/* v0 2 */ int clip;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR fzero;
	/* 0x90(sp) */ sceVu0IVECTOR ivec;
}

/* 0011bde0 00000394 */ void DrawLine(/* s0 16 */ float *mpos1, /* s6 22 */ u_char r1, /* fp 30 */ u_char g1, /* s7 23 */ u_char b1, /* s5 21 */ u_char a1, /* s4 20 */ float *mpos2, /* 0xb0(sp) */ u_char r2, /* 0xb4(sp) */ u_char g2, /* 0x170(sp) */ int b2, /* 0x178(sp) */ int a2) {
	/* 0xb8(sp) */ u_char b2;
	/* 0xbc(sp) */ u_char a2;
	/* a0 4 */ int i;
	/* a2 6 */ int n;
	/* v1 3 */ int clip;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR fzero;
	/* 0x90(sp) */ sceVu0IVECTOR ivec[2];
}

/* 0011c178 00000608 */ void Set3DPosTexure(/* s4 20 */ float *wlm[4], /* 0x130(sp) */ DRAW_ENV *de, /* 0x134(sp) */ int texno, /* f20 58 */ float w, /* f13 51 */ float h, /* 0x138(sp) */ u_char r, /* 0x13c(sp) */ u_char g, /* 0x140(sp) */ u_char b, /* 0x144(sp) */ u_char a) {
	/* s2 18 */ int i;
	/* t6 14 */ int bak;
	/* f22 60 */ float th;
	/* f21 59 */ float tw;
	/* fp 30 */ u_int clpz2;
	/* 0x148(sp) */ u_long tx0;
	/* 0x0(sp) */ sceVu0FMATRIX slm;
	/* 0x40(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x80(sp) */ sceVu0FVECTOR ppos[4];
	/* 0xc0(sp) */ float twoby[11];
	/* 0xf0(sp) */ float stq[2];
	/* 0x100(sp) */ U32DATA ts[4];
	/* 0x110(sp) */ U32DATA tt[4];
	/* 0x120(sp) */ U32DATA tq[4];
}

/* 0011c780 000004a4 */ void _SetTexDirectS(/* a3 7 */ int pri, /* s0 16 */ SPRITE_DATA *sd, /* s6 22 */ int atype) {
	/* 0x0(sp) */ int xx[4];
	/* 0x10(sp) */ int yy[4];
	/* fp 30 */ int mz;
	/* s4 20 */ u_int tw;
	/* s3 19 */ u_int th;
	/* f6 44 */ float div;
	/* f3 41 */ float mx;
	/* f2 40 */ float my;
	/* f2 40 */ float mscw;
	/* f3 41 */ float msch;
	/* f8 46 */ float mszw;
	/* f7 45 */ float mszh;
	/* f3 41 */ float px;
	/* f2 40 */ float py;
	/* f4 42 */ float pw;
	/* f1 39 */ float ph;
	/* s7 23 */ u_char malp;
	/* s1 17 */ sceGsTex0 Load;
	/* s2 18 */ sceGsTex0 Change;
}

/* 0011cc28 00000590 */ void SetTexDirectS(/* a3 7 */ int pri, /* s0 16 */ SPRITE_DATA *sd, /* s6 22 */ int atype) {
	/* 0x0(sp) */ int xx[4];
	/* 0x10(sp) */ int yy[4];
	/* s4 20 */ int mz;
	/* v0 2 */ u_int th;
	/* f7 45 */ float div;
	/* 0x20(sp) */ int u[11];
	/* fp 30 */ int v;
	/* 0x50(sp) */ int x[11];
	/* t6 14 */ int i;
	/* s2 18 */ int n;
	/* a1 5 */ int mtw;
	/* f5 43 */ float wx;
	/* f4 42 */ float mx;
	/* f0 38 */ float my;
	/* f2 40 */ float mscw;
	/* f3 41 */ float msch;
	/* f6 44 */ float mszw;
	/* f8 46 */ float mszh;
	/* f4 42 */ float px;
	/* f0 38 */ float py;
	/* f1 39 */ float ph;
	/* s7 23 */ u_char malp;
	/* s1 17 */ sceGsTex0 Load;
	/* s3 19 */ sceGsTex0 Change;
}

/* 0011d1b8 000004e0 */ void SetTexDirectS2(/* t1 9 */ int pri, /* s0 16 */ SPRITE_DATA *sd, /* a2 6 */ DRAW_ENV *de, /* a3 7 */ int type) {
	/* t0 8 */ int n;
	/* 0x0(sp) */ int tw[2];
	/* 0x10(sp) */ int th[2];
	/* f0 38 */ float mx;
	/* f1 39 */ float my;
	/* s7 23 */ u_int mz;
	/* f0 38 */ float mscw;
	/* f3 41 */ float msch;
	/* f8 46 */ float mszw;
	/* f7 45 */ float mszh;
	/* v0 2 */ int mclu;
	/* a1 5 */ int mclv;
	/* 0x40(sp) */ u_int r;
	/* 0x44(sp) */ u_int g;
	/* 0x48(sp) */ u_int b;
	/* 0x4c(sp) */ u_int a;
	/* s4 20 */ u_long tex1;
	/* s5 21 */ u_long alpha;
	/* s6 22 */ u_long zbuf;
	/* fp 30 */ u_long test;
	/* 0x50(sp) */ u_long clmp;
	/* 0x58(sp) */ u_long prim;
	/* s1 17 */ sceGsTex0 Load;
	/* s2 18 */ sceGsTex0 Change;
	/* f6 44 */ float div;
	/* f0 38 */ float px;
	/* f1 39 */ float py;
	/* f4 42 */ float pw;
	/* f3 41 */ float ph;
	/* 0x20(sp) */ float xx[2];
	/* 0x30(sp) */ float yy[2];
}

/* 0011d698 000004e0 */ void SetTexDirect2(/* t0 8 */ int pri, /* s0 16 */ SPRITE_DATA *sd, /* a2 6 */ DRAW_ENV *de, /* a3 7 */ sceVu0FVECTOR *v) {
	/* 0x0(sp) */ int tw[2];
	/* 0x10(sp) */ int th[2];
	/* f0 38 */ float mx;
	/* f1 39 */ float my;
	/* s7 23 */ int mz;
	/* f0 38 */ float mscw;
	/* f3 41 */ float msch;
	/* f8 46 */ float mszw;
	/* f7 45 */ float mszh;
	/* v0 2 */ int mclu;
	/* a3 7 */ int mclv;
	/* 0x40(sp) */ u_int r;
	/* 0x44(sp) */ u_int g;
	/* 0x48(sp) */ u_int b;
	/* 0x4c(sp) */ u_int a;
	/* s4 20 */ u_long tex1;
	/* s5 21 */ u_long alpha;
	/* s6 22 */ u_long zbuf;
	/* fp 30 */ u_long test;
	/* 0x50(sp) */ u_long clmp;
	/* 0x58(sp) */ u_long prim;
	/* s1 17 */ sceGsTex0 Load;
	/* s2 18 */ sceGsTex0 Change;
	/* f6 44 */ float div;
	/* f0 38 */ float px;
	/* f1 39 */ float py;
	/* f4 42 */ float pw;
	/* f3 41 */ float ph;
	/* 0x20(sp) */ float xx[2];
	/* 0x30(sp) */ float yy[2];
}

/* 0011db78 0000097c */ void SetTexDirect(/* s0 16 */ SPRITE_DATA *sd, /* s7 23 */ int atype) {
	/* a0 4 */ int i;
	/* 0x0(sp) */ float xx[4];
	/* 0x10(sp) */ float yy[4];
	/* s3 19 */ unsigned int tw;
	/* s2 18 */ unsigned int th;
	/* f23 61 */ float ss;
	/* f9 47 */ float cc;
	/* f24 62 */ float div;
	/* s6 22 */ int mz;
	/* f3 41 */ float mx;
	/* f1 39 */ float my;
	/* f2 40 */ float mscw;
	/* f3 41 */ float msch;
	/* f8 46 */ float mszw;
	/* f6 44 */ float mszh;
	/* f7 45 */ float mang;
	/* s4 20 */ unsigned int mrc;
	/* fp 30 */ unsigned char malp;
	/* s1 17 */ sceGsTex0 Load;
	/* s5 21 */ sceGsTex0 Change;
	/* 0x20(sp) */ u_int r;
	/* 0x24(sp) */ u_int g;
	/* 0x28(sp) */ u_int b;
	/* f26 64 */ float px;
	/* f25 63 */ float py;
	/* f22 60 */ float pw;
	/* f21 59 */ float ph;
}

/* 0011e4f8 00000184 */ void SetScreenDSlide(/* a0 4 */ int addr, /* t1 9 */ int type, /* t5 13 */ int alpha, /* f12 50 */ float ang, /* f13 51 */ float scl, /* t6 14 */ int z) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0011e680 00000090 */ void SetScreenZ(/* a0 4 */ int addr) {
	/* 0x0(sp) */ SPRITE_DATA sd;
}

/* 0011e710 0000002c */ void CaptureScreen(/* a0 4 */ u_int addr) {}

/* 0011e740 00000148 */ void DrawScreen(/* s1 17 */ u_int pri, /* s0 16 */ u_int addr, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* t1 9 */ u_char a) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 0011e888 000001d8 */ void ClearFBuffer() {
	/* t2 10 */ int i;
	/* 0x0(sp) */ int x[2];
	/* 0x10(sp) */ int y[2];
	/* a1 5 */ int div;
}

/* 0011ea60 000001c8 */ void ClearZBuffer() {
	/* t2 10 */ int i;
	/* 0x0(sp) */ int x[2];
	/* 0x10(sp) */ int y[2];
	/* a1 5 */ int div;
}

/* 0011ec28 00000010 */ void CamSave() {}
/* 0011ec38 00000018 */ int CamChangeCheck() {}
/* 0011ec50 0000004c */ void* GetEmptyBuffer(/* a0 4 */ int no) {}

/* 0011eca0 00000378 */ void CheckPointDepth(/* 0x670(sp) */ PP_JUDGE *ppj) {
	/* s5 21 */ int i;
	/* 0x0(sp) */ int xx[32];
	/* 0x80(sp) */ int yy[32];
	/* 0x100(sp) */ int clip[32];
	/* 0x180(sp) */ sceVu0FMATRIX wlm;
	/* 0x1c0(sp) */ sceVu0FMATRIX slm;
	/* 0x200(sp) */ sceVu0IVECTOR ivec[32];
	/* 0x400(sp) */ sceVu0FVECTOR bpos[32];
	/* 0x600(sp) */ sceVu0FVECTOR fzero;
	/* 0x610(sp) */ sceVu0FVECTOR ofst_pos[5];
	/* f1 39 */ float fr_f;
	/* bss 359c30 */ static sceGsStoreImage gs_simage1;
	/* 0x660(sp) */ Q_WORDDATA q;
	/* v0 2 */ int n1;
	/* s1 17 */ int n2;
	/* v0 2 */ u_int ui;
}

/* 0011f018 0000012c */ void GetCamI2DPos(/* s0 16 */ float *pos, /* s3 19 */ float *tx, /* s4 20 */ float *ty) {
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR vt;
	/* 0x90(sp) */ sceVu0FVECTOR vtw;
	/* f21 59 */ float pl;
}

/* 0011f148 00000128 */ void Get2PosRot(/* a0 4 */ float *v1, /* a1 5 */ float *v2, /* s1 17 */ float *x, /* s0 16 */ float *y) {
	/* f23 61 */ float l;
	/* f20 58 */ float fx;
	/* f22 60 */ float fy;
	/* f21 59 */ float fz;
}

/* 0011f270 000000fc */ void Get2PosRot2(/* a0 4 */ float *v1, /* a1 5 */ float *v2, /* s1 17 */ float *x, /* s0 16 */ float *z) {
	/* f21 59 */ float fy;
	/* f20 58 */ float fz;
}

/* 0011f370 000000a0 */ void GetTrgtRotType2(/* s1 17 */ float *p0, /* s2 18 */ float *p1, /* s0 16 */ float *rot, /* s3 19 */ int id) {
	/* 0x0(sp) */ sceVu0FVECTOR dist;
}

/* 0011f410 000001fc */ void CalcSimEquations(/* s5 21 */ double *sq[3], /* 0x0(sp) */ float *x, /* 0x4(sp) */ float *y) {
	/* s3 19 */ double d;
	/* s2 18 */ int i;
	/* s1 17 */ int j;
	/* s6 22 */ int k;
}

/* 0011f610 00000050 */ float Get2PLength(/* a0 4 */ float *v1, /* a1 5 */ float *v2) {
	/* f12 50 */ float xx;
	/* f1 39 */ float yy;
	/* f0 38 */ float zz;
}

/* 0011f660 00000044 */ int log_2(/* f12 50 */ float num) {
	/* v0 2 */ int n;
}

/* 0011f6a8 00000114 */ void LocalCopyLtoB_Sub(/* a0 4 */ int no, /* s4 20 */ int type, /* a2 6 */ int addr) {
	/* s3 19 */ u_long128 *pbuf;
	/* bss 359ca0 */ static sceGsStoreImage gs_simage1;
	/* bss 359d10 */ static sceGsStoreImage gs_simage2;
}

/* 0011f7c0 00000008 */ void LocalCopyLtoB_Sub2(/* a0 4 */ int no, /* a1 5 */ int type, /* a2 6 */ int addr) {}

/* 0011f7c8 00000244 */ void LocalCopyBtoL_Sub(/* a0 4 */ int no, /* a1 5 */ int type, /* s0 16 */ int addr) {
	/* s1 17 */ u_long128 *bbuf;
	/* a3 7 */ int nloop;
	/* s2 18 */ int bline;
	/* s0 16 */ int rline;
	/* t0 8 */ int oline;
}

/* 0011fa10 0000001c */ int GetYOffset() {}
/* 0011fa30 00000030 */ float GetYOffsetf() {}
/* 0011fa60 0000000c */ void LocalCopyLtoB2(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0011fa70 0000000c */ void LocalCopyLtoB(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0011fa80 0000000c */ void LocalCopyBtoL(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0011fa90 0000000c */ void LocalCopyLtoB_NB(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0011faa0 0000000c */ void LocalCopyBtoL_NB(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0011fab0 00000010 */ void ClearLocalCopyLtoLCache() {}

/* 0011fac0 00000264 */ int LocalCopyLtoLDraw(/* s1 17 */ int addr1, /* s0 16 */ int addr2) {
	/* t2 10 */ int i;
	/* s0 16 */ int old_ndpkt;
	/* v1 3 */ int xyoff;
	/* t3 11 */ Q_WORDDATA *ppbuf;
	/* a1 5 */ float *v0;
	/* v1 3 */ float *v1;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 0011fd28 0000016c */ void LocalCopyLtoL(/* s1 17 */ int addr1, /* s0 16 */ int addr2) {
	/* a0 4 */ int i;
	/* t0 8 */ Q_WORDDATA *ppbuf;
}

/* 0011fe98 00000078 */ void LocalCopyZtoBZ() {
	/* bss 359d80 */ static sceGsStoreImage gs_simage1;
}

/* 0011ff10 00000064 */ void LocalCopyBZtoZ() {
	/* bss 359df0 */ static sceGsLoadImage gs_limage1;
}

/* 0011ff78 000000dc */ void LocalCopyLtoBD(/* a0 4 */ int addr, /* s3 19 */ void *outbuf) {
	/* bss 359e50 */ static sceGsStoreImage gs_simage1;
	/* bss 359ec0 */ static sceGsStoreImage gs_simage2;
}

/* 00120058 0000001c */ void SetVibrate(/* a0 4 */ int type, /* a1 5 */ int time, /* a2 6 */ int pow) {}
/* 00120078 0000005c */ void CallVibrate() {}
/* 001200d8 00000008 */ void InitTecmotLogo() {}

/* 001200e0 000001d4 */ int SetTecmoLogo() {
	/* 0x0(sp) */ SPRT_DAT logotex[1];
	/* 0x20(sp) */ DISP_SPRT ds;
	/* sbss 3578d0 */ static int cnt;
	/* s1 17 */ u_char alp;
	/* t1 9 */ int sec1;
	/* v1 3 */ int sec3;
}

/* 001202b8 00000014 */ void set_vect(/* a0 4 */ float *v, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z, /* f15 53 */ float w) {}

/* 001202d0 00000030 */ void Vu0SubOuterProduct(/* a0 4 */ float *v0, /* a1 5 */ float *v1, /* a2 6 */ float *v2, /* a3 7 */ float *v3) {
	/* v0 2 */ u_int reg0;
}

/* 00120300 00000038 */ void Vu0Normalize(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {}
/* 00120338 00000030 */ void Vu0ApplyMatrix(/* a0 4 */ float *v0, /* a1 5 */ float *m0[4], /* a2 6 */ float *v1) {}
/* 00120368 00000018 */ void Vu0MulVector(/* a0 4 */ float *v0, /* a1 5 */ float *v1, /* a2 6 */ float *v2) {}
/* 00120380 00000014 */ void Vu0FTOI0Vector(/* a0 4 */ int *v0, /* a1 5 */ float *v1) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_sub2.c
// *****************************************************************************

/* 00120398 00000058 */ void InitEffectSub2() {}
/* 001203f0 00000048 */ void CallFallenEffect(/* a0 4 */ float *mpos, /* a1 5 */ int area, /* a2 6 */ int fall_num, /* a3 7 */ int fall_mode) {}
/* 00120438 00000010 */ void StopFallenEffect() {}

/* 00120448 000003f0 */ void FallObjInit(/* a0 4 */ float *mpos, /* t5 13 */ int leaf_no, /* a2 6 */ int area, /* a3 7 */ int fall_num, /* t0 8 */ int fall_mode) {
	/* t1 9 */ int tmp;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 00120838 00000104 */ void FallObjInitAll(/* a0 4 */ float *mpos, /* s2 18 */ int area, /* s1 17 */ int fall_num, /* s3 19 */ int fall_mode, /* t0 8 */ int height) {
	/* s0 16 */ int i;
}

/* 00120940 000000b8 */ void FallObjDropSet() {
	/* t0 8 */ int i;
	/* f1 39 */ float r;
}

/* 001209f8 0000028c */ void FallenObjects() {
	/* sdata 3563f8 */ static int now_status;
	/* s3 19 */ int i;
}

/* 00120c88 000003cc */ void FallObjTrans(/* a0 4 */ float *leaf, /* a1 5 */ float *axel, /* a2 6 */ float *aim, /* a3 7 */ int fall_mode) {
	/* v0 2 */ int tmp;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
}

/* 00121058 00000280 */ void FallObjRot(/* t0 8 */ float *rotation, /* a1 5 */ float *axel, /* a2 6 */ float *aim, /* a3 7 */ int fall_mode) {}
/* 001212d8 00000050 */ void FallObjWind(/* a0 4 */ float *leaf, /* a1 5 */ int fall_mode) {}

/* 00121328 000000e0 */ void FallObjLight(/* a0 4 */ float *leaf, /* s0 16 */ short int *rgba, /* s1 17 */ int fall_mode) {
	/* 0x0(sp) */ float tes1;
	/* 0x4(sp) */ float tes2;
}

/* 00121408 0000047c */ void FallObjDraw(/* a0 4 */ float *mpos, /* s0 16 */ float *rotation, /* s1 17 */ short int *rgba, /* s2 18 */ int fall_mode) {
	/* t3 11 */ int i;
	/* a1 5 */ int w;
	/* fp 30 */ int th;
	/* s7 23 */ int tw;
	/* t5 13 */ int bak;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0IVECTOR ivec[4];
	/* 0xc0(sp) */ sceVu0FVECTOR wpos;
	/* 0xd0(sp) */ sceVu0FVECTOR ppos[4];
	/* s5 21 */ u_char mr;
	/* s6 22 */ u_char mg;
	/* s4 20 */ u_char mb;
	/* s0 16 */ u_long tex0;
}

/* 00121888 000000e4 */ void GusObjDebug() {}
/* 00121970 0000005c */ void CallGusEffect(/* a0 4 */ float *mpos, /* a1 5 */ int area, /* a2 6 */ int height) {}
/* 001219d0 00000008 */ void StopGusEffect() {}
/* 001219d8 00000020 */ void GusObjMove(/* a0 4 */ float *mpos) {}

/* 001219f8 00000254 */ void GusObjInit(/* t2 10 */ float *mpos, /* t3 11 */ int leaf_no, /* a2 6 */ int area) {
	/* v0 2 */ int tmp;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 00121c50 000001a4 */ void GusObjInit3(/* a0 4 */ float *mpos, /* s3 19 */ int leaf_no, /* a2 6 */ int area, /* s1 17 */ int fall_mode) {
	/* f20 58 */ float r;
}

/* 00121df8 000000f0 */ void GusObjInitAll(/* a0 4 */ float *mpos, /* s2 18 */ int area, /* a2 6 */ int height) {
	/* s0 16 */ int i;
}

/* 00121ee8 00000168 */ void GusObjects() {
	/* s0 16 */ int i;
}

/* 00122050 00000060 */ int GusObjTrans(/* a0 4 */ int leaf_no) {
	/* v0 2 */ int ret_num;
}

/* 001220b0 00000080 */ void GusAlpha(/* a1 5 */ int leaf_no) {}

/* 00122130 000004cc */ void GusObjDraw(/* a0 4 */ int leaf_num, /* a1 5 */ int area, /* a2 6 */ int fall_mode) {
	/* t6 14 */ int i;
	/* a1 5 */ int w;
	/* s2 18 */ int k;
	/* 0x150(sp) */ int th;
	/* 0x154(sp) */ int tw;
	/* s3 19 */ int bak;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FMATRIX wlm2;
	/* 0xc0(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x100(sp) */ sceVu0FVECTOR wpos;
	/* 0x110(sp) */ sceVu0FVECTOR ppos[4];
	/* fp 30 */ u_char mr;
	/* 0x158(sp) */ u_char mg;
	/* s6 22 */ u_char mb;
	/* s2 18 */ u_long tex0;
}

/* 00122600 0000007c */ void CallHoleGusEffect(/* a0 4 */ float *mpos) {
	/* s0 16 */ int i;
}

/* 00122680 00000010 */ void StopHoleGusEffect() {}

/* 00122690 00000230 */ void HoleGusInit(/* a0 4 */ float *mpos, /* a1 5 */ int leaf_no) {
	/* v0 2 */ int tmp;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 001228c0 000000ac */ void HoleGusInitAll(/* s1 17 */ float *mpos) {
	/* s0 16 */ int i;
}

/* 00122970 000000b0 */ void HoleGusSetPos(/* a0 4 */ int leaf_no) {
	/* f0 38 */ float r;
}

/* 00122a20 000000ec */ void HoleGusObjects() {
	/* s0 16 */ int i;
}

/* 00122b10 00000054 */ int HoleGusTransX(/* a0 4 */ int leaf_no) {}

/* 00122b68 000000d8 */ int HoleGusTransZ(/* a3 7 */ int leaf_no) {
	/* t2 10 */ int ret_num;
}

/* 00122c40 00000054 */ int HoleGusTransY(/* a0 4 */ int leaf_no) {}

/* 00122c98 00000054 */ int HoleGusAlpha(/* a0 4 */ int leaf_no) {
	/* a1 5 */ int ret_num;
}

/* 00122cf0 00000434 */ void HoleGusDraw(/* s5 21 */ int leaf_no) {
	/* t4 12 */ int i;
	/* a1 5 */ int w;
	/* s4 20 */ int th;
	/* s3 19 */ int tw;
	/* t6 14 */ int bak;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FMATRIX wlm2;
	/* 0xc0(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x150(sp) */ float tmp_x;
	/* 0x154(sp) */ float tmp_y;
	/* 0x100(sp) */ sceVu0FVECTOR wpos;
	/* 0x110(sp) */ sceVu0FVECTOR ppos[4];
	/* s2 18 */ u_long tex0;
}

/* 00123128 000000c8 */ void CallLineGusEffect(/* a0 4 */ float *mpos1, /* a1 5 */ float *mpos2, /* s2 18 */ int dir, /* s3 19 */ int line_num) {
	/* s0 16 */ int i;
}

/* 001231f0 0000002c */ void StopLineGusEffect(/* a0 4 */ int line_num) {}

/* 00123220 000001d4 */ void LineGusInit(/* a0 4 */ float *mpos, /* a0 4 */ int leaf_no, /* t1 9 */ int line_num) {
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
}

/* 001233f8 000001ac */ void LineGusInitAll(/* s3 19 */ float *mpos1, /* a1 5 */ float *mpos2, /* t0 8 */ int dir, /* s1 17 */ int line_num) {
	/* s0 16 */ int i;
}

/* 001235a8 00000cac */ void LineGusSetPos(/* t4 12 */ int leaf_no, /* a1 5 */ int dir, /* a2 6 */ int line_num) {
	/* f4 42 */ float tmp;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 00124258 00000150 */ void LineGusObjects(/* s0 16 */ int line_num) {
	/* s1 17 */ int i;
}

/* 001243a8 000001d0 */ int LineGusTransX(/* t0 8 */ int leaf_no, /* a1 5 */ int dir, /* t1 9 */ int line_num) {
	/* t3 11 */ int ret_num;
}

/* 00124578 000001c8 */ int LineGusTransZ(/* t0 8 */ int leaf_no, /* a1 5 */ int dir, /* t1 9 */ int line_num) {
	/* t4 12 */ int ret_num;
}

/* 00124740 00000210 */ int LineGusTransY(/* t1 9 */ int leaf_no, /* a1 5 */ int dir, /* t0 8 */ int line_num) {
	/* t4 12 */ int ret_num;
}

/* 00124950 00000068 */ int LineGusAlpha(/* a0 4 */ int leaf_no, /* a1 5 */ int line_num) {
	/* a2 6 */ int ret_num;
}

/* 001249b8 00000450 */ void LineGusDraw(/* s6 22 */ int leaf_no, /* s5 21 */ int line_num) {
	/* t4 12 */ int i;
	/* a1 5 */ int w;
	/* s4 20 */ int th;
	/* s3 19 */ int tw;
	/* t6 14 */ int bak;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FMATRIX wlm2;
	/* 0xc0(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x150(sp) */ float tmp_x;
	/* 0x154(sp) */ float tmp_y;
	/* 0x100(sp) */ sceVu0FVECTOR wpos;
	/* 0x110(sp) */ sceVu0FVECTOR ppos[4];
	/* s2 18 */ u_long tex0;
}

/* 00124e08 0000003c */ void InitCallAnm() {}

/* 00124e48 00000164 */ int CallReadyGo() {
	/* s1 17 */ short int ret_num;
}

/* 00124fb0 000004b8 */ void ResultDisp() {
	/* s0 16 */ u_long clear_time;
}

/* 00125468 0000048c */ int CallMissionClear() {
	/* sdata 356414 */ static u_char now_pos;
	/* 0x0(sp) */ u_char alpha_res[3];
	/* s3 19 */ int ret_num;
	/* 0x10(sp) */ STR_DAT sd;
	/* 0x40(sp) */ DISP_STR dsr;
}

/* 001258f8 00000404 */ int CallMissionFailed() {
	/* sdata 35641b */ static u_char now_pos;
	/* 0x0(sp) */ u_char alpha_res[3];
	/* s2 18 */ int ret_num;
}

/* 00125d00 00000524 */ int CallMissionAllClear() {
	/* sdata 35641c */ static u_char now_pos;
	/* 0x0(sp) */ u_char alpha_res[3];
	/* s4 20 */ int ret_num;
	/* 0x10(sp) */ STR_DAT sd;
	/* 0x40(sp) */ SPRT_DAT ssd;
	/* 0x60(sp) */ DISP_STR dsr;
	/* 0xa0(sp) */ DISP_SPRT ds;
	/* s2 18 */ int i;
}

/* 00126228 000005e8 */ int CallStoryClear() {
	/* s4 20 */ short int ret_num;
	/* sdata 356420 */ static u_long clear_time;
	/* sdata 356428 */ static u_int t_point;
	/* 0x10(sp) */ SPRT_DAT ssd;
	/* 0x30(sp) */ DISP_SPRT ds;
	/* 0xc0(sp) */ DISP_STR dsr;
	/* 0x100(sp) */ STR_DAT sd;
	/* s2 18 */ int i;
}

/* 00126810 000004e0 */ int BtlAnmInit(/* s0 16 */ int anm_no) {
	/* t3 11 */ int i;
	/* t8 24 */ int j;
	/* a2 6 */ int story_rank;
}

/* 00126cf0 0000023c */ int BtlAnmMain() {
	/* s7 23 */ int i;
}

/* 00126f30 00000098 */ void* BtlTblIncl(/* a0 4 */ ANM2D_DAT_TABLE *b_table, /* a1 5 */ void *p_table, /* a2 6 */ short int *count_keep) {
	/* a3 7 */ int i;
}

/* 00126fc8 00000038 */ void BtlDataDirectSet(/* a0 4 */ ANM2D_WRK_TABLE *w_table) {}
/* 00127000 00000108 */ void BtlTblTransX(/* a0 4 */ ANM2D_WRK_TABLE *w_table, /* a1 5 */ ANM2D_DAT_TABLE *b_table, /* a2 6 */ SPRT_SDAT *ssd_p) {}
/* 00127108 00000108 */ void BtlTblTransY(/* a0 4 */ ANM2D_WRK_TABLE *w_table, /* a1 5 */ ANM2D_DAT_TABLE *b_table, /* a2 6 */ SPRT_SDAT *ssd_p) {}
/* 00127210 000000c8 */ void BtlTblRotate(/* a3 7 */ ANM2D_WRK_TABLE *w_table, /* a1 5 */ SPRT_SDAT *ssd_p, /* t0 8 */ void *p_table) {}
/* 001272d8 0000018c */ void BtlTblScale(/* a3 7 */ ANM2D_WRK_TABLE *w_table, /* t2 10 */ SPRT_SDAT *ssd_p, /* a2 6 */ void *p_table) {}
/* 00127468 00000060 */ void TblAlphaChg(/* a0 4 */ ANM2D_WRK_TABLE *w_table, /* a1 5 */ SPRT_SDAT *ssd_p, /* a2 6 */ void *p_table) {}

/* 001274c8 000001c0 */ void ZanzouEffect(/* a2 6 */ ANM2D_WRK_TABLE *w_table, /* a1 5 */ SPRT_SDAT *ssd_p, /* a2 6 */ void *p_table) {
	/* t0 8 */ int i;
}

/* 00127688 0000022c */ void BtlReadyDisp(/* s0 16 */ ANM2D_WRK_TABLE *w_table) {
	/* s1 17 */ int i;
}

/* 001278b8 00000038 */ void SimpleMaskDraw(/* a0 4 */ u_char alpha) {}

/* 001278f0 00000188 */ void DispSprt2(/* s0 16 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ SPRT_SROT *srot, /* s3 19 */ SPRT_SSCL *sscl, /* t1 9 */ u_char alp_rate) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 00127a78 00000170 */ void DispSprt3(/* s0 16 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s1 17 */ SPRT_SROT *srot, /* s2 18 */ SPRT_SSCL *sscl, /* t1 9 */ u_char alp_rate) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 00127be8 00000198 */ void DispSprtTemp(/* s1 17 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ SPRT_SROT *srot, /* s3 19 */ SPRT_SSCL *sscl, /* s4 20 */ u_char alp_rate) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 00127d80 000000c0 */ void TestPk2Data_2dg(/* s1 17 */ long int sendtexaddr) {
	/* sdata 35642c */ static int ttest_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_scr.c
// *****************************************************************************

/* 00127e40 000000ec */ void InitEffectScr() {}
/* 00127f30 00000030 */ void InitEffectScrEF() {}
/* 00127f60 0000001c */ void SetWhiteOut() {}
/* 00127f80 0000001c */ void SetWhiteIn() {}
/* 00127fa0 0000001c */ void SetBlackOut() {}
/* 00127fc0 0000001c */ void SetBlackIn() {}
/* 00127fe0 0000001c */ void SetWhiteOut2(/* a0 4 */ int time) {}
/* 00128000 0000001c */ void SetWhiteIn2(/* a0 4 */ int time) {}
/* 00128020 0000001c */ void SetBlackOut2(/* a0 4 */ int time) {}
/* 00128040 0000001c */ void SetBlackIn2(/* a0 4 */ int time) {}
/* 00128060 0000001c */ void SetFlash() {}
/* 00128080 0000006c */ void SetBlackFilter(/* s0 16 */ EFFECT_CONT *ec) {}

/* 001280f0 000001f0 */ void SubBlur(/* t2 10 */ int type, /* t3 11 */ u_char alpha, /* f12 50 */ float scale, /* f13 51 */ float rot, /* f14 52 */ float cx, /* f15 53 */ float cy) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
	/* f2 40 */ float hw;
	/* f4 42 */ float hh;
	/* f1 39 */ float fx;
	/* f0 38 */ float fy;
}

/* 001282e0 000000e4 */ void SetBlur(/* s0 16 */ EFFECT_CONT *ec) {}

/* 001283c8 0000039c */ void RunBlur(/* a0 4 */ EFFECT_CONT *ec) {
	/* v1 3 */ int ef;
	/* f2 40 */ float phase;
}

/* 00128768 00000058 */ void CallBlur(/* a0 4 */ int type, /* a1 5 */ int wait, /* a2 6 */ u_char alpha, /* f12 50 */ float scale, /* f13 51 */ float rot) {}
/* 001287c0 00000070 */ void CallBlur2(/* a0 4 */ int in, /* a1 5 */ int keep, /* a2 6 */ int out, /* a3 7 */ u_char alpha, /* f12 50 */ float scale, /* f13 51 */ float rot) {}
/* 00128830 00000060 */ void CallBlur3(/* a0 4 */ int in, /* a1 5 */ int keep, /* a2 6 */ int out, /* a3 7 */ u_char alpha, /* f12 50 */ float scale, /* f13 51 */ float rot, /* f14 52 */ float cx, /* f15 53 */ float cy) {}

/* 00128890 00000184 */ void SubFocus(/* a0 4 */ int ef) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* f24 62 */ float hw;
	/* f25 63 */ float ff;
}

/* 00128a18 0000005c */ void SetFocus(/* s0 16 */ EFFECT_CONT *ec) {}

/* 00128a78 00000370 */ void RunFocus(/* s2 18 */ EFFECT_CONT *ec) {
	/* v0 2 */ int ef;
	/* f2 40 */ float phase;
}

/* 00128de8 0000002c */ void CallFocus(/* a0 4 */ int type, /* a1 5 */ int wait, /* a2 6 */ int gap) {}
/* 00128e18 0000004c */ void CallFocus2(/* a0 4 */ int in, /* a1 5 */ int keep, /* a2 6 */ int out, /* a3 7 */ int max) {}
/* 00128e68 00000070 */ void SubDeform(/* a2 6 */ int type, /* f12 50 */ float rate, /* a1 5 */ u_char alp) {}

/* 00128ed8 000002e4 */ void SetDeform(/* s0 16 */ EFFECT_CONT *ec) {
	/* f12 50 */ float ef;
	/* f2 40 */ float phase;
}

/* 001291c0 000002b8 */ void RunDeform(/* s0 16 */ EFFECT_CONT *ec) {
	/* f2 40 */ float phase;
}

/* 00129478 00000020 */ void CallDeform2(/* a0 4 */ int in, /* a1 5 */ int keep, /* t2 10 */ int out, /* a3 7 */ int type, /* t0 8 */ int max) {}
/* 00129498 00000024 */ static void _SetScrData(/* a0 4 */ Q_WORDDATA *dst, /* a1 5 */ SCRDEF *src) {}

/* 001294c0 00000268 */ void MakeScrDeformPacket(/* s1 17 */ int pnumw, /* 0x0(sp) */ int pnumh, /* s2 18 */ u_long tex0, /* s7 23 */ SCRDEF *scrdef[33], /* s0 16 */ int alp) {
	/* s4 20 */ int i;
	/* s6 22 */ int j;
	/* s5 21 */ int k;
	/* s3 19 */ Q_WORDDATA *ppbuf;
}

/* 00129728 000006e0 */ void SetDeform0(/* 0x2850(sp) */ int type, /* f20 58 */ float rate, /* 0x2854(sp) */ u_char alp) {
	/* sdata 35644c */ static float r;
	/* sdata 356450 */ static float add;
	/* sdata 356454 */ static int swch;
	/* s1 17 */ int i;
	/* s2 18 */ int j;
	/* t9 25 */ int c;
	/* s0 16 */ int pnumw;
	/* f1 39 */ float ll;
	/* f23 61 */ float fw;
	/* f7 45 */ float yoff;
	/* 0x0(sp) */ float tx[17][25];
	/* 0x6b0(sp) */ float ty[17][25];
	/* 0xd60(sp) */ sceVu0FVECTOR vtw[17][25];
	/* 0x27f0(sp) */ SPRITE_DATA sd1;
}

/* 00129e08 00000be0 */ void SetDeform2(/* 0x81f8(sp) */ int type, /* f30 68 */ float rate, /* 0x81fc(sp) */ u_char alp) {
	/* bss 365610 */ static float rrr[825];
	/* bss 3662f8 */ static float lll[825];
	/* bss 366fe0 */ static float mm1[825];
	/* bss 367cc8 */ static float mm2[825];
	/* bss 3689b0 */ static float sss[825];
	/* bss 369698 */ static float ccc[825];
	/* sdata 35645c */ static float r;
	/* sdata 356460 */ static float add;
	/* sdata 356464 */ static float ll;
	/* sdata 356468 */ static int swch;
	/* s4 20 */ int i;
	/* t6 14 */ int k;
	/* s3 19 */ int m;
	/* t7 15 */ int bak;
	/* s3 19 */ int vnumw;
	/* s0 16 */ int wix;
	/* v0 2 */ int pnumh;
	/* s2 18 */ int wiy;
	/* f20 58 */ float wfw;
	/* f21 59 */ float wfh;
	/* f20 58 */ float yoff;
	/* f0 38 */ float l;
	/* f24 62 */ float fw;
	/* f22 60 */ float lm;
	/* f27 65 */ float cntw;
	/* f26 64 */ float cnth;
	/* f23 61 */ float ts;
	/* f22 60 */ float fx;
	/* f21 59 */ float fy;
	/* f20 58 */ float fz;
	/* 0x81f0(sp) */ float rot_x;
	/* 0x81f4(sp) */ float rot_y;
	/* 0x0(sp) */ float tx[825];
	/* 0xcf0(sp) */ float ty[825];
	/* 0x19e0(sp) */ sceVu0FMATRIX slm;
	/* 0x1a20(sp) */ sceVu0FMATRIX wlm;
	/* 0x1a60(sp) */ sceVu0FVECTOR pos;
	/* 0x1a70(sp) */ sceVu0FVECTOR vt[825];
	/* 0x4e00(sp) */ sceVu0FVECTOR vtw[825];
	/* 0x8190(sp) */ SPRITE_DATA sd1;
}

/* 0012a9e8 000008b4 */ void SetDeform3(/* 0x81f0(sp) */ int type, /* f20 58 */ float rate, /* 0x81f4(sp) */ u_char alp) {
	/* sdata 35646c */ static float r;
	/* sdata 356470 */ static float add;
	/* sdata 356474 */ static float ll;
	/* sdata 356478 */ static int swch;
	/* s1 17 */ int i;
	/* s2 18 */ int j;
	/* fp 30 */ int c;
	/* s7 23 */ int pnumw;
	/* s4 20 */ int vnumw;
	/* 0x81f8(sp) */ int wix;
	/* 0x81fc(sp) */ int wiy;
	/* f20 58 */ float wfw;
	/* f21 59 */ float wfh;
	/* f26 64 */ float fw;
	/* f22 60 */ float lm;
	/* f28 66 */ float cntw;
	/* f27 65 */ float cnth;
	/* f20 58 */ float fx;
	/* f0 38 */ float fy;
	/* 0x0(sp) */ float tx[25][33];
	/* 0xcf0(sp) */ float ty[25][33];
	/* 0x19e0(sp) */ sceVu0FMATRIX slm;
	/* 0x1a20(sp) */ sceVu0FMATRIX wlm;
	/* 0x1a60(sp) */ sceVu0FVECTOR pos;
	/* 0x1a70(sp) */ sceVu0FVECTOR vt[25][33];
	/* 0x4e00(sp) */ sceVu0FVECTOR vtw[25][33];
	/* s0 16 */ DEFWORK *pdef;
	/* 0x8190(sp) */ SPRITE_DATA sd1;
	/* f30 68 */ float pszw;
	/* f29 67 */ float pszh;
	/* f3 41 */ float yoff;
}

/* 0012b2a0 000004c4 */ void SetDeform4(/* 0x6720(sp) */ int type, /* f20 58 */ float rate, /* 0x6724(sp) */ u_char alp) {
	/* sdata 356480 */ static float r;
	/* sdata 356484 */ static float add;
	/* s1 17 */ int i;
	/* s2 18 */ int j;
	/* fp 30 */ int pnumw;
	/* s4 20 */ int vnumw;
	/* 0x6728(sp) */ int wix;
	/* s0 16 */ int pnumh;
	/* 0x672c(sp) */ int wiy;
	/* f21 59 */ float wfw;
	/* f20 58 */ float wfh;
	/* f21 59 */ float f;
	/* f23 61 */ float lw;
	/* f26 64 */ float fw;
	/* f24 62 */ float lm;
	/* f22 60 */ float fx;
	/* f20 58 */ float fy;
	/* f23 61 */ float fz;
	/* f2 40 */ float yoff;
	/* 0x0(sp) */ SCRDEF scrdef[25][33];
	/* v0 2 */ SCRDEF *pscr;
	/* s0 16 */ DEFWORK *pdef;
	/* f21 59 */ float r;
}

/* 0012b768 00000488 */ void SetDeform5(/* 0x6720(sp) */ int type, /* f21 59 */ float rate, /* 0x6724(sp) */ u_char alp) {
	/* sdata 356488 */ static float r;
	/* sdata 35648c */ static float add;
	/* s1 17 */ int i;
	/* s2 18 */ int j;
	/* s7 23 */ int pnumw;
	/* s4 20 */ int vnumw;
	/* 0x6728(sp) */ int wix;
	/* s0 16 */ int pnumh;
	/* 0x672c(sp) */ int wiy;
	/* f21 59 */ float wfw;
	/* f20 58 */ float wfh;
	/* f21 59 */ float f;
	/* f23 61 */ float lw;
	/* f25 63 */ float fw;
	/* f24 62 */ float lm;
	/* f22 60 */ float fx;
	/* f20 58 */ float fy;
	/* f23 61 */ float fz;
	/* 0x0(sp) */ SCRDEF scrdef[25][33];
	/* v0 2 */ SCRDEF *pscr;
	/* f0 38 */ float xx;
	/* f2 40 */ float yy;
	/* s0 16 */ DEFWORK *pdef;
	/* f21 59 */ float r;
}

/* 0012bbf0 00000498 */ void SetDeform6(/* 0x6720(sp) */ int type, /* f20 58 */ float rate, /* 0x6724(sp) */ u_char alp) {
	/* sdata 356490 */ static float r;
	/* sdata 356494 */ static float add;
	/* s2 18 */ int i;
	/* s3 19 */ int j;
	/* s5 21 */ int vnumw;
	/* s7 23 */ int wix;
	/* fp 30 */ int wiy;
	/* f21 59 */ float wfw;
	/* f20 58 */ float wfh;
	/* f21 59 */ float f;
	/* f22 60 */ float lw;
	/* f25 63 */ float fw;
	/* f24 62 */ float lm;
	/* f22 60 */ float fx;
	/* f20 58 */ float fy;
	/* f23 61 */ float fz;
	/* f2 40 */ float yoff;
	/* 0x0(sp) */ SCRDEF scrdef[25][33];
	/* s1 17 */ SCRDEF *pscr;
	/* s0 16 */ DEFWORK *pdef;
	/* f21 59 */ float r;
}

/* 0012c088 00000128 */ void SubContrast2(/* t5 13 */ u_char col, /* t6 14 */ u_char alp) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012c1b0 00000048 */ void SetContrast2(/* s0 16 */ EFFECT_CONT *ec) {}

/* 0012c1f8 00000158 */ void SubContrast3(/* t4 12 */ u_char col, /* t5 13 */ u_char alp) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012c350 00000048 */ void SetContrast3(/* s0 16 */ EFFECT_CONT *ec) {}

/* 0012c398 000001f4 */ void SubNega(/* s0 16 */ u_char r, /* s1 17 */ u_char g, /* s3 19 */ u_char b, /* s4 20 */ u_char alp, /* s2 18 */ u_char alp2) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012c590 000001b8 */ void SetNega(/* s0 16 */ EFFECT_CONT *ec) {
	/* s3 19 */ u_char col;
	/* s2 18 */ u_char alp;
	/* s1 17 */ u_char alp2;
}

/* 0012c748 00000034 */ void* CallNega2(/* a0 4 */ int in, /* a1 5 */ int keep, /* a2 6 */ int out) {
	/* sdata 356498 */ static u_char alp;
}

/* 0012c780 00000024 */ void* CallNega(/* a0 4 */ int time) {}

/* 0012c7a8 000002b4 */ void SetOverRap(/* s0 16 */ EFFECT_CONT *ec) {
	/* sdata 35649c */ static float cx;
	/* sdata 3564a0 */ static float cy;
	/* sdata 3564a4 */ static float cz;
	/* sdata 3564a8 */ static float alp;
	/* f4 42 */ float x;
	/* f2 40 */ float y;
	/* f3 41 */ float z;
	/* f0 38 */ float fn;
	/* v1 3 */ int fl;
	/* v1 3 */ int ret;
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012ca60 00000228 */ void SetForcusDepth(/* 0xe0(sp) */ EFFECT_CONT *ec) {
	/* s5 21 */ int i;
	/* 0x0(sp) */ int zi[2];
	/* 0x10(sp) */ float bai[2];
	/* 0x20(sp) */ sceVu0FMATRIX wlm;
	/* 0x60(sp) */ sceVu0FMATRIX slm;
	/* 0xa0(sp) */ sceVu0FVECTOR vt;
	/* 0xb0(sp) */ sceVu0FVECTOR vtw;
	/* 0xc0(sp) */ sceVu0FVECTOR vtww;
	/* 0xd0(sp) */ sceVu0IVECTOR ivec;
}

/* 0012cc88 0000007c */ void SetForcusDepth2(/* s0 16 */ EFFECT_CONT *ec) {
	/* 0x0(sp) */ int zi[4];
	/* 0x10(sp) */ sceVu0FMATRIX wlm;
	/* 0x50(sp) */ sceVu0FMATRIX slm;
	/* 0x90(sp) */ sceVu0FVECTOR vt;
	/* 0xa0(sp) */ sceVu0FVECTOR vtw;
	/* 0xb0(sp) */ sceVu0FVECTOR vtww;
	/* 0xc0(sp) */ float bai[4];
	/* sdata 3564b8 */ static float ff;
	/* 0xd0(sp) */ sceVu0IVECTOR ivec;
}

/* 0012cd08 00000150 */ void MakeRDither3() {
	/* 0x0(sp) */ u_char pat[16384];
	/* 0x4000(sp) */ u_int pal[256];
	/* a3 7 */ int i;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* bss 36a380 */ static sceGsLoadImage gs_limage1;
	/* bss 36a3e0 */ static sceGsLoadImage gs_limage2;
}

/* 0012ce58 00000900 */ void SubDither3(/* s0 16 */ int type, /* f27 65 */ float alp, /* f28 66 */ float spd, /* 0x4530(sp) */ u_char alpmx, /* 0x4534(sp) */ u_char colmx) {
	/* data 280a30 */ static sceVu0FVECTOR old_cam_i;
	/* sdata 3564bc */ static float cnf;
	/* sdata 3564c0 */ static float cx;
	/* sdata 3564c4 */ static float cy;
	/* sdata 3564c8 */ static int fl;
	/* 0x4520(sp) */ float tx;
	/* 0x4524(sp) */ float ty;
	/* 0x4528(sp) */ float otx;
	/* 0x452c(sp) */ float oty;
	/* f1 39 */ float mvx;
	/* f4 42 */ float mvy;
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ SPRITE_DATA sd2;
	/* 0xc0(sp) */ DRAW_ENV de;
	/* 0xf0(sp) */ DRAW_ENV de2;
	/* 0x120(sp) */ u_char pat[16384];
	/* 0x4120(sp) */ u_int pal[256];
	/* a3 7 */ int i;
	/* sdata 3564cc */ static u_char oalp;
	/* sdata 3564cd */ static u_char ocol;
	/* sdata 3564d0 */ static int numf;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* bss 36a440 */ static sceGsLoadImage gs_limage1;
	/* bss 36a4a0 */ static sceGsLoadImage gs_limage2;
}

/* 0012d758 00000280 */ void SetDither3(/* s0 16 */ EFFECT_CONT *ec) {
	/* s2 18 */ u_char alpmx;
	/* s3 19 */ u_char colmx;
	/* s1 17 */ int type;
	/* f21 59 */ float spd;
	/* f20 58 */ float alp;
}

/* 0012d9d8 0000054c */ void SubDither4(/* f27 65 */ float alp, /* f28 66 */ float spd) {
	/* data 280a40 */ static sceVu0FVECTOR old_cam_i;
	/* sdata 3564d4 */ static float cnf;
	/* sdata 3564d8 */ static float cx;
	/* sdata 3564dc */ static float cy;
	/* sdata 3564e0 */ static int fl;
	/* 0x90(sp) */ float tx;
	/* 0x94(sp) */ float ty;
	/* 0x98(sp) */ float otx;
	/* 0x9c(sp) */ float oty;
	/* f1 39 */ float mvx;
	/* f5 43 */ float mvy;
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012df28 00000048 */ void SetDither4(/* s0 16 */ EFFECT_CONT *ec) {}

/* 0012df70 000000f0 */ void SubFadeFrame(/* t8 24 */ u_char alp, /* a1 5 */ u_int pri) {
	/* 0x0(sp) */ SPRITE_DATA sd;
	/* 0x60(sp) */ DRAW_ENV de;
}

/* 0012e060 00000048 */ void SetFadeFrame(/* s0 16 */ EFFECT_CONT *ec) {}
/* 0012e0a8 00000020 */ void ChangeMAGATOKI2(/* a0 4 */ int sw) {}

/* 0012e0c8 00000198 */ void SetMAGATOKI2() {
	/* s0 16 */ EFFECT_CONT *ecm;
	/* sdata 3564e4 */ static u_char alpr;
}

/* 0012e260 000007e4 */ void SetMAGATOKI(/* s0 16 */ EFFECT_CONT *ec) {
	/* sbss 3578e4 */ static int cnt1;
	/* s2 18 */ u_char *flag;
	/* f18 56 */ float per1;
	/* f28 66 */ float mbalp;
	/* f27 65 */ float mbscl;
	/* f26 64 */ float mbrot;
	/* f25 63 */ float mccol;
	/* f23 61 */ float mcalp;
	/* f24 62 */ float mdalp;
	/* f22 60 */ float mdspd;
	/* f21 59 */ float mdfrt;
	/* f20 58 */ float mdfal;
	/* a2 6 */ int sec1_1;
	/* s1 17 */ int sec1_2;
	/* 0x0(sp) */ float balp[3];
	/* 0x10(sp) */ float bscl[3];
	/* 0x20(sp) */ float brot[3];
	/* 0x30(sp) */ float ccol[3];
	/* 0x40(sp) */ float calp[3];
	/* 0x50(sp) */ float dalp[3];
	/* 0x60(sp) */ float dspd[3];
	/* 0x70(sp) */ float dfrt[3];
	/* 0x80(sp) */ float dfal[3];
}

/* 0012ea48 00000ce8 */ u_char SubNowLoading(/* a0 4 */ int fl, /* 0x3440(sp) */ int num, /* f12 50 */ float sclx, /* f28 66 */ float scly, /* f27 65 */ float bx, /* f22 60 */ float by, /* f16 54 */ float spd, /* f29 67 */ float rate, /* f21 59 */ float trate) {
	/* 0x0(sp) */ u_char alpha1[289];
	/* 0x130(sp) */ u_char alpha2[289];
	/* s1 17 */ int i;
	/* t8 24 */ int j;
	/* s2 18 */ int k;
	/* s5 21 */ int m;
	/* s4 20 */ int bak;
	/* s4 20 */ int vnumw;
	/* v0 2 */ int pnumh;
	/* fp 30 */ int vnumh;
	/* s7 23 */ int sy2;
	/* 0x260(sp) */ int tx[289];
	/* 0x6f0(sp) */ int ty[289];
	/* 0xb80(sp) */ u_int clip[289];
	/* 0x3444(sp) */ u_int clpz2;
	/* f0 38 */ float f1;
	/* f1 39 */ float f2;
	/* f8 46 */ float f3;
	/* f9 47 */ float f4;
	/* f30 68 */ float bxf;
	/* f31 69 */ float byf;
	/* f26 64 */ float pr11;
	/* f25 63 */ float pr12;
	/* f24 62 */ float pr21;
	/* f23 61 */ float pr22;
	/* 0x1010(sp) */ sceVu0FVECTOR vt[289];
	/* 0x2220(sp) */ sceVu0IVECTOR vtiw[289];
	/* 0x3430(sp) */ sceVu0IVECTOR ivec;
	/* v0 2 */ u_long tex0;
	/* s0 16 */ EFFPOS *pefp;
	/* s2 18 */ EFFINFO2 *pefi;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 0012f730 0000000c */ void InitNowLoading() {}
/* 0012f740 00000008 */ void SetNowLoadingON() {}
/* 0012f748 0000000c */ void SetNowLoadingOFF() {}

/* 0012f758 00000418 */ int SetNowLoading() {
	/* 0x0(sp) */ SPRT_DAT test[2];
	/* 0x40(sp) */ DISP_SPRT ds;
	/* f20 58 */ float out;
	/* f27 65 */ float alp;
	/* data 280a50 */ static float bx[3];
	/* data 280a60 */ static float by[3];
	/* sdata 3564e8 */ static int cnt;
}

/* 0012fb70 000009c4 */ void SubGameOver(/* 0x11b60(sp) */ u_char alp, /* f20 58 */ float rate) {
	/* bss 36a500 */ static float rrr[1813];
	/* bss 36c158 */ static float lll[1813];
	/* bss 36ddb0 */ static float mm1[1813];
	/* bss 36fa08 */ static float mm2[1813];
	/* bss 371660 */ static float sss[1813];
	/* bss 3732b8 */ static float ccc[1813];
	/* sdata 3564ec */ static int fl;
	/* sdata 3564f0 */ static float r;
	/* s6 22 */ int i;
	/* s2 18 */ int k;
	/* 0x11b64(sp) */ int m;
	/* 0x11b68(sp) */ int bak;
	/* s2 18 */ int pnumw;
	/* s3 19 */ int vnumw;
	/* s0 16 */ int wix;
	/* v0 2 */ int pnumh;
	/* s7 23 */ int vnumh;
	/* s2 18 */ int wiy;
	/* s1 17 */ int sx2;
	/* s0 16 */ int sy2;
	/* f24 62 */ float sclx;
	/* f23 61 */ float scly;
	/* f1 39 */ float add;
	/* f1 39 */ float f1;
	/* f0 38 */ float f2;
	/* f14 52 */ float f3;
	/* f13 51 */ float f4;
	/* f20 58 */ float wfw;
	/* f21 59 */ float wfh;
	/* f25 63 */ float fw;
	/* f22 60 */ float lm;
	/* f27 65 */ float cntw;
	/* f26 64 */ float cnth;
	/* f20 58 */ float fx;
	/* f0 38 */ float fy;
	/* 0x0(sp) */ float tx[1813];
	/* 0x1c60(sp) */ float ty[1813];
	/* v0 2 */ u_long tex0;
	/* 0x38c0(sp) */ sceVu0FVECTOR vt[1813];
	/* 0xaa10(sp) */ sceVu0IVECTOR vtiw[1813];
}

/* 00130538 00000048 */ void InitGameOver() {}
/* 00130580 00000008 */ void SetGameOverON() {}

/* 00130588 000006e4 */ int SetGameOver() {
	/* 0x0(sp) */ SPRT_DAT gameover_tbl[2];
	/* 0x40(sp) */ DISP_SPRT ds;
	/* s0 16 */ int i;
	/* sdata 3564f8 */ static int cnt;
	/* s0 16 */ int sec5;
	/* t7 15 */ int sec0;
	/* v0 2 */ int sec1;
	/* t6 14 */ int sec2;
	/* t4 12 */ int sec3;
	/* t5 13 */ int sec4;
	/* 0xd0(sp) */ int blr;
	/* s7 23 */ int alp0;
	/* fp 30 */ int alp1;
	/* s6 22 */ int alp2;
	/* s1 17 */ int alp3;
	/* s5 21 */ int num;
	/* f21 59 */ float scl;
}

/* 00130c70 00000018 */ void ChangeMonochrome(/* a0 4 */ int sw) {}
/* 00130c88 0000002c */ void InitExFade1(/* a0 4 */ int fl, /* a1 5 */ int time1) {}

/* 00130cb8 00000218 */ int SetExFade1() {
	/* sbss 3578e8 */ static int cnt1;
	/* sbss 3578ec */ static int cnt2;
	/* t1 9 */ int sec2_1;
	/* 0x0(sp) */ u_char dsp[2];
	/* 0x10(sp) */ u_char dal[2];
	/* 0x20(sp) */ u_char nal[2];
	/* a3 7 */ u_char dalp;
	/* s0 16 */ u_char dspd;
	/* sbss 3578f0 */ static u_char nalp;
	/* f3 41 */ float per2;
}

/* 00130ed0 0000001c */ void InitExFade2(/* a0 4 */ int fl, /* a1 5 */ int time1, /* a2 6 */ int time2, /* a3 7 */ int time3) {}

/* 00130ef0 0000045c */ int SetExFade2() {
	/* sbss 3578f4 */ static int cnt1;
	/* t0 8 */ int sec1_1;
	/* a3 7 */ int sec1_2;
	/* a2 6 */ int sec1_3;
	/* 0x0(sp) */ u_char bal[3];
	/* 0x10(sp) */ u_char dfr[2];
	/* 0x20(sp) */ u_char dal[2];
	/* 0x30(sp) */ u_char ccl[2];
	/* 0x40(sp) */ u_char cal[2];
	/* sbss 3578f8 */ static u_char balp;
	/* s2 18 */ u_char dfrt;
	/* s0 16 */ u_char dalp;
	/* s3 19 */ u_char ccol;
	/* s1 17 */ u_char calp;
	/* f5 43 */ float per1;
}

/* 00131350 00000014 */ void InitScreenSaver() {}

/* 00131368 000004cc */ void SetScreenSaver() {
	/* s1 17 */ int i;
	/* t3 11 */ int r3;
	/* a0 4 */ int l3;
	/* v0 2 */ u_int pad_all;
	/* s0 16 */ ONE_HAND *ohp;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT hand_dat;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 00131838 00000238 */ void SetScreenEffect() {
	/* 0x0(sp) */ SBTSET screen_effect[7];
	/* v1 3 */ int n;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_obj.c
// *****************************************************************************

/* 00131a70 00000090 */ void InitEffectObj() {
	/* v1 3 */ int i;
}

/* 00131b00 00000050 */ void InitEffectObjEF() {}
/* 00131b50 00000008 */ void SetPartsBlurSW(/* a0 4 */ int sw) {}
/* 00131b58 00000008 */ void SetPartsBlur1Sub(/* a0 4 */ u_char alp) {}
/* 00131b60 00000008 */ void SetPartsBlur1(/* a0 4 */ u_char alp) {}
/* 00131b68 00000008 */ void SetPartsBlur2() {}
/* 00131b70 00000008 */ void RunPartsBlur() {}
/* 00131b78 00000008 */ void CallPartsBlur2(/* a0 4 */ int no, /* a1 5 */ int in, /* a2 6 */ int keep, /* a3 7 */ int out, /* t0 8 */ u_char alp) {}
/* 00131b80 00000008 */ void CallPartsBlur4(/* a0 4 */ int no, /* a1 5 */ float *vol) {}
/* 00131b88 00000008 */ void ResetPartsBlur() {}
/* 00131b90 000000b0 */ void* CallPartsDeform2(/* s3 19 */ int type, /* f20 58 */ float scale, /* s4 20 */ void *pos, /* s5 21 */ u_int in, /* s1 17 */ u_int keep, /* s2 18 */ u_int out) {}
/* 00131c40 000000bc */ void* CallPartsDeform3(/* s4 20 */ int type, /* f20 58 */ float scale, /* s5 21 */ void *pos, /* s6 22 */ u_int in, /* s1 17 */ u_int keep, /* s2 18 */ u_int out, /* s3 19 */ int alp) {}
/* 00131d00 000000bc */ void* CallPartsDeform3_2(/* s4 20 */ int type, /* f12 50 */ float sclx, /* f20 58 */ float scly, /* s5 21 */ void *pos, /* s6 22 */ u_int in, /* s1 17 */ u_int keep, /* s2 18 */ u_int out, /* s3 19 */ int alp) {}
/* 00131dc0 00000098 */ void* CallPartsDeform4(/* s2 18 */ int type, /* f20 58 */ float scale, /* s3 19 */ void *pos, /* s1 17 */ float *vol) {}
/* 00131e58 00000098 */ void* CallPartsDeform5(/* s2 18 */ int type, /* f12 50 */ float sclx, /* f20 58 */ float scly, /* s3 19 */ void *pos, /* s1 17 */ float *vol) {}

/* 00131ef0 00000394 */ void SetPartsDeform(/* s0 16 */ EFFECT_CONT *ec) {
	/* t1 9 */ int ef;
	/* a1 5 */ int n0;
	/* f15 53 */ float sp;
	/* f16 54 */ float rt;
	/* f14 52 */ float vol;
	/* f17 55 */ float tr;
}

/* 00132288 00000014 */ void SetVURand(/* f12 50 */ float x) {}

/* 001322a0 0000006c */ int CalcPartsDeformXYZ(/* a0 4 */ int *vi, /* a1 5 */ float *vf) {
	/* v0 2 */ int ret;
}

/* 00132310 000003f8 */ void MakePartsDeformPacket(/* 0x16f0(sp) */ int pnumw, /* s5 21 */ int pnumh, /* s2 18 */ sceVu0FVECTOR *vt, /* a3 7 */ float *wlm[4], /* fp 30 */ sceVu0FVECTOR *stq, /* s7 23 */ u_char *use_alpha, /* f20 58 */ float aprate, /* 0x16f8(sp) */ u_long tex0) {
	/* s3 19 */ int i;
	/* t3 11 */ int j;
	/* v1 3 */ int k;
	/* a0 4 */ int l;
	/* s5 21 */ int m;
	/* s6 22 */ int bak;
	/* t1 9 */ u_long *plong;
	/* t8 24 */ Q_WORDDATA *ppbuf;
	/* 0x0(sp) */ int clip[289];
	/* 0x490(sp) */ sceVu0IVECTOR vtiw[289];
	/* 0x16a0(sp) */ sceVu0IVECTOR colvec;
	/* 0x16b0(sp) */ sceVu0FMATRIX slm;
}

/* 00132708 0000139c */ u_char SubPartsDeform1(/* 0x2778(sp) */ EFFECT_CONT *ec, /* s0 16 */ u_char num, /* 0x277c(sp) */ int page, /* 0x2780(sp) */ int sbj, /* f12 50 */ float sclx, /* f13 51 */ float scly, /* f21 59 */ float vol, /* t0 8 */ int fl, /* f31 69 */ float spd, /* 0x2784(sp) */ float rate, /* f24 62 */ float trate) {
	/* 0x0(sp) */ u_char alpha1[289];
	/* 0x130(sp) */ u_char alpha2[289];
	/* 0x2788(sp) */ EFFINFO2 *pefi;
	/* 0x278c(sp) */ u_char ret_num;
	/* s0 16 */ int i;
	/* a0 4 */ int j;
	/* a1 5 */ int k;
	/* 0x2790(sp) */ int n;
	/* s2 18 */ int vnumw;
	/* v1 3 */ int wix;
	/* a0 4 */ int wiy;
	/* f2 40 */ float l;
	/* f20 58 */ float lw;
	/* f20 58 */ float fw;
	/* f29 67 */ float cntw;
	/* f30 68 */ float cnth;
	/* f20 58 */ float rad;
	/* f21 59 */ float ss;
	/* f0 38 */ float cc;
	/* f0 38 */ float fx;
	/* f1 39 */ float fy;
	/* f12 50 */ float fz;
	/* 0x2770(sp) */ float rot_x;
	/* 0x2774(sp) */ float rot_y;
	/* f25 63 */ float f1;
	/* f26 64 */ float f2;
	/* f20 58 */ float f3;
	/* f21 59 */ float f4;
	/* f2 40 */ float xx;
	/* f1 39 */ float yy;
	/* v0 2 */ u_int clpx2;
	/* v0 2 */ u_int clpy2;
	/* 0x2794(sp) */ u_int clpz2;
	/* 0x260(sp) */ sceVu0FVECTOR stqparam[3];
	/* s5 21 */ u_long tex0;
	/* 0x290(sp) */ sceVu0FVECTOR stq[289];
	/* 0x14a0(sp) */ sceVu0FVECTOR vt[289];
	/* 0x26b0(sp) */ sceVu0IVECTOR ivec;
	/* 0x26c0(sp) */ sceVu0FVECTOR vpos;
	/* 0x26d0(sp) */ sceVu0FVECTOR pos;
	/* 0x26e0(sp) */ sceVu0FVECTOR fzero;
	/* 0x26f0(sp) */ sceVu0FMATRIX slm;
	/* 0x2730(sp) */ sceVu0FMATRIX wlm;
	/* 0x2798(sp) */ float add;
	/* f23 61 */ float wfw;
	/* f22 60 */ float wfh;
	/* f26 64 */ float ml;
	/* 0x279c(sp) */ float aprate;
	/* f24 62 */ float r;
	/* sdata 356568 */ static float r2;
	/* sdata 35656c */ static float renz;
	/* data 280a70 */ static int passflg[10];
	/* data 280a98 */ static float passcnt[10];
	/* v0 2 */ float *v1;
	/* f20 58 */ float vtrate;
	/* f21 59 */ float vtrate;
	/* f25 63 */ float rr;
	/* f31 69 */ float rr;
	/* f31 69 */ float rr;
}

/* 00133aa8 000014d4 */ u_char SubPartsDeform2(/* 0x2648(sp) */ EFFECT_CONT *ec, /* 0x264c(sp) */ u_char num, /* a2 6 */ int page, /* 0x2650(sp) */ int sbj, /* f12 50 */ float sclx, /* f13 51 */ float scly, /* 0x2654(sp) */ float vol, /* t0 8 */ int fl, /* f24 62 */ float spd, /* f30 68 */ float rate, /* f17 55 */ float trate) {
	/* 0x0(sp) */ u_char alpha[289];
	/* s1 17 */ EFFPOS *pefp;
	/* s4 20 */ EFFINFO2 *pefi;
	/* bss 379d40 */ static EFFINFO2 pefi_once[3];
	/* 0x2658(sp) */ u_char ret_num;
	/* s0 16 */ int i;
	/* a1 5 */ int j;
	/* a2 6 */ int k;
	/* a0 4 */ int n;
	/* s6 22 */ int vnumw;
	/* s2 18 */ int wix;
	/* a0 4 */ int wiy;
	/* f20 58 */ float l;
	/* f1 39 */ float lw;
	/* f20 58 */ float cntw;
	/* f23 61 */ float cnth;
	/* f0 38 */ float fx;
	/* f1 39 */ float fy;
	/* f12 50 */ float fz;
	/* 0x2640(sp) */ float rot_x;
	/* 0x2644(sp) */ float rot_y;
	/* f29 67 */ float pr12;
	/* f28 66 */ float pr21;
	/* f27 65 */ float pr22;
	/* f23 61 */ float comp;
	/* f0 38 */ float wfw;
	/* f1 39 */ float wfh;
	/* f22 60 */ float add;
	/* f31 69 */ float ml;
	/* f25 63 */ float aprate;
	/* f0 38 */ float xx;
	/* f1 39 */ float yy;
	/* v0 2 */ u_int clpx2;
	/* v0 2 */ u_int clpy2;
	/* 0x265c(sp) */ u_int clpz2;
	/* 0x130(sp) */ sceVu0FVECTOR stqparam[3];
	/* 0x160(sp) */ sceVu0FVECTOR stq[289];
	/* 0x1370(sp) */ sceVu0FVECTOR vt[289];
	/* 0x2580(sp) */ sceVu0IVECTOR ivec;
	/* 0x2590(sp) */ sceVu0FVECTOR vpos;
	/* 0x25a0(sp) */ sceVu0FVECTOR pos;
	/* 0x25b0(sp) */ sceVu0FVECTOR fzero;
	/* 0x25c0(sp) */ sceVu0FMATRIX slm;
	/* 0x2600(sp) */ sceVu0FMATRIX wlm;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f2 40 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* v0 2 */ float *v1;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f21 59 */ float vtrate;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 00134f80 00000020 */ int GetCornHitCheck(/* a0 4 */ float *bpos, /* f12 50 */ float power) {
	/* 0x0(sp) */ float rrate;
	/* 0x4(sp) */ float lrate;
}

/* 00134fa0 00000264 */ int GetCornHitCheck2(/* s3 19 */ float *bpos, /* f22 60 */ float power, /* s5 21 */ float *rrate, /* s4 20 */ float *lrate) {
	/* 0x0(sp) */ sceVu0FMATRIX wlm1;
	/* 0x40(sp) */ sceVu0FMATRIX wlm2;
	/* 0x80(sp) */ sceVu0FVECTOR wpos;
	/* f20 58 */ float rot_x;
	/* f21 59 */ float rot_y;
	/* f4 42 */ float lp;
	/* f20 58 */ float lc;
	/* f12 50 */ float ang;
}

/* 00135208 0000094c */ void SetRenzFlare(/* s4 20 */ EFFECT_CONT *ec) {
	/* sdata 356570 */ static float f1bk;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR tpos;
	/* 0x90(sp) */ sceVu0FVECTOR pos1;
	/* 0xa0(sp) */ sceVu0FVECTOR vpos;
	/* 0xb0(sp) */ sceVu0FVECTOR trot;
	/* 0xc0(sp) */ sceVu0FVECTOR wppos;
	/* f2 40 */ float t1rot_x;
	/* f20 58 */ float t2rot_x;
	/* f4 42 */ float t1rot_y;
	/* f21 59 */ float t2rot_y;
	/* 0x170(sp) */ float f1;
	/* 0x174(sp) */ float f2;
	/* f23 61 */ float rx;
	/* f22 60 */ float ry;
	/* f21 59 */ float mx;
	/* f20 58 */ float my;
	/* f24 62 */ float ang;
	/* s3 19 */ int i;
	/* v0 2 */ int ok;
	/* s1 17 */ int tp;
	/* v1 3 */ u_int ui;
	/* 0xd0(sp) */ EFRENZ efrenz[9];
	/* bss 3824d0 */ static sceGsStoreImage gs_simage1;
	/* 0x160(sp) */ Q_WORDDATA q;
	/* v0 2 */ int n1;
	/* s1 17 */ int n2;
	/* f0 38 */ float r;
}

/* 00135b58 00000430 */ void SetStarRay(/* a0 4 */ float *bpos, /* s7 23 */ int tp, /* f26 64 */ float sc, /* s0 16 */ int num, /* f29 67 */ float aang) {
	/* t8 24 */ int i;
	/* 0x0(sp) */ int x[4];
	/* 0x10(sp) */ int y[4];
	/* s1 17 */ u_int z;
	/* f22 60 */ float f;
	/* f27 65 */ float div;
	/* f21 59 */ float ss;
	/* f3 41 */ float cc;
	/* f28 66 */ float ang;
	/* 0x20(sp) */ float pos2[4][2];
	/* 0x40(sp) */ float pos[4][3];
	/* s2 18 */ u_char rr;
	/* s3 19 */ u_char gg;
	/* s4 20 */ u_char bb;
	/* f24 62 */ float bx;
	/* f23 61 */ float by;
}

/* 00135f88 00000434 */ void SetNegaCircle(/* s5 21 */ EFFECT_CONT *ec) {
	/* s2 18 */ int i;
	/* s4 20 */ int n;
	/* t1 9 */ int bak;
	/* 0x4b0(sp) */ int r;
	/* 0x4b4(sp) */ int g;
	/* 0x4b8(sp) */ int b;
	/* fp 30 */ u_int alp;
	/* s7 23 */ u_int z;
	/* f21 59 */ float f;
	/* f29 67 */ float add;
	/* f24 62 */ float bx;
	/* f23 61 */ float by;
	/* f22 60 */ float rad;
	/* 0x0(sp) */ sceVu0FVECTOR ncf[37];
	/* 0x250(sp) */ sceVu0IVECTOR nci[37];
	/* 0x4a0(sp) */ sceVu0IVECTOR bipos;
	/* v0 2 */ float *v0;
}

/* 001363c0 00000014 */ void _SetPartsDeformSTQRegs(/* a0 4 */ sceVu0FVECTOR *params) {}
/* 001363d8 00000054 */ void _CalcParstDeformSTQ(/* a0 4 */ float *stq, /* a1 5 */ float *vt) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_oth.c
// *****************************************************************************

/* 00136430 000000c4 */ void InitEffectOth() {
	/* a0 4 */ int i;
}

/* 001364f8 00000058 */ void InitEffectOthEF() {
	/* t0 8 */ int i;
}

/* 00136550 00000044 */ int SearchEmptyRippleBuf() {
	/* v1 3 */ int i;
	/* a0 4 */ int fl;
}

/* 00136598 00000080 */ void* CallRipple(/* s1 17 */ void *pos, /* s2 18 */ void *rot, /* f12 50 */ float scale, /* s3 19 */ int num, /* s0 16 */ int time) {}

/* 00136618 000002a4 */ void SetRipple(/* s0 16 */ EFFECT_CONT *ec) {
	/* t0 8 */ int n;
	/* s1 17 */ int init;
	/* 0x0(sp) */ sceVu0FVECTOR vt;
	/* f0 38 */ float r;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v0;
	/* a1 5 */ float *v1;
}

/* 001368c0 00000730 */ void RunRipple2() {
	/* t4 12 */ int i;
	/* s2 18 */ int j;
	/* s3 19 */ int n;
	/* t7 15 */ int bak;
	/* 0x0(sp) */ u_int clip[48];
	/* fp 30 */ u_int clpy2;
	/* s5 21 */ u_int clpz2;
	/* f22 60 */ float add;
	/* f1 39 */ float q;
	/* 0xc0(sp) */ sceVu0IVECTOR vtiw[48][4];
	/* 0xcc0(sp) */ sceVu0FMATRIX wlm;
	/* 0xd00(sp) */ sceVu0FMATRIX slm;
	/* 0xd40(sp) */ sceVu0FVECTOR vtw[4];
}

/* 00136ff0 00000360 */ void SetEffSQTex(/* a0 4 */ int n, /* s4 20 */ float *v, /* s7 23 */ int tp, /* f12 50 */ float w, /* f13 51 */ float h, /* a3 7 */ u_char r, /* t0 8 */ u_char g, /* t1 9 */ u_char b, /* fp 30 */ u_char a) {
	/* s5 21 */ u_char rr;
	/* s6 22 */ u_char gg;
	/* s3 19 */ u_char bb;
	/* t3 11 */ int i;
	/* s0 16 */ int tw;
	/* s1 17 */ int th;
	/* 0x0(sp) */ float xx[2];
	/* 0x10(sp) */ float yy[2];
	/* s2 18 */ u_long tx0;
}

/* 00137350 00000398 */ void SetEffSQITex(/* t5 13 */ int n, /* s7 23 */ int *v, /* s3 19 */ int tp, /* f12 50 */ float w, /* f13 51 */ float h, /* t4 12 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* 0x20(sp) */ u_char a) {
	/* fp 30 */ u_char rr;
	/* 0x24(sp) */ u_char gg;
	/* s6 22 */ u_char bb;
	/* t3 11 */ int i;
	/* s0 16 */ int tw;
	/* s1 17 */ int th;
	/* 0x0(sp) */ int xx[2];
	/* 0x10(sp) */ int yy[2];
	/* s5 21 */ u_long tx0;
	/* s3 19 */ int tp1;
	/* s2 18 */ int tp2;
	/* s4 20 */ int tp3;
}

/* 001376e8 00000030 */ void* CallFire(/* a0 4 */ void *pos, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* f12 50 */ float scale) {
	/* sdata 35657c */ static float rate;
}

/* 00137718 000000c0 */ void* CallFire2(/* s7 23 */ void *pos, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* f12 50 */ float scl, /* t0 8 */ u_char r2, /* t1 9 */ u_char g2, /* t2 10 */ u_char b2, /* f20 58 */ float scl2) {}
/* 001377d8 000000d0 */ void* CallFire3(/* fp 30 */ void *pos, /* a1 5 */ int type, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* f12 50 */ float scl, /* t1 9 */ u_char r2, /* t2 10 */ u_char g2, /* t3 11 */ u_char b2, /* f20 58 */ float scl2) {}

/* 001378a8 00000808 */ void SubFire1(/* s4 20 */ EFFECT_CONT *ec) {
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0IVECTOR ipos;
	/* 0x90(sp) */ sceVu0IVECTOR ivec[4];
	/* 0xd0(sp) */ sceVu0FVECTOR vpos;
	/* 0xe0(sp) */ sceVu0FVECTOR vtw[4];
	/* 0x120(sp) */ sceVu0FVECTOR wpos[4];
	/* sdata 356580 */ static int pat;
	/* sdata 356584 */ static int rnbk;
	/* sdata 356588 */ static float scw;
	/* sdata 35658c */ static float sch;
	/* 0x198(sp) */ u_long tx0;
	/* f20 58 */ float msc;
	/* f24 62 */ float msch;
	/* f2 40 */ float f;
	/* 0x190(sp) */ float rot_x;
	/* 0x194(sp) */ float rot_y;
	/* s2 18 */ int i;
	/* v1 3 */ int n;
	/* s1 17 */ int rn;
	/* 0x1a0(sp) */ int tw;
	/* 0x1a4(sp) */ int th;
	/* s3 19 */ int w;
	/* fp 30 */ int wpat;
	/* 0x1a8(sp) */ u_char mr;
	/* 0x1ac(sp) */ u_char mg;
	/* 0x1b0(sp) */ u_char mb;
	/* 0x1b4(sp) */ u_char mrh;
	/* 0x1b8(sp) */ u_char mgh;
	/* 0x1bc(sp) */ u_char mbh;
	/* f23 61 */ float arate;
	/* f22 60 */ float wscw;
	/* f21 59 */ float wsch;
	/* 0x160(sp) */ DRAW_ENV de;
	/* a1 5 */ float *v1;
	/* f0 38 */ float r;
}

/* 001380b0 00000028 */ void SetFire(/* a0 4 */ EFFECT_CONT *ec) {
	/* sdata 356590 */ static float alp;
}

/* 001380d8 00000008 */ void SetFire2(/* a0 4 */ EFFECT_CONT *ec) {}
/* 001380e0 00000064 */ void SetHalo(/* s0 16 */ EFFECT_CONT *ec) {}

/* 00138148 00000390 */ void SubHalo(/* a0 4 */ float *p, /* 0x168(sp) */ int type, /* 0x16c(sp) */ int textp, /* a3 7 */ u_int z, /* 0x170(sp) */ u_char r, /* 0x174(sp) */ u_char g, /* fp 30 */ u_char b, /* s7 23 */ u_char alp, /* f20 58 */ float sc) {
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0IVECTOR ipos;
	/* 0x90(sp) */ sceVu0IVECTOR ivec[4];
	/* 0xd0(sp) */ sceVu0FVECTOR vpos;
	/* 0xe0(sp) */ sceVu0FVECTOR vtw[4];
	/* 0x120(sp) */ sceVu0FVECTOR wpos[4];
	/* sdata 356594 */ static int rnbk;
	/* sdata 356598 */ static float scw;
	/* sdata 35659c */ static float sch;
	/* f20 58 */ float f;
	/* 0x160(sp) */ float rot_x;
	/* 0x164(sp) */ float rot_y;
	/* s5 21 */ int i;
	/* s3 19 */ int rn;
	/* s3 19 */ int w;
	/* v0 2 */ int n;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 001384d8 00000100 */ void InitHeatHaze() {
	/* a1 5 */ int i;
}

/* 001385d8 00000580 */ int draw_distortion_particles(/* 0x60(sp) */ sceVu0FMATRIX *local_screen, /* fp 30 */ sceVu0FMATRIX *local_clip, /* a2 6 */ int fr, /* s3 19 */ int t_particles, /* s0 16 */ void *particles, /* s7 23 */ int size_of_particle, /* f21 59 */ float psize, /* f20 58 */ float distortion_amount, /* s1 17 */ int type) {
	/* t0 8 */ int i;
	/* t2 10 */ int n;
	/* a3 7 */ int num;
	/* t6 14 */ u_long *d;
	/* s5 21 */ u_long areg;
	/* 0x68(sp) */ u_long treg;
	/* f1 39 */ float y_correction;
	/* f2 40 */ float rr;
	/* f3 41 */ float gg;
	/* f4 42 */ float bb;
	/* 0x0(sp) */ sceVu0FVECTOR warp_add;
	/* 0x10(sp) */ sceVu0FVECTOR screen_size;
	/* 0x20(sp) */ sceVu0FVECTOR particle_size;
	/* s0 16 */ sceVu0FVECTOR *p;
	/* s4 20 */ int dtex;
	/* 0x30(sp) */ sceVu0FVECTOR ones;
	/* 0x40(sp) */ sceVu0FVECTOR st_add;
	/* 0x50(sp) */ sceVu0FVECTOR st_scale;
	/* v0 2 */ unsigned int clip_flags;
}

/* 00138b58 00000114 */ void add_particle(/* a0 4 */ int type, /* s2 18 */ HEAT_HAZE *hh, /* a2 6 */ float *pos, /* s0 16 */ float *vel, /* f22 60 */ float r, /* f23 61 */ float g, /* f24 62 */ float b, /* f20 58 */ float a) {
	/* f20 58 */ float oolife;
	/* s1 17 */ PARTICLE *p;
}

/* 00138c70 0000007c */ void update_particles(/* a0 4 */ PARTICLE *prt) {
	/* a1 5 */ int i;
}

/* 00138cf0 000000f4 */ void add_particle2(/* a0 4 */ int type, /* s2 18 */ HEAT_HAZE *hh, /* a2 6 */ float *pos, /* s1 17 */ float *vel, /* f21 59 */ float r, /* f22 60 */ float g, /* f23 61 */ float b, /* f24 62 */ float a) {
	/* s0 16 */ PARTICLE *p;
}

/* 00138de8 00000130 */ void update_particles2(/* a0 4 */ HEAT_HAZE *hh, /* f12 50 */ float lng, /* f13 51 */ float arate) {
	/* a3 7 */ int i;
	/* f13 51 */ float a;
	/* f6 44 */ float f;
	/* f7 45 */ float f2;
	/* f9 47 */ float center;
}

/* 00138f18 000000e0 */ void sceVu0RotCameraMatrix(/* s5 21 */ float *m[4], /* s4 20 */ float *p, /* s1 17 */ float *zd, /* s3 19 */ float *yd, /* s0 16 */ float *rot) {
	/* 0x0(sp) */ sceVu0FMATRIX work;
	/* 0x40(sp) */ sceVu0FVECTOR direction;
	/* 0x50(sp) */ sceVu0FVECTOR vertical;
	/* 0x60(sp) */ sceVu0FVECTOR position;
}

/* 00138ff8 000000cc */ void sceVu0ViewClipMatrix(/* s0 16 */ float *vc[4], /* f24 62 */ float scrw, /* f23 61 */ float scrh, /* f20 58 */ float scrz, /* f22 60 */ float zmin, /* f21 59 */ float zmax) {}

/* 001390c8 00000d64 */ void* ContHeatHaze(/* s2 18 */ void *addr, /* s4 20 */ int type, /* s3 19 */ float *pos, /* s1 17 */ float *pos2, /* 0x268(sp) */ int st, /* f26 64 */ float r, /* f27 65 */ float g, /* f28 66 */ float b, /* f29 67 */ float a, /* f22 60 */ float size, /* f25 63 */ float arate) {
	/* sbss 357904 */ static float pcnt1;
	/* sbss 357908 */ static float pcnt2;
	/* s5 21 */ int n1;
	/* s6 22 */ int n2;
	/* s0 16 */ int i;
	/* f2 40 */ float f;
	/* f13 51 */ float fw1;
	/* f24 62 */ float lng;
	/* f21 59 */ float escl;
	/* 0x0(sp) */ sceVu0FVECTOR wpos;
	/* 0x10(sp) */ sceVu0FVECTOR camera_p;
	/* 0x20(sp) */ sceVu0FVECTOR camera_zd;
	/* 0x30(sp) */ sceVu0FVECTOR camera_yd;
	/* 0x40(sp) */ sceVu0FVECTOR camera_rot;
	/* 0x50(sp) */ sceVu0FVECTOR obj_trans;
	/* 0x60(sp) */ sceVu0FVECTOR obj_rot;
	/* 0x70(sp) */ sceVu0FMATRIX local_clip;
	/* 0xb0(sp) */ sceVu0FMATRIX view_clip;
	/* 0xf0(sp) */ sceVu0FMATRIX local_world;
	/* 0x130(sp) */ sceVu0FMATRIX world_view;
	/* 0x170(sp) */ sceVu0FMATRIX view_screen;
	/* 0x1b0(sp) */ sceVu0FMATRIX local_screen;
	/* 0x1f0(sp) */ sceVu0FMATRIX work;
	/* 0x230(sp) */ sceVu0FVECTOR ppos;
	/* 0x240(sp) */ sceVu0FVECTOR pvel;
	/* 0x250(sp) */ sceVu0FVECTOR rot;
	/* f0 38 */ float fx;
	/* f1 39 */ float fy;
	/* f12 50 */ float fz;
	/* 0x260(sp) */ float rx;
	/* 0x264(sp) */ float rz;
	/* s3 19 */ float *v1;
	/* s3 19 */ float *v1;
	/* f12 50 */ float fx;
	/* f2 40 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* f20 58 */ float rate;
	/* s3 19 */ float *v1;
	/* f2 40 */ float r;
	/* f12 50 */ float fx;
	/* f2 40 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* f20 58 */ float rate;
	/* s3 19 */ float *v1;
	/* f2 40 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f12 50 */ float r;
	/* f0 38 */ float r;
	/* f12 50 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
}

/* 00139e30 00000130 */ void SetPartInit(/* s1 17 */ HEAT_HAZE *addr, /* a1 5 */ int type, /* s2 18 */ int lifetime) {
	/* s3 19 */ int j;
}

/* 00139f60 00000008 */ void* GetItemPartAddr(/* a0 4 */ void *addr, /* a1 5 */ int type, /* a2 6 */ int lifetime) {
	/* v0 2 */ void *ret;
}

/* 00139f68 000000a4 */ void* GetEnePartAddr(/* v0 2 */ void *addr, /* s3 19 */ int type, /* s2 18 */ int lifetime) {
	/* s1 17 */ int i;
	/* v1 3 */ int n;
	/* a0 4 */ void *ret;
}

/* 0013a010 000000a0 */ void* GetAmuPartAddr(/* v0 2 */ void *addr, /* s3 19 */ int type, /* s2 18 */ int lifetime) {
	/* s1 17 */ int i;
	/* v1 3 */ int n;
	/* a0 4 */ void *ret;
}

/* 0013a0b0 000000bc */ void* GetTorchPartAddr(/* v0 2 */ void *addr, /* s3 19 */ int type, /* s2 18 */ int lifetime) {
	/* s1 17 */ int i;
	/* v1 3 */ int n;
	/* a0 4 */ void *ret;
}

/* 0013a170 000000d4 */ void* GetSmokePartAddr(/* v0 2 */ void *addr, /* s3 19 */ int type, /* s2 18 */ int lifetime) {
	/* s1 17 */ int i;
	/* v1 3 */ int n;
	/* a0 4 */ void *ret;
	/* f0 38 */ float r;
}

/* 0013a248 000005a0 */ void SetNewItemEffect(/* s6 22 */ NEW_ITEM *nip) {
	/* s5 21 */ int flow;
	/* s0 16 */ int flg;
	/* f23 61 */ float rot_z;
	/* f22 60 */ float cnt;
	/* f21 59 */ float wait;
	/* f20 58 */ float out;
	/* 0x180(sp) */ float rot_x;
	/* 0x184(sp) */ float rot_y;
	/* f24 62 */ float size;
	/* 0x0(sp) */ sceVu0FVECTOR wpos;
	/* 0x10(sp) */ sceVu0FMATRIX wlm[5];
	/* 0x150(sp) */ DRAW_ENV de;
	/* s6 22 */ float *v1;
}

/* 0013a7e8 00000680 */ void CheckItemEffect() {
	/* s0 16 */ int i;
	/* s1 17 */ int j;
	/* s4 20 */ int n;
	/* t0 8 */ int num;
	/* 0x0(sp) */ int item_heat_num[24];
	/* 0x60(sp) */ int iwn[24];
	/* 0xc0(sp) */ int iwo[24];
	/* 0x120(sp) */ sceVu0FVECTOR item_heat_wpos[24];
	/* bss 382580 */ static int item_heat_onum[24];
	/* bss 3825e0 */ static int item_heat_use[24];
	/* bss 382640 */ static void *item_heat_addr[24];
	/* bss 3826a0 */ static sceVu0FVECTOR item_heat_pos[24];
	/* f12 50 */ float r;
	/* f0 38 */ float r;
	/* v0 2 */ float *v1;
	/* s6 22 */ float *v1;
	/* f12 50 */ float r;
	/* f0 38 */ float r;
	/* v0 2 */ int w;
	/* 0x2a0(sp) */ sceVu0IVECTOR ivec;
	/* 0x2b0(sp) */ sceVu0FVECTOR fvec;
	/* 0x2c0(sp) */ sceVu0FMATRIX local_world;
	/* 0x300(sp) */ sceVu0FMATRIX local_screen;
	/* 0x340(sp) */ sceVu0FVECTOR itm_pos;
	/* v1 3 */ float *v0;
}

/* 0013ae68 0000025c */ void SetEneFire(/* s1 17 */ EFFECT_CONT *ec) {
	/* f23 61 */ float r;
	/* f22 60 */ float g;
	/* f21 59 */ float b;
	/* f20 58 */ float a;
	/* f25 63 */ float s;
	/* f0 38 */ float t;
	/* f24 62 */ float ar;
	/* a0 4 */ u_int col;
	/* s2 18 */ u_int ty;
	/* 0x0(sp) */ sceVu0FVECTOR pos1;
	/* 0x10(sp) */ sceVu0FVECTOR pos2;
	/* v0 2 */ float *v1;
}

/* 0013b0c8 0000000c */ void CallAmuletFire() {}

/* 0013b0d8 00000bd0 */ int SetAmuletFire() {
	/* bss 382820 */ static u_char alp[17];
	/* sbss 35790c */ static int cnt;
	/* sbss 357910 */ static int load_id;
	/* sdata 3565a0 */ static float h;
	/* s2 18 */ int i;
	/* s1 17 */ int c;
	/* 0x7c0(sp) */ int n;
	/* s1 17 */ int w;
	/* 0x7c4(sp) */ int ret;
	/* f25 63 */ float fdiv;
	/* f24 62 */ float size;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* f20 58 */ float lla;
	/* 0x0(sp) */ sceVu0IVECTOR ivec[17][2];
	/* 0x220(sp) */ sceVu0FVECTOR seal[17][2];
	/* 0x440(sp) */ sceVu0FMATRIX local_world;
	/* 0x480(sp) */ sceVu0FMATRIX world_view;
	/* 0x4c0(sp) */ sceVu0FMATRIX world_screen;
	/* 0x500(sp) */ sceVu0FMATRIX view_screen;
	/* 0x540(sp) */ sceVu0FMATRIX local_screen;
	/* 0x580(sp) */ sceVu0FMATRIX work;
	/* 0x5c0(sp) */ sceVu0FVECTOR rot;
	/* 0x5d0(sp) */ sceVu0FVECTOR bpos;
	/* 0x5e0(sp) */ sceVu0FVECTOR obj_pos;
	/* 0x5f0(sp) */ sceVu0FVECTOR fire_pos;
	/* 0x600(sp) */ U32DATA ts[17][2];
	/* 0x690(sp) */ U32DATA tt[17][2];
	/* 0x720(sp) */ U32DATA tq[17][2];
	/* 0x7b0(sp) */ sceVu0FVECTOR fpos;
}

/* 0013bca8 000008e4 */ void* ContTorch(/* s1 17 */ void *addr, /* s6 22 */ int type, /* s2 18 */ float *pos, /* s0 16 */ float *pos2, /* s7 23 */ int st, /* f31 69 */ float r, /* f30 68 */ float g, /* f29 67 */ float b, /* 0x138(sp) */ float a, /* f21 59 */ float size, /* f17 55 */ float arate, /* s3 19 */ int tp2, /* f28 66 */ float ar, /* f20 58 */ float sr) {
	/* f24 62 */ float rrate;
	/* f22 60 */ float escl;
	/* 0x13c(sp) */ float ysp1;
	/* 0x140(sp) */ float ysp2;
	/* s0 16 */ int i;
	/* v1 3 */ int j;
	/* f27 65 */ float wind;
	/* 0x0(sp) */ sceVu0FMATRIX work;
	/* 0x40(sp) */ sceVu0FMATRIX local_clip;
	/* 0x80(sp) */ sceVu0FMATRIX local_world;
	/* 0xc0(sp) */ sceVu0FMATRIX local_screen;
	/* 0x100(sp) */ sceVu0FVECTOR ppos;
	/* 0x110(sp) */ sceVu0FVECTOR pvel;
	/* 0x120(sp) */ sceVu0FVECTOR wpos;
	/* f0 38 */ float fx;
	/* f1 39 */ float fy;
	/* f12 50 */ float fz;
	/* 0x130(sp) */ float rx;
	/* 0x134(sp) */ float rz;
	/* s2 18 */ float *v1;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
}

/* 0013c590 00000228 */ void SetTorch(/* s0 16 */ EFFECT_CONT *ec) {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* s2 18 */ int st;
	/* v1 3 */ int life;
	/* f22 60 */ float tr;
	/* f20 58 */ float tg;
	/* f21 59 */ float tb;
	/* f23 61 */ float sr;
	/* f24 62 */ float ar;
	/* s1 17 */ int torch_type;
	/* v0 2 */ float *v1;
}

/* 0013c7b8 0000055c */ void* ContSmoke(/* s4 20 */ void *addr, /* s7 23 */ int type, /* s1 17 */ float *pos, /* s0 16 */ float *pos2, /* s5 21 */ int st, /* f12 50 */ float r, /* f13 51 */ float g, /* f14 52 */ float b, /* f15 53 */ float a, /* f16 54 */ float size, /* f17 55 */ float arate) {
	/* s0 16 */ int i;
	/* f21 59 */ float rate;
	/* f0 38 */ float escl;
	/* f5 43 */ float wind;
	/* 0x0(sp) */ sceVu0FMATRIX work;
	/* 0x40(sp) */ sceVu0FMATRIX local_clip;
	/* 0x80(sp) */ sceVu0FMATRIX local_world;
	/* 0xc0(sp) */ sceVu0FMATRIX local_screen;
	/* 0x100(sp) */ sceVu0FVECTOR ppos;
	/* 0x110(sp) */ sceVu0FVECTOR pvel;
	/* 0x120(sp) */ sceVu0FVECTOR wpos;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* 0x130(sp) */ float rx;
	/* 0x134(sp) */ float rz;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f2 40 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f2 40 */ float r;
	/* f1 39 */ float r;
}

/* 0013cd18 000000f0 */ void SetSmoke(/* s1 17 */ EFFECT_CONT *ec) {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* s0 16 */ int st;
	/* f20 58 */ float r;
	/* f21 59 */ float g;
	/* f22 60 */ float b;
	/* f23 61 */ float a;
	/* f24 62 */ float s;
	/* v0 2 */ float *v1;
}

/* 0013ce08 00000c68 */ void SetSunshine(/* 0x49a0(sp) */ EFFECT_CONT *ec) {
	/* s7 23 */ int nsun;
	/* s5 21 */ int i;
	/* s2 18 */ int j;
	/* v0 2 */ int k;
	/* t7 15 */ int n;
	/* f22 60 */ float rot_x;
	/* f23 61 */ float rot_y;
	/* f20 58 */ float power;
	/* f0 38 */ float ww;
	/* f2 40 */ float hh;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* f21 59 */ float add;
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0FVECTOR wpos;
	/* 0x90(sp) */ sceVu0FVECTOR base_pos;
	/* 0xa0(sp) */ sceVu0FVECTOR mpos[6];
	/* 0x100(sp) */ EFF_SUNSHINE eff_ray[6];
	/* 0x9a0(sp) */ Q_WORDDATA pbh[1024];
}

/* 0013da70 00000bdc */ void SetDust(/* 0x1e8(sp) */ EFFECT_CONT *ec) {
	/* sdata 3565c8 */ static float malp;
	/* sdata 3565cc */ static float mala;
	/* sdata 3565d0 */ static float mphs;
	/* sdata 3565d4 */ static float mang;
	/* sdata 3565d8 */ static float mscl;
	/* sdata 3565dc */ static u_char mr;
	/* sdata 3565dd */ static u_char mg;
	/* sdata 3565de */ static u_char mb;
	/* sdata 3565e0 */ static float mv1x;
	/* sdata 3565e4 */ static float mv1y;
	/* sdata 3565e8 */ static float grv1x;
	/* sdata 3565ec */ static float grv1y;
	/* sdata 3565f0 */ static float mv2x;
	/* sdata 3565f4 */ static float mv2y;
	/* sdata 3565f8 */ static float grv2x;
	/* sdata 3565fc */ static float grv2y;
	/* bss 382840 */ static EFF_DUST eff_dust[64];
	/* f22 60 */ float f;
	/* f21 59 */ float ss;
	/* f3 41 */ float cc;
	/* f2 40 */ float fw1;
	/* f1 39 */ float fw2;
	/* 0x1e0(sp) */ float rot_x;
	/* 0x1e4(sp) */ float rot_y;
	/* s6 22 */ int c;
	/* s3 19 */ int i;
	/* t0 8 */ int j;
	/* a1 5 */ int k;
	/* fp 30 */ int n;
	/* s1 17 */ int w;
	/* s2 18 */ int th;
	/* s1 17 */ int tw;
	/* 0x0(sp) */ int so[64];
	/* s0 16 */ u_long tx0;
	/* 0x100(sp) */ sceVu0FMATRIX wlm;
	/* 0x140(sp) */ sceVu0FMATRIX slm;
	/* 0x180(sp) */ sceVu0FVECTOR bpos;
	/* 0x190(sp) */ sceVu0FVECTOR wpos;
	/* 0x1a0(sp) */ sceVu0FVECTOR ppos[4];
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 0013e650 00000918 */ void SetWaterdrop(/* s5 21 */ EFFECT_CONT *ec) {
	/* 0x268(sp) */ u_char r;
	/* 0x26c(sp) */ u_char g;
	/* 0x270(sp) */ u_char b;
	/* t3 11 */ int c;
	/* s4 20 */ int i;
	/* s2 18 */ int w;
	/* s1 17 */ int th;
	/* s0 16 */ int tw;
	/* 0x20(sp) */ int so[64];
	/* 0x120(sp) */ int uv[6][2];
	/* s0 16 */ u_int wdbwait;
	/* 0x274(sp) */ u_int wdnwait;
	/* f0 38 */ float wdadd;
	/* f21 59 */ float wdcnt;
	/* f22 60 */ float wddely;
	/* 0x260(sp) */ float rot_x;
	/* 0x264(sp) */ float rot_y;
	/* f0 38 */ float pos_y;
	/* f0 38 */ float grv1;
	/* s2 18 */ u_long tx0;
	/* 0x150(sp) */ sceVu0FMATRIX wlm;
	/* 0x190(sp) */ sceVu0FMATRIX slm;
	/* 0x1d0(sp) */ sceVu0FVECTOR wpos;
	/* data 297440 */ static sceVu0FVECTOR dummy_rot;
	/* bss 384840 */ static sceVu0FVECTOR wwpos[24];
	/* sdata 356600 */ static int wwcnt;
	/* 0x1e0(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x220(sp) */ sceVu0FVECTOR ppos[4];
	/* v0 2 */ float *v1;
	/* f12 50 */ float r;
	/* f0 38 */ float r;
	/* s0 16 */ float *v0;
	/* f0 38 */ float r;
	/* v1 3 */ float *v0;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* s0 16 */ float *v0;
	/* f0 38 */ float r;
}

/* 0013ef68 000003ec */ void SetDustLeaf(/* t8 24 */ float *pos, /* a1 5 */ int type) {
	/* 0x0(sp) */ u_char rgb1[3];
	/* 0x10(sp) */ u_char rgb2[3];
	/* t2 10 */ u_char mr;
	/* t1 9 */ u_char mg;
	/* t0 8 */ u_char mb;
	/* t6 14 */ u_char mrr;
	/* t5 13 */ u_char mrg;
	/* t4 12 */ u_char mrb;
	/* a2 6 */ int i;
	/* a3 7 */ int num;
	/* v1 3 */ int status;
	/* t7 15 */ int leaf_num;
	/* f13 51 */ float ang;
	/* f5 43 */ float angr;
	/* f4 42 */ float wvx;
	/* f12 50 */ float wvy;
	/* f1 39 */ float mv1x;
	/* f2 40 */ float mv1y;
	/* f3 41 */ float mangr;
	/* a3 7 */ EFF_LEAF *lep;
	/* t3 11 */ EFF_LEAF_ONE *lepo;
	/* v1 3 */ float *v0;
	/* t8 24 */ float *v1;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f2 40 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
}

/* 0013f358 00000008 */ void SetLeaf(/* a0 4 */ float *pos) {}
/* 0013f360 00000008 */ void SetDust2(/* a0 4 */ float *pos) {}

/* 0013f368 00000914 */ void RunLeafSub(/* 0x708(sp) */ EFF_LEAF *lep) {
	/* f21 59 */ float f;
	/* f20 58 */ float ss;
	/* f0 38 */ float cc;
	/* f1 39 */ float fw2;
	/* s6 22 */ int c;
	/* s1 17 */ int i;
	/* s4 20 */ int j;
	/* a3 7 */ int k;
	/* s2 18 */ int w;
	/* 0x70c(sp) */ int th;
	/* fp 30 */ int tw;
	/* 0x0(sp) */ int so[16];
	/* 0x710(sp) */ int leaf_num;
	/* 0x40(sp) */ int disp[32];
	/* f22 60 */ float grv1y;
	/* f23 61 */ float mphs;
	/* s0 16 */ u_char rr;
	/* s2 18 */ u_char gg;
	/* t7 15 */ u_char bb;
	/* s0 16 */ u_long tx0;
	/* 0x700(sp) */ float rot_x;
	/* 0x704(sp) */ float rot_y;
	/* 0xc0(sp) */ sceVu0IVECTOR ivec[16][5];
	/* 0x5c0(sp) */ sceVu0FMATRIX wlm;
	/* 0x600(sp) */ sceVu0FMATRIX slm;
	/* 0x640(sp) */ sceVu0FVECTOR bpos;
	/* 0x650(sp) */ sceVu0FVECTOR wpos;
	/* 0x660(sp) */ sceVu0FVECTOR ppos[2][5];
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 0013fc80 00000054 */ void RunLeaf() {}

/* 0013fcd8 000000e8 */ void light_rgb(/* s3 19 */ int *c0, /* s0 16 */ float *LocalLightMatrix[4], /* s1 17 */ float *LightColorMatrix[4], /* a3 7 */ float *v0, /* t0 8 */ float *v1, /* t1 9 */ float *v2, /* s2 18 */ float *c1) {
	/* 0x0(sp) */ sceVu0FVECTOR vector;
}

/* 0013fdc0 000015a8 */ u_char SetCanalSub(/* s7 23 */ int no, /* s6 22 */ float *mpos) {
	/* s3 19 */ int tagnum;
	/* t5 13 */ int cnt;
	/* t7 15 */ u_long reg;
	/* 0x0(sp) */ RIP_WORK1 rw1;
	/* 0x40e0(sp) */ RIP_WORK2 rw2;
	/* v1 3 */ RIPPLE2_M *rippm;
	/* 0x43e0(sp) */ sceVu0FVECTOR rip_light0;
	/* 0x43f0(sp) */ sceVu0FVECTOR rip_light1;
	/* 0x4400(sp) */ sceVu0FVECTOR rip_light2;
	/* 0x4410(sp) */ sceVu0FVECTOR rip_color0;
	/* 0x4420(sp) */ sceVu0FVECTOR rip_color1;
	/* 0x4430(sp) */ sceVu0FVECTOR rip_color2;
	/* 0x4440(sp) */ sceVu0FVECTOR rip_ambient;
	/* 0x4590(sp) */ u_int clpz2;
	/* s1 17 */ int i;
	/* s2 18 */ int j;
	/* v0 2 */ int k;
	/* 0x4594(sp) */ int t;
	/* t9 25 */ int m;
	/* s6 22 */ int n;
	/* t5 13 */ int wix;
	/* a3 7 */ int wiy;
	/* f20 58 */ float f;
	/* f0 38 */ float l;
	/* f5 43 */ float lw;
	/* f4 42 */ float y;
	/* a3 7 */ int v1;
	/* t0 8 */ int v2;
	/* t1 9 */ int v3;
	/* 0x4450(sp) */ sceVu0FVECTOR wpos;
	/* 0x4460(sp) */ sceVu0FMATRIX wlm;
	/* 0x44a0(sp) */ sceVu0IVECTOR c0;
	/* 0x44b0(sp) */ sceVu0FVECTOR c1;
	/* 0x44c0(sp) */ sceVu0FVECTOR sufcol;
	/* 0x44d0(sp) */ sceVu0FMATRIX NormalLightMatrix;
	/* 0x4510(sp) */ sceVu0FMATRIX LightColorMatrix;
	/* 0x4550(sp) */ sceVu0FMATRIX LocalLightMatrix;
	/* a1 5 */ RIPPLE2 *ripp;
	/* f21 59 */ float far;
	/* f22 60 */ float near;
	/* s6 22 */ float *v1;
	/* s6 22 */ float *v1;
}

/* 00141368 000003b4 */ void Call3DRipple(/* a0 4 */ float *bpos) {
	/* sdata 356644 */ static int m;
	/* s3 19 */ int i;
	/* t0 8 */ int n;
	/* s6 22 */ int vnumw;
	/* f20 58 */ float cntw;
	/* f21 59 */ float cnth;
	/* f23 61 */ float tsw;
	/* f22 60 */ float tsh;
	/* f0 38 */ float x1;
	/* f12 50 */ float x2;
	/* f12 50 */ float x3;
	/* f1 39 */ float z1;
	/* f2 40 */ float z2;
	/* f2 40 */ float z3;
}

/* 00141720 00000268 */ void ContCanal() {
	/* data 2974c0 */ static sceVu0FVECTOR bcp;
	/* a1 5 */ int n;
}

/* 00141988 00000060 */ void SetCanal() {
	/* s0 16 */ int i;
}

/* 001419e8 000002d8 */ void SetGlowOfAFirefly(/* a0 4 */ float *p, /* f20 58 */ float sc, /* fp 30 */ u_char r1, /* 0x168(sp) */ u_char g1, /* 0x16c(sp) */ u_char b1, /* 0x170(sp) */ u_char r2, /* 0x174(sp) */ u_char g2, /* 0x178(sp) */ u_char b2, /* s7 23 */ u_char alp) {
	/* 0x0(sp) */ sceVu0FMATRIX wlm;
	/* 0x40(sp) */ sceVu0FMATRIX slm;
	/* 0x80(sp) */ sceVu0IVECTOR ipos;
	/* 0x90(sp) */ sceVu0IVECTOR ivec[4];
	/* 0xd0(sp) */ sceVu0FVECTOR vpos;
	/* 0xe0(sp) */ sceVu0FVECTOR vtw[4];
	/* 0x120(sp) */ sceVu0FVECTOR wpos[4];
	/* f20 58 */ float f;
	/* 0x160(sp) */ float rot_x;
	/* 0x164(sp) */ float rot_y;
	/* s5 21 */ int i;
	/* s2 18 */ int w;
	/* v0 2 */ int n;
}

/* 00141cc0 0000045c */ void SetFireflySub(/* s0 16 */ FIREFLY *ffp) {
	/* 0x0(sp) */ sceVu0FVECTOR rot;
	/* 0x10(sp) */ sceVu0FVECTOR pos;
	/* 0x20(sp) */ sceVu0FMATRIX mtx;
	/* v0 2 */ int cnt;
	/* f1 39 */ float fw1;
	/* f2 40 */ float fw2;
	/* f20 58 */ float rate;
	/* f5 43 */ float top;
	/* f0 38 */ float under;
	/* f12 50 */ float ph;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* s0 16 */ float *v1;
	/* s0 16 */ float *v0;
	/* f0 38 */ float r;
}

/* 00142120 000002c8 */ void SetFirefly() {
	/* sdata 356648 */ static int wait;
	/* sdata 35664c */ static int no;
	/* bss 3849c0 */ static FIREFLY ff[20];
	/* s1 17 */ int i;
	/* f4 42 */ float rate;
	/* 0x0(sp) */ sceVu0FVECTOR fpos;
	/* 0x10(sp) */ sceVu0FVECTOR bpos;
	/* 0x20(sp) */ sceVu0FMATRIX mtx;
	/* s1 17 */ FIREFLY *ffp;
	/* s1 17 */ float *v0;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
	/* s1 17 */ float *v0;
}

/* 001423e8 0000051c */ void SetSky() {
	/* f0 38 */ float fx;
	/* f12 50 */ float fz;
	/* f0 38 */ float l;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR cpos;
	/* 0x20(sp) */ sceVu0FVECTOR rot;
	/* f20 58 */ float length;
	/* f1 39 */ float height;
	/* f0 38 */ float sc_speed;
	/* a0 4 */ int clip;
	/* v0 2 */ int clpx2;
	/* v0 2 */ int clpy2;
	/* s1 17 */ u_int clpz2;
	/* f1 39 */ float wline;
	/* s0 16 */ u_int u1;
	/* s2 18 */ u_int u2;
	/* s1 17 */ u_int x1;
	/* s3 19 */ u_int x2;
	/* s4 20 */ u_int y2;
	/* v0 2 */ int hori;
	/* a0 4 */ int hline;
	/* a3 7 */ int c;
	/* 0x30(sp) */ sceVu0IVECTOR ivec;
}

/* 00142908 00000818 */ void SetPond() {
	/* sdata 356650 */ static float wave;
	/* sdata 356654 */ static float texsc;
	/* s4 20 */ int i;
	/* v0 2 */ int k;
	/* 0x88d0(sp) */ int t;
	/* s1 17 */ int m;
	/* t5 13 */ int n;
	/* t6 14 */ int tagnum;
	/* t2 10 */ int cnt;
	/* fp 30 */ int pnumw;
	/* s5 21 */ int vnumw;
	/* s7 23 */ u_int clpz2;
	/* f12 50 */ float f;
	/* f0 38 */ float l;
	/* f23 61 */ float tsh;
	/* f25 63 */ float fcana2;
	/* f0 38 */ float fcana3;
	/* f26 64 */ float fcana4;
	/* f21 59 */ float far;
	/* f24 62 */ float near;
	/* t3 11 */ u_long reg;
	/* 0x0(sp) */ TEX_WORK txw[1089];
	/* 0x8820(sp) */ sceVu0FVECTOR bpos;
	/* 0x8830(sp) */ sceVu0FMATRIX wlm;
	/* 0x8870(sp) */ sceVu0FMATRIX slm;
	/* 0x88b0(sp) */ sceVu0FVECTOR wfv;
	/* 0x88c0(sp) */ sceVu0FVECTOR wpos;
}

/* 00143120 00000008 */ void SetHaze_Pond_SW(/* a0 4 */ int sw) {}

/* 00143128 00000f34 */ void SetHaze_Pond() {
	/* 0x230(sp) */ int i;
	/* 0x234(sp) */ int c;
	/* f29 67 */ float near;
	/* f23 61 */ float dist;
	/* f20 58 */ float wline;
	/* f20 58 */ float ang;
	/* f30 68 */ float maxalp;
	/* f25 63 */ float lft;
	/* f24 62 */ float rht;
	/* f4 42 */ float fx;
	/* f2 40 */ float fz;
	/* f21 59 */ float l;
	/* f0 38 */ float ll;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR cpos;
	/* 0x20(sp) */ sceVu0FVECTOR rot;
	/* 0x30(sp) */ sceVu0FVECTOR rw1;
	/* 0x40(sp) */ sceVu0FVECTOR rw2;
	/* 0x50(sp) */ HAZE_WORK hw[10];
	/* bss 384ec0 */ static HAZE_NUMS hn[10];
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
}

/* 00144060 000005c0 */ void DrawNewPerticleSub(/* s2 18 */ int num, /* t4 12 */ sceVu0FVECTOR *pos, /* v1 3 */ u_char r1, /* a2 6 */ u_char g1, /* a3 7 */ u_char b1, /* a0 4 */ u_char r2, /* t1 9 */ u_char g2, /* t2 10 */ u_char b2, /* 0x15b0(sp) */ int a) {
	/* 0x1500(sp) */ u_char a;
	/* s5 21 */ u_int clpy2;
	/* s4 20 */ u_int clpz2;
	/* 0x1504(sp) */ u_char rr1;
	/* s7 23 */ u_char gg1;
	/* fp 30 */ u_char bb1;
	/* a0 4 */ u_char rr2;
	/* v0 2 */ u_char gg2;
	/* v1 3 */ u_char bb2;
	/* t2 10 */ int i;
	/* t6 14 */ int j;
	/* t0 8 */ int k;
	/* s1 17 */ int n;
	/* v0 2 */ int alp;
	/* v0 2 */ int cl;
	/* t7 15 */ int tagnum;
	/* t3 11 */ int cnt;
	/* 0x0(sp) */ int clip[192];
	/* 0x300(sp) */ sceVu0IVECTOR ivec[192];
	/* 0xf00(sp) */ u_long xyzf[192];
	/* t1 9 */ u_long rgbaq1;
	/* s6 22 */ u_long rgbaq2;
	/* t5 13 */ u_long reg;
}

/* 00144620 00000854 */ void SetEneFace(/* s0 16 */ EFFECT_CONT *ec) {
	/* s7 23 */ int alp;
	/* s1 17 */ int direc;
	/* t3 11 */ int i;
	/* s1 17 */ int j;
	/* v1 3 */ int th;
	/* a0 4 */ int tw;
	/* t9 25 */ int bak;
	/* 0x8e8(sp) */ int num;
	/* 0x0(sp) */ u_int clip[16][4];
	/* s6 22 */ u_int clpz2;
	/* f25 63 */ float scl;
	/* f23 61 */ float dirfl;
	/* 0x8e0(sp) */ float rot_x;
	/* 0x8e4(sp) */ float rot_y;
	/* 0x100(sp) */ float stq[2];
	/* 0x110(sp) */ sceVu0FMATRIX wlm;
	/* 0x150(sp) */ sceVu0FMATRIX slm;
	/* 0x190(sp) */ sceVu0IVECTOR ivec[16][4];
	/* 0x590(sp) */ sceVu0FVECTOR wpos;
	/* 0x5a0(sp) */ sceVu0FVECTOR ppos[4];
	/* 0x5e0(sp) */ U32DATA ts[16][4];
	/* 0x6e0(sp) */ U32DATA tt[16][4];
	/* 0x7e0(sp) */ U32DATA tq[16][4];
}

/* 00144e78 000003a8 */ void SetSpirit(/* s4 20 */ EFFECT_CONT *ec) {
	/* bss 3850a0 */ static sceVu0FVECTOR bpos;
	/* bss 3850b0 */ static sceVu0FVECTOR opos[24];
	/* bss 385230 */ static int tbl[24];
	/* 0x30(sp) */ u_char mr;
	/* 0x34(sp) */ u_char mg;
	/* 0x38(sp) */ u_char mb;
	/* s7 23 */ u_char mrh;
	/* fp 30 */ u_char mgh;
	/* 0x3c(sp) */ u_char mbh;
	/* 0x40(sp) */ u_char mf;
	/* s2 18 */ int i;
	/* a0 4 */ int n;
	/* s3 19 */ int num;
	/* s6 22 */ int top;
	/* f20 58 */ float sc;
	/* f21 59 */ float arate;
	/* f23 61 */ float msc;
	/* f22 60 */ float msch;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v0;
}

/* 00145220 00000e30 */ void SetFaceSpirit(/* 0x808(sp) */ EFFECT_CONT *ec) {
	/* f25 63 */ float mr;
	/* f26 64 */ float mg;
	/* f27 65 */ float mb;
	/* s4 20 */ int i;
	/* t0 8 */ int j;
	/* s3 19 */ int n;
	/* 0x80c(sp) */ int tw;
	/* 0x810(sp) */ int th;
	/* s6 22 */ int bak;
	/* 0x814(sp) */ int num;
	/* 0x818(sp) */ int top;
	/* 0x0(sp) */ int clip[24];
	/* 0x81c(sp) */ int bclip;
	/* v0 2 */ u_int clpz1;
	/* 0x820(sp) */ u_int clpz2;
	/* f12 50 */ float sc;
	/* f24 62 */ float arate;
	/* f4 42 */ float fx;
	/* f5 43 */ float fy;
	/* f2 40 */ float fz;
	/* f8 46 */ float l;
	/* 0x800(sp) */ float rot_x;
	/* 0x804(sp) */ float rot_y;
	/* 0x60(sp) */ float tailsc[24];
	/* s0 16 */ u_long tx0;
	/* t6 14 */ u_long cnt;
	/* 0x824(sp) */ FACESPIRIT_ST *fs;
	/* 0xc0(sp) */ sceVu0FMATRIX wlm;
	/* 0x100(sp) */ sceVu0FMATRIX slm;
	/* 0x140(sp) */ sceVu0IVECTOR ivclip;
	/* 0x150(sp) */ sceVu0IVECTOR ivec[24][4];
	/* 0x750(sp) */ sceVu0IVECTOR ivecb[4];
	/* 0x790(sp) */ sceVu0FVECTOR bpos;
	/* 0x7a0(sp) */ sceVu0FVECTOR wpos;
	/* 0x7b0(sp) */ sceVu0FVECTOR zero;
	/* 0x7c0(sp) */ sceVu0FVECTOR ppos[4];
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
}

/* 00146050 000002e0 */ void SetSaveCameraLamp() {
	/* 0x0(sp) */ sceVu0FVECTOR bbpos[7];
	/* s2 18 */ int n;
	/* s1 17 */ int col;
	/* 0x70(sp) */ u_char rgb1[2][4];
	/* 0x80(sp) */ u_char rgb2[2][4];
	/* 0x140(sp) */ float rot_x;
	/* 0x144(sp) */ float rot_y;
	/* 0x90(sp) */ float direc[7];
	/* 0xb0(sp) */ sceVu0FVECTOR comp;
	/* 0xc0(sp) */ sceVu0FVECTOR wpos;
	/* 0xd0(sp) */ sceVu0FMATRIX wlm;
	/* 0x110(sp) */ DRAW_ENV de;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_rdr.c
// *****************************************************************************

/* 00146330 000000cc */ void InitEffectRdr() {
	/* a0 4 */ int i;
}

/* 00146400 00000008 */ void InitEffectRdrEF() {}
/* 00146408 00000040 */ void* GetBurnFireWork() {}
/* 00146448 00000048 */ void* SearchBurnFireFurnID(/* a0 4 */ u_short furn_id) {}

/* 00146490 00000168 */ void SetRDLongFire2(/* s1 17 */ float *pos, /* a1 5 */ u_char sta, /* f24 62 */ float szw, /* f25 63 */ float szh, /* f26 64 */ float sw, /* f27 65 */ float sh, /* f20 58 */ float r, /* f21 59 */ float g, /* f22 60 */ float b, /* f23 61 */ float room, /* a2 6 */ u_short furn_id) {
	/* v0 2 */ EFFECT_CONT *ecw;
	/* s0 16 */ void *ret;
	/* a3 7 */ float *v0;
	/* s1 17 */ float *v1;
}

/* 001465f8 00000034 */ void SetRDLongFire(/* a0 4 */ float *pos, /* f16 54 */ float r, /* f13 51 */ float g, /* f14 52 */ float b, /* f15 53 */ float room, /* a1 5 */ u_short furn_id) {}

/* 00146630 00000054 */ void ResetRDLongFire(/* a0 4 */ u_short furn_id) {
	/* s0 16 */ void *ret;
}

/* 00146688 00000b74 */ void SubRDFire(/* s4 20 */ EFFECT_CONT *ec) {
	/* sdata 356670 */ static int rnbk;
	/* 0x748(sp) */ u_char mr;
	/* 0x74c(sp) */ u_char mg;
	/* s6 22 */ u_char mb;
	/* 0x750(sp) */ u_char mrh;
	/* 0x754(sp) */ u_char mgh;
	/* 0x758(sp) */ u_char mbh;
	/* s1 17 */ int bak;
	/* s2 18 */ int i;
	/* v0 2 */ int n;
	/* s1 17 */ int rn;
	/* 0x75c(sp) */ int tw;
	/* fp 30 */ int th;
	/* a1 5 */ int w;
	/* s5 21 */ int wpat;
	/* 0x0(sp) */ u_int vv[24];
	/* 0x760(sp) */ u_int clpz2;
	/* f7 45 */ float bsw;
	/* f6 44 */ float bsh;
	/* f10 48 */ float sw;
	/* f4 42 */ float sh;
	/* f25 63 */ float fire1;
	/* f3 41 */ float fire2;
	/* f5 43 */ float fire4;
	/* f9 47 */ float fire5;
	/* f8 46 */ float fire6;
	/* f1 39 */ float fire7;
	/* f26 64 */ float arate;
	/* f22 60 */ float wscw;
	/* f21 59 */ float wsch;
	/* f27 65 */ float ligpow;
	/* f23 61 */ float msc;
	/* f28 66 */ float msch;
	/* f20 58 */ float f;
	/* f0 38 */ float f1;
	/* f20 58 */ float f2;
	/* 0x740(sp) */ float rot_x;
	/* 0x744(sp) */ float rot_y;
	/* 0x768(sp) */ u_long tx0;
	/* 0x60(sp) */ sceVu0FMATRIX wlm;
	/* 0xa0(sp) */ sceVu0FMATRIX slm;
	/* 0xe0(sp) */ sceVu0IVECTOR ipos;
	/* 0xf0(sp) */ sceVu0IVECTOR ivec[48];
	/* 0x3f0(sp) */ sceVu0FVECTOR vtw[48];
	/* 0x6f0(sp) */ sceVu0FVECTOR vpos;
	/* 0x700(sp) */ sceVu0FVECTOR wcpos;
	/* s3 19 */ BURN_FIRE *bf;
	/* 0x710(sp) */ DRAW_ENV de;
	/* a1 5 */ float *v1;
	/* f0 38 */ float r;
}

/* 00147200 0000005c */ void SetRDFire3(/* a0 4 */ FURN_ACT_WRK *f1, /* a1 5 */ FURN_ACT_WRK *f2, /* a2 6 */ FURN_ACT_WRK *f3, /* a3 7 */ FURN_ACT_WRK *f4, /* t0 8 */ FURN_ACT_WRK *f5, /* t1 9 */ FURN_ACT_WRK *f6) {
	/* v0 2 */ int i;
}

/* 00147260 00000054 */ void ResetRDFire3() {
	/* s1 17 */ int i;
}

/* 001472b8 00000130 */ void SubRDFire3() {
	/* s1 17 */ int i;
	/* 0x0(sp) */ int time[6];
}

/* 001473e8 0000001c */ void SetRDPazzEne(/* a0 4 */ float *pos) {}
/* 00147408 0000000c */ void ResetRDPazzEne() {}

/* 00147418 0000012c */ void SetRoomDirecPazzEne() {
	/* sbss 357938 */ static u_char alp;
	/* 0x0(sp) */ sceVu0FVECTOR bpos;
}

/* 00147548 00000084 */ void SetRDSmoke() {}
/* 001475d0 00000040 */ void ResetRDSmoke() {}

/* 00147610 00000068 */ void SetRoomDirecSmoke() {
	/* a0 4 */ int room_id;
}

/* 00147678 000000b8 */ void SetRDSunshine(/* a0 4 */ int n) {}
/* 00147730 0000003c */ void ResetRDSunshine(/* a0 4 */ int n) {}

/* 00147770 00000044 */ short int GetRDBloodDropWork() {
	/* v1 3 */ int i;
}

/* 001477b8 0000003c */ short int SearchRDBloodDropWork(/* a0 4 */ u_short furn_id) {
	/* v1 3 */ int i;
}

/* 001477f8 000000d4 */ void SetRDBloodDrop(/* s2 18 */ float *pos, /* s0 16 */ int sta, /* s3 19 */ u_short furn_id) {
	/* s1 17 */ int ret;
}

/* 001478d0 0000004c */ void ResetRDBloodDrop(/* a0 4 */ u_short furn_id) {}

/* 00147920 00000044 */ short int GetRDPFireWork() {
	/* v1 3 */ int i;
}

/* 00147968 0000003c */ short int SearchRDPFireWork(/* a0 4 */ u_short furn_id) {
	/* v1 3 */ int i;
}

/* 001479a8 00000074 */ void SetRDPFire(/* s0 16 */ float *pos, /* a1 5 */ u_short furn_id) {}

/* 00147a20 00000040 */ void SetRDPFire2(/* a0 4 */ float *pos, /* a1 5 */ u_short furn_id) {
	/* a0 4 */ EFFECT_CONT *ecw;
}

/* 00147a60 00000054 */ void ResetRDPFire(/* a0 4 */ u_short furn_id) {
	/* v0 2 */ HEAT_HAZE *hh;
	/* a0 4 */ EFFECT_CONT *ec;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_ene.c
// *****************************************************************************

/* 00147ab8 00000098 */ void InitEffectEne() {
	/* v1 3 */ int i;
}

/* 00147b50 00000008 */ void InitEffectEneEF() {}

/* 00147b58 00000504 */ void SetETOCircleTexure(/* t8 24 */ float *wlm[4], /* s1 17 */ DRAW_ENV *de, /* f12 50 */ float w, /* f13 51 */ float h, /* 0x100(sp) */ u_char r, /* 0x104(sp) */ u_char g, /* 0x108(sp) */ u_char b, /* 0x10c(sp) */ u_char a) {
	/* t3 11 */ int i;
	/* t7 15 */ int bak;
	/* fp 30 */ u_int clpy2;
	/* s0 16 */ u_int clpz2;
	/* s0 16 */ u_long tx0;
	/* 0x0(sp) */ sceVu0FMATRIX slm;
	/* 0x40(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x80(sp) */ sceVu0FVECTOR ppos[4];
	/* 0xc0(sp) */ float stq[2];
	/* 0xd0(sp) */ U32DATA ts[4];
	/* 0xe0(sp) */ U32DATA tt[4];
	/* 0xf0(sp) */ U32DATA tq[4];
}

/* 00148060 00000cec */ int SetCamFont(/* s0 16 */ int no, /* a1 5 */ int fl) {
	/* bss 3b9260 */ static float scw[5][2];
	/* bss 3b9288 */ static float sch[5][2];
	/* bss 3b92b0 */ static float alp[5][2];
	/* bss 3b92d8 */ static int cnt[5][2];
	/* bss 3b9300 */ static int flow[5][2];
	/* s3 19 */ int i;
	/* t5 13 */ int j;
	/* t2 10 */ int bak;
	/* 0x1a0(sp) */ u_int clpz2;
	/* 0x0(sp) */ int clip[2];
	/* 0x10(sp) */ u_int tw[2];
	/* 0x20(sp) */ u_int th[2];
	/* 0x30(sp) */ u_long tx[2];
	/* 0x40(sp) */ sceVu0FVECTOR ppos[2][4];
	/* 0xc0(sp) */ sceVu0IVECTOR ivec[2][4];
	/* 0x140(sp) */ U32DATA ts[2][4];
	/* 0x160(sp) */ U32DATA tt[2][4];
	/* 0x180(sp) */ U32DATA tq[2][4];
}

/* 00148d50 000003e4 */ int SetEFLight(/* a0 4 */ int flg, /* t3 11 */ int eneno, /* t5 13 */ int ligno, /* a3 7 */ int in, /* t0 8 */ int keep, /* t1 9 */ int out) {
	/* bss 3b9330 */ static sceVu0FVECTOR lig1[3];
	/* bss 3b9360 */ static sceVu0FVECTOR lig2[3];
	/* bss 3b9390 */ static sceVu0FVECTOR lig3[3];
	/* data 2984c0 */ static int flow[3];
	/* bss 3b93c0 */ static int cnt[3];
	/* a1 5 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00149138 00000040 */ void IniCamSearch() {
	/* v1 3 */ int i;
}

/* 00149178 00000028 */ void SetCamSearch(/* a0 4 */ int eneno) {}

/* 001491a0 000007dc */ void RunCamSearch() {
	/* 0x0(sp) */ int sam4rgb[3];
	/* s2 18 */ int i;
	/* a3 7 */ int j;
	/* a2 6 */ int k;
	/* a0 4 */ int n;
	/* s7 23 */ int o;
	/* 0x10(sp) */ int tbl[30];
	/* 0x140(sp) */ float rot_x;
	/* 0x144(sp) */ float rot_y;
	/* 0x90(sp) */ sceVu0FMATRIX wlm;
	/* 0xd0(sp) */ sceVu0FMATRIX slm;
	/* 0x110(sp) */ DRAW_ENV de;
	/* s1 17 */ CAMSEARCH_STR *ct;
	/* v0 2 */ float *v0;
}

/* 00149980 00000040 */ void IniCamView() {
	/* v1 3 */ int i;
}

/* 001499c0 00000030 */ void SetCamView(/* a0 4 */ int eneno) {}

/* 001499f0 00000498 */ void RunCamViewP(/* s0 16 */ int o, /* s2 18 */ int fl, /* s1 17 */ float *cpos, /* f22 60 */ float ap) {
	/* s2 18 */ int i;
	/* 0xa0(sp) */ float rot_x;
	/* 0xa4(sp) */ float rot_y;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f0 38 */ float l;
	/* 0x0(sp) */ sceVu0FVECTOR bpos;
	/* 0x10(sp) */ sceVu0FVECTOR wpos;
	/* 0x20(sp) */ sceVu0FVECTOR zero;
	/* 0x30(sp) */ sceVu0FMATRIX wlm;
	/* 0x70(sp) */ DRAW_ENV de;
	/* s3 19 */ CAMVIEW_STR *ct;
	/* s1 17 */ float *v1;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 00149e88 000007cc */ void RunCamView() {
	/* s5 21 */ int j;
	/* a2 6 */ int k;
	/* s2 18 */ int o;
	/* f20 58 */ float cv_fr1;
	/* f22 60 */ float cv_fr2;
	/* f26 64 */ float rot_r;
	/* 0xc0(sp) */ float rot_x;
	/* 0xc4(sp) */ float rot_y;
	/* 0x0(sp) */ sceVu0FVECTOR epos;
	/* 0x10(sp) */ sceVu0FMATRIX wlm;
	/* 0x50(sp) */ sceVu0FMATRIX slm;
	/* 0x90(sp) */ DRAW_ENV de;
	/* s0 16 */ CAMVIEW_STR *ct;
	/* v1 3 */ float *v1;
}

/* 0014a658 00000040 */ void IniCamPush() {
	/* v1 3 */ int i;
}

/* 0014a698 00000030 */ void SetCamPush(/* a0 4 */ int eneno) {}

/* 0014a6c8 00000478 */ void RunCamPushP(/* s0 16 */ int o, /* s2 18 */ int fl, /* s1 17 */ float *cpos, /* f22 60 */ float ap) {
	/* s0 16 */ int i;
	/* a2 6 */ int n;
	/* 0xa0(sp) */ float rot_x;
	/* 0xa4(sp) */ float rot_y;
	/* 0x0(sp) */ sceVu0FVECTOR bpos;
	/* 0x10(sp) */ sceVu0FVECTOR wpos;
	/* 0x20(sp) */ sceVu0FVECTOR zero;
	/* 0x30(sp) */ sceVu0FMATRIX wlm;
	/* 0x70(sp) */ DRAW_ENV de;
	/* s3 19 */ CAMPUSH_STR *ct;
	/* s1 17 */ float *v1;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* t3 11 */ float *v1;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* t5 13 */ float *v1;
}

/* 0014ab40 00000aec */ void RunCamPush() {
	/* f22 60 */ float cp_fr1;
	/* f28 66 */ float cp_fr3;
	/* f27 65 */ float cp_fr4;
	/* f25 63 */ float rot_r;
	/* 0xf0(sp) */ float rot_x;
	/* 0xf4(sp) */ float rot_y;
	/* 0x0(sp) */ sceVu0FVECTOR epos;
	/* 0x10(sp) */ sceVu0FVECTOR wpos;
	/* 0x20(sp) */ sceVu0FMATRIX wlm;
	/* 0x60(sp) */ sceVu0FMATRIX slm;
	/* 0xa0(sp) */ DRAW_ENV de;
	/* 0xd0(sp) */ sceVu0FVECTOR ppos;
	/* 0xe0(sp) */ sceVu0FVECTOR tpos;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f20 58 */ float l;
	/* f0 38 */ float dist;
	/* s3 19 */ int i;
	/* a2 6 */ int j;
	/* a3 7 */ int k;
	/* s7 23 */ int o;
	/* s1 17 */ CAMPUSH_STR *ct;
	/* v1 3 */ float *v1;
}

/* 0014b630 00000634 */ void RunCamSlow2(/* s6 22 */ int o, /* f24 62 */ float hrt, /* f20 58 */ float rrt, /* 0x5c0(sp) */ u_int alp) {
	/* t5 13 */ int i;
	/* v0 2 */ int k;
	/* s4 20 */ int n;
	/* t6 14 */ int bak;
	/* f22 60 */ float f;
	/* f21 59 */ float rad;
	/* 0x0(sp) */ int clip[2][33];
	/* 0x110(sp) */ sceVu0IVECTOR nci[2][33];
	/* 0x530(sp) */ sceVu0FVECTOR tpos;
	/* 0x540(sp) */ sceVu0FMATRIX wlm;
	/* 0x580(sp) */ sceVu0FMATRIX slm;
	/* s5 21 */ u_int clpz2;
	/* s1 17 */ CAMSLOW_STR *ct;
	/* f0 38 */ float r;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 0014bc68 00000040 */ void IniCamSlow() {
	/* v1 3 */ int i;
}

/* 0014bca8 0000002c */ void SetCamSlow(/* a0 4 */ int eneno) {}

/* 0014bcd8 00000cdc */ void RunCamSlow() {
	/* s7 23 */ int i;
	/* t0 8 */ int j;
	/* a3 7 */ int k;
	/* 0xf8(sp) */ int o;
	/* 0xfc(sp) */ u_int alp;
	/* 0x0(sp) */ u_int ralp[3];
	/* f31 69 */ float size;
	/* f29 67 */ float top;
	/* f30 68 */ float bottom;
	/* f26 64 */ float mvy;
	/* f22 60 */ float ang1;
	/* f25 63 */ float ang2;
	/* f27 65 */ float angr;
	/* f28 66 */ float rot_ry;
	/* f1 39 */ float rot_rz;
	/* 0xf0(sp) */ float rot_x;
	/* 0xf4(sp) */ float rot_y;
	/* f0 38 */ float f;
	/* 0x10(sp) */ sceVu0FMATRIX wlm;
	/* 0x50(sp) */ sceVu0FMATRIX slm;
	/* 0x90(sp) */ sceVu0FVECTOR tpos;
	/* 0xa0(sp) */ DRAW_ENV de;
	/* s1 17 */ CAMSLOW_STR *ct;
	/* 0x100(sp) */ float *v1;
	/* 0xd0(sp) */ sceVu0FVECTOR zero;
	/* 0xe0(sp) */ sceVu0FVECTOR wpos;
	/* t5 13 */ int n;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 0014c9b8 00000040 */ void IniCamStop() {
	/* v1 3 */ int i;
}

/* 0014c9f8 0000002c */ void SetCamStop(/* a0 4 */ int eneno) {}

/* 0014ca28 00000aa0 */ void RunCamStop() {
	/* s3 19 */ int i;
	/* t0 8 */ int j;
	/* a3 7 */ int k;
	/* a3 7 */ int n;
	/* s5 21 */ int o;
	/* 0x0(sp) */ sceVu0FVECTOR tpos;
	/* 0x10(sp) */ sceVu0FMATRIX wlm;
	/* 0x50(sp) */ sceVu0FMATRIX slm;
	/* 0x90(sp) */ DRAW_ENV de;
	/* s1 17 */ CAMSTOP_STR *ct;
	/* v0 2 */ float *v1;
	/* f20 58 */ float cs_fr1;
	/* f21 59 */ float rot_rz;
	/* 0xc0(sp) */ float ralp[32];
	/* 0x160(sp) */ float rot_x;
	/* 0x164(sp) */ float rot_y;
	/* f23 61 */ float rac1;
	/* f22 60 */ float rac2;
	/* f21 59 */ float rbre;
	/* 0x140(sp) */ sceVu0FVECTOR zero;
	/* 0x150(sp) */ sceVu0FVECTOR wpos;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 0014d4c8 00000084 */ int CheckCamSubEffect() {
	/* t0 8 */ int i;
	/* a3 7 */ int n;
}

/* 0014d550 000007c8 */ void SetSwordLineSub(/* s4 20 */ void *pos, /* s0 16 */ int num, /* s7 23 */ u_char r1, /* 0x1090(sp) */ u_char g1, /* 0x1094(sp) */ u_char b1, /* 0x1098(sp) */ u_char r2, /* 0x109c(sp) */ u_char g2, /* 0x10a0(sp) */ u_char b2) {
	/* s6 22 */ u_int clpx2;
	/* s5 21 */ u_int clpy2;
	/* v0 2 */ u_int clpz1;
	/* s3 19 */ u_int clpz2;
	/* t7 15 */ u_long reg;
	/* t4 12 */ int i;
	/* t1 9 */ int j;
	/* s1 17 */ int k;
	/* fp 30 */ int n;
	/* a0 4 */ int alp1;
	/* t6 14 */ int alp2;
	/* v0 2 */ int cl;
	/* t2 10 */ int tagnum;
	/* t5 13 */ int cnt;
	/* 0x0(sp) */ sceVu0FVECTOR bpos;
	/* 0x10(sp) */ sceVu0IVECTOR ivec[96];
	/* 0x610(sp) */ int clip[96];
	/* 0x790(sp) */ u_long xyzf[96];
	/* v1 3 */ u_long rgbaq1;
	/* s2 18 */ u_long rgbaq2;
	/* 0xa90(sp) */ int uu[96];
	/* 0xc10(sp) */ int vv[96];
	/* 0xd90(sp) */ u_long uv[96];
}

/* 0014dd18 00000024 */ void SetSwordSwitch(/* a0 4 */ int sw) {}

/* 0014dd40 00000214 */ void SetSwordLine() {
	/* t1 9 */ int i;
	/* a0 4 */ int n;
	/* 0x0(sp) */ int tbl[48];
	/* 0xc0(sp) */ sceVu0FMATRIX wlm;
	/* 0x100(sp) */ sceVu0FVECTOR bpos[2];
	/* 0x120(sp) */ sceVu0FVECTOR wpos;
	/* bss 3b93d0 */ static sceVu0FVECTOR spos2[96];
	/* a0 4 */ float *v0;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
	/* t0 8 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 0014df58 0000047c */ int SetSpiritAway(/* a0 4 */ int fl, /* s7 23 */ float *tpos) {
	/* s3 19 */ int i;
	/* a3 7 */ int n;
	/* bss 3b99d0 */ static SPAWAY spaway;
	/* s4 20 */ SPAWAY *ct;
	/* 0x0(sp) */ DRAW_ENV de;
	/* 0x30(sp) */ float ralp[64];
	/* 0x190(sp) */ float rot_x;
	/* 0x194(sp) */ float rot_y;
	/* 0x130(sp) */ sceVu0FVECTOR zero;
	/* 0x140(sp) */ sceVu0FVECTOR wpos;
	/* 0x150(sp) */ sceVu0FMATRIX wlm;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
}

/* 0014e3d8 000013c4 */ int SetNewEneOut(/* s0 16 */ int flag, /* s1 17 */ u_char eneno, /* 0x3490(sp) */ u_char type, /* 0x3494(sp) */ float *bpos, /* f12 50 */ float sc) {
	/* bss 3b9f18 */ static float sscl[3];
	/* bss 3b9f28 */ static float r[3];
	/* bss 3b9f38 */ static int flow[3];
	/* 0x0(sp) */ float alpha1[289];
	/* fp 30 */ int i;
	/* s2 18 */ int j;
	/* s7 23 */ int k;
	/* 0x3498(sp) */ int m;
	/* t9 25 */ int bak;
	/* s0 16 */ int wix;
	/* v0 2 */ int pnumh;
	/* s1 17 */ int wiy;
	/* s6 22 */ int sx2;
	/* s4 20 */ int sy2;
	/* 0x349c(sp) */ int clip;
	/* f27 65 */ float l;
	/* f0 38 */ float lw;
	/* f21 59 */ float fw;
	/* f26 64 */ float cntw;
	/* f20 58 */ float rad;
	/* f21 59 */ float ss;
	/* f0 38 */ float cc;
	/* f24 62 */ float ts;
	/* 0x3480(sp) */ float rot_x;
	/* 0x3484(sp) */ float rot_y;
	/* f29 67 */ float fa;
	/* f31 69 */ float alp;
	/* f20 58 */ float scl;
	/* f22 60 */ float wfw;
	/* f23 61 */ float wfh;
	/* f25 63 */ float wff;
	/* f30 68 */ float ml;
	/* 0x490(sp) */ int tx2[289];
	/* 0x920(sp) */ int ty2[289];
	/* 0xdb0(sp) */ sceVu0FVECTOR vpos;
	/* 0xdc0(sp) */ sceVu0FVECTOR pos;
	/* 0xdd0(sp) */ sceVu0FVECTOR fzero;
	/* 0xde0(sp) */ sceVu0FVECTOR vt[289];
	/* 0x1ff0(sp) */ sceVu0IVECTOR vtiw[289];
	/* 0x3200(sp) */ sceVu0IVECTOR ivec;
	/* 0x3210(sp) */ sceVu0FMATRIX wm;
	/* 0x3250(sp) */ sceVu0FMATRIX lrm;
	/* 0x3290(sp) */ sceVu0FMATRIX rm;
	/* 0x32d0(sp) */ sceVu0FMATRIX swm;
	/* 0x3310(sp) */ sceVu0FMATRIX svm;
	/* 0x3350(sp) */ sceVu0FMATRIX slm;
	/* 0x3390(sp) */ sceVu0FMATRIX wlm;
	/* 0x33d0(sp) */ sceVu0FMATRIX wvm;
	/* 0x3494(sp) */ float *v1;
	/* f28 66 */ float rr;
	/* 0x3488(sp) */ float rot_x;
	/* 0x348c(sp) */ float rot_y;
	/* 0x3410(sp) */ sceVu0FMATRIX wlm;
	/* 0x3450(sp) */ DRAW_ENV de;
}

/* 0014f7a0 000004cc */ void SetEneDmgEffect3_Sub2(/* s1 17 */ NEW_PERTICLE *np, /* s4 20 */ float *bpos1, /* s5 21 */ float *bpos2, /* a3 7 */ u_char r1, /* t0 8 */ u_char g1, /* t1 9 */ u_char b1, /* t2 10 */ u_char r2, /* t3 11 */ u_char g2, /* 0x170(sp) */ int b2) {
	/* s6 22 */ int enedmg2_sp;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f22 60 */ float l;
	/* f12 50 */ float f1;
	/* f0 38 */ float f2;
	/* f20 58 */ float rot_z;
	/* f23 61 */ float r1l;
	/* f24 62 */ float r2l;
	/* f21 59 */ float r1r;
	/* 0x0(sp) */ sceVu0FVECTOR bpos3;
	/* 0x10(sp) */ sceVu0FVECTOR opos1;
	/* 0x20(sp) */ sceVu0FVECTOR rot;
	/* 0x30(sp) */ sceVu0FVECTOR pos;
	/* 0x40(sp) */ sceVu0FMATRIX wlm;
	/* 0x80(sp) */ sceVu0FMATRIX slm;
}

/* 0014fc70 00000690 */ int SetEneDmgEffect3(/* s5 21 */ int flag, /* 0x120(sp) */ u_char eneno, /* 0x124(sp) */ sceVu0FVECTOR *pos) {
	/* bss 3b9f50 */ static sceVu0FVECTOR bpos1[3];
	/* bss 3b9f80 */ static NEW_PERTICLE nyoro2_npt[3];
	/* 0x10(sp) */ u_char rgb1[8];
	/* 0x20(sp) */ u_char rgb2[8];
	/* s3 19 */ int enedmg2_sp;
	/* s6 22 */ int ret;
	/* v1 3 */ int j;
	/* a1 5 */ int k;
	/* f12 50 */ float fx;
	/* f2 40 */ float fy;
	/* f1 39 */ float fz;
	/* f22 60 */ float l;
	/* f0 38 */ float f1;
	/* f0 38 */ float f2;
	/* f20 58 */ float rot_z;
	/* f23 61 */ float r1l;
	/* f24 62 */ float r2l;
	/* f21 59 */ float r1r;
	/* f20 58 */ float r2r;
	/* f0 38 */ float nyo1;
	/* f1 39 */ float nyo3;
	/* f0 38 */ float nyo4;
	/* 0x30(sp) */ sceVu0FVECTOR bpos2;
	/* 0x40(sp) */ sceVu0FVECTOR opos1;
	/* 0x50(sp) */ sceVu0FVECTOR rot;
	/* 0x60(sp) */ sceVu0FVECTOR wpos;
	/* 0x70(sp) */ sceVu0FVECTOR ppp;
	/* 0x80(sp) */ sceVu0FVECTOR ppp2;
	/* 0x90(sp) */ sceVu0FVECTOR spos;
	/* 0xa0(sp) */ sceVu0FMATRIX wlm;
	/* 0xe0(sp) */ sceVu0FMATRIX slm;
	/* s0 16 */ NEW_PERTICLE *np;
	/* v0 2 */ float *v0;
	/* 0x124(sp) */ float *v1;
	/* s0 16 */ float *v0;
	/* s0 16 */ float *v0;
	/* 0x124(sp) */ float *v0;
	/* s0 16 */ float *v1;
	/* 0x124(sp) */ float *v0;
	/* s0 16 */ float *v1;
}

/* 00150300 00000510 */ void SetEneSeal(/* s0 16 */ EFFECT_CONT *ec) {
	/* bss 3ba040 */ static sceVu0FVECTOR bpos[3];
	/* s4 20 */ u_char flag1;
	/* s3 19 */ u_char flag2;
	/* s2 18 */ u_char flag3;
	/* s5 21 */ u_char eneno;
	/* s6 22 */ u_char inifl;
	/* 0xd0(sp) */ u_char eneseal_type;
	/* f20 58 */ float scl;
	/* fp 30 */ void *spr_fire;
	/* 0x0(sp) */ sceVu0IVECTOR ivec;
	/* 0x10(sp) */ sceVu0FVECTOR pos;
	/* 0x20(sp) */ sceVu0FVECTOR rot;
	/* 0x30(sp) */ sceVu0FVECTOR fzero;
	/* 0x40(sp) */ sceVu0FVECTOR spos;
	/* 0x50(sp) */ sceVu0FMATRIX wlm;
	/* 0x90(sp) */ sceVu0FMATRIX slm;
	/* a3 7 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 00150810 0000003c */ void EneDmgTexInit() {
	/* v1 3 */ int i;
}

/* 00150850 000000c0 */ void LoadEneDmgTex(/* s2 18 */ int no, /* s3 19 */ u_int *addr) {
	/* a0 4 */ int i;
	/* s0 16 */ int count;
	/* s1 17 */ int texno;
}

/* 00150910 000000d4 */ void SetEneDmgTex(/* a0 4 */ int wrk_no) {}

/* 001509e8 000000b8 */ void EneDmgTexDel(/* a0 4 */ int wrk_no) {
	/* t1 9 */ int i;
}

/* 00150aa0 00000038 */ void ZeroHourEneDmgTexDel(/* a0 4 */ int mdl_no) {
	/* a1 5 */ int i;
}

/* 00150ad8 00001078 */ void SetEneDmgEffect1_Sub2(/* s0 16 */ int num) {
	/* 0x0(sp) */ u_char rgb[2][2][2][3];
	/* 0x20(sp) */ sceVu0FVECTOR bpos1;
	/* 0x30(sp) */ sceVu0FVECTOR wpos[4];
	/* 0x70(sp) */ sceVu0FVECTOR bpos;
	/* 0x80(sp) */ sceVu0FVECTOR cpos;
	/* s4 20 */ int i;
	/* s1 17 */ int j;
	/* a1 5 */ int n;
	/* 0x498(sp) */ int st;
	/* t5 13 */ int bak;
	/* 0x490(sp) */ float rot_x;
	/* 0x494(sp) */ float rot_y;
	/* f12 50 */ float fx;
	/* f1 39 */ float fy;
	/* f0 38 */ float fz;
	/* f4 42 */ float l;
	/* f1 39 */ float scmax;
	/* 0x90(sp) */ float scl[4];
	/* 0xa0(sp) */ sceVu0FMATRIX wlm;
	/* 0xe0(sp) */ sceVu0FMATRIX slm;
	/* 0x49c(sp) */ int mono;
	/* 0x120(sp) */ int clip[4];
	/* 0x130(sp) */ u_int tw[4];
	/* 0x140(sp) */ u_int th[4];
	/* 0x150(sp) */ u_long tex0[4];
	/* 0x170(sp) */ sceVu0FVECTOR ppos[4][4];
	/* 0x270(sp) */ sceVu0IVECTOR ivec[4][4];
	/* 0x370(sp) */ U32DATA ts[4][4];
	/* 0x3b0(sp) */ U32DATA tt[4][4];
	/* 0x3f0(sp) */ U32DATA tq[4][4];
	/* 0x430(sp) */ float dist[4];
	/* 0x440(sp) */ float bww[4];
	/* 0x450(sp) */ float bhh[4];
	/* 0x460(sp) */ float szw[4];
	/* 0x470(sp) */ float szh[4];
	/* 0x480(sp) */ u_int textbl[4];
	/* a1 5 */ u_int clpz1;
	/* 0x4a4(sp) */ u_int clpz2;
	/* s3 19 */ ENDMG1 *dmg1;
	/* s3 19 */ float *v0;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
}

/* 00151b50 00000034 */ void SetEneDmgEffect1_Sub() {
	/* s0 16 */ int i;
}

/* 00151b88 00000058 */ void SetEneDmgEffect1(/* a0 4 */ int num) {}

/* 00151be0 000008fc */ void SetEneDmgEffect2_Sub2(/* s3 19 */ NEW_PERTICLE *np, /* 0x3b0(sp) */ float *bpos1, /* 0x3b4(sp) */ float *bpos2, /* 0x3b8(sp) */ u_char r1, /* 0x3bc(sp) */ u_char g1, /* 0x3c0(sp) */ u_char b1, /* 0x3c4(sp) */ u_char r2, /* 0x3c8(sp) */ u_char g2, /* 0x4b0(sp) */ int b2) {
	/* 0x3cc(sp) */ u_char b2;
	/* s4 20 */ int i;
	/* s2 18 */ int n;
	/* 0x10(sp) */ int tbl[12];
	/* f12 50 */ float fx;
	/* f0 38 */ float fy;
	/* f1 39 */ float fz;
	/* f22 60 */ float l;
	/* f12 50 */ float f1;
	/* f0 38 */ float f2;
	/* f20 58 */ float rot_z;
	/* f23 61 */ float r1l;
	/* f24 62 */ float r2l;
	/* f1 39 */ float r2r;
	/* 0x40(sp) */ sceVu0FVECTOR wwpos[36];
	/* 0x280(sp) */ sceVu0FVECTOR bpos3;
	/* 0x290(sp) */ sceVu0FVECTOR opos1;
	/* 0x2a0(sp) */ sceVu0FVECTOR wpos[3];
	/* 0x2d0(sp) */ sceVu0FVECTOR wkpos[3];
	/* 0x300(sp) */ sceVu0FVECTOR rot;
	/* 0x310(sp) */ sceVu0FVECTOR pos;
	/* 0x320(sp) */ sceVu0FMATRIX wlm;
	/* 0x360(sp) */ sceVu0FMATRIX slm;
	/* 0x3a0(sp) */ sceVu0FVECTOR rottt;
	/* v0 2 */ float *m0[4];
	/* v0 2 */ float *v0;
	/* s3 19 */ float *v1;
	/* s3 19 */ float *v0;
}

/* 001524e0 000009e0 */ void SetEneDmgEffect2_Sub() {
	/* s1 17 */ int fl;
	/* 0x10(sp) */ u_char rgb1[2][8];
	/* 0x20(sp) */ u_char rgb2[2][8];
	/* 0x168(sp) */ int mono;
	/* 0x16c(sp) */ int c;
	/* s3 19 */ int i;
	/* s5 21 */ int j;
	/* s4 20 */ int k;
	/* a0 4 */ int n;
	/* fp 30 */ int nyoro_num;
	/* f0 38 */ float fx;
	/* f1 39 */ float fy;
	/* f12 50 */ float fz;
	/* f22 60 */ float l;
	/* f0 38 */ float f1;
	/* f0 38 */ float f2;
	/* f20 58 */ float rot_z;
	/* f25 63 */ float span1;
	/* f26 64 */ float span2;
	/* f23 61 */ float r1l;
	/* f0 38 */ float r2l;
	/* f21 59 */ float r1r;
	/* f20 58 */ float r2r;
	/* bss 3ba070 */ static sceVu0FVECTOR bpos1;
	/* 0x30(sp) */ sceVu0FVECTOR bpos2;
	/* 0x40(sp) */ sceVu0FVECTOR opos1;
	/* 0x50(sp) */ sceVu0FVECTOR rot;
	/* 0x60(sp) */ sceVu0FVECTOR pos;
	/* 0x70(sp) */ sceVu0FVECTOR wpos;
	/* 0x80(sp) */ sceVu0FVECTOR ppp2;
	/* 0x90(sp) */ sceVu0FVECTOR ppp;
	/* 0xa0(sp) */ sceVu0FMATRIX wlm;
	/* 0xe0(sp) */ sceVu0FMATRIX slm;
	/* s1 17 */ NEW_PERTICLE *np;
	/* 0x120(sp) */ sceVu0FVECTOR spos;
	/* v1 3 */ float *v1;
	/* s1 17 */ float *v0;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* f0 38 */ float r;
	/* f1 39 */ float r;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
	/* s1 17 */ float *v0;
	/* 0x130(sp) */ DRAW_ENV de;
	/* 0x160(sp) */ float rot_x;
	/* 0x164(sp) */ float rot_y;
	/* f20 58 */ float f;
}

/* 00152ec0 00000010 */ void SetEneDmgEffect2() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/g2d_debug.c
// *****************************************************************************

/* 00152ed0 00000180 */ void gra2dInitDbgMenu() {}

/* 00153050 00000874 */ void gra2dDrawDbgMenuSub(/* s2 18 */ DEBUG_MENU *wlp) {
	/* s1 17 */ int i;
	/* s3 19 */ int n;
	/* 0x0(sp) */ int bx;
	/* 0x4(sp) */ int by;
	/* v0 2 */ int sw;
	/* s0 16 */ int sh;
}

/* 001538c8 000008dc */ void gra2dDrawDbgMenu() {
	/* sdata 356a4c */ static int now_tree;
	/* s3 19 */ int i;
	/* t0 8 */ int l;
	/* a0 4 */ int n;
	/* a3 7 */ int ok;
	/* t2 10 */ int pad;
	/* 0x0(sp) */ char cwo[16];
	/* s2 18 */ DEBUG_MENU *nlp;
	/* v1 3 */ DEBUG_MENU *wlp;
}

/* 001541a8 00000028 */ void SetMaxNumber(/* a0 4 */ int num1, /* a1 5 */ int num2, /* a2 6 */ int nmax) {}
/* 001541d0 00000008 */ void InitShibataSet() {}
/* 001541d8 00000260 */ void SetShibataSet() {}
/* 00154438 00000018 */ void InitPerformanceCounter() {}
/* 00154450 00000010 */ void StartPerformanceCounter() {}

/* 00154460 0000000c */ void StopPerformanceCounter() {
	/* sdata 356a5c */ static u_char ow;
	/* sdata 356a60 */ static int cnt;
	/* v0 2 */ int ctr0;
}

/* 00154470 0000052c */ void DrawPerformanceCounter() {
	/* s1 17 */ u_char r;
	/* s0 16 */ u_char g;
	/* s2 18 */ u_char b;
	/* v0 2 */ int x1;
	/* v0 2 */ int x2;
	/* v0 2 */ int x3;
	/* v0 2 */ int x4;
	/* v0 2 */ int x5;
	/* v0 2 */ int xx1;
	/* s3 19 */ int xx2;
	/* f20 58 */ float f;
	/* f24 62 */ float d;
}

/* 001549a0 00000068 */ void WaitFrameTop(/* a0 4 */ int type) {
	/* v0 2 */ int ctr0;
	/* v0 2 */ int ctr0;
}

/* 00154a08 000003ac */ void CheckHintTex() {
	/* a1 5 */ int n;
	/* s3 19 */ int num;
	/* v0 2 */ int target;
	/* s0 16 */ u_char alp;
	/* f20 58 */ float posy;
	/* sdata 356a70 */ static int num_old;
	/* data 2a9a98 */ static int hint_tbl[48];
	/* 0x0(sp) */ DISP_SPRT ds;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/g2d_main.c
// *****************************************************************************

/* 00154db8 00000058 */ void gra2dInitBG() {
	/* v1 3 */ int i;
}

/* 00154e10 00000024 */ void gra2dInitST() {}
/* 00154e38 0000001c */ static void gra2dSubO() {}
/* 00154e58 00000028 */ static void gra2dSubG0(/* s0 16 */ int fl) {}
/* 00154e80 00000008 */ static void gra2dSubG1(/* a0 4 */ int fl) {}
/* 00154e88 00000008 */ static void gra2dSubG2(/* a0 4 */ int fl) {}
/* 00154e90 0000005c */ static void gra2dSubG3(/* a0 4 */ int fl) {}
/* 00154ef0 0000002c */ static void gra2dSubLAST() {}
/* 00154f20 00000128 */ void gra2dDraw(/* s0 16 */ int fl) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/message.c
// *****************************************************************************

/* 00155048 00000030 */ void InitMessage() {}
/* 00155078 00000028 */ void InitMessageEF() {}

/* 001550a0 00000108 */ void SetMessageDirect(/* fp 30 */ int addr, /* s1 17 */ int pri, /* a2 6 */ int fn, /* s3 19 */ int x, /* s4 20 */ int y, /* t1 9 */ u_char r, /* t2 10 */ u_char g, /* t3 11 */ u_char b) {
	/* bss 3bb1a0 */ static DISP_STR ds;
	/* 0x0(sp) */ STR_DAT sd;
}

/* 001551a8 00000014 */ void SetMessageAddr(/* v0 2 */ int addr) {}
/* 001551c0 0000002c */ int SetMessage() {}
/* 001551f0 00000008 */ void MessageWaitOff() {}

/* 001551f8 00000278 */ static void SetMesFrame2(/* s0 16 */ int pri, /* f12 50 */ float bx, /* f13 51 */ float by, /* f14 52 */ float sw, /* f15 53 */ float sh) {
	/* f20 58 */ float xx;
	/* f21 59 */ float yy;
}

/* 00155470 00000020 */ void SetMesFrame(/* a0 4 */ int pri, /* a1 5 */ int type, /* f12 50 */ float bx, /* f13 51 */ float by, /* f14 52 */ float sw, /* f15 53 */ float sh) {}
/* 00155490 0000001c */ void SetInteger(/* f12 50 */ float x, /* f13 51 */ float y, /* a0 4 */ int num) {}

/* 001554b0 000000a0 */ void SetInteger2(/* s2 18 */ int pri, /* f20 58 */ float x, /* f21 59 */ float y, /* s3 19 */ int type, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* t1 9 */ int num) {
	/* 0x0(sp) */ char cwo[16];
}

/* 00155550 000000b0 */ void SetInteger3(/* s3 19 */ int pri, /* f20 58 */ float x, /* f21 59 */ float y, /* s4 20 */ int type, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* t1 9 */ u_char a, /* t2 10 */ int num) {
	/* 0x0(sp) */ char cwo[16];
}

/* 00155600 00000020 */ void SetASCIIString(/* f12 50 */ float x, /* f13 51 */ float y, /* a0 4 */ char *str) {}
/* 00155620 00000018 */ void SetASCIIString2(/* a0 4 */ int pri, /* f12 50 */ float x, /* f13 51 */ float y, /* a1 5 */ int type, /* a2 6 */ u_char r, /* a3 7 */ u_char g, /* t0 8 */ u_char b, /* t1 9 */ char *str) {}

/* 00155638 00000270 */ void SetASCIIString3(/* fp 30 */ int pri, /* f21 59 */ float x, /* f20 58 */ float y, /* s7 23 */ int type, /* 0x20(sp) */ u_char r, /* 0x24(sp) */ u_char g, /* 0x28(sp) */ u_char b, /* 0x2c(sp) */ u_char a, /* s3 19 */ char *str) {
	/* s2 18 */ int i;
	/* a3 7 */ int n;
	/* a1 5 */ int code;
	/* a1 5 */ u_char c1;
	/* a2 6 */ u_char c2;
	/* 0x10(sp) */ int w[2];
	/* v0 2 */ u_char *tbl;
	/* a1 5 */ int ft;
	/* s0 16 */ int offset;
	/* s4 20 */ int xoff;
}

/* 001558a8 000004a8 */ void SetWString2(/* 0x90(sp) */ int pri, /* f21 59 */ float x, /* f20 58 */ float y, /* 0x94(sp) */ u_char r, /* 0x98(sp) */ u_char g, /* 0x9c(sp) */ u_char b, /* 0xa0(sp) */ char *str) {
	/* 0xa4(sp) */ int i;
	/* 0xa8(sp) */ int n;
	/* s1 17 */ int code;
	/* t0 8 */ int dc;
	/* a1 5 */ int type;
	/* 0x10(sp) */ int font_code[2][16];
}

/* 00155d50 00000378 */ void SetString(/* f20 58 */ float x, /* f21 59 */ float y, /* s1 17 */ char *fmt) {
	/* s4 20 */ va_list ap;
	/* s0 16 */ int i;
	/* s5 21 */ int n;
	/* a1 5 */ int flag;
	/* v1 3 */ int len;
	/* s3 19 */ char cw;
	/* 0x0(sp) */ char cwo[256];
	/* 0x100(sp) */ char str[256];
	/* s2 18 */ char *buf;
}

/* 001560c8 0000039c */ void SetString2(/* 0x200(sp) */ int pri, /* f20 58 */ float x, /* f21 59 */ float y, /* 0x204(sp) */ int type, /* 0x208(sp) */ u_char r, /* 0x20c(sp) */ u_char g, /* 0x210(sp) */ u_char b, /* s1 17 */ char *fmt) {
	/* s4 20 */ va_list ap;
	/* s0 16 */ int i;
	/* s5 21 */ int n;
	/* a1 5 */ int flag;
	/* v1 3 */ int len;
	/* s3 19 */ char cw;
	/* 0x0(sp) */ char cwo[256];
	/* 0x100(sp) */ char str[256];
	/* s2 18 */ char *buf;
}

/* 00156468 00000264 */ static void SetFontPacketHeader(/* t5 13 */ int n, /* a1 5 */ int type, /* t8 24 */ u_char alp) {
	/* t1 9 */ sceGsTex0 Load;
	/* t3 11 */ sceGsTex0 Change;
	/* t4 12 */ int psm;
}

/* 001566d0 00000204 */ static void SetFont(/* a0 4 */ int pri, /* a1 5 */ int type, /* a2 6 */ int no, /* t7 15 */ int x, /* t0 8 */ int y, /* s1 17 */ u_char r, /* t2 10 */ u_char g, /* t3 11 */ u_char b, /* 0x90(sp) */ int a) {
	/* t4 12 */ u_char a;
	/* v0 2 */ unsigned int tw1;
	/* v1 3 */ unsigned int th1;
	/* a1 5 */ unsigned int tw2;
	/* a2 6 */ unsigned int th2;
	/* s0 16 */ int px2;
	/* a0 4 */ int py2;
	/* s5 21 */ int Font_W;
	/* s4 20 */ int Font_H;
	/* t1 9 */ int Num_W;
	/* t8 24 */ int div;
	/* s6 22 */ int off_w;
	/* s7 23 */ int off_ht;
	/* fp 30 */ int off_hd;
	/* t7 15 */ int dx;
	/* a3 7 */ int dy;
	/* s0 16 */ int dw;
	/* a0 4 */ int dh;
	/* t9 25 */ int z;
}

/* 001568d8 00000070 */ static void FontInit() {}

/* 00156948 00000158 */ static void SetFontTex(/* a0 4 */ int flg, /* a2 6 */ int bank) {
	/* sdata 356aac */ static int obank;
}

/* 00156aa0 000000e0 */ static void SetFontEnv() {}

/* 00156b80 000001d4 */ static void SetFontPat(/* a0 4 */ int pri, /* a1 5 */ int fn, /* a2 6 */ int x, /* a3 7 */ int y, /* t0 8 */ int fw, /* t1 9 */ u_char r, /* t2 10 */ u_char g, /* t3 11 */ u_char b, /* 0x70(sp) */ int a) {
	/* a2 6 */ int px2;
	/* a3 7 */ int py2;
	/* v0 2 */ u_int tw1;
	/* v1 3 */ u_int th1;
	/* t6 14 */ u_int tw2;
	/* a1 5 */ u_int th2;
	/* s3 19 */ u_int Font_W;
	/* v1 3 */ u_int Num_W;
	/* t4 12 */ int div;
	/* a2 6 */ int dx;
	/* a3 7 */ int dy;
	/* v0 2 */ int dw;
	/* t4 12 */ int dh;
	/* t5 13 */ u_int z;
}

/* 00156d58 0000012c */ static void SetUnderLine(/* a0 4 */ int sw, /* s0 16 */ int pri, /* t4 12 */ int x, /* a3 7 */ int y, /* s1 17 */ int fw, /* t1 9 */ u_char r, /* t2 10 */ u_char g, /* t3 11 */ u_char b, /* 0x20(sp) */ int a) {
	/* t0 8 */ int px2;
	/* a0 4 */ int py2;
	/* v0 2 */ int div;
	/* t0 8 */ int dx;
	/* v1 3 */ int dw;
	/* a0 4 */ int dh;
	/* t2 10 */ u_int z;
}

/* 00156e88 00000074 */ static void PacketEnd() {}
/* 00156f00 00000060 */ void CopyStrDToStr(/* a0 4 */ DISP_STR *s, /* a1 5 */ STR_DAT *d) {}

/* 00156f60 0000092c */ int SetMessageV2_2(/* s7 23 */ DISP_STR *s) {
	/* s1 17 */ u_char *c;
	/* a1 5 */ u_char *cp;
	/* s4 20 */ int i;
	/* v1 3 */ int n;
	/* 0x330(sp) */ int m;
	/* 0x334(sp) */ int loop;
	/* 0x338(sp) */ int sflg;
	/* 0x33c(sp) */ int npri;
	/* s3 19 */ int nx;
	/* s6 22 */ int ny;
	/* 0x340(sp) */ int nxw;
	/* 0x344(sp) */ int nyw;
	/* 0x10(sp) */ int px[32];
	/* 0x90(sp) */ int py[32];
	/* 0x110(sp) */ int pw[32];
	/* 0x348(sp) */ int selnum;
	/* 0x34c(sp) */ u_char nr;
	/* 0x350(sp) */ u_char ng;
	/* 0x354(sp) */ u_char nb;
	/* 0x358(sp) */ u_char na;
	/* s0 16 */ u_char nfn;
	/* s2 18 */ u_char nfw;
	/* 0x190(sp) */ char cwo[256];
	/* fp 30 */ int line;
	/* s5 21 */ int column;
	/* 0x290(sp) */ SQAR_DAT sq;
	/* 0x2b0(sp) */ DISP_SQAR dq;
	/* s0 16 */ int i;
}

/* 00157890 000008f0 */ int SetMessageV2(/* s6 22 */ DISP_STR *s) {
	/* s1 17 */ u_char *c;
	/* a1 5 */ u_char *cp;
	/* s4 20 */ int i;
	/* v1 3 */ int n;
	/* 0x330(sp) */ int m;
	/* 0x334(sp) */ int loop;
	/* 0x338(sp) */ int sflg;
	/* 0x33c(sp) */ int npri;
	/* s3 19 */ int nx;
	/* s5 21 */ int ny;
	/* 0x340(sp) */ int nxw;
	/* 0x344(sp) */ int nyw;
	/* 0x10(sp) */ int px[32];
	/* 0x90(sp) */ int py[32];
	/* 0x110(sp) */ int pw[32];
	/* 0x348(sp) */ int selnum;
	/* 0x34c(sp) */ u_char nr;
	/* 0x350(sp) */ u_char ng;
	/* fp 30 */ u_char nb;
	/* 0x354(sp) */ u_char na;
	/* s0 16 */ u_char nfn;
	/* s2 18 */ u_char nfw;
	/* 0x190(sp) */ char cwo[256];
	/* 0x290(sp) */ SQAR_DAT sq;
	/* 0x2b0(sp) */ DISP_SQAR dq;
	/* s0 16 */ int i;
}

/* 00158180 00000e68 */ int SubMessageV3(/* s0 16 */ u_char *s, /* 0x330(sp) */ int pri, /* a2 6 */ int delflg) {
	/* s1 17 */ u_char *c;
	/* a2 6 */ u_char *cp;
	/* s4 20 */ int i;
	/* a1 5 */ int j;
	/* a2 6 */ int k;
	/* v1 3 */ int n;
	/* 0x334(sp) */ int m;
	/* 0x338(sp) */ int loop;
	/* 0x33c(sp) */ int sflg;
	/* 0x340(sp) */ int npri;
	/* s5 21 */ int nx;
	/* s6 22 */ int ny;
	/* 0x344(sp) */ int nxw;
	/* 0x348(sp) */ int nyw;
	/* 0x10(sp) */ int px[32];
	/* 0x90(sp) */ int py[32];
	/* 0x110(sp) */ int pw[32];
	/* 0x34c(sp) */ u_char nr;
	/* 0x350(sp) */ u_char ng;
	/* 0x354(sp) */ u_char nb;
	/* s7 23 */ u_char na;
	/* s0 16 */ u_char nfn;
	/* s2 18 */ u_char nfw;
	/* 0x358(sp) */ u_char nul;
	/* 0x190(sp) */ char cwo[256];
	/* 0x290(sp) */ SQAR_DAT sq;
	/* 0x2b0(sp) */ DISP_SQAR dq;
	/* s1 17 */ int i;
}

/* 00158fe8 0000001c */ int SetMessageV3(/* a0 4 */ u_char *s, /* a1 5 */ int pri) {}
/* 00159008 0000001c */ int SetMessageV3_2(/* a0 4 */ u_char *s, /* a1 5 */ int pri) {}
/* 00159028 0000001c */ void MesPassCheck() {}
/* 00159048 00000054 */ static void MesKeyCheck() {}

/* 001590a0 00000050 */ int MesStatusCheck() {
	/* a1 5 */ int ret;
}

/* 001590f0 00000098 */ void DrawButtonTex(/* s1 17 */ u_int pri, /* a1 5 */ int type, /* f20 58 */ float x, /* f21 59 */ float y, /* a2 6 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00159188 000000b0 */ void DrawButtonTexNZ(/* s1 17 */ u_int pri, /* a1 5 */ int type, /* f20 58 */ float x, /* f21 59 */ float y, /* a2 6 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00159238 000003c4 */ void DrawMessageBox(/* s7 23 */ u_int pri, /* f22 60 */ float x, /* f23 61 */ float y, /* f20 58 */ float sizew, /* f21 59 */ float sizeh, /* fp 30 */ u_char alp) {
	/* s4 20 */ int i;
	/* f25 63 */ float ssw;
	/* f26 64 */ float ssh;
	/* 0x0(sp) */ float px[8];
	/* 0x20(sp) */ float py[8];
	/* 0x40(sp) */ float sw[4];
	/* 0x50(sp) */ float sh[4];
	/* f24 62 */ float p1w;
	/* f5 43 */ float p1h;
	/* 0x60(sp) */ DISP_SPRT ds;
	/* f9 47 */ float msx;
	/* f8 46 */ float msy;
	/* 0xf0(sp) */ u_char alp2;
}

/* 00159600 00000084 */ int GetStrLength(/* a0 4 */ u_char *str) {
	/* a1 5 */ u_char *c;
	/* a2 6 */ int num;
	/* a3 7 */ int loop;
}

/* 00159688 000000e4 */ int GetStrWidth(/* a0 4 */ u_char *str) {
	/* a1 5 */ u_char *c;
	/* v1 3 */ u_char n;
	/* t0 8 */ int loop;
	/* a3 7 */ int w;
}

/* 00159770 00000138 */ void FontDispSample() {
	/* sdata 356ab0 */ static float w;
	/* sdata 356ab4 */ static float h;
	/* sdata 356ab8 */ static int fl;
	/* 0x0(sp) */ u_char str3[14];
	/* 0x10(sp) */ u_char str2[11];
	/* 0x20(sp) */ u_char str1[11];
	/* 0x30(sp) */ DISP_STR ds;
	/* 0x70(sp) */ STR_DAT sd;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/number.c
// *****************************************************************************

/* 001598a8 0000025c */ void NumberDisp(/* a0 4 */ int number, /* 0x10(sp) */ short int pos_x, /* 0x14(sp) */ short int pos_y, /* 0x18(sp) */ u_char font, /* 0x1c(sp) */ u_char r, /* fp 30 */ u_char g, /* s7 23 */ u_char b, /* s6 22 */ u_char alpha, /* 0xc0(sp) */ int pri, /* 0xc8(sp) */ int digit, /* 0xd0(sp) */ int type) {
	/* s4 20 */ int digit;
	/* s2 18 */ int i;
	/* s1 17 */ int multi10;
	/* t4 12 */ int multi10_bak;
	/* s3 19 */ int disp_number;
	/* s5 21 */ int disp_digit;
}

/* 00159b08 00000190 */ void NumberFontDisp(/* a0 4 */ u_char number, /* s7 23 */ u_char no, /* 0xb0(sp) */ short int pos_x, /* s4 20 */ short int pos_y, /* s1 17 */ u_char font, /* s5 21 */ u_char r, /* s6 22 */ u_char g, /* fp 30 */ u_char b, /* 0x160(sp) */ int pri, /* 0x168(sp) */ int alpha) {
	/* s3 19 */ int pri;
	/* 0xb4(sp) */ u_char alpha;
	/* 0x10(sp) */ u_short font_w[5];
	/* 0x20(sp) */ DISP_SPRT ds;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/snapshot.c
// *****************************************************************************

/* 00159c98 00000274 */ void TakeSnapshot(/* t7 15 */ char *data_i, /* s2 18 */ char *data_o, /* t5 13 */ int size_w, /* t6 14 */ int size_h, /* s1 17 */ int type) {
	/* s3 19 */ int bx;
	/* t9 25 */ int by;
	/* t1 9 */ int x;
	/* t0 8 */ int y;
	/* s4 20 */ int oneli;
	/* t8 24 */ int onelo;
	/* s0 16 */ int fd;
	/* 0x0(sp) */ char fname[256];
	/* t4 12 */ int k;
	/* t1 9 */ int nBytes;
	/* a3 7 */ int offset;
	/* s7 23 */ int tex_size;
	/* t3 11 */ int bitc;
	/* 0x100(sp) */ BITMAPFILEHEADER2 bfhp2;
	/* 0x110(sp) */ BITMAPINFOHEADER bihp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/tim2.c
// *****************************************************************************

/* 00159f10 0000002c */ void printClut(/* a0 4 */ void *pClut, /* a1 5 */ int ClutColors) {
	/* a1 5 */ int i;
}

/* 00159f40 00000030 */ void ResetClutAlpha(/* a0 4 */ void *pClut, /* a1 5 */ int ClutColors) {
	/* a1 5 */ int i;
	/* a0 4 */ u_char *pointer;
}

/* 00159f70 0000003c */ void ResetPIXELAlpha(/* a0 4 */ u_char *ip, /* a1 5 */ int size) {
	/* v0 2 */ int i;
}

/* 00159fb0 00000074 */ int Tim2CheckFileHeaer(/* a0 4 */ void *pTim2) {
	/* a0 4 */ TIM2_FILEHEADER *pFileHdr;
	/* a1 5 */ int i;
}

/* 0015a028 0000004c */ TIM2_PICTUREHEADER* Tim2GetPictureHeader(/* a0 4 */ void *pTim2, /* a1 5 */ int imgno) {
	/* a0 4 */ TIM2_PICTUREHEADER *pPictHdr;
	/* a1 5 */ int i;
}

/* 0015a078 0000000c */ int Tim2IsClut2(/* a0 4 */ TIM2_PICTUREHEADER *ph) {}

/* 0015a088 00000088 */ int Tim2GetMipMapPictureSize(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ int mipmap, /* a2 6 */ int *pWidth, /* a3 7 */ int *pHeight) {
	/* t0 8 */ int w;
	/* v0 2 */ int h;
	/* a1 5 */ int n;
}

/* 0015a110 00000038 */ TIM2_MIPMAPHEADER* Tim2GetMipMapHeader(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ int *pSize) {
	/* a2 6 */ TIM2_MIPMAPHEADER *pMmHdr;
	/* rdata 34cd08 */ static char mmsize[8];
}

/* 0015a148 0000005c */ void* Tim2GetUserSpace(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ int *pSize) {
	/* a0 4 */ void *pUserSpace;
	/* rdata 34cd10 */ static char mmsize[8];
}

/* 0015a1a8 00000058 */ void* Tim2GetUserData(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* s0 16 */ int *pSize) {
	/* a0 4 */ void *pUserSpace;
}

/* 0015a200 00000054 */ char* Tim2GetComment(/* a0 4 */ TIM2_PICTUREHEADER *ph) {
	/* a0 4 */ void *pUserSpace;
}

/* 0015a258 00000060 */ void* Tim2GetImage(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ int mipmap) {
	/* a3 7 */ void *pImage;
	/* a2 6 */ int i;
}

/* 0015a2b8 00000024 */ void* Tim2GetClut(/* a0 4 */ TIM2_PICTUREHEADER *ph) {
	/* v0 2 */ void *pClut;
}

/* 0015a2e0 000001f0 */ u_int Tim2GetClutColor(/* s1 17 */ TIM2_PICTUREHEADER *ph, /* s0 16 */ int clut, /* s2 18 */ int no) {
	/* a2 6 */ unsigned char *pClut;
	/* a1 5 */ int n;
	/* a2 6 */ unsigned char r;
	/* a0 4 */ unsigned char g;
	/* a1 5 */ unsigned char b;
	/* v1 3 */ unsigned char a;
}

/* 0015a4d0 00000268 */ u_int Tim2SetClutColor(/* s1 17 */ TIM2_PICTUREHEADER *ph, /* s2 18 */ int clut, /* s3 19 */ int no, /* s0 16 */ u_int newcolor) {
	/* a2 6 */ unsigned char *pClut;
	/* a2 6 */ unsigned char r;
	/* t2 10 */ unsigned char g;
	/* t0 8 */ unsigned char b;
	/* a3 7 */ unsigned char a;
	/* a1 5 */ int n;
}

/* 0015a738 00000188 */ u_int Tim2GetTexel(/* s1 17 */ TIM2_PICTUREHEADER *ph, /* s2 18 */ int mipmap, /* s3 19 */ int x, /* s4 20 */ int y) {
	/* s0 16 */ unsigned char *pImage;
	/* a3 7 */ int t;
	/* 0x0(sp) */ int w;
	/* 0x4(sp) */ int h;
}

/* 0015a8c0 000001f0 */ u_int Tim2SetTexel(/* s2 18 */ TIM2_PICTUREHEADER *ph, /* s3 19 */ int mipmap, /* s4 20 */ int x, /* s5 21 */ int y, /* s1 17 */ u_int newtexel) {
	/* s0 16 */ unsigned char *pImage;
	/* a3 7 */ int t;
	/* 0x0(sp) */ int w;
	/* 0x4(sp) */ int h;
	/* t2 10 */ u_int oldtexel;
}

/* 0015aab0 0000010c */ u_int Tim2GetTextureColor(/* s0 16 */ TIM2_PICTUREHEADER *ph, /* s1 17 */ int mipmap, /* s4 20 */ int clut, /* s2 18 */ int x, /* s3 19 */ int y) {
	/* a2 6 */ u_int t;
}

/* 0015abc0 00000060 */ u_int Tim2LoadPicture2(/* s0 16 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ u_int tbp, /* s3 19 */ u_int cbp, /* s2 18 */ u_int offset) {}
/* 0015ac20 00000008 */ u_int Tim2LoadPicture(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ u_int tbp, /* a2 6 */ u_int cbp) {}

/* 0015ac28 00000350 */ u_int Tim2LoadImage2(/* s1 17 */ TIM2_PICTUREHEADER *ph, /* s2 18 */ u_int tbp, /* s0 16 */ u_int offset) {
	/* rdata 34cd78 */ static int psmtbl[5];
	/* s6 22 */ int i;
	/* fp 30 */ int psm;
	/* s7 23 */ u_long128 *pImage;
	/* s3 19 */ int w;
	/* s4 20 */ int h;
	/* a2 6 */ int tbw;
	/* s5 21 */ TIM2_MIPMAPHEADER *pm;
	/* a1 5 */ int miptbp;
}

/* 0015af78 00000008 */ u_int Tim2LoadImage(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ u_int tbp) {}

/* 0015af80 00000338 */ u_int Tim2LoadClut2(/* s2 18 */ TIM2_PICTUREHEADER *ph, /* t1 9 */ u_int cbp, /* t0 8 */ u_int offset) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ sceGsLoadImage li;
	/* s1 17 */ u_long128 *pClut;
	/* t2 10 */ int cpsm;
}

/* 0015b2b8 00000008 */ u_int Tim2LoadClut(/* a0 4 */ TIM2_PICTUREHEADER *ph, /* a1 5 */ u_int cbp) {}

/* 0015b2c0 00000400 */ int Tim2TakeSnapshot(/* s4 20 */ sceGsDispEnv *d0, /* 0x10b0(sp) */ sceGsDispEnv *d1, /* a3 7 */ char *pszFname) {
	/* s1 17 */ int i;
	/* s6 22 */ int h;
	/* fp 30 */ int nHeight;
	/* s3 19 */ int nImageType;
	/* s0 16 */ int psm;
	/* s7 23 */ int nBytes;
	/* 0x0(sp) */ TIM2_FILEHEADER fhdr;
	/* 0x10(sp) */ TIM2_PICTUREHEADER phdr;
	/* a2 6 */ int nImageSize;
	/* 0x40(sp) */ u_char buf[4096];
	/* 0x1040(sp) */ sceGsStoreImage si;
}

/* 0015b6c0 0000018c */ void Tim2LoadTexture(/* s5 21 */ int psm, /* s6 22 */ u_int tbp, /* s7 23 */ int tbw, /* s0 16 */ int w, /* s4 20 */ int h, /* 0x60(sp) */ u_long128 *pImage) {
	/* 0x0(sp) */ sceGsLoadImage li;
	/* s1 17 */ int i;
	/* s2 18 */ int l;
	/* s3 19 */ int n;
	/* s0 16 */ u_long128 *p;
}

/* 0015b850 0000006c */ static int Tim2CalcBufWidth(/* a0 4 */ int psm, /* a1 5 */ int w) {}
/* 0015b8c0 0000001c */ static int Tim2CalcBufSize(/* a0 4 */ int psm, /* a1 5 */ int w, /* a2 6 */ int h) {}

/* 0015b8e0 0000003c */ static int Tim2GetLog2(/* a0 4 */ int n) {
	/* v1 3 */ int i;
}

/* 0015b920 00000250 */ u_long LoadTIM2Sub(/* s0 16 */ SPRITE_DATA *sno, /* a1 5 */ char *buf, /* a2 6 */ int no, /* s2 18 */ u_int offset) {
	/* s1 17 */ TIM2_PICTUREHEADER *ph;
}

/* 0015bb70 000000b0 */ u_long GetTex0Reg(/* a0 4 */ u_int addr, /* a1 5 */ int no, /* s1 17 */ u_int offset) {
	/* s0 16 */ u_long ret;
	/* v0 2 */ TIM2_PICTUREHEADER *ph;
}

/* 0015bc20 000000a0 */ u_long GetTex0RegTM(/* a0 4 */ u_int addr, /* s1 17 */ u_int offset) {
	/* s0 16 */ u_long ret;
	/* v0 2 */ TIM2_PICTUREHEADER *ph;
}

/* 0015bcc0 00000070 */ void InitTIM2Files() {}

/* 0015bd30 0000003c */ static void InitTIM2Addr() {
	/* a0 4 */ long int l;
}

/* 0015bd70 00000054 */ static void FlushTextureCache() {
	/* 0x0(sp) */ Q_WORDDATA pflsh[8];
}

/* 0015bdc8 0000003c */ static int GetLog2(/* a0 4 */ u_int n) {
	/* v1 3 */ int i;
}

/* 0015be08 000000c0 */ void SortEffectPacket() {
	/* t1 9 */ int i;
	/* a1 5 */ int j;
	/* a0 4 */ int n;
}

/* 0015bec8 000000c0 */ void SortMessagePacket() {
	/* t1 9 */ int i;
	/* a1 5 */ int j;
	/* a0 4 */ int n;
}

/* 0015bf88 0000002c */ void DmaSync_Vif1() {}

/* 0015bfb8 00000084 */ void DrawOne2D_P2(/* s0 16 */ Q_WORDDATA *packet_buf) {
	/* v1 3 */ int s;
}

/* 0015c040 00000198 */ void DrawAll2D_P2() {
	/* a2 6 */ int i;
	/* a0 4 */ int m;
	/* a2 6 */ int n;
	/* t1 9 */ int s;
}

/* 0015c1d8 0000016c */ void* DrawAllMes_P2(/* s0 16 */ u_int ret_addr) {
	/* t1 9 */ int i;
	/* v1 3 */ int m;
	/* v1 3 */ int n;
	/* t0 8 */ int s;
	/* v0 2 */ void *ret;
}

/* 0015c348 00000008 */ void DrawOne2D(/* a0 4 */ Q_WORDDATA *packet_buf) {}
/* 0015c350 00000030 */ void DrawOne2D2a(/* s0 16 */ Q_WORDDATA *packet_buf) {}
/* 0015c380 00000010 */ void DrawOne2D2b() {}
/* 0015c390 00000024 */ void DrawAll2D() {}
/* 0015c3b8 00000020 */ void DrawAllMes() {}
/* 0015c3d8 00000008 */ void LoadSprFileToMainD(/* a0 4 */ int no, /* a1 5 */ int addr) {}
/* 0015c3e0 00000008 */ void SetSprFile(/* a0 4 */ u_int addr) {}
/* 0015c3e8 00000010 */ void SetSprFile2(/* a0 4 */ u_int addr, /* a1 5 */ u_int offset) {}
/* 0015c3f8 00000010 */ void SetSprFile3(/* a0 4 */ u_int addr, /* a1 5 */ u_int offset) {}

/* 0015c408 0000006c */ void SetETIM2File(/* s2 18 */ int addr) {
	/* s0 16 */ int i;
	/* v0 2 */ int texnum;
	/* a1 5 */ int *offtop;
	/* 0x0(sp) */ SPRITE_DATA dummy;
}

/* 0015c478 00000008 */ void SetFTIM2File(/* a0 4 */ int addr) {}
/* 0015c480 00000008 */ void LoadTIM2File() {}

/* 0015c488 00000108 */ void SetScissor(/* a0 4 */ int pri, /* s4 20 */ int x, /* s2 18 */ int y, /* s3 19 */ int w, /* s0 16 */ int h) {
	/* s1 17 */ int div;
}

/* 0015c590 0000009c */ void ResetScissor(/* a0 4 */ int pri) {}
/* 0015c630 000000ec */ void CopySprDToSpr(/* a0 4 */ DISP_SPRT *s, /* a1 5 */ SPRT_DAT *d) {}
/* 0015c720 00000014 */ void _ftoi0(/* a0 4 */ int *out, /* a1 5 */ float *in) {}
/* 0015c738 00000014 */ void _ftoi4(/* a0 4 */ int *out, /* a1 5 */ float *in) {}

/* 0015c750 000008a0 */ void DispSprD(/* a0 4 */ DISP_SPRT *s) {
	/* a0 4 */ u_int ui;
	/* s0 16 */ int i;
	/* 0xa0(sp) */ int psm;
	/* f20 58 */ float ss;
	/* f0 38 */ float cc;
	/* a1 5 */ u_int matt;
	/* 0xa4(sp) */ u_int mu;
	/* 0xa8(sp) */ u_int mv;
	/* f22 60 */ float mw;
	/* f21 59 */ float mh;
	/* f6 44 */ float mx;
	/* f7 45 */ float my;
	/* f25 63 */ float mcrx;
	/* f24 62 */ float mcry;
	/* f2 40 */ float mcsx;
	/* f3 41 */ float mcsy;
	/* 0xac(sp) */ u_int mz;
	/* f8 46 */ float msw;
	/* f4 42 */ float msh;
	/* f23 61 */ float mrot;
	/* 0xb0(sp) */ u_long mtex1;
	/* 0xb8(sp) */ u_long mtexa;
	/* 0xc0(sp) */ u_long malpr;
	/* 0xc8(sp) */ u_long mzbuf;
	/* 0xd0(sp) */ u_long mtest;
	/* v0 2 */ u_long mgftg;
	/* 0xd8(sp) */ u_int mpri;
	/* 0xdc(sp) */ u_char mr;
	/* 0xe0(sp) */ u_char mg;
	/* 0xe4(sp) */ u_char mb;
	/* 0xe8(sp) */ u_char ma;
	/* v1 3 */ u_char mlud;
	/* 0x0(sp) */ float x[4];
	/* 0x10(sp) */ float y[4];
	/* 0x20(sp) */ float x2[4];
	/* 0x30(sp) */ float y2[4];
	/* 0x40(sp) */ u_int xx[4];
	/* 0x50(sp) */ u_int yy[4];
	/* 0x60(sp) */ u_int uu[4];
	/* 0x70(sp) */ u_int vv[4];
	/* 0x80(sp) */ sceVu0IVECTOR itmp;
	/* 0x90(sp) */ sceVu0FVECTOR ftmp;
}

/* 0015cff0 00000114 */ void CopySqrDToSqr(/* t1 9 */ DISP_SQAR *s, /* t2 10 */ SQAR_DAT *d) {
	/* t3 11 */ int i;
}

/* 0015d108 00000128 */ void CopyGSqDToSqr(/* t1 9 */ DISP_SQAR *s, /* t3 11 */ GSQR_DAT *d) {
	/* t2 10 */ int i;
}

/* 0015d230 0000011c */ void CopySq4DToSqr(/* t0 8 */ DISP_SQAR *s, /* t1 9 */ SQR4_DAT *d) {
	/* a3 7 */ int i;
}

/* 0015d350 00000150 */ void CopyGS4DToSqr(/* t2 10 */ DISP_SQAR *s, /* t3 11 */ GSQ4_DAT *d) {
	/* t1 9 */ int i;
}

/* 0015d4a0 0000069c */ void DispSqrD(/* a0 4 */ DISP_SQAR *s) {
	/* s0 16 */ int i;
	/* f21 59 */ float ss;
	/* f16 54 */ float cc;
	/* 0x0(sp) */ float mx[4];
	/* 0x10(sp) */ float my[4];
	/* f23 61 */ float mcrx;
	/* f22 60 */ float mcry;
	/* f2 40 */ float mcsx;
	/* f3 41 */ float mcsy;
	/* 0x20(sp) */ u_char mr[4];
	/* 0x30(sp) */ u_char mg[4];
	/* 0x40(sp) */ u_char mb[4];
	/* 0x50(sp) */ float x[4];
	/* 0x60(sp) */ float y[4];
	/* 0x70(sp) */ float x2[4];
	/* 0x80(sp) */ float y2[4];
	/* 0x90(sp) */ u_int xx[4];
	/* 0xa0(sp) */ u_int yy[4];
	/* 0xb0(sp) */ sceVu0FVECTOR ftmp;
	/* 0xc0(sp) */ sceVu0IVECTOR itmp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/tim2_new.c
// *****************************************************************************

/* 0015db40 00000120 */ u_int* MakeTim2Direct2(/* s1 17 */ u_int *pkt_addr, /* a1 5 */ u_int *tim2_addr, /* a2 6 */ int tbp) {
	/* t0 8 */ TIM2_PICTUREHEADER *tph;
	/* s2 18 */ u_int *img_addr;
	/* a3 7 */ u_int psm;
	/* a0 4 */ u_int tbw;
	/* v1 3 */ u_int qwc;
	/* s0 16 */ u_int nloop;
	/* t1 9 */ sceGsTex0 sgtx0;
	/* a0 4 */ Q_WORDDATA *qw;
}

/* 0015dc60 00000148 */ u_int* MakeClutDirect2(/* s0 16 */ u_int *pkt_addr, /* a1 5 */ u_int *tim2_addr, /* a2 6 */ int cbp) {
	/* t0 8 */ TIM2_PICTUREHEADER *tph;
	/* s2 18 */ u_int *img_addr;
	/* v1 3 */ u_int qwc;
	/* s1 17 */ u_int nloop;
	/* v1 3 */ sceGsTex0 sgtx0;
	/* a3 7 */ Q_WORDDATA *qw;
}

/* 0015dda8 00000040 */ u_int* MakeTim2ClutDirect2(/* a0 4 */ u_int *pkt_addr, /* s0 16 */ u_int *tim2, /* a2 6 */ int tbp, /* s1 17 */ int cbp) {}
/* 0015dde8 00000084 */ Q_WORDDATA* SetImageTransParam2(/* a0 4 */ Q_WORDDATA *qw, /* a1 5 */ int tbp, /* a2 6 */ int tbw, /* a3 7 */ int psm, /* t0 8 */ u_short w, /* t1 9 */ u_short h) {}

/* 0015de70 00000074 */ u_int* ChainPK2Direct(/* v0 2 */ u_int *pkt_addr, /* a1 5 */ u_int *tm2_addr) {
	/* s0 16 */ int i;
	/* v1 3 */ int texnum;
	/* s2 18 */ int addr;
	/* a1 5 */ int *offtop;
}

/* 0015dee8 00000090 */ void MakeFontTexSendPacket() {
	/* s3 19 */ u_int *pkt_addr;
	/* 0x0(sp) */ SPRITE_DATA dummy;
	/* s1 17 */ int i;
	/* v1 3 */ int texnum;
	/* s2 18 */ int addr;
}

/* 0015df78 0000004c */ void CallFontTexSendPacket() {}

/* 0015dfc8 00000060 */ void CallFontTexAndMesPacket() {
	/* a1 5 */ void *mmp;
}

/* 0015e028 000001cc */ void MakeTim2Direct3(/* a0 4 */ u_int *tim2_addr, /* a1 5 */ int tbp, /* a2 6 */ int offset) {
	/* t4 12 */ TIM2_PICTUREHEADER *tph;
	/* t6 14 */ u_int *img_addr;
	/* t2 10 */ u_int psm;
	/* a0 4 */ u_int tbw;
	/* v0 2 */ u_int qwc;
	/* t5 13 */ u_int nloop;
	/* a3 7 */ sceGsTex0 sgtx0;
	/* t0 8 */ int qwtop;
}

/* 0015e1f8 000001f0 */ void MakeClutDirect3(/* a0 4 */ u_int *tim2_addr, /* t2 10 */ int cbp, /* a2 6 */ int offset) {
	/* a3 7 */ TIM2_PICTUREHEADER *tph;
	/* t5 13 */ u_int *img_addr;
	/* v1 3 */ u_int qwc;
	/* t4 12 */ u_int nloop;
	/* a0 4 */ sceGsTex0 sgtx0;
	/* t3 11 */ int qwtop;
}

/* 0015e3e8 00000104 */ void MakeTim2ClutDirect3(/* s2 18 */ u_int tm2_addr, /* a1 5 */ int tbp, /* a2 6 */ int cbp, /* s3 19 */ int offset) {
	/* s1 17 */ int i;
	/* v0 2 */ int texnum;
	/* a3 7 */ int *offtop;
}

/* 0015e4f0 00000120 */ void MakeTim2ClutDirect4(/* s3 19 */ u_int tm2_addr, /* s5 21 */ int num, /* a2 6 */ int tbp, /* a3 7 */ int cbp, /* s4 20 */ int offset) {
	/* s1 17 */ int i;
	/* s2 18 */ int texnum;
	/* a3 7 */ int *offtop;
}

/* 0015e610 000000c8 */ void MakeTim2SendPacket(/* s0 16 */ u_int tm2_addr, /* s1 17 */ int offset) {}
/* 0015e6d8 000000ec */ void MakeTim2SendPacket_3Dpkt(/* s1 17 */ u_int tm2_addr, /* s0 16 */ int offset) {}
/* 0015e7c8 00000030 */ void Reserve2DPacket(/* a0 4 */ u_int pri) {}
/* 0015e7f8 00000034 */ void Reserve2DPacket_Load() {}
/* 0015e830 0000003c */ void SetG2DTopPkt(/* a0 4 */ u_int addr) {}
/* 0015e870 00000014 */ Q_WORDDATA* Get2DPacketBufferAddress() {}
/* 0015e888 00000024 */ void Set2DPacketBufferAddress(/* a0 4 */ Q_WORDDATA *addr) {}

/* 0015e8b0 000004a4 */ void DrawAll2DMes_P2() {
	/* a1 5 */ int i;
	/* a0 4 */ int m;
	/* a1 5 */ int n;
	/* a3 7 */ int s;
	/* t0 8 */ void *mmp;
	/* s2 18 */ int nch;
	/* s0 16 */ int npk;
	/* s3 19 */ int mch;
	/* s4 20 */ int mpk;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/rare_ene.c
// *****************************************************************************

/* 0015ed58 00000008 */ void LoadRareEneTex() {}

/* 0015ed60 00000994 */ void DrawRareEne_Sub(/* s5 21 */ int mno, /* s3 19 */ int dno, /* s0 16 */ float *pos, /* s1 17 */ int tblno, /* s2 18 */ int ani, /* t1 9 */ int al) {
	/* 0x4148(sp) */ u_char alp;
	/* v0 2 */ int a;
	/* s0 16 */ int i;
	/* t6 14 */ int j;
	/* t8 24 */ int k;
	/* a3 7 */ int m;
	/* 0x414c(sp) */ int n;
	/* 0x0(sp) */ int tx[4];
	/* 0x10(sp) */ int ty[4];
	/* 0x4150(sp) */ int offset;
	/* f2 40 */ float fm;
	/* 0x4140(sp) */ float rot_x;
	/* 0x4144(sp) */ float rot_y;
	/* 0x4154(sp) */ RARE_ENE_DAT *redp;
	/* 0x4158(sp) */ RARE_ENE_1DAT *re1dp;
	/* 0x415c(sp) */ SPRT_DAT *sdp;
	/* 0x20(sp) */ Q_WORDDATA qw[1024];
	/* 0x4020(sp) */ sceVu0FMATRIX slm;
	/* 0x4060(sp) */ sceVu0FMATRIX wlm;
	/* 0x40a0(sp) */ sceVu0IVECTOR ivec[4];
	/* 0x40e0(sp) */ sceVu0FVECTOR fvec[4];
	/* 0x4120(sp) */ sceVu0FVECTOR bpos;
	/* 0x4130(sp) */ sceVu0FVECTOR fzero;
	/* 0x4160(sp) */ int rx;
	/* 0x4164(sp) */ int ry;
	/* 0x4168(sp) */ int sp;
	/* 0x416c(sp) */ int sub;
	/* s0 16 */ float *v1;
}

/* 0015f6f8 00000490 */ void DrawRareEne() {
	/* s3 19 */ int i;
	/* s6 22 */ int j;
	/* a1 5 */ int n;
	/* 0x30(sp) */ int passflg[3];
	/* sdata 356af4 */ static int fl;
	/* sdata 356af8 */ static float spd;
	/* sdata 356afc */ static float rate;
	/* sdata 356b00 */ static float trate;
	/* bss 3bd580 */ static sceVu0FVECTOR cpos;
	/* bss 3bd590 */ static float alp[3];
	/* bss 3bd5a0 */ static void *efbuf[3];
	/* bss 3bd5b0 */ static int old_num[3];
	/* f1 39 */ float fx;
	/* f0 38 */ float fy;
	/* f12 50 */ float fz;
	/* f0 38 */ float l;
	/* s2 18 */ int nene;
	/* s0 16 */ RARE_ENE_DAT *redp;
	/* 0x40(sp) */ float *v1;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/gra3d.c
// *****************************************************************************

/* 0015fb88 00000090 */ u_int* LoadDataFromDVD(/* a0 4 */ u_char *fname) {
	/* s2 18 */ int rfd;
	/* s0 16 */ int len;
}

/* 0015fc18 000000a4 */ u_int* LoadDataFromDVD2(/* a0 4 */ u_char *fname, /* s2 18 */ u_int *addr) {
	/* s1 17 */ int rfd;
	/* s0 16 */ int len;
}

/* 0015fcc0 000000bc */ void LoadPackedTextureFromMemory(/* s1 17 */ u_int *pointer) {
	/* v0 2 */ TIM2_PICTUREHEADER *ph;
}

/* 0015fd80 00000098 */ void LoadPackedTexture(/* a0 4 */ u_char *fname) {
	/* s2 18 */ int rfd;
	/* s1 17 */ int len;
}

/* 0015fe18 00000070 */ void CalcRoomCoord(/* s1 17 */ void *sgd_top, /* s2 18 */ float *pos) {
	/* s0 16 */ SgCOORDUNIT *cp;
	/* v0 2 */ float *v0;
	/* s2 18 */ float *v1;
}

/* 0015fe88 0000009c */ void SetUpRoomCoordinate(/* a0 4 */ int disp_room, /* s1 17 */ float *pos) {}

/* 0015ff28 000001ec */ void ChoudoPreRender(/* s1 17 */ FURN_WRK *furn) {
	/* s3 19 */ u_int *tmpModelp;
	/* a1 5 */ u_int *lit_dat;
	/* v1 3 */ int disp_chodo;
	/* a0 4 */ int room_no;
	/* f12 50 */ float grot;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* bss 3bd5c0 */ static SgLIGHT lights[3];
	/* bss 3bd770 */ static SgLIGHT plights[16];
	/* bss 3be070 */ static SgLIGHT slights[16];
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00160118 00000140 */ void ChoudoPreRenderDual(/* s0 16 */ FURN_WRK *furn) {
	/* s3 19 */ u_int *tmpModelp;
	/* a1 5 */ u_int *lit_dat;
	/* v1 3 */ int disp_chodo;
	/* a0 4 */ int room_no;
	/* bss 3be970 */ static SgLIGHT lights[3];
	/* bss 3beb20 */ static SgLIGHT plights[16];
	/* bss 3bf420 */ static SgLIGHT slights[16];
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
}

/* 00160258 000001e0 */ void SetPreRender(/* s2 18 */ void *buf, /* s4 20 */ void *light_buf) {
	/* bss 3bfd20 */ static SgLIGHT lights[3];
	/* bss 3bfed0 */ static SgLIGHT plights[16];
	/* bss 3c07d0 */ static SgLIGHT slights[16];
	/* s3 19 */ SgCOORDUNIT *cp;
	/* s0 16 */ int i;
}

/* 00160438 00000318 */ void ScenePrerender() {
	/* s1 17 */ int i;
	/* s6 22 */ int disp_room;
	/* a0 4 */ int disp_model;
	/* s5 21 */ u_int *tmpModelp;
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
	/* bss 3c10d0 */ static SgLIGHT lights;
	/* bss 3c1160 */ static SgLIGHT ilights[3];
	/* bss 3c1310 */ static SgLIGHT plights[16];
	/* bss 3c1c10 */ static SgLIGHT slights[16];
}

/* 00160750 00000060 */ void RequestBlackWhiteMode() {}
/* 001607b0 0000005c */ void CancelBlackWhiteMode() {}

/* 00160810 00000110 */ void SetEnvironment() {
	/* v0 2 */ qword *base;
}

/* 00160920 00000110 */ void SetEnvironment2() {
	/* v0 2 */ qword *base;
}

/* 00160a30 000000a0 */ void ClearFrame() {
	/* v0 2 */ dword *base;
}

/* 00160ad0 00000094 */ void SetLWS(/* s1 17 */ SgCOORDUNIT *cp, /* s2 18 */ SgCAMERA *camera) {}

/* 00160b68 0000009c */ void CalcCoordinate(/* s3 19 */ SgCOORDUNIT *cp, /* s1 17 */ int blocks) {
	/* s0 16 */ int i;
}

/* 00160c08 0000006c */ void CopyCoordinate(/* a0 4 */ SgCOORDUNIT *dcp, /* a1 5 */ SgCOORDUNIT *scp, /* a2 6 */ int blocks) {
	/* v1 3 */ int i;
}

/* 00160c78 00000040 */ char* appendchar(/* s0 16 */ char *dest, /* a1 5 */ char *source, /* s1 17 */ char *append) {}

/* 00160cb8 00000068 */ void SetUnitMatrix(/* a0 4 */ u_int *pmodel) {
	/* s2 18 */ HeaderSection *hs;
	/* a0 4 */ SgCOORDUNIT *cp;
	/* s1 17 */ int i;
}

/* 00160d20 00000120 */ void InitializeRoom(/* s0 16 */ RMDL_ADDR *room_tbl) {
	/* a0 4 */ u_int pack_num;
	/* a2 6 */ u_int *prim;
}

/* 00160e40 000000c0 */ void gra3dInitFirst() {
	/* s0 16 */ sceDmaChan *d1;
}

/* 00160f00 000000a8 */ u_int PlayerModelInit() {
	/* s2 18 */ int i;
	/* s0 16 */ u_int *tmpp;
	/* a0 4 */ u_int *p;
}

/* 00160fa8 00000104 */ u_int PlayerAccessoryInit(/* a0 4 */ int addr) {
	/* s1 17 */ int i;
	/* s0 16 */ u_int *tmpp;
}

/* 001610b0 00000064 */ u_int SGDLoadInit(/* s1 17 */ u_int *addr, /* s0 16 */ int size) {}

/* 00161118 00000074 */ void gra3dInit() {
	/* a0 4 */ int i;
}

/* 00161190 00000034 */ void Init3D() {}
/* 001611c8 00000044 */ void SetDefaultLightPower(/* f12 50 */ float pow) {}
/* 00161210 00000018 */ void RequestSpirit(/* a0 4 */ int no, /* a1 5 */ int swch) {}

/* 00161228 00000034 */ void InitRequestSpirit() {
	/* a0 4 */ u_int i;
}

/* 00161260 00000018 */ void RequestFly(/* a0 4 */ int no, /* a1 5 */ int swch) {}

/* 00161278 00000034 */ void InitRequestFly() {
	/* a0 4 */ u_int i;
}

/* 001612b0 0000003c */ void SetSgSpotLight(/* a0 4 */ SPOT_WRK *spot, /* a1 5 */ SgLIGHT *plight) {
	/* a0 4 */ float *v0;
	/* a1 5 */ float *v1;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* a3 7 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 001612f0 00000230 */ void SetMyLight(/* s0 16 */ LIGHT_PACK *light_pack, /* s1 17 */ float *eyevec) {
	/* t2 10 */ int i;
	/* t3 11 */ int num;
	/* bss 3c2510 */ static SgLIGHT parallel[6];
	/* bss 3c2870 */ static SgLIGHT point[6];
	/* bss 3c2bd0 */ static SgLIGHT spot[6];
	/* v0 2 */ float *v;
	/* v1 3 */ float *v;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v0;
	/* a3 7 */ float *v1;
	/* v1 3 */ float *v0;
	/* a1 5 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
}

/* 00161520 00000518 */ void TransMyLight(/* 0x1c0(sp) */ LIGHT_PACK *dest_pack, /* 0x1c4(sp) */ LIGHT_PACK *light_pack, /* 0x1c8(sp) */ float *pos) {
	/* s4 20 */ int i;
	/* v1 3 */ int j;
	/* a1 5 */ int k;
	/* s6 22 */ int num;
	/* 0x0(sp) */ int nbuf[9];
	/* fp 30 */ int stocks;
	/* 0x30(sp) */ sceVu0FVECTOR subvec;
	/* 0x40(sp) */ sceVu0FVECTOR mulvec;
	/* 0x50(sp) */ sceVu0FVECTOR dirbuf[9];
	/* 0xe0(sp) */ sceVu0FVECTOR difbuf[9];
	/* f1 39 */ float len;
	/* 0x170(sp) */ float lenbuf[9];
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* s2 18 */ float *v0;
	/* s1 17 */ float *v0;
	/* s0 16 */ float *v1;
	/* s0 16 */ int dest_num;
	/* s2 18 */ int source_num;
	/* f20 58 */ float ad;
	/* f21 59 */ float as;
	/* f0 38 */ float total;
	/* 0x1a0(sp) */ sceVu0FVECTOR ld;
	/* 0x1b0(sp) */ sceVu0FVECTOR ls;
	/* v0 2 */ float *v;
	/* s0 16 */ float *v;
	/* a3 7 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00161a38 000001fc */ void CalcReflectLight() {
	/* s1 17 */ SPOT_WRK *psp;
	/* 0x0(sp) */ sceVu0FVECTOR cdir;
	/* 0x10(sp) */ sceVu0FVECTOR sdirection;
	/* 0x20(sp) */ sceVu0FVECTOR ipos;
	/* f21 59 */ float ip;
	/* f2 40 */ float ip2;
	/* f20 58 */ float len;
	/* s1 17 */ float *v0;
	/* s1 17 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v1;
}

/* 00161c38 00000074 */ void AppendReflectLight(/* a3 7 */ LIGHT_PACK *light_pack) {}
/* 00161cb0 00000020 */ void DeleteReflectLight(/* a0 4 */ LIGHT_PACK *light_pack) {}

/* 00161cd0 000000b8 */ void SetMyLightObj(/* s3 19 */ LIGHT_PACK *trans_pack, /* s0 16 */ LIGHT_PACK *light_pack, /* s4 20 */ float *cam_zd, /* s1 17 */ float *pos) {
	/* s7 23 */ int old_parallel_num;
	/* s5 21 */ int old_spot_num;
	/* s6 22 */ int old_point_num;
}

/* 00161d88 00000070 */ void SetMyLightRoom(/* s0 16 */ LIGHT_PACK *light_pack, /* s2 18 */ float *eyevec) {
	/* v0 2 */ int old_spot_num;
}

/* 00161df8 0000005c */ void SceneSortUnit() {}

/* 00161e58 000000ac */ void Kagu027Control(/* s0 16 */ void *sgd_top) {
	/* sdata 356b28 */ static float trans_rate;
	/* sdata 356b2c */ static float trans_added;
	/* a0 4 */ TextureAnimation *pta;
	/* s0 16 */ SgMaterial *matp;
	/* s1 17 */ u_int *phead;
}

/* 00161f08 000000c0 */ void MakeDebugValue() {}
/* 00161fc8 00000070 */ void AppendSearchModel(/* a2 6 */ void *sgd_top, /* a1 5 */ int room_no) {}

/* 00162038 00000124 */ void DrawOneRoom(/* s1 17 */ int no) {
	/* s2 18 */ int disp_room;
	/* s0 16 */ void *mdl_addr;
	/* v0 2 */ SgCOORDUNIT *cp;
	/* v1 3 */ float *v0;
}

/* 00162160 00000054 */ void DrawRoom(/* a0 4 */ int disp_no) {
	/* s0 16 */ int j;
}

/* 001621b8 0000033c */ int CalcShadowDirecion(/* s2 18 */ ShadowHandle *shandle) {
	/* v0 2 */ HeaderSection *hs;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* 0x0(sp) */ sceVu0FVECTOR center;
	/* 0x10(sp) */ sceVu0FVECTOR interest;
	/* 0x20(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x30(sp) */ sceVu0FVECTOR sdirection;
	/* f0 38 */ float degree;
	/* v1 3 */ int num;
	/* s5 21 */ int i;
	/* s7 23 */ SPOT_WRK *psp;
	/* data 2f70f0 */ static int chk_bound[4];
	/* v1 3 */ float *v0;
}

/* 001624f8 00000044 */ u_int* SearchBoundingBoxPacket(/* a0 4 */ u_int *prim) {}

/* 00162540 00000198 */ void DrawRoomShadow() {
	/* s3 19 */ int i;
	/* s0 16 */ int disp_room;
	/* a0 4 */ SgCOORDUNIT *cp;
	/* 0x0(sp) */ SgCOORDUNIT oldcoord;
	/* 0xe0(sp) */ ShadowHandle shandle;
	/* v0 2 */ u_int *prim;
}

/* 001626d8 00000598 */ void DrawFurniture(/* 0x0(sp) */ int disp_room) {
	/* a3 7 */ int i;
	/* s5 21 */ int j;
	/* a0 4 */ int disp_chodo;
	/* 0x4(sp) */ int now_room;
	/* s2 18 */ SgCOORDUNIT *cp;
	/* s4 20 */ u_int *tmpModelp;
	/* f20 58 */ float grot;
	/* sbss 357960 */ static int old_frame_counter;
	/* s0 16 */ u_char acs_flg;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* a2 6 */ char flg;
	/* v1 3 */ u_int k;
	/* v0 2 */ HeaderSection *ghs;
	/* data 2f7100 */ static sceVu0FVECTOR ofs;
}

/* 00162c70 00000044 */ void SetWScissorBox(/* a0 4 */ int disp_room) {}
/* 00162cb8 0000001c */ void ReSetWScissorBox() {}
/* 00162cd8 00000014 */ void InitFogSelection() {}

/* 00162cf0 0000015c */ void FogSelection(/* s0 16 */ int disp_room) {
	/* s1 17 */ u_char now_cam_door_or;
}

/* 00162e50 000002fc */ void gra3dDraw() {
	/* s0 16 */ int i;
	/* s0 16 */ int j;
	/* s0 16 */ int disp_room;
	/* sdata 356b40 */ static float arad;
	/* sdata 356b44 */ static float adeg;
}

/* 00163150 00000334 */ int CheckModelBoundingBox(/* s7 23 */ float *lwmtx[4], /* s5 21 */ sceVu0FVECTOR *bbox) {
	/* s2 18 */ int i;
	/* s4 20 */ int clip1;
	/* v1 3 */ int xmax_flg;
	/* a1 5 */ int xmin_flg;
	/* a2 6 */ int ymin_flg;
	/* a3 7 */ int ymax_flg;
	/* s6 22 */ sceVu0FVECTOR *tmpvec;
	/* 0x0(sp) */ sceVu0FMATRIX tmpmat;
	/* f1 39 */ float fog_max;
	/* s6 22 */ float *v0;
	/* s5 21 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
}

/* 00163488 000001fc */ void CalcGirlCoord() {
	/* s2 18 */ HeaderSection *hs;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* f20 58 */ float grot;
	/* sdata 356b48 */ static float tmprot;
	/* 0x0(sp) */ ShadowHandle shandle;
	/* 0x60(sp) */ SgCOORDUNIT oldcoord;
	/* v1 3 */ float *v0;
}

/* 00163688 00000520 */ void DrawGirl(/* s4 20 */ int in_mirror) {
	/* s5 21 */ HeaderSection *hs;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* f21 59 */ float grot;
	/* 0x0(sp) */ ShadowHandle shandle;
	/* 0x60(sp) */ sceVu0FVECTOR goffset;
	/* a1 5 */ u_int i;
	/* 0x70(sp) */ sceVu0FMATRIX transmtx;
	/* 0xb0(sp) */ sceVu0FVECTOR tgirlbox[8];
	/* 0x130(sp) */ u_int *dssearch_models[30];
	/* s3 19 */ u_int dsearch_num;
	/* 0x1b0(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x1f0(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x200(sp) */ sceVu0FVECTOR tmpvec2;
}

/* 00163ba8 0000050c */ int DrawEnemy(/* a0 4 */ int no) {
	/* s1 17 */ int i;
	/* s7 23 */ int j;
	/* 0xe0(sp) */ u_int *tmpModelp;
	/* s4 20 */ SgCOORDUNIT *cp;
	/* f12 50 */ float grot;
	/* f21 59 */ float scale;
	/* fp 30 */ u_int mdl_no;
	/* 0x0(sp) */ sceVu0FVECTOR ebox[8];
	/* 0xe4(sp) */ MANMDL_DAT *mdat;
	/* s5 21 */ ANI_CTRL *ani_ctrl;
	/* 0x80(sp) */ sceVu0FVECTOR offset;
	/* bss 3c2f30 */ static int old_frame_counter[4];
	/* v0 2 */ HeaderSection *hs2;
	/* s0 16 */ SgCOORDUNIT *cp2;
	/* 0x90(sp) */ sceVu0FVECTOR vec;
	/* 0xa0(sp) */ sceVu0FMATRIX m;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 001640b8 00000188 */ int DrawFlyMove(/* a1 5 */ int work_no) {
	/* s0 16 */ SgCOORDUNIT *cp;
	/* s2 18 */ u_int *tmpModelp;
	/* v0 2 */ u_int no;
	/* f12 50 */ float grot;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/leditor.c
// *****************************************************************************

/* 00164240 0000010c */ void ReadLights(/* t1 9 */ ROOM_LIGHT *rdata, /* a1 5 */ void *buf) {
	/* a2 6 */ int num;
	/* a3 7 */ int i;
	/* t2 10 */ u_int *prim;
	/* t0 8 */ sceVu0FVECTOR *pvec;
	/* t0 8 */ float *v1;
	/* v0 2 */ float *v0;
	/* t0 8 */ float *v1;
	/* v1 3 */ float *v0;
	/* t0 8 */ float *v1;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00164350 0000031c */ static void LoadLightData(/* s4 20 */ DEBUG_MENU **dbgmenu_tbl, /* a1 5 */ int disp_room) {
	/* s1 17 */ int i;
	/* s3 19 */ int sub_menu_num;
	/* s2 18 */ int nnum;
	/* s0 16 */ DEBUG_SUB_MENU *psubmenu;
}

/* 00164670 000000a8 */ static void GetSGDLightDataPointer(/* a0 4 */ int room_no, /* a1 5 */ u_int **amb_p, /* a2 6 */ u_int **infinite_p, /* a3 7 */ u_int **point_p, /* t0 8 */ u_int **spot_p) {
	/* a0 4 */ u_int *prim;
}

/* 00164718 00000180 */ static void WriteSGDLightDataPointer(/* a0 4 */ int room_no, /* a1 5 */ u_int **amb_p, /* v1 3 */ u_int **infinite_p, /* a3 7 */ u_int **point_p, /* t0 8 */ u_int **spot_p) {
	/* t1 9 */ int i;
	/* t2 10 */ sceVu0FVECTOR *pvec;
	/* t2 10 */ float *v0;
	/* t2 10 */ float *v0;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v0;
	/* v1 3 */ float *v1;
	/* t2 10 */ float *v0;
	/* v0 2 */ float *v1;
	/* t2 10 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00164898 000001b4 */ static void SaveLightData(/* s2 18 */ int room_no) {
	/* 0xe0(sp) */ u_int *amb_p;
	/* 0xe4(sp) */ u_int *infinite_p;
	/* 0xe8(sp) */ u_int *point_p;
	/* 0xec(sp) */ u_int *spot_p;
	/* s4 20 */ int len;
	/* s0 16 */ int rfd;
	/* data 2f8fe8 */ static char LoadDir[31];
	/* 0x0(sp) */ char filename[100];
	/* 0x70(sp) */ char filename2[100];
}

/* 00164a50 00000168 */ void ApplyLight(/* s3 19 */ int room_no) {
	/* s0 16 */ void *mdl_addr;
	/* s1 17 */ SgCOORDUNIT *cp;
	/* 0x0(sp) */ u_int *amb_p;
	/* 0x4(sp) */ u_int *infinite_p;
	/* 0x8(sp) */ u_int *point_p;
	/* 0xc(sp) */ u_int *spot_p;
}

/* 00164bb8 00000034 */ static int ReadNMax(/* a0 4 */ DEBUG_MENU **dbgmenu_tbl, /* a1 5 */ int now_tree) {
	/* a0 4 */ DEBUG_MENU *parent;
	/* v1 3 */ DEBUG_SUB_MENU *select;
}

/* 00164bf0 0000075c */ void MakeLightEditorData(/* s5 21 */ DEBUG_MENU **dbgmenu_tbl, /* a1 5 */ int now_tree) {
	/* s1 17 */ int i;
	/* a0 4 */ int j;
	/* s0 16 */ int disp_room;
	/* s2 18 */ int menu_end;
	/* s3 19 */ int menu_start;
	/* s0 16 */ DEBUG_SUB_MENU *psubmenu;
	/* s0 16 */ SgLIGHT *plight;
	/* sdata 356b84 */ static int old_disp;
	/* sdata 356b88 */ static int loff;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00165350 0000013c */ void MakeFogData(/* a0 4 */ DEBUG_SUB_MENU **dbgmenu_tbl, /* a1 5 */ int pos) {
	/* a0 4 */ int disp_room;
}

/* 00165490 000000f0 */ void ApplyFogData() {
	/* a2 6 */ int disp_room;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/load3d.c
// *****************************************************************************

/* 00165580 000004c0 */ u_int* RoomMdlLoadReq(/* s5 21 */ u_int *addr, /* s0 16 */ u_char blk_no, /* s1 17 */ u_char msn_no, /* s4 20 */ u_char room_no, /* fp 30 */ u_char sereq_type) {
	/* s3 19 */ ROOM_LOAD_BLOCK *rlb;
	/* s4 20 */ int next_addr;
	/* s2 18 */ int i;
	/* 0x0(sp) */ int file_no;
	/* a2 6 */ int tmp_load_id;
}

/* 00165a40 00000280 */ int RoomMdlLoadWait() {
	/* s2 18 */ ROOM_LOAD_BLOCK *rlb;
	/* s1 17 */ FURN_WRK *fwp;
	/* s0 16 */ int i;
}

/* 00165cc0 000000fc */ void SetRenewDoorAddr(/* t9 25 */ u_char blk_no) {
	/* v1 3 */ ROOM_LOAD_BLOCK *rlb;
	/* t4 12 */ ROOM_LOAD_BLOCK *seek_rlb;
	/* a1 5 */ int i;
	/* v1 3 */ int j;
	/* a2 6 */ int k;
}

/* 00165dc0 000000a4 */ void SetRenewDoorAddrForMovie() {
	/* t0 8 */ ROOM_LOAD_BLOCK *rlb;
	/* a1 5 */ int i;
}

/* 00165e68 000000e8 */ void InitModelLoad() {
	/* a0 4 */ u_int i;
}

/* 00165f50 000000dc */ void DelSameMdlID(/* t3 11 */ u_short *mdl_id, /* a1 5 */ int *mdl_num) {
	/* a3 7 */ int i;
	/* a2 6 */ int j;
	/* 0x0(sp) */ u_short id_tmp[30];
}

/* 00166030 00000128 */ void SetPreRenderR022(/* s1 17 */ int flg) {
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
	/* 0x20(sp) */ SgLIGHT lights;
	/* 0xb0(sp) */ SgLIGHT ilights[3];
	/* 0x260(sp) */ SgLIGHT plights[16];
	/* 0xb60(sp) */ SgLIGHT slights[16];
}

/* 00166158 0000005c */ static int LoadFDCheck(/* a0 4 */ u_short id, /* a1 5 */ char flg) {
	/* v0 2 */ short int *mdl_num;
}

/* 001661b8 00000034 */ void LoadItemModel(/* a0 4 */ u_int *tmpp) {
	/* v1 3 */ int i;
}

/* 001661f0 0000001c */ void ItemLoadAfterInit(/* a0 4 */ int item_no, /* a1 5 */ int addr) {}

/* 00166210 000001ac */ int InitializeRoomUnder(/* s0 16 */ RMDL_ADDR *room_tbl) {
	/* sdata 356b9c */ static int init_st;
	/* a0 4 */ u_int pack_num;
	/* a2 6 */ u_int *prim;
	/* s1 17 */ int ret;
}

/* 001663c0 0000011c */ int LoadInitFurnModel(/* s1 17 */ ROOM_LOAD_BLOCK *rlb) {
	/* sdata 356ba0 */ static int init_st;
	/* sdata 356ba4 */ static int load_cnt;
	/* sbss 3579a8 */ static int load_id;
	/* s2 18 */ int ret;
	/* s0 16 */ u_short furn_id;
}

/* 001664e0 000001d0 */ int LoadInitDoorModel(/* s1 17 */ ROOM_LOAD_BLOCK *rlb) {
	/* sdata 356ba8 */ static int init_st;
	/* sdata 356bac */ static int load_cnt;
	/* sbss 3579ac */ static int load_id;
	/* s0 16 */ FURN_WRK *fwp;
	/* s1 17 */ int i;
	/* s3 19 */ int ret;
	/* s0 16 */ u_short door_id;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mdlwork.c
// *****************************************************************************

/* 001666b0 00000044 */ void ManmdlSetAlpha(/* a0 4 */ void *sgd_top, /* a1 5 */ u_char alpha) {
	/* v1 3 */ SgMaterial *matp;
	/* a2 6 */ u_int *phead;
}

/* 001666f8 00000034 */ char motCheckTrRateMdl(/* a0 4 */ u_int mdl_no) {}
/* 00166730 0000007c */ u_int* MpkMapUnit(/* s0 16 */ u_int *mpk_p) {}

/* 001667b0 00000108 */ void DrawGirlSubObj(/* s2 18 */ u_int *mpk_p, /* s5 21 */ u_char alpha) {
	/* s1 17 */ u_int i;
	/* s3 19 */ u_int obj_num;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x10(sp) */ sceVu0FVECTOR vf2reg;
	/* s0 16 */ HeaderSection *hs;
	/* s6 22 */ SgCOORDUNIT *cp;
	/* 0x20(sp) */ char obj_id[2][2];
}

/* 001668b8 000000c8 */ void DrawEneSubObj(/* s3 19 */ u_int *mpk_p, /* s7 23 */ u_char alpha1, /* s5 21 */ u_char alpha2) {
	/* s2 18 */ u_int i;
	/* s1 17 */ HeaderSection *hs;
	/* s6 22 */ SgCOORDUNIT *cp;
	/* s4 20 */ u_int obj_num;
	/* s0 16 */ u_char alpha;
}

/* 00166980 00000094 */ void SortUnitRefCoordKind(/* s0 16 */ void *sgd_top, /* s1 17 */ SgCOORDUNIT *coordp, /* s2 18 */ int num) {
	/* s3 19 */ int old_di;
}

/* 00166a18 00000110 */ void SortUnitRefCoordP(/* s0 16 */ void *sgd_top, /* a1 5 */ SgCOORDUNIT *coordp, /* s1 17 */ int pnum) {
	/* s1 17 */ int i;
	/* s2 18 */ u_int *pk;
}

/* 00166b28 00000144 */ void SortUnitRefCoord(/* s0 16 */ void *sgd_top, /* a1 5 */ SgCOORDUNIT *coordp, /* s1 17 */ int pnum) {
	/* s1 17 */ int i;
	/* s2 18 */ u_int *pk;
}

/* 00166c70 0000004c */ void InitEneVramCtrl() {
	/* s1 17 */ u_int i;
}

/* 00166cc0 00000018 */ void InitEneVramCtrlSub(/* a0 4 */ ENE_VRAM_CTRL *ev_ctrl) {}

/* 00166cd8 00000184 */ void SetEneTexture(/* a0 4 */ u_int work_id) {
	/* s1 17 */ u_int *mdl_p;
	/* s2 18 */ u_int offset;
	/* a0 4 */ u_int i;
	/* v1 3 */ u_int num;
	/* s0 16 */ u_int mdl_no;
}

/* 00166e60 000000a4 */ void SetEneVram(/* s0 16 */ u_int *mdl_p, /* s2 18 */ int offset) {
	/* s1 17 */ u_int *mpk_p;
	/* a0 4 */ u_int *pk2_p;
}

/* 00166f08 00000120 */ void ReleaseEneTexture(/* s1 17 */ u_int work_id) {
	/* s2 18 */ u_int *mdl_p;
	/* s3 19 */ u_int mdl_no;
	/* s4 20 */ u_int offset;
	/* a1 5 */ u_int i;
}

/* 00167028 00000068 */ void SendManMdlTex() {
	/* s1 17 */ u_int i;
}

/* 00167090 0000006c */ void SetTextureToScene() {
	/* s1 17 */ u_int i;
	/* a1 5 */ int offset;
}

/* 00167100 00000058 */ void SetTextureAfterScene() {
	/* s1 17 */ u_int i;
}

/* 00167158 00000088 */ void MpkAddTexOffset(/* s0 16 */ u_int *mpk_p, /* s2 18 */ int offset) {}

/* 001671e0 00000098 */ void SetManmdlTm2(/* s3 19 */ u_int *pak_addr, /* s1 17 */ int offset, /* s4 20 */ char mode) {
	/* s2 18 */ u_int tm2_num;
	/* s0 16 */ u_int i;
	/* v0 2 */ u_int *tm2_addr;
}

/* 00167278 00000058 */ void BackupEneVramCtrl() {
	/* a0 4 */ u_int i;
}

/* 001672d0 00000058 */ void SetupEneVramCtrl() {
	/* a0 4 */ u_int i;
}

/* 00167328 0000002c */ void motPrintVramCtrl() {
	/* v1 3 */ u_int i;
}

/* 00167358 00000008 */ void ManTexflush() {}

/* 00167360 000000ac */ void SgdAddTexOffset(/* a0 4 */ void *sgd_top, /* a1 5 */ int offset) {
	/* v1 3 */ u_int i;
	/* a2 6 */ u_int *p;
	/* t0 8 */ u_int *nextprim;
	/* t4 12 */ u_int *pk;
}

/* 00167410 0000002c */ u_int* GetOkuraBuffer(/* a0 4 */ u_char work_id) {}
/* 00167440 00000010 */ void ReqMsnInitPlyr(/* a0 4 */ u_char msn_no) {}

/* 00167450 000002c4 */ char MsnInitPlyr() {
	/* sbss 3579bc */ static char sync_flg;
	/* s0 16 */ char pk2_id;
}

/* 00167718 00000044 */ void motInitMsn() {}
/* 00167760 00000048 */ void motInitAniMdlBuf() {}
/* 001677a8 00000018 */ void motInitAniMdlBufSub(/* a0 4 */ ANI_MDL_CTRL *am_ctrl) {}

/* 001677c0 00000094 */ u_char motSetAniMdlBuf(/* a0 4 */ u_int anm_no, /* a1 5 */ u_int *anm_p) {
	/* v1 3 */ u_int i;
	/* a3 7 */ u_int j;
	/* t2 10 */ u_int pkt_no;
}

/* 00167858 000000e0 */ void motReleaseOneAniMdlBuf(/* s3 19 */ u_int anm_no, /* s2 18 */ u_int *anm_p) {
	/* s0 16 */ u_int i;
	/* a3 7 */ u_int j;
}

/* 00167938 00000008 */ void motReleaseAniMdlBuf(/* a0 4 */ u_int anm_no, /* a1 5 */ u_int *anm_p) {}

/* 00167940 000000dc */ ANI_CTRL* motGetAniMdl(/* a0 4 */ u_int work_no) {
	/* a2 6 */ u_int i;
	/* a1 5 */ u_int anm_no;
	/* a3 7 */ u_int pkt_no;
	/* t0 8 */ ANI_CTRL *ani_ctrl;
}

/* 00167a20 00000038 */ void motInitPacketCtrl() {
	/* a1 5 */ u_int i;
}

/* 00167a58 00000084 */ void motSetAnmPacket(/* a0 4 */ u_char no) {
	/* a1 5 */ u_int i;
}

/* 00167ae0 00000084 */ void motReleaseAnmPacket(/* a3 7 */ u_char no) {}

/* 00167b68 000000d4 */ void motEneTexAnm(/* s0 16 */ ANI_CTRL *ani_ctrl, /* a1 5 */ u_int work_id) {
	/* a2 6 */ u_int *pk2_p;
	/* v1 3 */ u_int i;
	/* s1 17 */ u_int offset;
	/* sdata 356bb4 */ static u_int cnt;
}

/* 00167c40 00000038 */ void motInitEneKuttuki() {}

/* 00167c78 00000064 */ void motSetEnemyKuttuki(/* a0 4 */ u_char work_id, /* a3 7 */ u_char bone_id, /* f12 50 */ float radius, /* f13 51 */ float ry) {
	/* 0x0(sp) */ short int bone_list[1];
}

/* 00167ce0 0000002c */ void motReleaseEnemyKuttuki(/* a0 4 */ u_char work_id) {}

/* 00167d10 00000074 */ void SetPlyrClut(/* a0 4 */ int bw_flg) {
	/* s1 17 */ u_int *clut_addr;
	/* s0 16 */ u_int i;
	/* s2 18 */ u_int num;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mdlact.c
// *****************************************************************************

/* 00167d88 00000348 */ char motPlayerActCtrl(/* s1 17 */ SgCOORDUNIT *cp) {
	/* 0x0(sp) */ sceVu0FVECTOR p;
	/* 0x10(sp) */ sceVu0FVECTOR trot;
	/* sdata 356bc0 */ static float rot[2];
	/* f20 58 */ float spd;
	/* s7 23 */ char type;
	/* 0x20(sp) */ sceVu0FVECTOR target;
	/* f21 59 */ float yrot;
	/* f3 41 */ float xrot;
	/* a1 5 */ u_int i;
	/* f2 40 */ float sub;
	/* f4 42 */ float tmp;
}

/* 001680d0 00000044 */ void motPlyrActExec(/* a0 4 */ SgCOORDUNIT *cp) {}
/* 00168118 00000038 */ void motInitPlyrAct() {}
/* 00168150 00000038 */ void motPlyrActReq(/* a0 4 */ char act_no, /* a1 5 */ sceVu0FVECTOR *pos, /* a2 6 */ u_short cnt) {}
/* 00168188 0000001c */ void motPlyrActStop() {}

/* 001681a8 000000ac */ char motPlyrActLookAt(/* s1 17 */ SgCOORDUNIT *cp) {
	/* 0x0(sp) */ sceVu0FVECTOR sub;
}

/* 00168258 00000138 */ char motPlyrActSurprise(/* a0 4 */ SgCOORDUNIT *cp) {
	/* sbss 3579c0 */ static u_int se_handle;
}

/* 00168390 000000f0 */ char motPlyrActSowasowa(/* a0 4 */ SgCOORDUNIT *cp) {
	/* sdata 356bc8 */ static char ofs;
}

/* 00168480 0000013c */ char motPlyrActKyoro(/* a0 4 */ SgCOORDUNIT *cp) {
	/* a1 5 */ PLYR_FURI_DAT *dat;
}

/* 001685c0 00000224 */ void motGetPlyrNeckRot(/* s5 21 */ SgCOORDUNIT *cp, /* s3 19 */ float *trot, /* a2 6 */ float *tpos) {
	/* 0x0(sp) */ sceVu0FVECTOR p;
	/* 0x10(sp) */ sceVu0FVECTOR d0;
	/* 0x20(sp) */ sceVu0FVECTOR d1;
	/* 0x30(sp) */ sceVu0FVECTOR d2;
	/* 0x40(sp) */ sceVu0FVECTOR n;
	/* 0x50(sp) */ sceVu0FVECTOR v0;
	/* 0x60(sp) */ sceVu0FVECTOR v1;
	/* f0 38 */ float inner;
}

/* 001687e8 00000020 */ void InitQuake() {}
/* 00168808 00000018 */ void StopQuake() {}
/* 00168820 00000090 */ void ReqQuake(/* a0 4 */ u_int furn_id, /* f12 50 */ float pow, /* t0 8 */ u_int time, /* a2 6 */ u_int loop, /* s0 16 */ u_int stop_flg) {}

/* 001688b0 0000029c */ char QuakeCamera() {
	/* f23 61 */ float v0;
	/* f22 60 */ float v1;
	/* f7 45 */ float v2;
	/* 0x0(sp) */ sceVu0FVECTOR val[2];
	/* 0x20(sp) */ sceVu0FVECTOR xd;
	/* v0 2 */ char i;
	/* s2 18 */ QUAKE_CTRL *qk_p;
	/* f20 58 */ float dat;
}

/* 00168b50 00000050 */ float motGetRandom(/* f20 58 */ float upper, /* f21 59 */ float lower) {}

/* 00168ba0 00000120 */ float motLinearSupValue(/* f21 59 */ float moto, /* f2 40 */ float saki, /* a0 4 */ u_char mode, /* a1 5 */ u_int cnt, /* a3 7 */ u_int all_cnt) {
	/* a1 5 */ u_int now_cnt;
	/* f0 38 */ float val;
	/* f13 51 */ float cnt_rate;
	/* f20 58 */ float dv;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mime.c
// *****************************************************************************

/* 00168cc0 000001c0 */ u_int* mimInitMimeCtrl(/* 0xa0(sp) */ MIME_CTRL *m_ctrl, /* s7 23 */ MIME_DAT *mdat, /* s2 18 */ u_int *mim_p, /* 0xa4(sp) */ u_int *mdl_p, /* s6 22 */ u_int *tmp_p) {
	/* s1 17 */ u_int i;
	/* a1 5 */ u_int j;
	/* 0xa8(sp) */ u_int mim_num;
	/* 0x0(sp) */ u_int parts_buf[20];
	/* 0x50(sp) */ u_int *parts_p[20];
	/* a3 7 */ u_int *parts;
	/* s0 16 */ u_int fsize;
	/* s3 19 */ u_int parts_no;
	/* s5 21 */ u_int flg;
}

/* 00168e80 00000238 */ void mimInitAcsCtrl(/* s3 19 */ ANI_CTRL *ani_ctrl, /* t2 10 */ u_short mdl_no) {
	/* s0 16 */ u_int i;
	/* s1 17 */ u_int j;
	/* a1 5 */ u_int k;
	/* a3 7 */ u_int wmim_num;
	/* a2 6 */ WMIM_DAT *wmim_tbl;
	/* s2 18 */ MIME_CTRL *m_ctrl;
	/* s4 20 */ u_char flg;
	/* 0x0(sp) */ u_char name[100];
	/* v0 2 */ WMIM_DAT *wdat;
}

/* 001690b8 00000054 */ void mimInitLoop(/* a0 4 */ ANI_CTRL *ani_ctrl) {
	/* a1 5 */ u_int i;
}

/* 00169110 00000058 */ void mimRequest(/* s0 16 */ MIME_CTRL *m_ctrl, /* s1 17 */ u_char rev) {}
/* 00169168 00000058 */ void mimRequestLastFrame(/* s0 16 */ MIME_CTRL *m_ctrl, /* s1 17 */ u_char rev) {}
/* 001691c0 0000006c */ void mimMepatiReq(/* a0 4 */ u_char mode, /* a1 5 */ u_char rev) {}
/* 00169230 0000006c */ void mimLNigiriReq(/* a0 4 */ u_char mode, /* a1 5 */ u_char rev) {}
/* 001692a0 0000006c */ void mimRNigiriReq(/* a0 4 */ u_char mode, /* a1 5 */ u_char rev) {}
/* 00169310 00000014 */ void mimStop(/* a0 4 */ MIME_CTRL *m_ctrl) {}
/* 00169328 00000008 */ void mimSetReso(/* a0 4 */ MIME_CTRL *m_ctrl, /* a1 5 */ u_char reso) {}

/* 00169330 00000040 */ void mimClearVertex(/* a0 4 */ MIME_CTRL *m_ctrl) {
	/* a1 5 */ u_int i;
	/* a3 7 */ u_int vtx_num;
	/* a0 4 */ sceVu0FVECTOR *pkt;
	/* v1 3 */ sceVu0FVECTOR *vtx;
	/* v0 2 */ MIME_DAT *mdat;
	/* a0 4 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 00169370 0000026c */ void mimCalcVertex(/* fp 30 */ MIME_CTRL *m_ctrl, /* 0x20(sp) */ WMIM_CTRL *wmim, /* a2 6 */ u_char clear_vtx_flg) {
	/* s0 16 */ u_int i;
	/* a0 4 */ u_int j;
	/* s2 18 */ u_int k;
	/* s4 20 */ u_int vtx_num;
	/* 0x24(sp) */ u_int key_num;
	/* v0 2 */ u_int vtx_ofs;
	/* 0x0(sp) */ sceVu0FVECTOR vec;
	/* s1 17 */ sceVu0FVECTOR *key;
	/* s0 16 */ sceVu0FVECTOR *pkt;
	/* v0 2 */ sceVu0FVECTOR *key_top;
	/* v1 3 */ u_int *ko_top;
	/* f20 58 */ float weight;
	/* s7 23 */ MIME_DAT *mdat;
	/* 0x10(sp) */ u_char acs_flg[6];
	/* s6 22 */ u_int koblock_num;
}

/* 001695e0 00000070 */ void mimSetMimeCtrl(/* s0 16 */ MIME_CTRL *m_ctrl, /* a1 5 */ MIME_DAT *mdat, /* a2 6 */ u_int furn_id, /* a3 7 */ u_int parts_id) {}

/* 00169650 00000030 */ u_int* mimSetMimeDat(/* a0 4 */ MIME_DAT *mdat, /* a1 5 */ u_int *mim_p, /* a2 6 */ u_int *tmp_buf, /* a3 7 */ u_int *mdl_p) {
	/* t0 8 */ PHEAD *ph;
}

/* 00169680 00000040 */ void mimSetOriVertex(/* a0 4 */ MIME_DAT *mdat) {
	/* a1 5 */ u_int i;
	/* a3 7 */ u_int vtx_num;
	/* a0 4 */ sceVu0FVECTOR *vtx;
	/* v1 3 */ sceVu0FVECTOR *pkt;
	/* a0 4 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 001696c0 000001d4 */ void mimSetVertex(/* s3 19 */ ANI_CTRL *ani_ctrl) {
	/* s2 18 */ MIME_DAT *mdat;
	/* v0 2 */ u_int stat;
	/* s1 17 */ u_int i;
	/* 0x0(sp) */ u_char flg[30];
	/* s0 16 */ MIME_CTRL *m_ctrl;
	/* s0 16 */ MIME_CTRL *m_ctrl;
}

/* 00169898 0000006c */ void mimClearToScene() {
	/* s0 16 */ u_int i;
}

/* 00169908 0000006c */ void mimClearAllVertex(/* s3 19 */ ANI_CTRL *ani_ctrl) {
	/* s2 18 */ u_int mim_num;
	/* s0 16 */ u_int i;
}

/* 00169978 00000100 */ u_char mimAddFrame(/* s0 16 */ MIME_CTRL *m_ctrl, /* a2 6 */ u_int *dat) {}

/* 00169a78 00000164 */ void SceneMimSetVertex(/* s3 19 */ ANI_CTRL *ani_ctrl, /* s4 20 */ u_int frame) {
	/* s1 17 */ MIME_DAT *mdat;
	/* s2 18 */ u_int i;
	/* 0x0(sp) */ u_char flg[30];
	/* s0 16 */ MIME_CTRL *m_ctrl;
}

/* 00169be0 00000050 */ void mimChodoInitWork() {
	/* a0 4 */ u_int i;
}

/* 00169c30 000000f0 */ void mimChodoSetWork(/* a2 6 */ u_int furn_id, /* a1 5 */ u_char room_no) {
	/* a3 7 */ u_int i;
	/* t0 8 */ char room_id;
	/* t1 9 */ u_char mim_no;
}

/* 00169d20 0000009c */ void mimChodoReleaseWork(/* a3 7 */ u_int furn_id, /* a1 5 */ u_char room_no) {
	/* a2 6 */ u_int i;
}

/* 00169dc0 00000218 */ void mimInitChodo(/* s4 20 */ u_int *mim_p, /* 0x0(sp) */ u_short *furn_id, /* 0x4(sp) */ u_char room_id, /* a3 7 */ u_short room_no, /* fp 30 */ u_int num) {
	/* s6 22 */ u_short i;
	/* a1 5 */ u_short j;
	/* 0x8(sp) */ u_int *pkt_p;
	/* 0xc(sp) */ u_short mim_num;
	/* s7 23 */ u_char *chodo_num;
	/* s5 21 */ u_int fsize;
	/* a3 7 */ u_int flg;
}

/* 00169fd8 00000120 */ void mimDispChodo(/* s0 16 */ MIME_CTRL *m_ctrl, /* s2 18 */ u_int *mdl_p) {
	/* s1 17 */ MIME_DAT *mdat;
}

/* 0016a0f8 00000054 */ u_char mimChodoChkExec(/* a0 4 */ u_int furn_id) {
	/* a1 5 */ u_char i;
}

/* 0016a150 000001bc */ void mimChodoRequest(/* a0 4 */ FURN_ACT_WRK *fawp, /* s5 21 */ u_char mode, /* s2 18 */ u_char rev) {
	/* s1 17 */ u_char i;
}

/* 0016a310 00000054 */ void mimChodoStop(/* a1 5 */ u_int furn_id) {
	/* v1 3 */ u_char i;
}

/* 0016a368 00000088 */ void mimChodoSetReso(/* s2 18 */ u_int furn_id, /* s1 17 */ u_char reso) {
	/* s0 16 */ u_char i;
}

/* 0016a3f0 00000008 */ u_int mimGetFrameNum(/* a0 4 */ u_int *mim_top) {}
/* 0016a3f8 00000008 */ u_int mimGetKeymdlNum(/* a0 4 */ u_int *mim_top) {}
/* 0016a400 00000008 */ u_int mimGetPartsNo(/* a0 4 */ u_int *mim_top) {}
/* 0016a408 00000008 */ u_int mimGetFlg(/* a0 4 */ u_int *mim_top) {}
/* 0016a410 00000008 */ u_char* mimGetWeightName(/* a0 4 */ u_int *mim_top) {}

/* 0016a418 0000002c */ float mimGetWavdata(/* a0 4 */ u_int *mim_top, /* a1 5 */ u_int key_no, /* a2 6 */ u_int frame) {
	/* v0 2 */ u_int *wav_addr;
}

/* 0016a448 00000020 */ sceVu0FVECTOR* mimGetKeymdlTop(/* a0 4 */ u_int *mim_top, /* a1 5 */ u_int key_no) {
	/* a1 5 */ u_int *vtx_addr;
}

/* 0016a468 00000070 */ void mimAddressMapping(/* a0 4 */ u_int *top_addr) {
	/* a2 6 */ MIM_FILE_HEADER *head_p;
	/* a1 5 */ MIM_ADDR_TABLE *tbl_p;
	/* a3 7 */ u_int i;
}

/* 0016a4d8 00000038 */ void mimPlyrMepatiCtrl() {}

/* 0016a510 0000004c */ void mimInitWeight(/* a0 4 */ ANI_CTRL *ani_ctrl) {
	/* a1 5 */ u_int i;
}

/* 0016a560 00000264 */ void mimWeightCtrl(/* s2 18 */ ANI_CTRL *ani_ctrl, /* a1 5 */ u_int weight_id, /* f20 58 */ float scale) {
	/* v1 3 */ u_int i;
	/* 0x0(sp) */ sceVu0FMATRIX m;
	/* 0x40(sp) */ sceVu0FVECTOR pos;
	/* 0x50(sp) */ sceVu0FVECTOR f;
	/* 0x60(sp) */ sceVu0FVECTOR reverse;
	/* 0x70(sp) */ sceVu0FVECTOR force;
	/* v1 3 */ HeaderSection *hs;
	/* s4 20 */ WMIM_CTRL *w_ctrl;
	/* s5 21 */ WMIM_DAT *wdat;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/accessory.c
// *****************************************************************************

/* 0016a7c8 00000050 */ void InitPlyrAcsAlpha() {
	/* a0 4 */ char i;
}

/* 0016a818 0000009c */ void DispPlyrAcs(/* a0 4 */ u_int *base_p, /* s0 16 */ u_int *mdl_p, /* s1 17 */ ACS_ALPHA *acs_ctrl, /* a3 7 */ u_int bone_id) {
	/* v1 3 */ SgCOORDUNIT *cp;
	/* a0 4 */ SgCOORDUNIT *cp2;
}

/* 0016a8b8 000000c8 */ void PlyrAcsAlphaCtrl() {
	/* a3 7 */ u_int i;
	/* 0x0(sp) */ u_char spd[2];
	/* 0x10(sp) */ u_char dspd[2];
}

/* 0016a980 00000040 */ void acsInitRopeWork() {
	/* a0 4 */ u_int i;
}

/* 0016a9c0 00000078 */ void acsRopeSetWork(/* a1 5 */ u_int furn_id) {
	/* a0 4 */ u_int i;
	/* a2 6 */ u_char acs_no;
}

/* 0016aa38 00000070 */ void acsRopeReleaseWork(/* a2 6 */ u_int furn_id) {
	/* a1 5 */ u_int i;
}

/* 0016aaa8 00000044 */ sceVu0FVECTOR* acsGetRopePos(/* a0 4 */ u_int furn_id) {
	/* a2 6 */ u_int i;
}

/* 0016aaf0 00000518 */ void acsInitRopeSub(/* a0 4 */ u_int work_id, /* a1 5 */ u_int furn_id, /* a2 6 */ u_int type) {
	/* s4 20 */ u_int i;
	/* s0 16 */ u_int j;
	/* s3 19 */ ROPE_CTRL *rope;
	/* 0x0(sp) */ sceVu0FVECTOR p1;
	/* 0x10(sp) */ sceVu0FVECTOR p2;
	/* 0x20(sp) */ sceVu0FVECTOR p3;
	/* 0x30(sp) */ sceVu0FVECTOR gravity;
	/* s7 23 */ C_PARTICLE *current;
	/* 0x40(sp) */ sceVu0FVECTOR d;
	/* 0x50(sp) */ sceVu0FVECTOR force;
	/* f0 38 */ float r0;
	/* f12 50 */ float dr;
	/* s0 16 */ u_int id0;
	/* s1 17 */ u_int id1;
}

/* 0016b008 0000004c */ void acsRopeMoveRequest(/* a0 4 */ u_int furn_id, /* a1 5 */ u_char move_mode, /* f12 50 */ float pow) {
	/* a2 6 */ u_char i;
}

/* 0016b058 00000040 */ void acsRopeMoveStop(/* a0 4 */ u_int furn_id) {
	/* a1 5 */ u_char i;
}

/* 0016b098 00000050 */ u_char acsCheckRopeMoveExec(/* a0 4 */ u_int furn_id) {
	/* a1 5 */ u_char i;
}

/* 0016b0e8 0000033c */ void acsCalcCoordinate(/* s6 22 */ SgCOORDUNIT *cp, /* 0x170(sp) */ u_int block_num, /* s0 16 */ FURN_WRK *f_wrk, /* s5 21 */ ROPE_CTRL *rope) {
	/* f20 58 */ float grot;
	/* s1 17 */ u_int i;
	/* 0x0(sp) */ sceVu0FVECTOR trans[10];
	/* 0xa0(sp) */ sceVu0FVECTOR x;
	/* 0xb0(sp) */ sceVu0FVECTOR y;
	/* 0xc0(sp) */ sceVu0FVECTOR z;
	/* 0xd0(sp) */ sceVu0FMATRIX base;
	/* v0 2 */ float *v0;
	/* fp 30 */ float *v1;
	/* 0x110(sp) */ sceVu0FVECTOR vec;
	/* 0x120(sp) */ sceVu0FMATRIX m;
	/* 0x160(sp) */ sceVu0FVECTOR axis;
}

/* 0016b428 00000094 */ void acsSetMoveDir(/* s1 17 */ float *dir) {}
/* 0016b4c0 00000054 */ void acsRopeMoveCtrl(/* a1 5 */ ROPE_CTRL *rope) {}

/* 0016b518 000001ac */ void acsRopeMoveWind(/* s2 18 */ ROPE_CTRL *rope, /* a1 5 */ char dir_cng) {
	/* 0x0(sp) */ sceVu0FVECTOR wind;
	/* s4 20 */ C_PARTICLE *current;
	/* s1 17 */ u_int i;
	/* s1 17 */ char cnt;
	/* v0 2 */ char flg;
}

/* 0016b6c8 00000098 */ void acsRopeMoveVib(/* s2 18 */ ROPE_CTRL *rope) {
	/* 0x0(sp) */ sceVu0FVECTOR wind;
	/* s3 19 */ C_PARTICLE *current;
	/* s1 17 */ u_int i;
}

/* 0016b760 00000064 */ void acsRopeMoveFall(/* a0 4 */ ROPE_CTRL *rope) {
	/* s0 16 */ C_PARTICLE *current;
	/* v0 2 */ u_int i;
}

/* 0016b7c8 00000614 */ void acsMoveRope(/* s7 23 */ ROPE_CTRL *rope, /* 0x3f0(sp) */ SgCOORDUNIT *cp, /* 0x3f4(sp) */ COLLISION_DAT *collision, /* a1 5 */ float *l2w_inscale[4]) {
	/* s3 19 */ u_int i;
	/* s5 21 */ u_int j;
	/* 0x0(sp) */ sceVu0FMATRIX m;
	/* 0x40(sp) */ sceVu0FMATRIX m1;
	/* 0x80(sp) */ sceVu0FMATRIX w2c[5];
	/* 0x1c0(sp) */ sceVu0FMATRIX l2c[5];
	/* 0x300(sp) */ sceVu0FMATRIX l2w;
	/* 0x340(sp) */ sceVu0FMATRIX w2l;
	/* 0x380(sp) */ sceVu0FVECTOR gravity;
	/* fp 30 */ C_PARTICLE *current;
	/* 0x3f8(sp) */ ROPE_DAT *rdat;
	/* 0x3fc(sp) */ u_int fixed_num;
	/* 0x390(sp) */ sceVu0FVECTOR d;
	/* 0x3a0(sp) */ sceVu0FVECTOR force;
	/* f0 38 */ float r0;
	/* f12 50 */ float dr;
	/* s0 16 */ u_int id0;
	/* s1 17 */ u_int id1;
	/* 0x3b0(sp) */ sceVu0FVECTOR p;
	/* 0x3c0(sp) */ sceVu0FVECTOR v;
	/* 0x3d0(sp) */ sceVu0FVECTOR p1;
	/* 0x3e0(sp) */ sceVu0FVECTOR v1;
	/* v0 2 */ u_char hit;
}

/* 0016bde0 00000814 */ u_int* acsInitCloth(/* a0 4 */ CLOTH_CTRL *cloth_top, /* 0x20(sp) */ u_int *mpk_p, /* a2 6 */ u_int *top_addr, /* a3 7 */ u_int mdl_no) {
	/* s2 18 */ u_int i;
	/* s6 22 */ CLOTH *dat;
	/* s1 17 */ CLOTH_CTRL *cloth;
	/* v1 3 */ PHEAD *ph;
	/* s5 21 */ sceVu0FVECTOR *vtx;
	/* 0x24(sp) */ u_int *addr;
	/* s3 19 */ u_int div;
	/* s4 20 */ u_int div1;
	/* s7 23 */ u_int div2;
	/* 0x28(sp) */ u_int cloth_no;
	/* a0 4 */ u_char id1;
	/* v0 2 */ u_char id2;
	/* a1 5 */ u_char id1;
	/* v0 2 */ u_char id2;
	/* a2 6 */ u_char j;
	/* a1 5 */ u_char id1;
	/* v0 2 */ u_char id2;
	/* a1 5 */ u_char j;
	/* a3 7 */ u_char id1;
	/* a1 5 */ u_char id2;
	/* a0 4 */ u_char j;
	/* 0x0(sp) */ u_int ofs[2];
}

/* 0016c5f8 00000238 */ void acsClothCtrl(/* s1 17 */ ANI_CTRL *ani_ctrl, /* 0x20(sp) */ u_int *mpk_p, /* fp 30 */ u_int mdl_no, /* 0x24(sp) */ u_char scene_flg) {
	/* s0 16 */ u_int i;
	/* 0x28(sp) */ u_int limit;
	/* s6 22 */ CLOTH_CTRL *cloth;
	/* s7 23 */ SgCOORDUNIT *cp;
	/* s3 19 */ sceVu0FVECTOR *vtx;
	/* v1 3 */ PHEAD *ph;
	/* s5 21 */ u_int no;
	/* data 2fca80 */ static sceVu0FVECTOR pbak;
	/* 0x0(sp) */ sceVu0FVECTOR sub;
	/* 0x10(sp) */ sceVu0FVECTOR pos;
	/* f20 58 */ float val;
	/* v0 2 */ float *v1;
	/* v1 3 */ CLOTH_DAT *cdat;
	/* s4 20 */ COLLISION_DAT *collision;
	/* f20 58 */ float scale;
}

/* 0016c830 00000a04 */ void acsMoveCloth(/* 0x440(sp) */ sceVu0FVECTOR *vtx, /* s5 21 */ CLOTH_CTRL *cloth, /* 0x444(sp) */ SgCOORDUNIT *cp, /* 0x448(sp) */ COLLISION_DAT *collision, /* f21 59 */ float scale, /* f20 58 */ float collision_scale, /* 0x44c(sp) */ u_int mdl_no) {
	/* s4 20 */ u_int i;
	/* s6 22 */ u_int j;
	/* s7 23 */ u_int k;
	/* 0x0(sp) */ sceVu0FVECTOR gravity;
	/* 0x450(sp) */ C_PARTICLE *current;
	/* 0x454(sp) */ SPRING *spring;
	/* 0x458(sp) */ CLOTH *dat;
	/* 0x10(sp) */ sceVu0FMATRIX l2w;
	/* 0x50(sp) */ sceVu0FMATRIX w2l;
	/* 0x90(sp) */ sceVu0FMATRIX l2w_rist;
	/* 0xd0(sp) */ char restrict[121];
	/* 0x150(sp) */ sceVu0FVECTOR ldef;
	/* 0x160(sp) */ sceVu0FVECTOR d;
	/* 0x170(sp) */ sceVu0FVECTOR force;
	/* f0 38 */ float r0;
	/* f12 50 */ float dr;
	/* s1 17 */ u_int id0;
	/* s2 18 */ u_int id1;
	/* 0x180(sp) */ sceVu0FMATRIX w2c[5];
	/* 0x2c0(sp) */ sceVu0FMATRIX c2w[5];
	/* 0x400(sp) */ sceVu0FVECTOR p;
	/* 0x410(sp) */ sceVu0FVECTOR v;
	/* 0x420(sp) */ sceVu0FVECTOR p1;
	/* 0x430(sp) */ sceVu0FVECTOR v1;
	/* v0 2 */ u_char hit;
	/* s0 16 */ u_short id0;
	/* s1 17 */ u_short id1;
	/* s1 17 */ u_short cnt;
	/* s0 16 */ u_short id;
	/* s0 16 */ u_short id;
}

/* 0016d238 00000130 */ u_char acsCheckCollisionSphere(/* v0 2 */ SPHERE *sphere, /* s2 18 */ float *current, /* s3 19 */ float *relative_v, /* f22 60 */ float Ke) {
	/* f21 59 */ float r1;
	/* f20 58 */ float r2;
	/* 0x0(sp) */ sceVu0FVECTOR tmp;
	/* 0x10(sp) */ sceVu0FVECTOR v;
	/* 0x20(sp) */ sceVu0FVECTOR v1;
}

/* 0016d368 00000318 */ u_char acsCheckCollisionTube(/* s3 19 */ TUBE *tube, /* s4 20 */ float *current, /* s7 23 */ float *relative_v, /* f23 61 */ float Ke) {
	/* 0x0(sp) */ sceVu0FVECTOR dir0;
	/* 0x10(sp) */ sceVu0FVECTOR dir1;
	/* 0x20(sp) */ sceVu0FVECTOR v0;
	/* 0x30(sp) */ sceVu0FVECTOR v1;
	/* 0x40(sp) */ sceVu0FVECTOR v2;
	/* 0x50(sp) */ sceVu0FVECTOR n;
	/* 0x60(sp) */ sceVu0FVECTOR PL;
	/* 0x70(sp) */ sceVu0FVECTOR AP;
	/* 0x80(sp) */ sceVu0FVECTOR PA;
	/* 0x90(sp) */ sceVu0FVECTOR P1P0;
	/* 0xa0(sp) */ sceVu0FVECTOR normal;
	/* 0xb0(sp) */ sceVu0FVECTOR p0;
	/* 0xc0(sp) */ sceVu0FVECTOR p1;
	/* f0 38 */ float dist;
	/* f21 59 */ float inner;
	/* 0xd0(sp) */ sceVu0FVECTOR n;
	/* 0xe0(sp) */ sceVu0FVECTOR v;
	/* f0 38 */ float ydif;
	/* f20 58 */ float rdif;
	/* v1 3 */ u_int axis;
}

/* 0016d680 0000005c */ void SetLWS2(/* s0 16 */ SgCOORDUNIT *cp, /* s2 18 */ SgCAMERA *camera) {}

/* 0016d6e0 00000044 */ void acsInitChodoWork() {
	/* a0 4 */ u_int i;
}

/* 0016d728 0000006c */ void acsChodoSetWork(/* a0 4 */ u_int furn_id) {
	/* a1 5 */ u_int i;
	/* a2 6 */ u_char acs_no;
}

/* 0016d798 0000008c */ void acsChodoReleaseWork(/* t0 8 */ u_int furn_id) {
	/* a2 6 */ u_int i;
}

/* 0016d828 0000006c */ void acsChodoMoveRequest(/* a0 4 */ u_int furn_id) {
	/* a2 6 */ u_char i;
}

/* 0016d898 0000004c */ void acsChodoMoveStop(/* a0 4 */ u_int furn_id) {
	/* a2 6 */ u_char i;
}

/* 0016d8e8 000000e8 */ void acsChodoMove(/* s1 17 */ CMOVE_CTRL *mv, /* s2 18 */ u_int *sgd_top) {
	/* 0x0(sp) */ sceVu0FVECTOR p;
	/* s0 16 */ SgCOORDUNIT *cp;
}

/* 0016d9d0 00000008 */ void acsChodoMoveKage(/* a0 4 */ SgCOORDUNIT *cp, /* a1 5 */ float *p, /* a2 6 */ CMOVE_CTRL *mv) {}

/* 0016d9d8 00000274 */ char acsChodoMoveBird(/* s6 22 */ SgCOORDUNIT *cp, /* 0x50(sp) */ float *p, /* s4 20 */ CMOVE_CTRL *mv) {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* s3 19 */ u_int i;
	/* 0x54(sp) */ u_int all_cnt;
	/* 0x58(sp) */ u_int reaction_cnt;
	/* a0 4 */ char mode;
	/* 0x10(sp) */ sceVu0FVECTOR start;
	/* 0x20(sp) */ sceVu0FVECTOR end;
	/* 0x30(sp) */ sceVu0FVECTOR v1;
	/* 0x40(sp) */ sceVu0FVECTOR v2;
}

/* 0016dc50 000003e8 */ void acsChodoMoveNingyo(/* 0x130(sp) */ SgCOORDUNIT *cp, /* s7 23 */ float *p, /* s4 20 */ CMOVE_CTRL *mv) {
	/* data 2fca90 */ static sceVu0FVECTOR ofs;
	/* data 2fcaa0 */ static sceVu0FVECTOR rot[13];
	/* data 2fcb70 */ static sceVu0FVECTOR trans[13];
	/* v1 3 */ u_int id2;
	/* s1 17 */ u_int i;
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* 0x10(sp) */ sceVu0FMATRIX m;
	/* 0x50(sp) */ sceVu0FMATRIX m0;
	/* 0x90(sp) */ sceVu0FMATRIX m1;
	/* 0xd0(sp) */ sceVu0FVECTOR r1;
	/* 0xe0(sp) */ sceVu0FVECTOR r2;
	/* 0xf0(sp) */ sceVu0FMATRIX s;
}

/* 0016e038 0000038c */ char acsChodoMoveKaidan(/* s5 21 */ SgCOORDUNIT *cp, /* s2 18 */ float *p1, /* s1 17 */ CMOVE_CTRL *mv) {
	/* bss 3f5680 */ static sceVu0FVECTOR p;
	/* bss 3f5690 */ static sceVu0FVECTOR v;
	/* sdata 356bdc */ static float a;
	/* sdata 356be0 */ static float Ke;
	/* sdata 356be4 */ static float Kd;
	/* sdata 356be8 */ static float dv;
	/* data 2fcc40 */ static sceVu0FVECTOR start;
	/* sbss 3579c4 */ static char cnt;
	/* f4 42 */ float earth;
	/* sdata 356bec */ static float r;
	/* s6 22 */ char se_flg;
	/* f3 41 */ float dr;
	/* 0x0(sp) */ sceVu0FVECTOR tmp;
	/* 0x10(sp) */ sceVu0FVECTOR sub;
}

/* 0016e3c8 00000114 */ void SetSpeFurnLight(/* s2 18 */ FURN_WRK *furn) {
	/* a1 5 */ u_int *lit_dat;
	/* v1 3 */ int room_no;
	/* bss 3f56a0 */ static SgLIGHT lights[3];
	/* bss 3f5850 */ static SgLIGHT plights[16];
	/* bss 3f6150 */ static SgLIGHT slights[16];
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
	/* a1 5 */ u_int num;
	/* a3 7 */ LIGHT_PACK *light_pack;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v1;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/motion.c
// *****************************************************************************

/* 0016e4e0 00000068 */ void motInitPlayerAnm(/* a0 4 */ char mdl_no) {}
/* 0016e548 00000024 */ void motInitEnemyAnm(/* a0 4 */ u_int *anm_p, /* a1 5 */ u_int mdl_no, /* a2 6 */ u_int anm_no) {}

/* 0016e570 000000c4 */ void motInitOneEnemyAnm(/* s2 18 */ u_int *anm_p, /* s4 20 */ u_int mdl_no, /* s5 21 */ u_int anm_no) {
	/* s0 16 */ ANI_CTRL *ani_ctrl;
	/* s3 19 */ u_int *mdl_p;
}

/* 0016e638 00000074 */ void motInitMultiEnemyAnm(/* s4 20 */ u_int *anm_p, /* s3 19 */ u_int mdl_no, /* s2 18 */ u_int anm_no, /* s1 17 */ u_int num) {
	/* s0 16 */ u_int i;
}

/* 0016e6b0 0000002c */ void motInitEnemyMdl(/* a0 4 */ u_int *mdl_p, /* a1 5 */ u_int mdl_no) {}

/* 0016e6e0 000000dc */ void motInitOneEnemyMdl(/* s2 18 */ u_int *mdl_p, /* a1 5 */ u_int mdl_no) {
	/* s0 16 */ u_int i;
	/* s3 19 */ u_int pack_num;
	/* a0 4 */ u_int *top;
}

/* 0016e7c0 00000070 */ void motInitMultiEnemyMdl(/* s2 18 */ u_int *mdl_addr, /* s3 19 */ u_int mdl_no) {
	/* s0 16 */ u_int i;
	/* s1 17 */ u_int mdl_num;
}

/* 0016e830 0000001c */ void motInitFlyMdl(/* a0 4 */ u_int *mdl_p, /* a1 5 */ u_int mdl_no) {}

/* 0016e850 00000070 */ void motInitMultiFlyMdl(/* s2 18 */ u_int *mpk_p, /* s3 19 */ u_int mdl_no) {
	/* s0 16 */ u_int i;
	/* s1 17 */ u_int mdl_num;
}

/* 0016e8c0 0000001c */ void motInitOneFlyMdl(/* v1 3 */ u_int *sgd_p, /* a1 5 */ u_int mdl_no) {}
/* 0016e8e0 00000048 */ static void motInitClearAniCtrl(/* a0 4 */ ANI_CTRL *ani_ctrl) {}

/* 0016e928 000002d4 */ u_int* motInitAniCtrl(/* s2 18 */ ANI_CTRL *ani_ctrl, /* s7 23 */ u_int *anm_p, /* s5 21 */ u_int *mdl_p, /* s0 16 */ u_int *pkt_p, /* s6 22 */ u_int mdl_no, /* t1 9 */ u_int anm_no) {
	/* s1 17 */ u_int *top;
	/* s3 19 */ u_int i;
	/* fp 30 */ u_int pack_num;
	/* s0 16 */ MIME_DAT *mim_dat;
	/* s0 16 */ MIME_DAT *mim_bg;
	/* s4 20 */ u_int num;
}

/* 0016ec00 00000124 */ u_int* motInitMotCtrl(/* s1 17 */ MOT_CTRL *m_ctrl, /* s2 18 */ u_int *mot_addr, /* s3 19 */ u_int *rst_addr) {
	/* s0 16 */ u_short i;
	/* s4 20 */ u_int *tale_addr;
}

/* 0016ed28 00000134 */ void motSetCoordCamera(/* s2 18 */ ANI_CTRL *ani_ctrl) {
	/* f1 39 */ float sub;
	/* f12 50 */ float rot;
	/* s3 19 */ MOT_CTRL *m_ctrl;
}

/* 0016ee60 000002ac */ u_char motSetCoord(/* s4 20 */ ANI_CTRL *ani_ctrl, /* s2 18 */ u_char work_id) {
	/* s3 19 */ MOT_CTRL *m_ctrl;
	/* s5 21 */ u_char ani_end;
	/* 0x0(sp) */ ANI_CTRL tmp;
	/* s1 17 */ u_int frame_num;
	/* s0 16 */ u_int interp_cnt;
}

/* 0016f110 00000050 */ static void motInitNewMotion(/* s0 16 */ ANI_CTRL *ani_ctrl) {
	/* s0 16 */ MOT_CTRL *m_ctrl;
}

/* 0016f160 00000068 */ static u_char motAddFrame(/* a1 5 */ MOT_CTRL *m_ctrl) {}
/* 0016f1c8 00000040 */ u_int motGetNowFrame(/* s0 16 */ MOT_CTRL *m_ctrl) {}
/* 0016f208 000002dc */ void ReqPlayerAnime(/* s3 19 */ u_char flame) {}

/* 0016f4e8 00000090 */ void ReqEnemyAnime(/* a0 4 */ u_char work_no, /* a1 5 */ u_char flame) {
	/* s1 17 */ ENE_WRK *e_work;
	/* s2 18 */ ANI_CTRL *ani_ctrl;
}

/* 0016f578 00000050 */ void motSetAnime(/* s0 16 */ ANI_CTRL *ani_ctrl, /* a1 5 */ ANI_CODE **tbl, /* a2 6 */ int req_no) {}

/* 0016f5c8 0000004c */ void* GetFileInPak(/* a0 4 */ void *pak_head, /* a1 5 */ int num) {
	/* v0 2 */ int file_num;
	/* v0 2 */ int file_size;
	/* a1 5 */ int i;
	/* v1 3 */ char *fp;
}

/* 0016f618 00000054 */ void* GetPakTaleAddr(/* a0 4 */ void *pak_head) {
	/* v0 2 */ int file_num;
	/* v0 2 */ int file_size;
	/* v1 3 */ int i;
	/* a0 4 */ char *fp;
}

/* 0016f670 00000174 */ void GetMdlNeckPos(/* t2 10 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl, /* a2 6 */ u_short mdl_no) {
	/* t1 9 */ u_short id;
	/* data 3003f0 */ static sceVu0FVECTOR p;
}

/* 0016f7e8 00000078 */ u_int GetMdlBonePos(/* s0 16 */ sceVu0FVECTOR *pos, /* a1 5 */ u_char work_no) {
	/* v0 2 */ HeaderSection *hs;
	/* a0 4 */ u_int i;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 0016f860 00000044 */ void GetMdlWaistPos(/* a0 4 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl, /* a2 6 */ u_short mdl_no) {
	/* v0 2 */ float *v1;
}

/* 0016f8a8 00000044 */ void GetMdlLegPos(/* a0 4 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl, /* a2 6 */ u_short mdl_no) {
	/* v0 2 */ float *v1;
}

/* 0016f8f0 00000030 */ void GetMdlShldPos(/* a0 4 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl, /* a2 6 */ u_char lr) {
	/* v0 2 */ float *v1;
}

/* 0016f920 00000030 */ void GetPlyrFootPos(/* a0 4 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl, /* a2 6 */ u_char lr) {
	/* v0 2 */ float *v1;
}

/* 0016f950 00000018 */ void GetPlyrAcsLightPos(/* a0 4 */ float *pos, /* a1 5 */ ANI_CTRL *ani_ctrl) {
	/* data 300400 */ static sceVu0FVECTOR p;
}

/* 0016f968 0000005c */ void GetToushuKatanaPos(/* a0 4 */ float *p0, /* s1 17 */ float *p1, /* s0 16 */ ANI_CTRL *ani_ctrl) {
	/* data 300410 */ static sceVu0FVECTOR ofs0;
	/* data 300420 */ static sceVu0FVECTOR ofs1;
}

/* 0016f9c8 0000000c */ u_short GetPlyrFtype() {}

/* 0016f9d8 000000cc */ void motInitInterpAnime(/* s2 18 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int flame) {
	/* 0x0(sp) */ int args[3];
	/* s0 16 */ ANI_CODE *ap;
	/* s1 17 */ MOT_CTRL *m_ctrl;
}

/* 0016faa8 00000184 */ static void motSetInterpMatrix(/* a0 4 */ ANI_CTRL *ani_ctrl, /* 0x80(sp) */ sceVu0FMATRIX *start, /* 0x84(sp) */ sceVu0FMATRIX *end) {
	/* fp 30 */ HeaderSection *hs;
	/* 0x0(sp) */ sceVu0FMATRIX m0;
	/* 0x40(sp) */ sceVu0FMATRIX m1;
	/* s7 23 */ MOT_CTRL *m_ctrl;
	/* s2 18 */ u_int i;
	/* v0 2 */ float *m0[4];
	/* v1 3 */ float *m0[4];
}

/* 0016fc30 000001ec */ static void motInterpAnm(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ sceVu0FMATRIX *start, /* a2 6 */ sceVu0FMATRIX *end) {
	/* s2 18 */ short int i;
	/* 0x0(sp) */ sceVu0FVECTOR rot;
	/* 0x10(sp) */ sceVu0FVECTOR trans;
	/* 0x20(sp) */ sceVu0FVECTOR scale;
	/* 0x30(sp) */ sceVu0FMATRIX m0;
	/* 0x70(sp) */ sceVu0FMATRIX m1;
	/* 0xb0(sp) */ sceVu0FMATRIX interp;
	/* 0xf0(sp) */ HeaderSection *hs;
	/* fp 30 */ SgCOORDUNIT *coord;
	/* f20 58 */ float rate;
	/* s3 19 */ MOT_CTRL *m_ctrl;
}

/* 0016fe20 000001e8 */ void motInterpMatrix(/* s4 20 */ float *interp[4], /* a1 5 */ float *m0[4], /* a2 6 */ float *m1[4], /* f23 61 */ float rate) {
	/* v0 2 */ short int i;
	/* 0x0(sp) */ sceVu0FMATRIX m;
	/* 0x40(sp) */ sceVu0FVECTOR v;
	/* f20 58 */ float r;
	/* f22 60 */ float cos;
	/* f21 59 */ float sin;
	/* f20 58 */ float val;
}

/* 00170008 00000258 */ void motMatrix2Quaternion(/* s3 19 */ float *q, /* s0 16 */ float *m[4]) {
	/* f0 38 */ float tr;
	/* f3 41 */ float s;
	/* s6 22 */ int i;
	/* s2 18 */ int j;
	/* s1 17 */ int k;
	/* 0x0(sp) */ int nxt[3];
}

/* 00170260 000000bc */ void motQuaternion2Matrix(/* a0 4 */ float *m[4], /* a1 5 */ float *q) {
	/* f10 48 */ float wx;
	/* f6 44 */ float wy;
	/* f11 49 */ float wz;
	/* f5 43 */ float xx;
	/* f4 42 */ float yy;
	/* f1 39 */ float yz;
	/* f0 38 */ float xy;
	/* f7 45 */ float xz;
	/* f3 41 */ float zz;
	/* f10 48 */ float x2;
	/* f8 46 */ float y2;
	/* f2 40 */ float z2;
}

/* 00170320 000000a8 */ void motQuaternionSlerp(/* s2 18 */ float *q, /* s1 17 */ float *q1, /* s0 16 */ float *q2, /* f20 58 */ float rate) {
	/* 0x0(sp) */ sceVu0FVECTOR ret;
	/* f0 38 */ float cosom;
}

/* 001703c8 00000084 */ void LocalRotMatrixX(/* s1 17 */ float *m0[4], /* s0 16 */ float *m1[4], /* f20 58 */ float rx) {
	/* 0x0(sp) */ sceVu0FMATRIX rot;
}

/* 00170450 00000084 */ void LocalRotMatrixY(/* s1 17 */ float *m0[4], /* s0 16 */ float *m1[4], /* f20 58 */ float ry) {
	/* 0x0(sp) */ sceVu0FMATRIX rot;
}

/* 001704d8 00000084 */ void LocalRotMatrixZ(/* s1 17 */ float *m0[4], /* s0 16 */ float *m1[4], /* f20 58 */ float rz) {
	/* 0x0(sp) */ sceVu0FMATRIX rot;
}

/* 00170560 00000238 */ void motInversKinematics(/* 0x90(sp) */ SgCOORDUNIT *cp, /* 0x94(sp) */ float *target, /* 0x98(sp) */ u_int *top_addr, /* a3 7 */ u_char bone_id) {
	/* s3 19 */ u_int parent_id;
	/* 0x0(sp) */ sceVu0FVECTOR end_eff;
	/* 0x10(sp) */ sceVu0FVECTOR root;
	/* 0x20(sp) */ sceVu0FVECTOR end_root;
	/* 0x30(sp) */ sceVu0FVECTOR target_root;
	/* f12 50 */ float inner;
	/* 0x40(sp) */ sceVu0FMATRIX m;
	/* f20 58 */ float r;
	/* f20 58 */ float dist;
	/* 0x80(sp) */ sceVu0FVECTOR raxis;
}

/* 00170798 00000008 */ static u_int movGetFrameNum(/* a0 4 */ u_int *mov_p) {}
/* 001707a0 00000008 */ static float movGetMaxval(/* a0 4 */ u_int *mov_p) {}

/* 001707a8 00000148 */ void movGetMoveval(/* a0 4 */ ANI_CTRL *ani_ctrl, /* s1 17 */ u_int frame_num) {
	/* f1 39 */ float dist;
	/* f0 38 */ float height;
	/* s0 16 */ u_int *mov_p;
	/* v1 3 */ u_int playnum;
	/* v1 3 */ float *p1;
}

/* 001708f0 00000008 */ static u_int motGetBoneNum(/* a0 4 */ u_int *mot_p) {}
/* 001708f8 00000008 */ static u_int motGetTransBoneNum(/* a0 4 */ u_int *mot_p) {}
/* 00170900 00000008 */ static u_int motGetFrameNum(/* a0 4 */ u_int *mot_p) {}
/* 00170908 00000008 */ static u_int motGetSIFrameNum(/* a0 4 */ u_int *mot_p) {}
/* 00170910 00000008 */ static u_int motGetInterpFrameNum(/* a0 4 */ u_int *mot_p) {}
/* 00170918 00000008 */ static u_int* motGetRstBuffer(/* a0 4 */ u_int *mot_p) {}
/* 00170920 0000000c */ static u_int motCheckRstFull(/* a0 4 */ u_int *mot_p) {}
/* 00170930 00000010 */ static u_int motCheckTransCut(/* a0 4 */ u_int *mot_p) {}
/* 00170940 00000010 */ static u_int motCheckIncludeRstPacket(/* a0 4 */ u_int *mot_p) {}

/* 00170950 000000ac */ static void motAddressMapping(/* s0 16 */ u_int *top_addr) {
	/* a0 4 */ MOT_ADDR_TABLE *tbl_p;
	/* a1 5 */ u_int i;
	/* s1 17 */ u_int frame_num;
}

/* 00170a00 00000064 */ static u_int* motGetFrameDataAddr(/* s0 16 */ u_int *top_addr, /* s2 18 */ u_int frame) {
	/* s1 17 */ u_int *addr;
}

/* 00170a68 00000018 */ static void motGetFrameData(/* a0 4 */ RST_DATA *rst, /* a1 5 */ u_int *top_addr, /* a2 6 */ u_int frame) {}

/* 00170a80 000000e4 */ static void motGetFrameDataRST(/* s2 18 */ RST_DATA *rst, /* s1 17 */ u_int *top_addr, /* s0 16 */ u_int frame) {
	/* a1 5 */ u_int i;
	/* a2 6 */ u_int bone_num;
	/* s0 16 */ float *pkt;
}

/* 00170b68 00000150 */ static void motGetFrameDataRT(/* s1 17 */ RST_DATA *rst, /* s3 19 */ u_int *top_addr, /* s0 16 */ u_int frame, /* a3 7 */ u_int init_flg) {
	/* s2 18 */ u_int i;
	/* s4 20 */ u_int bone_num;
	/* s0 16 */ float *pkt;
}

/* 00170cb8 00000010 */ static u_int motGetTransId(/* a0 4 */ u_int *top_addr, /* a1 5 */ u_int id) {}
/* 00170cc8 00000010 */ static u_int motGetParentId(/* a0 4 */ u_int *top_addr, /* a1 5 */ u_int id) {}

/* 00170cd8 000000ac */ void motSetHierarchy(/* s3 19 */ SgCOORDUNIT *coord, /* s4 20 */ u_int *top_addr) {
	/* s1 17 */ u_int i;
	/* s2 18 */ u_int bone_num;
	/* v0 2 */ u_int parent_id;
}

/* 00170d88 000001e4 */ u_int* SceneInitAnime(/* s1 17 */ ANI_CTRL *ani_ctrl, /* s0 16 */ u_int *mdl_p, /* s2 18 */ u_int *mot_p, /* s5 21 */ u_int *mim_p, /* s4 20 */ u_int *pkt_p, /* s3 19 */ u_int mdl_no) {
	/* s0 16 */ MIME_DAT *mim_dat;
	/* a2 6 */ u_int i;
}

/* 00170f70 00000130 */ u_int* SceneInitOtherAnime(/* s1 17 */ ANI_CTRL *ani_ctrl, /* a1 5 */ u_int *mdl_p, /* s0 16 */ u_int *mot_p, /* s2 18 */ u_int *mim_p, /* s3 19 */ u_int *pkt_p) {
	/* s0 16 */ MIME_DAT *mim_dat;
	/* a0 4 */ u_int i;
}

/* 001710a0 000000cc */ void motSetCoordFrame(/* s2 18 */ ANI_CTRL *ani_ctrl, /* s1 17 */ u_int frame) {
	/* s0 16 */ MOT_CTRL *m_ctrl;
	/* s1 17 */ u_int data_no;
}

/* 00171170 0000013c */ void SceneSetCoordFrame(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ u_int frame, /* s0 16 */ u_int type) {
	/* s3 19 */ u_int i;
	/* s4 20 */ HeaderSection *hs;
	/* s1 17 */ SgCOORDUNIT *cp;
	/* bss 3f6a50 */ static RST_DATA rst[60];
}

/* 001712b0 000001c0 */ void motSetInvMatrix(/* s5 21 */ float *m1[4], /* s0 16 */ float *m0[4]) {
	/* a3 7 */ u_int i;
	/* 0x0(sp) */ sceVu0FMATRIX rot;
	/* 0x40(sp) */ sceVu0FMATRIX scale;
	/* 0x80(sp) */ sceVu0FMATRIX trans;
	/* 0xc0(sp) */ sceVu0FVECTOR inv_inner;
}

/* 00171470 00000020 */ u_int* motAlign128(/* a0 4 */ u_int *addr) {
	/* v0 2 */ u_int tmp;
}

/* 00171490 00000008 */ void motPrintVector(/* a0 4 */ char *str, /* a1 5 */ float *vec) {}

/* 00171498 00000070 */ void sceRotMatrixXYZ(/* s1 17 */ float *m0[4], /* a1 5 */ float *m1[4], /* s0 16 */ float *rot) {
	/* 0x0(sp) */ sceVu0FMATRIX mat;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/anicode.c
// *****************************************************************************

/* 00171508 00000038 */ void motAniCodeClearBuf(/* a0 4 */ ANI_CTRL *ani_ctrl) {
	/* a1 5 */ u_int i;
}

/* 00171540 00000054 */ void motAniCodeSetBuf(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ ANI_CODE code) {
	/* a2 6 */ u_int i;
}

/* 00171598 00000068 */ u_char motAniCodeRead(/* a0 4 */ ANI_CTRL *ani_ctrl) {
	/* s1 17 */ ANI_CODE_CTRL *c_ctrl;
	/* 0x0(sp) */ int args[3];
}

/* 00171600 00000060 */ void motAniCodeExec(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a3 7 */ ANI_CODE code, /* a1 5 */ int *args) {}

/* 00171660 0000014c */ void motAniTimerCodeExec(/* s1 17 */ ANI_CTRL *ani_ctrl) {
	/* 0x0(sp) */ int args[3];
}

/* 001717b0 00000040 */ int motAniCodeIsEnd(/* a0 4 */ ANI_CODE code) {
	/* 0x0(sp) */ int args[3];
}

/* 001717f0 0000008c */ void GetAniCodeArgs(/* a0 4 */ ANI_CODE code, /* a1 5 */ int *args) {}
/* 00171880 000000a4 */ void motAniCodeReadCTRL(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int *args) {}
/* 00171928 00000018 */ void motAniCodeReadTIMER(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int *args) {}

/* 00171940 00000088 */ void motAniCodeReadMOT(/* s0 16 */ ANI_CTRL *ani_ctrl, /* s2 18 */ int *args) {
	/* s1 17 */ MOT_CTRL *m_ctrl;
}

/* 001719c8 000000fc */ void motAniCodeReadMIM(/* s0 16 */ ANI_CTRL *ani_ctrl, /* a2 6 */ int *args) {}

/* 00171ac8 00000074 */ void motAniCodeReadSE(/* s0 16 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int *args) {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
}

/* 00171b40 00000090 */ void motAniCodeReadDOOR(/* a1 5 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int *args) {}

/* 00171bd0 00000150 */ void motAniCodeReadEFCT(/* s1 17 */ ANI_CTRL *ani_ctrl, /* a1 5 */ int *args) {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
}

/* 00171d20 000000a0 */ u_char motGetNextMotion(/* a0 4 */ ANI_CTRL *ani_ctrl) {
	/* s1 17 */ ANI_CODE_CTRL *c_ctrl;
	/* 0x0(sp) */ int args[3];
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/object.c
// *****************************************************************************

/* 00171dc0 00000030 */ void objInit() {
	/* sdata 356c48 */ static int bufid;
	/* bss 3f9390 */ static qword p3_buf[2][256];
	/* v1 3 */ qword *base3;
}

/* 00171df0 00000008 */ void objFlush() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sce_pp3.c
// *****************************************************************************

/* 00171df8 000000d8 */ void scePP13_Sync() {
	/* sdata 356c54 */ static int fr;
	/* sdata 356c58 */ static int count;
	/* sdata 356c5c */ static int odev;
}

/* 00171ed0 0000003c */ void scePP1_Kick(/* s0 16 */ void *addr) {
	/* v0 2 */ sceDmaChan *chVif1;
}

/* 00171f10 00000128 */ void scePP3_Kick(/* s1 17 */ u_int *addr, /* s0 16 */ int qwc) {
	/* bss 3fb390 */ static sceDmaTag tag[2][3];
	/* sdata 356c60 */ static int tid;
	/* t0 8 */ sceDmaTag *tp;
	/* s3 19 */ sceDmaChan *chGif;
	/* s1 17 */ void *addr;
	/* a2 6 */ int qwc;
	/* v0 2 */ void *addr;
	/* s0 16 */ int qwc;
	/* s1 17 */ void *addr;
}

/* 00172038 00000008 */ int scePP1_Disp(/* a0 4 */ u_int mode) {}
/* 00172040 00000008 */ int scePP1_Init(/* a0 4 */ u_int mode) {}
/* 00172048 00000008 */ int scePP1_End(/* a0 4 */ u_int mode) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsgd.c
// *****************************************************************************

/* 00172050 0000011c */ void MappingVUVNData(/* a0 4 */ u_int *intpointer, /* a1 5 */ HeaderSection *hs) {
	/* a1 5 */ int i;
	/* a1 5 */ VUVN_PRIM *vh;
	/* a2 6 */ PHEAD *ph;
	/* a2 6 */ sceVu0FVECTOR *vp;
	/* a3 7 */ sceVu0FVECTOR *np;
}

/* 00172170 00000008 */ void MappingVUVNDataPreset(/* a0 4 */ u_int *intpointer, /* a1 5 */ int mtype, /* a2 6 */ int gloops, /* a3 7 */ int hsize) {}

/* 00172178 00000038 */ void MappingTYPE0(/* a0 4 */ int gloops, /* a1 5 */ u_int *prim) {
	/* a0 4 */ int j;
	/* v0 2 */ int loops;
}

/* 001721b0 00000068 */ int MappingTYPE2(/* a0 4 */ int gloops, /* a1 5 */ u_int *prim) {
	/* a0 4 */ int j;
	/* v0 2 */ int loops;
	/* a2 6 */ int hsize;
}

/* 00172218 0000004c */ void MappingMeshData(/* a0 4 */ u_int *intpointer, /* t0 8 */ u_int *vuvnprim, /* a2 6 */ HeaderSection *hs) {
	/* a1 5 */ int mtype;
	/* t1 9 */ int gloops;
	/* a3 7 */ int hsize;
	/* sbss 3579c8 */ static u_int *old_mesh_p;
}

/* 00172268 00000008 */ void MappingCoordinateData(/* a0 4 */ u_int *intpointer, /* a1 5 */ HeaderSection *hs) {}

/* 00172270 00000090 */ void MappingVertexList(/* t1 9 */ VERTEXLIST *vli, /* s0 16 */ PHEAD *ph) {
	/* a3 7 */ int i;
	/* a2 6 */ int size;
	/* a0 4 */ int vnnum;
}

/* 00172300 0000006c */ void SgMapRebuld(/* v0 2 */ void *sgd_top) {
	/* a0 4 */ u_int *prim;
	/* s0 16 */ u_int *nextprim;
}

/* 00172370 00000388 */ void SgMapUnit(/* a0 4 */ void *sgd_top) {
	/* a0 4 */ int i;
	/* v1 3 */ int j;
	/* a2 6 */ int size;
	/* a1 5 */ u_int *intpointer;
	/* s1 17 */ u_int *nextprim;
	/* s4 20 */ u_int *pk;
	/* s3 19 */ u_int *vuvnprim;
	/* s0 16 */ HeaderSection *hs;
	/* v1 3 */ SgMaterial *matp;
	/* a0 4 */ u_int *phead;
}

/* 001726f8 00000030 */ u_int* GetPrimitiveAddr(/* a0 4 */ void *sgd_top, /* a1 5 */ int num) {
	/* v0 2 */ int blocks;
	/* v1 3 */ u_int *pk;
}

/* 00172728 00000028 */ u_int* GetStartPacketAddr(/* a0 4 */ void *sgd_top, /* a1 5 */ int num) {
	/* v0 2 */ int blocks;
	/* v1 3 */ u_int *pk;
}

/* 00172750 0000006c */ u_int* GetEndPacketAddr(/* a0 4 */ void *sgd_top, /* a1 5 */ int num) {
	/* a0 4 */ u_int *pk;
	/* v1 3 */ u_int *pkback;
}

/* 001727c0 00000010 */ void PostChainPacket(/* a0 4 */ u_int *dest, /* a1 5 */ u_int *source) {}
/* 001727d0 0000000c */ int GetModelKind(/* a0 4 */ void *sgd_top) {}

/* 001727e0 00000190 */ void SgSetTEX1Prim(/* t0 8 */ u_int *prim, /* a1 5 */ sceGsTex1 *ptex1) {
	/* a3 7 */ u_int *mesh_prim;
	/* t1 9 */ int i;
	/* v0 2 */ int hsize;
}

/* 00172970 00000074 */ void SgSetTEX1(/* s2 18 */ void *sgd_top, /* s3 19 */ sceGsTex1 *ptex1) {
	/* s1 17 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sglib.c
// *****************************************************************************

/* 001729e8 0000001c */ void _GetNormalVectorFromVector(/* a0 4 */ float *norm, /* a1 5 */ float *p0, /* a2 6 */ float *p1) {}
/* 00172a08 00000028 */ void WaitVU1() {}
/* 00172a30 00000010 */ float _TransPPower(/* f12 50 */ float scale) {}
/* 00172a40 00000010 */ float _TransSPower(/* f12 50 */ float scale) {}

/* 00172a50 00000044 */ void Set12Register() {
	/* 0x0(sp) */ sceVu0FVECTOR vf[2];
}

/* 00172a98 00000018 */ void SetVF2Register(/* a0 4 */ float *vf2reg) {}
/* 00172ab0 00000018 */ void GetVF2Register(/* a0 4 */ float *vf2reg) {}
/* 00172ac8 00000088 */ void printVector(/* s0 16 */ float *v) {}
/* 00172b50 00000098 */ void printVectorC(/* s0 16 */ float *v, /* s5 21 */ char *s) {}

/* 00172be8 000000a4 */ void printMat(/* a0 4 */ float *m0[4]) {
	/* s4 20 */ int i;
}

/* 00172c90 00000030 */ void printMatC(/* s0 16 */ float *m0[4], /* a1 5 */ char *s) {}

/* 00172cc0 000000a0 */ void printLMatC(/* s0 16 */ float *m0[4], /* a1 5 */ char *str) {
	/* s3 19 */ int i;
}

/* 00172d60 00000030 */ void SgSetWsMtx(/* a0 4 */ float *m0[4]) {}
/* 00172d90 00000030 */ void SgSetClipMtx(/* a0 4 */ float *m0[4]) {}
/* 00172dc0 00000030 */ void SgSetClipVMtx(/* a0 4 */ float *m0[4]) {}
/* 00172df0 00000008 */ void SgSetWorkBase(/* a0 4 */ qword *base) {}
/* 00172df8 00000008 */ qword* SgGetWorkBase() {}

/* 00172e00 00000020 */ void SgSetProjection(/* f12 50 */ float scrz) {
	/* 0x0(sp) */ sceVu0FVECTOR tmp;
}

/* 00172e20 00000014 */ float SgGetProjection() {
	/* 0x0(sp) */ sceVu0FVECTOR tmp;
}

/* 00172e38 000000d0 */ void SgInit3D() {
	/* 0x0(sp) */ u_int prim[4];
	/* 0x10(sp) */ SgSourceChainTag ftag;
}

/* 00172f08 0000011c */ void GetMatrixFromQuaternion(/* a0 4 */ float *quat[4], /* a1 5 */ float *qvert) {
	/* 0x0(sp) */ sceVu0FMATRIX rmat;
	/* 0x40(sp) */ sceVu0FMATRIX lmat;
}

/* 00173028 00000070 */ void GetMatrixRotateAxis(/* s1 17 */ float *quat[4], /* s0 16 */ float *axis, /* f12 50 */ float theta) {
	/* 0x0(sp) */ sceVu0FVECTOR qvert;
	/* f20 58 */ float theta2;
}

/* 00173098 000000e0 */ float SgSinf(/* f1 39 */ float rad) {
	/* f1 39 */ float rad;
	/* f1 39 */ float rad;
}

/* 00173178 00000020 */ float SgCosf(/* f12 50 */ float rad) {}

/* 00173198 000000e4 */ float SgSinfd(/* f1 39 */ float degree) {
	/* f1 39 */ float degree;
	/* f1 39 */ float rad;
}

/* 00173280 00000024 */ float SgCosfd(/* f12 50 */ float degree) {}
/* 001732a8 00000040 */ float SgACosf(/* f20 58 */ float ccos) {}
/* 001732e8 00000070 */ static void GetATanf(/* a0 4 */ sceVu0FVECTOR *tmpv) {}

/* 00173358 0000010c */ float SgAtanf(/* f12 50 */ float x) {
	/* 0x0(sp) */ sceVu0FVECTOR tmpv[3];
}

/* 00173468 0000009c */ float SgAtan2f(/* f12 50 */ float y, /* f20 58 */ float x) {
	/* f1 39 */ float rad;
}

/* 00173508 00000024 */ float SgSqrtf(/* f12 50 */ float len) {}
/* 00173530 00000024 */ float SgRSqrtf(/* f12 50 */ float len) {}
/* 00173558 00000028 */ static void GetSgCalclen(/* a0 4 */ float *tmpv) {}

/* 00173580 0000002c */ float SgCalcLen(/* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {
	/* 0x0(sp) */ sceVu0FVECTOR tmpv;
}

/* 001735b0 00000038 */ float _CalcLen(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {
	/* 0x0(sp) */ sceVu0FVECTOR tmpv;
}

/* 001735e8 00000050 */ void _MulRotMatrix(/* a0 4 */ float *ans[4], /* a1 5 */ float *m0[4], /* a2 6 */ float *m1[4]) {}
/* 00173638 00000078 */ void _MulMatrix(/* a0 4 */ float *ans[4], /* a1 5 */ float *m0[4], /* a2 6 */ float *m1[4]) {}
/* 001736b0 00000068 */ void _SetMulMatrix(/* a0 4 */ float *m0[4], /* a1 5 */ float *m1[4]) {}
/* 00173718 00000030 */ void _CalcLenASM(/* a0 4 */ float *out, /* a1 5 */ float *v0, /* a2 6 */ float *v1) {}
/* 00173748 0000002c */ void _NormalizeVector(/* a0 4 */ float *v, /* a1 5 */ float *v0) {}
/* 00173778 0000002c */ void _NormalizeVector2(/* a0 4 */ float *v, /* a1 5 */ float *v0) {}
/* 001737a8 0000001c */ void _ApplyRotMatrix(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {}
/* 001737c8 00000028 */ void _ApplyMatrixXYZ(/* a0 4 */ float *v0, /* a1 5 */ float *m[4], /* a2 6 */ float *v1) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsu.c
// *****************************************************************************

/* 001737f0 00000014 */ void _AddColor(/* a0 4 */ float *v) {}
/* 00173808 0000000c */ void SgSuDebugOn() {}
/* 00173818 00000008 */ void SgSuDebugOff() {}
/* 00173820 00000008 */ void SetDebugSign(/* a0 4 */ int num) {}

/* 00173828 000000c8 */ void PutDebugSign() {
	/* sdata 356d2c */ static int frame;
	/* v0 2 */ qword *pedraw_buf;
}

/* 001738f0 00000024 */ void SgSetVNBuffer(/* a0 4 */ sceVu0FVECTOR *vnarray, /* a1 5 */ int size) {}

/* 00173918 000001c8 */ int CheckCoordCache(/* t4 12 */ int cn) {
	/* a2 6 */ int i;
}

/* 00173ae0 0000005c */ void SetVU1Header() {
	/* a1 5 */ sceVu0FVECTOR *svec;
	/* v1 3 */ sceVu0FVECTOR *dvec;
	/* a0 4 */ int i;
	/* v1 3 */ float *v0;
	/* a1 5 */ float *v1;
}

/* 00173b40 00000234 */ void CalcVertexBuffer(/* a0 4 */ u_int *prim) {
	/* a2 6 */ int i;
	/* v1 3 */ int j;
	/* t0 8 */ sceVu0FVECTOR *vpd;
	/* t1 9 */ sceVu0FVECTOR *vps;
	/* a3 7 */ VERTEXLIST *vli;
	/* v0 2 */ float *m0[4];
	/* v0 2 */ float *m0[4];
	/* t0 8 */ float *dp;
	/* t1 9 */ float *v;
	/* v0 2 */ float *m0[4];
	/* v0 2 */ float *m0[4];
	/* t0 8 */ float *dp;
	/* t1 9 */ float *v;
}

/* 00173d78 00000080 */ u_int* SetVUVNData(/* t1 9 */ u_int *prim) {
	/* a0 4 */ int i;
	/* t0 8 */ VUVN_PRIM *vh;
	/* a1 5 */ sceVu0FVECTOR *vp;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* a1 5 */ sceVu0FVECTOR *vb;
	/* a0 4 */ float *s0;
	/* v0 2 */ float *s1;
	/* a1 5 */ sceVu0FVECTOR *vb;
	/* v1 3 */ float *s0;
	/* v0 2 */ float *s1;
}

/* 00173df8 00000348 */ u_int* SetVUVNDataPost(/* t0 8 */ u_int *prim) {
	/* a1 5 */ int i;
	/* t2 10 */ VUVN_PRIM *vh;
	/* t1 9 */ sceVu0FVECTOR *vp;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* a2 6 */ char *cn;
	/* t1 9 */ sceVu0FVECTOR *vb;
	/* a0 4 */ float *s0;
	/* v0 2 */ float *s1;
	/* t1 9 */ sceVu0FVECTOR *vb;
	/* v1 3 */ float *s0;
	/* v0 2 */ float *s1;
	/* v0 2 */ float *m0[4];
	/* v1 3 */ float *m0[4];
	/* t1 9 */ float *dp;
	/* v0 2 */ float *n;
	/* t1 9 */ sceVu0FVECTOR *vb;
	/* v1 3 */ float *s0;
	/* v0 2 */ float *s1;
	/* v0 2 */ float *m0[4];
	/* v1 3 */ float *m0[4];
	/* t1 9 */ float *dp;
	/* v0 2 */ float *n;
	/* t1 9 */ sceVu0FVECTOR *vb;
	/* v0 2 */ float *s0;
	/* v1 3 */ float *s1;
}

/* 00174140 000000ec */ void printTEX0(/* s0 16 */ sceGsTex0 *tex0) {}

/* 00174230 00000280 */ void SetVUMeshData(/* s0 16 */ u_int *prim) {
	/* a1 5 */ int mtype;
	/* a2 6 */ u_int *read_p;
}

/* 001744b0 00000188 */ void SetVUMeshDataPost(/* s0 16 */ u_int *prim) {
	/* a1 5 */ int mtype;
	/* a2 6 */ u_int *read_p;
}

/* 00174638 00000144 */ void SetCoordData(/* s3 19 */ u_int *prim) {
	/* s1 17 */ int j;
	/* f20 58 */ float abs;
	/* s0 16 */ SgCOORDUNIT *llp;
	/* v1 3 */ float *m0[4];
	/* v0 2 */ float *m1[4];
}

/* 00174780 000000f4 */ void SgSortUnitPrim(/* s0 16 */ u_int *prim) {}
/* 00174878 000000d4 */ void SgSortUnitPrimPost(/* s0 16 */ u_int *prim) {}

/* 00174950 000000c8 */ void SgSortPreProcess(/* s0 16 */ u_int *prim) {
	/* sdata 356d30 */ static u_int *old_pointer;
	/* bss 3fb620 */ static sceDmaTag tag[2][3];
	/* sbss 3579d0 */ static sceDmaTag *tp;
	/* bss 3fb680 */ static qword base[3];
	/* bss 3fb6b0 */ static qword base3[6];
	/* sbss 3579d4 */ static qword *base2;
}

/* 00174a18 00000084 */ void AppendVUProgTag(/* s0 16 */ u_int *prog) {}

/* 00174aa0 000000cc */ void LoadSgProg(/* s0 16 */ int load_prog) {
	/* data 303d00 */ static u_int pk[4];
	/* bss 3fb710 */ static SgSourceChainTag starttag;
}

/* 00174b70 000001dc */ void SetUpSortUnit() {
	/* a1 5 */ u_int *datap;
}

/* 00174d50 00000160 */ void SgSortUnit(/* s0 16 */ void *sgd_top, /* s1 17 */ int pnum) {
	/* s1 17 */ int i;
	/* s2 18 */ u_int *pk;
}

/* 00174eb0 00000020 */ void SgSortUnitKind(/* a0 4 */ void *sgd_top, /* a1 5 */ int num) {}
/* 00174ed0 00000018 */ void _SetLWMatrix0(/* a0 4 */ float *m0[4]) {}
/* 00174ee8 00000018 */ void _SetLWMatrix1(/* a0 4 */ float *m0[4]) {}
/* 00174f00 00000018 */ void _SetRotTransPersMatrix(/* a0 4 */ float *m0[4]) {}
/* 00174f18 0000002c */ void _CalcVertex(/* a0 4 */ float *dp, /* a1 5 */ float *v, /* v0 2 */ float *n) {}
/* 00174f48 00000014 */ void _vfito0(/* a0 4 */ int *v0) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgdma.c
// *****************************************************************************

/* 00174f60 0000000c */ void SetBlackWhiteCLUT() {}
/* 00174f70 00000008 */ void ClearBlackWhiteCLUT() {}
/* 00174f78 0000000c */ void SendDmaON() {}
/* 00174f88 00000008 */ void SendDmaOFF() {}
/* 00174f90 0000006c */ void ClearDMATrans() {}
/* 00175000 00000028 */ void CheckDMATrans() {}
/* 00175028 00000050 */ void CheckDmaSync() {}

/* 00175078 00000130 */ static void FlushBuffer() {
	/* s1 17 */ int i;
}

/* 001751a8 000000b0 */ void FlushModel(/* a0 4 */ int signal) {}

/* 00175258 00000038 */ void AppendDmaTag(/* a0 4 */ u_int addr, /* a1 5 */ int size) {
	/* v1 3 */ SgSourceChainTag *ptag;
}

/* 00175290 0000005c */ void AppendDmaBuffer(/* a0 4 */ int size) {
	/* t0 8 */ SgSourceChainTag *ptag;
}

/* 001752f0 00000040 */ void AppendDmaTagCall(/* a0 4 */ u_int next_tag_addr) {
	/* a1 5 */ SgSourceChainTag *ptag;
}

/* 00175330 0000002c */ void AppendDmaTagNextRet(/* a0 4 */ void *tag_addr) {}

/* 00175360 00000088 */ void AppendDmaBufferFromEndAddress(/* a0 4 */ qword *end_adr) {
	/* a0 4 */ int size;
	/* t0 8 */ int tmp;
	/* a3 7 */ SgSourceChainTag *ptag;
}

/* 001753e8 00000008 */ void ClearTextureCache() {}
/* 001753f0 0000000c */ void PushTextureCache() {}
/* 00175400 0000000c */ void PopTextureCahche() {}
/* 00175410 0000002c */ void SgSetPacketBuffer(/* a0 4 */ void *packet_buffer, /* a1 5 */ int packet_size, /* a2 6 */ void *tag_buffer, /* a3 7 */ int tag_num) {}
/* 00175440 00000008 */ void SetDmaScratch() {}
/* 00175448 00000008 */ void SetDmaBSS() {}
/* 00175450 00000020 */ void InitialDmaBuffer() {}
/* 00175470 0000000c */ void GsImageProcess(/* a0 4 */ u_int *prim) {}
/* 00175480 0000000c */ void SgTEXTransEnable() {}
/* 00175490 00000008 */ void SgTEXTransDisenable() {}

/* 00175498 0000010c */ void LoadTRI2Files(/* s1 17 */ u_int *prim) {
	/* s2 18 */ int i;
	/* v0 2 */ int pads;
	/* a0 4 */ int tnum;
	/* s0 16 */ int tri2size;
}

/* 001755a8 00000378 */ void RebuildTRI2Files(/* s0 16 */ u_int *prim) {
	/* s1 17 */ u_int next_pointer;
	/* s5 21 */ int tnum;
	/* s2 18 */ int pads;
	/* s1 17 */ int tri2size;
	/* s3 19 */ int i;
	/* fp 30 */ u_int maxaddr;
	/* s4 20 */ u_int minaddr;
	/* s6 22 */ u_int maxtbp;
	/* t0 8 */ u_int *search_addr;
	/* s2 18 */ u_int *start_vif_code;
	/* 0x70(sp) */ u_int *fprim;
	/* a2 6 */ u_int tbp;
	/* t1 9 */ u_int tbw;
	/* a3 7 */ u_int psm;
	/* s3 19 */ u_int tsize;
	/* s1 17 */ u_int vtsize;
	/* v0 2 */ qword *base;
	/* 0x0(sp) */ sceGsStoreImage spi;
}

/* 00175920 0000004c */ TextureAnimation* GetTextureAnimation(/* a0 4 */ void *sgd_top) {
	/* v1 3 */ u_int *prim;
}

/* 00175970 00000130 */ void LoadTextureAnimation(/* a2 6 */ u_int *prim) {
	/* a1 5 */ TextureAnimation *pta;
	/* v1 3 */ int i;
	/* a0 4 */ int tnum;
	/* v0 2 */ int tri2size;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sglight.c
// *****************************************************************************

/* 00175aa0 0000000c */ void SgPreRenderDbgOn() {}
/* 00175ab0 00000008 */ void SgPreRenderDbgOff() {}

/* 00175ab8 00000058 */ void QueSetMatrix(/* s1 17 */ float *m[4], /* s0 16 */ int que, /* a2 6 */ float *v) {
	/* 0x0(sp) */ sceVu0FVECTOR tmpv;
}

/* 00175b10 00000024 */ void QueSetMatrixNonNormalized(/* a0 4 */ float *m[4], /* a1 5 */ int que, /* a2 6 */ float *v) {}
/* 00175b38 00000018 */ void SgSetAmbient(/* a0 4 */ float *ambient) {}

/* 00175b50 000001bc */ void SgSetDefaultLight(/* a0 4 */ float *eye, /* s2 18 */ SgLIGHT *p0, /* s3 19 */ SgLIGHT *p1, /* s4 20 */ SgLIGHT *p2) {
	/* 0x0(sp) */ sceVu0FVECTOR nl;
	/* 0x10(sp) */ sceVu0FVECTOR tmpv;
	/* 0x20(sp) */ SgLIGHT *po[3];
	/* s1 17 */ int i;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v1;
}

/* 00175d10 000000b0 */ static void _SetColorMtx(/* a0 4 */ float *dc[4], /* a1 5 */ float *sc[4], /* a2 6 */ float *am, /* a3 7 */ float *v) {}
/* 00175dc0 00000014 */ void _ReadDLightMtx(/* a0 4 */ float *tmp[4]) {}
/* 00175dd8 00000014 */ static void _ReadSLightMtx(/* a0 4 */ float *tmp[4]) {}
/* 00175df0 00000014 */ void _ReadDColor(/* a0 4 */ float *tmp[4]) {}
/* 00175e08 0000006c */ static int Tim2CalcBufWidth(/* a0 4 */ int psm, /* a1 5 */ int w) {}

/* 00175e78 0000000c */ int GetDecay() {
	/* v0 2 */ u_int tmp;
}

/* 00175e88 00000030 */ static void SetDecay(/* a0 4 */ u_int decay) {
	/* v0 2 */ int count;
	/* v0 2 */ u_int decay;
}

/* 00175eb8 000000ac */ float SetMaxColor255(/* a0 4 */ float *dcol, /* a1 5 */ float *col) {
	/* f20 58 */ float div;
}

/* 00175f68 00000048 */ void SetBWLight(/* a0 4 */ float *col) {
	/* f0 38 */ float bwcolor;
}

/* 00175fb0 00000028 */ void SetMaterialPointer() {}

/* 00175fd8 00000038 */ void ClearMaterialCache(/* a0 4 */ HeaderSection *hs) {
	/* a1 5 */ int i;
}

/* 00176010 00000268 */ void SetMaterialDataVU(/* s2 18 */ u_int *prim) {
	/* sdata 356d68 */ static int old_tag_buf;
	/* a0 4 */ qword *base;
	/* s0 16 */ SgMaterialC *pmatC;
	/* sdata 356d6c */ static SgMaterialC *old_pmatC;
	/* a1 5 */ int i;
	/* s1 17 */ int qwc;
}

/* 00176278 00000010 */ void SetMaterialPointerCoord() {}
/* 00176288 0000001c */ void SetMaterialPointerCoordVU() {}

/* 001762a8 00000040 */ void SetMaterialDataPrerender() {
	/* v0 2 */ float *amb;
}

/* 001762e8 00000554 */ void SetMaterialData(/* a0 4 */ u_int *prim) {
	/* s2 18 */ int i;
	/* s2 18 */ int j;
	/* s4 20 */ SgMaterialC *pmatC;
	/* s3 19 */ sceVu0FVECTOR *dvec;
	/* f20 58 */ float max_color;
	/* s3 19 */ float *v;
	/* v0 2 */ float *v1;
	/* s3 19 */ float *v;
	/* s3 19 */ float *v0;
	/* v1 3 */ float *v1;
	/* v0 2 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* s3 19 */ float *v;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* s3 19 */ float *v;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* v1 3 */ float *v;
	/* v0 2 */ float *v;
	/* a0 4 */ SgPOINTGROUP *ppg;
	/* s3 19 */ float *v;
	/* s3 19 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* s3 19 */ float *v;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* a0 4 */ SgSPOTGROUP *spg;
	/* s3 19 */ float *v;
	/* s3 19 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
	/* s3 19 */ float *v;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v0;
	/* s3 19 */ float *v1;
	/* f0 38 */ float sc;
}

/* 00176840 00000028 */ static void _SetDLight(/* a0 4 */ float *m0[4]) {}
/* 00176868 00000028 */ static void _SetSLight(/* a0 4 */ float *m0[4]) {}

/* 00176890 000001d4 */ void SetPointGroup() {
	/* t2 10 */ int i;
	/* t6 14 */ int gnum;
	/* t4 12 */ int gcount;
	/* a3 7 */ SgLIGHT *TmpLight;
	/* t1 9 */ SgPOINTGROUP *TmpGroup;
	/* v0 2 */ float *v0;
	/* a3 7 */ float *v1;
	/* v1 3 */ float *v0;
	/* a3 7 */ float *v1;
	/* v0 2 */ float *v0;
	/* a3 7 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v0;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00176a68 000002e0 */ void SetSpotGroup(/* fp 30 */ float *wlmtx[4]) {
	/* s2 18 */ int i;
	/* s7 23 */ int gnum;
	/* s6 22 */ int gcount;
	/* 0x0(sp) */ sceVu0FVECTOR dtmp;
	/* 0x10(sp) */ sceVu0FVECTOR stmp;
	/* s0 16 */ SgLIGHT *TmpLight;
	/* s1 17 */ SgSPOTGROUP *TmpGroup;
	/* s1 17 */ float *v0;
	/* t1 9 */ float *v1;
	/* s0 16 */ float *v0;
	/* t7 15 */ float *v;
	/* t6 14 */ float *v;
	/* t5 13 */ float *v;
	/* t4 12 */ float *v;
	/* t3 11 */ float *v;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v1;
	/* v0 2 */ float *v0;
	/* a1 5 */ float *v1;
	/* fp 30 */ float *m0[4];
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 00176d48 00000388 */ void SetLightData(/* a0 4 */ SgCOORDUNIT *cp0, /* a1 5 */ SgCOORDUNIT *cp1) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ sceVu0FMATRIX tmp;
	/* 0x40(sp) */ sceVu0FMATRIX tmp2;
	/* 0x80(sp) */ sceVu0FVECTOR tmpv;
	/* 0x90(sp) */ sceVu0FVECTOR tmpv2;
	/* 0xa0(sp) */ sceVu0FVECTOR scale;
	/* v0 2 */ float *m0[4];
	/* v0 2 */ float *m0[4];
}

/* 001770d0 00000068 */ void SgSetInfiniteLights(/* a0 4 */ float *eye, /* a1 5 */ SgLIGHT *lights, /* a2 6 */ int num) {}

/* 00177138 00000030 */ void SgSetPointLights(/* a0 4 */ SgLIGHT *lights, /* a1 5 */ int num) {
	/* a1 5 */ int i;
}

/* 00177168 00000090 */ void SgSetSpotLights(/* a0 4 */ SgLIGHT *lights, /* a1 5 */ int num) {
	/* s1 17 */ int i;
}

/* 001771f8 000000d4 */ void PushLight() {
	/* 0x0(sp) */ sceVu0FVECTOR eye;
	/* v1 3 */ float *v0;
}

/* 001772d0 000000d8 */ void PopLight() {
	/* 0x0(sp) */ sceVu0FVECTOR eye;
	/* a0 4 */ float *v1;
}

/* 001773a8 00000008 */ void ClearLightStack() {}
/* 001773b0 000000c0 */ static void _CalcPointA(/* a0 4 */ float *grc[4], /* a1 5 */ float *grm, /* a2 6 */ float *len) {}
/* 00177470 0000003c */ static void _CalcPointB(/* a0 4 */ float *len) {}

/* 001774b0 00000088 */ void CalcPointLight() {
	/* 0x0(sp) */ sceVu0FVECTOR len;
	/* sdata 356d70 */ static float max_len;
}

/* 00177538 0000015c */ void CalcSpotLight() {
	/* v1 3 */ float *cdata[4];
	/* v0 2 */ float *mdata;
}

/* 00177698 00000484 */ void SgReadLights(/* s0 16 */ void *sgd_top, /* s1 17 */ void *light_top, /* 0x20(sp) */ float *Ambient, /* 0x24(sp) */ SgLIGHT *Ilight, /* 0x28(sp) */ int imax, /* 0x2c(sp) */ SgLIGHT *Plight, /* 0x30(sp) */ int pmax, /* 0x34(sp) */ SgLIGHT *Slight, /* 0xf0(sp) */ int smax) {
	/* s2 18 */ int num;
	/* s5 21 */ int i;
	/* s6 22 */ u_int *prim;
	/* v1 3 */ u_int *pk;
	/* s1 17 */ sceVu0FVECTOR *pvec;
	/* 0x0(sp) */ sceVu0FVECTOR interest;
	/* 0x10(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x38(sp) */ SgCOORDUNIT *cp;
	/* f20 58 */ float scale;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* 0x20(sp) */ float *v;
	/* s1 17 */ float *v1;
	/* s1 17 */ float *v1;
	/* v1 3 */ float *v1;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v1;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v1;
	/* 0x20(sp) */ float *v0;
	/* s1 17 */ float *v1;
}

/* 00177b20 00000028 */ u_int* GetNextUnpackAddr(/* a0 4 */ u_int *prim) {}

/* 00177b48 000001a4 */ void SetPreRenderTYPE0(/* fp 30 */ int gloops, /* s0 16 */ u_int *prim) {
	/* s3 19 */ int i;
	/* s2 18 */ int j;
	/* s4 20 */ int loops;
	/* s1 17 */ float *vp;
	/* 0x0(sp) */ sceVu0FVECTOR normal;
	/* 0x10(sp) */ sceVu0FVECTOR vertex;
	/* 0x20(sp) */ sceVu0FVECTOR first;
	/* 0x30(sp) */ sceVu0FVECTOR pcol;
}

/* 00177cf0 00000214 */ void SetPreRenderTYPE2(/* 0x40(sp) */ int gloops, /* s2 18 */ u_int *prim) {
	/* s4 20 */ int i;
	/* s0 16 */ int j;
	/* s6 22 */ int loops;
	/* s3 19 */ float *vp;
	/* 0x0(sp) */ sceVu0FVECTOR normal;
	/* 0x10(sp) */ sceVu0FVECTOR vertex;
	/* 0x20(sp) */ sceVu0FVECTOR first;
	/* 0x30(sp) */ sceVu0FVECTOR pcol;
}

/* 00177f08 00000230 */ void SetPreRenderTYPE2F(/* 0x40(sp) */ int gloops, /* s2 18 */ u_int *prim) {
	/* s4 20 */ int i;
	/* s0 16 */ int j;
	/* fp 30 */ int loops;
	/* s3 19 */ float *vp;
	/* s5 21 */ float *np;
	/* 0x0(sp) */ sceVu0FVECTOR normal;
	/* 0x10(sp) */ sceVu0FVECTOR vertex;
	/* 0x20(sp) */ sceVu0FVECTOR first;
	/* 0x30(sp) */ sceVu0FVECTOR pcol;
}

/* 00178138 0000005c */ void SetPreRenderMeshData(/* a1 5 */ u_int *prim) {
	/* a0 4 */ int gloops;
	/* v1 3 */ int mtype;
}

/* 00178198 00000010 */ static void _SetSpotPos(/* a0 4 */ float *pos, /* a1 5 */ float *dir) {}
/* 001781a8 00000024 */ static float _SpotInnerProduct(/* a0 4 */ float *bpos) {}

/* 001781d0 00000518 */ void SelectLight(/* a2 6 */ u_int *prim) {
	/* s0 16 */ SgLIGHT *TmpLight;
	/* a1 5 */ sceVu0FVECTOR *pvec;
	/* 0x0(sp) */ sceVu0FVECTOR minvec;
	/* 0x10(sp) */ sceVu0FVECTOR maxvec;
	/* 0x20(sp) */ sceVu0FVECTOR ominvec;
	/* 0x30(sp) */ sceVu0FVECTOR omaxvec;
	/* s5 21 */ sceVu0FVECTOR *tmpvec;
	/* 0x40(sp) */ sceVu0FVECTOR plain;
	/* 0x50(sp) */ sceVu0FVECTOR interest;
	/* 0x60(sp) */ float maxpower[4];
	/* f20 58 */ float colscale;
	/* f4 42 */ float spotdir;
	/* 0x70(sp) */ float spotvalue[8];
	/* 0x90(sp) */ int maxnum[4];
	/* s1 17 */ int i;
	/* a2 6 */ int j;
	/* a3 7 */ int k;
	/* v1 3 */ float *v;
	/* a1 5 */ float *v0;
	/* v0 2 */ float *v1;
	/* a0 4 */ float *v0;
	/* v1 3 */ float *v1;
	/* v0 2 */ float *m0[4];
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v1;
	/* s0 16 */ float *v1;
	/* f1 39 */ float ret;
	/* s0 16 */ float *v0;
	/* f0 38 */ float ret;
	/* v0 2 */ float *v1;
	/* f0 38 */ float ret;
}

/* 001786e8 00000214 */ void SgPreRenderPrim(/* s0 16 */ u_int *prim) {
	/* v0 2 */ float *m1[4];
}

/* 00178900 000000c4 */ void SgPreRender(/* s2 18 */ void *sgd_top, /* s0 16 */ int pnum) {
	/* s1 17 */ int i;
	/* s1 17 */ u_int *pk;
}

/* 001789c8 00000160 */ void ClearPreRenderMeshData(/* a0 4 */ u_int *prim) {
	/* v1 3 */ int i;
	/* s0 16 */ int j;
	/* a1 5 */ int loops;
	/* s1 17 */ int gloops;
	/* a1 5 */ int mtype;
	/* 0x0(sp) */ sceVu0FVECTOR first;
}

/* 00178b28 00000064 */ void SgClearPreRenderPrim(/* s0 16 */ u_int *prim) {}

/* 00178b90 000000b4 */ void SgClearPreRender(/* s2 18 */ void *sgd_top, /* s0 16 */ int pnum) {
	/* s1 17 */ int i;
	/* s1 17 */ u_int *pk;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsup.c
// *****************************************************************************

/* 00178c48 0000000c */ void SgSuPDbgOn() {}
/* 00178c58 00000008 */ void SgSuPDbgOff() {}

/* 00178c60 00000074 */ void DispMicroMemory() {
	/* s0 16 */ u_int *read_p;
}

/* 00178cd8 000001b0 */ void DispVUMemory() {
	/* s4 20 */ u_int *read_p;
}

/* 00178e88 000002a4 */ void DrawBoundingBox(/* s0 16 */ sceVu0FVECTOR *box) {
	/* a0 4 */ int i;
	/* v1 3 */ int j;
	/* a0 4 */ int qwc;
	/* t0 8 */ u_int *datap;
	/* t1 9 */ u_int *startp;
	/* data 303d20 */ static char boxmesh[24];
	/* t0 8 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00179130 0000022c */ void SetVUMeshDataP(/* s0 16 */ u_int *prim) {
	/* v1 3 */ int mtype;
	/* a2 6 */ u_int *datap;
}

/* 00179360 00000194 */ int BoundingBoxCalcP(/* s0 16 */ u_int *prim) {
	/* v0 2 */ float *m1[4];
	/* v0 2 */ float *m1[4];
}

/* 001794f8 000000ec */ void SgSortUnitPrimP(/* s0 16 */ u_int *prim) {}

/* 001795e8 00000104 */ void SgSortPreProcessP(/* s0 16 */ u_int *prim) {
	/* sdata 356dc4 */ static u_int *old_pointer;
	/* bss 3fb7b0 */ static sceDmaTag tag[2][3];
	/* sbss 3579e4 */ static sceDmaTag *tp;
	/* bss 3fb810 */ static qword base[3];
	/* bss 3fb840 */ static qword base3[6];
	/* sbss 3579e8 */ static qword *base2;
}

/* 001796f0 00000120 */ void SgSortUnitP(/* s0 16 */ void *sgd_top, /* s1 17 */ int pnum) {
	/* s1 17 */ int i;
	/* s2 18 */ u_int *pk;
}

/* 00179810 0000004c */ u_int* GetModelGroupPacket(/* a0 4 */ void *sgd_top) {
	/* v1 3 */ u_int *prim;
}

/* 00179860 00000168 */ void SgSortGroupP(/* s0 16 */ void *sgd_top, /* s1 17 */ int gnum) {
	/* s1 17 */ int i;
	/* v1 3 */ int groups;
	/* s3 19 */ u_int *pk;
	/* s0 16 */ ModelGroup *mgp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgcam.c
// *****************************************************************************

/* 001799c8 00000254 */ void SetViewScreenClipMatrix(/* s0 16 */ SgCAMERA *camera, /* f28 66 */ float scrz) {
	/* f20 58 */ float az;
	/* f21 59 */ float cz;
	/* f27 65 */ float gsx;
	/* f26 64 */ float gsy;
	/* f29 67 */ float gsxv;
	/* f30 68 */ float gsyv;
	/* f2 40 */ float rscrz;
	/* f1 39 */ float zmin;
	/* f0 38 */ float zmax;
	/* f24 62 */ float farz;
	/* f22 60 */ float nearz;
	/* 0x0(sp) */ sceVu0FMATRIX mt;
}

/* 00179c20 0000017c */ void SgSetRefCamera(/* s0 16 */ SgCAMERA *camera) {
	/* 0x0(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x40(sp) */ sceVu0FMATRIX clip_screen;
	/* f20 58 */ float scrz;
}

/* 00179da0 000001bc */ void SetViewScreenClipMatrixOrtho(/* s0 16 */ SgCAMERA *camera, /* f12 50 */ float scrz) {
	/* f22 60 */ float az;
	/* f20 58 */ float cz;
	/* f1 39 */ float zmin;
	/* f0 38 */ float zmax;
	/* f21 59 */ float farz;
	/* f23 61 */ float nearz;
	/* 0x0(sp) */ sceVu0FMATRIX mt;
}

/* 00179f60 0000017c */ void SgSetRefCameraOrtho(/* s0 16 */ SgCAMERA *camera) {
	/* 0x0(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x40(sp) */ sceVu0FMATRIX clip_screen;
	/* f20 58 */ float scrz;
}

/* 0017a0e0 0000006c */ void SetClipValue(/* f12 50 */ float minx, /* f13 51 */ float maxx, /* f14 52 */ float miny, /* f15 53 */ float maxy) {}
/* 0017a150 00000034 */ void printClipValue() {}

/* 0017a188 0000004c */ int BoundClip(/* a0 4 */ float *ed, /* a1 5 */ float *v) {
	/* v0 2 */ int ret;
}

/* 0017a1d8 00000048 */ int BoundClipQ(/* a0 4 */ float *ed, /* a1 5 */ float *v0, /* a2 6 */ float *v1) {
	/* v0 2 */ int ret;
}

/* 0017a220 00000040 */ void printBoundingBox(/* s0 16 */ u_int *prim) {
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec[8];
}

/* 0017a260 00000040 */ int ClipCheck(/* a0 4 */ sceVu0FVECTOR *vec) {}

/* 0017a2a0 000003ec */ int CheckBoundingBox(/* s5 21 */ u_int *prim) {
	/* s1 17 */ sceVu0FVECTOR *pvec;
	/* s6 22 */ sceVu0FVECTOR *tmpvec;
	/* s3 19 */ int i;
	/* s4 20 */ int clip1;
	/* v1 3 */ int xmax_flg;
	/* a1 5 */ int xmin_flg;
	/* a2 6 */ int ymin_flg;
	/* a3 7 */ int ymax_flg;
	/* v0 2 */ float *lw[4];
	/* v0 2 */ float *m0[4];
	/* s1 17 */ float *v1;
}

/* 0017a690 0000019c */ int CheckBoundingBoxEdge(/* s1 17 */ u_int *prim) {
	/* v1 3 */ sceVu0FVECTOR *pvec;
	/* s0 16 */ int clip;
	/* s0 16 */ sceVu0FVECTOR *tmpvec;
	/* s0 16 */ float *v0;
	/* v1 3 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
	/* v1 3 */ float *v0;
	/* a0 4 */ float *v1;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
}

/* 0017a830 000000e0 */ void SgSetFog(/* f12 50 */ float min, /* f13 51 */ float max, /* f14 52 */ float near, /* f15 53 */ float far, /* a0 4 */ int r, /* a1 5 */ int g, /* a2 6 */ int b) {}
/* 0017a910 0000009c */ void SgSetWScissorBox(/* f12 50 */ float ax, /* f13 51 */ float ay, /* f14 52 */ float az, /* f15 53 */ float bx, /* f16 54 */ float by, /* f17 55 */ float bz) {}
/* 0017a9b0 000000b8 */ void _SetMulMatrixBB(/* a0 4 */ float *m0[4], /* a1 5 */ float *m1[4], /* a2 6 */ float *lw[4]) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/shadow.c
// *****************************************************************************

/* 0017aa68 0000000c */ void ShadowDbgOn() {}
/* 0017aa78 00000008 */ void ShadowDbgOff() {}
/* 0017aa80 00000028 */ void ShadowInit() {}
/* 0017aaa8 00000014 */ void SetShadowTexSize(/* a0 4 */ u_int width, /* a1 5 */ u_int height) {}
/* 0017aac0 0000000c */ void SetShadowTexAddr(/* a0 4 */ u_int addr) {}
/* 0017aad0 0000000c */ void SetShadowFundamentScale(/* f12 50 */ float size) {}
/* 0017aae0 00000008 */ void SetShadowAssignGroup(/* a0 4 */ int gnum) {}

/* 0017aae8 000000ac */ void TransShadowClut() {
	/* data 303f90 */ static qword shadow_pal[71];
}

/* 0017ab98 0000000c */ void GetShadowTexture() {
	/* 0x0(sp) */ sceGsStoreImage spi;
}

/* 0017aba8 000001e4 */ void DispShadowSprite() {
	/* t7 15 */ dword *base;
	/* 0x0(sp) */ sceVu0IVECTOR urp;
	/* 0x10(sp) */ sceVu0IVECTOR dlp;
	/* t6 14 */ float *v0;
	/* v1 3 */ float *v0;
}

/* 0017ad90 00000128 */ void GetInverseMatrix(/* s6 22 */ float *inv[4], /* s0 16 */ float *org[4]) {
	/* s1 17 */ int i;
	/* 0x0(sp) */ sceVu0FVECTOR tmpv;
	/* 0x10(sp) */ sceVu0FMATRIX rot;
	/* 0x50(sp) */ sceVu0FMATRIX scale;
	/* 0x90(sp) */ sceVu0FMATRIX trans;
}

/* 0017aeb8 00000058 */ void SetVU1HeaderShadow() {
	/* v1 3 */ sceVu0FVECTOR *svec;
	/* a1 5 */ sceVu0FVECTOR *dvec;
	/* a0 4 */ int i;
	/* v1 3 */ float *v0;
	/* a1 5 */ float *v1;
}

/* 0017af10 00000048 */ static void _CalcWeightedVertexSM(/* a0 4 */ float *dp, /* a1 5 */ float *v) {}
/* 0017af58 00000048 */ static void _CalcWeightedVertexBufferSM(/* a0 4 */ float *dp, /* a1 5 */ float *v) {}
/* 0017afa0 00000020 */ static void _CalcVertexSM(/* a0 4 */ float *dp, /* a1 5 */ float *v) {}

/* 0017afc0 00000134 */ void CalcVertexBufferShadow(/* a0 4 */ u_int *prim) {
	/* s2 18 */ int i;
	/* s1 17 */ int j;
	/* s5 21 */ VERTEXLIST *vli;
	/* s4 20 */ sceVu0FVECTOR *vpd;
	/* s6 22 */ sceVu0FVECTOR *vps;
}

/* 0017b0f8 000002c8 */ u_int* SetVUVNDataShadowModel(/* s2 18 */ u_int *prim) {
	/* s1 17 */ int i;
	/* s5 21 */ VUVN_PRIM *vh;
	/* s3 19 */ sceVu0FVECTOR *vp;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* s4 20 */ char *cn;
	/* s3 19 */ float *v0;
	/* v0 2 */ float *v1;
	/* s3 19 */ float *v0;
	/* v0 2 */ float *v1;
	/* s3 19 */ float *v0;
	/* v0 2 */ float *v1;
	/* s3 19 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 0017b3c0 00000224 */ void ShadowModelMesh(/* s0 16 */ u_int *prim) {
	/* v0 2 */ int mtype;
	/* a2 6 */ u_int *read_p;
}

/* 0017b5e8 00000178 */ void DrawShadowModelPrim(/* s0 16 */ u_int *prim) {
	/* v1 3 */ u_int *read_p;
	/* a0 4 */ float *m0[4];
}

/* 0017b760 00000164 */ void SetUpShadowModel() {
	/* a1 5 */ u_int *datap;
	/* a2 6 */ float *m0[4];
	/* a2 6 */ float *m0[4];
	/* a1 5 */ float *v0;
	/* a0 4 */ float *v0;
}

/* 0017b8c8 000000e8 */ void DrawShadowModel(/* s0 16 */ void *sgd_top, /* s1 17 */ int pnum) {
	/* s2 18 */ u_int *pk;
	/* s1 17 */ u_int i;
}

/* 0017b9b0 000000f0 */ void ShadowMeshDataVU(/* s0 16 */ u_int *prim) {
	/* v0 2 */ int mtype;
	/* a2 6 */ u_int *datap;
}

/* 0017baa0 00000044 */ int ClipCheckShadow(/* a0 4 */ sceVu0FVECTOR *vec, /* a1 5 */ float *cul) {}

/* 0017bae8 00000034 */ int ShadowBoundClip(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {
	/* v0 2 */ int ret;
}

/* 0017bb20 000001b4 */ int AppendShadowClipCheck(/* s3 19 */ sceVu0FVECTOR *sts, /* s0 16 */ BoundLine *bl) {
	/* f23 61 */ float bmin;
	/* f24 62 */ float bmax;
	/* f21 59 */ float smin;
	/* f22 60 */ float smax;
	/* f20 58 */ float tmp;
	/* f0 38 */ float tmp2;
	/* s2 18 */ int i;
	/* a0 4 */ int s;
	/* v0 2 */ int e;
	/* data 304400 */ static sceVu0FVECTOR shadowtex[4];
	/* 0x0(sp) */ sceVu0FVECTOR kei;
}

/* 0017bcd8 000001c0 */ int CheckBoundingBoxShadowTrace(/* s1 17 */ float *lwmtx[4], /* s2 18 */ sceVu0FVECTOR *tmpv, /* a2 6 */ float *dir) {
	/* s3 19 */ int i;
	/* s0 16 */ int clip;
	/* 0x0(sp) */ sceVu0FMATRIX tmpmat;
	/* data 304440 */ static sceVu0FMATRIX clipmtx;
	/* data 304480 */ static BoundLine boundline[12];
	/* s4 20 */ int clip0;
	/* s5 21 */ int clip1;
	/* 0x40(sp) */ int cliparray[8];
	/* 0x60(sp) */ char text[256];
}

/* 0017be98 00000078 */ int CheckBoundingBoxShadow(/* s0 16 */ u_int *prim) {}

/* 0017bf10 000002d4 */ void AssignShadowPrim(/* s0 16 */ u_int *prim) {
	/* a1 5 */ int i;
	/* t0 8 */ int cn;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* v0 2 */ float *m1[4];
}

/* 0017c1e8 00000044 */ void AssignShadowPreProcess(/* a0 4 */ u_int *prim) {}

/* 0017c230 000001e0 */ void AssignShadow(/* a0 4 */ void *sgd_top, /* s3 19 */ int except_num) {
	/* s4 20 */ u_int *pk;
	/* s0 16 */ u_int i;
	/* a1 5 */ u_int groups;
	/* s1 17 */ ModelGroup *mgp;
}

/* 0017c410 000001dc */ void SetUpShadow(/* s0 16 */ ShadowHandle *shandle) {
	/* a1 5 */ u_int *datap;
	/* v0 2 */ dword *base;
	/* bss 3fb8a0 */ static sceDmaTag tag[2][3];
	/* sbss 3579ec */ static sceDmaTag *tp;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v1;
}

/* 0017c5f0 000000bc */ void ClearShadowFrame() {
	/* a1 5 */ dword *base;
}

/* 0017c6b0 000001dc */ void SetShadowEnvironment() {
	/* t8 24 */ qword *base;
}

/* 0017c890 00000078 */ void GetRotMatrixYZPlain(/* s0 16 */ float *rmat[4], /* a1 5 */ float *vec) {
	/* 0x0(sp) */ sceVu0FVECTOR cvec;
	/* f20 58 */ float xzr;
}

/* 0017c908 000000c8 */ void GetRotMatrixZAxis(/* s0 16 */ float *rmat[4], /* a1 5 */ float *vec) {
	/* 0x0(sp) */ sceVu0FVECTOR cvec;
	/* f20 58 */ float yzr;
}

/* 0017c9d0 000002b0 */ void CalcShadowMatrix(/* s2 18 */ ShadowHandle *shandle, /* s3 19 */ float *center, /* f20 58 */ float ax, /* f21 59 */ float ay) {
	/* 0x0(sp) */ sceVu0FMATRIX touei;
	/* 0x40(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x80(sp) */ sceVu0FMATRIX quat;
	/* 0xc0(sp) */ sceVu0FVECTOR culplain;
	/* 0xd0(sp) */ float culval[4];
	/* f0 38 */ float mincal;
	/* s0 16 */ int i;
}

/* 0017cc80 00000014 */ static void _ftoi0(/* a0 4 */ int *out, /* a1 5 */ float *in) {}

/* 0017cc98 00000180 */ void CalcShadowHeight(/* a0 4 */ sceVu0FVECTOR *bbox) {
	/* a1 5 */ int tmp;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x10(sp) */ sceVu0IVECTOR itmp;
}

/* 0017ce18 00000590 */ void SetShadowCamera(/* s0 16 */ float *center, /* s2 18 */ sceVu0FVECTOR *bbox, /* a2 6 */ SgCOORDUNIT *cp) {
	/* v1 3 */ int i;
	/* f21 59 */ float xmax;
	/* f22 60 */ float ymax;
	/* 0x0(sp) */ sceVu0FVECTOR tmpvec;
	/* s4 20 */ sceVu0FVECTOR *cbbox;
	/* 0x10(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x50(sp) */ sceVu0FMATRIX quat;
	/* s3 19 */ float *m0[4];
	/* s2 18 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* v0 2 */ float *v1;
	/* s0 16 */ float *v1;
	/* v0 2 */ float *v0;
	/* s4 20 */ float *v0;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v0;
	/* s4 20 */ float *v1;
}

/* 0017d3a8 0000012c */ void DrawShadow(/* s0 16 */ ShadowHandle *shandle, /* s3 19 */ void (*env_func)(/* parameters unknown */)) {
	/* 0x0(sp) */ SgCOORDUNIT oldcoord;
	/* 0xe0(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x120(sp) */ sceVu0FMATRIX quat;
	/* 0x160(sp) */ sceVu0FMATRIX touei;
	/* 0x1a0(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x1b0(sp) */ sceVu0FVECTOR center;
	/* 0x1c0(sp) */ sceVu0FVECTOR vf2reg;
	/* s1 17 */ HeaderSection *hs;
	/* sdata 356e00 */ static int count;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/mirror.c
// *****************************************************************************

/* 0017d4d8 00000030 */ static int MirrorLineClip(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {}
/* 0017d508 00000020 */ static int GetClipValue() {}

/* 0017d528 0000004c */ int CheckMirrorModel(/* a0 4 */ void *sgd_top) {
	/* v1 3 */ u_int *prim;
}

/* 0017d578 000000c4 */ void MirrorInterPNode(/* a0 4 */ MNODE *dst, /* a1 5 */ MNODE *inner, /* a2 6 */ MNODE *outer, /* a3 7 */ ClipData *cldata) {
	/* f2 40 */ float alpha;
	/* f4 42 */ float ialpha;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
}

/* 0017d640 000001bc */ void SliceMirrorPolygon(/* s4 20 */ MFlipNode *fn, /* fp 30 */ ClipData *cldata) {
	/* s7 23 */ int i;
	/* v1 3 */ int clip;
	/* s0 16 */ int newnodes;
	/* 0x20(sp) */ int currmask;
	/* s6 22 */ int nextmask;
	/* s1 17 */ MNODE *currN;
	/* s3 19 */ MNODE *nextN;
	/* a1 5 */ MNODE *swap;
	/* 0x0(sp) */ MNODE interN;
	/* v0 2 */ MNODE *dst;
	/* s1 17 */ MNODE *src;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v0 2 */ MNODE *dst;
	/* s1 17 */ MNODE *src;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v1;
}

/* 0017d800 00000048 */ static void CalcOuterProduct(/* a0 4 */ float *out, /* a1 5 */ int *p0) {}

/* 0017d848 0000044c */ void CalcScreenMirror(/* a0 4 */ float *vp0, /* a1 5 */ float *vp1, /* a2 6 */ float *vp2, /* f20 58 */ float sgn) {
	/* s0 16 */ int i;
	/* s1 17 */ int allclip;
	/* 0x0(sp) */ qword screen_xyz[20];
	/* a1 5 */ qword *pbase;
	/* s0 16 */ MFlipNode *fn;
	/* 0x140(sp) */ sceVu0FVECTOR out;
	/* 0x150(sp) */ sceVu0FVECTOR v0;
	/* 0x160(sp) */ sceVu0FVECTOR v1;
	/* 0x170(sp) */ sceVu0FVECTOR v2;
	/* data 3044e0 */ static ClipData cldata[6];
	/* v1 3 */ MNODE *nm;
	/* v0 2 */ MNODE *nm;
	/* v1 3 */ MNODE *nm;
	/* v0 2 */ MNODE *nm;
	/* v0 2 */ float *v0;
	/* v1 3 */ float *v0;
	/* v1 3 */ float *v0;
	/* v0 2 */ float *v0;
	/* a1 5 */ int *base;
	/* a1 5 */ int *base;
	/* t1 9 */ float *vp;
}

/* 0017dc98 0000005c */ void AppendLocalMPos(/* a3 7 */ float *vp) {
	/* v1 3 */ float *v0;
	/* a3 7 */ float *v1;
	/* a0 4 */ float *v0;
	/* a3 7 */ float *v1;
}

/* 0017dcf8 000003d8 */ int MakeMirrorEnvironment(/* s1 17 */ u_int *prim) {
	/* s3 19 */ int i;
	/* s2 18 */ int j;
	/* s4 20 */ int loops;
	/* s6 22 */ int gloops;
	/* v1 3 */ int mtype;
	/* s7 23 */ int disp_flg;
	/* 0x0(sp) */ sceVu0FVECTOR cp;
	/* f20 58 */ float sgn;
	/* s0 16 */ float *vp;
	/* 0x10(sp) */ sceVu0FVECTOR vertex;
}

/* 0017e0d0 00000128 */ void MirrorPrim(/* s0 16 */ u_int *prim) {
	/* v0 2 */ float *m1[4];
}

/* 0017e1f8 00000198 */ int PreMirrorPrim(/* s4 20 */ SgCAMERA *camera, /* s0 16 */ u_int *prim) {
	/* 0x0(sp) */ sceVu0FMATRIX tmpmat;
	/* s3 19 */ int mir_flag;
	/* v0 2 */ float *m1[4];
}

/* 0017e390 0000004c */ void MirrorBufferFlush(/* a0 4 */ int tlen) {}

/* 0017e3e0 0000035c */ void CalcMirrorMatrix(/* a0 4 */ SgCAMERA *camera) {
	/* 0x0(sp) */ sceVu0FMATRIX quat;
	/* 0x40(sp) */ sceVu0FMATRIX tmpmat;
	/* 0x80(sp) */ sceVu0FMATRIX newws;
	/* 0xc0(sp) */ sceVu0FMATRIX newwc;
	/* 0x100(sp) */ sceVu0FMATRIX newwcv;
	/* 0x140(sp) */ sceVu0FVECTOR centerpos;
	/* 0x150(sp) */ sceVu0FVECTOR norm;
	/* 0x160(sp) */ sceVu0FVECTOR milpos[3];
	/* 0x190(sp) */ sceVu0FVECTOR tmpvec;
	/* 0x1a0(sp) */ sceVu0FVECTOR vaxis;
	/* 0x1b0(sp) */ sceVu0FVECTOR qvert;
	/* 0x1c0(sp) */ sceVu0FVECTOR eye;
	/* f20 58 */ float qrot;
	/* v0 2 */ float *v0;
	/* a0 4 */ float *v1;
}

/* 0017e740 00000428 */ void MirrorDraw(/* s4 20 */ SgCAMERA *camera, /* s2 18 */ void *sgd_top, /* fp 30 */ void (*render_func)(/* parameters unknown */)) {
	/* data 304530 */ static sceVu0IVECTOR miccolor;
	/* t1 9 */ qword *pedraw_buf;
	/* s0 16 */ int i;
	/* v0 2 */ int num;
	/* s7 23 */ u_int *pk;
	/* 0x0(sp) */ sceVu0FVECTOR clip_value;
	/* s0 16 */ sceGsScissor bak_scissor;
	/* 0x10(sp) */ sceVu0FVECTOR tmpv;
	/* v1 3 */ float *v0;
	/* a1 5 */ float *v0;
}

/* 0017eb68 00000160 */ void MirrorRender(/* s4 20 */ SgCAMERA *camera, /* s5 21 */ void (*render_func)(/* parameters unknown */)) {
	/* 0x0(sp) */ sceVu0FVECTOR rreg;
	/* 0x10(sp) */ SgCAMERA mir_camera;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/mov/movie.c
// *****************************************************************************

/* 0017ecc8 00000010 */ void MovieInitWrk() {}
/* 0017ecd8 00000014 */ void ReqMpegEvent(/* a0 4 */ int no) {}

/* 0017ecf0 00000248 */ int PlayMpegEvent() {
	/* a0 4 */ int i;
	/* a0 4 */ int ret;
}

/* 0017ef38 00000114 */ u_int movie(/* s0 16 */ char *name) {
	/* sdata 356e30 */ static int count;
}

/* 0017f050 00000008 */ void switchThread() {}

/* 0017f058 0000023c */ static int readMpeg(/* s0 16 */ VideoDec *vd, /* s1 17 */ ReadBuf *rb, /* s4 20 */ StrFile *file) {
	/* 0x0(sp) */ u_char cdata[32];
	/* s5 21 */ int isStarted;
	/* 0x20(sp) */ u_char *put_ptr;
	/* 0x24(sp) */ u_char *get_ptr;
	/* v1 3 */ int putsize;
	/* v0 2 */ int getsize;
	/* s3 19 */ int readrest;
	/* s2 18 */ int writerest;
	/* v0 2 */ int count;
	/* v0 2 */ int proceed;
}

/* 0017f298 00000034 */ static int isAudioOK() {}

/* 0017f2d0 00000220 */ void initMov(/* s2 18 */ char *bsfilename) {
	/* 0x0(sp) */ ThreadParam th_param;
	/* a1 5 */ void *val;
}

/* 0017f4f0 000000b8 */ static void termMov() {
	/* s0 16 */ sceGsGParam *gparam;
	/* s1 17 */ u_long UserIMR;
}

/* 0017f5a8 00000018 */ static void defMain() {}
/* 0017f5c0 00000008 */ void ErrMessage(/* a0 4 */ char *message) {}
/* 0017f5c8 00000008 */ static void usage() {}
/* 0017f5d0 0000000c */ void proceedAudio() {}

/* 0017f5e0 00000250 */ int MoviePlay(/* s2 18 */ int scene_no) {
	/* a1 5 */ int i;
}

/* 0017f830 00000164 */ void MovieTest(/* a0 4 */ int scene_no) {
	/* a1 5 */ int i;
}

/* 0017f998 000003f4 */ int PadSyncCallback2() {
	/* s0 16 */ int id;
	/* a0 4 */ int i;
	/* s0 16 */ int state;
	/* v0 2 */ int wrk;
	/* a0 4 */ int exid;
	/* s3 19 */ int p_id;
	/* s1 17 */ PAD_STRUCT *psp;
	/* 0x0(sp) */ char act_align[6];
}

/* 0017fd90 00000008 */ void movVblankPad() {}
/* 0017fd98 0000011c */ void ReqLogoMovie() {}
/* 0017feb8 00000100 */ int audioDecCreate(/* s1 17 */ AudioDec *ad, /* a1 5 */ u_char *buff, /* a2 6 */ int buffSize, /* a3 7 */ int iopBuffSize) {}
/* 0017ffb8 0000003c */ int audioDecDelete(/* s0 16 */ AudioDec *ad) {}

/* 0017fff8 00000080 */ void audioDecPause(/* s0 16 */ AudioDec *ad) {
	/* v0 2 */ int ret;
}

/* 00180078 0000006c */ void audioDecResume(/* s0 16 */ AudioDec *ad) {}
/* 001800e8 00000008 */ void audioDecStart(/* a0 4 */ AudioDec *ad) {}
/* 001800f0 00000044 */ void audioDecReset(/* s0 16 */ AudioDec *ad) {}

/* 00180138 000000a0 */ void audioDecBeginPut(/* t1 9 */ AudioDec *ad, /* a1 5 */ u_char **ptr0, /* a2 6 */ int *len0, /* a3 7 */ u_char **ptr1, /* t0 8 */ int *len1) {
	/* t2 10 */ int len;
}

/* 001801d8 00000080 */ void audioDecEndPut(/* a2 6 */ AudioDec *ad, /* a1 5 */ int size) {
	/* v1 3 */ int hdr_add;
}

/* 00180258 00000014 */ int audioDecIsPreset(/* a0 4 */ AudioDec *ad) {}

/* 00180270 000001b4 */ int audioDecSendToIOP(/* s0 16 */ AudioDec *ad) {
	/* 0x0(sp) */ int pd0;
	/* 0x8(sp) */ int pd1;
	/* 0x4(sp) */ int d0;
	/* 0xc(sp) */ int d1;
	/* t0 8 */ u_char *ps0;
	/* t1 9 */ int s0;
	/* t3 11 */ int s1;
	/* s1 17 */ int count_sent;
}

/* 00180428 000000a8 */ static void iopGetArea(/* t4 12 */ int *pd0, /* a1 5 */ int *d0, /* a2 6 */ int *pd1, /* a3 7 */ int *d1, /* t2 10 */ AudioDec *ad, /* t1 9 */ int pos) {
	/* t1 9 */ int len;
}

/* 001804d0 0000015c */ static int sendToIOP2area(/* s5 21 */ int pd0, /* s3 19 */ int d0, /* fp 30 */ int pd1, /* a3 7 */ int d1, /* s4 20 */ u_char *ps0, /* s0 16 */ int s0, /* s6 22 */ u_char *ps1, /* s1 17 */ int s1) {
	/* v1 3 */ int diff;
}

/* 00180630 00000074 */ static int sendToIOP(/* v0 2 */ int dst, /* a1 5 */ u_char *src, /* s1 17 */ int size) {
	/* 0x0(sp) */ sceSifDmaData transData;
	/* s0 16 */ int did;
}

/* 001806a8 00000068 */ static void changeMasterVolume(/* s1 17 */ u_int val) {
	/* s0 16 */ int i;
}

/* 00180710 00000044 */ static void changeInputVolume(/* s0 16 */ u_int val) {}

/* 00180758 00000238 */ void clearGsMem(/* s7 23 */ int r, /* s2 18 */ int g, /* s5 21 */ int b, /* s4 20 */ int disp_width, /* s0 16 */ int disp_height) {
	/* 0x0(sp) */ u_long giftag_clear[2];
	/* 0x10(sp) */ sceGifPacket packet;
	/* 0x20(sp) */ u_long128 packetBase[6];
	/* s6 22 */ sceDmaChan *dmaGif;
}

/* 00180990 00000370 */ void setImageTag(/* a0 4 */ u_int *tags, /* s2 18 */ void *image, /* s0 16 */ int index, /* s3 19 */ int image_w, /* s4 20 */ int image_h) {
	/* fp 30 */ int mbx;
	/* s7 23 */ int mby;
	/* v1 3 */ int i;
	/* s0 16 */ int j;
	/* 0x0(sp) */ Rect tex;
	/* 0x10(sp) */ Rect poly;
	/* 0x20(sp) */ sceGifPacket packet;
	/* 0x30(sp) */ u_long giftag[2];
	/* 0x40(sp) */ u_long giftag_eop[2];
	/* v0 2 */ u_long *tag;
	/* s2 18 */ void *val;
}

/* 00180d00 000001b0 */ int vblankHandlerM(/* a0 4 */ int val) {
	/* s2 18 */ sceDmaChan *dmaGif_loadimage;
	/* s0 16 */ VoTag *tag;
}

/* 00180eb0 00000038 */ int handler_endimage(/* a0 4 */ int val) {}
/* 00180ee8 0000003c */ void startDisplay(/* s0 16 */ int waitEven) {}
/* 00180f28 0000000c */ void endDisplay() {}

/* 00180f38 00000120 */ int videoCallback(/* a0 4 */ sceMpeg *mp, /* s4 20 */ sceMpegCbDataStr *str, /* s2 18 */ void *data) {
	/* s3 19 */ u_char *ps0;
	/* s0 16 */ int s0;
	/* s1 17 */ int s1;
	/* 0x0(sp) */ u_char *pd0;
	/* 0x8(sp) */ u_char *pd1;
	/* 0x4(sp) */ int d0;
	/* 0xc(sp) */ int d1;
	/* s0 16 */ int len;
	/* a0 4 */ void *val;
	/* a2 6 */ void *val;
}

/* 00181058 000000d4 */ int pcmCallback(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbDataStr *str, /* a2 6 */ void *data) {
	/* s3 19 */ ReadBuf *rb;
	/* s2 18 */ u_char *ps0;
	/* s0 16 */ int s0;
	/* s1 17 */ int s1;
	/* 0x0(sp) */ u_char *pd0;
	/* 0x8(sp) */ u_char *pd1;
	/* 0x4(sp) */ int d0;
	/* 0xc(sp) */ int d1;
	/* s1 17 */ int len;
	/* s0 16 */ int ret;
}

/* 00181130 00000138 */ static int copy2area(/* s4 20 */ u_char *pd0, /* s1 17 */ int d0, /* s7 23 */ u_char *pd1, /* a3 7 */ int d1, /* s2 18 */ u_char *ps0, /* s0 16 */ int s0, /* s5 21 */ u_char *ps1, /* s6 22 */ int s1) {}
/* 00181268 00000018 */ void readBufCreate(/* a0 4 */ ReadBuf *b) {}
/* 00181280 00000008 */ void readBufDelete(/* a0 4 */ ReadBuf *b) {}

/* 00181288 00000030 */ int readBufBeginPut(/* a0 4 */ ReadBuf *b, /* a1 5 */ u_char **ptr) {
	/* v1 3 */ int size;
}

/* 001812b8 00000044 */ int readBufEndPut(/* a0 4 */ ReadBuf *b, /* a1 5 */ int size) {
	/* v0 2 */ int size_ok;
}

/* 00181300 00000048 */ int readBufBeginGet(/* a3 7 */ ReadBuf *b, /* a1 5 */ u_char **ptr) {}

/* 00181348 00000024 */ int readBufEndGet(/* a0 4 */ ReadBuf *b, /* a1 5 */ int size) {
	/* v0 2 */ int size_ok;
}

/* 00181370 0000026c */ int strFileOpen(/* s3 19 */ StrFile *file, /* s4 20 */ char *filename) {
	/* s2 18 */ char *body;
	/* 0x0(sp) */ char fn[256];
	/* 0x100(sp) */ char devname[64];
	/* s0 16 */ int dlen;
	/* t0 8 */ int i;
	/* t1 9 */ int len;
	/* a3 7 */ char *tail;
	/* a1 5 */ int __x;
	/* 0x140(sp) */ sceCdRMode mode;
}

/* 001815e0 00000050 */ int strFileClose(/* s0 16 */ StrFile *file) {}

/* 00181630 0000003c */ int strFileRead(/* a0 4 */ StrFile *file, /* a1 5 */ void *buff, /* a2 6 */ int size) {
	/* v0 2 */ int count;
	/* 0x0(sp) */ u_int err;
}

/* 00181670 00000040 */ int getFIFOindex(/* a2 6 */ ViBuf *f, /* a1 5 */ void *addr) {
	/* v1 3 */ void *val;
}

/* 001816b0 00000064 */ void setD3_CHCR(/* s0 16 */ u_int val) {}
/* 00181718 00000064 */ void setD4_CHCR(/* s0 16 */ u_int val) {}
/* 00181780 00000024 */ void scTag2(/* a0 4 */ QWORD *q, /* a1 5 */ void *addr, /* a2 6 */ u_int id, /* a3 7 */ u_int qwc) {}

/* 001817a8 00000078 */ int viBufCreate(/* s0 16 */ ViBuf *f, /* a1 5 */ u_long128 *data, /* a2 6 */ u_long128 *tag, /* a3 7 */ int size, /* t0 8 */ TimeStamp *ts, /* t1 9 */ int n_ts) {
	/* 0x0(sp) */ SemaParam param;
}

/* 00181820 00000148 */ int viBufReset(/* s2 18 */ ViBuf *f) {
	/* s1 17 */ int i;
	/* a1 5 */ void *val;
	/* a0 4 */ void *val;
	/* a1 5 */ void *val;
}

/* 00181968 000000e8 */ void viBufBeginPut(/* s0 16 */ ViBuf *f, /* s3 19 */ u_char **ptr0, /* s1 17 */ int *len0, /* s4 20 */ u_char **ptr1, /* s2 18 */ int *len1) {
	/* a1 5 */ int en;
}

/* 00181a50 00000050 */ void viBufEndPut(/* s0 16 */ ViBuf *f, /* s1 17 */ int size) {}

/* 00181aa0 000001f0 */ int viBufAddDMA(/* s2 18 */ ViBuf *f) {
	/* s1 17 */ int i;
	/* s0 16 */ int index;
	/* s5 21 */ u_int d4chcr;
	/* s6 22 */ int isNewData;
	/* s3 19 */ int read_n;
}

/* 00181c90 00000100 */ int viBufStopDMA(/* s0 16 */ ViBuf *f) {}

/* 00181d90 00000320 */ int viBufRestartDMA(/* s0 16 */ ViBuf *f) {
	/* s6 22 */ int bp;
	/* v0 2 */ int fp;
	/* v1 3 */ int ifc;
	/* s2 18 */ u_int d4madr_next;
	/* s5 21 */ u_int d4qwc_next;
	/* s4 20 */ u_int d4tadr_next;
	/* s3 19 */ u_int d4chcr_next;
	/* s1 17 */ int index;
	/* t6 14 */ int index_next;
	/* a0 4 */ int id;
	/* v1 3 */ void *val;
	/* v0 2 */ void *val;
}

/* 001820b0 00000058 */ int viBufDelete(/* s0 16 */ ViBuf *f) {}

/* 00182108 00000040 */ int viBufIsActive(/* s0 16 */ ViBuf *f) {
	/* s1 17 */ int ret;
}

/* 00182148 0000004c */ int viBufCount(/* s0 16 */ ViBuf *f) {
	/* s1 17 */ int ret;
}

/* 00182198 00000050 */ void viBufFlush(/* s0 16 */ ViBuf *f) {}

/* 001821e8 0000016c */ int viBufModifyPts(/* t3 11 */ ViBuf *f, /* t5 13 */ TimeStamp *new_ts) {
	/* a1 5 */ TimeStamp *ts;
	/* t4 12 */ int rd;
	/* t2 10 */ int datasize;
	/* t8 24 */ int loop;
	/* a0 4 */ int tgt;
	/* a2 6 */ int pos;
	/* t2 10 */ int size;
	/* v0 2 */ int len;
}

/* 00182358 000000ec */ int viBufPutTs(/* s0 16 */ ViBuf *f, /* s1 17 */ TimeStamp *ts) {
	/* s2 18 */ int ret;
}

/* 00182448 0000018c */ int viBufGetTs(/* s2 18 */ ViBuf *f, /* s5 21 */ TimeStamp *ts) {
	/* s0 16 */ u_int d4madr;
	/* v0 2 */ u_int ipubp;
	/* s1 17 */ int bp;
	/* v0 2 */ int fp;
	/* v1 3 */ int ifc;
	/* s0 16 */ u_int d4madr_next;
	/* s3 19 */ int datasize;
	/* s4 20 */ int isEnd;
	/* t2 10 */ int tscount;
	/* a0 4 */ int wt;
	/* t1 9 */ int i;
	/* v1 3 */ int pos;
	/* a0 4 */ int len;
	/* s3 19 */ int size;
}

/* 001825d8 00000100 */ int videoDecCreate(/* s0 16 */ VideoDec *vd, /* a1 5 */ u_char *mpegWork, /* a2 6 */ int mpegWorkSize, /* s1 17 */ u_long128 *data, /* s2 18 */ u_long128 *tag, /* s3 19 */ int tagSize, /* s4 20 */ TimeStamp *pts, /* s5 21 */ int n_pts) {}
/* 001826d8 00000008 */ void videoDecSetDecodeMode(/* a0 4 */ VideoDec *vd, /* a1 5 */ int ni, /* a2 6 */ int np, /* a3 7 */ int nb) {}
/* 001826e0 00000020 */ int videoDecSetStream(/* a0 4 */ VideoDec *vd, /* a1 5 */ int strType, /* a2 6 */ int ch, /* a3 7 */ sceMpegCallback cb, /* t0 8 */ void *data) {}
/* 00182700 00000008 */ void videoDecBeginPut(/* a0 4 */ VideoDec *vd, /* a1 5 */ u_char **ptr0, /* a2 6 */ int *len0, /* a3 7 */ u_char **ptr1, /* t0 8 */ int *len1) {}
/* 00182708 00000008 */ void videoDecEndPut(/* a0 4 */ VideoDec *vd, /* a1 5 */ int size) {}
/* 00182710 00000008 */ void videoDecReset(/* a0 4 */ VideoDec *vd) {}
/* 00182718 00000034 */ int videoDecDelete(/* s0 16 */ VideoDec *vd) {}
/* 00182750 0000000c */ void videoDecAbort(/* a0 4 */ VideoDec *vd) {}
/* 00182760 00000008 */ u_int videoDecGetState(/* a0 4 */ VideoDec *vd) {}

/* 00182768 0000000c */ u_int videoDecSetState(/* a0 4 */ VideoDec *vd, /* a1 5 */ u_int state) {
	/* v0 2 */ u_int old;
}

/* 00182778 0000003c */ int videoDecPutTs(/* a0 4 */ VideoDec *vd, /* a1 5 */ long int pts_val, /* a2 6 */ long int dts_val, /* a3 7 */ u_char *start, /* t0 8 */ int len) {
	/* 0x0(sp) */ TimeStamp ts;
}

/* 001827b8 0000001c */ int videoDecInputCount(/* a0 4 */ VideoDec *vd) {}

/* 001827d8 00000034 */ int videoDecInputSpaceCount(/* a0 4 */ VideoDec *vd) {
	/* 0x0(sp) */ u_char *ptr0;
	/* 0x8(sp) */ u_char *ptr1;
	/* 0x4(sp) */ int len0;
	/* 0xc(sp) */ int len1;
}

/* 00182810 000000cc */ int videoDecFlush(/* s0 16 */ VideoDec *vd) {
	/* 0x10(sp) */ u_char *pd0;
	/* 0x18(sp) */ u_char *pd1;
	/* 0x0(sp) */ u_char seq_end_code[4];
	/* 0x14(sp) */ int d0;
	/* 0x1c(sp) */ int d1;
	/* a0 4 */ void *val;
	/* a2 6 */ void *val;
}

/* 001828e0 00000048 */ int videoDecIsFlushed(/* s0 16 */ VideoDec *vd) {}
/* 00182928 00000070 */ void videoDecMain(/* s1 17 */ VideoDec *vd) {}

/* 00182998 000001c4 */ int decBs0(/* fp 30 */ VideoDec *vd) {
	/* v0 2 */ VoData *voData;
	/* 0x0(sp) */ int status;
	/* s1 17 */ int i;
	/* s7 23 */ int image_w;
	/* s6 22 */ int image_h;
}

/* 00182b60 00000008 */ int mpegError(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbDataError *cberror, /* a2 6 */ void *anyData) {}
/* 00182b68 0000002c */ int mpegNodata(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}
/* 00182b98 00000024 */ int mpegStopDMA(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}
/* 00182bc0 00000024 */ int mpegRestartDMA(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}

/* 00182be8 00000044 */ int mpegTS(/* a0 4 */ sceMpeg *mp, /* s0 16 */ sceMpegCbDataTimeStamp *cbts, /* a2 6 */ void *anyData) {
	/* 0x0(sp) */ TimeStamp ts;
}

/* 00182c30 00000138 */ static int cpy2area(/* s4 20 */ u_char *pd0, /* s1 17 */ int d0, /* s7 23 */ u_char *pd1, /* a3 7 */ int d1, /* s2 18 */ u_char *ps0, /* s0 16 */ int s0, /* s5 21 */ u_char *ps1, /* s6 22 */ int s1) {}

/* 00182d68 00000048 */ void voBufCreate(/* a0 4 */ VoBuf *f, /* a1 5 */ VoData *data, /* a2 6 */ VoTag *tag, /* a3 7 */ int size) {
	/* a1 5 */ int i;
}

/* 00182db0 00000008 */ void voBufDelete(/* a0 4 */ VoBuf *f) {}
/* 00182db8 00000010 */ void voBufReset(/* a0 4 */ VoBuf *f) {}
/* 00182dc8 00000014 */ int voBufIsFull(/* a0 4 */ VoBuf *f) {}
/* 00182de0 00000070 */ void voBufIncCount(/* s0 16 */ VoBuf *f) {}
/* 00182e50 00000044 */ VoData* voBufGetData(/* s0 16 */ VoBuf *f) {}
/* 00182e98 0000000c */ int voBufIsEmpty(/* a0 4 */ VoBuf *f) {}
/* 00182ea8 00000064 */ VoTag* voBufGetTag(/* s0 16 */ VoBuf *f) {}
/* 00182f10 00000020 */ void voBufDecCount(/* a0 4 */ VoBuf *f) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/scene/fod.c
// *****************************************************************************

/* 00182f30 00000120 */ void FodInit(/* s0 16 */ FOD_CTRL *fc, /* s2 18 */ u_int *tcp, /* s5 21 */ u_int *tlp, /* s4 20 */ u_int *tep) {}

/* 00183050 000000c8 */ int FodNextFrame(/* a1 5 */ FOD_CTRL *fc) {
	/* t2 10 */ u_int size;
	/* v0 2 */ char *cam_addr;
	/* a2 6 */ char *lit_addr;
	/* a3 7 */ char *eff_addr;
}

/* 00183118 000000cc */ void FodSetFrame(/* a0 4 */ FOD_CTRL *fc, /* a1 5 */ u_int frame) {
	/* t0 8 */ u_int i;
	/* v1 3 */ u_int *fod_cam_addr;
	/* a3 7 */ u_int *fod_lit_addr;
	/* a2 6 */ u_int *fod_eff_addr;
}

/* 001831e8 00000030 */ void FodGetLightNum(/* a0 4 */ FOD_LIGHT *fl) {
	/* a2 6 */ u_int *lit_addr;
}

/* 00183218 00000100 */ void FodGetLightSerial(/* s1 17 */ FOD_LIGHT *fl) {
	/* s3 19 */ FOD_LIT_SERIAL *fls;
	/* v1 3 */ u_int *lit_addr;
	/* s2 18 */ int i;
}

/* 00183318 000002b0 */ u_int* FodGetFirstLight(/* s7 23 */ FOD_LIGHT *fl) {
	/* f20 58 */ float cone_deg;
	/* fp 30 */ int i;
	/* v1 3 */ int lit_type;
	/* s1 17 */ u_int *lit_addr;
	/* v0 2 */ float *v1;
	/* v1 3 */ float *v1;
	/* v0 2 */ float *v1;
}

/* 001835c8 00000444 */ void FodSetMyLight(/* s5 21 */ FOD_LIGHT *fl, /* 0x0(sp) */ char *pfx, /* 0x4(sp) */ float *eye) {
	/* bss 4002c0 */ static SgLIGHT ilight[3];
	/* bss 400470 */ static SgLIGHT slight[3];
	/* bss 400620 */ static SgLIGHT plight[3];
	/* bss 4007d0 */ static sceVu0FVECTOR ambient;
	/* s2 18 */ FOD_LIT_SERIAL *fls;
	/* s1 17 */ SgLIGHT *org;
	/* s3 19 */ int i;
	/* s7 23 */ int il_num;
	/* s4 20 */ int sl_num;
	/* fp 30 */ int pl_num;
	/* s6 22 */ int get_light_flg;
}

/* 00183a10 0000009c */ void FodSetSpotLights(/* s3 19 */ SgLIGHT *sl, /* s4 20 */ u_int num) {
	/* s2 18 */ u_int i;
}

/* 00183ab0 00000248 */ void FodGetToSgLight(/* s3 19 */ FOD_CTRL *fc) {
	/* s0 16 */ SgLIGHT *sl;
	/* s4 20 */ int i;
	/* s2 18 */ u_int *lit_addr;
	/* s1 17 */ float *data;
	/* v1 3 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* v0 2 */ float *v0;
	/* s1 17 */ float *v1;
	/* v1 3 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v0;
	/* s1 17 */ float *v1;
	/* a0 4 */ float *v0;
	/* s1 17 */ float *v1;
	/* f20 58 */ float cone_deg;
	/* v1 3 */ float *v0;
	/* s1 17 */ float *v1;
	/* v0 2 */ float *v0;
	/* s0 16 */ float *v0;
	/* s1 17 */ float *v1;
}

/* 00183cf8 00000034 */ void FodGetHandSpotPos(/* a0 4 */ FOD_LIGHT *fl, /* a1 5 */ float *p, /* a3 7 */ float *i) {
	/* a0 4 */ SgLIGHT *sl;
	/* a0 4 */ float *v1;
	/* a3 7 */ float *v0;
	/* a0 4 */ float *v1;
}

/* 00183d30 000000e4 */ void FodGetDropSpotPos(/* s2 18 */ FOD_LIGHT *fl, /* s4 20 */ char *pfx, /* s6 22 */ float *lp, /* s7 23 */ float *li) {
	/* v0 2 */ SgLIGHT *sl;
	/* s1 17 */ int i;
	/* s3 19 */ int no;
	/* s6 22 */ float *v0;
	/* v0 2 */ float *v1;
	/* s7 23 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00183e18 0000003c */ int FodGetLightType(/* a0 4 */ FOD_LIGHT *fl, /* a1 5 */ int id) {
	/* a2 6 */ int i;
	/* v1 3 */ int ret_type;
}

/* 00183e58 00000148 */ void FodGetFirstCam(/* s2 18 */ SgCAMERA *cam, /* a1 5 */ FOD_CTRL *fc) {
	/* s3 19 */ FOD_FIRST_CAM *fcam;
	/* s2 18 */ float *v0;
	/* s3 19 */ float *v1;
	/* s1 17 */ float *v0;
	/* v0 2 */ float *v1;
}

/* 00183fa0 00000190 */ void FodGetCamData(/* s1 17 */ SgCAMERA *cam, /* s4 20 */ FOD_CTRL *fc) {
	/* s0 16 */ float *fdat;
	/* s2 18 */ int i;
	/* s1 17 */ float *v0;
	/* s0 16 */ float *v1;
	/* s0 16 */ float *v1;
}

/* 00184130 000000b8 */ u_int* FodGetFixEffect(/* s0 16 */ u_int *tep) {
	/* a1 5 */ FOD_EFF_DATA *fed;
	/* v1 3 */ u_int i;
}

/* 001841e8 00000288 */ void FodSetEffect(/* s6 22 */ FOD_CTRL *fc) {
	/* s1 17 */ FOD_EFF_FRAME *fef;
	/* s0 16 */ FOD_EFF_DATA *fed;
	/* s4 20 */ int i;
	/* s2 18 */ char *end_addr;
}

/* 00184470 000004f0 */ void FodSetEffectParam(/* s2 18 */ FOD_EFF_DATA *fed) {
	/* v1 3 */ int i;
	/* 0x20(sp) */ sceVu0FMATRIX mtx;
	/* 0x60(sp) */ sceVu0FVECTOR base;
	/* 0x70(sp) */ sceVu0FVECTOR trgt;
	/* f20 58 */ float x;
	/* f22 60 */ float y;
	/* f21 59 */ float z;
	/* s0 16 */ sceVu0FVECTOR *fire;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/scene/scene.c
// *****************************************************************************

/* 00184960 000000d4 */ int SceneAllLoad(/* a0 4 */ int scene_no, /* a1 5 */ u_int *load_addr) {
	/* s1 17 */ int ret;
}

/* 00184a38 000001a0 */ u_int* SceneDataLoadReq(/* a3 7 */ int scene_no, /* a1 5 */ u_int *load_addr) {
	/* s0 16 */ SCENE_CTRL *sc;
	/* s2 18 */ u_int *scn_addr;
	/* s3 19 */ int scn_file_no;
	/* a1 5 */ int i;
	/* v1 3 */ int next_addr;
}

/* 00184bd8 000001bc */ int SceneDataLoadWait() {
	/* s2 18 */ SCENE_CTRL *sc;
	/* s1 17 */ int i;
}

/* 00184d98 000000d0 */ void SceneDataAnalyze(/* s1 17 */ SCENE_FILE *sf, /* s0 16 */ u_int *scn_addr) {}

/* 00184e68 0000008c */ void SceneGetHeaderData(/* s0 16 */ SCENE_CTRL *sc, /* a1 5 */ u_int *hdr_top) {
	/* v0 2 */ u_short *hdr_num_data;
}

/* 00184ef8 00000104 */ void SceneInitEnvironment(/* s1 17 */ SCENE_FILE *sf, /* s0 16 */ SCENE_CTRL *sc) {}

/* 00185000 000002d4 */ void SceneLightRevision(/* s5 21 */ SCENE_CTRL *sc) {
	/* 0x0(sp) */ sceVu0FVECTOR amb;
	/* s4 20 */ FOD_LIGHT *fl;
	/* s0 16 */ u_int *lit_addr;
	/* s2 18 */ int i;
	/* s3 19 */ int err_flg;
	/* s0 16 */ float *v1;
}

/* 001852d8 0000018c */ void SceneAllMdlInit(/* s1 17 */ SCENE_CTRL *sc) {
	/* s0 16 */ int i;
}

/* 00185468 00000150 */ void SceneInitManMdl(/* s1 17 */ SCN_ANM_MDL *sam, /* a1 5 */ u_int *mot_addr, /* s0 16 */ u_int *mim_addr, /* s3 19 */ u_int mdl_id) {
	/* s2 18 */ SCENE_CTRL *sc;
	/* v1 3 */ int i;
	/* 0x0(sp) */ char pfx[5];
}

/* 001855b8 0000012c */ void SceneInitOtherMdl(/* s0 16 */ SCN_ANM_MDL *sam, /* a1 5 */ u_int *pk2_mot_addr, /* s2 18 */ u_int mdl_id) {
	/* s1 17 */ SCENE_CTRL *sc;
	/* 0x0(sp) */ char pfx[5];
}

/* 001856e8 00000330 */ void SceneDraw(/* a2 6 */ int scene_no) {
	/* s3 19 */ SCENE_CTRL *sc;
	/* s5 21 */ FOD_CTRL *fc;
	/* s1 17 */ int i;
}

/* 00185a18 000000dc */ void SceneRenewEnvironment(/* s1 17 */ SCENE_CTRL *sc) {
	/* s0 16 */ int i;
}

/* 00185af8 000002cc */ void SceneMirrorMdlDraw() {
	/* s2 18 */ SCENE_CTRL *sc;
	/* s5 21 */ FOD_CTRL *fc;
	/* s3 19 */ SCN_ANM_MDL *sam;
	/* s1 17 */ HeaderSection *hs;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* s4 20 */ int i;
}

/* 00185dc8 00000200 */ int SceneIsEnd() {
	/* s2 18 */ SCENE_CTRL *sc;
	/* s1 17 */ int i;
	/* s0 16 */ int ret;
	/* a2 6 */ int skip_ok;
}

/* 00185fc8 0000005c */ void SceneLightClear(/* s0 16 */ SCENE_CTRL *sc) {
	/* 0x0(sp) */ sceVu0FVECTOR zd;
}

/* 00186028 00000234 */ void SceneScenePrerender() {
	/* bss 4007e0 */ static SgLIGHT lights;
	/* bss 400870 */ static SgLIGHT ilights[3];
	/* bss 400a20 */ static SgLIGHT plights[16];
	/* bss 401320 */ static SgLIGHT slights[16];
	/* 0x10(sp) */ sceVu0FVECTOR ambient;
	/* s4 20 */ SCENE_CTRL *sc;
	/* v0 2 */ SCN_ANM_MDL *sam;
	/* s0 16 */ int i;
	/* s6 22 */ int disp_room;
	/* s3 19 */ u_int *tmpModelp;
}

/* 00186260 00000038 */ sceVu0FVECTOR* SceneGetMdlWaistPos(/* a0 4 */ ANI_CTRL *ani_ctrl, /* a1 5 */ u_short mdl_no) {}

/* 00186298 000002ec */ void SceneSetEneEffect(/* s3 19 */ SCN_ANM_MDL *sam) {
	/* bss 401c20 */ static sceVu0FVECTOR pos;
	/* bss 401c30 */ static sceVu0FVECTOR pos2;
	/* sbss 357a18 */ static float spd;
	/* 0x30(sp) */ sceVu0FVECTOR tv;
	/* 0x40(sp) */ sceVu0FVECTOR tr;
	/* s1 17 */ int i;
}

/* 00186588 000000b0 */ void SceneReleaseEffect(/* s3 19 */ SCENE_CTRL *sc) {
	/* v0 2 */ SCN_ANM_MDL *sam;
	/* v1 3 */ int i;
	/* s1 17 */ int j;
}

/* 00186638 00000094 */ SCN_ENE_EFCT* SceneGetEneEfctAddr(/* a0 4 */ SCENE_CTRL *sc, /* t0 8 */ u_int mdl_no) {
	/* t2 10 */ SCN_ENE_EFCT *ret_addr;
	/* a2 6 */ u_int cnt;
}

/* 001866d0 000000f0 */ void SceneSetFadeMdlEffect(/* a0 4 */ SCENE_CTRL *sc) {
	/* a2 6 */ SCN_ANM_MDL *sam;
	/* t0 8 */ FOD_EF_FADE_MDL *fefm;
	/* a3 7 */ int i;
	/* a1 5 */ int j;
	/* t1 9 */ int mdl_num;
}

/* 001867c0 00000188 */ void SceneSetVibrate(/* a0 4 */ int scene_no, /* s2 18 */ int frame) {
	/* v1 3 */ SCN_VIB_DATA *vib_datp;
}

/* 00186948 000001fc */ void SceneDrawManMdl(/* s4 20 */ SCENE_CTRL *sc, /* s5 21 */ u_int mdl_id) {
	/* s0 16 */ SgCOORDUNIT *cp;
	/* v0 2 */ MANMDL_DAT *mdat;
	/* s1 17 */ FOD_CTRL *fc;
	/* s2 18 */ SCN_ANM_MDL *sam;
	/* s3 19 */ u_int *base_p;
	/* f0 38 */ float scale;
}

/* 00186b48 000003a4 */ void SceneDrawManShadow(/* s5 21 */ SCENE_CTRL *sc, /* s2 18 */ SCN_ANM_MDL *sam) {
	/* 0x0(sp) */ ShadowHandle shandle;
	/* v1 3 */ SCN_ANM_MDL *dsam;
	/* 0x60(sp) */ sceVu0FMATRIX mat;
	/* 0xa0(sp) */ sceVu0FVECTOR shadow_bbox[8];
	/* 0x120(sp) */ sceVu0FVECTOR dir;
	/* 0x130(sp) */ sceVu0FVECTOR lp;
	/* 0x140(sp) */ sceVu0FVECTOR li;
	/* a2 6 */ sceVu0FVECTOR *bbox_addr;
	/* 0x150(sp) */ u_int *ysearch_models[30];
	/* s0 16 */ u_int i;
	/* a0 4 */ u_int born_no;
	/* s3 19 */ u_int search_num;
	/* v1 3 */ SgCOORDUNIT *cp;
	/* s7 23 */ u_int *shdw_addr;
	/* s2 18 */ float *v1;
}

/* 00186ef0 00000124 */ void SceneDrawOtherMdl(/* s3 19 */ SCENE_CTRL *sc, /* s1 17 */ SCN_ANM_MDL *sam) {
	/* s0 16 */ SgCOORDUNIT *cp;
	/* s2 18 */ FOD_CTRL *fc;
	/* s4 20 */ u_int *base_p;
	/* s0 16 */ u_int frame;
}

/* 00187018 00000140 */ void SceneDrawRoom(/* s3 19 */ SCENE_CTRL *sc) {
	/* s1 17 */ HeaderSection *hs;
	/* s0 16 */ SgCOORDUNIT *cp;
	/* 0x0(sp) */ u_int *room_mdl[2];
	/* s4 20 */ int i;
}

/* 00187158 000000bc */ void SceneSpecialManage() {
	/* v1 3 */ SCENE_CTRL *sc;
	/* a1 5 */ SCN_ANM_MDL *sam;
	/* a0 4 */ int i;
	/* a0 4 */ int j;
}

/* 00187218 00000034 */ int SceneDecisionMovie(/* a0 4 */ int scene_no) {
	/* v1 3 */ int i;
}

/* 00187250 00000064 */ u_int* SceneGetMotAddr(/* s1 17 */ u_int *pak_top, /* s2 18 */ u_int no, /* s0 16 */ char *pfx) {}

/* 001872b8 000000a0 */ u_int* SceneGetMimAddr(/* s4 20 */ u_int *pak_top, /* s3 19 */ char *pfx) {
	/* s1 17 */ int i;
	/* s2 18 */ int no;
	/* s0 16 */ char *pfx_top;
}

/* 00187358 000000d4 */ char* GetHeaderMdlNo(/* s1 17 */ SCN_ANM_MDL *sam, /* s2 18 */ int num, /* s3 19 */ char *hdr_pfx) {
	/* s4 20 */ int i;
}

/* 00187430 0000005c */ u_int GetPrefixNo(/* a0 4 */ char *pfx) {
	/* v1 3 */ u_int mdl_no;
	/* 0x0(sp) */ char pfx_tmp[5];
}

/* 00187490 00000014 */ u_int* GetADRTBL(/* a0 4 */ u_int *top, /* a1 5 */ u_int no) {}

/* 001874a8 000000dc */ void SceneSetManMdlTexOffset(/* a0 4 */ SCENE_CTRL *sc) {
	/* 0x0(sp) */ int vram_offset[2];
	/* a2 6 */ int i;
	/* t0 8 */ int ofs_cnt;
	/* t1 9 */ u_int hero_mdl_no;
}

/* 00187588 00000060 */ int SceneGetChapterNo(/* a0 4 */ int scene_no) {
	/* v1 3 */ int chapter_no;
}

/* 001875e8 00000044 */ void SceneSetSquare(/* a0 4 */ int pri, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float w, /* f15 53 */ float h, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}

/* 00187630 00000184 */ void SceneCheckModelEntry(/* s1 17 */ SCENE_CTRL *sc) {
	/* a2 6 */ SCN_ANM_MDL *sam;
	/* 0x0(sp) */ char prefix[5];
	/* s0 16 */ int i;
}

/* 001877b8 00000048 */ void InitSceneWork() {
	/* a0 4 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/ingame.c
// *****************************************************************************

/* 00187800 00000190 */ void InGameCtrl() {}
/* 00187990 00000294 */ int InGameFirstLoad() {}

/* 00187c28 000002b0 */ void InGameInit() {
	/* s2 18 */ int next_msn_chk;
}

/* 00187ed8 0000013c */ void InGameInit2() {
	/* s2 18 */ int mode;
}

/* 00188018 00000524 */ void InGameMain() {
	/* s1 17 */ u_char tmp_room_no;
}

/* 00188540 00000034 */ void TmpPadOff() {
	/* a0 4 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/ig_init.c
// *****************************************************************************

/* 00188578 000000b4 */ void InitCamera() {
	/* a0 4 */ u_char i;
}

/* 00188630 00000078 */ void InitPlyr() {}
/* 001886a8 00000080 */ void InitPlyr2(/* s1 17 */ int film_no) {}
/* 00188728 00000010 */ void InitPlyrAfterLoad() {}
/* 00188738 00000030 */ void InitEnemy() {}

/* 00188768 00000050 */ void EnemyActDataLoad() {
	/* 0x0(sp) */ int eadat_tbl[3];
}

/* 001887b8 00000014 */ void InitFlyWrk() {}
/* 001887d0 00000008 */ void InitFilm() {}
/* 001887d8 00000054 */ void LoadStartDataInit() {}

/* 00188830 00000290 */ int LoadStartDataSet() {
	/* s1 17 */ int ret;
}

/* 00188ac0 0000000c */ void InitLoadStartLock() {}
/* 00188ad0 0000000c */ int GetLoadStartLock() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/camera/camera.c
// *****************************************************************************

/* 00188ae0 000002f8 */ void CameraMain() {}

/* 00188dd8 000000d4 */ void KonwakuCamCtrl() {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
}

/* 00188eb0 000000f0 */ void FinderInCameraCtrl() {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
	/* bss 401c40 */ static sceVu0FVECTOR pv;
	/* bss 401c50 */ static sceVu0FVECTOR iv;
	/* sdata 356f2d */ static u_char time;
}

/* 00188fa0 00000314 */ void NormalCameraCtrl() {
	/* 0x0(sp) */ MAP_CAM_INFO mci;
	/* 0x10(sp) */ SgCAMERA tc;
	/* 0x240(sp) */ SgCAMERA tc2;
	/* bss 401c60 */ static SgCAMERA oc;
}

/* 001892b8 00000150 */ int GetCameraInfo(/* s0 16 */ MAP_CAM_INFO *mci) {
	/* sdata 356f2e */ static u_char kind_old;
}

/* 00189408 00000100 */ void GetCameraData(/* a0 4 */ u_char kind, /* t0 8 */ MAP_CAM_INFO *mci) {}

/* 00189508 000000d0 */ void SetCamPos0(/* s0 16 */ SgCAMERA *tc, /* s1 17 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 001895d8 00000140 */ void SetCamPos1(/* s0 16 */ SgCAMERA *tc, /* s1 17 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv2;
	/* data 31ffc0 */ static sceVu0FVECTOR tv;
}

/* 00189718 000001d0 */ void SetCamPos2(/* s0 16 */ SgCAMERA *tc, /* s1 17 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR bv;
	/* f21 59 */ float per;
}

/* 001898e8 00000234 */ void SetCamPos3(/* s1 17 */ SgCAMERA *tc, /* s0 16 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv2;
	/* 0x10(sp) */ sceVu0FVECTOR bv;
	/* f20 58 */ float per;
	/* data 31ffd0 */ static sceVu0FVECTOR tv;
}

/* 00189b20 00000220 */ void SetCamPos4(/* s1 17 */ SgCAMERA *tc, /* s0 16 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR bv;
	/* f20 58 */ float per;
}

/* 00189d40 0000014c */ void SetCamPos5(/* s1 17 */ SgCAMERA *tc, /* s2 18 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tv2;
	/* data 31ffe0 */ static sceVu0FVECTOR tv;
}

/* 00189e90 00000104 */ float GetMCLocalPosPer(/* a3 7 */ u_short cn, /* t0 8 */ u_char kind, /* s0 16 */ u_char id) {
	/* 0x10(sp) */ u_short xmin;
	/* 0x12(sp) */ u_short xmax;
	/* 0x14(sp) */ u_short zmin;
	/* 0x16(sp) */ u_short zmax;
	/* 0x0(sp) */ u_char kind_tbl[4];
	/* sbss 357a28 */ static float min;
	/* sbss 357a2c */ static float max;
	/* sdata 356f34 */ static u_short req_cam_no_save;
	/* sdata 356f36 */ static u_char req_cam_kind_save;
}

/* 00189f98 00000b24 */ void CompleCameraPos(/* s3 19 */ SgCAMERA *tc, /* s4 20 */ SgCAMERA *oc, /* s2 18 */ MAP_CAM_INFO *mci) {
	/* 0x0(sp) */ sceVu0FVECTOR tc0;
	/* 0x10(sp) */ sceVu0FVECTOR tc1;
	/* f20 58 */ float comple_div;
	/* f20 58 */ float tca0;
	/* a2 6 */ u_char i;
	/* t2 10 */ u_char chk;
	/* s1 17 */ u_int *tbl;
	/* sbss 357a30 */ static u_char rmax;
	/* sbss 357a31 */ static u_char pmax;
	/* sbss 357a32 */ static u_char comple_cnt;
	/* sbss 357a33 */ static u_char comple_spd_dwn;
	/* sbss 357a34 */ static u_char comple_dwn_tm;
	/* data 31fff0 */ static sceVu0FVECTOR comple_adjr;
	/* data 320000 */ static sceVu0FVECTOR comple_adjp;
	/* sdata 356f38 */ static float comple_adjfov;
	/* sdata 356f3c */ static float comple_adjroll;
}

/* 0018aac0 0000006c */ u_char CompleReqChk(/* a0 4 */ MAP_CAM_INFO *mci) {
	/* a3 7 */ u_char req;
}

/* 0018ab30 000002a4 */ void FinderModeCameraCtrl() {
	/* s4 20 */ MOVE_BOX *mb;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
}

/* 0018add8 00000050 */ void PlyrCamCondChk() {}

/* 0018ae28 0000005c */ void PconMahiCameraCtrl() {
	/* a0 4 */ MOVE_BOX *mb;
	/* sdata 356f40 */ static u_char time;
	/* sdata 356f41 */ static u_char flag;
}

/* 0018ae88 00000190 */ void PconTebureCameraCtrl() {
	/* s0 16 */ MOVE_BOX *mb;
	/* 0x4(sp) */ float ax;
	/* 0x8(sp) */ float ay;
	/* 0x0(sp) */ char pad_x;
	/* 0x1(sp) */ char pad_y;
	/* 0x2(sp) */ u_char jpad_on;
	/* sbss 357a38 */ static float rot;
	/* sdata 356f44 */ static float rot_adj;
	/* sbss 357a3c */ static float spd;
	/* sdata 356f48 */ static u_char flag;
}

/* 0018b018 00000210 */ int FinderModePadChk(/* t2 10 */ char *pad_x, /* a1 5 */ char *pad_y, /* a2 6 */ float *ax, /* a3 7 */ float *ay, /* t0 8 */ u_char *jpad_on) {}

/* 0018b228 000003f4 */ void SetFinderRot() {
	/* s1 17 */ MOVE_BOX *mb;
	/* f20 58 */ float delta;
	/* f22 60 */ float dist;
	/* f21 59 */ float spd;
	/* 0x4(sp) */ float ax;
	/* 0x8(sp) */ float ay;
	/* f20 58 */ float rot;
	/* 0x0(sp) */ char pad_x;
	/* 0x1(sp) */ char pad_y;
	/* 0x2(sp) */ u_char jpad_on;
}

/* 0018b620 00000c84 */ void CameraIdMoveCtrl() {
	/* s1 17 */ MAP_CAM_DAT *mcd;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rav;
	/* f24 62 */ float delta;
	/* s0 16 */ u_short cn;
	/* t2 10 */ char *str;
	/* t1 9 */ char *str5;
	/* t0 8 */ char *str6;
	/* a3 7 */ char *str7;
	/* s5 21 */ char *str0;
	/* s7 23 */ char *str1;
	/* fp 30 */ char *str2;
	/* s3 19 */ char *str4;
	/* s6 22 */ char *str_save;
}

/* 0018c2a8 00000110 */ u_char SetMapCamDat0(/* a2 6 */ MAP_CAM_DAT *mcd) {
	/* a1 5 */ u_char i;
}

/* 0018c3b8 0000010c */ u_char SetMapCamDat1(/* a3 7 */ MAP_CAM_DAT *mcd) {
	/* a2 6 */ u_char i;
}

/* 0018c4c8 00000310 */ u_char SetMapCamDat2(/* s0 16 */ MAP_CAM_DAT *mcd, /* a1 5 */ u_char id) {
	/* a2 6 */ u_char i;
	/* s2 18 */ u_char end;
	/* bss 401e90 */ static MAP_CAM_DAT tmpd;
}

/* 0018c7d8 000002c0 */ u_char SetMapCamDat3(/* s0 16 */ MAP_CAM_DAT *mcd, /* a1 5 */ u_char id) {
	/* a2 6 */ u_char i;
	/* s2 18 */ u_char end;
	/* bss 401ec0 */ static MAP_CAM_DAT tmpd;
}

/* 0018ca98 0000038c */ u_char SetMapCamDat4(/* s0 16 */ MAP_CAM_DAT *mcd, /* a1 5 */ u_char id) {
	/* a2 6 */ u_char i;
	/* s2 18 */ u_char end;
	/* bss 401ef0 */ static MAP_CAM_DAT tmpd;
}

/* 0018ce28 0000011c */ u_char SetMapCamDat5(/* a3 7 */ MAP_CAM_DAT *mcd) {
	/* a2 6 */ u_char i;
}

/* 0018cf48 00000320 */ void SaveCamDat(/* a0 4 */ u_char kind, /* a1 5 */ u_char mn) {
	/* s0 16 */ int fd;
	/* 0x0(sp) */ char fname[38];
	/* 0x30(sp) */ char fname2[39];
	/* 0x60(sp) */ char fname3[39];
	/* 0x90(sp) */ char fname4[39];
}

/* 0018d268 00000008 */ void ReqFinderInOverRap(/* a0 4 */ u_short time) {}
/* 0018d270 00000028 */ void FinderInOverRapCtrl() {}

/* 0018d298 00000174 */ void PlyrDmgCameraCtrl() {
	/* 0x0(sp) */ sceVu0FVECTOR tr;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* sdata 356f4c */ static int cnt;
	/* data 320010 */ static sceVu0FVECTOR cv;
}

/* 0018d410 00000104 */ void ReqDramaCamera(/* a0 4 */ u_char req, /* a1 5 */ u_short no, /* a2 6 */ u_short time) {
	/* t0 8 */ u_short *tbl;
	/* a3 7 */ u_char i;
}

/* 0018d518 000000bc */ void DramaCameraReqCtrl() {
	/* a2 6 */ u_char i;
	/* t0 8 */ u_char chk;
}

/* 0018d5d8 00000040 */ void ClearDramaCamReq() {
	/* a0 4 */ u_char i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/enemy/ene_ctl.c
// *****************************************************************************

/* 0018d618 00000190 */ void EneCtrlMain() {
	/* s1 17 */ u_char i;
	/* sdata 356f6e */ static u_char flag;
}

/* 0018d7a8 000000b8 */ void EneEntryChk(/* s0 16 */ u_char no) {}

/* 0018d860 00000350 */ void JEneEntry(/* s4 20 */ u_char wrk_no, /* a1 5 */ u_char dat_no) {
	/* s3 19 */ ENE_WRK *ew;
	/* 0x10(sp) */ sceVu0FVECTOR p;
	/* 0x20(sp) */ float rot;
	/* s0 16 */ u_int sta_save;
	/* a1 5 */ u_char i;
	/* a2 6 */ u_char cnt;
}

/* 0018dbb0 000001a4 */ void FEneEntry(/* a0 4 */ u_char wrk_no, /* a1 5 */ u_char dat_no) {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* 0x20(sp) */ float rot;
}

/* 0018dd58 000001a4 */ void AEneEntry(/* a0 4 */ u_char wrk_no, /* a1 5 */ u_char dat_no) {
	/* s1 17 */ ENE_WRK *ew;
	/* s0 16 */ AENE_INFO_DAT *aie;
	/* 0x0(sp) */ float rot;
	/* bss 401f20 */ static ENE_DAT tmp_aene_dat;
}

/* 0018df00 000002c4 */ void EneRule(/* s0 16 */ ENE_WRK *ew) {
	/* 0x0(sp) */ u_char act_no;
	/* a1 5 */ u_char view_chk;
	/* t0 8 */ char *str1;
	/* a2 6 */ char *str2;
	/* a3 7 */ char *str3;
	/* t1 9 */ char *str_clr;
}

/* 0018e1c8 0000006c */ void EneCondCtrl(/* a0 4 */ ENE_WRK *ew) {}
/* 0018e238 0000016c */ void EneAuraCtrl(/* a1 5 */ ENE_WRK *ew) {}

/* 0018e3a8 0000010c */ void InitEneWrk(/* a0 4 */ u_char wrk_no) {
	/* s1 17 */ ENE_WRK *ew;
	/* a0 4 */ int i;
}

/* 0018e4b8 000002b8 */ int EneWrkReleaseChk(/* s0 16 */ ENE_WRK *ew) {
	/* s1 17 */ int result;
}

/* 0018e770 00000088 */ void FuyuEneRelease() {
	/* s0 16 */ u_char i;
}

/* 0018e7f8 00000078 */ void EnePosInfoSet(/* s0 16 */ ENE_WRK *ew) {}

/* 0018e870 00000178 */ void EneSeOmenChk(/* s2 18 */ ENE_WRK *ew, /* a1 5 */ u_char id) {
	/* 0x0(sp) */ float dist_tbl[2];
	/* 0x10(sp) */ u_short se_tbl[2];
	/* f20 58 */ float dist;
	/* s3 19 */ int i;
}

/* 0018e9e8 000001bc */ void EneMoveCtrl(/* s2 18 */ ENE_WRK *ew) {
	/* s0 16 */ MOVE_BOX *mb;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* s1 17 */ u_char i;
}

/* 0018eba8 00000090 */ u_char EnePRecogChkChk(/* a0 4 */ ENE_WRK *ew) {
	/* a2 6 */ u_char req;
}

/* 0018ec38 000001a0 */ u_char EnePRecogChk(/* s3 19 */ ENE_WRK *ew, /* s4 20 */ u_char *act_no) {
	/* s2 18 */ u_char new_act;
}

/* 0018edd8 00000048 */ u_char HitDmgChk(/* a0 4 */ ENE_WRK *ew) {
	/* a2 6 */ u_char chk;
}

/* 0018ee20 0000006c */ u_char CaptureOnChk1(/* a1 5 */ ENE_WRK *ew) {
	/* s0 16 */ u_char chk;
	/* f20 58 */ float gthr_rng;
}

/* 0018ee90 00000038 */ u_char CaptureOnChk3(/* a0 4 */ ENE_WRK *ew) {
	/* a1 5 */ u_char chk;
}

/* 0018eec8 00000008 */ u_char CaptureOnChk4(/* a0 4 */ ENE_WRK *ew) {}

/* 0018eed0 000000e8 */ u_char CaptureOnChk2(/* s1 17 */ ENE_WRK *ew) {
	/* 0x0(sp) */ sceVu0FVECTOR rot;
	/* f20 58 */ float gthr_rng;
	/* s3 19 */ u_char chk;
}

/* 0018efb8 00000088 */ u_char PlyrSeFootChk(/* a1 5 */ ENE_WRK *ew) {
	/* f20 58 */ float rng;
	/* s0 16 */ u_char chk;
}

/* 0018f040 00000058 */ void EneActIniChk(/* a0 4 */ ENE_WRK *ew, /* a1 5 */ u_char view_chk, /* t0 8 */ u_char act_no) {}
/* 0018f098 00000008 */ void EneActIniSet(/* a0 4 */ ENE_WRK *ew, /* a1 5 */ u_char act_no) {}

/* 0018f0a0 000001c0 */ void EneActSet(/* a0 4 */ ENE_WRK *ew, /* a1 5 */ u_char act_no) {
	/* a2 6 */ MOVE_BOX *mb;
}

/* 0018f260 0000008c */ void EneBlinkDataSet(/* a0 4 */ ENE_WRK *ew) {}
/* 0018f2f0 000000b8 */ void EneARatioDataSet(/* a0 4 */ ENE_WRK *ew, /* a1 5 */ u_char anime_no) {}

/* 0018f3a8 000001dc */ void EneActRule(/* s0 16 */ ENE_WRK *ew) {
	/* f2 40 */ float dist;
	/* 0x0(sp) */ u_char act_no;
}

/* 0018f588 000000a8 */ int EneActPreferChk(/* s0 16 */ ENE_WRK *ew, /* s2 18 */ u_char *act_no) {
	/* s1 17 */ u_char n;
	/* 0x0(sp) */ u_char prefer_act[4];
}

/* 0018f630 000001c8 */ void EneAniResolutionCtrl(/* s0 16 */ ENE_WRK *ew) {
	/* a0 4 */ u_char no;
	/* sdata 356f88 */ static u_char reso[4][2];
}

/* 0018f7f8 00000044 */ void EneAtkCtrl(/* a0 4 */ ENE_WRK *ew) {}

/* 0018f840 0000010c */ u_char EneDmgChk(/* s0 16 */ ENE_WRK *ew) {
	/* s1 17 */ u_char result;
}

/* 0018f950 0000007c */ void ClrEneStaDmg(/* a2 6 */ ENE_WRK *ew) {}

/* 0018f9d0 00000088 */ u_char PlyrOutAreaChk(/* a0 4 */ ENE_WRK *ew) {
	/* a3 7 */ u_char result;
}

/* 0018fa58 000000e8 */ u_char EneTrtryChk(/* a2 6 */ ENE_WRK *ew, /* a1 5 */ u_char room_no) {
	/* t1 9 */ u_char result;
	/* a0 4 */ u_char i;
}

/* 0018fb40 00000354 */ void EneLightCtrl(/* s3 19 */ ENE_WRK *ew) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR tv2;
	/* s0 16 */ POINT_WRK *p;
	/* s4 20 */ SPOT_WRK *s;
	/* a0 4 */ u_char id;
	/* s1 17 */ u_char i;
}

/* 0018fe98 00000180 */ void EneInDispChk(/* s2 18 */ ENE_WRK *ew) {
	/* 0x0(sp) */ PP_JUDGE ppj;
	/* 0xb0(sp) */ sceVu0FVECTOR tv;
	/* 0xc0(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float rot;
	/* 0xd0(sp) */ float tx;
	/* 0xd4(sp) */ float ty;
}

/* 00190018 000000c4 */ void EneBlinkPosSet(/* s2 18 */ ENE_WRK *ew) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR tr;
}

/* 001900e0 00000264 */ void FlyRule(/* s1 17 */ FLY_WRK *fw) {
	/* s0 16 */ MOVE_BOX *mb;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR av;
}

/* 00190348 00000174 */ int FlyPlyrHitChk(/* a0 4 */ FLY_WRK *fw, /* a1 5 */ float *tv) {
	/* 0x0(sp) */ sceVu0FVECTOR pf;
	/* 0x10(sp) */ sceVu0FVECTOR pp;
	/* a3 7 */ int result;
}

/* 001904c0 00000138 */ void FlyAtkHit(/* s1 17 */ FLY_WRK *fw) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
}

/* 001905f8 00000174 */ void EneMinDmgCtrl(/* a1 5 */ ENE_WRK *ew) {
	/* s0 16 */ u_char no;
	/* sbss 357a40 */ static u_char wait_time[3];
}

/* 00190770 000002f4 */ void EneNormalEffectCtrl(/* s0 16 */ ENE_WRK *ew) {
	/* 0x30(sp) */ sceVu0FVECTOR rv;
	/* s1 17 */ u_char no;
	/* sdata 356f90 */ static u_char ne_job[3];
	/* sbss 357a48 */ static u_short time[3];
	/* bss 401f60 */ static float spd[3];
	/* bss 401f70 */ static float rate[3];
	/* bss 401f80 */ static float trate[3];
	/* bss 401f90 */ static sceVu0FVECTOR padj[3];
	/* bss 401fc0 */ static void *dp[3];
}

/* 00190a68 00000058 */ char EndAutoEne(/* a0 4 */ u_char type) {
	/* a2 6 */ char result;
}

/* 00190ac0 00000008 */ void ReqEneSpeakAdpcmCnt(/* a0 4 */ u_short time) {}
/* 00190ac8 00000048 */ void EneSpeakAdpcmCtrl(/* a1 5 */ ENE_WRK *ew) {}
/* 00190b10 00000144 */ void GhostDeadInit(/* s2 18 */ int wrk_no) {}

/* 00190c58 000000cc */ void GhostDeadMain() {
	/* sbss 357a50 */ static int gd_load_id;
}

/* 00190d28 0000000c */ int GhostDeadLoadEndJudge() {}

/* 00190d38 00000050 */ int EnemyUseJudge(/* a0 4 */ u_char ene_type) {
	/* a2 6 */ int i;
	/* t1 9 */ int ene_num;
	/* a3 7 */ int cnt;
}

/* 00190d88 000000f0 */ int ZeroGhostBattleJudge() {
	/* a2 6 */ int result;
	/* 0x0(sp) */ u_char no[3];
}

/* 00190e78 00000030 */ void EneAdpcmPlayChk(/* a0 4 */ ENE_WRK *ew) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/enemy/move_ctl.c
// *****************************************************************************

/* 00190ea8 00000034 */ void InitMoveBox(/* s0 16 */ MOVE_BOX *mb) {}
/* 00190ee0 000000a8 */ void MoveCtrl(/* s0 16 */ MOVE_BOX *mb) {}
/* 00190f88 000000cc */ void EneBlinkCtrl(/* s0 16 */ ENE_WRK *ew) {}
/* 00191058 00000088 */ void EJob000(/* a0 4 */ MOVE_BOX *mb) {}

/* 001910e0 000000c4 */ void EJob001(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 001911a8 00000080 */ void EJob002(/* a0 4 */ MOVE_BOX *mb) {
	/* v1 3 */ u_char time;
}

/* 00191228 000001bc */ void EJob003(/* s0 16 */ MOVE_BOX *mb) {
	/* s2 18 */ int chk;
}

/* 001913e8 00000638 */ void EJob004(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ float dist[3];
	/* fp 30 */ int *erd;
	/* s2 18 */ char i;
	/* s1 17 */ char j;
	/* s4 20 */ char n;
	/* s5 21 */ char max;
	/* 0x20(sp) */ char candidate[3];
	/* 0x30(sp) */ u_char mt;
}

/* 00191a20 00000064 */ int* GetEneRootData(/* a0 4 */ u_char no) {
	/* v1 3 */ int *rd;
}

/* 00191a88 00000018 */ u_char GetEneRootMax(/* a0 4 */ u_char no) {}

/* 00191aa0 000000d4 */ void EJob005(/* a1 5 */ MOVE_BOX *mb) {
	/* f0 38 */ float spd;
}

/* 00191b78 00000034 */ void EJob006(/* a0 4 */ MOVE_BOX *mb) {}
/* 00191bb0 00000124 */ void EJob007(/* a0 4 */ MOVE_BOX *mb) {}

/* 00191cd8 000000b8 */ void EJob008(/* a3 7 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ short int rot[3];
	/* t0 8 */ u_char i;
}

/* 00191d90 000000d0 */ void EJob009(/* s0 16 */ MOVE_BOX *mb) {}

/* 00191e60 0000014c */ void EJob00A(/* s2 18 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR tr;
	/* s1 17 */ u_char x;
	/* s0 16 */ u_char z;
}

/* 00191fb0 00000084 */ void EJob00B(/* t0 8 */ MOVE_BOX *mb) {
	/* v0 2 */ u_short time;
	/* a1 5 */ u_short adj;
}

/* 00192038 00000110 */ void EJob00C(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* s1 17 */ u_char id;
}

/* 00192148 000002ac */ void EJob00D(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR tr;
	/* s0 16 */ u_char type;
	/* a2 6 */ u_char dmin;
	/* s3 19 */ u_char wmin;
	/* sbss 357a58 */ static u_char tr_rate_save[4];
}

/* 001923f8 00000214 */ void EJob00E(/* s1 17 */ MOVE_BOX *mb) {
	/* f20 58 */ float hit_rng;
	/* 0x0(sp) */ float rot;
	/* s4 20 */ u_short adj;
	/* a2 6 */ u_char id;
}

/* 00192610 000007e0 */ void EJob00F(/* s3 19 */ MOVE_BOX *mb) {
	/* s5 21 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
	/* 0x30(sp) */ u_short adj;
	/* s0 16 */ u_char id;
	/* s1 17 */ u_char per;
	/* s6 22 */ u_char flag;
	/* s4 20 */ u_char ani;
	/* 0x20(sp) */ u_char pani_tbl[3];
}

/* 00192df0 00000070 */ void EJob010(/* a3 7 */ MOVE_BOX *mb) {
	/* a1 5 */ u_char no;
}

/* 00192e60 00000030 */ void EJob011(/* a0 4 */ MOVE_BOX *mb) {}

/* 00192e90 00000148 */ void EJob012(/* s0 16 */ MOVE_BOX *mb) {
	/* a1 5 */ u_char type;
	/* v1 3 */ u_char no;
}

/* 00192fd8 00000050 */ void EJob013(/* t0 8 */ MOVE_BOX *mb) {}

/* 00193028 000000ac */ void EJob014(/* t0 8 */ MOVE_BOX *mb) {
	/* a2 6 */ u_short time;
	/* a1 5 */ u_short adj;
}

/* 001930d8 0000039c */ void EJob015(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR rot;
	/* sbss 357a60 */ static u_char turn[3];
	/* sbss 357a68 */ static u_char time[3];
}

/* 00193478 00000084 */ void EJob016(/* s1 17 */ MOVE_BOX *mb) {}
/* 00193500 0000002c */ void EJob017(/* a0 4 */ MOVE_BOX *mb) {}
/* 00193530 0000004c */ void EJob018(/* a2 6 */ MOVE_BOX *mb) {}
/* 00193580 000000d8 */ void EJob019(/* s0 16 */ MOVE_BOX *mb) {}
/* 00193658 00000060 */ void EJob01A(/* t1 9 */ MOVE_BOX *mb) {}

/* 001936b8 00000294 */ void EJob01B(/* s6 22 */ MOVE_BOX *mb) {
	/* fp 30 */ ENE_WRK *ew;
	/* 0x30(sp) */ sceVu0FVECTOR tv;
	/* 0x40(sp) */ sceVu0FVECTOR rv;
	/* bss 401fd0 */ static float spd[3];
	/* bss 401fe0 */ static float rate[3];
	/* bss 401ff0 */ static float trate[3];
	/* bss 402000 */ static sceVu0FVECTOR p[3];
}

/* 00193950 0000004c */ void EJob01C(/* s0 16 */ MOVE_BOX *mb) {}
/* 001939a0 00000048 */ void EJob01D(/* t0 8 */ MOVE_BOX *mb) {}
/* 001939e8 0000006c */ void EJob01E(/* s0 16 */ MOVE_BOX *mb) {}

/* 00193a58 00000084 */ void EJob01F(/* t0 8 */ MOVE_BOX *mb) {
	/* v0 2 */ u_short time;
	/* a1 5 */ u_short adj;
}

/* 00193ae0 0000007c */ void EJob020(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ u_char door_id_tbl[5];
}

/* 00193b60 000000b8 */ void EJob021(/* s0 16 */ MOVE_BOX *mb) {
	/* a3 7 */ u_short se;
}

/* 00193c18 000001c0 */ void EJob022(/* t5 13 */ MOVE_BOX *mb) {
	/* t6 14 */ u_char no;
	/* bss 402030 */ static sceVu0FVECTOR ep[3];
	/* bss 402060 */ static float fade[3];
	/* bss 402070 */ static float rate[3];
}

/* 00193dd8 000000f4 */ void EJob023(/* t3 11 */ MOVE_BOX *mb) {
	/* bss 402080 */ static sceVu0FVECTOR ep[3];
}

/* 00193ed0 00000018 */ void EJob024(/* a0 4 */ MOVE_BOX *mb) {}
/* 00193ee8 00000094 */ void EJob025(/* s0 16 */ MOVE_BOX *mb) {}

/* 00193f80 00000094 */ void EJob026(/* s0 16 */ MOVE_BOX *mb) {
	/* a1 5 */ int rot;
}

/* 00194018 00000078 */ void EJob027(/* a2 6 */ MOVE_BOX *mb) {}

/* 00194090 00000230 */ void EJob028(/* s5 21 */ MOVE_BOX *mb) {
	/* s0 16 */ MOVE_BOX *fmb;
	/* s7 23 */ u_char no;
	/* s6 22 */ u_char i;
	/* fp 30 */ u_char id;
}

/* 001942c0 0000005c */ void EJob029(/* t0 8 */ MOVE_BOX *mb) {}
/* 00194320 00000034 */ void EJob02A(/* s0 16 */ MOVE_BOX *mb) {}
/* 00194358 00000048 */ void FlyDataEnd(/* a0 4 */ u_char no) {}
/* 001943a0 000000b8 */ void EJob02B(/* s0 16 */ MOVE_BOX *mb) {}

/* 00194458 00000074 */ void EJob02C(/* s0 16 */ MOVE_BOX *mb) {
	/* s1 17 */ u_short min;
	/* v0 2 */ u_char rng;
}

/* 001944d0 00000124 */ void EJob02D(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
}

/* 001945f8 00000088 */ void EJob02E(/* t2 10 */ MOVE_BOX *mb) {
	/* a0 4 */ ENE_WRK *ew;
}

/* 00194680 00000078 */ void EJob02F(/* a2 6 */ MOVE_BOX *mb) {}

/* 001946f8 000001dc */ void EJob030(/* s2 18 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
	/* s0 16 */ short int rot;
	/* s1 17 */ u_char min;
	/* s3 19 */ u_char max;
}

/* 001948d8 00000088 */ void EJob031(/* t2 10 */ MOVE_BOX *mb) {}
/* 00194960 000000a0 */ void EJob032(/* s0 16 */ MOVE_BOX *mb) {}
/* 00194a00 00000078 */ void EJob033(/* a2 6 */ MOVE_BOX *mb) {}
/* 00194a78 00000078 */ void EJob034(/* a2 6 */ MOVE_BOX *mb) {}
/* 00194af0 00000074 */ void EJob035(/* a2 6 */ MOVE_BOX *mb) {}

/* 00194b68 000000b0 */ void EJob036(/* s0 16 */ MOVE_BOX *mb) {
	/* v1 3 */ int rot;
}

/* 00194c18 00000148 */ void EJob037(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* s1 17 */ u_short time;
	/* v0 2 */ short int spd;
}

/* 00194d60 00000290 */ void EJob038(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float rot;
	/* s4 20 */ u_char side;
}

/* 00194ff0 00000128 */ void EJob039(/* s0 16 */ MOVE_BOX *mb) {
	/* t0 8 */ u_short time;
	/* s1 17 */ u_short max;
	/* s4 20 */ u_short mrng;
}

/* 00195118 0000005c */ void EJob03A(/* t0 8 */ MOVE_BOX *mb) {}
/* 00195178 000000c0 */ void EJob03B(/* s1 17 */ MOVE_BOX *mb) {}
/* 00195238 0000005c */ void EJob03C(/* t0 8 */ MOVE_BOX *mb) {}
/* 00195298 0000004c */ void EJob03D(/* a2 6 */ MOVE_BOX *mb) {}
/* 001952e8 0000005c */ void EJob03E(/* t0 8 */ MOVE_BOX *mb) {}
/* 00195348 00000028 */ void EJob03F(/* a0 4 */ MOVE_BOX *mb) {}

/* 00195370 0000016c */ void EJob040(/* t5 13 */ MOVE_BOX *mb) {
	/* t4 12 */ u_char no;
	/* sbss 357a70 */ static u_short time[4];
	/* sbss 357a78 */ static u_char max[4];
	/* bss 4020b0 */ static float up[4][2];
}

/* 001954e0 00000170 */ void EJob041(/* a2 6 */ MOVE_BOX *mb) {
	/* a3 7 */ u_char no;
	/* sbss 357a80 */ static u_short time[4];
	/* bss 4020d0 */ static float down[4][2];
}

/* 00195650 000000c8 */ void EJob042(/* t1 9 */ MOVE_BOX *mb) {
	/* a2 6 */ u_short no;
	/* a1 5 */ u_short adj;
	/* t2 10 */ u_char brnch;
}

/* 00195718 00000078 */ void EJob043(/* a2 6 */ MOVE_BOX *mb) {}
/* 00195790 00000048 */ void EJob044(/* t0 8 */ MOVE_BOX *mb) {}
/* 001957d8 00000038 */ void EJob045(/* a0 4 */ MOVE_BOX *mb) {}

/* 00195810 000000d0 */ void EJob046(/* s0 16 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 001958e0 00000128 */ void EJob047(/* s1 17 */ MOVE_BOX *mb) {
	/* s2 18 */ u_short adj;
	/* s0 16 */ u_short rng;
}

/* 00195a08 00000138 */ void EJob048(/* t1 9 */ MOVE_BOX *mb) {
	/* t2 10 */ u_char no;
	/* bss 4020f0 */ static float fade[3];
	/* bss 402100 */ static float rate[3];
}

/* 00195b40 00000180 */ void EJob049(/* s2 18 */ MOVE_BOX *mb) {
	/* f20 58 */ float spd;
}

/* 00195cc0 000000a0 */ void EJob04A(/* a2 6 */ MOVE_BOX *mb) {
	/* t0 8 */ u_char time;
}

/* 00195d60 000000c0 */ void EJob04B(/* t3 11 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ u_short adj[3];
}

/* 00195e20 000000c0 */ void EJob04C(/* t1 9 */ MOVE_BOX *mb) {
	/* a3 7 */ u_short time;
	/* a1 5 */ u_short adj;
	/* v1 3 */ u_char id;
}

/* 00195ee0 00000068 */ void EJob04D(/* a2 6 */ MOVE_BOX *mb) {}
/* 00195f48 0000008c */ void EJob04E(/* s0 16 */ MOVE_BOX *mb) {}
/* 00195fd8 00000078 */ void EJob04F(/* a2 6 */ MOVE_BOX *mb) {}
/* 00196050 000000d4 */ void EJob050(/* a0 4 */ MOVE_BOX *mb) {}
/* 00196128 00000038 */ void EJob051(/* a0 4 */ MOVE_BOX *mb) {}
/* 00196160 00000050 */ void EJob052(/* s0 16 */ MOVE_BOX *mb) {}

/* 001961b0 000000f0 */ void EJob053(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR vb;
	/* 0x10(sp) */ sceVu0FVECTOR vt;
}

/* 001962a0 0000003c */ void EJob054(/* s0 16 */ MOVE_BOX *mb) {}
/* 001962e0 00000068 */ void EJob055(/* t1 9 */ MOVE_BOX *mb) {}

/* 00196348 000000dc */ void EJob056(/* s0 16 */ MOVE_BOX *mb) {
	/* t4 12 */ int *erd;
	/* a3 7 */ u_short x;
	/* a0 4 */ u_short z;
	/* t2 10 */ u_char i;
	/* s1 17 */ u_char n;
}

/* 00196428 000000b4 */ void EJob057(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 001964e0 00000050 */ void EJob058(/* a3 7 */ MOVE_BOX *mb) {}
/* 00196530 00000048 */ void EJob059(/* t0 8 */ MOVE_BOX *mb) {}
/* 00196578 00000078 */ void EJob05A(/* a2 6 */ MOVE_BOX *mb) {}

/* 001965f0 00000164 */ void EJob05B(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* s0 16 */ u_char i;
}

/* 00196758 00000064 */ void EJob05C(/* t1 9 */ MOVE_BOX *mb) {}
/* 001967c0 0000004c */ void EJob05D(/* s0 16 */ MOVE_BOX *mb) {}
/* 00196810 00000038 */ void EJob05E(/* a0 4 */ MOVE_BOX *mb) {}

/* 00196848 000000d4 */ void EJob05F(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 00196920 00000044 */ void EJob060(/* s0 16 */ MOVE_BOX *mb) {}
/* 00196968 000000d4 */ void EJob061(/* s0 16 */ MOVE_BOX *mb) {}

/* 00196a40 000003f8 */ void EJob062(/* s3 19 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* v1 3 */ u_char req;
	/* s2 18 */ u_char i;
}

/* 00196e38 00000090 */ void EJob063(/* s0 16 */ MOVE_BOX *mb) {}

/* 00196ec8 000001b8 */ void EJob064(/* s2 18 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* a2 6 */ short int x;
	/* a1 5 */ short int y;
	/* a3 7 */ short int z;
}

/* 00197080 0000008c */ void EJob065(/* a0 4 */ MOVE_BOX *mb) {
	/* a3 7 */ u_char i;
}

/* 00197110 0000005c */ void EJob066(/* t0 8 */ MOVE_BOX *mb) {}

/* 00197170 00000130 */ void EJob067(/* s0 16 */ MOVE_BOX *mb) {
	/* s2 18 */ u_char id;
	/* s1 17 */ u_short rot;
	/* 0x0(sp) */ float adj;
}

/* 001972a0 00000060 */ void EJob068(/* t1 9 */ MOVE_BOX *mb) {}

/* 00197300 000000a8 */ void EJob069(/* a3 7 */ MOVE_BOX *mb) {
	/* a1 5 */ u_short adj;
	/* t0 8 */ u_char i;
}

/* 001973a8 00000048 */ void EJob06A(/* t0 8 */ MOVE_BOX *mb) {}

/* 001973f0 00000248 */ void EJob06B(/* s1 17 */ MOVE_BOX *mb) {
	/* 0x0(sp) */ sceVu0FVECTOR pv;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* 0x20(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float rot;
	/* f1 39 */ float dist;
	/* s2 18 */ short int spd;
	/* s4 20 */ u_char side;
}

/* 00197638 00000068 */ void EJob06C(/* s1 17 */ MOVE_BOX *mb) {}

/* 001976a0 00000078 */ void EJob06D(/* a3 7 */ MOVE_BOX *mb) {
	/* a1 5 */ u_short adj;
	/* t0 8 */ u_char charge;
}

/* 00197718 00000074 */ void EJob06E(/* t1 9 */ MOVE_BOX *mb) {}
/* 00197790 0000005c */ void EJob06F(/* t0 8 */ MOVE_BOX *mb) {}
/* 001977f0 00000040 */ void EJob070(/* a2 6 */ MOVE_BOX *mb) {}
/* 00197830 0000004c */ void EJob071(/* s0 16 */ MOVE_BOX *mb) {}

/* 00197880 000000d8 */ void EJob072(/* s0 16 */ MOVE_BOX *mb) {
	/* f2 40 */ float dist;
}

/* 00197958 0000006c */ void EJob073(/* a1 5 */ MOVE_BOX *mb) {}
/* 001979c8 00000008 */ void BJobDammy(/* a0 4 */ ENE_WRK *ew) {}

/* 001979d0 00000080 */ void BJob000(/* a0 4 */ ENE_WRK *ew) {
	/* v1 3 */ u_char time;
}

/* 00197a50 00000034 */ void BJob001(/* a0 4 */ ENE_WRK *ew) {}

/* 00197a88 0000011c */ void BJob009(/* t1 9 */ ENE_WRK *ew) {
	/* t2 10 */ LIGHT_PACK *l;
	/* f1 39 */ float diff;
	/* f4 42 */ float r;
	/* f3 41 */ float g;
	/* f2 40 */ float b;
}

/* 00197ba8 000002a8 */ void BJob00A(/* s0 16 */ ENE_WRK *ew) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* v0 2 */ POINT_WRK *p;
	/* f21 59 */ float power;
	/* f20 58 */ float diff;
	/* 0x10(sp) */ short int tv2[3];
	/* v1 3 */ u_char id;
	/* a3 7 */ u_char i;
}

/* 00197e50 0000034c */ void BJob00B(/* s5 21 */ ENE_WRK *ew) {
	/* 0x0(sp) */ sceVu0FVECTOR p;
	/* 0x10(sp) */ sceVu0FVECTOR i;
	/* v0 2 */ SPOT_WRK *s;
	/* f22 60 */ float power;
	/* f20 58 */ float diff;
	/* f21 59 */ float intens;
	/* 0x20(sp) */ short int p2[3];
	/* 0x30(sp) */ short int i2[3];
	/* v1 3 */ u_char id;
}

/* 001981a0 000000c0 */ void BJob00C(/* s0 16 */ ENE_WRK *ew) {}

/* 00198260 0000005c */ void BJob010(/* t0 8 */ ENE_WRK *ew) {
	/* a1 5 */ u_short adj;
}

/* 001982c0 00000070 */ void BJob011(/* a3 7 */ ENE_WRK *ew) {}

/* 00198330 00000318 */ void BJob012(/* a2 6 */ ENE_WRK *ew) {
	/* t0 8 */ u_char n;
	/* bss 402110 */ static float rate[4];
	/* bss 402120 */ static float r_adj[4];
}

/* 00198648 00000020 */ void BJob013(/* a0 4 */ ENE_WRK *ew) {}
/* 00198668 000000c0 */ void BJob014(/* s0 16 */ ENE_WRK *ew) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/entry.c
// *****************************************************************************

/* 00198728 00000084 */ void EntryInit() {
	/* v0 2 */ int i;
}

/* 001987b0 00000050 */ void ClearAppearWrkInfo() {
	/* a0 4 */ int i;
}

/* 00198800 00000104 */ void EntryMain() {}
/* 00198908 00000008 */ void AreaEntrySet() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/plyr/time_ctl.c
// *****************************************************************************

/* 00198910 00000040 */ void TimeCtrlInit() {}
/* 00198950 0000006c */ void GameTimeCtrl() {}
/* 001989c0 00000048 */ void SetNowClock(/* s0 16 */ sceCdCLOCK *nc) {}
/* 00198a08 000001dc */ void PlyrTimerCtrl() {}
/* 00198be8 000000c8 */ void EntryTimeCtrl() {}
/* 00198cb0 0000000c */ void SetRealTime() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_bgost.c
// *****************************************************************************

/* 00198cc0 00000038 */ void Mission03BindGhost01Delete() {}
/* 00198cf8 00000038 */ void Mission04BindGhostLoad01Req() {}
/* 00198d30 00000008 */ void Mission04BindGhostLoad02Req() {}
/* 00198d38 00000070 */ int BindGhostBattleEnd(/* a0 4 */ int wrk_no) {}
/* 00198da8 0000022c */ int BindGhostLoad() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_dgost.c
// *****************************************************************************

/* 00198fd8 000001d8 */ void DeadGhostAppearReq() {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* 0x10(sp) */ sceVu0FVECTOR tv0;
	/* 0x20(sp) */ sceVu0FVECTOR tv1;
	/* 0x30(sp) */ sceVu0FVECTOR tv2;
	/* 0x40(sp) */ sceVu0FVECTOR rv;
}

/* 001991b0 00000008 */ void DeadGhostAppearMain() {}

/* 001991b8 000000d8 */ int DeadGhostAppearJudge() {
	/* a0 4 */ int i;
}

/* 00199290 0000000c */ void DeadGhostLoadReq() {}
/* 001992a0 00000124 */ int DeadGhostLoad() {}
/* 001993c8 00000028 */ void DeadGhostBattleEnd() {}
/* 001993f0 00000068 */ int EnemyNoDeadGhostJudge(/* a0 4 */ int ene_no) {}

/* 00199458 00000048 */ void DeadGhostSetLoad() {
	/* s1 17 */ int i;
}

/* 001994a0 00000048 */ void DeadGhostLoadDel() {
	/* s1 17 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_fgost.c
// *****************************************************************************

/* 001994e8 0000004c */ void FloatGhostAppearInit() {
	/* v1 3 */ int i;
}

/* 00199538 00000008 */ int FloatGhostEntrySet(/* a0 4 */ u_char area) {}

/* 00199540 0000022c */ int FloatGhostAppearMain() {
	/* 0x0(sp) */ u_char type;
}

/* 00199770 00000054 */ int FloatGhostAppearJudge() {}

/* 001997c8 0000014c */ int FloatGhostAppearTypeSet(/* t2 10 */ u_char fg_no, /* t4 12 */ u_char wrk_no, /* s0 16 */ u_char room) {
	/* a3 7 */ int i;
	/* t3 11 */ int ret;
}

/* 00199918 00000170 */ int GetFloatGhostAppearPosType(/* t1 9 */ u_char *type) {
	/* a2 6 */ int i;
	/* t0 8 */ int j;
}

/* 00199a88 00000278 */ void FloatGhostAppearPosSet(/* s6 22 */ u_char dat_no, /* s4 20 */ float *set_pos, /* s5 21 */ float *set_rot) {
	/* s1 17 */ int i;
	/* f20 58 */ float dist;
	/* f21 59 */ float dist_bak;
	/* 0x0(sp) */ sceVu0FVECTOR pos;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* 0x20(sp) */ sceVu0FVECTOR rv;
}

/* 00199d00 00000018 */ int FloatGhostBattleEnd() {}
/* 00199d18 0000001c */ int FloatGhostEscapeEnd() {}
/* 00199d38 00000028 */ void FloatGhostLoadReq() {}
/* 00199d60 0000011c */ int FloatGhostLoadMain() {}
/* 00199e80 000000c0 */ int FloatGhostLoadSet() {}
/* 00199f40 00000008 */ int FloatGhostSetJudge() {}
/* 00199f48 00000044 */ void GetLoadFloatGhost(/* a0 4 */ u_char set_num, /* a1 5 */ u_char *set_fgst) {}
/* 00199f90 00000058 */ void GetFloatGhostModelLoad() {}
/* 00199fe8 00000034 */ void GetFloatGhostModelLoadAfter() {}
/* 0019a020 00000088 */ void GetFloatGhostMotionLoad() {}
/* 0019a0a8 00000038 */ void GetFloatGhostMotionLoadAfter() {}
/* 0019a0e0 00000034 */ void GetFloatGhostSELoad() {}

/* 0019a118 00000034 */ void FloatGhostAppearStop() {
	/* v1 3 */ int i;
}

/* 0019a150 0000003c */ void FloatGhostAppearStart() {
	/* v1 3 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_ggost.c
// *****************************************************************************

/* 0019a190 00000098 */ int GuardGhostAppearSet() {
	/* a1 5 */ int i;
	/* v0 2 */ int dat_no;
}

/* 0019a228 00000008 */ void GuardGhostLoadInit() {}
/* 0019a230 00000088 */ int GuardGhostAppearMain() {}

/* 0019a2b8 00000068 */ int GuardGhostReloadReq() {
	/* v1 3 */ int dat_no;
}

/* 0019a320 000000a8 */ void GuardGhostLoadReq() {
	/* v1 3 */ int dat_no;
}

/* 0019a3c8 000002bc */ int GuardGhostLoad() {
	/* s3 19 */ int dat_no;
	/* s1 17 */ int gg_no;
}

/* 0019a688 00000074 */ int GuardGhostAppear() {
	/* a0 4 */ int i;
}

/* 0019a700 0000013c */ void GuardGhostBattleSet(/* s2 18 */ int room_no) {
	/* v0 2 */ int dat_no;
	/* 0x0(sp) */ sceVu0FVECTOR pos;
}

/* 0019a840 00000040 */ void GuardGhostBattleEnd() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_pgost.c
// *****************************************************************************

/* 0019a880 00000030 */ void PuzzleGhostInit() {}

/* 0019a8b0 00000060 */ void PuzzleGhostLoadReq(/* a0 4 */ u_char pg_no) {
	/* a1 5 */ int i;
}

/* 0019a910 00000074 */ void PuzzleGhostReq(/* a3 7 */ u_char pg_no) {
	/* a1 5 */ int i;
}

/* 0019a988 00000038 */ int PuzzleGhostContinue(/* a0 4 */ u_char ev_no) {}

/* 0019a9c0 0000010c */ void PuzzleGhostPhotoReq() {
	/* a2 6 */ int i;
}

/* 0019aad0 0000002c */ void PuzzleGhostMain() {}
/* 0019ab00 00000170 */ void PuzzleGhostDispSet() {}

/* 0019ac70 000001e0 */ void PuzzleGhostDispMain() {
	/* 0x0(sp) */ sceVu0FVECTOR room_pos;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_rgost.c
// *****************************************************************************

/* 0019ae50 0000006c */ void RareGhostInit() {
	/* v0 2 */ int i;
}

/* 0019aec0 0000018c */ void RareGhostEntrySet() {
	/* a3 7 */ int i;
	/* a2 6 */ int j;
}

/* 0019b050 000000d4 */ int RareGhostLoadReq() {
	/* s2 18 */ int i;
	/* a0 4 */ int ret;
}

/* 0019b128 000000b8 */ int RareGhostLoadGameLoadReq() {
	/* s2 18 */ int i;
	/* v1 3 */ int ret;
}

/* 0019b1e0 00000008 */ void RareGhostMain() {}

/* 0019b1e8 000001e4 */ void RareGhostAppearCtrl() {
	/* s4 20 */ int i;
}

/* 0019b3d0 00000230 */ void RareGhostDispCtrl() {
	/* s1 17 */ int i;
	/* a0 4 */ int j;
	/* s2 18 */ int dsp_cnt;
}

/* 0019b600 00000194 */ int RareGhostDispStartJudge(/* s1 17 */ int rg_no) {
	/* a0 4 */ int dist;
	/* 0x0(sp) */ sceVu0FVECTOR room_pos;
	/* 0x10(sp) */ sceVu0FVECTOR rg_pos;
}

/* 0019b798 00000110 */ int RareGhostDispEndJudge(/* a0 4 */ int wrk_no) {
	/* s0 16 */ int rg_no;
	/* a3 7 */ int dist;
}

/* 0019b8a8 00000110 */ void RareGhostDispTimeCtrl(/* a0 4 */ int wrk_no, /* a1 5 */ int rg_no) {}
/* 0019b9b8 00000074 */ void RareGhostDispEndSet(/* a0 4 */ int wrk_no) {}

/* 0019ba30 00000114 */ void RareGhostDispWrkSet(/* s2 18 */ int wrk_no, /* s1 17 */ int rg_no) {
	/* 0x0(sp) */ sceVu0FVECTOR room_pos;
}

/* 0019bb48 000001dc */ void SetRareGhostDispAlpha(/* a0 4 */ int wrk_no, /* a0 4 */ int rg_no) {
	/* t1 9 */ int count;
	/* v1 3 */ int cnt_min;
	/* v1 3 */ u_char alp_no;
	/* v0 2 */ u_char stts;
	/* a3 7 */ u_char alpha;
	/* t0 8 */ u_char mode;
	/* a2 6 */ RG_ALP_DAT *rg_alp;
}

/* 0019bd28 00000018 */ void SetRareGhostDispAnimation(/* a0 4 */ int wrk_no, /* a1 5 */ int rg_no) {}
/* 0019bd40 0000000c */ float SetRareGhostDispRate(/* a0 4 */ int wrk_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_sgost.c
// *****************************************************************************

/* 0019bd50 00000010 */ void SettleGhostInit() {}
/* 0019bd60 00000030 */ int SettleGhostAppearReq(/* a0 4 */ int sg_no) {}

/* 0019bd90 000001b0 */ void SettleGhostMain() {
	/* s0 16 */ int end;
	/* sbss 357a88 */ static int sg_load_id;
}

/* 0019bf40 0000024c */ int SettleGhostLoadOneSize() {}

/* 0019c190 0000015c */ int SettleGhostLoadTwoSize() {
	/* sbss 357a8c */ static int sg_load_id;
}

/* 0019c2f0 000000d0 */ void SettleGhostBattleSet() {
	/* 0x0(sp) */ sceVu0FVECTOR pos;
}

/* 0019c3c0 00000720 */ int SettleGhostStartDisp() {}
/* 0019cae0 0000002c */ int SettleGhostBattleEnd() {}
/* 0019cb10 00000108 */ void SettleGhostDispEffect() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_zgost.c
// *****************************************************************************

/* 0019cc18 00000390 */ int ZeroHourAppearMain() {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ u_char no_tbl[5];
}

/* 0019cfa8 000001e8 */ void ZeroHourDataBackUp() {
	/* s2 18 */ int i;
}

/* 0019d190 000000c0 */ void ZeroHourEnemyReLoad() {}
/* 0019d250 00000094 */ void ZeroHourEnemyReLoadAfter() {}
/* 0019d2e8 00000070 */ void ZeroHourAfterPosReset() {}
/* 0019d358 00000054 */ void ZeroHourOutReq() {}

/* 0019d3b0 0000014c */ void ZeroHourAfterRoomLoadReq() {
	/* s0 16 */ int i;
	/* s2 18 */ int load_room;
}

/* 0019d500 00000008 */ int ZeroHourAppearJudge() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_main.c
// *****************************************************************************

/* 0019d508 00000044 */ void EventWrkInit() {}

/* 0019d550 000000ac */ void EventInit() {
	/* v1 3 */ int i;
}

/* 0019d600 00000ebc */ void EventMain() {
	/* a1 5 */ int i;
	/* s2 18 */ int loop;
	/* a0 4 */ int *addr;
	/* s0 16 */ u_char *dat_adr;
	/* s3 19 */ short int scene_no;
}

/* 0019e4c0 0000007c */ void EventOpenMain() {}

/* 0019e540 000000c4 */ u_char EventOpenCtrl() {
	/* s2 18 */ int i;
}

/* 0019e608 00000384 */ u_char EventOpenJudge(/* s0 16 */ short int event_no) {
	/* a2 6 */ int i;
	/* s1 17 */ int *addr;
	/* 0x0(sp) */ sceVu0FVECTOR ev_pos;
}

/* 0019e990 00000050 */ int GetEventMessageAddr(/* a0 4 */ short int msg_no) {}

/* 0019e9e0 000000e0 */ void EventEnemySet(/* s1 17 */ u_char *addr) {
	/* s2 18 */ int i;
}

/* 0019eac0 000000c0 */ int BattleEndEventOpenJudge(/* a0 4 */ u_char ene_no) {}

/* 0019eb80 00000138 */ int PhotoEventOpenJudge(/* a0 4 */ u_char pht_2d, /* a1 5 */ u_char pht_furn) {
	/* s0 16 */ int i;
}

/* 0019ecb8 00000050 */ float SetRot360(/* a0 4 */ short int rot360) {
	/* 0x0(sp) */ float rot;
}

/* 0019ed08 000002b8 */ int EventSceneCtrl(/* s0 16 */ short int scene_no) {
	/* s3 19 */ int ret;
}

/* 0019efc0 0000015c */ int SceneFadeOut() {
	/* sdata 356ff8 */ static int fade_cnt;
	/* sdata 356ffc */ static int fade_cnt2;
	/* s1 17 */ int ret;
	/* s0 16 */ int frame;
	/* f20 58 */ float alpha;
}

/* 0019f120 00000074 */ void InterMissionInit() {}
/* 0019f198 00000060 */ void InterMissionEnd() {}
/* 0019f1f8 00000038 */ void InterMissionMain() {}
/* 0019f230 00000048 */ void DoorLockBattleSet() {}
/* 0019f278 000000a8 */ void DoorLockBattleAfter() {}
/* 0019f320 00000054 */ void LockBattleDoorOpen() {}
/* 0019f378 00000014 */ int LockBattleAfterJudge() {}
/* 0019f390 000001fc */ void LockBattleDoorOpenMSGDisp() {}
/* 0019f590 00000028 */ int ScenePlay(/* a0 4 */ short int scene_no) {}
/* 0019f5b8 000000d8 */ void EndingInit() {}
/* 0019f690 0000012c */ void EndingMain() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_spcl.c
// *****************************************************************************

/* 0019f7c0 00000050 */ void SpecialEventInit(/* a0 4 */ u_char spev_no) {}
/* 0019f810 0000005c */ void SpecialEventMain() {}
/* 0019f870 00000050 */ int GetSpecialEventMessageAddr(/* a0 4 */ short int msg_no) {}

/* 0019f8c0 00000198 */ void SimpleDispSprt(/* s1 17 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ SPRT_SROT *srot, /* s3 19 */ SPRT_SSCL *sscl, /* s4 20 */ u_char alp_rate) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 0019fa58 000000d0 */ void SimpleDispAlphaSprt(/* s1 17 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ u_char alp_rate, /* t0 8 */ u_char alp_type) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 0019fb28 000001a8 */ void SimpleDispSprtRGB(/* s0 16 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ SPRT_SROT *srot, /* s3 19 */ SPRT_SSCL *sscl, /* t1 9 */ u_char alp_rate, /* s4 20 */ u_char rr, /* s5 21 */ u_char gg, /* 0x130(sp) */ int bb) {
	/* s6 22 */ u_char bb;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 0019fcd0 000001b4 */ void SimpleDispSprtLNR(/* s1 17 */ SPRT_SDAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s2 18 */ SPRT_SROT *srot, /* s3 19 */ SPRT_SSCL *sscl, /* s4 20 */ u_char alp_rate, /* s5 21 */ int lnr) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 0019fe88 00000044 */ void SimpleDispSprtDatCopy(/* a0 4 */ SPRT_SDAT *org, /* a1 5 */ SPRT_SDAT *cpy) {}

/* 0019fed0 000000bc */ void TestPk2Data(/* s1 17 */ long int sendtexaddr) {
	/* sdata 357024 */ static int ttest_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
}

/* 0019ff90 00000128 */ int ButtonMarkNext(/* s0 16 */ int x_off, /* s1 17 */ int y_off, /* s2 18 */ int se_flg) {}
/* 001a00b8 0000001c */ int ButtonMarkWait() {}
/* 001a00d8 00000014 */ void ButtonMarkTimeClear() {}

/* 001a00f0 00000040 */ int CsrInclease(/* a0 4 */ u_char *csr_idx, /* a1 5 */ u_char alpha_max, /* a2 6 */ u_char inclease) {
	/* t0 8 */ int ret_num;
}

/* 001a0130 0000003c */ int CsrDeclease(/* a0 4 */ u_char *csr_idx, /* a1 5 */ u_char alpha_min, /* a2 6 */ int inclease) {
	/* t0 8 */ int ret_num;
}

/* 001a0170 0000008c */ int CsrBlink(/* a0 4 */ u_char *csr_idx, /* a1 5 */ u_char alpha_max, /* a2 6 */ u_char alpha_min, /* v1 3 */ u_char inclease, /* t0 8 */ u_char *blink) {
	/* t1 9 */ int ret_num;
}

/* 001a0200 00000008 */ void CsrClear(/* a0 4 */ u_char *csr_idx) {}
/* 001a0208 00000014 */ void CsrClearAll() {}
/* 001a0220 00000020 */ void SpevStrInit() {}
/* 001a0240 0000001c */ void SpevWrkInit() {}
/* 001a0260 00000024 */ void SpevSelectYesNoCsr(/* f12 50 */ float pos_x, /* f13 51 */ float pos_y, /* a0 4 */ int pri, /* f14 52 */ float alp) {}

/* 001a0288 00000068 */ int DeadlySeStopWait() {
	/* sdata 357030 */ static u_char dead_time;
}

/* 001a02f0 00000010 */ void DummyProg() {}
/* 001a0300 0000018c */ void StarPuzzleInit(/* s0 16 */ int pzl_no) {}

/* 001a0490 00000274 */ void StarPuzzleDataSet(/* a0 4 */ int pzl_no) {
	/* t0 8 */ int i;
	/* a1 5 */ int j;
	/* 0x0(sp) */ u_char line_dat[10][2];
	/* 0x20(sp) */ u_char stone_odr[5];
}

/* 001a0708 00000bb4 */ int StarPuzzleMain(/* a1 5 */ int pzl_no) {
	/* a1 5 */ int i;
	/* a2 6 */ int j;
	/* t4 12 */ int tmp0;
	/* 0x0(sp) */ u_char stone_odr[5];
}

/* 001a12c0 00000038 */ int StarPuzzleClearJudge() {
	/* a0 4 */ int i;
}

/* 001a12f8 0000146c */ void StarPuzzleDisp() {
	/* s2 18 */ int i;
	/* s4 20 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ DISP_STR ds;
	/* 0x50(sp) */ DISP_SQAR dsq;
	/* 0xd0(sp) */ SQAR_DAT menu_sq0;
	/* 0xf0(sp) */ u_char stone_odr[5];
}

/* 001a2768 000002d8 */ int StarPuzzleMSGMain(/* a1 5 */ int pzl_no) {
	/* 0x0(sp) */ u_char stone_odr[5];
}

/* 001a2a40 000004d8 */ void StarPuzzleMSGDisp() {
	/* s0 16 */ int i;
	/* s3 19 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ DISP_STR ds;
	/* 0x50(sp) */ DISP_SQAR dsq;
	/* 0xd0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a2f18 000000c4 */ void DialKeyDoorInit(/* a0 4 */ int door_no) {}
/* 001a2fe0 0000005c */ void DialKeyDoorDataSet(/* a0 4 */ int door_no) {}

/* 001a3040 0000085c */ int DialKeyDoorMain() {
	/* a3 7 */ int i;
}

/* 001a38a0 00000824 */ void DialKeyDoorDisp() {
	/* s0 16 */ int i;
	/* s4 20 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SSCL sscl;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
	/* a1 5 */ int msg_index;
}

/* 001a40c8 00000038 */ void DialKeyMSGDoorInit() {}
/* 001a4100 000001c0 */ int DialKeyMSGDoorMain(/* s2 18 */ int msg_no) {}

/* 001a42c0 00000240 */ void DialKeyMSGDoorDisp(/* s3 19 */ int msg_no) {
	/* s0 16 */ int i;
	/* s1 17 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ DISP_STR ds;
	/* 0x50(sp) */ DISP_SQAR dsq;
	/* 0xd0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a4500 000000e4 */ void GhostDoorInit(/* s0 16 */ int door_no) {
	/* a1 5 */ int i;
}

/* 001a45e8 000000a4 */ void GhostDoorSet(/* a2 6 */ int door_no) {
	/* a1 5 */ int i;
}

/* 001a4690 000001c4 */ void GhostDoorMain(/* s0 16 */ int door_no) {
	/* a0 4 */ int i;
}

/* 001a4858 000001d8 */ void GhostDoorDisp(/* s2 18 */ int door_no) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ DISP_STR ds;
	/* 0x50(sp) */ DISP_SQAR dsq;
	/* 0xd0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a4a30 000000a4 */ void DollPzlInit() {}

/* 001a4ad8 00000e60 */ void DollPzlMain() {
	/* s2 18 */ int no;
	/* a0 4 */ int i;
	/* sdata 357048 */ static int blink_dir;
}

/* 001a5938 00000144 */ int CursorManagerEvent003() {
	/* sdata 35704c */ static int blink_dir;
}

/* 001a5a80 00000858 */ void SpecialEventDisp003(/* s1 17 */ int no) {
	/* s3 19 */ int i;
	/* sdata 357050 */ static int next_count;
	/* s1 17 */ u_char ssd_tmp_col;
	/* 0x10(sp) */ SPRT_SDAT ssd;
	/* 0x20(sp) */ SPRT_SDAT ssd_csr;
	/* 0x30(sp) */ DISP_STR ds;
	/* 0x70(sp) */ DISP_SQAR dsq;
	/* 0xf0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a62d8 000000e0 */ void ButsuzoPzlInit() {
	/* v1 3 */ int i;
}

/* 001a63b8 00000e08 */ void ButsuzoPzlMain() {
	/* a2 6 */ int i;
	/* sdata 357054 */ static int t_counter;
}

/* 001a71c0 00000080 */ u_char BldAlpRetern(/* t0 8 */ short int time_cnt, /* a0 4 */ short int bld_appear, /* v1 3 */ short int bld_end, /* a3 7 */ short int bld_alp) {
	/* a1 5 */ int tmp_alp;
}

/* 001a7240 00000cec */ void SpecialEventDisp004() {
	/* s3 19 */ int i;
	/* a1 5 */ int msg_no;
	/* sdata 357058 */ static u_char blink_flg;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd2;
	/* 0x20(sp) */ SPRT_SDAT ssd3;
	/* 0x30(sp) */ SPRT_SDAT ssd4;
	/* 0x40(sp) */ DISP_SQAR dsq;
	/* 0xc0(sp) */ DISP_STR ds;
	/* 0x100(sp) */ SQAR_DAT menu_sq0;
}

/* 001a7f30 0000003c */ void ButsuzoMSGInit() {}
/* 001a7f70 00000280 */ void ButsuzoMSGMain() {}

/* 001a81f0 00000258 */ void ButsuzoMSGDisp() {
	/* s0 16 */ int i;
	/* sdata 35705c */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a8448 000000bc */ void LightsOutInit() {
	/* a0 4 */ int i;
}

/* 001a8508 0000076c */ void LightsOutMain() {
	/* s2 18 */ int no;
	/* a1 5 */ int i;
}

/* 001a8c78 00000680 */ void SpecialEventDisp014(/* a0 4 */ int no) {
	/* s0 16 */ int i;
	/* sdata 357060 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001a92f8 0000014c */ void FaceDoorInit(/* s0 16 */ int face_no) {}

/* 001a9448 00000f3c */ void FaceDoorMain(/* s3 19 */ int face_no) {
	/* s2 18 */ short int omen_no;
	/* s1 17 */ short int have_omen;
	/* a2 6 */ short int door_avail;
}

/* 001aa388 00000104 */ void FaceDoorOkSet(/* a0 4 */ int face_no) {}
/* 001aa490 00000080 */ void FaceDoorAimSet(/* a0 4 */ int face_no) {}

/* 001aa510 00000080 */ int NisUseCheck(/* a0 4 */ int face_no) {
	/* a1 5 */ int ret_num;
}

/* 001aa590 00000080 */ void NisUseSet(/* a0 4 */ int face_no) {}
/* 001aa610 00000080 */ void NisUseUnSet(/* a0 4 */ int face_no) {}

/* 001aa690 00000e78 */ void FaceDoorDisp(/* s4 20 */ int face_no) {
	/* s0 16 */ int i;
	/* fp 30 */ int omen_no;
	/* sdata 357078 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
	/* s3 19 */ int lng1;
	/* s0 16 */ int lng2;
}

/* 001ab508 00000084 */ void SurpriseDoorInit() {}
/* 001ab590 000002f4 */ void SurpriseDoorMain() {}

/* 001ab888 0000021c */ void SurpriseDoorDisp(/* a0 4 */ int face_no) {
	/* s0 16 */ int i;
	/* sdata 35707c */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001abaa8 00000074 */ void SimenPillarInit(/* a0 4 */ int event_no) {}
/* 001abb20 00000a64 */ void SimenPillarMain(/* s0 16 */ int event_no) {}

/* 001ac588 00000048 */ int SimenCheck() {
	/* v1 3 */ int i;
}

/* 001ac5d0 00000904 */ void SimenPillarDisp() {
	/* s0 16 */ int i;
	/* sdata 357084 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001aced8 00000008 */ void IkariMenInit() {}
/* 001acee0 000000ac */ void IkariMenComeOn() {}
/* 001acf90 00000008 */ void HanyouKaitenInit(/* a0 4 */ int event_no) {}
/* 001acf98 0000017c */ void HanyouKaitenMain(/* a0 4 */ int event_no) {}
/* 001ad118 000000ec */ void ZushiBonjiInit(/* s1 17 */ int bonji_no) {}
/* 001ad208 00000624 */ void ZushiBonjiMain(/* s2 18 */ int bonji_no) {}

/* 001ad830 00000474 */ void ZushiBonjiDisp(/* a0 4 */ int bonji_no) {
	/* s0 16 */ int i;
	/* sdata 357090 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001adca8 00000044 */ void ZushiBonjiMSGInit() {}
/* 001adcf0 00000228 */ void ZushiBonjiMSGMain() {}

/* 001adf18 000001b0 */ void ZushiBonjiMSGDisp() {
	/* s1 17 */ int i;
	/* sdata 357094 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001ae0c8 0000008c */ void ZushiBonjiAfterInit(/* s0 16 */ int bonji_no) {}
/* 001ae158 00000204 */ void ZushiBonjiAfterMain(/* s0 16 */ int bonji_no) {}

/* 001ae360 0000025c */ void ZushiBonjiAfterDisp(/* s4 20 */ int bonji_no) {
	/* s0 16 */ int i;
	/* sdata 357098 */ static int next_count;
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd_csr;
	/* 0x20(sp) */ DISP_STR ds;
	/* 0x60(sp) */ DISP_SQAR dsq;
	/* 0xe0(sp) */ SQAR_DAT menu_sq0;
}

/* 001ae5c0 00000010 */ void KakejikuDoorInit() {}
/* 001ae5d0 00000050 */ void KakejikuDoorMain() {}
/* 001ae620 00000044 */ void IdoFirstIntoInit() {}
/* 001ae668 000000e8 */ void IdoFirstIntoMain() {}
/* 001ae750 00000010 */ void IdoIntoInit() {}
/* 001ae760 00000450 */ void IdoIntoMain() {}
/* 001aebb0 00000044 */ void IdoFirstOutInit() {}
/* 001aebf8 000000d8 */ void IdoFirstOutMain() {}
/* 001aecd0 0000000c */ void IdoOutInit() {}
/* 001aece0 00000454 */ void IdoOutMain() {}

/* 001af138 00000214 */ void IdoInOutDisp(/* s0 16 */ int inout) {
	/* 0x0(sp) */ DISP_STR ds;
}

/* 001af350 000001f0 */ void ItemEventInit(/* a2 6 */ int event_no) {}
/* 001af540 000005bc */ void ItemEventMain(/* s2 18 */ int event_no) {}

/* 001afb00 0000023c */ void ItemEventDisp() {
	/* 0x0(sp) */ DISP_STR ds;
}

/* 001afd40 000004a8 */ void NawakakeFalseMain(/* s0 16 */ int event_no) {}

/* 001b01e8 00000324 */ void NawakakeFalseDisp() {
	/* 0x0(sp) */ DISP_STR ds;
}

/* 001b0510 00000008 */ void SpecialEventInit000() {}
/* 001b0518 00000008 */ void SpecialEventMain000() {}
/* 001b0520 00000008 */ void SpecialEventInit001() {}
/* 001b0528 00000008 */ void SpecialEventMain001() {}
/* 001b0530 00000008 */ void SpecialEventInit002() {}
/* 001b0538 00000008 */ void SpecialEventMain002() {}
/* 001b0540 00000054 */ void SpecialEventInit003() {}
/* 001b0598 00000008 */ void SpecialEventMain003() {}
/* 001b05a0 00000008 */ void SpecialEventInit004() {}
/* 001b05a8 00000008 */ void SpecialEventMain004() {}
/* 001b05b0 00000008 */ void SpecialEventInit005() {}
/* 001b05b8 00000008 */ void SpecialEventMain005() {}
/* 001b05c0 00000054 */ void SpecialEventInit006() {}
/* 001b0618 00000008 */ void SpecialEventMain006() {}
/* 001b0620 00000008 */ void SpecialEventInit007() {}
/* 001b0628 00000008 */ void SpecialEventMain007() {}
/* 001b0630 00000054 */ void SpecialEventInit008() {}
/* 001b0688 00000008 */ void SpecialEventMain008() {}
/* 001b0690 00000008 */ void SpecialEventInit009() {}
/* 001b0698 00000008 */ void SpecialEventMain009() {}
/* 001b06a0 00000008 */ void SpecialEventInit010() {}
/* 001b06a8 00000008 */ void SpecialEventMain010() {}
/* 001b06b0 00000008 */ void SpecialEventInit011() {}
/* 001b06b8 00000008 */ void SpecialEventMain011() {}
/* 001b06c0 00000008 */ void SpecialEventInit012() {}
/* 001b06c8 00000008 */ void SpecialEventMain012() {}
/* 001b06d0 00000008 */ void SpecialEventInit013() {}
/* 001b06d8 00000008 */ void SpecialEventMain013() {}
/* 001b06e0 00000008 */ void SpecialEventInit014() {}
/* 001b06e8 00000008 */ void SpecialEventMain014() {}
/* 001b06f0 00000054 */ void SpecialEventInit015() {}
/* 001b0748 00000008 */ void SpecialEventMain015() {}
/* 001b0750 00000008 */ void SpecialEventInit016() {}
/* 001b0758 00000008 */ void SpecialEventMain016() {}
/* 001b0760 00000008 */ void SpecialEventInit017() {}
/* 001b0768 00000008 */ void SpecialEventMain017() {}
/* 001b0770 00000008 */ void SpecialEventInit018() {}
/* 001b0778 00000008 */ void SpecialEventMain018() {}
/* 001b0780 00000008 */ void SpecialEventInit019() {}
/* 001b0788 00000008 */ void SpecialEventMain019() {}
/* 001b0790 00000008 */ void SpecialEventInit020() {}
/* 001b0798 00000008 */ void SpecialEventMain020() {}
/* 001b07a0 00000008 */ void SpecialEventInit021() {}
/* 001b07a8 00000008 */ void SpecialEventMain021() {}
/* 001b07b0 00000008 */ void SpecialEventInit022() {}
/* 001b07b8 00000008 */ void SpecialEventMain022() {}
/* 001b07c0 00000054 */ void SpecialEventInit023() {}
/* 001b0818 00000008 */ void SpecialEventMain023() {}
/* 001b0820 00000008 */ void SpecialEventInit024() {}
/* 001b0828 00000008 */ void SpecialEventMain024() {}
/* 001b0830 00000008 */ void SpecialEventInit025() {}
/* 001b0838 00000008 */ void SpecialEventMain025() {}
/* 001b0840 00000054 */ void SpecialEventInit026() {}
/* 001b0898 00000008 */ void SpecialEventMain026() {}
/* 001b08a0 00000008 */ void SpecialEventInit027() {}
/* 001b08a8 00000008 */ void SpecialEventMain027() {}
/* 001b08b0 00000008 */ void SpecialEventInit028() {}
/* 001b08b8 00000008 */ void SpecialEventMain028() {}
/* 001b08c0 00000008 */ void SpecialEventInit029() {}
/* 001b08c8 00000008 */ void SpecialEventMain029() {}
/* 001b08d0 00000008 */ void SpecialEventInit030() {}
/* 001b08d8 00000008 */ void SpecialEventMain030() {}
/* 001b08e0 00000008 */ void SpecialEventInit031() {}
/* 001b08e8 00000008 */ void SpecialEventMain031() {}
/* 001b08f0 00000008 */ void SpecialEventInit032() {}
/* 001b08f8 00000008 */ void SpecialEventMain032() {}
/* 001b0900 00000008 */ void SpecialEventInit033() {}
/* 001b0908 00000008 */ void SpecialEventMain033() {}
/* 001b0910 00000008 */ void SpecialEventInit034() {}
/* 001b0918 00000008 */ void SpecialEventMain034() {}
/* 001b0920 00000008 */ void SpecialEventInit035() {}
/* 001b0928 00000008 */ void SpecialEventMain035() {}
/* 001b0930 00000008 */ void SpecialEventInit036() {}
/* 001b0938 00000008 */ void SpecialEventMain036() {}
/* 001b0940 00000008 */ void SpecialEventInit037() {}
/* 001b0948 00000008 */ void SpecialEventMain037() {}
/* 001b0950 00000054 */ void SpecialEventInit038() {}
/* 001b09a8 00000008 */ void SpecialEventMain038() {}
/* 001b09b0 00000008 */ void SpecialEventInit039() {}
/* 001b09b8 00000008 */ void SpecialEventMain039() {}
/* 001b09c0 00000008 */ void SpecialEventInit040() {}
/* 001b09c8 00000008 */ void SpecialEventMain040() {}
/* 001b09d0 00000008 */ void SpecialEventInit041() {}
/* 001b09d8 00000008 */ void SpecialEventMain041() {}
/* 001b09e0 00000008 */ void SpecialEventInit042() {}
/* 001b09e8 00000008 */ void SpecialEventMain042() {}
/* 001b09f0 00000008 */ void SpecialEventInit043() {}
/* 001b09f8 00000008 */ void SpecialEventMain043() {}
/* 001b0a00 00000008 */ void SpecialEventInit044() {}
/* 001b0a08 00000008 */ void SpecialEventMain044() {}
/* 001b0a10 00000008 */ void SpecialEventInit045() {}
/* 001b0a18 00000008 */ void SpecialEventMain045() {}
/* 001b0a20 00000008 */ void SpecialEventInit046() {}
/* 001b0a28 00000008 */ void SpecialEventMain046() {}
/* 001b0a30 00000008 */ void SpecialEventInit047() {}
/* 001b0a38 00000008 */ void SpecialEventMain047() {}
/* 001b0a40 00000008 */ void SpecialEventInit048() {}
/* 001b0a48 00000008 */ void SpecialEventMain048() {}
/* 001b0a50 00000008 */ void SpecialEventInit049() {}
/* 001b0a58 00000008 */ void SpecialEventMain049() {}
/* 001b0a60 00000008 */ void SpecialEventInit050() {}
/* 001b0a68 00000008 */ void SpecialEventMain050() {}
/* 001b0a70 00000008 */ void SpecialEventInit051() {}
/* 001b0a78 00000008 */ void SpecialEventMain051() {}
/* 001b0a80 00000008 */ void SpecialEventInit052() {}
/* 001b0a88 00000008 */ void SpecialEventMain052() {}
/* 001b0a90 00000008 */ void SpecialEventInit053() {}
/* 001b0a98 00000008 */ void SpecialEventMain053() {}
/* 001b0aa0 00000008 */ void SpecialEventInit054() {}
/* 001b0aa8 00000008 */ void SpecialEventMain054() {}
/* 001b0ab0 00000008 */ void SpecialEventInit055() {}
/* 001b0ab8 00000008 */ void SpecialEventMain055() {}
/* 001b0ac0 00000008 */ void SpecialEventInit056() {}
/* 001b0ac8 00000008 */ void SpecialEventMain056() {}
/* 001b0ad0 00000008 */ void SpecialEventInit057() {}
/* 001b0ad8 00000008 */ void SpecialEventMain057() {}
/* 001b0ae0 00000008 */ void SpecialEventInit058() {}
/* 001b0ae8 00000008 */ void SpecialEventMain058() {}
/* 001b0af0 00000008 */ void SpecialEventInit059() {}
/* 001b0af8 00000008 */ void SpecialEventMain059() {}
/* 001b0b00 00000008 */ void SpecialEventInit060() {}
/* 001b0b08 00000008 */ void SpecialEventMain060() {}
/* 001b0b10 00000008 */ void SpecialEventInit061() {}
/* 001b0b18 00000008 */ void SpecialEventMain061() {}
/* 001b0b20 00000008 */ void SpecialEventInit062() {}
/* 001b0b28 00000008 */ void SpecialEventMain062() {}
/* 001b0b30 00000008 */ void SpecialEventInit063() {}
/* 001b0b38 00000008 */ void SpecialEventMain063() {}
/* 001b0b40 00000008 */ void SpecialEventInit064() {}
/* 001b0b48 00000008 */ void SpecialEventMain064() {}
/* 001b0b50 00000008 */ void SpecialEventInit065() {}
/* 001b0b58 00000008 */ void SpecialEventMain065() {}
/* 001b0b60 00000008 */ void SpecialEventInit066() {}
/* 001b0b68 00000008 */ void SpecialEventMain066() {}
/* 001b0b70 00000008 */ void SpecialEventInit067() {}
/* 001b0b78 00000008 */ void SpecialEventMain067() {}
/* 001b0b80 00000008 */ void SpecialEventInit068() {}
/* 001b0b88 00000008 */ void SpecialEventMain068() {}
/* 001b0b90 00000008 */ void SpecialEventInit069() {}
/* 001b0b98 00000008 */ void SpecialEventMain069() {}
/* 001b0ba0 00000008 */ void SpecialEventInit070() {}
/* 001b0ba8 00000008 */ void SpecialEventMain070() {}
/* 001b0bb0 00000008 */ void SpecialEventInit071() {}
/* 001b0bb8 00000008 */ void SpecialEventMain071() {}
/* 001b0bc0 00000008 */ void SpecialEventInit072() {}
/* 001b0bc8 00000008 */ void SpecialEventMain072() {}
/* 001b0bd0 00000008 */ void SpecialEventInit073() {}
/* 001b0bd8 00000008 */ void SpecialEventMain073() {}
/* 001b0be0 00000008 */ void SpecialEventInit074() {}
/* 001b0be8 00000008 */ void SpecialEventMain074() {}
/* 001b0bf0 00000008 */ void SpecialEventInit075() {}
/* 001b0bf8 00000008 */ void SpecialEventMain075() {}
/* 001b0c00 00000008 */ void SpecialEventInit076() {}
/* 001b0c08 00000008 */ void SpecialEventMain076() {}
/* 001b0c10 00000008 */ void SpecialEventInit077() {}
/* 001b0c18 00000008 */ void SpecialEventMain077() {}
/* 001b0c20 00000008 */ void SpecialEventInit078() {}
/* 001b0c28 00000008 */ void SpecialEventMain078() {}
/* 001b0c30 00000008 */ void SpecialEventInit079() {}
/* 001b0c38 00000008 */ void SpecialEventMain079() {}
/* 001b0c40 00000008 */ void SpecialEventInit080() {}
/* 001b0c48 00000008 */ void SpecialEventMain080() {}
/* 001b0c50 00000008 */ void SpecialEventInit081() {}
/* 001b0c58 00000008 */ void SpecialEventMain081() {}
/* 001b0c60 00000008 */ void SpecialEventInit082() {}
/* 001b0c68 00000008 */ void SpecialEventMain082() {}
/* 001b0c70 00000008 */ void SpecialEventInit083() {}
/* 001b0c78 00000008 */ void SpecialEventMain083() {}
/* 001b0c80 00000008 */ void SpecialEventInit084() {}
/* 001b0c88 00000008 */ void SpecialEventMain084() {}
/* 001b0c90 00000008 */ void SpecialEventInit085() {}
/* 001b0c98 00000008 */ void SpecialEventMain085() {}
/* 001b0ca0 00000008 */ void SpecialEventInit086() {}
/* 001b0ca8 00000008 */ void SpecialEventMain086() {}
/* 001b0cb0 00000008 */ void SpecialEventInit087() {}
/* 001b0cb8 00000008 */ void SpecialEventMain087() {}
/* 001b0cc0 00000008 */ void SpecialEventInit088() {}
/* 001b0cc8 00000008 */ void SpecialEventMain088() {}
/* 001b0cd0 00000008 */ void SpecialEventInit089() {}
/* 001b0cd8 00000008 */ void SpecialEventMain089() {}
/* 001b0ce0 00000008 */ void SpecialEventInit090() {}
/* 001b0ce8 00000008 */ void SpecialEventMain090() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_load.c
// *****************************************************************************

/* 001b0cf0 000000a4 */ void MissionTitleInit(/* s0 16 */ int msn_no) {}
/* 001b0d98 000001bc */ int MissionTitleMain(/* s0 16 */ int msn_no) {}
/* 001b0f58 00000274 */ int MissionTitleLoad(/* s1 17 */ int msn_no) {}

/* 001b11d0 000000e4 */ int MissionDataLoadReq(/* s0 16 */ MSN_LOAD_DAT *dat) {
	/* v0 2 */ int ret;
}

/* 001b12b8 00000400 */ void MissionDataLoadAfterInit(/* a3 7 */ MSN_LOAD_DAT *dat) {}

/* 001b16b8 0000005c */ void DataLoadWrkInit() {
	/* v0 2 */ int i;
}

/* 001b1718 00000054 */ void SetDataLoadWrk(/* a0 4 */ MSN_LOAD_DAT *dat) {
	/* v1 3 */ int i;
}

/* 001b1770 000000c8 */ void DelDataLoadWrk(/* a0 4 */ u_short file_no) {}

/* 001b1838 00000038 */ u_int GetLoadDataAddr(/* a0 4 */ u_short file_no) {
	/* a1 5 */ int i;
}

/* 001b1870 000000e8 */ void SortLoadDataAddr() {
	/* a1 5 */ int i;
	/* t1 9 */ int j;
	/* 0x0(sp) */ MSN_LOAD_DAT tmp;
}

/* 001b1958 0000021c */ void MissionTitleDisp(/* s2 18 */ int msn_no) {
	/* s0 16 */ int i;
	/* s3 19 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
}

/* 001b1b78 000000e4 */ void StageTitleDisp(/* a0 4 */ int msn_no) {
	/* s0 16 */ int i;
	/* s2 18 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_SDAT ssd;
}

/* 001b1c60 00000010 */ void EventLoadDataInit() {}

/* 001b1c70 00000250 */ int EventLoadData(/* s2 18 */ u_char load_no) {
	/* s3 19 */ SCN_LOAD_DAT *sld;
	/* s0 16 */ MSN_LOAD_DAT *mld;
	/* s1 17 */ int i;
}

/* 001b1ec0 00000088 */ int GetLoadGhostInfo(/* a0 4 */ u_char *load_inf) {
	/* a3 7 */ int i;
	/* a1 5 */ int count;
}

/* 001b1f48 00000060 */ void MikuCGDisp() {
	/* s0 16 */ int i;
	/* 0x0(sp) */ SPRT_SDAT ssd;
}

/* 001b1fa8 00000144 */ void RoomLoadReq(/* s2 18 */ int load_room) {
	/* s0 16 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/mv_cmnd.c
// *****************************************************************************

/* 001b20f0 0000002c */ void EventMovieCommandInit() {}

/* 001b2120 000000e0 */ void EventMovieCommandMain(/* a3 7 */ int flame, /* t0 8 */ int top_addr) {
	/* a1 5 */ int *dat_addr;
	/* a2 6 */ u_char *cmd_addr;
}

/* 001b2200 00000050 */ int GetMovieMessageAddr(/* a0 4 */ short int msg_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/info/inf_disp.c
// *****************************************************************************

/* 001b2250 0000007c */ void InformationDispInit() {}

/* 001b22d0 000001f4 */ void InformationDispMain() {
	/* s0 16 */ short int fndr_mx;
	/* s1 17 */ short int fndr_my;
}

/* 001b24c8 000001a8 */ void InformationDispModeCtrl() {}

/* 001b2670 00000158 */ static void FndrInit() {
	/* a0 4 */ int i;
	/* v0 2 */ short int init;
}

/* 001b27c8 000000d0 */ void InformationDispWrkSet() {}
/* 001b2898 00000030 */ void PlayerInformationDisp(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y) {}

/* 001b28c8 000001d8 */ void FinderDisp(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y) {
	/* 0x10(sp) */ short int bon_x[4];
	/* 0x20(sp) */ short int bon_y[4];
	/* 0x30(sp) */ char bon_c[12];
}

/* 001b2aa0 00000020 */ void PhotoScoreDispOnOff(/* a0 4 */ int on_off) {}
/* 001b2ac0 0000008c */ static void SttsFade() {}
/* 001b2b50 0000008c */ static void FndrFade() {}

/* 001b2be0 0000081c */ static void WeakPoint(/* 0x0(sp) */ short int pos_x, /* 0x4(sp) */ short int pos_y) {
	/* s2 18 */ int i;
	/* s3 19 */ u_char alp;
	/* s6 22 */ u_char siz;
	/* f3 41 */ float ex;
	/* f2 40 */ float ey;
	/* a0 4 */ u_char hnt_alp_num;
	/* fp 30 */ u_char ray_alp_num;
	/* v1 3 */ short int hnt_all_alp;
	/* s0 16 */ u_char chrg_max;
	/* a3 7 */ u_char chrg_alp;
	/* f4 42 */ float chrg_rate;
	/* t0 8 */ short int big_size;
}

/* 001b3400 00000234 */ static void DspBigCircle(/* a0 4 */ u_short lu_chr, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* s6 22 */ u_char alp, /* t0 8 */ short int size_r, /* s2 18 */ u_char cl_ptn) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b3638 000000f4 */ static void PointerNP(/* a0 4 */ short int cx, /* a1 5 */ short int cy, /* a2 6 */ u_char red, /* a3 7 */ u_char alp, /* f20 58 */ float siz) {}

/* 001b3730 0000016c */ static void PointerEN(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* s2 18 */ u_char red, /* s3 19 */ u_char alp, /* f12 50 */ float size) {
	/* f20 58 */ float scl;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b38a0 000002ec */ static void FilmZansu(/* s3 19 */ int number, /* s7 23 */ short int pos_x, /* s6 22 */ short int pos_y, /* 0x0(sp) */ short int num_x, /* 0x4(sp) */ short int num_y, /* s4 20 */ int digit) {
	/* s1 17 */ int i;
	/* s0 16 */ int multi10;
	/* s2 18 */ int multi10_bak;
	/* a0 4 */ int dsp_num;
	/* t2 10 */ u_char dsp_mode;
}

/* 001b3b90 00000284 */ static void NumDisp(/* t0 8 */ u_char number, /* t3 11 */ u_char no, /* t4 12 */ short int pos_x, /* a3 7 */ short int pos_y, /* a2 6 */ short int num_x, /* t1 9 */ short int num_y, /* t2 10 */ u_char mode) {
	/* f21 59 */ float alp;
	/* f20 58 */ float slot_mov;
	/* s2 18 */ int i;
	/* 0x90(sp) */ short int dsp_y;
	/* 0x92(sp) */ signed char dsp_v;
	/* 0x93(sp) */ signed char dsp_h;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b3e18 00000094 */ void YVH_CUT(/* a0 4 */ short int tmp_y, /* v1 3 */ u_char tmp_h, /* a2 6 */ short int up_lmt, /* a3 7 */ short int dwn_lmt, /* t0 8 */ short int *dsp_y, /* t1 9 */ signed char *dsp_v, /* t2 10 */ u_char *dsp_h) {}

/* 001b3eb0 000006e8 */ static void EdogawaLamp(/* s2 18 */ short int pos_x, /* s3 19 */ short int pos_y, /* s5 21 */ u_char out) {
	/* f22 60 */ float chk;
	/* f2 40 */ float pow;
	/* f3 41 */ float lag_pow;
	/* f21 59 */ float cng_pow;
	/* f1 39 */ float cmn_pow;
	/* v1 3 */ signed char pow_add;
	/* v0 2 */ u_char f_max;
	/* f1 39 */ float f;
	/* s1 17 */ u_char sml_alp;
	/* s3 19 */ u_char lag_alp;
	/* v1 3 */ u_char cmn_alp;
	/* v1 3 */ int i;
	/* a1 5 */ u_char ene_num;
	/* s0 16 */ u_char obj;
}

/* 001b4598 00000160 */ static void NewFndrBase(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y) {}

/* 001b46f8 00000354 */ static void BigBon(/* s0 16 */ u_char bon_num, /* a1 5 */ short int sx, /* a2 6 */ short int sy, /* a3 7 */ short int ex, /* t0 8 */ short int ey, /* t1 9 */ u_char mov_tim) {
	/* s0 16 */ int i;
	/* s3 19 */ int j;
	/* f20 58 */ float pr1;
	/* 0x0(sp) */ short int msx;
	/* fp 30 */ short int msy;
	/* s4 20 */ short int mex;
	/* s5 21 */ short int mey;
}

/* 001b4a50 0000037c */ static void BigBon2(/* s0 16 */ u_char bon_num, /* a1 5 */ short int sx, /* a2 6 */ short int sy, /* a3 7 */ short int ex, /* t0 8 */ short int ey, /* t1 9 */ u_char mov_tim) {
	/* s0 16 */ int i;
	/* s3 19 */ int j;
	/* v0 2 */ u_char alp;
	/* f2 40 */ float spd;
	/* s5 21 */ short int msx;
	/* s4 20 */ short int msy;
	/* fp 30 */ short int mex;
	/* 0x0(sp) */ short int mey;
}

/* 001b4dd0 00000120 */ static char GetEnePoint() {
	/* v0 2 */ int i;
}

/* 001b4ef0 0000008c */ static void MafubaInit(/* f12 50 */ float t2_s1, /* f13 51 */ float t2_s2) {}

/* 001b4f80 00000664 */ static u_char Mafuba(/* s7 23 */ short int pos_x, /* fp 30 */ short int pos_y, /* s1 17 */ u_char stts, /* s2 18 */ u_char t1, /* s3 19 */ u_char t2, /* 0x0(sp) */ u_char t3, /* s6 22 */ u_char t4, /* s5 21 */ u_char t5, /* 0xc0(sp) */ int t1_sw, /* f21 59 */ float t2_s1, /* f20 58 */ float t2_s2) {
	/* 0x4(sp) */ u_char t1_sw;
	/* s1 17 */ int j;
	/* s4 20 */ u_char alp_max;
}

/* 001b55e8 000001d8 */ static void MafubaFinish(/* s1 17 */ short int pos_x, /* s2 18 */ short int pos_y, /* a2 6 */ u_char start, /* a3 7 */ u_char time) {
	/* a1 5 */ u_char alp_max;
}

/* 001b57c0 00000244 */ static void DameEffNumber(/* a0 4 */ u_char type, /* a1 5 */ u_short num, /* s1 17 */ short int pos_x, /* s2 18 */ short int pos_y, /* t0 8 */ u_char stts, /* s0 16 */ u_char num_alp, /* t2 10 */ u_char num_siz_x, /* v1 3 */ u_char num_siz_y) {
	/* t3 11 */ u_char keta;
	/* v0 2 */ u_char adj;
	/* f0 38 */ float temp;
}

/* 001b5a08 00000070 */ static void SndEffLoop() {}

/* 001b5a78 00000204 */ static void ShowEneCtrl(/* s2 18 */ short int pos_x, /* s3 19 */ short int pos_y) {
	/* a2 6 */ u_char ene_no;
	/* a3 7 */ u_char alp_max;
	/* a0 4 */ u_short ene_hp;
}

/* 001b5c80 000007a0 */ static char EneDamegeCtrl(/* s4 20 */ short int pos_x, /* s3 19 */ short int pos_y) {
	/* s2 18 */ u_char alp_max;
	/* a0 4 */ u_char ep_bar1;
	/* a2 6 */ u_char dsp_no;
	/* a3 7 */ u_short ene_no;
	/* t0 8 */ u_short ene_dmg;
	/* a1 5 */ u_short bar_red;
	/* a0 4 */ u_short bar_blu;
}

/* 001b6420 00000274 */ static void ShowEnePower(/* s5 21 */ u_char blu_bar, /* a1 5 */ u_char red_bar, /* s2 18 */ short int pos_x, /* s3 19 */ short int pos_y, /* s1 17 */ u_char alp, /* t1 9 */ u_char bar_over) {
	/* f12 50 */ float rgb_per;
	/* f0 38 */ float alp_per;
	/* 0x0(sp) */ int ovr_ene_rgb;
}

/* 001b6698 000000f4 */ static void Koutakun(/* a0 4 */ u_char blu_bar, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ u_char alp) {
	/* t0 8 */ short int dsp_u;
	/* t1 9 */ short int dsp_w;
	/* t2 10 */ short int dsp_x;
}

/* 001b6790 00000180 */ static void ShowMikuPower(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y) {}

/* 001b6910 000005ec */ static void ShowMikuPower2(/* s5 21 */ short int pos_x, /* fp 30 */ short int pos_y) {
	/* sbss 357aa8 */ static FLSH_CORE flsh_life;
	/* s7 23 */ u_char alp;
	/* s3 19 */ u_short blu_bar;
}

/* 001b6f00 000000f4 */ static void DspKotaku(/* a0 4 */ u_short chr, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ u_char alp, /* t0 8 */ u_char dsp_u, /* t1 9 */ u_char dsp_w, /* t2 10 */ u_short dsp_x) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b6ff8 000000e8 */ static void GayBar(/* a0 4 */ u_short chr, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ u_char alp, /* f20 58 */ float scl) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b70e0 00000184 */ static void GayBar2(/* a0 4 */ u_short top_chr, /* s6 22 */ u_short end_chr, /* s4 20 */ short int pos_x, /* s3 19 */ short int pos_y, /* s5 21 */ u_char alp, /* f22 60 */ float scl) {
	/* s1 17 */ int i;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b7268 00000218 */ static void JetCD(/* s6 22 */ JET_SET *ninjin, /* fp 30 */ u_char num, /* s5 21 */ u_char tim, /* s4 20 */ u_char spd, /* s3 19 */ u_char wid, /* 0x0(sp) */ u_short chr, /* 0x4(sp) */ u_char hgh, /* t3 11 */ short int mov_h, /* 0xc0(sp) */ int mov_v, /* 0xc8(sp) */ int px, /* 0xd0(sp) */ int base, /* 0xd8(sp) */ int alp) {
	/* 0x8(sp) */ short int mov_v;
	/* 0xc(sp) */ short int px;
	/* 0x10(sp) */ short int base;
	/* 0x14(sp) */ u_char alp;
	/* s1 17 */ int i;
	/* f12 50 */ float nin_scl_x;
}

/* 001b7480 00000174 */ static void SyonenJet(/* a0 4 */ u_short chr, /* a1 5 */ u_char hgh, /* s3 19 */ short int mov_h, /* s0 16 */ short int mov_v, /* t0 8 */ short int px, /* s1 17 */ short int base, /* s4 20 */ u_char alp, /* f20 58 */ float scl_x, /* f21 59 */ float scl_y) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b75f8 00000744 */ static void TameKin2(/* s2 18 */ short int pos_x, /* s3 19 */ short int pos_y) {
	/* s0 16 */ int i;
	/* s1 17 */ int j;
	/* v0 2 */ u_char alp;
	/* f0 38 */ float per;
	/* s1 17 */ u_char charge_max;
	/* 0x10(sp) */ u_char ini_num;
	/* 0x14(sp) */ u_char top;
	/* 0x18(sp) */ u_char chrg_rot;
	/* s6 22 */ u_char chrg_alp;
	/* 0x1c(sp) */ u_char chrg_siz;
	/* 0x20(sp) */ u_char chrg_rgb;
	/* 0x24(sp) */ u_char chrg_flr;
	/* 0x28(sp) */ u_char init_alp;
}

/* 001b7d40 0000004c */ static void ZanzoSS(/* t0 8 */ ZAN *zz) {
	/* a2 6 */ int i;
}

/* 001b7d90 00000148 */ static void ZanzoSM(/* a0 4 */ ZAN *zz, /* a1 5 */ u_char num1, /* a2 6 */ u_char num2, /* a3 7 */ u_char num3, /* t0 8 */ u_char num4, /* t1 9 */ u_char mode) {
	/* t5 13 */ int i;
}

/* 001b7ed8 00000034 */ static void ZanzoLS(/* a0 4 */ u_char *zz) {
	/* v0 2 */ int i;
}

/* 001b7f10 00000064 */ static void ZanzoLM(/* a0 4 */ u_char *zz, /* a1 5 */ u_char per) {
	/* a2 6 */ int i;
}

/* 001b7f78 0000021c */ static void AhoBon(/* a0 4 */ u_short chr, /* a1 5 */ short int px, /* a2 6 */ short int py, /* s5 21 */ u_char rot, /* s0 16 */ u_char rgb, /* s4 20 */ u_char alp, /* s3 19 */ u_char siz, /* s7 23 */ u_char now_num, /* 0x120(sp) */ int ini_num) {
	/* s6 22 */ u_char ini_num;
	/* f6 44 */ float xo;
	/* f2 40 */ float yo;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001b8198 0000016c */ static void BakBon(/* a0 4 */ u_short chr, /* a1 5 */ short int px, /* a2 6 */ short int py, /* s2 18 */ u_char flr) {
	/* f2 40 */ float xo;
	/* f0 38 */ float yo;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* a2 6 */ int rgb;
}

/* 001b8308 0000035c */ static void PhotoScoreDisp(/* s0 16 */ int count, /* s1 17 */ int wait) {
	/* 0x20(sp) */ u_char alp_table2[31];
	/* sdata 3570d4 */ static int e_flow;
	/* sbss 357aac */ static float fcnt;
	/* f26 64 */ float fnum;
	/* f25 63 */ float fslide;
	/* s1 17 */ u_char alp;
	/* v1 3 */ int cnt;
	/* f1 39 */ float fw;
	/* f21 59 */ float f;
	/* 0x40(sp) */ DISP_SPRT ds;
	/* 0xd0(sp) */ SPRT_DAT raze_sprt;
}

/* 001b8668 00000010 */ void InfoDispPause() {}
/* 001b8678 0000000c */ void InfoDispRestart() {}

/* 001b8688 000003e4 */ static void BukiyouMan(/* s3 19 */ short int px, /* s0 16 */ short int py) {
	/* s1 17 */ u_char alp_max;
	/* a1 5 */ u_char num;
	/* v1 3 */ u_char buki_alp;
}

/* 001b8a70 00000174 */ static void DameDameInit() {
	/* v1 3 */ int i;
}

/* 001b8be8 00000b00 */ static void GekisyaBoyGeisyaGirl(/* s3 19 */ short int px, /* s4 20 */ short int py) {
	/* s2 18 */ int i;
	/* s0 16 */ u_char alp1;
	/* s5 21 */ u_char alp2;
	/* a0 4 */ u_char alp_max;
	/* s1 17 */ u_char mov;
	/* 0x0(sp) */ short int y[10];
}

/* 001b96e8 00000258 */ static char KanKinoSyogai(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y) {
	/* s0 16 */ int i;
	/* s1 17 */ char dir;
}

/* 001b9940 000000bc */ int isDispLamp() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/map_ctrl.c
// *****************************************************************************

/* 001b9a00 00000024 */ int MissonMapDataLoad(/* a0 4 */ u_char msn_no) {}
/* 001b9a28 00000060 */ void InitMapStatus(/* a0 4 */ u_char msn_no) {}
/* 001b9a88 0000004c */ void MapDataInit() {}
/* 001b9ad8 00000028 */ void MapMissionChange(/* a0 4 */ u_char new_msn) {}
/* 001b9b00 00000014 */ void RoomPassInit() {}
/* 001b9b18 0000002c */ void RoomPass(/* a0 4 */ u_char room_id) {}
/* 001b9b48 0000002c */ int IsRoomPass(/* a0 4 */ u_char room_id) {}
/* 001b9b78 00000040 */ void MapFloorChange(/* a0 4 */ u_char new_floor) {}

/* 001b9bb8 00000020 */ int GetFloorTopAddr(/* a0 4 */ u_char floor) {
	/* a0 4 */ int *addr;
}

/* 001b9bd8 000000e0 */ void InitMap() {
	/* s0 16 */ int i;
}

/* 001b9cb8 00000860 */ void MapCtrlMain() {
	/* s0 16 */ int get_room;
	/* f20 58 */ float get_y;
}

/* 001ba518 000001c8 */ void GetNewRoomData() {}
/* 001ba6e0 0000004c */ u_char RoomWrkRenew() {}
/* 001ba730 00000158 */ void CameraNoRenewEach(/* a0 4 */ u_char cam_type) {}
/* 001ba888 00000034 */ static void CameraNoRenew() {}

/* 001ba8c0 0000003c */ void DbgGetDrmCamNo() {
	/* v0 2 */ int j;
}

/* 001ba900 0000025c */ static u_short CameraGetDoramaCameraNo(/* s4 20 */ u_short now_cam_no) {
	/* s0 16 */ u_int *addr_ui0;
	/* v0 2 */ u_int *addr_ui1;
	/* a3 7 */ u_short *dcamp;
	/* s1 17 */ int i;
	/* t0 8 */ int j;
	/* 0x0(sp) */ u_short cam_no[2];
	/* s5 21 */ u_char room_no;
	/* s6 22 */ u_char data_num;
	/* 0x10(sp) */ u_char get_flg;
	/* t1 9 */ u_char now_camera_get_flg;
	/* s2 18 */ u_char drm_cam_no_get_flg;
	/* sdata 3570e4 */ static int count;
}

/* 001bab60 000001a8 */ u_short CameraGetDoorCameraNo(/* a0 4 */ u_short door_id0, /* a1 5 */ u_short door_id1) {
	/* s1 17 */ CAMERA4_DATA_POP *cdpp;
	/* s2 18 */ u_int *addr_ui0;
	/* v0 2 */ u_int *addr_ui1;
	/* s4 20 */ int i;
	/* s3 19 */ int j;
	/* 0x0(sp) */ u_short dr_id[2];
	/* fp 30 */ u_char room_no;
	/* 0x10(sp) */ u_char data_num;
}

/* 001bad08 00000204 */ static u_short CameraCheckDoorCameraNo(/* s4 20 */ u_short door_id, /* fp 30 */ u_char room_id) {
	/* s0 16 */ CAMERA4_DATA_POP *cdpp;
	/* s1 17 */ u_int *addr_ui0;
	/* v0 2 */ u_int *addr_ui1;
	/* 0x0(sp) */ u_int *addr_ui2;
	/* s2 18 */ int i;
	/* s7 23 */ u_char room_no;
	/* s5 21 */ u_char data_num;
}

/* 001baf10 00000048 */ static void PlayerHeightRenew() {}

/* 001baf58 00000028 */ static u_char GetRoomNum() {
	/* v0 2 */ int *addr;
}

/* 001baf80 00000038 */ static u_char GetRoomNumFloor(/* a0 4 */ u_char floor) {
	/* v1 3 */ int *addr;
}

/* 001bafb8 0000007c */ static u_char GetDataNum(/* s0 16 */ u_char map, /* a1 5 */ u_char room) {
	/* v0 2 */ int *addr;
	/* a0 4 */ u_char data_room;
}

/* 001bb038 00000048 */ static u_char RoomChangeJudge() {}
/* 001bb080 00000084 */ static u_char CameraChangeJudgeEach(/* a0 4 */ u_char cam_type, /* a1 5 */ u_short cam_no) {}
/* 001bb108 00000064 */ static u_char CameraChangeJudge() {}
/* 001bb170 00000064 */ static u_char HeightChangeJudge() {}

/* 001bb1d8 00000098 */ static u_char GetNowRoom() {
	/* s0 16 */ u_char i;
}

/* 001bb270 00000098 */ u_char GetRoomIdFromRoomNo(/* a0 4 */ u_char map, /* a3 7 */ u_char room_no) {
	/* v0 2 */ int *addr0;
	/* v1 3 */ u_char *addr1;
	/* a2 6 */ int i;
	/* t0 8 */ u_char room_id;
	/* a0 4 */ u_char room_num;
}

/* 001bb308 000000b0 */ u_char GetRoomIdFromRoomNoFloor(/* s1 17 */ u_char map, /* s0 16 */ u_char room_no, /* a1 5 */ u_char floor) {
	/* v0 2 */ int *addr0;
	/* a0 4 */ u_char *addr1;
	/* a1 5 */ int i;
	/* a2 6 */ u_char room_id;
	/* v1 3 */ u_char room_num;
}

/* 001bb3b8 00000064 */ static u_char GetDoorRoomIdFromRoomNo(/* s0 16 */ u_char room_no) {
	/* a0 4 */ u_char *addr1;
	/* v1 3 */ int i;
	/* a1 5 */ u_char room_num;
	/* a2 6 */ u_char room_id;
}

/* 001bb420 0000006c */ static u_char GetDoorRoomIdFromRoomNoFloor(/* s0 16 */ u_char room_no, /* a1 5 */ u_char floor) {
	/* a0 4 */ u_char *addr1;
	/* v1 3 */ int i;
	/* a1 5 */ u_char room_num;
	/* a2 6 */ u_char room_id;
}

/* 001bb490 00000094 */ u_char GetDataRoom(/* a0 4 */ u_char map, /* a3 7 */ u_char room_id) {
	/* v0 2 */ int *addr0;
	/* a0 4 */ u_char *addr1;
	/* a2 6 */ u_char i;
	/* a1 5 */ u_char room_num;
}

/* 001bb528 00000060 */ static u_char GetDoorDataRoom(/* s0 16 */ u_char room_id) {
	/* a0 4 */ u_char *addr1;
	/* v1 3 */ u_char i;
	/* a1 5 */ u_char room_num;
}

/* 001bb588 00000134 */ static u_short GetNowCameraEach(/* s3 19 */ u_char cam_type, /* s4 20 */ u_char cam_num, /* s5 21 */ u_char *rm_cam_no) {
	/* s0 16 */ u_char i;
	/* s2 18 */ u_char room;
	/* v0 2 */ int *addr;
}

/* 001bb6c0 00000118 */ static u_short GetNowCamera() {
	/* s0 16 */ u_char i;
	/* s2 18 */ u_char room;
	/* v0 2 */ int *addr;
}

/* 001bb7d8 00000124 */ static float GetNowHeight() {
	/* s0 16 */ u_char i;
	/* s2 18 */ u_char room;
	/* v0 2 */ int *addr;
}

/* 001bb900 00000088 */ int GetPointRoomNo(/* s2 18 */ u_short pos_x, /* s1 17 */ u_short pos_z) {
	/* s0 16 */ int i;
}

/* 001bb988 000000a0 */ int GetPointRoomNoFloor(/* s4 20 */ u_short pos_x, /* s3 19 */ u_short pos_z, /* s2 18 */ u_char floor) {
	/* s0 16 */ int i;
	/* s1 17 */ u_char room_num;
}

/* 001bba28 00000058 */ int GetPointRoom(/* a0 4 */ u_short pos_x, /* a1 5 */ u_short pos_z) {
	/* s0 16 */ int *addr;
}

/* 001bba80 0000017c */ float GetPointHeight(/* s6 22 */ u_short pos_x, /* s5 21 */ u_short pos_z) {
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char room;
	/* a2 6 */ int *addr;
}

/* 001bbc00 00000058 */ static void GetPlayerRoom(/* a0 4 */ u_char room) {
	/* a2 6 */ int *addr;
}

/* 001bbc58 000000cc */ static void GetRoomDispPos(/* a0 4 */ u_char room) {
	/* a1 5 */ int *addr;
}

/* 001bbd28 0000010c */ u_char PosInAreaJudge0(/* a0 4 */ u_char room, /* s6 22 */ u_short pos_x, /* s5 21 */ u_short pos_y) {
	/* s0 16 */ int i;
	/* a1 5 */ int *addr;
	/* s3 19 */ int *addr_bak;
	/* s4 20 */ u_char sq_num;
}

/* 001bbe38 00000134 */ static u_char PosInAreaJudge0Floor(/* s1 17 */ u_char room, /* s6 22 */ u_short pos_x, /* s5 21 */ u_short pos_y, /* t0 8 */ u_char floor) {
	/* s0 16 */ int i;
	/* a0 4 */ int *addr;
	/* s3 19 */ int *addr_bak;
	/* s4 20 */ u_char sq_num;
}

/* 001bbf70 00000178 */ u_char PosInAreaJudge1(/* t1 9 */ u_char map, /* a0 4 */ u_char room, /* a1 5 */ u_char data, /* s7 23 */ u_short pos_x, /* s6 22 */ u_short pos_y) {
	/* s0 16 */ int i;
	/* a3 7 */ int *addr;
	/* s3 19 */ int *addr_bak;
	/* s4 20 */ u_char sq_num;
	/* 0x0(sp) */ u_char ofs[13];
}

/* 001bc0e8 000000a4 */ u_char MapHitCheck(/* s3 19 */ u_short pos_x, /* s2 18 */ u_short pos_y, /* a2 6 */ u_char room_id) {
	/* s0 16 */ int i;
	/* s1 17 */ u_char room_no;
}

/* 001bc190 000000a4 */ u_char MapHitCheckAll(/* a0 4 */ u_short pos_x, /* a1 5 */ u_short pos_y, /* a2 6 */ u_char room_id) {
	/* v0 2 */ u_char hit_flg;
}

/* 001bc238 000001bc */ void PlyrHitRot(/* s3 19 */ float *pos, /* s1 17 */ float *dst, /* s4 20 */ float *go_rot, /* s5 21 */ float *no_rot, /* s7 23 */ u_char div, /* s6 22 */ u_char room_id) {
	/* 0x0(sp) */ sceVu0FVECTOR rpos;
	/* f22 60 */ float chk_rot;
}

/* 001bc3f8 00000488 */ u_char PlyrMapHitCheck(/* s1 17 */ float *dst, /* s3 19 */ float *pos, /* s6 22 */ u_char div, /* s7 23 */ u_char room_id) {
	/* 0x0(sp) */ sceVu0FVECTOR rpos;
	/* f21 59 */ float chk_rot;
	/* 0x10(sp) */ float chk_rotbk[2];
	/* 0x20(sp) */ float ok_rot[2];
	/* s0 16 */ int i;
	/* s0 16 */ int j;
	/* s5 21 */ u_char div_bk;
	/* 0x30(sp) */ u_char ng_flg[2];
}

/* 001bc880 000001ec */ int PlyrMapHitMoveOfs(/* s7 23 */ float *dst, /* s3 19 */ float *pos, /* a2 6 */ u_char room, /* fp 30 */ u_char flr_room) {
	/* s5 21 */ int i;
	/* s2 18 */ int j;
	/* s0 16 */ int k;
	/* 0x20(sp) */ int x_ofs;
	/* 0x24(sp) */ int z_ofs;
	/* f21 59 */ float lng_cmp;
	/* 0x0(sp) */ sceVu0FVECTOR cpos;
	/* 0x10(sp) */ sceVu0FVECTOR dpos;
}

/* 001bca70 00000174 */ static void GetNowOpenEvent() {
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char room;
	/* s3 19 */ u_char cnt;
	/* v0 2 */ int *addr;
}

/* 001bcbe8 00000178 */ static void GetNowOpenFindAct() {
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char room;
	/* s3 19 */ u_char cnt;
	/* v0 2 */ int *addr;
}

/* 001bcd60 00000034 */ static void GetNowPlayerMoveMotion() {}

/* 001bcd98 0000011c */ u_char GetPointMoveMotion(/* s2 18 */ float *p, /* a1 5 */ u_char no) {
	/* v0 2 */ int *addr;
	/* s1 17 */ u_char i;
	/* s3 19 */ u_char room;
	/* s4 20 */ u_char mot;
}

/* 001bceb8 00000220 */ u_char MapCameraCdivideAB(/* s1 17 */ u_short data_no, /* s3 19 */ u_short *xmin, /* s2 18 */ u_short *xmax, /* s5 21 */ u_short *ymin, /* s4 20 */ u_short *ymax, /* t1 9 */ u_char cam_type) {
	/* a2 6 */ int i;
	/* t1 9 */ int x_cnt;
	/* a1 5 */ int *addr;
	/* v0 2 */ int *dat_addr;
	/* 0x0(sp) */ int cmpx[2];
	/* 0x10(sp) */ int cmpy[2];
}

/* 001bd0d8 0000005c */ void NakasuHazeSet() {
	/* a1 5 */ int i;
	/* a2 6 */ u_char on_flg;
}

/* 001bd138 0000002c */ void DebugMemoryCheck(/* a0 4 */ u_char *addr, /* a1 5 */ int size) {
	/* a1 5 */ int i;
}

/* 001bd168 0000016c */ static void MapSetFloorSeNo() {
	/* v0 2 */ int *addr_si;
	/* s1 17 */ int i;
	/* s2 18 */ u_char room;
	/* s4 20 */ u_char data_no;
}

/* 001bd2d8 000000bc */ int GetRoomPos(/* a0 4 */ u_char room_no, /* s2 18 */ float *room_pos) {
	/* s1 17 */ u_char dat_room;
	/* v1 3 */ int *addr;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/map_area.c
// *****************************************************************************

/* 001bd398 000000a4 */ void MapAreaInit() {
	/* v1 3 */ int i;
}

/* 001bd440 000000c4 */ void MapAreaMain() {}
/* 001bd508 000000d4 */ int MapAreaRoomLoadReq() {}
/* 001bd5e0 00000040 */ void MapAreaLoadSet() {}

/* 001bd620 00000060 */ u_char GetRoomArea(/* a0 4 */ u_char room_id) {
	/* a3 7 */ int i;
	/* a1 5 */ int j;
}

/* 001bd680 000002ec */ int SetAreaLoadRoom(/* s2 18 */ u_char mode, /* a1 5 */ u_char area_no) {
	/* a2 6 */ int i;
	/* a3 7 */ int j;
	/* t6 14 */ int count;
	/* 0x0(sp) */ int tmp0[6];
	/* 0x20(sp) */ int tmp1[6];
	/* 0x40(sp) */ int tmp2[6];
	/* a3 7 */ int tmp3;
}

/* 001bd970 0000003c */ void AreaRoomAllLoadInit() {
	/* v1 3 */ int i;
}

/* 001bd9b0 000000f4 */ int AreaRoomAllLoad(/* a0 4 */ u_char area_no) {
	/* s3 19 */ int i;
}

/* 001bdaa8 00000064 */ int GetEmptyRoomAddr() {
	/* a0 4 */ int i;
}

/* 001bdb10 000001d0 */ void ClearDispRoom(/* a0 4 */ int wrk_no) {
	/* s2 18 */ DOOR_WRK *dwp;
	/* s1 17 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/door_ctl.c
// *****************************************************************************

/* 001bdce0 00000030 */ u_char IsUseDoor(/* a0 4 */ u_char use) {}

/* 001bdd10 00000078 */ short int SearchDoorWrk(/* s2 18 */ int door_id) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* s1 17 */ int i;
}

/* 001bdd88 0000003c */ static short int SearchAcDoor(/* a0 4 */ int door_id) {
	/* a1 5 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* v1 3 */ int i;
}

/* 001bddc8 0000003c */ static short int SearchNcDoor(/* a0 4 */ int door_id) {
	/* a1 5 */ NON_CLOSE_DOOR_WRK *ncp;
	/* v1 3 */ int i;
}

/* 001bde08 00000014 */ void ClearDoorAttrFlg() {}

/* 001bde20 000001b4 */ void InitDoorAttrFlg() {
	/* v0 2 */ int addr_map;
	/* s3 19 */ int *addr_si0;
	/* s0 16 */ int *addr_si1;
	/* s1 17 */ u_short *addr_us;
	/* s4 20 */ int i;
	/* s6 22 */ u_short dat_num;
	/* a1 5 */ int k;
}

/* 001bdfd8 000000f0 */ void DoorPassRoom(/* a0 4 */ u_char room_id) {
	/* v0 2 */ int *addr_si0;
	/* s0 16 */ u_char *addr_uc0;
	/* s1 17 */ int i;
	/* v1 3 */ u_char dr_num;
}

/* 001be0c8 000000bc */ void DoorRDoorSetRotOK(/* s3 19 */ u_short door_id) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* s2 18 */ int i;
}

/* 001be188 00000058 */ void DoorPassSetSttsMap(/* a0 4 */ u_short door_id) {}
/* 001be1e0 00000044 */ void DoorPassSetHide(/* a0 4 */ u_short door_id) {}
/* 001be228 00000058 */ void DoorPassSetTouch(/* a0 4 */ u_short door_id) {}

/* 001be280 0000006c */ void DoorAcInit() {
	/* v0 2 */ int i;
}

/* 001be2f0 0000015c */ void DoorCtrlInit() {
	/* t1 9 */ int i;
	/* a3 7 */ int j;
	/* v0 2 */ int *addr;
	/* t0 8 */ u_short *addr_us;
	/* t2 10 */ u_short ncd_num;
}

/* 001be450 00000034 */ static void InitDoorOpenCtrl() {}
/* 001be488 00000014 */ void InitAreaReadWrk() {}

/* 001be4a0 00000254 */ void DoorDataInit() {
	/* s4 20 */ int i;
	/* a0 4 */ int j;
	/* s0 16 */ int *addr_si;
	/* 0x0(sp) */ u_char *addr_uc;
	/* v1 3 */ u_short *dr_tbl;
	/* a1 5 */ u_char dr_all;
	/* 0x4(sp) */ u_char dr_num;
	/* s0 16 */ u_short dr_id;
	/* 0x8(sp) */ u_short dr_no;
	/* s6 22 */ u_char no_use_fw;
	/* s2 18 */ u_char no_use_dw;
	/* 0xc(sp) */ u_char room_id;
}

/* 001be6f8 0000011c */ static void SetDoorSttsData(/* t2 10 */ int dw_no, /* t0 8 */ int door_id, /* a2 6 */ u_char type) {
	/* a2 6 */ int i;
}

/* 001be818 0000005c */ static void SetDoorSttsEve(/* a0 4 */ int door_id, /* a1 5 */ u_char stts) {
	/* v1 3 */ DOOR_STTS_KEEP *dskp;
}

/* 001be878 00000054 */ static void SetDoorLockEve(/* a0 4 */ int door_id, /* a1 5 */ u_char lock) {
	/* v1 3 */ DOOR_STTS_KEEP *dskp;
}

/* 001be8d0 00000064 */ void DoorSetAllLocked() {
	/* a0 4 */ DOOR_STTS_KEEP *dskp;
	/* v0 2 */ DOOR_WRK *dwp;
	/* v1 3 */ int i;
}

/* 001be938 00000050 */ int IsInDoorSpuare() {
	/* 0x0(sp) */ DOJ_SQUARE_MTN dsm;
}

/* 001be988 0000003c */ u_char GetRoomIdBeyondDoor2() {}

/* 001be9c8 0000007c */ u_char GetRoomIdBeyondDoor(/* s0 16 */ u_short door_id, /* a1 5 */ u_char now_room_id) {
	/* v1 3 */ u_char *addr_uc;
	/* a0 4 */ int i;
	/* s1 17 */ u_char next_room_id;
	/* a1 5 */ u_char dr_num;
}

/* 001bea48 000000d0 */ u_char IsAllConnectDoorClose() {
	/* s0 16 */ DOOR_WRK *dwp;
	/* a0 4 */ NON_CLOSE_DOOR_WRK *ncp;
	/* s1 17 */ int i;
	/* v1 3 */ int j;
	/* a1 5 */ u_char dscv_flg;
}

/* 001beb18 00000234 */ void LockAllDoorInNowRoom() {
	/* a2 6 */ NON_CLOSE_DOOR_WRK *ncp;
	/* v1 3 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* t3 11 */ u_char *addr_uc;
	/* a1 5 */ int i;
	/* a0 4 */ int j;
	/* a1 5 */ int k;
	/* t5 13 */ u_short tmp_did;
	/* s1 17 */ u_char now_room_id;
	/* s0 16 */ u_char next_room_id;
	/* s2 18 */ u_char dr_num;
	/* t1 9 */ u_char nuke;
	/* s4 20 */ u_char lock_did_num;
}

/* 001bed50 000000ac */ void UnlockAllDoorInNowRoom() {
	/* a0 4 */ DOOR_WRK *dwp;
	/* a0 4 */ int i;
	/* a1 5 */ int j;
}

/* 001bee00 00000028 */ u_char IsDoorLoad(/* a0 4 */ u_char type) {}

/* 001bee28 000001bc */ int GetRoomDoorID(/* s4 20 */ u_char room_id, /* s2 18 */ u_short *door_id, /* a2 6 */ u_char msn_no) {
	/* v0 2 */ u_int *addr_cmn;
	/* v1 3 */ u_int *adr_door_data_top;
	/* v0 2 */ u_int *adr_drrm_top;
	/* a1 5 */ u_int *adr_drdt_top;
	/* a0 4 */ u_char *adr_rmnum;
	/* v1 3 */ u_short *adr_drnum;
	/* a2 6 */ u_char *adr_dr_tmp;
	/* v0 2 */ u_int *adr_dd_tmp;
	/* a3 7 */ u_short *adr_dtmp;
	/* a0 4 */ u_char *adr_rtmp;
	/* v1 3 */ u_char *adr_tmp_uc0;
	/* s3 19 */ int ret;
	/* a3 7 */ int i;
	/* a0 4 */ int j;
	/* s0 16 */ int k;
	/* t4 12 */ u_short all_door_num;
	/* t0 8 */ u_char dr_room_num;
	/* t2 10 */ u_short door_num;
}

/* 001befe8 00000128 */ static void SetDoorWrk(/* s1 17 */ int dw_no, /* s0 16 */ u_int *addr, /* s2 18 */ int dr_id, /* s3 19 */ int fwrk_no) {
	/* s4 20 */ DOOR_WRK *dwp;
}

/* 001bf110 00000118 */ static void DoorSetFurnWrk(/* a0 4 */ int dwrk_no, /* a1 5 */ int fwrk_no, /* a2 6 */ u_char use, /* a3 7 */ u_char room_id) {}
/* 001bf228 00000024 */ void DoorCtrlMain() {}
/* 001bf250 00000010 */ u_char IsDoorOpenCtrlMode() {}

/* 001bf260 00000994 */ static void DoorCtrlOpen() {
	/* s5 21 */ DOJ_SQUARE_MTN *dsmtnp;
	/* s4 20 */ DOOR_MTN_DAT *dmotionp;
	/* t1 9 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* t0 8 */ NON_CLOSE_DOOR_WRK *ncp;
	/* 0x0(sp) */ float tmp_rot;
	/* s1 17 */ int i;
	/* s0 16 */ int j;
	/* sbss 357ac4 */ static int load_id;
	/* sbss 357ac8 */ static u_char req_flg;
	/* a0 4 */ u_short tmp_rot_door_id;
}

/* 001bfbf8 00000058 */ void SetPlyrPosAfterDOpen() {
	/* v0 2 */ PLYR_WRK *pwp;
	/* s0 16 */ MOVE_BOX *mbp;
}

/* 001bfc50 000000a8 */ static void SetNcDwrk(/* a0 4 */ int nc_dwrk_pos, /* a1 5 */ int dwrk_pos, /* a2 6 */ u_char stts) {
	/* s1 17 */ NON_CLOSE_DOOR_WRK *ncp;
	/* a3 7 */ DOOR_WRK *dwp;
	/* a1 5 */ DOOR_TYPE_DAT *dtdp;
}

/* 001bfcf8 000000b0 */ static void SetAcDwrk(/* a0 4 */ int ac_dwrk_pos, /* a1 5 */ int dwrk_pos, /* a2 6 */ u_char stts) {
	/* s1 17 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* a3 7 */ DOOR_WRK *dwp;
	/* a1 5 */ DOOR_TYPE_DAT *dtdp;
}

/* 001bfda8 000009e4 */ static void DoorCtrlAutoClose() {
	/* s6 22 */ DOOR_TYPE_DAT *dtdp;
	/* s3 19 */ DOOR_WRK *dwp;
	/* s2 18 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* s0 16 */ int i;
	/* s5 21 */ int j;
	/* a2 6 */ int k;
	/* 0x0(sp) */ u_short del_id;
}

/* 001c0790 00000030 */ void AllCloseAcDoor() {
	/* v1 3 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* a0 4 */ int i;
}

/* 001c07c0 000000f4 */ void AllCloseConnectDoor() {
	/* s0 16 */ DOOR_WRK *dwp;
	/* s2 18 */ int i;
	/* s1 17 */ u_char now_rid;
}

/* 001c08b8 000000b4 */ static int DoorReOpenCheck(/* s1 17 */ float *pos, /* a1 5 */ int dwrk_no, /* a2 6 */ u_short count, /* a3 7 */ u_char type) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* 0x0(sp) */ sceVu0FVECTOR tmp_dpos;
}

/* 001c0970 00000644 */ static void DoorCtrlNoClose() {
	/* s0 16 */ DOOR_TYPE_DAT *dtdp;
	/* s0 16 */ DOOR_WRK *dwp;
	/* s1 17 */ NON_CLOSE_DOOR_WRK *ncp;
	/* s4 20 */ int i;
	/* s6 22 */ u_short del_id;
}

/* 001c0fb8 0000002c */ static float DoorOpenCtrlRot(/* f12 50 */ float count, /* f13 51 */ float move_max, /* f14 52 */ float open_wait) {}
/* 001c0fe8 00000030 */ static short int DoorOpenCtrlSlide(/* a0 4 */ u_short count, /* a1 5 */ short int move_max, /* a2 6 */ u_short open_wait) {}
/* 001c1018 00000030 */ void DoorOpenCheckMain() {}
/* 001c1048 00000094 */ void DoorCheckOn(/* s0 16 */ u_char mode) {}
/* 001c10e0 0000000c */ void DoorCheckOff() {}
/* 001c10f0 00000028 */ static void SetDoorOpenPlyrPos() {}

/* 001c1118 000000c0 */ u_char DoorOpenJudge() {
	/* 0x0(sp) */ u_short door_id[2];
	/* s2 18 */ u_char sq_no;
}

/* 001c11d8 000000b0 */ void SetDoorOpenCameraNo() {
	/* a1 5 */ int i;
	/* 0x0(sp) */ u_short door_id[2];
}

/* 001c1288 00000130 */ int AreaReadCheck() {
	/* a1 5 */ u_char *addr_uc;
	/* a2 6 */ int i;
	/* s1 17 */ int dwrk_no;
	/* s3 19 */ u_char type;
	/* t0 8 */ u_char dr_num;
}

/* 001c13b8 0000056c */ static u_char DoorOpenCheck(/* s0 16 */ u_char chk_stat) {
	/* 0x0(sp) */ sceVu0FVECTOR dbase1;
	/* 0x10(sp) */ sceVu0FVECTOR dbase2;
	/* 0x20(sp) */ DOJ_SQUARE tmp;
	/* s1 17 */ DOJ_SQUARE_MTN *dsmp;
	/* s0 16 */ DOOR_TYPE_DAT *dtdp;
	/* 0x30(sp) */ int dwn[2];
	/* s2 18 */ int exc_flg;
	/* 0x40(sp) */ float dbrot1;
	/* 0x44(sp) */ float dbrot2;
	/* f12 50 */ float p_rot;
	/* s3 19 */ u_char is_door;
	/* s5 21 */ u_char is_dbl;
	/* s4 20 */ u_char is_kuguri;
	/* a0 4 */ int i;
	/* a2 6 */ int j;
	/* s0 16 */ u_char ret_flg;
}

/* 001c1928 00000350 */ static int GetDoorBaseRot(/* a0 4 */ DOJ_SQUARE_MTN *dsmp, /* s1 17 */ float *dbrot1, /* s2 18 */ float *dbrot2, /* a3 7 */ u_char is_dbl, /* t0 8 */ u_char is_door) {
	/* 0x0(sp) */ sceVu0FVECTOR dbase1;
	/* 0x10(sp) */ sceVu0FVECTOR dbase2;
	/* 0x20(sp) */ int dwn[2];
}

/* 001c1c78 00000244 */ static void DoorOpenCheckSquareArea(/* 0x0(sp) */ DOJ_SQUARE_MTN *dsmp, /* 0x4(sp) */ u_char stat_chk, /* 0x8(sp) */ u_char hs_chk) {
	/* s4 20 */ int *ddp;
	/* v0 2 */ int *dhp;
	/* v0 2 */ int *dsp;
	/* s0 16 */ u_char *rdp;
	/* s0 16 */ u_char *stp;
	/* s2 18 */ int i;
	/* s1 17 */ int j;
	/* s6 22 */ int dwrk_pos;
	/* 0xc(sp) */ u_short pos_x;
	/* 0x10(sp) */ u_short pos_y;
	/* 0x14(sp) */ u_char dr_num;
	/* s5 21 */ u_char ds_num;
}

/* 001c1ec0 000000f0 */ static u_char DoorOpenSttsPermissionCheck(/* a0 4 */ int dwrk_pos, /* a1 5 */ u_char stat_chk) {}
/* 001c1fb0 00000030 */ static void DoorInitDSM(/* a0 4 */ DOJ_SQUARE_MTN *dsmp) {}
/* 001c1fe0 00000090 */ static void DoorSetDSM(/* a0 4 */ DOJ_SQUARE_MTN *dsmp, /* a1 5 */ int dwrk_no, /* a2 6 */ u_char type, /* a3 7 */ u_char sq_no) {}
/* 001c2070 0000004c */ static u_char DoorGetOpenSquareNo(/* a0 4 */ DOJ_SQUARE_MTN *dsmp) {}
/* 001c20c0 00000048 */ int DoorKeyLock(/* a0 4 */ u_short door_id) {}
/* 001c2108 00000020 */ int DoorKeyLockOnly(/* a0 4 */ u_short door_id) {}
/* 001c2128 00000048 */ int DoorKeyUnlock(/* a0 4 */ u_short door_id) {}
/* 001c2170 00000020 */ int DoorKeyUnlockOnly(/* a0 4 */ u_short door_id) {}

/* 001c2190 00000088 */ static int DoorLockChange(/* s0 16 */ u_short door_id, /* a1 5 */ u_char lock) {
	/* a2 6 */ int i;
}

/* 001c2218 00000144 */ int DoorSttsChange(/* s0 16 */ u_short door_id, /* s1 17 */ u_char stts) {
	/* a2 6 */ int i;
	/* a1 5 */ int dwrk_no;
}

/* 001c2360 00000680 */ u_char DoorHitCheck(/* 0x60(sp) */ u_char *dx_max, /* 0x64(sp) */ u_char *dz_max, /* fp 30 */ float *dst, /* s0 16 */ float *ppos, /* 0x68(sp) */ u_char div) {
	/* 0x10(sp) */ sceVu0FVECTOR v0;
	/* 0x20(sp) */ sceVu0FVECTOR v1;
	/* 0x30(sp) */ sceVu0FVECTOR v2;
	/* 0x40(sp) */ sceVu0FVECTOR v3;
	/* 0x50(sp) */ sceVu0FVECTOR pos;
	/* 0x6c(sp) */ DOOR_TYPE_DAT *dtdp;
	/* v0 2 */ int *ddp;
	/* a3 7 */ int *dhp;
	/* s2 18 */ int *dsp;
	/* 0x70(sp) */ u_char *rdp;
	/* s3 19 */ u_char *stp;
	/* 0x74(sp) */ int i;
	/* s1 17 */ int j;
	/* s0 16 */ int k;
	/* f23 61 */ float mv_x;
	/* f21 59 */ float mv_z;
	/* f20 58 */ float sa;
	/* f22 60 */ float sb;
	/* f0 38 */ float p_rot;
	/* s5 21 */ u_char div_x;
	/* s7 23 */ u_char div_z;
	/* 0x78(sp) */ u_char dr_num;
	/* t2 10 */ u_short dr_type;
}

/* 001c29e0 00000314 */ u_char DoorHitCheck2(/* s7 23 */ u_short pos_x, /* s6 22 */ u_short pos_y, /* a2 6 */ u_char room_id) {
	/* s0 16 */ DOOR_TYPE_DAT *dtdp;
	/* 0x10(sp) */ sceVu0FVECTOR v0;
	/* 0x20(sp) */ sceVu0FVECTOR v1;
	/* 0x30(sp) */ sceVu0FVECTOR v2;
	/* 0x40(sp) */ sceVu0FVECTOR v3;
	/* s4 20 */ DOOR_WRK *dwp;
	/* v0 2 */ int *ddp;
	/* a2 6 */ int *dhp;
	/* v1 3 */ int *dsp;
	/* s5 21 */ u_char *rdp;
	/* 0x50(sp) */ int i;
	/* fp 30 */ int j;
	/* 0x54(sp) */ u_char dr_num;
}

/* 001c2cf8 000003c0 */ u_char DoorCoverCheck(/* s6 22 */ u_short pos_x, /* 0x50(sp) */ short int pos_y, /* s5 21 */ u_short pos_z, /* a3 7 */ u_char room_id) {
	/* 0x54(sp) */ DOOR_TYPE_DAT *dtdp;
	/* v1 3 */ int *dsp;
	/* v0 2 */ int *ddp;
	/* a2 6 */ int *dhp;
	/* s4 20 */ u_char *rdp;
	/* 0x10(sp) */ sceVu0FVECTOR v0;
	/* 0x20(sp) */ sceVu0FVECTOR v1;
	/* 0x30(sp) */ sceVu0FVECTOR v2;
	/* 0x40(sp) */ sceVu0FVECTOR v3;
	/* fp 30 */ int i;
	/* s7 23 */ int j;
	/* a1 5 */ int k;
	/* t1 9 */ u_short count;
	/* 0x58(sp) */ u_char dr_num;
	/* t2 10 */ u_char dr_type;
	/* s3 19 */ u_char hit_flg;
}

/* 001c30b8 00000258 */ static void GetFusumaHitVertex(/* 0x60(sp) */ float *axis, /* fp 30 */ float *v0, /* s7 23 */ float *v1, /* s6 22 */ float *v2, /* s5 21 */ float *v3, /* f20 58 */ float pre_rot, /* t1 9 */ u_short count, /* t2 10 */ u_short type) {
	/* 0x0(sp) */ sceVu0FVECTOR av0;
	/* 0x10(sp) */ sceVu0FVECTOR av1;
	/* 0x20(sp) */ sceVu0FVECTOR av2;
	/* 0x30(sp) */ sceVu0FVECTOR av3;
	/* 0x40(sp) */ sceVu0FVECTOR rot;
	/* 0x50(sp) */ sceVu0FVECTOR add_sld;
	/* v0 2 */ DOOR_TYPE_DAT *dtdp;
	/* t1 9 */ int i;
}

/* 001c3310 000001e0 */ static void GetFusumaHitVertex2(/* fp 30 */ float *axis, /* s7 23 */ float *v0, /* s6 22 */ float *v1, /* s5 21 */ float *v2, /* s4 20 */ float *v3, /* f20 58 */ float pre_rot, /* t1 9 */ u_short count, /* t2 10 */ u_short type, /* t3 11 */ u_char mv) {
	/* 0x0(sp) */ sceVu0FVECTOR av0;
	/* 0x10(sp) */ sceVu0FVECTOR av1;
	/* 0x20(sp) */ sceVu0FVECTOR av2;
	/* 0x30(sp) */ sceVu0FVECTOR av3;
	/* 0x40(sp) */ sceVu0FVECTOR rot;
	/* 0x50(sp) */ sceVu0FVECTOR add_sld;
	/* v1 3 */ int i;
}

/* 001c34f0 00000228 */ static void GetDoorHitVertex(/* fp 30 */ float *axis, /* s7 23 */ float *v0, /* s6 22 */ float *v1, /* s5 21 */ float *v2, /* s4 20 */ float *v3, /* f20 58 */ float pre_rot, /* t1 9 */ u_short count, /* t2 10 */ u_short type) {
	/* 0x0(sp) */ sceVu0FVECTOR av0;
	/* 0x10(sp) */ sceVu0FVECTOR av1;
	/* 0x20(sp) */ sceVu0FVECTOR av2;
	/* 0x30(sp) */ sceVu0FVECTOR av3;
	/* 0x40(sp) */ sceVu0FVECTOR rot;
	/* 0x50(sp) */ sceVu0FVECTOR add_sld;
	/* t1 9 */ int i;
}

/* 001c3718 000001d0 */ static void GetDoorHitVertex2(/* fp 30 */ float *axis, /* s7 23 */ float *v0, /* s6 22 */ float *v1, /* s5 21 */ float *v2, /* s4 20 */ float *v3, /* f20 58 */ float pre_rot, /* t1 9 */ u_short count, /* t2 10 */ u_short type, /* t3 11 */ u_char mv) {
	/* 0x0(sp) */ sceVu0FVECTOR av0;
	/* 0x10(sp) */ sceVu0FVECTOR av1;
	/* 0x20(sp) */ sceVu0FVECTOR av2;
	/* 0x30(sp) */ sceVu0FVECTOR av3;
	/* 0x40(sp) */ sceVu0FVECTOR rot;
	/* 0x50(sp) */ sceVu0FVECTOR add_sld;
	/* v1 3 */ int i;
}

/* 001c38e8 000000e0 */ static int ChkRotBetween(/* f12 50 */ float sa, /* f13 51 */ float sb, /* f14 52 */ float rot) {}

/* 001c39c8 00000078 */ void DoorDataRenewNow() {
	/* a0 4 */ int i;
}

/* 001c3a40 000000ec */ void DoorFreeFurnWrk(/* a0 4 */ u_char room_id) {
	/* s1 17 */ int i;
}

/* 001c3b30 00000050 */ void DoorJoint2Next() {
	/* a0 4 */ int i;
}

/* 001c3b80 000002dc */ void DoorDataRenewNext(/* 0x0(sp) */ u_char room_id) {
	/* s0 16 */ int *addr_si;
	/* 0x4(sp) */ u_char *addr_uc;
	/* v1 3 */ u_short *dr_tbl;
	/* s2 18 */ int i;
	/* s1 17 */ int j;
	/* s6 22 */ u_char no_use_dw;
	/* s7 23 */ u_char no_use_fw;
	/* 0x8(sp) */ u_char dr_num;
	/* s5 21 */ u_short dr_id;
	/* 0xc(sp) */ u_short dr_no;
	/* a0 4 */ u_short dr_all;
}

/* 001c3e60 000000a4 */ u_char GetNextRIdFromRNoDId(/* a0 4 */ u_char room_no, /* s0 16 */ u_short door_id) {
	/* v1 3 */ int *addr_si;
	/* v1 3 */ u_char *addr_uc;
	/* a2 6 */ int i;
	/* a0 4 */ u_char dr_num;
}

/* 001c3f08 000000dc */ u_char NextRoomRenew() {
	/* v1 3 */ int *addr;
}

/* 001c3fe8 000001b8 */ u_char ChkNextRoomIsInsite() {
	/* 0x0(sp) */ sceVu0FVECTOR dp;
	/* 0x10(sp) */ sceVu0FVECTOR dv;
	/* a2 6 */ short int *addr_ss;
	/* f20 58 */ float drot;
	/* f21 59 */ float dst_min;
	/* f0 38 */ float tmp_dst;
	/* s6 22 */ u_short dst_min_did;
	/* fp 30 */ u_char dst_min_nrid;
	/* s1 17 */ u_char *addr_uc;
	/* s2 18 */ u_char next_rm_id;
	/* s0 16 */ u_short dr_id;
	/* s4 20 */ u_char dr_num;
	/* s3 19 */ u_char i;
	/* s5 21 */ u_char now_room_id;
}

/* 001c41a0 0000002c */ u_char* GetDoorRoomNumP() {
	/* v0 2 */ int *addr;
}

/* 001c41d0 0000003c */ u_char* GetDoorRoomNumPFloor(/* a0 4 */ u_char floor) {
	/* v1 3 */ int *addr;
}

/* 001c4210 0000002c */ static u_short* GetDoorDoorNumP() {
	/* v0 2 */ int *addr;
}

/* 001c4240 0000008c */ u_char* GetDoorRoomConectDataP(/* s0 16 */ u_char room_id) {
	/* a0 4 */ u_char *addr_uc;
	/* v0 2 */ int *addr_si;
	/* a2 6 */ u_char room_num;
	/* v1 3 */ u_char i;
}

/* 001c42d0 00000084 */ static int* GetDoorDataTopP(/* s0 16 */ u_short door_id) {
	/* v1 3 */ int *addr_si;
	/* a0 4 */ u_short *addr_us;
	/* a1 5 */ u_char i;
	/* a3 7 */ u_short door_num;
}

/* 001c4358 00000044 */ static int* GetDoorDataHeader(/* a0 4 */ u_short door_id) {
	/* v1 3 */ int *addr_si;
}

/* 001c43a0 0000030c */ int ChkDoorIsInsite(/* s1 17 */ float *dpos, /* f22 60 */ float dpre_rot, /* a1 5 */ u_short door_id) {
	/* 0x0(sp) */ sceVu0FVECTOR vr;
	/* 0x10(sp) */ sceVu0FVECTOR vp;
	/* 0x20(sp) */ sceVu0FVECTOR r2;
	/* 0x30(sp) */ sceVu0FVECTOR tvp;
	/* 0x40(sp) */ sceVu0FVECTOR dp;
	/* f20 58 */ float rot_center;
	/* f1 39 */ float rot_door;
	/* f21 59 */ float view_rad;
	/* f0 38 */ float dist_obj;
	/* f20 58 */ float cam_rot;
	/* s0 16 */ int ret_val;
	/* s2 18 */ int i;
}

/* 001c46b0 0000028c */ int ChkDoorIsInsite2(/* s0 16 */ float *dpos, /* f23 61 */ float dpre_rot, /* a1 5 */ u_short door_id) {
	/* 0x0(sp) */ sceVu0FVECTOR vr1;
	/* 0x10(sp) */ sceVu0FVECTOR vr2;
	/* 0x20(sp) */ sceVu0FVECTOR vr3;
	/* 0x30(sp) */ sceVu0FVECTOR tvr1;
	/* 0x40(sp) */ sceVu0FVECTOR tvr2;
	/* 0x50(sp) */ sceVu0FVECTOR tvr3;
	/* 0x60(sp) */ sceVu0FVECTOR vp;
	/* 0x70(sp) */ sceVu0FVECTOR tvpb;
	/* 0x80(sp) */ sceVu0FVECTOR vpb;
	/* 0x90(sp) */ sceVu0FVECTOR dp1;
	/* 0xa0(sp) */ sceVu0FVECTOR dp2;
	/* 0xb0(sp) */ sceVu0FVECTOR prot;
	/* 0xc0(sp) */ sceVu0FVECTOR drot;
	/* f21 59 */ float cam_rot;
	/* f20 58 */ float tmp_cos;
	/* f0 38 */ float tmp_sin;
	/* sdata 3570f0 */ static int count;
}

/* 001c4940 00000098 */ int TmpMapHit(/* a0 4 */ u_short door_id) {
	/* 0x0(sp) */ sceVu0FVECTOR fpos;
	/* 0x10(sp) */ sceVu0FVECTOR tpos;
	/* v1 3 */ u_int *addr_ui;
}

/* 001c49d8 000000b4 */ static int ChkDoorIsOpen(/* a0 4 */ u_short door_id) {
	/* v1 3 */ int i;
}

/* 001c4a90 00000068 */ static u_short GetDoorIdFromDoorNo(/* s0 16 */ u_char door_no) {
	/* v0 2 */ u_short *addr_us;
	/* a0 4 */ int i;
	/* a1 5 */ u_short dr_num;
}

/* 001c4af8 000000f8 */ static int GetDoorStts(/* s1 17 */ DOOR_DATA_POP **dppp, /* s0 16 */ u_short door_id, /* a3 7 */ u_char floor) {
	/* t1 9 */ int *addr_si0;
	/* a2 6 */ int *addr_si1;
	/* a3 7 */ u_short *addr_us;
	/* t0 8 */ int i;
	/* v1 3 */ u_short dat_num;
}

/* 001c4bf0 000000e0 */ int GetDoorSttsForMap(/* s0 16 */ DOOR_STTS_MAP *dsmp, /* a1 5 */ u_short door_id, /* a2 6 */ u_char floor) {
	/* 0x0(sp) */ DOOR_DATA_POP *dpp;
}

/* 001c4cd0 000000b8 */ u_short DoorChangeModel(/* a3 7 */ u_short door_id, /* a1 5 */ u_short model_no) {
	/* a2 6 */ DOOR_WRK *dwp;
	/* a1 5 */ int i;
	/* s0 16 */ u_short last_model_no;
}

/* 001c4d88 00000164 */ void DoorDispOnOff(/* t2 10 */ u_short door_id, /* a1 5 */ u_char on_off) {
	/* a1 5 */ DOOR_WRK *dwp;
	/* a2 6 */ int i;
}

/* 001c4ef0 000000ec */ void DoorOpenShiftForce(/* a0 4 */ u_short door_id) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* 0x0(sp) */ sceVu0FVECTOR ref;
	/* v1 3 */ int i;
}

/* 001c4fe0 00000014 */ char TargetDoorKindChk() {
	/* 0x0(sp) */ DOJ_SQUARE_MTN dsmp;
	/* 0x20(sp) */ int dwn[2];
}

/* 001c4ff8 0000018c */ void PlyrPosAdj(/* a0 4 */ u_char mtn_no, /* s4 20 */ u_char mtn_type) {
	/* s3 19 */ DOJ_SQUARE_MTN *dsmtnp;
	/* s2 18 */ DOOR_MTN_DAT *dmotionp;
	/* 0x0(sp) */ float tmp_rot;
	/* 0x4(sp) */ float adj_r;
}

/* 001c5188 0000036c */ void DoorMoveStart(/* 0x0(sp) */ u_char mtn_no, /* 0x4(sp) */ u_char door_close_flg) {
	/* s0 16 */ int i;
	/* s1 17 */ int j;
	/* s4 20 */ AUTO_CLOSE_DOOR_WRK *acp;
	/* t0 8 */ NON_CLOSE_DOOR_WRK *ncp;
	/* s5 21 */ DOOR_MTN_DAT *dmotionp;
	/* s3 19 */ DOJ_SQUARE_MTN *dsmtnp;
}

/* 001c54f8 000001cc */ void OneRoomLoadReq() {
	/* s0 16 */ int i;
	/* a3 7 */ int dr_num;
	/* s5 21 */ int dwrk_no;
	/* s3 19 */ int load_room;
	/* a1 5 */ u_char *addr_uc;
}

/* 001c56c8 00000008 */ void PrintDoorID(/* a0 4 */ int no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/doortype.c
// *****************************************************************************

/* 001c56d0 00000018 */ DOOR_MTN_DAT* GetDoorMtnDat(/* a0 4 */ u_char dtype) {}
/* 001c56e8 00000014 */ DOOR_TYPE_DAT* GetDoorTypeDatP(/* a0 4 */ int no) {}
/* 001c5700 00000038 */ DOOR_TYPE_DAT GetDoorTypeDat(/* a1 5 */ int no) {}
/* 001c5738 0000001c */ u_short GetDoorMotionTblPos(/* a0 4 */ u_char door_motion_dat_no) {}
/* 001c5758 00000028 */ int IsFusumaType(/* a0 4 */ u_char type) {}
/* 001c5780 00000028 */ int IsRotType(/* a0 4 */ u_char type) {}
/* 001c57a8 0000000c */ int IsFusumaAttr(/* a0 4 */ u_short attr) {}
/* 001c57b8 00000040 */ int MotionIsDouble(/* a0 4 */ u_char motion_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/rotd_ctl.c
// *****************************************************************************

/* 001c57f8 00000094 */ int CheckRotDoorOpenStatus(/* s0 16 */ int dwrk_no, /* a1 5 */ u_char type) {
	/* a3 7 */ DOOR_TYPE_DAT *dtdp;
	/* a2 6 */ DOOR_STTS_KEEP *dkeepp;
}

/* 001c5890 00000068 */ void ChangeRotDoorFace(/* a0 4 */ u_short door_id) {
	/* v1 3 */ DOOR_STTS_KEEP *dkeepp;
}

/* 001c58f8 0000016c */ void ChangeRotDoorFaceRoomId(/* s4 20 */ u_short door_id, /* a1 5 */ u_char room_id) {
	/* s0 16 */ DOOR_STTS_KEEP *dkeepp;
	/* s0 16 */ DOOR_WRK *dwp;
	/* s3 19 */ int i;
}

/* 001c5a68 00000080 */ void ChangeRotDoorFace2Room(/* a0 4 */ u_short door_id, /* a1 5 */ u_char room_id) {
	/* v1 3 */ DOOR_WRK *dwp;
	/* v1 3 */ DOOR_STTS_KEEP *dkeepp;
}

/* 001c5ae8 00000184 */ int JudgePlyrRotForRotDoor(/* a0 4 */ int dwrk_no) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* 0x0(sp) */ sceVu0FVECTOR dedge_left;
	/* 0x10(sp) */ sceVu0FVECTOR dedge_right;
	/* f21 59 */ float rd_left;
	/* f20 58 */ float rd_right;
	/* 0x20(sp) */ float p_rot;
}

/* 001c5c70 000000ec */ u_char ChkRotDoorRot(/* a0 4 */ int dwrk_no) {
	/* s0 16 */ DOOR_WRK *dwp;
	/* 0x0(sp) */ sceVu0FVECTOR pvec;
	/* f20 58 */ float drot;
	/* 0x18(sp) */ float prot;
	/* 0x10(sp) */ float dl_limit;
	/* 0x14(sp) */ float dr_limit;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/find_ctl.c
// *****************************************************************************

/* 001c5d60 00000014 */ void InitFindStatus() {}

/* 001c5d78 00000068 */ void FindMapInit() {
	/* v0 2 */ int i;
}

/* 001c5de0 00000264 */ u_char FindMapReqJudge() {
	/* s5 21 */ int i;
	/* s0 16 */ int open;
	/* v0 2 */ int after_no;
	/* 0x0(sp) */ sceVu0FVECTOR fd_pos;
}

/* 001c6048 000000cc */ u_char FindMapCtrl() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_ctl.c
// *****************************************************************************

/* 001c6118 0000001c */ void FurnCtrlMain() {}
/* 001c6138 00000008 */ void InitFurnDispFlg() {}
/* 001c6140 0000002c */ FURN_WRK* FurnGetFurnWrk(/* a0 4 */ u_char fw_no) {}

/* 001c6170 00000054 */ u_char ChkFurnGetAlready(/* a0 4 */ u_short furn_id) {
	/* v1 3 */ FURN_WRK *fwp;
	/* a1 5 */ int i;
}

/* 001c61c8 00000094 */ void FurnSetWrkNoUse(/* s0 16 */ FURN_WRK *fwp, /* a0 4 */ int no) {}

/* 001c6260 000001e0 */ int FurnSetFurnWork(/* s2 18 */ FURN_DATA_POP *fdpp, /* s3 19 */ int fw_no, /* s0 16 */ u_char msn_no, /* s4 20 */ u_char use, /* s5 21 */ u_char room_id) {
	/* s1 17 */ FURN_WRK *fwp;
	/* 0x0(sp) */ F_ACT_WRK fbuf;
	/* v0 2 */ int fact_type;
	/* 0x40(sp) */ float rot;
}

/* 001c6440 00000060 */ int FurnIsPicDispOnly(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}

/* 001c64a0 0000005c */ void FurnAplyAmbient() {
	/* v1 3 */ FURN_WRK *fwp;
	/* a0 4 */ int i;
}

/* 001c6500 0000017c */ int GetRoomFurnID(/* s5 21 */ u_char room_id, /* s0 16 */ u_short *furn_id, /* v1 3 */ u_char msn_no) {
	/* v1 3 */ FURN_DATA_POP *fdpp;
	/* v1 3 */ int *addr_si0;
	/* v1 3 */ int *addr_si1;
	/* v0 2 */ int *addr_si2;
	/* a0 4 */ u_char *addr_uc0;
	/* a3 7 */ u_char *addr_uc1;
	/* s1 17 */ int ret;
	/* a1 5 */ int i;
	/* t0 8 */ int j;
	/* s2 18 */ int k;
	/* a3 7 */ u_char room_num;
}

/* 001c6680 0000001c */ int FurnIsWrkUse(/* a0 4 */ FURN_WRK *fw) {}
/* 001c66a0 0000005c */ int FurnIsSeUse(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}
/* 001c6700 00000028 */ int FurnIsUsable(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}
/* 001c6728 0000002c */ int FurnIsPicDisp(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}
/* 001c6758 00000028 */ int FurnIsDisp(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}
/* 001c6780 00000028 */ int FurnIsHit(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}
/* 001c67a8 0000002c */ void FurnPicExecStart() {}
/* 001c67d8 0000002c */ void FurnPicExecEnd() {}

/* 001c6808 000000a4 */ void FurnPicNoDspOff() {
	/* s0 16 */ FURN_WRK *fwp;
	/* s1 17 */ int i;
	/* v1 3 */ u_int attr;
}

/* 001c68b0 000000ec */ void FurnPicNoDspOn() {
	/* s0 16 */ FURN_WRK *fwp;
	/* s2 18 */ int i;
	/* v1 3 */ u_int attr;
}

/* 001c69a0 000001e4 */ void FurnSortFurnWrk(/* a0 4 */ u_char mode) {
	/* s1 17 */ FURN_WRK *fwp0;
	/* a0 4 */ FURN_WRK *fwp1;
	/* 0x0(sp) */ FURN_WRK fw_tmp;
	/* v1 3 */ DOOR_WRK *dwp;
	/* s0 16 */ int i;
	/* a1 5 */ int j;
	/* a0 4 */ int k;
	/* a2 6 */ int flg;
}

/* 001c6b88 00000048 */ void FurnDataRenewNow() {}

/* 001c6bd0 00000070 */ void FurnFreeFurnWrk(/* a0 4 */ u_char rm_id) {
	/* s1 17 */ int i;
}

/* 001c6c40 000001d8 */ void FurnDataInit() {
	/* s1 17 */ FURN_DATA_POP *fdpp;
	/* s0 16 */ int i;
	/* s3 19 */ int *addr_si;
	/* v0 2 */ int *addr_fdt;
	/* s2 18 */ u_char *r_id_p;
	/* a1 5 */ u_char rm_num;
	/* s6 22 */ u_char dt_num;
	/* s4 20 */ u_char no_use_fw;
}

/* 001c6e18 000001d8 */ void FurnDataRenewNext(/* a1 5 */ u_char room_id) {
	/* s2 18 */ FURN_DATA_POP *fdpp;
	/* s3 19 */ int *addr_si;
	/* v0 2 */ int *addr_fdt;
	/* s1 17 */ u_char *r_id_p;
	/* s0 16 */ int i;
	/* a0 4 */ u_char rm_num;
	/* s6 22 */ u_char dt_num;
	/* s4 20 */ u_char no_use_fw;
}

/* 001c6ff0 000000c8 */ void FurnPicDispOn() {
	/* s0 16 */ FURN_WRK *fwp0;
	/* s1 17 */ int i;
	/* v0 2 */ u_int attr;
}

/* 001c70b8 000000a4 */ void FurnPicDispOff() {
	/* s0 16 */ FURN_WRK *fwp0;
	/* s1 17 */ int i;
	/* v0 2 */ u_int attr;
}

/* 001c7160 00000014 */ void ClearFurnAttrFlg() {}

/* 001c7178 00000190 */ void InitFurnAttrFlg() {
	/* v0 2 */ int addr_map;
	/* t4 12 */ int *addr_si0;
	/* t1 9 */ int *addr_si1;
	/* v0 2 */ int *addr_si2;
	/* a0 4 */ int i;
	/* a3 7 */ int j;
	/* t6 14 */ u_char room_num;
	/* t2 10 */ u_char dat_num;
	/* a1 5 */ int k;
}

/* 001c7308 000001e0 */ void SetFurnAttrEve(/* a0 4 */ u_short id, /* s2 18 */ u_short flg, /* a2 6 */ int on_flg) {
	/* s0 16 */ FURN_WRK *fwp;
	/* s3 19 */ int i;
	/* s1 17 */ int j;
	/* a1 5 */ int on;
	/* s5 21 */ u_int mask;
	/* v0 2 */ u_int checker;
	/* s4 20 */ u_int furn_flg_bk;
}

/* 001c74e8 00000034 */ u_int GetFurnAttrF(/* a0 4 */ FURN_WRK *fwp, /* a1 5 */ u_char msn_no) {}
/* 001c7520 0000002c */ u_int GetFurnAttr(/* a0 4 */ u_short id, /* a1 5 */ u_char msn_no) {}

/* 001c7550 000004c8 */ u_char FurnHitCheck(/* 0x0(sp) */ u_char *dx_max, /* 0x4(sp) */ u_char *dz_max, /* s7 23 */ float *pos, /* 0x8(sp) */ float *dst, /* 0xc(sp) */ u_char div, /* t1 9 */ u_char room) {
	/* s1 17 */ int *addr;
	/* 0x10(sp) */ int *addr_bak;
	/* 0x14(sp) */ int *addr_bak2;
	/* s0 16 */ FURN_DATA_POP *fedp;
	/* s4 20 */ u_char *sq_typep;
	/* s2 18 */ int i;
	/* s3 19 */ int j;
	/* s2 18 */ int k;
	/* 0x18(sp) */ u_char dt_num;
	/* 0x1c(sp) */ u_char sq_num;
	/* v1 3 */ u_char rm_no;
	/* s6 22 */ u_char div_x;
	/* 0x20(sp) */ u_char div_z;
}

/* 001c7a18 00000180 */ u_char FurnHitCheck2(/* 0x0(sp) */ u_short pos_x, /* 0x4(sp) */ u_short pos_y, /* a2 6 */ u_char room_id) {
	/* s0 16 */ FURN_DATA_POP *fedp;
	/* s1 17 */ int *addr_si;
	/* fp 30 */ int *addr_bak_si;
	/* s6 22 */ int *addr_bak2_si;
	/* s2 18 */ u_char *sq_typep;
	/* s5 21 */ int i;
	/* s3 19 */ int j;
	/* v1 3 */ u_char room_no;
	/* s7 23 */ u_char dt_num;
	/* s4 20 */ u_char sq_num;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_dat.c
// *****************************************************************************

/* 001c7b98 0000001c */ FURN_DAT* GetFurnDatP(/* a0 4 */ u_short furn_id) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_eff.c
// *****************************************************************************

/* 001c7bb8 000001c4 */ void FurnEfctSet(/* s3 19 */ FURN_WRK *fwp) {
	/* s0 16 */ float *pos_top;
	/* 0x20(sp) */ int fewrk_no;
}

/* 001c7d80 0000007c */ void FurnEfctFree(/* s0 16 */ FURN_WRK *fwp) {}
/* 001c7e00 00000024 */ static void FurnEfctSetUse(/* a0 4 */ FURN_WRK *fwp, /* a1 5 */ float *pos, /* a2 6 */ int fewrk_no) {}

/* 001c7e28 0000005c */ static void FurnEfctSetPos0(/* a0 4 */ FURN_WRK *fwp, /* a1 5 */ float *pos) {
	/* v0 2 */ FURN_EFCT *fep;
}

/* 001c7e88 00000044 */ static void FurnEfctSetPos1(/* a0 4 */ FURN_WRK *fwp, /* a1 5 */ float *pos) {
	/* v0 2 */ FURN_EFCT *fep;
}

/* 001c7ed0 00000054 */ static void FurnEfctSetRot0(/* a0 4 */ FURN_WRK *fwp, /* a1 5 */ float *rot) {
	/* v0 2 */ FURN_EFCT *fep;
}

/* 001c7f28 00000038 */ static int FurnEfctGetFefct() {
	/* a0 4 */ FURN_EFCT *fep;
	/* v1 3 */ int i;
}

/* 001c7f60 00000028 */ static void FurnEfctFreeFefct(/* a0 4 */ int num) {}

/* 001c7f88 000001c0 */ void FurnHintDeformCtrl() {
	/* s2 18 */ FURN_WRK *fwp;
	/* f12 50 */ float sclx;
	/* f20 58 */ float scly;
	/* 0x30(sp) */ u_int fsta;
	/* s4 20 */ int i;
	/* bss 402770 */ static sceVu0FVECTOR ep[10];
	/* sdata 3570f8 */ static float spd;
	/* sdata 3570fc */ static float rate;
	/* sdata 357100 */ static float trate;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/item_ctl.c
// *****************************************************************************

/* 001c8148 00000068 */ void MapItemInit() {}
/* 001c81b0 00000230 */ void MissionStartMapItemInit(/* a3 7 */ int msn_no) {}

/* 001c83e0 000000e8 */ void FileDateInit() {
	/* a1 5 */ int i;
}

/* 001c84c8 000000ac */ int ItemGetMain() {
	/* a2 6 */ int get_item;
}

/* 001c8578 00000048 */ void ItemCtrl() {}

/* 001c85c0 00000064 */ void ItemDispCtrl() {
	/* s1 17 */ int i;
}

/* 001c8628 00000294 */ void SetItemDispData(/* t4 12 */ u_char id) {
	/* t2 10 */ int i;
	/* t4 12 */ int j;
	/* t5 13 */ int dsp_no;
}

/* 001c88c0 00000034 */ void ItemDispDataRenew() {
	/* s0 16 */ int i;
}

/* 001c88f8 000001b4 */ int GetMapItemJudge() {
	/* s5 21 */ int i;
	/* s4 20 */ int j;
}

/* 001c8ab0 000001b4 */ void GetMapItem(/* s1 17 */ u_short get_no) {}
/* 001c8c68 00000008 */ void ItemAppearCtrl() {}

/* 001c8c70 00000038 */ int ItemGetContinueJudge() {
	/* a0 4 */ int get_item;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/map_htck.c
// *****************************************************************************

/* 001c8ca8 000001b8 */ u_char PosInAreaJudgeSub(/* t0 8 */ int *addr, /* t1 9 */ u_short pos_x, /* t2 10 */ u_short pos_y, /* a3 7 */ u_char type) {}
/* 001c8e60 00000024 */ void Get2DLinearConstFromPos(/* a0 4 */ float *a, /* a1 5 */ float *b, /* a2 6 */ float *c, /* f12 50 */ float x0, /* f13 51 */ float y0, /* f14 52 */ float x1, /* f15 53 */ float y1) {}

/* 001c8e88 00000068 */ int Get2DLinearCrossPoint(/* a0 4 */ float *cpx, /* a1 5 */ float *cpy, /* f4 42 */ float a0, /* f13 51 */ float b0, /* f14 52 */ float c0, /* f15 53 */ float a1, /* f16 54 */ float b1, /* f17 55 */ float c1) {
	/* f12 50 */ float mother;
}

/* 001c8ef0 00000134 */ int ChkLineCross(/* f26 64 */ float x0, /* f27 65 */ float y0, /* f24 62 */ float x1, /* f25 63 */ float y1, /* f20 58 */ float x2, /* f21 59 */ float y2, /* f22 60 */ float x3, /* f23 61 */ float y3) {
	/* 0x0(sp) */ float a0;
	/* 0x4(sp) */ float b0;
	/* 0x8(sp) */ float c0;
	/* 0xc(sp) */ float a1;
	/* 0x10(sp) */ float b1;
	/* 0x14(sp) */ float c1;
	/* f0 38 */ float d;
}

/* 001c9028 000001f0 */ int ChkInsideBox(/* f20 58 */ float cpx, /* f21 59 */ float cpy, /* f24 62 */ float x0, /* f25 63 */ float y0, /* f26 64 */ float x1, /* f27 65 */ float y1, /* f22 60 */ float x2, /* f23 61 */ float y2, /* 0xe0(sp) */ float x3, /* 0xe8(sp) */ float y3) {
	/* f29 67 */ float x3;
	/* f28 66 */ float y3;
	/* 0x0(sp) */ float a0;
	/* 0x4(sp) */ float b0;
	/* 0x8(sp) */ float c0;
	/* 0xc(sp) */ float a1;
	/* 0x10(sp) */ float b1;
	/* 0x14(sp) */ float c1;
	/* f1 39 */ float d;
}

/* 001c9218 00000290 */ u_char HitChkSegment2All(/* s7 23 */ float *f, /* a1 5 */ float *t, /* f20 58 */ float deg) {
	/* 0x0(sp) */ sceVu0FVECTOR seg;
	/* 0x10(sp) */ sceVu0FVECTOR chk;
	/* f21 59 */ float ft;
	/* fp 30 */ int i;
	/* s0 16 */ int j;
	/* s4 20 */ u_short cmp_x;
	/* s6 22 */ u_short cmp_y;
	/* s5 21 */ u_short cmp_z;
	/* s1 17 */ u_char room_id;
	/* s2 18 */ u_char room_no;
	/* s3 19 */ u_char tmp_hit_num;
}

/* 001c94a8 00000354 */ u_char HitChkSegment2All2D(/* fp 30 */ float *f, /* a1 5 */ float *t, /* f20 58 */ float deg) {
	/* 0x0(sp) */ sceVu0FVECTOR seg;
	/* 0x10(sp) */ sceVu0FVECTOR chk;
	/* f21 59 */ float ft;
	/* 0x20(sp) */ int i;
	/* s0 16 */ int j;
	/* s3 19 */ u_short cmp_x;
	/* s6 22 */ u_short cmp_y;
	/* s4 20 */ u_short cmp_z;
	/* s1 17 */ u_char room_id;
	/* s2 18 */ u_char room_no;
}

/* 001c9800 00000154 */ u_char FurnCoverCheck(/* 0x0(sp) */ u_short pos_x, /* s6 22 */ short int pos_y, /* fp 30 */ u_short pos_z, /* v1 3 */ u_char room_no) {
	/* s1 17 */ u_int *addr;
	/* s5 21 */ u_int *addr_bak;
	/* s2 18 */ FURN_DATA_POP *fedp;
	/* s3 19 */ int i;
	/* s4 20 */ u_char dt_num;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/furn_spe.c
// *****************************************************************************

/* 001c9958 00000008 */ void NewgameFActInit() {}

/* 001c9960 00000034 */ void InitFurnDatSave() {
	/* v1 3 */ int i;
}

/* 001c9998 00000050 */ void PreGameInitFActWrk() {}
/* 001c99e8 00000048 */ void InitFActWrk() {}
/* 001c9a30 0000008c */ void FActWaitExecJob(/* s2 18 */ FURN_ACT_WRK *fawp) {}
/* 001c9ac0 000000ec */ void FActWrkMain() {}

/* 001c9bb0 000000bc */ int SearchRegisterFW2FAW(/* s0 16 */ u_short fw_id, /* s2 18 */ u_short fact_no) {
	/* s1 17 */ int vacant_id;
	/* a0 4 */ int temp_id;
}

/* 001c9c70 00000084 */ void ExchangeFAWFWID(/* s2 18 */ int fw_id1, /* s1 17 */ int fw_id2) {
	/* s0 16 */ int faw_id1;
	/* a0 4 */ int faw_id2;
}

/* 001c9cf8 00000040 */ void FSpeFinishFlgOff(/* a0 4 */ u_short furn_id) {
	/* v0 2 */ int id;
}

/* 001c9d38 00000028 */ void FurnActOffEve(/* a0 4 */ u_short furn_id) {}
/* 001c9d60 0000002c */ void FurnActOnEve(/* a0 4 */ u_short furn_id) {}

/* 001c9d90 00000044 */ int SearchFActWrkIDFromFurnID(/* a0 4 */ u_short furn_id) {
	/* v1 3 */ int i;
}

/* 001c9dd8 00000040 */ void AddRotVector(/* s0 16 */ float *rot, /* a1 5 */ float *rot1) {}
/* 001c9e18 000000d0 */ void FActCheckExec(/* s0 16 */ FURN_ACT_WRK *fawp) {}
/* 001c9ee8 0000009c */ void FreeFActFwrk(/* s0 16 */ FURN_ACT_WRK *fawp) {}

/* 001c9f88 00000040 */ int SearchFurnWrkIDFromFurnID(/* a0 4 */ u_short furn_id) {
	/* v1 3 */ int i;
}

/* 001c9fc8 00000040 */ void FreeFActFwrkNo(/* a0 4 */ int fw_id) {
	/* v1 3 */ int id;
}

/* 001ca008 00000154 */ u_char* ForwardActionPointer(/* a1 5 */ u_char *pointer) {}
/* 001ca160 00000080 */ u_char* ForwardConditionPointer(/* a2 6 */ u_char *cp, /* a1 5 */ u_char count) {}

/* 001ca1e0 00000214 */ int SetFurnActData(/* s1 17 */ FURN_ACT_WRK *fawp, /* s3 19 */ u_char fact_no) {
	/* s0 16 */ int i;
	/* a0 4 */ u_short header;
	/* v1 3 */ u_short temp;
	/* a1 5 */ u_char *pointer;
}

/* 001ca3f8 000000b0 */ void RegisterFW2FAW(/* a0 4 */ u_short fw_id, /* s0 16 */ FURN_ACT_WRK *fawp, /* a2 6 */ u_short fact_no) {}

/* 001ca4a8 00000038 */ int GetOpenedFAWID() {
	/* v1 3 */ int i;
}

/* 001ca4e0 00000044 */ int SearchFActWrkIDFromFWID(/* a0 4 */ u_short fw_id) {
	/* v1 3 */ int i;
}

/* 001ca528 000004ac */ void FActStopAction(/* s3 19 */ FURN_ACT_WRK *fawp, /* a1 5 */ void *point) {
	/* a2 6 */ u_short *sp;
	/* s0 16 */ u_char *pointer;
	/* a1 5 */ u_char *printer;
	/* s1 17 */ int i;
	/* 0x0(sp) */ u_short furn_id[4];
}

/* 001ca9d8 00000b74 */ void FActExecOccur(/* s7 23 */ FURN_ACT_WRK *fawp, /* a1 5 */ void *point) {
	/* a2 6 */ u_short *sp;
	/* s5 21 */ u_char *pointer;
	/* a1 5 */ u_char *printer;
	/* s1 17 */ int i;
	/* 0x20(sp) */ u_short furn_id[4];
	/* v1 3 */ int wrkid;
	/* v1 3 */ u_char no;
	/* f20 58 */ float f1;
	/* 0x30(sp) */ sceVu0FVECTOR temp;
	/* f0 38 */ float f1;
}

/* 001cb550 00000054 */ void FActWait(/* s0 16 */ FURN_ACT_WRK *fawp) {}
/* 001cb5a8 00000038 */ int CompareFloatVal(/* f12 50 */ float a, /* f13 51 */ float b) {}

/* 001cb5e0 00000578 */ int ChkANDCondition(/* s2 18 */ FURN_ACT_WRK *fawp, /* s0 16 */ u_char **cpp, /* s3 19 */ u_char count) {
	/* s1 17 */ int flg;
	/* a3 7 */ u_short *sp;
	/* v0 2 */ int i;
	/* v1 3 */ int j;
}

/* 001cbb58 0000002c */ int FSpeCheckOutOfRoom(/* a0 4 */ u_char room_no) {}

/* 001cbb88 00000094 */ int FACheckCondition(/* s3 19 */ FURN_ACT_WRK *fawp, /* a1 5 */ SPE_CHK_COND *p_con) {
	/* 0x0(sp) */ u_char *cp;
	/* s2 18 */ u_char **cpp;
}

/* 001cbc20 00000144 */ int FACheckDirect(/* s2 18 */ u_short range, /* s1 17 */ u_short obj, /* s3 19 */ float *fpos) {}

/* 001cbd68 000000d8 */ int RotCheck(/* a0 4 */ float *fpos, /* s1 17 */ MOVE_BOX *mbp, /* a2 6 */ u_short range) {
	/* 0x0(sp) */ sceVu0FVECTOR o2f;
	/* 0x10(sp) */ float rot1;
	/* 0x14(sp) */ float rot2;
}

/* 001cbe40 00000158 */ int FACheckDistNear(/* s1 17 */ u_short obj, /* f20 58 */ float dist, /* s2 18 */ float *fpos) {}

/* 001cbf98 000000bc */ int CheckSquareAreaOne(/* a0 4 */ float *pos, /* s0 16 */ float *square_center, /* s1 17 */ float *mat[4], /* f21 59 */ float tate, /* f20 58 */ float yoko) {
	/* 0x0(sp) */ sceVu0FVECTOR obj_pos;
}

/* 001cc058 00000158 */ int FACheckCircleArea(/* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z, /* f20 58 */ float dist, /* s1 17 */ u_short obj) {
	/* 0x0(sp) */ sceVu0FVECTOR obj_pos;
	/* 0x10(sp) */ sceVu0FVECTOR temp;
	/* 0x20(sp) */ sceVu0FMATRIX mat;
}

/* 001cc1b0 000001fc */ int FACheckSquareArea(/* f22 60 */ float x, /* f23 61 */ float y, /* f21 59 */ float z, /* f25 63 */ float tate, /* f24 62 */ float yoko, /* f17 55 */ float y_rot, /* s1 17 */ u_short obj) {
	/* 0x0(sp) */ sceVu0FVECTOR obj_pos;
	/* 0x10(sp) */ sceVu0FVECTOR temp;
	/* 0x20(sp) */ sceVu0FMATRIX mat;
}

/* 001cc3b0 00000158 */ int FACheckDistFar(/* s1 17 */ u_short obj, /* f20 58 */ float dist, /* s2 18 */ float *fpos) {}
/* 001cc508 00000008 */ int FACheckStatus(/* a0 4 */ u_short a, /* a1 5 */ u_short b) {}
/* 001cc510 00000040 */ int SpeedLessOrVecF(/* f20 58 */ float s_speed, /* a0 4 */ float *vec) {}

/* 001cc550 00000054 */ int SpeedLessOrVecVec(/* a0 4 */ float *vec1, /* s0 16 */ float *vec2) {
	/* f20 58 */ float f1;
}

/* 001cc5a8 0000012c */ int FACheckSpeedLess(/* f20 58 */ float speed, /* s1 17 */ u_short obj) {}
/* 001cc6d8 00000140 */ TextureAnimation* FSpeTexAnmCtrl(/* t0 8 */ TextureAnimation *pta, /* a2 6 */ FSPE_TEXTURE_ANM *ta) {}
/* 001cc818 00000008 */ void FSpeTexAnmStop(/* a0 4 */ FURN_ACT_WRK *fawp) {}

/* 001cc820 0000010c */ void FSpeTexAnmExe(/* a0 4 */ u_char modelnum, /* s1 17 */ FURN_ACT_WRK *fawp, /* s0 16 */ u_char regmode, /* a3 7 */ u_char looptype, /* t0 8 */ u_char speed) {
	/* sdata 357110 */ static float trans_rate;
	/* sdata 357114 */ static float trans_added;
	/* s0 16 */ SgMaterial *matp;
	/* s1 17 */ u_int *phead;
	/* s2 18 */ u_int *tmpModelp;
}

/* 001cc930 00000048 */ void FSpeDelPointLight(/* s0 16 */ FURN_ACT_WRK *fawp) {}

/* 001cc978 000000c8 */ void FSpeSetPointLight(/* s0 16 */ FURN_ACT_WRK *fawp, /* f20 58 */ float r, /* f21 59 */ float g, /* f22 60 */ float b) {
	/* s1 17 */ sceVu0FVECTOR *pl_pos;
	/* sdata 357120 */ static float power;
}

/* 001cca40 0000004c */ float GetRandVal(/* f20 58 */ float min, /* f13 51 */ float max) {
	/* f21 59 */ float width;
}

/* 001cca90 0000005c */ void StopTrembleH(/* a0 4 */ FURN_ACT_WRK *fawp, /* a1 5 */ signed char num) {}

/* 001ccaf0 0000003c */ signed char GetVacantTrembleHWrk() {
	/* v1 3 */ int i;
}

/* 001ccb30 00000158 */ signed char CallTrembleH(/* s4 20 */ FURN_ACT_WRK *fawp) {
	/* s5 21 */ signed char i;
	/* s0 16 */ TREMBLE_H_WRK *wrk;
}

/* 001ccc88 00000214 */ void TrembleHCtrl() {
	/* s2 18 */ int i;
	/* f0 38 */ float width;
	/* f2 40 */ float temp;
	/* 0x0(sp) */ sceVu0FVECTOR tempv;
	/* s0 16 */ TREMBLE_H_WRK *wrk;
}

/* 001ccea0 0000014c */ void FSpeTrembleCtrl(/* s0 16 */ FURN_ACT_WRK *fawp) {
	/* f0 38 */ float temp;
}

/* 001ccff0 000000dc */ void CallThunderLight(/* f20 58 */ float x, /* f21 59 */ float y, /* f22 60 */ float z, /* a0 4 */ u_char delay, /* a1 5 */ sceVu0FVECTOR *pos, /* a2 6 */ u_char room_no) {}

/* 001cd0d0 00000070 */ void SetThunderLightEach(/* s0 16 */ PARARELL_WRK *par, /* a1 5 */ int *num) {
	/* a0 4 */ u_char pn;
}

/* 001cd140 0000007c */ void SetThunderLight() {}

/* 001cd1c0 00000050 */ void InitThunderLight() {
	/* v1 3 */ int i;
}

/* 001cd210 00000238 */ void ThunderLight() {}
/* 001cd448 0000005c */ u_char* CallLampTremble(/* s0 16 */ u_char *pointer) {}
/* 001cd4a8 00000054 */ u_char* StopLampTremble(/* s0 16 */ u_char *pointer) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/fsla_main.c
// *****************************************************************************

/* 001cd500 00000094 */ FSPE_LIGHT_ANM* SetRandLightAnimEach(/* s1 17 */ FSPE_LIGHT_ANM **ap) {
	/* v1 3 */ int i;
	/* s0 16 */ int num;
	/* v1 3 */ FSPE_LIGHT_ANM **temp;
}

/* 001cd598 000000b4 */ void SetRandLightAnim(/* s2 18 */ FSPE_LIGHT_WRK *lw) {
	/* s0 16 */ int num;
	/* v1 3 */ FSPE_LIGHT_ANM **temp;
	/* s1 17 */ FSPE_LIGHT_ANM **save;
}

/* 001cd650 0000003c */ signed char GetOpenPointLightWrkID() {
	/* v1 3 */ int i;
}

/* 001cd690 0000003c */ signed char GetVacantPLW() {
	/* v1 3 */ int i;
}

/* 001cd6d0 0000001c */ void DeletePointLight(/* a0 4 */ signed char num) {}

/* 001cd6f0 00000080 */ signed char AddNewPointLight(/* s1 17 */ sceVu0FVECTOR *pos, /* s2 18 */ sceVu0FVECTOR *diffuse, /* s3 19 */ float *power, /* s0 16 */ u_char room_id) {
	/* a1 5 */ signed char i;
	/* v1 3 */ POINT_LIGHT_WRK *plw;
}

/* 001cd770 000000c0 */ float SetPLW2PW(/* s1 17 */ POINT_WRK *pw, /* s0 16 */ POINT_LIGHT_WRK *plw, /* f12 50 */ float obj_dist, /* f22 60 */ float compare) {
	/* f21 59 */ float power;
	/* f20 58 */ float multi;
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 001cd830 000001e8 */ int SetPointLightPack(/* 0x10(sp) */ float *obj_pos, /* s7 23 */ POINT_WRK *ppw, /* s6 22 */ u_char start_num) {
	/* s0 16 */ int i;
	/* a0 4 */ int j;
	/* s3 19 */ POINT_LIGHT_WRK *plw;
	/* 0x0(sp) */ float power[3];
	/* f1 39 */ float temppri;
	/* f12 50 */ float obj_dist;
	/* a1 5 */ u_char save_num;
	/* s4 20 */ u_char registered_num;
	/* s5 21 */ u_char lm_num;
}

/* 001cda18 00000010 */ void FinishCandle(/* v0 2 */ FSPE_LIGHT_WRK *lw) {}

/* 001cda28 0000006c */ void CandleAnmStop(/* a0 4 */ signed char lw_id) {
	/* a1 5 */ FSPE_LIGHT_WRK *lw;
}

/* 001cda98 00000124 */ signed char CandleAnmOcc(/* s6 22 */ sceVu0FVECTOR *pos, /* f20 58 */ float r, /* f21 59 */ float g, /* f22 60 */ float b, /* s4 20 */ u_char in_pat, /* s3 19 */ u_char pat, /* s2 18 */ u_char out_pat, /* s5 21 */ u_char room_id) {
	/* s1 17 */ signed char id;
	/* s0 16 */ FSPE_LIGHT_WRK *lw;
}

/* 001cdbc0 00000038 */ void PointLightCtrl() {}

/* 001cdbf8 000000f0 */ void CandleAnmCtrl() {
	/* s1 17 */ int j;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/fspe_acs.c
// *****************************************************************************

/* 001cdce8 00000064 */ void FSpeMapDataMapping() {
	/* a1 5 */ u_int *addr_top;
	/* a0 4 */ u_int *addr_data;
	/* a1 5 */ int i;
	/* v0 2 */ u_short data_num;
}

/* 001cdd50 00000038 */ u_char* FSpeGetTopAddr(/* a0 4 */ u_short fact_no) {
	/* v0 2 */ u_int *addr;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/adj_valg.c
// *****************************************************************************

/* 001cdd88 00000044 */ void InitAdjValGWrk() {}
/* 001cddd0 0000000c */ void InitAdjValGWrkOne(/* a0 4 */ ADJ_VALG_WRK *avp) {}
/* 001cdde0 00000048 */ ADJ_VALG_WRK* SearchVacantAdjValGWrk() {}

/* 001cde28 0000004c */ void ReleaseAdjValGWrkVec(/* v1 3 */ float *ori) {
	/* a0 4 */ ADJ_VALG_WRK *avp;
}

/* 001cde78 0000003c */ void ReleaseAdjValG(/* a1 5 */ ADJ_VALG_WRK *avp) {}

/* 001cdeb8 0000004c */ void SameObjectWrkDelete(/* v1 3 */ float *ori) {
	/* a0 4 */ ADJ_VALG_WRK *avp;
}

/* 001cdf08 0000011c */ void RegisterAdjValG(/* s2 18 */ float *ori, /* s3 19 */ float *des, /* s1 17 */ u_int time) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
	/* s0 16 */ ADJ_VALG_WRK *avp;
}

/* 001ce028 00000078 */ void AdjustValueG() {
	/* s0 16 */ ADJ_VALG_WRK *avp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/item.c
// *****************************************************************************

/* 001ce0a0 00000080 */ void NewgameItemInit() {}
/* 001ce120 00000088 */ void NewgameItemInit2() {}

/* 001ce1a8 000000d0 */ void MissionSelectItemInit() {
	/* a1 5 */ int i;
	/* a0 4 */ int j;
	/* 0x0(sp) */ int save_item[10];
	/* t0 8 */ int check_num;
}

/* 001ce278 0000004c */ void MenuItemInit() {}
/* 001ce2c8 00000048 */ void LoadgameMenuItemInit() {}
/* 001ce310 00000064 */ void StartItemModeInit() {}
/* 001ce378 00000038 */ void ItemInitAtMenuOpen() {}

/* 001ce3b0 0000005c */ void FilmPossessionExp() {
	/* a2 6 */ int i;
}

/* 001ce410 00000410 */ void IngameMenuItem() {}
/* 001ce820 0000089c */ void IngameMenuItemUseSlct() {}
/* 001cf0c0 000001f4 */ void IngameMenuItemDisp() {}

/* 001cf2b8 00000128 */ static void ItemUse(/* a3 7 */ u_char item_no) {
	/* a0 4 */ int adpcm_no;
}

/* 001cf3e0 00000094 */ static int IngameMenuItemEventOpenJudge(/* a0 4 */ u_char item_no) {}

/* 001cf478 00000250 */ static void ItemModeInOut() {
	/* s0 16 */ int i;
	/* f5 43 */ float fade_in;
	/* f3 41 */ float fade_out;
}

/* 001cf6c8 0000008c */ static void ItemModeInOut2() {}

/* 001cf758 000007e4 */ void PlayerStatusYW(/* s3 19 */ u_char alpha) {
	/* s2 18 */ u_char bak_alp;
	/* v0 2 */ u_char tmp_alp;
	/* s2 18 */ u_char flr_alp;
}

/* 001cff40 000000cc */ static void GageAnime(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* s0 16 */ u_char alpha) {}

/* 001d0010 000000c8 */ static void PutStsBar(/* a0 4 */ u_char char_label, /* a1 5 */ int rgb, /* s3 19 */ u_char alp, /* f20 58 */ float scl_x) {
	/* s2 18 */ int i;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d00d8 000002c8 */ static void FilmAnime(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* s1 17 */ short int alpha) {
	/* a1 5 */ int i;
}

/* 001d03a0 00000400 */ static void ItemList(/* s0 16 */ short int pos_x, /* s2 18 */ short int pos_y, /* s3 19 */ short int alpha) {
	/* s1 17 */ int i;
	/* f20 58 */ float top_bar;
	/* f25 63 */ float mdl_bar;
	/* f26 64 */ float dwn_bar;
}

/* 001d07a0 000000f0 */ static void CameUp(/* s0 16 */ u_char alp) {}
/* 001d0890 00000190 */ static void PlaySM(/* s0 16 */ u_char alp) {}
/* 001d0a20 0000028c */ static void ItemInTheLenz2D(/* s4 20 */ short int pos_x, /* s5 21 */ short int pos_y, /* s2 18 */ short int alpha) {}

/* 001d0cb0 0000007c */ int LoadItem2D(/* a0 4 */ u_char get_type, /* a3 7 */ u_char get_no) {
	/* a2 6 */ int load_id;
}

/* 001d0d30 00000088 */ u_long VramItem2D(/* a0 4 */ u_char mode, /* a1 5 */ u_char type) {
	/* s0 16 */ u_int offset;
	/* 0x0(sp) */ SPRITE_DATA dmy;
}

/* 001d0db8 00000188 */ char DspItem2D(/* s1 17 */ u_long tex_addr, /* f21 59 */ float pos_x, /* f22 60 */ float pos_y, /* s0 16 */ int rgb, /* f20 58 */ float alp, /* f23 61 */ float scl_x, /* f24 62 */ float scl_y, /* s2 18 */ char pri) {
	/* f2 40 */ float scl_px;
	/* f0 38 */ float scl_py;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d0f40 000000ec */ void PkTm2(/* s0 16 */ u_long tex_addr, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ short int w, /* t0 8 */ short int h, /* t1 9 */ u_char alp, /* s5 21 */ int pri) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d1030 00000374 */ static void MessageWindow(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* a2 6 */ short int alpha) {
	/* f0 38 */ float btn_alp;
}

/* 001d13a8 00000008 */ static void ItemCntInit() {}
/* 001d13b0 00000060 */ static void ItemCntRenew() {}

/* 001d1410 000000bc */ static void GetItemNum() {
	/* a3 7 */ int i;
	/* a2 6 */ int chk;
}

/* 001d14d0 00000338 */ void PutSpriteYW(/* s7 23 */ u_short top_label, /* s6 22 */ u_short end_label, /* f25 63 */ float pos_x, /* f24 62 */ float pos_y, /* f23 61 */ float rot, /* s2 18 */ int rgb, /* f22 60 */ float alp, /* f21 59 */ float scl_x, /* f20 58 */ float scl_y, /* 0x90(sp) */ u_char scl_mode, /* s1 17 */ int pri, /* t1 9 */ u_char by, /* 0x94(sp) */ u_char blnd, /* 0x98(sp) */ u_char z_sw) {
	/* s0 16 */ int i;
	/* f1 39 */ float rot_px;
	/* f0 38 */ float rot_py;
	/* f1 39 */ float scl_px;
	/* f0 38 */ float scl_py;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d1808 0000011c */ static void WipeChange(/* a0 4 */ u_char before_label, /* s0 16 */ u_char after_label, /* f20 58 */ float move_y) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d1928 000002ac */ static void PlusZanzo(/* 0x0(sp) */ u_short top_label, /* fp 30 */ u_short end_label, /* f12 50 */ float pos_x, /* f13 51 */ float pos_y, /* 0x4(sp) */ int rgb, /* f20 58 */ float alp, /* s2 18 */ u_char num, /* t0 8 */ u_char dry, /* t1 9 */ u_char znz_no) {
	/* s0 16 */ int i;
	/* s5 21 */ u_short znz_same;
}

/* 001d1bd8 0000011c */ void FlashStarYW(/* s0 16 */ FLSH_CORE *flsh, /* s2 18 */ u_char flsh_max, /* s1 17 */ u_char flsh_min, /* a3 7 */ u_char flsh_flm, /* t0 8 */ u_char mode) {
	/* f0 38 */ float alpha;
}

/* 001d1cf8 00000024 */ void CLRtoRGB(/* a0 4 */ int *rgb, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b) {}
/* 001d1d20 00000018 */ void RGBtoCLR(/* a0 4 */ int rgb, /* a1 5 */ u_char *r, /* a2 6 */ u_char *g, /* a3 7 */ u_char *b) {}

/* 001d1d38 0000019c */ void PutStringYW(/* s5 21 */ u_char msg_knd, /* s6 22 */ u_char msg_no, /* fp 30 */ short int pos_x, /* s7 23 */ short int pos_y, /* s0 16 */ int rgb, /* t1 9 */ u_char alpha, /* s3 19 */ int pri, /* s4 20 */ u_char type) {
	/* 0x0(sp) */ DISP_STR ds;
	/* 0x40(sp) */ STR_DAT sd;
	/* v1 3 */ int cnt_ofs;
}

/* 001d1ed8 00000014 */ void RstMessageYW() {}

/* 001d1ef0 00000120 */ u_char PutMessageYW(/* s0 16 */ u_char msg_knd, /* s1 17 */ u_char msg_no, /* s4 20 */ short int pos_x, /* s5 21 */ short int pos_y, /* s6 22 */ int rgb, /* s3 19 */ u_char alpha, /* s7 23 */ int pri) {
	/* v1 3 */ u_char all_page;
	/* s2 18 */ u_char rtrn;
}

/* 001d2010 00000030 */ char ChkChrNumYW(/* a0 4 */ u_char msg_knd, /* a1 5 */ u_char msg_no) {}
/* 001d2040 00000028 */ int ChkChrNumUS(/* a0 4 */ u_char msg_knd, /* a1 5 */ u_char msg_no) {}

/* 001d2068 00000090 */ char ChkPageYW(/* a0 4 */ u_char msg_knd, /* a1 5 */ u_char msg_no) {
	/* s2 18 */ u_char *chk_str;
	/* a0 4 */ u_char *nxt_str;
	/* a1 5 */ char page_now;
}

/* 001d20f8 00000180 */ void PutPageYW(/* a0 4 */ u_char msg_knd, /* a1 5 */ u_char msg_no, /* s2 18 */ u_char open_page, /* s4 20 */ short int pos_x, /* s5 21 */ short int pos_y, /* s0 16 */ int rgb, /* s6 22 */ u_char alpha, /* s7 23 */ int pri) {
	/* 0x0(sp) */ DISP_STR ds;
	/* 0x40(sp) */ STR_DAT sd;
	/* a0 4 */ u_char *chk_str;
	/* a2 6 */ char page_now;
}

/* 001d2278 00000180 */ void PutPage2YW(/* a0 4 */ u_char msg_knd, /* a1 5 */ u_char msg_no, /* s2 18 */ u_char open_page, /* s4 20 */ short int pos_x, /* s5 21 */ short int pos_y, /* s0 16 */ int rgb, /* s6 22 */ u_char alpha, /* s7 23 */ int pri) {
	/* 0x0(sp) */ DISP_STR ds;
	/* 0x40(sp) */ STR_DAT sd;
	/* a0 4 */ u_char *chk_str;
	/* a2 6 */ char page_now;
}

/* 001d23f8 00000208 */ void PutNumberYW(/* s6 22 */ u_char font, /* a1 5 */ int num, /* 0x0(sp) */ short int pos_x, /* 0x4(sp) */ short int pos_y, /* f21 59 */ float sx, /* f20 58 */ float sy, /* fp 30 */ int rgb, /* 0x8(sp) */ short int alpha, /* s7 23 */ int pri, /* s4 20 */ int digit, /* 0xd0(sp) */ int mode) {
	/* 0xc(sp) */ u_char mode;
	/* s2 18 */ int i;
	/* s1 17 */ int multi10;
	/* t5 13 */ int multi10_bak;
	/* s3 19 */ int disp_number;
	/* t4 12 */ int disp_digit;
}

/* 001d2600 0000060c */ static void DigiPut01(/* s0 16 */ u_char font, /* s3 19 */ u_char num, /* s1 17 */ u_char no, /* s4 20 */ short int pos_x, /* s2 18 */ short int pos_y, /* f20 58 */ float sx, /* f21 59 */ float sy, /* s6 22 */ int rgb, /* s7 23 */ short int alpha, /* s5 21 */ int pri) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* a2 6 */ u_char r;
	/* a3 7 */ u_char g;
	/* t0 8 */ u_char b;
	/* a1 5 */ short int rot_x;
	/* 0x90(sp) */ u_char fw[14];
	/* 0xa0(sp) */ u_char fh[14];
}

/* 001d2c10 00000220 */ void PolySquareYW(/* f20 58 */ float pos_x, /* f21 59 */ float pos_y, /* a0 4 */ u_short bar_l, /* a1 5 */ u_short bar_h, /* s0 16 */ int rgb, /* f24 62 */ float alp, /* f22 60 */ float scl_x, /* f23 61 */ float scl_y, /* s4 20 */ int pri, /* s6 22 */ u_char blnd, /* s7 23 */ u_char sw_z, /* t2 10 */ short int rz) {
	/* a2 6 */ u_char r;
	/* s0 16 */ u_char g;
	/* t2 10 */ u_char b;
	/* 0x0(sp) */ SQAR_DAT sd;
	/* 0x20(sp) */ DISP_SQAR ds;
	/* a1 5 */ int i;
}

/* 001d2e30 000000e4 */ void YesNoCrslOKR(/* s1 17 */ int pri, /* f21 59 */ float pos_x, /* f22 60 */ float pos_y, /* s0 16 */ int rgb, /* f20 58 */ float alp, /* f23 61 */ float scl) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001d2f18 00000034 */ void XYAdefaultYW(/* a0 4 */ u_char no) {}

/* 001d2f50 000000dc */ void BgFusumaYW(/* s0 16 */ int rgb, /* f23 61 */ float pos_x, /* f24 62 */ float alpha, /* a1 5 */ int pri) {
	/* f21 59 */ float scl_x;
	/* f22 60 */ float scl_y;
}

/* 001d3030 000000c0 */ static void SttsRenew() {}

/* 001d30f0 00000124 */ static void ItmTrFlsh(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* s2 18 */ short int alpha) {
	/* 0x0(sp) */ int rgb;
}

/* 001d3218 000000f0 */ u_int FromPKZ(/* a0 4 */ u_int pkz_addr, /* a1 5 */ u_char pk2_no) {}
/* 001d3308 00000028 */ void DcdCMP2PK2(/* a0 4 */ u_int cmp_addr, /* s0 16 */ u_int tmp_addr) {}

/* 001d3330 000006f8 */ static void YW_DBG() {
	/* v1 3 */ int i;
	/* s2 18 */ u_char spd;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/gameover.c
// *****************************************************************************

/* 001d3a28 00000088 */ void StartGameOver() {}
/* 001d3ab0 00000024 */ void ReturnGameOver() {}
/* 001d3ad8 0000003c */ static void GameOverInit() {}

/* 001d3b18 000003fc */ void GameOverMenuMain() {
	/* a1 5 */ u_char alp_add;
}

/* 001d3f18 00000158 */ static void GameOverMenuDisp(/* a0 4 */ u_char alp) {
	/* s0 16 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/pause.c
// *****************************************************************************

/* 001d4070 00000040 */ void PauseInit() {}
/* 001d40b0 0000053c */ int PauseMain() {}
/* 001d45f0 000000a0 */ void PauseDisp() {}

/* 001d4690 00000310 */ static void PauseDraw(/* s0 16 */ u_char alp) {
	/* s1 17 */ int i;
}

/* 001d49a0 00000070 */ static char CanPauseCHK() {
	/* a1 5 */ char can;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_album.c
// *****************************************************************************

/* 001d4a10 0000006c */ void NewgameMenuAlbumInit() {
	/* v0 2 */ int i;
}

/* 001d4a80 0000006c */ void LoadgameMenuAlbumInit() {
	/* v0 2 */ int i;
}

/* 001d4af0 00000040 */ void StartAlbumModeInit() {}
/* 001d4b30 00000358 */ void IngameMenuAlbum(/* a0 4 */ char is_outgame) {}

/* 001d4e88 000005c8 */ void IngameAlbumAllPad(/* s6 22 */ u_char *csr, /* s7 23 */ u_char *csr_top, /* 0x0(sp) */ u_char *mode) {
	/* s1 17 */ u_char csr_x;
	/* s0 16 */ u_char csr_y;
	/* s4 20 */ u_char max_x;
	/* s2 18 */ u_char max_y;
}

/* 001d5450 000003d0 */ void IngameAlbumLstPad(/* s1 17 */ u_char *csr, /* s0 16 */ u_char *csr_top, /* s5 21 */ u_char *mode) {}
/* 001d5820 0000030c */ void IngameAlbumBigPad(/* s0 16 */ u_char *csr, /* a1 5 */ u_char *csr_top, /* a2 6 */ u_char *mode) {}
/* 001d5b30 00000020 */ static void IngameAlbumMenu(/* a0 4 */ u_char *csr0, /* a1 5 */ u_char *csr1, /* a2 6 */ u_char *pic, /* a3 7 */ u_char *mode, /* t0 8 */ u_char *list_top) {}
/* 001d5b50 00000590 */ static void CmndMenuVrgn(/* s5 21 */ u_char *csr0, /* s3 19 */ u_char *csr1, /* s2 18 */ u_char *pic, /* a3 7 */ u_char *mode, /* s4 20 */ u_char *list_top) {}
/* 001d60e0 000009ac */ static void CmndMenuClrB(/* s3 19 */ u_char *csr0, /* s1 17 */ u_char *csr1, /* s5 21 */ u_char *pic, /* s6 22 */ u_char *mode, /* s4 20 */ u_char *list_top) {}

/* 001d6a90 00000440 */ static void IngameAlbumMenuDsp(/* s2 18 */ u_char *csr0, /* s3 19 */ u_char *csr1, /* s0 16 */ u_char *pic, /* s4 20 */ u_char *mode) {
	/* t1 9 */ short int mmx;
	/* t0 8 */ short int mmy;
	/* s1 17 */ short int smx;
	/* s5 21 */ short int smy;
	/* v1 3 */ short int mnx;
}

/* 001d6ed0 00000008 */ void IngameAlbumDispPhotoLarge(/* a0 4 */ u_char csr) {}
/* 001d6ed8 000002b4 */ void IngameAlbumDisp(/* s2 18 */ u_char csr, /* s4 20 */ u_char csr_top, /* s1 17 */ u_char mode, /* s3 19 */ char is_outgame) {}
/* 001d7190 00000750 */ static void DrawAlbum(/* s2 18 */ u_char csr, /* s4 20 */ u_char csr_top, /* s1 17 */ u_char mode, /* s3 19 */ u_char str) {}

/* 001d78e0 000003d4 */ static void PhotOnlyAll(/* fp 30 */ u_char csr, /* 0x4(sp) */ short int pos_x, /* 0x8(sp) */ short int pos_y, /* s7 23 */ short int alpha) {
	/* s2 18 */ int i;
	/* s5 21 */ int pic_num;
	/* 0x0(sp) */ int rgb;
}

/* 001d7cb8 00000168 */ static void PhotOnlyLst(/* s0 16 */ u_char csr, /* s3 19 */ short int pos_x, /* s2 18 */ short int pos_y, /* s1 17 */ short int alpha) {
	/* v0 2 */ int pic_num;
}

/* 001d7e20 00000284 */ static void PhotOnlyBig(/* s5 21 */ u_char csr, /* s6 22 */ short int pos_x, /* s0 16 */ short int pos_y, /* s4 20 */ short int alpha) {
	/* s3 19 */ int pic_num;
	/* v0 2 */ int pht_no;
}

/* 001d80a8 00000164 */ u_char* GetSubjectNameAddr(/* a0 4 */ u_short kind, /* s1 17 */ u_short no, /* s2 18 */ u_short show) {
	/* v0 2 */ int *addr;
}

/* 001d8210 000008c8 */ static void IngameAlbumSort() {
	/* s3 19 */ int i;
	/* s2 18 */ int j;
	/* s5 21 */ int tmp;
	/* 0x0(sp) */ PICTURE_WRK tmp_pic;
}

/* 001d8ad8 0000020c */ static void DspMainMenu(/* s0 16 */ u_char csr0, /* a1 5 */ u_char csr1, /* s1 17 */ u_char mode, /* s2 18 */ short int pos_x, /* s3 19 */ short int pos_y, /* s4 20 */ short int alpha) {
	/* t2 10 */ u_short anm;
}

/* 001d8ce8 000001f4 */ static void DspSideMenu(/* a0 4 */ u_char csr0, /* s1 17 */ u_char csr1, /* s3 19 */ u_char mode, /* s5 21 */ short int pos_x, /* s4 20 */ short int pos_y, /* s6 22 */ short int alpha) {
	/* t2 10 */ u_short anm;
}

/* 001d8ee0 000012c0 */ static void DspMenuWin(/* s5 21 */ u_char type, /* 0x4(sp) */ u_char csr, /* 0x8(sp) */ u_char mode, /* s2 18 */ short int pos_x, /* s4 20 */ short int pos_y, /* f27 65 */ float flash, /* t0 8 */ short int alpha, /* t2 10 */ u_short anm) {
	/* s0 16 */ int i;
	/* s7 23 */ short int pos_v;
	/* s0 16 */ short int pos_h;
	/* s1 17 */ short int alp1;
	/* s3 19 */ short int alp2;
	/* s6 22 */ short int alp3;
	/* 0xc(sp) */ short int mode_char;
	/* v1 3 */ short int char_posy;
	/* 0x0(sp) */ int rgb;
}

/* 001da1a0 000005c8 */ static void DspDetail(/* 0x70(sp) */ u_char csr, /* s6 22 */ short int pos_x, /* s0 16 */ short int pos_y, /* fp 30 */ short int alpha, /* s1 17 */ u_char dsp) {
	/* s2 18 */ int i;
	/* 0x10(sp) */ DISP_STR disp_str;
	/* a1 5 */ u_char obj_num;
	/* 0x50(sp) */ u_short obj_py[4][3];
	/* s0 16 */ int width;
}

/* 001da768 00000008 */ static void DspNotice(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha, /* a3 7 */ u_char now, /* t0 8 */ u_char max, /* t1 9 */ u_char btn) {}

/* 001da770 00000290 */ static void DspSumnale(/* a0 4 */ u_char csr, /* s6 22 */ short int pos_x, /* s5 21 */ short int pos_y, /* s4 20 */ short int alpha) {
	/* s3 19 */ int i;
	/* s0 16 */ int pic_num;
	/* s1 17 */ u_short pic_x;
	/* s2 18 */ u_short pic_y;
}

/* 001daa00 000004e0 */ static void DspPhtLst(/* s0 16 */ u_char csr, /* fp 30 */ u_char csr_top, /* s6 22 */ short int pos_x, /* s7 23 */ short int pos_y, /* 0x10(sp) */ short int alpha) {
	/* s5 21 */ int i;
	/* 0x14(sp) */ int pic_num;
}

/* 001daee0 00000138 */ static void DspFilmCut(/* a0 4 */ u_char csr, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ short int alpha) {}

/* 001db018 000002c0 */ static void DspSideSmnl(/* s1 17 */ u_char csr, /* s2 18 */ short int pos_x, /* s4 20 */ short int pos_y, /* s3 19 */ short int alpha) {
	/* s0 16 */ int pht_no;
}

/* 001db2d8 0000040c */ static void DspBtmDtl(/* 0x70(sp) */ u_char csr, /* s4 20 */ short int pos_x, /* s0 16 */ short int pos_y, /* 0x74(sp) */ short int alpha) {
	/* s3 19 */ int i;
	/* 0x10(sp) */ DISP_STR disp_str;
	/* a1 5 */ u_char obj_num;
	/* 0x50(sp) */ u_short obj_py[4][3];
	/* s0 16 */ int width;
}

/* 001db6e8 0000017c */ static void DspCherry(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {
	/* 0x0(sp) */ int rgb;
}

/* 001db868 00000168 */ static void AlbmTrFlsh(/* s1 17 */ short int pos_x, /* s2 18 */ short int pos_y, /* s3 19 */ short int alpha) {
	/* 0x0(sp) */ int rgb;
}

/* 001db9d0 00000020 */ u_char TimeIsMoney(/* a0 4 */ u_char hexhex) {}
/* 001db9f0 00000040 */ u_char MoneyIsTime(/* a0 4 */ u_char time) {}
/* 001dba30 000002f0 */ void PutDate(/* s5 21 */ PICTURE_WRK *pic_inf, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ short int alpha, /* s3 19 */ int pri) {}
/* 001dbd20 00000008 */ static void AlbmCntInit() {}
/* 001dbd28 0000003c */ static void AlbmCntRenew() {}

/* 001dbd68 00000354 */ static void AlbmModeInOut(/* a0 4 */ char is_outgame) {
	/* s0 16 */ int i;
	/* f2 40 */ float fade_in;
	/* f2 40 */ float fade_out;
}

/* 001dc0c0 00000094 */ static void AlbmModeInOut2(/* a0 4 */ char is_outgame) {}

/* 001dc158 00000040 */ static u_char SealChk() {
	/* a0 4 */ int i;
	/* a1 5 */ u_char seal_num;
}

/* 001dc198 00000018 */ void OutGameInitPhoto() {}
/* 001dc1b0 00000014 */ int isPhotoEnd() {}
/* 001dc1c8 00000020 */ float GetPhtDispAlpha() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_camra.c
// *****************************************************************************

/* 001dc1e8 0000006c */ void CameraCustomNewgameInit() {}

/* 001dc258 00000108 */ void CameraCustomInit() {
	/* v0 2 */ int i;
	/* 0x0(sp) */ u_char *pow[3];
}

/* 001dc360 0000009c */ void CameraCustomMain() {
	/* sbss 357b02 */ static char err;
}

/* 001dc400 0000025c */ void CameraCustomMenuSlct(/* a0 4 */ char *err) {}
/* 001dc660 00000440 */ void CameraCustomFilm(/* s1 17 */ char *err) {}

/* 001dcaa0 0000046c */ void CameraCustomPowerUp(/* s2 18 */ char *err) {
	/* 0x0(sp) */ u_char *pow[3];
}

/* 001dcf10 0000069c */ void CameraCustomSubAbility(/* s1 17 */ char *err) {
	/* a1 5 */ int i;
}

/* 001dd5b0 000006b4 */ void CameraCustomSpecialAbility(/* s1 17 */ char *err) {
	/* a1 5 */ int i;
}

/* 001ddc68 00000088 */ void CameraDspCtrl(/* a0 4 */ u_char err) {}

/* 001ddcf0 0000175c */ void CameraDsp(/* s6 22 */ short int pos_x, /* s7 23 */ short int pos_y, /* s5 21 */ u_char alp, /* 0x54(sp) */ u_char msg) {
	/* s2 18 */ int i;
	/* s1 17 */ int j;
	/* a1 5 */ int cost;
	/* v1 3 */ u_char rgb;
	/* 0x10(sp) */ u_char flsh_alp[6];
	/* v0 2 */ u_char use;
	/* 0x20(sp) */ u_char *pow[3];
	/* 0x50(sp) */ int cst_rgb;
	/* 0x30(sp) */ short int flm_ax[4];
	/* 0x40(sp) */ short int flm_ay[4];
	/* f20 58 */ float arw_alp;
}

/* 001df450 000002a0 */ char StrKndChk(/* a1 5 */ u_char err) {
	/* s0 16 */ char str;
}

/* 001df6f0 00000060 */ char FilmPossChk(/* a0 4 */ u_char knd) {
	/* a2 6 */ char rtrn;
	/* a1 5 */ char chk;
}

/* 001df750 0000028c */ void CameraModeInOut() {
	/* s0 16 */ int i;
	/* f4 42 */ float fade_in;
	/* f3 41 */ float fade_out;
}

/* 001df9e0 000000ac */ void CameraModeInOut2() {}
/* 001dfa90 0000003c */ void CameraCntRenew() {}
/* 001dfad0 00000010 */ int isCameraTopMenu() {}
/* 001dfae0 0000002c */ void OutGameInitCamera() {}
/* 001dfb10 00000014 */ int isCameraEnd() {}
/* 001dfb28 00000020 */ float GetCamDispAlpha() {}
/* 001dfb48 00000014 */ void OpenCameraMenu() {}

/* 001dfb60 000000f0 */ float NeonAlp(/* a0 4 */ short int num, /* a1 5 */ short int exe, /* a2 6 */ short int dly, /* a3 7 */ short int stp, /* t0 8 */ short int no, /* t1 9 */ short int *timer) {
	/* f12 50 */ float rad;
}

/* 001dfc50 0000007c */ float BeMax(/* a0 4 */ u_char no) {
	/* f0 38 */ float per;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_menu.c
// *****************************************************************************

/* 001dfcd0 0000002c */ void NewgameMenuInit() {}
/* 001dfd00 0000002c */ void LoadgameMenuInit() {}
/* 001dfd30 0000004c */ void IngameMenuInit() {}
/* 001dfd80 00000088 */ void IngameMenuOpenStart() {}

/* 001dfe08 000000bc */ static void IngameMenuOpenInit() {
	/* v0 2 */ int i;
}

/* 001dfec8 00000234 */ void IngameMenuMain() {}

/* 001e0100 0000057c */ void IngameMenuModeSlct() {
	/* s2 18 */ u_char mode_limit;
}

/* 001e0680 0000002c */ int Get4Byte(/* a0 4 */ u_char *addr) {}
/* 001e06b0 00000054 */ int GetIngameMSGAddr(/* a0 4 */ u_char type, /* s0 16 */ int msg_no) {}
/* 001e0708 00000010 */ void IngameMenuModeSlctDispInit() {}
/* 001e0718 000000a8 */ void IngameMenuModeSlctDisp() {}

/* 001e07c0 000009fc */ void DspTopMenu(/* s4 20 */ short int pos_x, /* s3 19 */ short int pos_y, /* a2 6 */ short int alpha, /* a0 4 */ u_short anm) {
	/* s0 16 */ int i;
	/* s5 21 */ short int pos_v;
	/* s2 18 */ short int pos_h;
	/* v0 2 */ short int alp1;
	/* v0 2 */ short int alp2;
	/* s0 16 */ short int alp3;
	/* f4 42 */ float alp_per;
	/* 0x0(sp) */ int rgb;
}

/* 001e11c0 00000318 */ void WakuWaku(/* s2 18 */ short int pos_x, /* fp 30 */ short int pos_y, /* a2 6 */ u_char alp, /* s3 19 */ u_char num, /* s0 16 */ u_char pri) {
	/* s1 17 */ int i;
	/* 0x0(sp) */ u_char adj_h[7];
	/* 0x10(sp) */ u_char adj_h2[7];
}

/* 001e14d8 000002a4 */ void WakuWaku2(/* s2 18 */ short int pos_x, /* s4 20 */ short int pos_y, /* a2 6 */ u_char alp, /* s0 16 */ u_char num, /* s3 19 */ u_char pri) {
	/* s1 17 */ int i;
}

/* 001e1780 000003cc */ static u_char MenuInOut() {
	/* a2 6 */ u_char count;
	/* 0x4(sp) */ float per;
	/* 0x0(sp) */ u_short cnt;
	/* s2 18 */ u_char rtn;
}

/* 001e1b50 00000148 */ void DspPlayData(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* f20 58 */ float alpha, /* s2 18 */ u_char str_mode) {}

/* 001e1c98 00000230 */ static void TimeZone(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* f23 61 */ float alp) {
	/* f24 62 */ float rot_s;
	/* f22 60 */ float rot_m;
	/* f20 58 */ float rot_h;
	/* 0x0(sp) */ sceCdCLOCK tmp;
}

/* 001e1ec8 000000f0 */ static void ClockHari(/* a0 4 */ u_short char_lbl, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* f20 58 */ float rot, /* a3 7 */ short int rot_x, /* t0 8 */ short int rot_y, /* f21 59 */ float alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001e1fb8 000005c8 */ static void ComingOut(/* s7 23 */ short int pos_x, /* 0x20(sp) */ short int pos_y, /* f21 59 */ float alp, /* a2 6 */ u_char shadow) {
	/* s5 21 */ int rgb;
	/* fp 30 */ int pri;
	/* 0x10(sp) */ sceCdCLOCK tmp;
}

/* 001e2580 000001c8 */ static void MenuAdjClock(/* s4 20 */ sceCdCLOCK *time) {
	/* s0 16 */ u_long all_second;
	/* s2 18 */ u_char adj_minute;
	/* s0 16 */ u_char adj_hour;
	/* s3 19 */ u_char rslt_second;
	/* s1 17 */ u_char rslt_minute;
	/* s0 16 */ u_char rslt_hour;
}

/* 001e2748 000000e8 */ static void MenuPlayTime(/* s3 19 */ sceCdCLOCK *time) {
	/* s0 16 */ u_long all_second;
}

/* 001e2830 000004b0 */ void DspMenuTitle(/* s5 21 */ short int pos_x, /* s3 19 */ short int pos_y, /* f23 61 */ float alp, /* s2 18 */ u_char pri, /* a3 7 */ u_char mode) {}

/* 001e2ce0 00000120 */ char SimpleMoveRuler(/* t4 12 */ float *rslt, /* a1 5 */ u_short t1, /* a2 6 */ u_short t2, /* a3 7 */ u_short t3, /* t0 8 */ u_short dst, /* t1 9 */ u_short *cnt) {
	/* a0 4 */ u_short count;
	/* f2 40 */ float vmax;
	/* f2 40 */ float a;
	/* f0 38 */ float v;
	/* sbss 357b08 */ static float move;
}

/* 001e2e00 000000e8 */ char MoveRuler(/* s4 20 */ short int *mov_x, /* s5 21 */ short int *mov_y, /* a2 6 */ short int x0, /* a3 7 */ short int y0, /* t0 8 */ short int x1, /* t1 9 */ short int y1, /* t2 10 */ u_short t1, /* t3 11 */ u_short t2, /* 0x80(sp) */ int t3, /* 0x88(sp) */ u_short *cnt) {
	/* 0x0(sp) */ float per;
}

/* 001e2ee8 00000670 */ static void CmnWakuForWin(/* 0x70(sp) */ short int pos_x, /* 0x74(sp) */ short int pos_y, /* s2 18 */ u_short siz_x, /* 0x78(sp) */ u_short siz_y, /* fp 30 */ u_char u_hgh, /* s3 19 */ u_char d_hgh, /* 0x7c(sp) */ u_char l_wid, /* 0x80(sp) */ u_char r_wid, /* 0x180(sp) */ int pri, /* 0x188(sp) */ int alp, /* 0x190(sp) */ int rgb, /* 0x198(sp) */ int msk_sw) {
	/* s4 20 */ u_char pri;
	/* 0x84(sp) */ u_char alp;
	/* 0x88(sp) */ u_char rgb;
	/* s1 17 */ int i;
	/* s0 16 */ int j;
	/* s4 20 */ int k;
	/* 0x10(sp) */ u_char h_num[3];
	/* 0x20(sp) */ u_char h_edg[3];
	/* 0x30(sp) */ u_char v_num[3];
	/* 0x40(sp) */ u_char v_edg[3];
	/* 0x50(sp) */ short int ofs_x[2];
	/* 0x60(sp) */ short int ofs_y[2];
	/* t0 8 */ short int put_x;
	/* t1 9 */ short int put_y;
	/* t4 12 */ short int put_w;
	/* a3 7 */ short int put_h;
	/* v1 3 */ short int put_u;
	/* v0 2 */ short int put_v;
}

/* 001e3558 0000010c */ static void PutParts(/* a0 4 */ u_char u, /* a1 5 */ u_char v, /* a2 6 */ u_char w, /* a3 7 */ u_char h, /* t0 8 */ short int x, /* t1 9 */ short int y, /* s6 22 */ int pri, /* t3 11 */ u_char alp, /* 0x130(sp) */ int rgb) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001e3668 00000148 */ static void BehindTheMask(/* 0x0(sp) */ short int pos_x, /* 0x4(sp) */ short int pos_y, /* 0x8(sp) */ short int siz_x, /* s7 23 */ short int siz_y, /* s5 21 */ u_char alp, /* s6 22 */ int pri, /* t2 10 */ u_char top) {
	/* s0 16 */ u_char i;
	/* s1 17 */ u_char j;
}

/* 001e37b0 00000100 */ static void PutMask(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* s4 20 */ u_char alp, /* s2 18 */ u_char flp, /* s3 19 */ int pri) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001e38b0 00000124 */ static void BehindTheMask2(/* fp 30 */ short int pos_x, /* 0x0(sp) */ short int pos_y, /* s7 23 */ short int siz_x, /* a3 7 */ short int siz_y, /* t0 8 */ u_char alp, /* s6 22 */ int pri, /* s4 20 */ u_char top) {
	/* s0 16 */ u_char i;
	/* v1 3 */ u_char j;
}

/* 001e39d8 0000024c */ static void CmnLineForWin(/* 0x10(sp) */ short int win_x, /* 0x14(sp) */ short int win_y, /* s3 19 */ short int ofs_x, /* s2 18 */ short int ofs_y, /* t0 8 */ u_short siz_x, /* t1 9 */ u_short siz_y, /* 0x18(sp) */ u_char pri, /* 0x1c(sp) */ u_char alp, /* 0x100(sp) */ int rgb) {
	/* 0x20(sp) */ u_char rgb;
	/* s0 16 */ int i;
	/* s1 17 */ int j;
	/* t4 12 */ u_char h_num;
	/* 0x24(sp) */ u_char h_edg;
	/* t6 14 */ u_char v_num;
	/* 0x28(sp) */ u_char v_edg;
	/* t0 8 */ short int put_x;
	/* t1 9 */ short int put_y;
	/* a2 6 */ short int put_w;
	/* a3 7 */ short int put_h;
	/* t2 10 */ short int put_u;
	/* a1 5 */ short int put_v;
}

/* 001e3c28 000006f0 */ void CmnWindow(/* s4 20 */ u_char win_no, /* 0xa00(sp) */ short int pos_x, /* 0xa04(sp) */ short int pos_y, /* 0xa08(sp) */ u_char alp, /* 0xa0c(sp) */ u_char rgb) {
	/* s2 18 */ int i;
	/* 0x20(sp) */ WIN_PTN win_ptn[41];
	/* 0x260(sp) */ signed char msk_dat_top[41];
	/* 0x290(sp) */ MSK_SIZ msk_siz[55];
	/* 0x4c0(sp) */ signed char lin_dat_top[41];
	/* 0x4f0(sp) */ PLS_LIN lin_ptn[129];
}

/* 001e4318 00000078 */ void CmnCursol(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int wide, /* a3 7 */ short int high, /* f12 50 */ float flsh, /* t0 8 */ u_char alp, /* t1 9 */ int pri) {}
/* 001e4390 00000018 */ u_short Ana2PadDirCnt(/* a0 4 */ u_char chk) {}

/* 001e43a8 000000b0 */ void AnaPonChk() {
	/* a0 4 */ int i;
	/* a2 6 */ u_char dir_now;
}

/* 001e4458 0000007c */ char CanYouOpenMyMind(/* a0 4 */ char mode) {
	/* v0 2 */ char can;
}

/* 001e44d8 0000005c */ int StopCameraMenu() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_spd_menu.c
// *****************************************************************************

/* 001e4538 00000034 */ void SpdMenuInit() {}

/* 001e4570 00000078 */ char SpdMenuCtrl() {
	/* s0 16 */ char rtrn;
}

/* 001e45e8 00000078 */ static void SpdMapStart() {}

/* 001e4660 00000060 */ static void SpdMapInit() {
	/* a0 4 */ int i;
}

/* 001e46c0 000000e8 */ void SpdMapMain() {}

/* 001e47a8 000002cc */ static void SpdMapInOut() {
	/* v0 2 */ int i;
	/* v0 2 */ u_char count;
	/* f0 38 */ float fade_in;
	/* f1 39 */ float fade_out;
}

/* 001e4a78 0000003c */ void SpdOptStart() {}

/* 001e4ab8 00000044 */ static void SpdOptInit() {
	/* a0 4 */ int i;
}

/* 001e4b00 0000010c */ void SpdOptMain() {}

/* 001e4c10 000001d0 */ static void SpdOptInOut() {
	/* v0 2 */ int i;
	/* v0 2 */ u_char count;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/item_get.c
// *****************************************************************************

/* 001e4de0 00000104 */ void ItemGet(/* s2 18 */ u_char get_type, /* s3 19 */ u_char get_no, /* a2 6 */ u_char msg0_no, /* a3 7 */ u_char msg1_no) {}
/* 001e4ee8 000000b4 */ int ItemGetCtrl() {}
/* 001e4fa0 0000006c */ static int BookGetMain() {}
/* 001e5010 00000230 */ static void BookGetPad(/* a2 6 */ u_char model_type, /* a1 5 */ u_char model_no) {}

/* 001e5240 000002c4 */ static void BookGetDsp(/* s4 20 */ u_char model_type, /* s5 21 */ u_char model_no, /* a2 6 */ u_char msg0_no, /* a3 7 */ u_char msg1_no) {
	/* s3 19 */ u_char fade_type;
	/* s6 22 */ u_char chng_tm;
	/* s7 23 */ u_char name_dsp;
	/* s1 17 */ u_char msg_dsp;
	/* 0x0(sp) */ u_char str_dsp;
	/* s2 18 */ u_char msg_type;
	/* fp 30 */ u_char msg_no;
}

/* 001e5508 0000006c */ static int PhotGetMain() {}
/* 001e5578 00000144 */ static void PhotGetPad(/* a0 4 */ u_char model_type, /* a1 5 */ u_char model_no) {}

/* 001e56c0 00000278 */ static void PhotGetDsp(/* s3 19 */ u_char model_type, /* fp 30 */ u_char model_no, /* a2 6 */ u_char msg0_no, /* a3 7 */ u_char msg1_no) {
	/* s4 20 */ u_char fade_type;
	/* s6 22 */ u_char chng_tm;
	/* s5 21 */ u_char name_dsp;
	/* s1 17 */ u_char msg_dsp;
	/* s2 18 */ u_char msg_type;
	/* s7 23 */ u_char msg_no;
	/* t0 8 */ u_char file_pct;
}

/* 001e5938 00000084 */ static int ItemGetMain() {}
/* 001e59c0 0000015c */ static void ItemGetPad(/* a0 4 */ u_char model_type, /* a1 5 */ u_char model_no) {}

/* 001e5b20 00000224 */ static void ItemGetDsp(/* s2 18 */ u_char model_type, /* s5 21 */ u_char model_no, /* a2 6 */ u_char msg0_no, /* a3 7 */ u_char msg1_no) {
	/* s6 22 */ u_char fade_type;
	/* s7 23 */ u_char chng_tm;
	/* s1 17 */ u_char msg_dsp;
	/* s3 19 */ u_char msg_type;
	/* s4 20 */ u_char msg_no;
}

/* 001e5d48 0000018c */ static void GetStr(/* s1 17 */ u_char model_type, /* s2 18 */ u_char model_no, /* a2 6 */ u_char str_dsp) {
	/* f2 40 */ float str_add;
}

/* 001e5ed8 000002f8 */ static void GetFad(/* s2 18 */ u_char model_type, /* a1 5 */ u_char model_no, /* a2 6 */ u_char fade, /* a3 7 */ u_char time) {
	/* t0 8 */ u_char scn_obj;
	/* v1 3 */ u_char chr_obj;
	/* a0 4 */ u_char ply_obj;
	/* t1 9 */ u_char chr_now;
	/* s0 16 */ u_char ply_now;
	/* s1 17 */ int chr;
	/* f4 42 */ float per;
}

/* 001e61d0 0000012c */ static void FileName(/* a0 4 */ u_char model_type, /* a1 5 */ u_char model_no, /* a2 6 */ u_char fade, /* a3 7 */ u_char time) {
	/* t1 9 */ u_char msg_knd;
	/* t0 8 */ char book_adj;
}

/* 001e6300 00000338 */ static void GetMsg(/* s2 18 */ u_char msg_type, /* s1 17 */ u_char msg_no, /* a2 6 */ u_char msg_dsp) {
	/* f2 40 */ float msg_add;
	/* f0 38 */ float btn_alp;
}

/* 001e6638 00000178 */ void NextPageNavi(/* s1 17 */ u_char hav_now, /* s2 18 */ u_char dsp_max, /* s0 16 */ u_short chr_top, /* s4 20 */ short int ofs_x, /* s5 21 */ short int ofs_y, /* s3 19 */ u_char alpha) {
	/* a2 6 */ int rgb_l;
	/* 0x0(sp) */ int rgb_r;
}

/* 001e67b0 00000068 */ int CheckTape(/* t1 9 */ int item_no) {
	/* a3 7 */ int i;
}

/* 001e6818 00000030 */ void PlayTape(/* a0 4 */ int adpcm_no) {}

/* 001e6848 00000070 */ void StopTape(/* t1 9 */ int item_no) {
	/* a3 7 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_file.c
// *****************************************************************************

/* 001e68b8 00000038 */ void NewgameMenuFileInit() {}
/* 001e68f0 00000038 */ void LoadgameMenuFileInit() {}

/* 001e6928 000000f8 */ void StartFileModeInit() {
	/* s0 16 */ int i;
}

/* 001e6a20 0000080c */ void IngameMenuFile() {}
/* 001e7230 00000150 */ void IngameMenuFileDisp() {}

/* 001e7380 00000620 */ void IngameMenuFileData() {
	/* v1 3 */ short int no;
}

/* 001e79a0 0000007c */ void IngameMenuFileDataDisp() {}

/* 001e7a20 00000124 */ void GetDispMenuFile(/* s1 17 */ u_char csr) {
	/* a1 5 */ int i;
}

/* 001e7b48 00000008 */ static void FileCntInit() {}
/* 001e7b50 0000003c */ static void FileCntRenew() {}

/* 001e7b90 00000278 */ static void FileModeInOut() {
	/* s0 16 */ int i;
	/* f2 40 */ float fade_in;
	/* f4 42 */ float fade_out;
}

/* 001e7e08 0000008c */ static void FileModeInOut2() {}
/* 001e7e98 00000094 */ static void DspFileOut(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {}

/* 001e7f30 00000188 */ static void DspKindTab(/* s1 17 */ short int pos_x, /* s2 18 */ short int pos_y, /* s0 16 */ short int alpha) {
	/* 0x0(sp) */ int rgb;
}

/* 001e80b8 0000026c */ static void DspFile2D(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {
	/* a3 7 */ int i;
	/* a1 5 */ char add;
}

/* 001e8328 0000038c */ static void DspFile2D2(/* s6 22 */ short int pos_x, /* s5 21 */ short int pos_y, /* s2 18 */ short int alpha) {
	/* v0 2 */ short int no;
	/* s4 20 */ u_short alp_add;
}

/* 001e86b8 000005f8 */ static void DspFileLst(/* 0x0(sp) */ short int pos_x, /* fp 30 */ short int pos_y, /* s1 17 */ short int alpha) {
	/* s3 19 */ int i;
	/* s0 16 */ short int no;
}

/* 001e8cb0 000000c8 */ void SideBar(/* a0 4 */ u_char hav_now, /* a1 5 */ u_char dsp_max, /* t4 12 */ u_short mov_lng, /* a3 7 */ u_char lst_top, /* t0 8 */ u_short chr_top, /* t1 9 */ u_char alp, /* t2 10 */ short int dx, /* t3 11 */ short int dy) {
	/* a0 4 */ u_char csr_top;
	/* a2 6 */ u_short now_lng;
}

/* 001e8d78 000001dc */ static void PutBarScale(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ u_short now_lng, /* s2 18 */ u_char alp, /* t0 8 */ u_short chr_top) {
	/* s0 16 */ int i;
	/* f25 63 */ float scl_px;
	/* f24 62 */ float scl_py;
	/* f23 61 */ float mdl_lng;
	/* f22 60 */ float mdl_scl;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001e8f58 000002bc */ static void SideTri(/* s1 17 */ u_char hav_now, /* s2 18 */ u_char dsp_max, /* s0 16 */ u_short chr_top, /* s3 19 */ short int alpha) {
	/* a2 6 */ int rgb_l;
	/* 0x0(sp) */ int rgb_r;
}

/* 001e9218 00000308 */ static void DspMsgWndw(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* a2 6 */ short int alpha) {}
/* 001e9520 00000038 */ static void DspFileDtl(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {}
/* 001e9558 0000020c */ static void DspFileBook(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* s2 18 */ short int alpha) {}
/* 001e9768 00000220 */ static void DspFilePhot(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* s1 17 */ short int alpha) {}

/* 001e9988 00000900 */ static void PhotDispCtrl(/* 0xb0(sp) */ u_char alp) {
	/* s1 17 */ int i;
	/* a2 6 */ int j;
	/* v0 2 */ short int no;
	/* v0 2 */ short int wk_no;
	/* a1 5 */ char tate_yoko;
	/* a3 7 */ signed char box_no;
	/* a3 7 */ signed char lod_chk;
	/* a1 5 */ u_int mem_ofs;
	/* 0x0(sp) */ SPRITE_DATA dmy;
	/* 0x60(sp) */ DSP_BOX dsp_box[3];
	/* 0x80(sp) */ DSP_PHT dsp_pht[6];
}

/* 001ea288 00000058 */ static char AllVramTensoOK(/* a0 4 */ char pht_num, /* a1 5 */ DSP_BOX *dsp_box) {
	/* v1 3 */ int i;
	/* a3 7 */ short int dsp_ok;
}

/* 001ea2e0 00000094 */ static short int TargetPhot(/* a0 4 */ short int csr, /* v1 3 */ short int no) {
	/* v0 2 */ short int pht_no;
	/* v1 3 */ short int load_pht;
}

/* 001ea378 00000174 */ static u_char DspPhot2D(/* s1 17 */ u_long tex, /* s6 22 */ u_char rt, /* s0 16 */ short int px, /* s2 18 */ short int py, /* s3 19 */ short int sx, /* s4 20 */ short int sy, /* s5 21 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001ea4f0 00000130 */ static void DspBack2D(/* a0 4 */ short int pht_no, /* a1 5 */ u_char rt, /* a2 6 */ short int px, /* a3 7 */ short int py, /* t0 8 */ short int sx, /* t1 9 */ short int sy, /* t2 10 */ u_char alp) {}
/* 001ea620 00000020 */ static void DspFileCmmn(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {}
/* 001ea640 000001d0 */ void PageInfo(/* a0 4 */ u_char now, /* a1 5 */ u_char all, /* a2 6 */ short int pos_x, /* a3 7 */ short int pos_y, /* t0 8 */ u_char alpha) {}

/* 001ea810 00000104 */ void DokiDokiLetter(/* a3 7 */ u_char level) {
	/* 0x0(sp) */ u_char musinon_tbl[6];
	/* 0x10(sp) */ u_short ketuatu_tbl[6];
	/* sdata 3571ae */ static u_char musinon;
	/* sdata 3571af */ static u_char sinpaku;
	/* sdata 3571b0 */ static u_short ketuatu;
}

/* 001ea918 000000fc */ void RelationShip() {}

/* 001eaa18 00000188 */ static char TateizFreeSpace() {
	/* s4 20 */ int ret_num;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001eaba0 00000098 */ void RelationMapInit() {
	/* a0 4 */ int i;
}

/* 001eac38 00000310 */ void RelAtributeChg() {
	/* t2 10 */ int i;
	/* t1 9 */ int j;
	/* a0 4 */ int k;
}

/* 001eaf48 000002d0 */ void RelComAtributeChg() {
	/* t1 9 */ int i;
	/* t2 10 */ int j;
	/* a0 4 */ int k;
}

/* 001eb218 00000358 */ void MoveBeyondData() {}

/* 001eb570 00000290 */ void MoveBeyondGroup() {
	/* a1 5 */ int i;
	/* a1 5 */ RELATION_PRT *temp_prt;
}

/* 001eb800 000000ac */ void RelMapScroolX(/* a0 4 */ RELATION_DAT *r_dat) {}
/* 001eb8b0 00000090 */ void RelMapScroolY(/* a0 4 */ RELATION_PRT *r_prt) {}

/* 001eb940 000000f0 */ int ButtonManager() {
	/* s1 17 */ int ret_num;
}

/* 001eba30 00000390 */ void RelationDispDat(/* s2 18 */ RELATION_DAT *r_dat) {
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ DISP_SPRT ds;
}

/* 001ebdc0 000003c0 */ void RelDspYajirusi(/* s0 16 */ RELATION_YAJI *r_yaj) {
	/* f20 58 */ float temp_x1;
	/* f21 59 */ float temp_y1;
	/* f22 60 */ float temp_x2;
	/* f23 61 */ float temp_y2;
	/* f25 63 */ float temp_x3;
	/* f24 62 */ float temp_y3;
	/* s3 19 */ u_char yaj_r;
	/* s1 17 */ int yaj_pri;
}

/* 001ec180 00000390 */ void RelDspComment() {
	/* a2 6 */ int i;
	/* a1 5 */ int j;
	/* s4 20 */ int l;
	/* t2 10 */ int disp_flg;
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ DISP_SPRT ds;
}

/* 001ec510 0000023c */ void RelDspPrtFla(/* s0 16 */ RELATION_PRT *r_prt) {
	/* s1 17 */ int i;
	/* s7 23 */ int j;
	/* s2 18 */ int scl_flg;
	/* f21 59 */ float scl_tmpx;
	/* f20 58 */ float scl_tmpy;
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ DISP_SPRT ds;
}

/* 001ec750 0000017c */ void RelDspPrt(/* a1 5 */ RELATION_PRT *r_prt) {
	/* s3 19 */ int i;
	/* f22 60 */ float temp_x1;
	/* f20 58 */ float temp_y1;
	/* f23 61 */ float temp_x4;
	/* f21 59 */ float temp_y4;
}

/* 001ec8d0 000006a4 */ void RelDspBackGrd() {
	/* 0x150(sp) */ int i;
	/* s0 16 */ int j;
	/* v0 2 */ u_char alp_rate;
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ SPRT_DAT ssd_fnt;
	/* 0x40(sp) */ SPRT_DAT ssd_sakka;
	/* 0x60(sp) */ SPRT_DAT ssd_himuro;
	/* 0x80(sp) */ SPRT_DAT ssd_hina;
	/* 0xa0(sp) */ SPRT_DAT ssd_muna;
	/* 0xc0(sp) */ DISP_SPRT ds;
}

/* 001ecf78 00000244 */ void RelationDispMsg(/* s5 21 */ RELATION_DAT *r_dat) {
	/* 0x0(sp) */ SPRT_SDAT ssd;
	/* 0x10(sp) */ SPRT_SDAT ssd2;
	/* 0x20(sp) */ SPRT_SDAT ssd3;
	/* 0x30(sp) */ SPRT_SDAT ssd4;
	/* 0x40(sp) */ DISP_SQAR dsq;
	/* 0xc0(sp) */ DISP_STR ds;
	/* 0x100(sp) */ STR_DAT spev_str;
	/* s6 22 */ short int dsp_offy;
}

/* 001ed1c0 00000174 */ void SimpleDispSprtDS(/* t4 12 */ SPRT_DAT *ssd, /* a1 5 */ u_int addr, /* a2 6 */ int sp_no, /* s0 16 */ SPRT_SROT *srot, /* s1 17 */ SPRT_SSCL *sscl, /* t5 13 */ u_char alp_rate) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 001ed338 000000a8 */ void TestPk2DataSou(/* a0 4 */ long int sendtexaddr) {
	/* sdata 3571b4 */ static int ttest_count;
	/* 0x0(sp) */ SPRT_DAT ssd;
}

/* 001ed3e0 00000288 */ void DispCaption(/* a0 4 */ int no, /* s6 22 */ u_char alp) {
	/* s3 19 */ int i;
	/* fp 30 */ u_int pri;
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ DISP_SPRT ds;
	/* s0 16 */ CAPTION_DATA_SUB *cdsp;
	/* s4 20 */ CAPTION_DATA *cdp;
	/* s2 18 */ CAPTION_LIST *clp;
	/* 0xb0(sp) */ DISP_SQAR dq;
	/* 0x130(sp) */ SQAR_DAT sq;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_rank.c
// *****************************************************************************

/* 001ed668 00000034 */ void NewgameMenuRankInit() {}
/* 001ed6a0 00000030 */ void LoadgameMenuRankInit() {}
/* 001ed6d0 0000002c */ void StartRankModeInit() {}
/* 001ed700 000004b8 */ void IngameMenuRank() {}
/* 001edbb8 00000170 */ void IngameMenuRankDisp() {}
/* 001edd28 0000010c */ static void IngameMenuRankData(/* a0 4 */ u_char dsp) {}
/* 001ede38 000001c0 */ static void IngameMenuRankDataDisp(/* a0 4 */ u_char dsp) {}
/* 001edff8 00000008 */ static void RankCntInit() {}
/* 001ee000 0000003c */ static void RankCntRenew() {}

/* 001ee040 00000338 */ static void RankModeInOut() {
	/* s0 16 */ int i;
	/* f2 40 */ float fade_in;
	/* f2 40 */ float fade_out;
}

/* 001ee378 0000008c */ static void RankModeInOut2() {}
/* 001ee408 00000384 */ static void DspTopRankLst(/* s2 18 */ u_char dsp, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* s1 17 */ u_char alpha) {}
/* 001ee790 000004cc */ static void DspRankersCHR(/* a0 4 */ u_char pos, /* s2 18 */ u_char rank, /* s1 17 */ u_char alpha) {}

/* 001eec60 000002e4 */ static void RankEngine(/* a0 4 */ u_char rank, /* s1 17 */ short int pos_x, /* s2 18 */ short int pos_y, /* a3 7 */ u_char alpha) {
	/* v1 3 */ u_int sc;
	/* a0 4 */ u_char sm;
	/* s0 16 */ u_char ss;
}

/* 001eef48 0000004c */ static char SrankCHK() {
	/* v1 3 */ int i;
	/* v0 2 */ u_int sc;
	/* a2 6 */ char rtrn;
}

/* 001eef98 000003b0 */ static void DspRankersSTR(/* a0 4 */ u_char pos, /* s3 19 */ u_char rank, /* s5 21 */ u_char alpha) {
	/* s2 18 */ int i;
	/* 0x10(sp) */ DISP_STR ds;
	/* a1 5 */ u_char obj_num;
	/* 0x50(sp) */ u_short obj_py[4][3];
	/* 0x70(sp) */ STR_DAT dmy_str;
}

/* 001ef348 000002ac */ static void DspRankersPHT(/* s0 16 */ u_char pos, /* a1 5 */ u_char rank, /* s2 18 */ u_char alpha) {
	/* s1 17 */ u_char pic_no;
	/* f0 38 */ float scale;
}

/* 001ef5f8 0000009c */ static void DspTopRankBig(/* s0 16 */ u_char dsp, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* s1 17 */ u_char alpha) {}

/* 001ef698 00000654 */ static void DspRankBigCHR(/* a0 4 */ u_char rank, /* a1 5 */ u_char alpha) {
	/* 0x0(sp) */ int rgb;
}

/* 001efcf0 00000320 */ static void DspRankBigSTR(/* s2 18 */ u_char rank, /* s5 21 */ u_char alpha) {
	/* s3 19 */ int i;
	/* 0x10(sp) */ DISP_STR ds;
	/* a1 5 */ u_char obj_num;
	/* 0x50(sp) */ u_short obj_py[4][3];
	/* 0x70(sp) */ STR_DAT dmy_str;
}

/* 001f0010 000001f0 */ static void DspRankBigPHT(/* s2 18 */ u_char rank, /* s1 17 */ u_char alpha) {
	/* s0 16 */ u_char pic_no;
	/* v0 2 */ signed char tmp;
}

/* 001f0200 000002fc */ static void RankingChkNow() {
	/* t0 8 */ int i;
	/* a2 6 */ int j;
	/* t3 11 */ int tmp;
	/* 0x0(sp) */ PFILE_WRK tmp_srt;
	/* 0x3c0(sp) */ PICTURE_WRK tmp_pic;
}

/* 001f0500 0000028c */ void RankingChkMem(/* s1 17 */ PICTURE_WRK new_pic) {
	/* s0 16 */ int i;
	/* v1 3 */ int j;
	/* a2 6 */ int same_pic;
	/* a2 6 */ int del_no;
	/* a3 7 */ int del_pic_id;
	/* s3 19 */ int copy_flg;
}

/* 001f0790 000001dc */ int CheckSamePic(/* a0 4 */ PICTURE_WRK *newp) {
	/* t3 11 */ int i;
	/* t1 9 */ int j;
	/* a2 6 */ int k;
	/* s1 17 */ int no;
	/* t6 14 */ PICTURE_WRK *savep;
	/* 0x0(sp) */ SUBJECT_CHK newp_chk[3];
	/* 0x10(sp) */ SUBJECT_CHK save_chk[3];
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_glst.c
// *****************************************************************************

/* 001f0970 00000058 */ void NewgameMenuGlstInit() {
	/* a0 4 */ u_int i;
}

/* 001f09c8 00000080 */ void StartGlstModeInit() {}
/* 001f0a48 00000554 */ void IngameMenuGlst() {}
/* 001f0fa0 00000034 */ void IngameMenuGlstDisp() {}
/* 001f0fd8 00000008 */ static void IngameMenuGlstData() {}
/* 001f0fe0 00000094 */ static void IngameMenuGlstDataDisp() {}
/* 001f1078 00000008 */ static void GlstCntInit() {}
/* 001f1080 0000003c */ static void GlstCntRenew() {}

/* 001f10c0 00000278 */ static void GlstModeInOut() {
	/* s0 16 */ int i;
	/* f2 40 */ float fade_in;
	/* f4 42 */ float fade_out;
}

/* 001f1338 0000008c */ static void GlstModeInOut2() {}
/* 001f13c8 00000040 */ static void DspGhostList(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ u_char alpha) {}
/* 001f1408 00000298 */ void DspGlst(/* s1 17 */ u_char alpha) {}

/* 001f16a0 000001b8 */ void DspLstOfs(/* a0 4 */ u_short start, /* s4 20 */ u_char alpha) {
	/* s5 21 */ int i;
}

/* 001f1858 00000104 */ void PutRayName(/* a0 4 */ u_char ray_knd, /* a1 5 */ u_short ray_no, /* a2 6 */ u_char ray_msn, /* a3 7 */ short int pos_x, /* t0 8 */ short int pos_y, /* s0 16 */ int rgb, /* t2 10 */ u_char alpha) {
	/* 0x0(sp) */ DISP_STR ds;
	/* 0x40(sp) */ STR_DAT sd;
}

/* 001f1960 000003a0 */ void DspGInf(/* s1 17 */ u_char alpha) {
	/* v0 2 */ u_int per;
	/* f0 38 */ float scale;
}

/* 001f1d00 00000340 */ void DspGdtl(/* s1 17 */ u_char alpha) {
	/* s2 18 */ u_char photo_alpha;
	/* v0 2 */ u_int cur;
}

/* 001f2040 000001d8 */ void Sheet(/* t5 13 */ u_short chr_lbl, /* 0x0(sp) */ short int pos_x, /* 0x4(sp) */ short int pos_y, /* a3 7 */ u_short siz_x, /* t0 8 */ u_short siz_y, /* 0x8(sp) */ u_char pri, /* 0xc(sp) */ u_char alp) {
	/* s0 16 */ int i;
	/* s1 17 */ int j;
	/* s5 21 */ u_char sozai_w;
	/* s6 22 */ u_char sozai_h;
	/* fp 30 */ u_char h_num;
	/* 0x10(sp) */ u_char h_edg;
	/* t4 12 */ u_char v_num;
	/* 0x14(sp) */ u_char v_edg;
}

/* 001f2218 00000134 */ void Fuchidori(/* a0 4 */ u_short chr_lbl, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ u_short siz_x, /* t0 8 */ u_short siz_y, /* t1 9 */ u_char pri, /* t2 10 */ u_char alp) {}

/* 001f2350 000001ec */ void Naraberu(/* fp 30 */ u_short chr_lbl, /* 0x0(sp) */ short int pos_x, /* 0x4(sp) */ short int pos_y, /* a3 7 */ u_char dir, /* t0 8 */ u_short dst, /* t1 9 */ u_char pri, /* s6 22 */ u_char alp) {
	/* s0 16 */ int i;
	/* s2 18 */ u_char sozai_w;
	/* s3 19 */ u_char sozai_h;
	/* s5 21 */ u_char h_num;
	/* s7 23 */ u_char h_edg;
	/* s5 21 */ u_char v_num;
	/* s7 23 */ u_char v_edg;
}

/* 001f2540 000000c0 */ static void PutPtrn(/* a0 4 */ u_short chr_lbl, /* a1 5 */ u_char w, /* a2 6 */ u_char h, /* a3 7 */ short int x, /* t0 8 */ short int y, /* s3 19 */ int pri, /* t2 10 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001f2600 0000047c */ void ReSetGhostList(/* a0 4 */ PICTURE_WRK new_pic) {
	/* a2 6 */ int i;
	/* a1 5 */ int j;
	/* t2 10 */ u_short ray_knd;
	/* t1 9 */ u_short ray_no;
	/* t5 13 */ u_char ray_msn;
	/* t2 10 */ ENE_DAT *edat;
	/* a3 7 */ char flg;
}

/* 001f2a80 0000003c */ u_short GetGlistAllNum() {
	/* a1 5 */ u_int i;
}

/* 001f2ac0 0000005c */ u_short GetGlistGNum() {
	/* a2 6 */ u_int i;
	/* a3 7 */ u_int j;
}

/* 001f2b20 000001a0 */ void DispGlistPhoto(/* t0 8 */ u_int line, /* s3 19 */ u_char alpha) {
	/* v1 3 */ u_int id;
}

/* 001f2cc0 00000094 */ char CheckGlistComplete(/* a0 4 */ u_int list) {
	/* v1 3 */ u_int i;
	/* a3 7 */ u_int flg;
}

/* 001f2d58 0000001c */ char CheckGlistRareGhost(/* a0 4 */ u_int kind, /* a1 5 */ u_int no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_map.c
// *****************************************************************************

/* 001f2d78 00000008 */ void NewgameMenuMapInit() {}
/* 001f2d80 00000008 */ void LoadgameMenuMapInit() {}
/* 001f2d88 00000070 */ void StartMapModeInit() {}
/* 001f2df8 0000022c */ void IngameMenuMap() {}
/* 001f3028 000000c8 */ void IngameMenuMapDisp(/* s1 17 */ u_char mod) {}
/* 001f30f0 00000008 */ static void MapCntInit() {}
/* 001f30f8 0000003c */ static void MapCntRenew() {}

/* 001f3138 00000348 */ static void MapModeInOut() {
	/* s0 16 */ int i;
	/* f0 38 */ float fade_in;
	/* f2 40 */ float fade_out;
}

/* 001f3480 00000094 */ static void MapModeInOut2() {}
/* 001f3518 000000ac */ static void DspPlyrInMap(/* a0 4 */ u_char alp) {}

/* 001f35c8 00000054 */ static void MapScoop() {
	/* v0 2 */ short int scl_cmp;
	/* v1 3 */ short int scl_obj;
}

/* 001f3620 00000320 */ static void MapMove(/* a3 7 */ u_char alp) {
	/* v1 3 */ short int mvx;
	/* a1 5 */ short int mvy;
	/* a2 6 */ u_char anacon;
}

/* 001f3940 000000e8 */ static void MapInfo1(/* a0 4 */ u_char alp) {
	/* f20 58 */ float px;
	/* f21 59 */ float py;
}

/* 001f3a28 000000bc */ static void MapInfo2(/* a0 4 */ u_char alp) {}

/* 001f3ae8 00000660 */ static void MapPrint(/* 0x10(sp) */ short int mov_px, /* 0x14(sp) */ short int mov_py, /* s7 23 */ u_char alp) {
	/* s1 17 */ int i;
	/* s3 19 */ int j;
	/* s3 19 */ int id;
	/* fp 30 */ short int map_ox;
	/* 0x18(sp) */ short int map_oy;
	/* t0 8 */ short int door_mx;
	/* a2 6 */ short int door_my;
	/* t1 9 */ u_char door_stts;
	/* 0x0(sp) */ DOOR_STTS_MAP dsmp;
	/* f20 58 */ float bg_scl;
	/* v1 3 */ u_char num_i;
	/* v0 2 */ u_char num_j;
	/* s5 21 */ short int start_x;
	/* s4 20 */ short int start_y;
}

/* 001f4148 000002c4 */ static void MapPlayer(/* a0 4 */ short int mov_px, /* a1 5 */ short int mov_py, /* s4 20 */ u_char alp) {
	/* s1 17 */ int i;
	/* f20 58 */ float now_rd;
	/* 0x0(sp) */ short int x[3];
	/* 0x10(sp) */ short int y[3];
}

/* 001f4410 00000208 */ static void MapChrCtrl(/* s5 21 */ short int pos_x, /* s4 20 */ short int pos_y, /* s3 19 */ u_char alp) {
	/* s2 18 */ int id;
	/* 0x0(sp) */ int rgb;
	/* a3 7 */ int red;
}

/* 001f4618 00000180 */ static void MapChrSet(/* t2 10 */ u_char id, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* a3 7 */ int rgb, /* t0 8 */ u_char alp, /* f12 50 */ float scl, /* t1 9 */ int pri) {}

/* 001f4798 000000f4 */ static void PutChrForMap(/* a0 4 */ u_short chr_lbl, /* a1 5 */ short int pos_x, /* a2 6 */ short int pos_y, /* s2 18 */ int rgb, /* t0 8 */ u_char alp, /* f20 58 */ float scl, /* s3 19 */ int pri) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001f4890 00000164 */ static void PutIcnForMap(/* a0 4 */ u_short chr_lbl, /* s1 17 */ short int pos_x, /* s0 16 */ short int pos_y, /* s2 18 */ short int rot, /* s3 19 */ u_char alp, /* f20 58 */ float scl) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001f49f8 0000026c */ static void PutIcnForMap2(/* a0 4 */ u_char type, /* s2 18 */ short int pos_x, /* s1 17 */ short int pos_y, /* s4 20 */ short int rot, /* s3 19 */ u_char alp, /* f1 39 */ float scl, /* t1 9 */ u_char sz_ptn) {
	/* 0x10(sp) */ SQAR_DAT base;
	/* 0x30(sp) */ DISP_SQAR ds;
}

/* 001f4c68 000005f4 */ static void DspLayOut(/* 0x1f0(sp) */ short int pos_x, /* fp 30 */ short int pos_y, /* s7 23 */ u_char alpha) {
	/* s0 16 */ int i;
	/* 0x0(sp) */ LINE_PRT prot[20];
	/* 0x140(sp) */ SPRT_DAT ssd;
	/* 0x160(sp) */ DISP_SPRT ds;
}

/* 001f5260 000002dc */ static void MapTri(/* s0 16 */ short int pos_x, /* s1 17 */ short int pos_y, /* s2 18 */ u_char alpha) {
	/* a0 4 */ int i;
	/* 0x0(sp) */ int rgb1[4];
	/* 0x10(sp) */ int rgb2[2];
	/* 0x20(sp) */ int flsh1;
	/* a1 5 */ int flsh2;
}

/* 001f5540 00000170 */ static u_char MapExstFlr(/* a0 4 */ u_char id, /* a1 5 */ u_char flr) {
	/* a3 7 */ u_char rtrn;
	/* a2 6 */ int i;
}

/* 001f56b0 00000124 */ static void MapExistCHK() {
	/* s3 19 */ int i;
	/* s1 17 */ int id;
	/* s2 18 */ u_char room_exist;
}

/* 001f57d8 00000050 */ static u_char MapMovableCHK() {}

/* 001f5828 00000280 */ static void SetLineStrip(/* s1 17 */ int pri, /* s0 16 */ u_char num, /* s2 18 */ LINE_PRT *prot, /* a3 7 */ u_short alp) {
	/* s3 19 */ int i;
	/* f22 60 */ float div;
	/* s5 21 */ int z;
	/* 0x0(sp) */ LINE_PRT tmp;
}

/* 001f5aa8 00000394 */ static void SetCircle(/* a0 4 */ int pri, /* s3 19 */ short int xo, /* s1 17 */ short int yo, /* s6 22 */ short int r, /* s2 18 */ u_char dtl, /* 0xa0(sp) */ u_char cr, /* 0xa4(sp) */ u_char cg, /* fp 30 */ u_char cb, /* 0x190(sp) */ int a) {
	/* s0 16 */ u_char a;
	/* f20 58 */ float rad;
	/* f27 65 */ float div;
	/* s1 17 */ int i;
	/* 0x0(sp) */ int x[20];
	/* 0x50(sp) */ int y[20];
	/* t2 10 */ int z;
	/* s5 21 */ int mpri;
}

/* 001f5e40 00000428 */ void AngleForWin(/* a0 4 */ int pri, /* s2 18 */ short int xo, /* s4 20 */ short int yo, /* s0 16 */ short int r, /* s1 17 */ u_char ptn) {
	/* f22 60 */ float px;
	/* f20 58 */ float py;
	/* f21 59 */ float rad;
	/* f25 63 */ float div;
	/* s3 19 */ int i;
	/* 0x0(sp) */ int x[20];
	/* 0x50(sp) */ int y[20];
	/* t0 8 */ int z;
	/* 0xa0(sp) */ int mpri;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_option.c
// *****************************************************************************

/* 001f6268 00000010 */ void NewgameMenuOptionInit() {}
/* 001f6278 00000010 */ void LoadgameMenuOptionInit() {}
/* 001f6288 00000058 */ void StartOptionModeInit(/* a0 4 */ u_char mode) {}
/* 001f62e0 00000068 */ void IngameMenuOption() {}
/* 001f6348 00000b40 */ char MenuOptionPad(/* s2 18 */ u_char *csr, /* s1 17 */ u_char *mode) {}
/* 001f6e88 000000a0 */ static void MenuOptionDisp(/* s2 18 */ u_char csr, /* s3 19 */ u_char mode, /* s1 17 */ u_char io) {}
/* 001f6f28 00000008 */ static void OptionCntInit() {}
/* 001f6f30 0000003c */ static void OptionCntRenew() {}

/* 001f6f70 00000278 */ static void OptionModeInOut() {
	/* s0 16 */ int i;
	/* f2 40 */ float fade_in;
	/* f4 42 */ float fade_out;
}

/* 001f71e8 0000008c */ static void OptionModeInOut2() {}
/* 001f7278 00000134 */ void DspOptCtrl(/* s2 18 */ u_char csr, /* s1 17 */ u_char mode, /* s0 16 */ u_char alpha, /* s3 19 */ u_char ttl) {}
/* 001f73b0 0000007c */ static void DspAlpCtrl(/* a0 4 */ u_char *src, /* a1 5 */ u_char mode, /* a2 6 */ u_char alpha) {}
/* 001f7430 000000ec */ static void DspOptMain(/* a0 4 */ u_char csr, /* a1 5 */ u_char mode, /* a2 6 */ u_char alp0, /* a3 7 */ u_char alp1, /* t0 8 */ u_char alp2, /* t1 9 */ u_char ttl) {}

/* 001f7520 0000025c */ static void DspOptCsr(/* s2 18 */ u_char csr, /* s1 17 */ u_char mode, /* s3 19 */ u_char alpha) {
	/* 0x0(sp) */ OPT_CSR_POS csr_pos[12];
	/* 0x30(sp) */ int rgb1;
	/* 0x34(sp) */ int rgb2;
}

/* 001f7780 000001c8 */ static void DspBigFlame1(/* s1 17 */ u_char alpha, /* a1 5 */ u_char str_mode) {}

/* 001f7948 00000234 */ static void DspBigFlame2(/* s1 17 */ u_char alpha, /* a1 5 */ u_char str_mode) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001f7b80 000000bc */ static void DspSmlFlame1(/* s0 16 */ u_char alpha, /* a1 5 */ u_char str_mode) {}
/* 001f7c40 000000c0 */ static void DspSmlFlame2(/* s0 16 */ u_char alpha, /* a1 5 */ u_char str_mode) {}
/* 001f7d00 0000009c */ static void DspMsgWin(/* a0 4 */ u_char csr, /* a1 5 */ u_char alpha) {}

/* 001f7da0 00000118 */ void StepLinesSimpleDraw(/* s1 17 */ short int *p_stp[2], /* s5 21 */ u_char r, /* s4 20 */ u_char g, /* s3 19 */ u_char b, /* s2 18 */ u_char alpha) {
	/* s0 16 */ int i;
}

/* 001f7eb8 00000214 */ void SimpleHorLine(/* s1 17 */ short int *p_stp[3], /* s5 21 */ u_char r, /* s4 20 */ u_char g, /* s3 19 */ u_char b, /* s2 18 */ u_char alpha, /* s6 22 */ int typ) {
	/* s7 23 */ int i;
}

/* 001f80d0 00000d80 */ static void DspPadType(/* s5 21 */ u_char alpha, /* a1 5 */ u_char ttl) {
	/* s4 20 */ int i;
	/* s4 20 */ int typ;
	/* 0x550(sp) */ int rev;
	/* s2 18 */ int mov;
	/* 0x0(sp) */ SPRT_DAT ssd;
	/* 0x20(sp) */ DISP_SPRT ds;
	/* 0xb0(sp) */ short int pnt_stp3[12][3];
	/* 0x100(sp) */ short int pnt_stp4[62][2];
	/* 0x200(sp) */ short int pnt_stp5[62][2];
	/* 0x300(sp) */ short int pnt_stp6[5][2];
	/* 0x320(sp) */ short int p_idx4[18][2];
	/* 0x370(sp) */ short int p_idx5[18][2];
	/* 0x3c0(sp) */ short int f_idx[3][18];
	/* 0x430(sp) */ short int f_idx2[4][18];
	/* 0x4c0(sp) */ short int f_col[4][18];
}

/* 001f8e50 00000374 */ static void DspLgtScrn(/* s0 16 */ u_char alpha, /* a1 5 */ u_char ttl) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/sp_menu.c
// *****************************************************************************

/* 001f91c8 00000010 */ void SavePointMenuInit() {}
/* 001f91d8 0000002c */ void SavePointMenuOpen() {}
/* 001f9208 00000110 */ void SavePointMenuOpenInit(/* a0 4 */ u_char msn) {}
/* 001f9318 000000c4 */ void BtlModSaveInit() {}

/* 001f93e0 00000f18 */ char SavePointMenuMain(/* s4 20 */ u_char msn) {
	/* s6 22 */ u_char mode;
	/* s2 18 */ u_char rtrn;
	/* s1 17 */ int is_btlmode;
}

/* 001fa2f8 0000054c */ void SavePointMenuModeSlct(/* a0 4 */ u_char msn, /* s4 20 */ u_char mode) {}

/* 001fa848 000009d8 */ void SavePointMenuModeSlctDisp(/* s7 23 */ u_char msn, /* s4 20 */ u_char csr3, /* fp 30 */ u_char csr4, /* s2 18 */ u_char alp_max, /* s1 17 */ u_char mode) {
	/* s0 16 */ int i;
	/* v1 3 */ u_char alp;
	/* a2 6 */ int rgb;
	/* 0x0(sp) */ short int csr_x0[4];
	/* 0x10(sp) */ short int csr_x1[4];
	/* 0x20(sp) */ short int csr_x2[4];
	/* s5 21 */ short int csr;
	/* sdata 3571e8 */ static short int adj_x;
	/* sdata 3571ea */ static short int adj_y;
}

/* 001fb220 00000008 */ void SavePointMenuAlbum() {}
/* 001fb228 00000068 */ void SavePointMenuSave() {}
/* 001fb290 000007d8 */ static u_char SaveConte() {}

/* 001fba68 0000097c */ void DspMemSavePoint(/* a0 4 */ u_char msk, /* s7 23 */ u_char msg, /* 0x0(sp) */ u_char fdt, /* s4 20 */ u_char svp, /* 0x4(sp) */ u_char alt, /* 0x8(sp) */ u_char csr0, /* fp 30 */ u_char csr1, /* 0xc(sp) */ u_char csr2, /* 0xe0(sp) */ int yes_no, /* 0xe8(sp) */ int alp_max, /* 0xf0(sp) */ int type) {
	/* 0x10(sp) */ u_char yes_no;
	/* s5 21 */ u_char alp_max;
	/* s3 19 */ u_char type;
	/* s0 16 */ int i;
	/* s2 18 */ char num;
	/* 0x14(sp) */ u_char flg;
	/* a1 5 */ u_short msk_add;
	/* v1 3 */ u_short fdt_add;
	/* v1 3 */ u_short svp_add;
	/* a2 6 */ u_char alpha;
}

/* 001fc3e8 0000033c */ static void WarningMsg(/* s0 16 */ u_char msg, /* s2 18 */ u_char csr0, /* s1 17 */ u_char alp, /* s3 19 */ u_char ha) {
	/* f0 38 */ float pos_y;
}

/* 001fc728 000000b0 */ static void GetSvpNo(/* s1 17 */ u_char *no) {
	/* a1 5 */ int i;
	/* a3 7 */ u_char svp_no;
}

/* 001fc7d8 00000008 */ char SaveCamChk() {}
/* 001fc7e0 000000a4 */ static void DspSavePoint(/* a0 4 */ u_char csr1, /* a1 5 */ u_char csr2, /* a2 6 */ u_char alp, /* a3 7 */ u_char type) {}

/* 001fc888 00000428 */ static void DspSpLenz(/* a0 4 */ u_char dsp_no, /* a1 5 */ u_char alp) {
	/* f2 40 */ float dec;
}

/* 001fccb0 000001e4 */ static void DspSpCate(/* s3 19 */ u_char csr1, /* a1 5 */ u_char csr2, /* s1 17 */ u_char alp) {}

/* 001fce98 00000328 */ static void DspSpData(/* s4 20 */ u_char csr2, /* s2 18 */ u_char alp, /* s3 19 */ u_char type) {
	/* s0 16 */ int i;
	/* a0 4 */ u_short pos_y;
	/* f23 61 */ float csr_alp;
}

/* 001fd1c0 00000098 */ static void DspSpFile(/* a0 4 */ u_char file_no, /* a1 5 */ u_char pos_y, /* a2 6 */ u_char alp, /* a3 7 */ u_char type) {}

/* 001fd258 00000730 */ static void DspSpInfo(/* a1 5 */ u_char file_no, /* s6 22 */ u_char pos_y, /* s4 20 */ u_char alp, /* a3 7 */ u_char type) {
	/* s3 19 */ u_char end_showzo;
	/* s0 16 */ u_char sv_pht;
}

/* 001fd988 00000094 */ static void DspSpFile2(/* a0 4 */ u_char file_no, /* a1 5 */ u_char pos_y, /* a2 6 */ u_char alp, /* a3 7 */ u_char type) {}
/* 001fda20 000003e4 */ static void DspSpInfo2(/* a0 4 */ u_char csr_no, /* s4 20 */ u_char pos_y, /* s3 19 */ u_char alp, /* a3 7 */ u_char type) {}

/* 001fde08 000004a8 */ char AlbmSlct(/* t3 11 */ u_char csr3, /* a1 5 */ u_char step, /* a2 6 */ u_char alp_max, /* a3 7 */ u_char ini) {
	/* s1 17 */ int i;
	/* f4 42 */ float per;
	/* s2 18 */ char rtrn;
	/* sbss 357b90 */ static u_char book_anm;
	/* sbss 357b91 */ static u_char back_alp;
	/* sbss 357b92 */ static u_char csr_bak;
	/* sbss 357b93 */ static u_char csr_bak2;
	/* 0x0(sp) */ BOOK init[6];
	/* 0x50(sp) */ BOOK move;
}

/* 001fe2b0 000001d8 */ static void OpenBook(/* a0 4 */ int i, /* s1 17 */ BOOK *book) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 001fe488 00000030 */ static void SpMsgWin(/* a0 4 */ u_char alpha) {}
/* 001fe4b8 0000017c */ static void SpSideBar(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ u_char alpha) {}
/* 001fe638 00000068 */ static void SpTrFlsh(/* a0 4 */ short int pos_x, /* a1 5 */ short int pos_y, /* a2 6 */ short int alpha) {}
/* 001fe6a0 0000033c */ static void DspSaveTitle(/* s0 16 */ u_char type, /* s3 19 */ short int pos_x, /* s2 18 */ short int pos_y, /* a3 7 */ u_char alp, /* s1 17 */ u_char pri) {}
/* 001fe9e0 0000006c */ static void PhotoDataExchange() {}

/* 001fea50 000000dc */ static int AlbmDesignLoadInGame(/* v1 3 */ u_char side, /* a1 5 */ u_char type) {
	/* a2 6 */ u_int addr;
	/* v0 2 */ int load_id;
}

/* 001feb30 00000034 */ void AlbumModeInGameOverInit() {}

/* 001feb68 000008bc */ char AlbumModeInGameOver() {
	/* s5 21 */ char rtrn;
}

/* 001ff428 00000030 */ int SavePointLightJudge() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/door_conte.c
// *****************************************************************************

/* 001ff458 00000098 */ void DoorOpenConteInit() {}

/* 001ff4f0 000001fc */ u_char DoorOpenConte() {
	/* s0 16 */ u_char anm;
	/* sdata 3571f8 */ static int i;
	/* sdata 3571fc */ static u_char one_flg;
}

/* 001ff6f0 0000000c */ static void DoorConteInit() {}

/* 001ff700 000000c8 */ static void PlayerPosAdjust(/* a0 4 */ u_char *time, /* a1 5 */ u_char max) {
	/* f7 45 */ float per;
}

/* 001ff7c8 0000006c */ static void PlyrPosReSet() {
	/* v0 2 */ PLYR_WRK *pwp;
	/* s1 17 */ MOVE_BOX *mbp;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/photo/photo.c
// *****************************************************************************

/* 001ff838 000002d4 */ long int PhotoScoreCount() {
	/* s1 17 */ long int score;
	/* s1 17 */ int i;
	/* f20 58 */ float point;
	/* f21 59 */ float point_2d;
}

/* 001ffb10 00000020 */ int SubjectScoreCount(/* a0 4 */ SUBJECT_WRK *sj) {
	/* f0 38 */ float score;
}

/* 001ffb30 00000228 */ int SpecialPhotoMakeJudge() {
	/* s1 17 */ int count;
	/* t1 9 */ int ret;
	/* s0 16 */ u_char no;
	/* data 33fab0 */ static int hint_tbl[48];
	/* data 33fb70 */ static int hint_rea_tbl[25];
}

/* 001ffd58 000001b4 */ void AddPhotoData() {
	/* v1 3 */ int i;
	/* a3 7 */ int dust;
}

/* 001fff10 00000068 */ int GetSavePhotoNo() {}

/* 001fff78 0000009c */ void DeletePhotoData(/* a0 4 */ u_char no) {
	/* a1 5 */ int i;
	/* t1 9 */ int dust;
}

/* 00200018 000002a0 */ void GetRecordSubject(/* a0 4 */ PICTURE_WRK *pic) {
	/* a0 4 */ int i;
	/* 0x0(sp) */ int sort[16][3];
	/* 0xc0(sp) */ int tmp[3];
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/photo/pht_main.c
// *****************************************************************************

/* 002002b8 0000001c */ void PhotoCtrlInit() {}

/* 002002d8 000007dc */ void PhotoCtrl() {
	/* s1 17 */ int i;
	/* sbss 357bb0 */ static int load_id1;
	/* sbss 357bb4 */ static int load_id2;
	/* sdata 357204 */ static int btfl;
	/* sdata 357208 */ static int cnt;
	/* sdata 35720c */ static int fd_cnt;
	/* sdata 357210 */ static int no;
	/* a2 6 */ int fl;
}

/* 00200ab8 00000038 */ void InitPazEneTexLoad() {
	/* a0 4 */ int i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/photo/pht_make.c
// *****************************************************************************

/* 00200af0 00000020 */ void InitPhotoMake() {}

/* 00200b10 000001a0 */ void CopyScreenToBuffer(/* s1 17 */ int addr, /* s0 16 */ int szfl, /* s4 20 */ int mx, /* a3 7 */ int my, /* s2 18 */ int mw, /* t1 9 */ int mh) {
	/* s3 19 */ int *data_i;
	/* s0 16 */ short int *data_o;
	/* a3 7 */ int x;
	/* t0 8 */ int y;
	/* fp 30 */ int oneli;
	/* s5 21 */ int onelo;
	/* a0 4 */ u_int un;
	/* s7 23 */ int myy;
	/* s6 22 */ int mhh;
}

/* 00200cb0 00000470 */ void DrawPhotoBuffer(/* s2 18 */ u_int pri, /* t3 11 */ int addr, /* t4 12 */ int szfl, /* a3 7 */ int x, /* t0 8 */ int y, /* t1 9 */ int szw, /* t2 10 */ int szh, /* s3 19 */ int mszw, /* 0x1e0(sp) */ int mszh, /* 0x1e8(sp) */ int ftype, /* 0x1f0(sp) */ int alp, /* 0x1f8(sp) */ int ztype) {
	/* s5 21 */ int mszh;
	/* fp 30 */ int ftype;
	/* s4 20 */ u_char alp;
	/* t2 10 */ int ztype;
	/* s1 17 */ u_long128 *data_i;
	/* s0 16 */ int dbw;
	/* 0x0(sp) */ sceGsLoadImage gs_limage;
	/* f25 63 */ float fh;
	/* f27 65 */ float xx;
	/* f20 58 */ float yy;
	/* 0x60(sp) */ SPRITE_DATA sd;
	/* 0xc0(sp) */ DRAW_ENV de;
}

/* 00201120 00000100 */ void CompressData(/* s2 18 */ int addri, /* s4 20 */ int addro, /* s5 21 */ int n) {
	/* a0 4 */ int one_size;
	/* s0 16 */ u_int quality;
}

/* 00201220 00000090 */ void UncompressData(/* a0 4 */ int addri, /* a1 5 */ int n, /* a3 7 */ int addro) {
	/* v0 2 */ int one_size;
	/* v1 3 */ u_int type;
}

/* 002012b0 0000001c */ void TakePhotoFromScreen() {}

/* 002012d0 0000007c */ void MakeSPhotoFromWorkArea(/* a0 4 */ int n) {
	/* s0 16 */ int addr;
}

/* 00201350 00000094 */ void MakeSPhotoFromCompress(/* v1 3 */ int ni, /* a1 5 */ int no) {
	/* s0 16 */ int addr;
}

/* 002013e8 0000005c */ void DrawSPhotoFromSmallPhotoArea(/* a0 4 */ int n, /* a1 5 */ int pri, /* t3 11 */ int ftype, /* a3 7 */ int x, /* t0 8 */ int y, /* t1 9 */ u_char alp) {}

/* 00201448 00000060 */ void DrawSPhotoFromSmallPhotoAreaAD(/* a0 4 */ int addr, /* a1 5 */ int n, /* a2 6 */ int pri, /* t3 11 */ int ftype, /* t0 8 */ int x, /* t1 9 */ int y, /* t2 10 */ u_char alp) {
	/* a1 5 */ int addr2;
}

/* 002014a8 00000054 */ void DrawSPhotoFromSmallPhotoArea2(/* a0 4 */ int n, /* a1 5 */ int pri, /* t5 13 */ int ftype, /* a3 7 */ int x, /* t0 8 */ int y, /* t1 9 */ int szw, /* t2 10 */ int szh, /* t3 11 */ u_char alp) {}

/* 00201500 00000060 */ void DrawSPhotoFromSmallPhotoArea2AD(/* a0 4 */ int addr, /* a1 5 */ int n, /* a2 6 */ int pri, /* t5 13 */ int ftype, /* t0 8 */ int x, /* t1 9 */ int y, /* t2 10 */ int szw, /* t3 11 */ int szh, /* 0x30(sp) */ int alp) {
	/* a1 5 */ int addr2;
}

/* 00201560 00000014 */ void CompPhotoFromWorkArea(/* a0 4 */ int n) {}
/* 00201578 0000005c */ void DrawPhotoFromWorkArea(/* a0 4 */ int pri, /* a1 5 */ int ftype, /* a2 6 */ int x, /* t3 11 */ int y, /* t4 12 */ int szw, /* t5 13 */ int szh, /* t2 10 */ u_char alp) {}
/* 002015d8 00000008 */ void DrawPhotoFromCompress(/* a0 4 */ int n, /* a1 5 */ u_int pri, /* a2 6 */ int ftype, /* a3 7 */ int x, /* t0 8 */ int y, /* t1 9 */ int szw, /* t2 10 */ int szh, /* t3 11 */ u_char alp) {}
/* 002015e0 00000014 */ void UncompressPhoto(/* a1 5 */ int n) {}
/* 002015f8 00000008 */ void UncompressPhotoAD(/* a0 4 */ int addr, /* a1 5 */ int n) {}
/* 00201600 00000044 */ void DrawPhotoFromPhotoWrk(/* a0 4 */ int n, /* a1 5 */ u_int pri, /* a2 6 */ int ftype, /* a3 7 */ int x, /* t0 8 */ int y, /* t1 9 */ int szw, /* t2 10 */ int szh, /* t3 11 */ u_char alp) {}

/* 00201648 0000003c */ void CopyPhoto(/* a0 4 */ int addri, /* a1 5 */ int ni, /* a2 6 */ int addro, /* a3 7 */ int no) {
	/* t0 8 */ int i;
	/* a2 6 */ short int *data_o;
	/* v0 2 */ int one_size;
}

/* 00201688 0000003c */ void CopySPhoto(/* a0 4 */ int addri, /* a1 5 */ int ni, /* a2 6 */ int addro, /* a3 7 */ int no) {
	/* t0 8 */ int i;
	/* a2 6 */ short int *data_o;
	/* v0 2 */ int one_size;
}

/* 002016c8 000000dc */ void DrawPhotoHinttex(/* s1 17 */ u_int pri, /* a1 5 */ int num) {
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 002017a8 000004c0 */ void DrawPhotoHinttex2(/* t0 8 */ u_int sw, /* s4 20 */ u_int pri, /* a2 6 */ int num) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* f0 38 */ float f;
	/* f20 58 */ float pos;
	/* s3 19 */ u_char alp;
	/* s0 16 */ u_char alp2;
	/* a2 6 */ int time;
	/* v0 2 */ int target;
	/* s2 18 */ SPRT_DAT *sd;
	/* a3 7 */ int max;
	/* 0x90(sp) */ SQAR_DAT sq;
	/* 0xb0(sp) */ DISP_SQAR dq;
	/* t3 11 */ int i;
}

/* 00201c68 00000294 */ void DrawPhotoEffect(/* s0 16 */ u_int pri, /* s1 17 */ int type) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
	/* f4 42 */ float sc;
	/* f21 59 */ float velx;
	/* f20 58 */ float vely;
}

/* 00201f00 00000118 */ void DrawPhotoFilter(/* s0 16 */ u_int pri, /* s1 17 */ int type, /* s2 18 */ u_char alp) {
	/* 0x0(sp) */ DISP_SPRT ds;
	/* data 340f18 */ static SPRT_DAT phtdat[10];
}

/* 00202018 00000200 */ void DispPhotoFrame0() {
	/* s0 16 */ int i;
	/* a1 5 */ int num1;
	/* a2 6 */ int num2;
}

/* 00202218 00000240 */ void DispPhotoFrame00(/* a0 4 */ int flag) {
	/* sbss 357bb8 */ static u_char cnt;
	/* sdata 357228 */ static int flow;
	/* s1 17 */ u_char a;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
}

/* 00202458 00000ab8 */ int DispPhotoFrame1(/* s2 18 */ int fl) {
	/* sdata 35722c */ static int time1;
	/* sdata 357230 */ static int cnt;
	/* sdata 357234 */ static u_char alp1;
	/* sdata 357235 */ static u_char alp2;
	/* sdata 357238 */ static int flash_fr;
	/* sdata 35723c */ static int fl_cnt;
	/* s1 17 */ u_char a;
	/* s0 16 */ int i;
	/* a1 5 */ int j;
	/* s0 16 */ int x;
	/* s1 17 */ int y;
	/* 0x220(sp) */ int ret;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
	/* 0xb0(sp) */ SQAR_DAT sq;
	/* 0xd0(sp) */ DISP_SQAR dq;
	/* a3 7 */ int i;
	/* 0xb0(sp) */ DISP_SPRT ds;
	/* 0x150(sp) */ SPRT_DAT sd;
	/* 0x170(sp) */ DISP_SPRT ds;
	/* 0x200(sp) */ SPRT_DAT sd;
	/* 0x170(sp) */ SQAR_DAT sq;
	/* 0x190(sp) */ DISP_SQAR dq;
	/* a3 7 */ int i;
	/* f26 64 */ float fh;
	/* f20 58 */ float szw;
	/* f20 58 */ float szh;
	/* f27 65 */ float szhc;
}

/* 00202f10 00000370 */ void DispPhotoFrame2() {
	/* f30 68 */ float x;
	/* f29 67 */ float y;
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0x20(sp) */ DISP_SQAR dq;
	/* a1 5 */ int i;
}

/* 00203280 000003ac */ void DispPhotoFrame2_2(/* s4 20 */ int type) {
	/* f29 67 */ float x;
	/* f28 66 */ float y;
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0x20(sp) */ DISP_SQAR dq;
	/* a1 5 */ int i;
	/* f25 63 */ float szw;
	/* f20 58 */ float szh;
}

/* 00203630 00000560 */ void DispPhotoFrame2_3(/* s5 21 */ int type) {
	/* f29 67 */ float x;
	/* f28 66 */ float y;
	/* 0x0(sp) */ DISP_SPRT ds;
	/* 0x90(sp) */ SPRT_DAT sd;
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0x20(sp) */ DISP_SQAR dq;
	/* a1 5 */ int i;
	/* f25 63 */ float szw;
	/* f20 58 */ float szh;
}

/* 00203b90 00000454 */ void SetNegaFilter(/* a1 5 */ int type) {
	/* f2 40 */ float CHANGE_TIME;
	/* f25 63 */ float x;
	/* f24 62 */ float y;
	/* f21 59 */ float y11;
	/* f20 58 */ float y12;
	/* f23 61 */ float y21;
	/* f22 60 */ float y22;
	/* f0 38 */ float f;
	/* a2 6 */ int endf;
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0x20(sp) */ DISP_SQAR dq;
	/* a1 5 */ int i;
	/* 0x0(sp) */ SQAR_DAT sq;
	/* 0xa0(sp) */ DISP_SQAR dq;
	/* a1 5 */ int i;
}

/* 00203fe8 000005b0 */ void PhotoMake() {
	/* s2 18 */ int num2;
	/* 0x0(sp) */ STR_DAT sd;
	/* 0x30(sp) */ DISP_STR ds;
	/* s0 16 */ int num;
	/* 0x0(sp) */ STR_DAT sd;
	/* 0x70(sp) */ DISP_STR ds;
	/* s0 16 */ int num;
	/* s0 16 */ u_char *strp;
	/* sdata 357240 */ static int fl;
}

/* 00204598 000002f4 */ void PhotoMake_EneDead() {
	/* s1 17 */ int i;
	/* v1 3 */ int num1;
	/* a2 6 */ int num2;
}

/* 00204890 00000008 */ void PhotoMakeSaveInit() {}
/* 00204898 00000034 */ void DrawPicture(/* a1 5 */ int pri, /* a1 5 */ int addr, /* a2 6 */ int n, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float szw, /* f15 53 */ float szh, /* a3 7 */ u_char alp) {}
/* 002048d0 00000008 */ void CopyPicture(/* a0 4 */ int addri, /* a1 5 */ int ni, /* a2 6 */ int addro, /* a3 7 */ int no) {}
/* 002048d8 0000000c */ void ReqSavePicture() {}
/* 002048e8 00000008 */ void PhotoMakeSave() {}
/* 002048f0 000000b4 */ void PhotoMakeSave2() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/plyr/plyr_ctl.c
// *****************************************************************************

/* 002049a8 00000160 */ void PlyrCtrlMain() {}
/* 00204b08 00000014 */ int PlyrDoorOpenChk() {}

/* 00204b20 00000054 */ u_char ShortPauseChk() {
	/* a1 5 */ u_char chk;
}

/* 00204b78 0000014c */ void PlyrCondChk() {}

/* 00204cc8 00000190 */ void PlyrDmgChk() {
	/* sdata 357267 */ static u_char avoid_chk_tm;
	/* sdata 357268 */ static u_char wrong_chk;
}

/* 00204e58 00000040 */ void PlyrVibCtrl(/* a0 4 */ u_char time) {}

/* 00204e98 00000190 */ void PlyrFinderModeChk() {
	/* a2 6 */ u_short pad_finder;
	/* a0 4 */ u_short pad_finder_bk;
}

/* 00205028 000002c0 */ void FinderInSet() {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ float dist[2];
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char trgt;
}

/* 002052e8 000000ac */ void FinderEndSet() {
	/* a0 4 */ u_char i;
}

/* 00205398 0000005c */ void ClrEneSta() {
	/* a1 5 */ u_char i;
}

/* 002053f8 000001d8 */ void PlyrHeightCtrl(/* s1 17 */ float *tv) {
	/* 0x0(sp) */ sceVu0FVECTOR p;
	/* 0x10(sp) */ sceVu0FVECTOR av;
}

/* 002055d0 00000048 */ void PlyrNormalCtrl() {}

/* 00205618 00000280 */ void PlyrSpotMoveCtrl() {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float r;
	/* f21 59 */ float rcng_adj;
	/* a0 4 */ u_char d;
}

/* 00205898 0000006c */ void PlyrFinderCtrl() {}
/* 00205908 00000054 */ void PlyrCamRotCngChk() {}

/* 00205960 000000fc */ void EneHPchk() {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ float dist[2];
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char no;
}

/* 00205a60 000001e8 */ void FModeScreenEffect() {
	/* s1 17 */ ENE_WRK *ew;
	/* 0x0(sp) */ float dist[2];
	/* f12 50 */ float alpha;
	/* s0 16 */ u_char i;
	/* s0 16 */ u_char crate;
}

/* 00205c48 000001ac */ void PlyrDmgCtrl() {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* a0 4 */ u_char n;
}

/* 00205df8 00000050 */ u_char LeverGachaChk() {
	/* s0 16 */ u_char result;
	/* sdata 357270 */ static u_char lever_dir_old;
}

/* 00205e48 00000030 */ void PlyrFinderEnd() {}

/* 00205e78 0000035c */ void PlyrNAnimeCtrl() {
	/* s2 18 */ u_int psta;
	/* a2 6 */ u_char anime_no;
	/* s4 20 */ u_char frame;
	/* t1 9 */ u_char rl_chk;
	/* s1 17 */ u_char i;
	/* s0 16 */ u_char j;
	/* 0x0(sp) */ u_int psta_chk_tbl[18];
	/* 0x50(sp) */ u_char pmani_no_tbl[18][2];
}

/* 002061d8 00000028 */ void SetPlyrAnime(/* a0 4 */ u_char anime_no, /* a1 5 */ u_char frame) {}

/* 00206200 000003e4 */ void PlyrTrembleChk() {
	/* s1 17 */ FURN_WRK *fw;
	/* s1 17 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* f20 58 */ float dist;
	/* f0 38 */ float dist_chk;
	/* 0x30(sp) */ u_int fsta;
	/* s0 16 */ u_char i;
	/* s6 22 */ u_char chk;
	/* s2 18 */ u_char no;
	/* 0x10(sp) */ u_short mvib_time_tbl[5];
	/* 0x20(sp) */ u_char mvib_deg_tbl[5];
	/* sdata 35727e */ static u_short mvib_time0;
	/* sdata 357280 */ static u_short mvib_time1;
	/* sbss 357bba */ static u_char mvib_degree;
}

/* 002065e8 00000048 */ void ReqPlyrHPdown(/* a0 4 */ u_short deg, /* a1 5 */ u_char prio) {}

/* 00206630 00000180 */ void PlyrHPdwonCtrl() {
	/* a1 5 */ u_short down;
}

/* 002067b0 00000058 */ void PlyrSpotLightOnChk() {}

/* 00206808 0000055c */ void SetPlyrSpotLight(/* s3 19 */ u_char id) {
	/* 0x0(sp) */ SPOT_WRK ts0;
	/* 0x40(sp) */ SPOT_WRK ts1;
	/* 0x80(sp) */ sceVu0FVECTOR tv;
	/* 0x90(sp) */ sceVu0FVECTOR rv;
	/* a2 6 */ u_char i;
}

/* 00206d68 000001f0 */ void PlyrSubAtkChk() {
	/* s0 16 */ u_char hit;
	/* 0x0(sp) */ int sub_se_tbl[4];
}

/* 00206f58 0000012c */ u_char PSAchk0() {
	/* s0 16 */ ENE_WRK *ew;
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char chk;
}

/* 00207088 0000013c */ u_char PSAchk1() {
	/* s0 16 */ ENE_WRK *ew;
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char chk;
}

/* 002071c8 00000158 */ u_char PSAchk3() {
	/* s0 16 */ ENE_WRK *ew;
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char chk;
}

/* 00207320 00000144 */ u_char PSAchk2() {
	/* s0 16 */ ENE_WRK *ew;
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char chk;
}

/* 00207468 0000033c */ void PSAchk4(/* s4 20 */ u_char id) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR tr;
	/* 0x20(sp) */ sceVu0FVECTOR rv;
	/* s2 18 */ ENE_WRK *ew;
	/* 0x30(sp) */ float dist[2];
	/* f20 58 */ float rot;
	/* s0 16 */ u_char i;
	/* v1 3 */ u_char j;
	/* s6 22 */ u_char trgt;
}

/* 002077a8 000001cc */ void PSAchk5() {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* 0x10(sp) */ float dist[2];
	/* s1 17 */ u_char i;
	/* s2 18 */ u_char t;
}

/* 00207978 00000258 */ void PlyrPhotoChk() {
	/* a1 5 */ u_short pad_shutter;
}

/* 00207bd0 00000394 */ void EneFrameHitChk() {
	/* s1 17 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR rv;
	/* 0x20(sp) */ PP_JUDGE ppj;
	/* f20 58 */ float dpe;
	/* f1 39 */ float dce;
	/* 0xd0(sp) */ float tx;
	/* 0xd4(sp) */ float ty;
	/* s3 19 */ u_char i;
	/* 0xd8(sp) */ u_char chk;
	/* 0xdc(sp) */ u_char chk2;
}

/* 00207f68 000002bc */ void PlyrChargeCtrl(/* a0 4 */ u_char req, /* a1 5 */ ENE_WRK *ew) {
	/* 0x0(sp) */ u_short ctime[4];
	/* 0x10(sp) */ float cldown[4];
	/* f0 38 */ float dpe;
	/* f0 38 */ float rate0;
	/* f2 40 */ float rate1;
	/* a2 6 */ u_char cn;
	/* t0 8 */ u_char cl_max;
}

/* 00208228 00000110 */ void PhotoFlyChk() {
	/* s1 17 */ FLY_WRK *fw;
	/* 0x0(sp) */ float tx;
	/* 0x4(sp) */ float ty;
	/* s2 18 */ u_char i;
}

/* 00208338 000000fc */ int FrameInsideChk(/* a0 4 */ float *tv, /* s1 17 */ float *tx, /* s0 16 */ float *ty) {
	/* f2 40 */ float minx;
	/* f4 42 */ float maxx;
	/* f3 41 */ float miny;
	/* f0 38 */ float maxy;
	/* s2 18 */ int result;
}

/* 00208438 0000025c */ int FrameInsideChkFurn(/* s0 16 */ FURN_WRK *fw, /* 0xc8(sp) */ float *degree, /* 0xcc(sp) */ u_int fsta) {
	/* 0x0(sp) */ PP_JUDGE ppj;
	/* 0xb0(sp) */ sceVu0FVECTOR fpc;
	/* s2 18 */ int i;
	/* s3 19 */ int pchk;
	/* s5 21 */ int ret;
	/* f20 58 */ float magnify;
	/* 0xc0(sp) */ float tx;
	/* 0xc4(sp) */ float ty;
}

/* 00208698 00000310 */ int FrameInsideChkRare(/* a0 4 */ int wrk_no, /* 0x18(sp) */ float *degree) {
	/* s5 21 */ int i;
	/* s3 19 */ int rg_no;
	/* 0x1c(sp) */ int ret;
	/* f20 58 */ float magnify;
	/* 0x10(sp) */ float tx;
	/* 0x14(sp) */ float ty;
	/* 0x0(sp) */ sceVu0FVECTOR rpc;
}

/* 002089a8 000000d8 */ u_short PhotoDmgChk() {
	/* s1 17 */ ENE_WRK *ew;
	/* s2 18 */ u_short dmg;
}

/* 00208a80 00000164 */ u_short PhotoDmgChkSub(/* t0 8 */ ENE_WRK *ew) {
	/* v0 2 */ u_int i;
	/* 0x0(sp) */ u_char film_up_tbl[5];
}

/* 00208be8 00000044 */ void PhotoPointSet() {}

/* 00208c30 000000cc */ void PhotoPointChkEne() {
	/* s0 16 */ u_char i;
	/* s1 17 */ u_char cnt;
}

/* 00208d00 000001d8 */ void PhotoPointChkFurn() {
	/* s4 20 */ PHOTO_WRK *pw;
	/* s0 16 */ FURN_WRK *fw;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ u_int sta;
	/* s1 17 */ u_int i;
	/* f20 58 */ float dist;
	/* 0x14(sp) */ float degree;
}

/* 00208ed8 000000b8 */ void PhotoPointChkRare() {
	/* s1 17 */ u_int i;
	/* 0x0(sp) */ float degree;
}

/* 00208f90 0000059c */ void PhotoPointCulcEne(/* t2 10 */ ENE_WRK *ew, /* a3 7 */ PHOTO_WRK *pw) {
	/* t3 11 */ SUBJECT_WRK *sw;
	/* t1 9 */ int i;
	/* a2 6 */ int point;
	/* f6 44 */ float point_plus;
	/* f3 41 */ float ratio;
	/* f0 38 */ float ratio_tmp;
	/* f0 38 */ float dist;
}

/* 00209530 0000015c */ void PhotoPointCulcFurn(/* t4 12 */ FURN_WRK *fw, /* t3 11 */ PHOTO_WRK *pw, /* f12 50 */ float dist, /* f13 51 */ float degree, /* a2 6 */ u_int stts) {
	/* t0 8 */ SUBJECT_WRK *sw;
	/* t1 9 */ int i;
}

/* 00209690 00000158 */ void PhotoPointCulcRare(/* a0 4 */ u_char wrk_no, /* a1 5 */ PHOTO_WRK *pw, /* f12 50 */ float dist, /* f13 51 */ float degree) {
	/* a1 5 */ SUBJECT_WRK *sw;
	/* a0 4 */ int i;
	/* a3 7 */ int rg_no;
	/* a2 6 */ u_char para0;
}

/* 002097e8 00000008 */ void PlyrMpRecoverChk(/* a0 4 */ u_int recov) {}

/* 002097f0 000000a0 */ void PlyrFModeMoveCtrl() {
	/* s0 16 */ MOVE_BOX *mb;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 00209890 00000028 */ void PlyrActionChk() {}

/* 002098b8 000000d8 */ void PlyrNModeMoveCtrl() {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* s0 16 */ MOVE_BOX *mb;
}

/* 00209990 00000180 */ void PlyrHitTurnChk(/* s0 16 */ MOVE_BOX *mb, /* a1 5 */ float *tv) {
	/* 0x0(sp) */ float rot;
}

/* 00209b10 00000240 */ u_char PlyrSpecialMoveChk2(/* s5 21 */ float *mv) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* 0x10(sp) */ sceVu0FVECTOR tv;
	/* 0x20(sp) */ sceVu0FVECTOR cv;
	/* 0x30(sp) */ sceVu0FVECTOR bv;
	/* s4 20 */ u_char i;
	/* s2 18 */ u_char clr;
}

/* 00209d50 000009b8 */ void PlyrSpecialMoveChk(/* s2 18 */ float *mv) {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR cv;
	/* 0x20(sp) */ sceVu0FVECTOR rv;
	/* 0x90(sp) */ float rot;
	/* f20 58 */ float adj;
	/* a1 5 */ u_char move_mot;
	/* s5 21 */ u_char up;
	/* f21 59 */ float lstep_adju;
	/* f23 61 */ float sstep_adju;
	/* f22 60 */ float sstep_adjd;
	/* 0x30(sp) */ float nlad0_adju[2];
	/* 0x40(sp) */ float nlad0_adjd[2];
	/* 0x50(sp) */ float rlad0_adju[2];
	/* 0x60(sp) */ float rlad0_adjd[2];
	/* 0x70(sp) */ float rlad1_adju[2];
	/* 0x80(sp) */ float rlad1_adjd[2];
}

/* 0020a708 000000f8 */ void PlyrPosSet(/* s1 17 */ MOVE_BOX *mb, /* s2 18 */ float *tv) {}
/* 0020a800 00000024 */ void PlyrKonwakuMove(/* a0 4 */ MOVE_BOX *mb, /* v0 2 */ float *tv) {}

/* 0020a828 000005ac */ void PlyrMovePad(/* s1 17 */ MOVE_BOX *mb, /* s0 16 */ float *tv) {
	/* 0x0(sp) */ sceVu0FVECTOR fr;
	/* 0x10(sp) */ sceVu0FVECTOR tr;
	/* 0x24(sp) */ float r;
	/* 0x20(sp) */ float rcng;
	/* s4 20 */ u_char run_chk;
	/* sdata 3572c8 */ static u_char no_rot_cng2;
	/* sdata 3572ca */ static u_short cam_cng_tm;
	/* sdata 3572cc */ static int plyr_cam_no_save;
	/* sdata 3572d0 */ static float keep_rot;
	/* sdata 3572d8 */ static float rs[2];
	/* sdata 3572e0 */ static u_char ds[5];
}

/* 0020add8 00000048 */ void GetMoveSpeed(/* a0 4 */ float *tv) {}

/* 0020ae20 000002bc */ void PlyrMovePadV(/* s0 16 */ MOVE_BOX *mb, /* s1 17 */ float *tv) {
	/* 0x0(sp) */ sceVu0FVECTOR r;
	/* f20 58 */ float delta;
	/* s4 20 */ u_char dir;
	/* sdata 3572e5 */ static u_char dir_old;
}

/* 0020b0e0 000000a8 */ void CngPlyrRotRapid(/* s0 16 */ MOVE_BOX *mb, /* 0x0(sp) */ float rot0) {}

/* 0020b188 00000110 */ void PlyrMovePadFind(/* s2 18 */ MOVE_BOX *mb, /* s0 16 */ float *tv) {
	/* f20 58 */ float rot;
	/* a0 4 */ u_char anime;
	/* s4 20 */ u_char frame;
	/* 0x0(sp) */ u_char anime_tbl[4];
}

/* 0020b298 000001b4 */ float GetMovePad(/* a0 4 */ u_char id) {
	/* f0 38 */ float rot;
	/* a1 5 */ u_char dir;
}

/* 0020b450 0000003c */ int MovePadEnableChk(/* a0 4 */ u_char *dir_save) {
	/* a1 5 */ int chk;
}

/* 0020b490 000000cc */ void PadInfoTmpSave(/* t0 8 */ u_char *dir_save, /* a1 5 */ u_char dir_now, /* a2 6 */ float *rot_save, /* f12 50 */ float rot_now) {
	/* a3 7 */ u_char i;
}

/* 0020b560 00000120 */ u_char PlyrMoveStaChk(/* f20 58 */ float pad_chk) {
	/* s1 17 */ u_char run_chk;
	/* a2 6 */ u_int psta;
}

/* 0020b680 000000fc */ u_int PlyrLeverInputChk() {
	/* a0 4 */ u_char chkx;
	/* a1 5 */ u_char chky;
	/* s0 16 */ u_int result;
}

/* 0020b780 000000e0 */ u_char PlyrMoveHitChk(/* s2 18 */ MOVE_BOX *mb, /* s0 16 */ float *tv, /* s3 19 */ u_char id) {
	/* f0 38 */ float dist;
	/* s1 17 */ u_char result;
	/* a2 6 */ u_char div;
}

/* 0020b860 000000d0 */ void InitPhotoWrk() {
	/* s2 18 */ PHOTO_WRK *pw;
	/* s0 16 */ int i;
}

/* 0020b930 00000018 */ void InitSubjectWrk(/* a0 4 */ SUBJECT_WRK *sw) {}

/* 0020b948 000000d0 */ void PlyrBattleChk() {
	/* s1 17 */ ENE_WRK *ew;
	/* s2 18 */ int i;
}

/* 0020ba18 000001a0 */ void PlyrLightSet() {
	/* s4 20 */ LIGHT_PACK *lp;
	/* 0x0(sp) */ POINT_WRK p;
	/* 0x30(sp) */ sceVu0FVECTOR tv;
	/* a1 5 */ char pr_set;
	/* s3 19 */ char po_set;
}

/* 0020bbb8 00000098 */ void PlyrMessageDisp() {}

/* 0020bc50 00000068 */ int ReqPlyrSpeAnime(/* a0 4 */ u_char anime_no, /* a1 5 */ u_char frame) {
	/* a2 6 */ int result;
}

/* 0020bcb8 0000007c */ void PlyrSpeAnimeCtrl() {
	/* s0 16 */ MOVE_BOX *mb;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
}

/* 0020bd38 00000020 */ void PlyrDWalkTmCtrl() {}

/* 0020bd58 00000684 */ float GetEnePowerDegree() {
	/* s0 16 */ FURN_WRK *fw;
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ sceVu0FVECTOR sv;
	/* 0x20(sp) */ float dist[2];
	/* f21 59 */ float degree;
	/* f20 58 */ float far;
	/* f1 39 */ float height;
	/* 0x30(sp) */ u_int fsta;
	/* s1 17 */ u_char i;
}

/* 0020c3e0 000000dc */ float CulcEP(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float degree;
}

/* 0020c4c0 00000084 */ float CulcEP2(/* a0 4 */ float *v0, /* a1 5 */ float *v1) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* f20 58 */ float degree;
}

/* 0020c548 000000f4 */ int ChkPhotoAble() {
	/* a3 7 */ int result;
	/* a1 5 */ u_char i;
}

/* 0020c640 00000190 */ int SearchRareEne() {
	/* 0x0(sp) */ sceVu0FVECTOR tv;
	/* 0x10(sp) */ float dist[2];
	/* 0x20(sp) */ float tx;
	/* 0x24(sp) */ float ty;
	/* s3 19 */ int i;
	/* s4 20 */ int result;
}

/* 0020c7d0 00000258 */ int SearchFurnHint() {
	/* 0x0(sp) */ PP_JUDGE ppj;
	/* s3 19 */ FURN_WRK *fw;
	/* 0xb0(sp) */ sceVu0FVECTOR tv;
	/* 0xc0(sp) */ float dist[2];
	/* 0xd4(sp) */ float tx;
	/* 0xd8(sp) */ float ty;
	/* 0xd0(sp) */ u_int fsta;
	/* s4 20 */ int i;
	/* s7 23 */ int result;
	/* s5 21 */ u_char pchk;
}

/* 0020ca28 00000158 */ int GetFurnHintPos(/* s0 16 */ FURN_WRK *fw, /* s1 17 */ float *tv, /* s4 20 */ u_int *fsta) {
	/* s2 18 */ u_int furn_attr;
	/* s3 19 */ int result;
}

/* 0020cb80 000000d4 */ float GetPlyrSpd() {
	/* f0 38 */ float spd;
}

/* 0020cc58 00000098 */ int PlyrNeckDirectionChk(/* s0 16 */ float *p) {}

/* 0020ccf0 0000012c */ u_char NeckTargetEneChk(/* s2 18 */ float *p) {
	/* s0 16 */ ENE_WRK *ew;
	/* 0x0(sp) */ float dist[2];
	/* s1 17 */ u_char i;
	/* s3 19 */ u_char no;
}

/* 0020ce20 0000015c */ u_char NeckTargetItemChk(/* s1 17 */ float *p) {
	/* 0x0(sp) */ float dist[2];
	/* s0 16 */ u_char i;
	/* s2 18 */ u_char no;
}

/* 0020cf80 000001dc */ u_char NeckTargetDoorChk(/* s1 17 */ float *p) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* 0x10(sp) */ float dist[2];
	/* s0 16 */ u_char i;
	/* s3 19 */ u_char no;
}

/* 0020d160 000000b8 */ u_char PlyrNoticeObjectChk(/* s1 17 */ float *ov, /* s2 18 */ float *dist) {
	/* 0x0(sp) */ sceVu0FVECTOR rv;
	/* s3 19 */ u_char result;
}

/* 0020d218 00000068 */ void ReqPlayerStop(/* a1 5 */ u_char frame) {}
/* 0020d280 00000030 */ void PlayerWarpReq(/* a0 4 */ u_char dat_no) {}
/* 0020d2b0 000001c8 */ int PlayerWarpCtrl() {}
/* 0020d478 0000001c */ void PlayerWarpRoomLoadReq() {}

/* 0020d498 000000a8 */ int ShutterChanceChk() {
	/* a2 6 */ ENE_WRK *ew;
	/* a3 7 */ u_char i;
	/* t0 8 */ int result;
}

/* 0020d540 00000070 */ void PlayerWarpReq2(/* a0 4 */ u_char dat_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/plyr/unit_ctl.c
// *****************************************************************************

/* 0020d5b0 00000048 */ void RotLimitChk(/* a0 4 */ float *rot) {}
/* 0020d5f8 00000030 */ float GetTrgtRotY(/* a0 4 */ float *p0, /* a1 5 */ float *p1) {}

/* 0020d628 000000c0 */ void GetTrgtRotFromPlyr(/* s1 17 */ float *p, /* s0 16 */ float *rot, /* s2 18 */ int id) {
	/* 0x0(sp) */ sceVu0FVECTOR dist;
}

/* 0020d6e8 000000b8 */ void GetTrgtRot(/* s1 17 */ float *p0, /* s2 18 */ float *p1, /* s0 16 */ float *rot, /* s3 19 */ int id) {
	/* 0x0(sp) */ sceVu0FVECTOR dist;
}

/* 0020d7a0 00000080 */ int GetRndSP(/* s1 17 */ u_int min, /* s0 16 */ u_int lng) {
	/* v0 2 */ long int result;
}

/* 0020d820 00000168 */ u_char ConvertRot2Dir(/* f12 50 */ float rot, /* a0 4 */ u_char id) {
	/* v1 3 */ u_char dir;
}

/* 0020d988 000000c0 */ u_char HitChkSegment2AllChk(/* s2 18 */ float *f, /* s1 17 */ float *t, /* f20 58 */ float deg) {}

/* 0020da48 000000a4 */ u_char OutSightChk(/* s2 18 */ float *tp, /* s1 17 */ float *vp, /* f21 59 */ float rot, /* f22 60 */ float sight, /* f20 58 */ float dist) {
	/* s0 16 */ u_char chk;
}

/* 0020daf0 0000005c */ int RotRngChk(/* a0 4 */ float *vp, /* a1 5 */ float *tp, /* 0x0(sp) */ float rot, /* f20 58 */ float rng) {}

/* 0020db50 00000098 */ int GetPointHeightChk(/* s1 17 */ float *tv) {
	/* s2 18 */ int result;
}

/* 0020dbe8 00000150 */ void ReqEneStop(/* a0 4 */ u_char req, /* a1 5 */ u_char except) {
	/* a3 7 */ ENE_WRK *ew;
	/* a0 4 */ FLY_WRK *fw;
	/* a2 6 */ u_char i;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/edit/test_2d.c
// *****************************************************************************

/* 0020dd38 0000000c */ void LayoutTestInit() {}
/* 0020dd48 00000040 */ void LayoutTestMain() {}

/* 0020dd88 00000180 */ void LayoutTestDisp() {
	/* 0x20(sp) */ DISP_SPRT ds;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/scn_test.c
// *****************************************************************************

/* 0020df08 00000058 */ void SceneTestCtrl() {}

/* 0020df60 000000c8 */ int SceneTestInit() {
	/* s0 16 */ int ret;
	/* sbss 357bc0 */ static int load_id;
	/* sdata 3574f0 */ static int load_st;
}

/* 0020e028 00000084 */ void SceneTestMain() {}

/* 0020e0b0 000001dc */ void SceneTestSelect() {
	/* 0x0(sp) */ char str_title[11];
	/* 0x10(sp) */ char str_press[21];
	/* 0x30(sp) */ char str_scene_no[256];
	/* v1 3 */ int ret;
	/* s1 17 */ int scene_no;
}

/* 0020e290 00000100 */ void SceneTestPlay() {
	/* s1 17 */ int end_flg;
}

/* 0020e390 00000208 */ int SceneTestLoad() {
	/* sbss 357bc4 */ static int load_id;
	/* s1 17 */ int ret;
}

/* 0020e598 00000178 */ void ScnTestMdlLoadReq(/* s2 18 */ u_int *addr) {
	/* s0 16 */ SCN_ANM_MDL *sam;
	/* s1 17 */ int i;
	/* v0 2 */ int hero_no;
}

/* 0020e710 0000019c */ int ScnTestMdlLoadWait() {
	/* s1 17 */ SCN_ANM_MDL *sam;
	/* s2 18 */ int i;
	/* v0 2 */ int hero_no;
	/* s0 16 */ int *addr;
}

/* 0020e8b0 000000d4 */ void SceneTestMenu() {
	/* s1 17 */ int end_flg;
}

/* 0020e988 000001c4 */ void SceneTestMainMenu() {
	/* s1 17 */ int i;
	/* 0x0(sp) */ char *menu_str[9];
}

/* 0020eb50 000001c4 */ void SceneTestLightSelect() {
	/* v0 2 */ FOD_LIT_SERIAL *fls;
	/* s0 16 */ int i;
	/* a1 5 */ int ret;
	/* 0x0(sp) */ char *ltype_name[4];
	/* 0x10(sp) */ char tmp_str[256];
}

/* 0020ed18 000004c0 */ void SceneTestLightData() {
	/* s7 23 */ FOD_LIT_SERIAL *fls;
	/* s4 20 */ SgLIGHT *light;
	/* 0x0(sp) */ sceVu0FVECTOR color;
	/* 0x130(sp) */ float cone_deg;
	/* s3 19 */ int i;
	/* s2 18 */ int yofs;
	/* a1 5 */ int menu_num;
	/* s3 19 */ int csr_pos;
	/* 0x10(sp) */ char *ltype_name[4];
	/* 0x20(sp) */ char *col_str[3];
	/* 0x30(sp) */ char tmp_str[256];
	/* 0x134(sp) */ float *v1;
}

/* 0020f1d8 000000c4 */ void ScnDispPrintVector(/* s4 20 */ char *ttl, /* s0 16 */ float *v, /* f21 59 */ float x, /* f20 58 */ float y) {
	/* 0x0(sp) */ char tmp_str[256];
}

/* 0020f2a0 000002fc */ void SceneTestAmbient() {
	/* fp 30 */ SCN_TEST_WRK *stw;
	/* s3 19 */ sceVu0FVECTOR *amb_p;
	/* 0x0(sp) */ char *amb_str[6];
	/* 0x20(sp) */ char *col_str[3];
	/* 0x30(sp) */ char tmp_str[256];
	/* s1 17 */ int i;
	/* s1 17 */ int j;
	/* s4 20 */ int yofs;
	/* t1 9 */ int csr_pos;
}

/* 0020f5a0 000000b4 */ void RotVectorY(/* s0 16 */ float *normal, /* s1 17 */ float *vector, /* f20 58 */ float delta) {
	/* 0x0(sp) */ sceVu0FMATRIX m0;
}

/* 0020f658 000002cc */ void SceneTestPadCamera() {
	/* s2 18 */ SgCAMERA *cam;
	/* 0x0(sp) */ sceVu0FMATRIX mat;
	/* 0x40(sp) */ sceVu0FVECTOR vec;
	/* 0x50(sp) */ sceVu0FVECTOR dir;
	/* 0x60(sp) */ sceVu0FVECTOR xz_dir;
	/* f21 59 */ float dist;
	/* f20 58 */ float accel;
}

/* 0020f928 000000ec */ void SceneTestCameraMode() {
	/* 0x0(sp) */ sceVu0FVECTOR pos[2];
	/* s2 18 */ int i;
	/* 0x20(sp) */ char *menu_str[2];
	/* 0x30(sp) */ char tmp_str[256];
	/* v1 3 */ float *v1;
	/* v1 3 */ float *v1;
}

/* 0020fa18 000003a8 */ void SceneTestFogData() {
	/* s3 19 */ int i;
	/* 0x0(sp) */ char *menu_str[7];
	/* 0x20(sp) */ char tmp_str[256];
	/* 0x120(sp) */ int fog_col[3];
	/* 0x140(sp) */ float fog_data[7];
}

/* 0020fdc0 00000238 */ void SceneTestEffect() {
	/* s1 17 */ SCN_TEST_WRK *stw;
	/* v1 3 */ SCN_EFF_CTRL *sec;
	/* s2 18 */ int i;
	/* a2 6 */ int ret;
	/* s3 19 */ int yofs;
	/* 0x0(sp) */ char tmp_str[256];
	/* 0x100(sp) */ char *on_off[2];
}

/* 0020fff8 00000880 */ void SceneTestEffectData() {
	/* s2 18 */ SCN_TEST_WRK *stw;
	/* s1 17 */ SCN_EFF_CTRL *sec;
	/* 0x0(sp) */ char tmp_str[256];
}

/* 00210878 0000026c */ void SceneTestEneEffect() {
	/* s4 20 */ SCN_TEST_WRK *stw;
	/* s2 18 */ int i;
	/* v1 3 */ int ret;
	/* s3 19 */ int yofs;
	/* s5 21 */ int non_flg;
	/* 0x0(sp) */ char *eff_name[4];
	/* 0x10(sp) */ char tmp_str[256];
}

/* 00210ae8 000003f8 */ void SceneTestEneEffFire() {
	/* s5 21 */ SCN_TEST_WRK *stw;
	/* s4 20 */ SCN_ENE_EFCT *see;
	/* s2 18 */ int i;
	/* a2 6 */ int ret;
	/* s3 19 */ int yofs;
	/* 0x0(sp) */ char tmp_str[256];
	/* 0x100(sp) */ char *rgba_str[4];
	/* 0x120(sp) */ float size;
	/* 0x124(sp) */ float rate;
	/* 0x110(sp) */ u_char rgba[4];
}

/* 00210ee0 0000048c */ void SceneTestEneEffPDeform() {
	/* s2 18 */ SCN_TEST_WRK *stw;
	/* s3 19 */ SCN_ENE_EF_PDF *pdf;
	/* 0x0(sp) */ SCN_ENE_EF_PDF pdf_buf;
	/* s0 16 */ int ret;
	/* 0x20(sp) */ char tmp_str[256];
}

/* 00211370 00000318 */ void SceneTestEneEffOthers() {
	/* s2 18 */ SCN_TEST_WRK *stw;
	/* s1 17 */ SCN_ENE_EFCT *see;
	/* s0 16 */ int ret;
	/* 0x0(sp) */ char tmp_str[256];
	/* 0x100(sp) */ float dist;
	/* 0x104(sp) */ float pos_ajst;
	/* 0x108(sp) */ int alpha;
}

/* 00211688 000002a0 */ void SceneTestEffectTest() {
	/* s2 18 */ FOD_EFF_DATA *fed;
}

/* 00211928 00000140 */ void SceneTestSetDefEffect() {
	/* a1 5 */ int i;
}

/* 00211a68 00000260 */ void SceneTestVibrate() {
	/* sdata 357678 */ static int vib2_val;
	/* s4 20 */ SCN_TEST_WRK *stw;
	/* s2 18 */ int i;
	/* s3 19 */ int yofs;
	/* 0x0(sp) */ char *vib_menu[3];
	/* 0x10(sp) */ char tmp_str[256];
}

/* 00211cc8 00000278 */ int SceneTestDraw(/* s0 16 */ int cnt_flg) {
	/* 0x0(sp) */ char frame[256];
}

/* 00211f40 000001cc */ void SceneTestLoopManage(/* a0 4 */ char flg) {}

/* 00212110 0000007c */ int ScnLRCtrl(/* a0 4 */ int *csr, /* a1 5 */ int max, /* a2 6 */ int min) {
	/* a2 6 */ int ret;
}

/* 00212190 0000007c */ int ScnUDCtrl(/* a0 4 */ int *csr, /* a1 5 */ int max, /* a2 6 */ int min) {
	/* a2 6 */ int ret;
}

/* 00212210 000000c0 */ int ScnValueCtrl(/* a0 4 */ float *val, /* f12 50 */ float max, /* f13 51 */ float min, /* f14 52 */ float inc, /* f15 53 */ float mul) {
	/* a1 5 */ int ret;
}

/* 002122d0 000000a0 */ int ScnValueCtrlI(/* a0 4 */ int *val, /* a1 5 */ int max, /* a2 6 */ int min, /* a3 7 */ int inc, /* t0 8 */ int mul) {
	/* t1 9 */ int ret;
}

/* 00212370 000000d8 */ int ScnValueCtrlC(/* a0 4 */ u_char *val, /* a1 5 */ u_char max, /* a2 6 */ u_char min, /* a3 7 */ int inc, /* t0 8 */ int mul) {
	/* t2 10 */ int ret;
}

/* 00212448 00000258 */ int SceneFileSaveBin() {
	/* s0 16 */ SgLIGHT *lp;
	/* 0x0(sp) */ sceVu0FVECTOR amb;
	/* s1 17 */ int i;
	/* s2 18 */ int fd;
	/* 0x10(sp) */ int align128[4];
	/* 0x20(sp) */ char fname[256];
	/* s0 16 */ char *discrim;
	/* v1 3 */ float *v1;
}

/* 002126a0 00000604 */ int SceneFileSaveText() {
	/* s5 21 */ FOD_LIT_SERIAL *fls;
	/* s3 19 */ SgLIGHT *lp;
	/* 0x0(sp) */ sceVu0FVECTOR ambient;
	/* s7 23 */ int i;
	/* s6 22 */ int fd;
	/* 0x10(sp) */ char *ltype_name[4];
	/* 0x20(sp) */ char *amb_str[6];
	/* 0x40(sp) */ char fname[256];
	/* 0x140(sp) */ char line[256];
	/* v0 2 */ float *v1;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/title.c
// *****************************************************************************

/* 00212ca8 00001218 */ void TitleCtrl() {
	/* sbss 357bc8 */ static u_int mc_pnum1;
	/* sbss 357bcc */ static u_int mc_pnum2;
	/* sbss 357bd0 */ static u_int mc_atyp1;
	/* sbss 357bd4 */ static u_int mc_atyp2;
	/* sbss 357bd8 */ static u_int mc_slot1;
	/* sbss 357bdc */ static u_int mc_slot2;
	/* sbss 357be0 */ static u_int mc_file1;
	/* sbss 357be4 */ static u_int mc_file2;
	/* sdata 3576a4 */ static int title_cnt;
}

/* 00213ec0 000000dc */ static int AlbmDesignLoad(/* v1 3 */ u_char side, /* a1 5 */ u_char type) {
	/* a2 6 */ u_int addr;
	/* v0 2 */ int load_id;
}

/* 00213fa0 00000158 */ void TitleWaitMode() {
	/* s0 16 */ int i;
	/* f20 58 */ float alp;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 002140f8 000005a0 */ void TitleStartSlct() {
	/* s0 16 */ char *str1;
	/* s1 17 */ char *str2;
	/* s2 18 */ char *str3;
	/* s3 19 */ char *str4;
	/* s4 20 */ char *csr0;
}

/* 00214698 00000634 */ void TitleStartSlctYW(/* 0x90(sp) */ u_char pad_off, /* s2 18 */ u_char alp_max) {
	/* s0 16 */ int i;
	/* s1 17 */ u_char mode;
	/* fp 30 */ u_char adj;
	/* s3 19 */ u_char dsp;
	/* s6 22 */ u_char chr1;
	/* s5 21 */ u_char chr2;
	/* v0 2 */ u_char alp;
	/* s0 16 */ u_char rgb;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 00214cd0 00000008 */ void TitleLoadCtrl() {}

/* 00214cd8 00000340 */ void TitleSelectMode() {
	/* s1 17 */ int i;
	/* 0x0(sp) */ char *mode_str[9];
	/* s5 21 */ char *csr0;
}

/* 00215018 000004c8 */ void TitleSelectModeYW(/* 0x90(sp) */ u_char pad_off, /* s2 18 */ u_char alp_max) {
	/* s0 16 */ int i;
	/* s4 20 */ u_char mode;
	/* 0x94(sp) */ u_char adj;
	/* s3 19 */ u_char dsp;
	/* 0x98(sp) */ u_char chr1;
	/* s5 21 */ u_char chr2;
	/* v0 2 */ u_char alp;
	/* s0 16 */ u_char rgb;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 002154e0 000003f4 */ void TitleSelectDifficultyYW() {
	/* s0 16 */ int i;
	/* s0 16 */ u_char chr;
	/* f0 38 */ float alp;
	/* 0x0(sp) */ DISP_SPRT ds;
}

/* 002158d8 00000054 */ void NewGameInit() {}
/* 00215930 00000034 */ void LoadGameInit() {}
/* 00215968 0000003c */ void InitOutDither() {}

/* 002159a8 00000178 */ void MakeOutDither() {
	/* 0x0(sp) */ u_char pat[16384];
	/* 0x4000(sp) */ u_int pal[256];
	/* a3 7 */ int i;
	/* f0 38 */ float r;
	/* f0 38 */ float r;
	/* bss 402d80 */ static sceGsLoadImage gs_limage1;
	/* bss 402de0 */ static sceGsLoadImage gs_limage2;
}

/* 00215b20 000002ac */ void DispOutDither() {
	/* 0x0(sp) */ SPRITE_DATA sd2;
	/* 0x60(sp) */ DRAW_ENV de2;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/takep_pe.c
// *****************************************************************************

/* 00215dd0 00000078 */ void GetBetweenABVecUnitLen(/* s0 16 */ float *out_a2bv, /* s2 18 */ float *out_unit_a2bv, /* s1 17 */ float *out_len, /* a3 7 */ float *in_av, /* t0 8 */ float *in_bv) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 00215e48 000000c0 */ void SetPrePEImage(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {
	/* a1 5 */ PARTICLE_EFF_OBJ *temppep;
	/* a3 7 */ PARTICLE_EFF_OBJ *prepep;
	/* t0 8 */ PARTICLE_EFF_OBJ *temppointer;
	/* v1 3 */ int tempalpha;
}

/* 00215f08 0000002c */ int InitPrePEImage(/* a0 4 */ PARTICLE_EFF_OBJ *obj, /* v0 2 */ int pe_num) {
	/* a1 5 */ int i;
	/* v1 3 */ PARTICLE_EFF_OBJ *temp;
}

/* 00215f38 000000bc */ int SetPEObjPos(/* s0 16 */ PARTICLE_EFF_OBJ *obj) {
	/* 0x0(sp) */ sceVu0FVECTOR c2sv_move;
}

/* 00215ff8 00000140 */ void MakeRandomVec(/* s1 17 */ float *output, /* s0 16 */ int m) {}

/* 00216138 000002a0 */ void InitPEObj(/* s4 20 */ PARTICLE_EFF_OBJ *obj, /* s2 18 */ float *ov, /* s3 19 */ float *sv, /* s0 16 */ float *tempgv) {
	/* v0 2 */ int temptime;
	/* f4 42 */ float randrate;
	/* f20 58 */ float tempkk;
	/* f21 59 */ float hhh;
	/* 0x80(sp) */ float o2slen;
	/* 0x0(sp) */ sceVu0FVECTOR o2sv_unit;
	/* 0x10(sp) */ sceVu0FVECTOR o2gv_unit;
	/* 0x20(sp) */ sceVu0FVECTOR o2gv;
	/* 0x30(sp) */ sceVu0FVECTOR o2sv;
	/* 0x40(sp) */ sceVu0FVECTOR cv;
	/* 0x50(sp) */ sceVu0FVECTOR o2cv;
	/* 0x60(sp) */ sceVu0FVECTOR c2sv;
	/* 0x70(sp) */ sceVu0FVECTOR gv;
}

/* 002163d8 00000040 */ void SetPEObjSprSize(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {
	/* f1 39 */ float farpoint;
}

/* 00216418 00000034 */ void SetPEObjAlphaBl(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {}

/* 00216450 000000ec */ int CtrlPEObj(/* s0 16 */ PARTICLE_EFF_OBJ *obj) {
	/* v1 3 */ ST_PEOBJ state;
}

/* 00216540 00000074 */ void SortRegisterPEObj(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {
	/* a3 7 */ PARTICLE_EFF_OBJ *temppe;
	/* t0 8 */ int flg;
}

/* 002165b8 00000008 */ Q_WORDDATA* ParticleEffectInTakingPicture(/* a0 4 */ Q_WORDDATA *qd, /* a1 5 */ u_int b_num) {}
/* 002165c0 000000d8 */ Q_WORDDATA* SetPESpritePacket(/* a0 4 */ Q_WORDDATA *qd, /* a1 5 */ int *col, /* a2 6 */ int *centervec, /* a3 7 */ int pe_width, /* t0 8 */ int albl) {}

/* 00216698 000000bc */ void SetCenterGravOfFVECTOR(/* s3 19 */ float *input, /* a1 5 */ sceVu0FVECTOR *vec, /* s1 17 */ u_int num) {
	/* s2 18 */ int i;
}

/* 00216758 00000068 */ void GetA2BLoadVector(/* s1 17 */ float *out_v, /* s0 16 */ float *fr_v, /* a2 6 */ float *to_v, /* f20 58 */ float rate) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 002167c0 00000008 */ void CallParticleEffect(/* a0 4 */ u_char ene_id) {}
/* 002167c8 00000008 */ void StopParticleEffect() {}

/* 002167d0 00000128 */ void SetParticleEffect() {
	/* s0 16 */ int n;
	/* s1 17 */ u_int start_pktaddr;
	/* v0 2 */ u_int end_pktaddr;
	/* 0x0(sp) */ sceVu0FMATRIX mat;
}

/* 002168f8 00000024 */ void CallEyeLight(/* a0 4 */ sceVu0FVECTOR *lpos, /* a1 5 */ sceVu0FVECTOR *rpos) {}
/* 00216920 00000008 */ void StopEyeLight() {}

/* 00216928 00000230 */ void EyeLightCtrl() {
	/* s2 18 */ int i;
	/* s3 19 */ int n;
	/* a1 5 */ int w;
	/* s1 17 */ u_int start_pktaddr;
	/* v1 3 */ u_int end_pktaddr;
	/* 0x0(sp) */ sceVu0FMATRIX mat;
	/* 0x40(sp) */ sceVu0IVECTOR scr[2];
	/* 0x60(sp) */ sceVu0IVECTOR col;
	/* 0x70(sp) */ sceVu0FVECTOR vec;
	/* v0 2 */ Q_WORDDATA *qd;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_main.c
// *****************************************************************************

/* 00216b58 00000498 */ char mcSaveMain() {
	/* s1 17 */ char end_flg;
}

/* 00216ff0 00000464 */ char mcLoadMain() {
	/* s2 18 */ char end_flg;
}

/* 00217458 0000022c */ char mcCtrlCheck() {
	/* sbss 357bf8 */ static int loop;
}

/* 00217688 00000184 */ char mcCtrlSelSlot() {}

/* 00217810 000003d4 */ char mcCtrlFileSel() {
	/* s0 16 */ int num;
}

/* 00217be8 000000e4 */ char mcCtrlLoad() {
	/* s0 16 */ u_char file_id;
}

/* 00217cd0 000000dc */ char mcCtrlSave() {
	/* s1 17 */ u_char file_id;
}

/* 00217db0 00000324 */ char mcCtrlMakeDir() {
	/* sbss 357bfc */ static char loop;
	/* sbss 357c00 */ static int load_id;
}

/* 002180d8 00000064 */ char mcCtrlFormat() {}

/* 00218140 00000184 */ char mcCtrlDelete() {
	/* sbss 357c04 */ static u_int cnt;
}

/* 002182c8 000000bc */ char mcCtrlDispErr() {}
/* 00218388 00000180 */ char mcCtrlYesno(/* a0 4 */ int def_pos) {}
/* 00218508 00000160 */ char mcCtrl3taku(/* a0 4 */ int def_pos) {}
/* 00218668 000000a0 */ void mcInit(/* a0 4 */ u_char mode, /* s0 16 */ u_int *work_addr, /* a2 6 */ u_char msn_flg) {}

/* 00218708 000000b8 */ void mcSubInit() {
	/* v1 3 */ u_int i;
}

/* 002187c0 00000088 */ void mcClearHeader() {}
/* 00218848 0000000c */ void mcEnd() {}
/* 00218858 00000048 */ void mcSetStep(/* s1 17 */ int step, /* s0 16 */ int msg_no) {}
/* 002188a0 000002c0 */ void mcSetStepAfterCheck() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_acs.c
// *****************************************************************************

/* 00218b60 000000c8 */ char mcAcsMain() {
	/* s1 17 */ char end_flg;
}

/* 00218c28 00000038 */ void mcAcsReq(/* a1 5 */ int func_no) {}
/* 00218c60 0000002c */ void mcAcsEnd() {}
/* 00218c90 00000070 */ char mcSlotCheck() {}
/* 00218d00 00000074 */ char mcFileCheck() {}
/* 00218d78 00000084 */ char mcOpen() {}
/* 00218e00 00000078 */ char mcClose() {}
/* 00218e78 00000068 */ char mcLoad() {}
/* 00218ee0 00000068 */ char mcSave() {}
/* 00218f48 00000070 */ char mcExistCheck() {}
/* 00218fb8 00000068 */ char mcMakeDir() {}
/* 00219020 00000064 */ char mcFormat() {}
/* 00219088 00000068 */ char mcDelete() {}

/* 002190f0 00000230 */ char mcSyncNB() {
	/* a1 5 */ int sync;
	/* 0x4(sp) */ int result;
	/* 0x0(sp) */ int cmd;
}

/* 00219320 00000198 */ void mcSyncErrWork(/* a0 4 */ int cmd, /* a1 5 */ int result) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_album.c
// *****************************************************************************

/* 002194b8 0000057c */ char mcAlbumSaveMain() {
	/* s1 17 */ char end_flg;
	/* sbss 357c08 */ static char newfile_flg;
}

/* 00219a38 00000348 */ char mcCtrlCheckAlbum() {
	/* sbss 357c0c */ static int loop;
}

/* 00219d80 0000027c */ char mcCtrlAlbumSel() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_exec.c
// *****************************************************************************

/* 0021a000 000000bc */ void mcSetPathDir(/* s1 17 */ char file_no) {}
/* 0021a0c0 00000024 */ void mcMakeGameFileName(/* a0 4 */ char *fname, /* a1 5 */ char file_id) {}
/* 0021a0e8 00000038 */ void mcMakeAlbumFileName(/* a0 4 */ char *fname, /* a1 5 */ char file_id) {}
/* 0021a120 0000001c */ void mcMakeIconsysFileName(/* a0 4 */ char *fname) {}
/* 0021a140 0000002c */ void mcMakeIconDataFileName(/* a0 4 */ char *fname, /* a1 5 */ char file_id) {}

/* 0021a170 00000078 */ char mcCheckEmpty(/* a0 4 */ u_int offset) {
	/* a1 5 */ u_int size;
}

/* 0021a1e8 00000174 */ void mcAcsFileReq(/* a1 5 */ char type, /* s2 18 */ int mode, /* s1 17 */ int header) {}
/* 0021a360 000000fc */ char mcWriteFile() {}
/* 0021a460 000000fc */ char mcReadFile() {}

/* 0021a560 00000320 */ char mcCheckFileList() {
	/* s0 16 */ u_int i;
	/* s3 19 */ u_int file_num;
	/* a0 4 */ u_int size;
	/* 0x0(sp) */ char str[256];
}

/* 0021a880 0000018c */ char mcCheckRootList() {
	/* s0 16 */ u_int i;
	/* a1 5 */ u_int j;
	/* s3 19 */ u_int file_num;
	/* 0x0(sp) */ char str[256];
}

/* 0021aa10 00000050 */ u_int mcGetFileSizeCeil(/* a0 4 */ u_int file_id, /* s0 16 */ u_int block) {
	/* a0 4 */ u_int size;
}

/* 0021aa60 00000084 */ u_int mcGetFileSize(/* a0 4 */ u_int file_id) {
	/* a3 7 */ u_int size;
	/* a1 5 */ int i;
}

/* 0021aae8 0000005c */ char mcCheckHeaderFile() {
	/* a2 6 */ u_int i;
	/* a1 5 */ u_int file_num;
}

/* 0021ab48 00000098 */ int strindex(/* a0 4 */ char *s, /* a1 5 */ char *t) {
	/* t1 9 */ int i;
	/* a3 7 */ int j;
	/* t0 8 */ int k;
}

/* 0021abe0 00000118 */ void mcMakeSaveFile(/* s2 18 */ u_int *work_addr, /* a1 5 */ u_char file_id) {
	/* t0 8 */ u_char *addr0;
	/* a1 5 */ u_char *addr1;
	/* a0 4 */ int i;
	/* a2 6 */ int j;
	/* s1 17 */ u_int sum;
	/* a2 6 */ u_int size;
	/* s0 16 */ u_int str_num;
	/* s3 19 */ MC_DATA_STR *data_str;
}

/* 0021acf8 00000110 */ char mcSetLoadFile(/* s1 17 */ u_int *work_addr, /* a1 5 */ u_char file_id) {
	/* a0 4 */ u_char *addr0;
	/* a1 5 */ u_char *addr1;
	/* a2 6 */ int i;
	/* a3 7 */ int j;
	/* a1 5 */ u_int size;
	/* s0 16 */ u_int str_num;
	/* s2 18 */ MC_DATA_STR *data_str;
}

/* 0021ae08 00000040 */ char mcCompareCheckSum(/* a0 4 */ u_char *data_ptr, /* a1 5 */ int data_size) {
	/* v1 3 */ int sum;
	/* a2 6 */ int data_sum;
	/* a1 5 */ int i;
}

/* 0021ae48 0000017c */ void mcMakeHeaderFile() {
	/* s1 17 */ MC_GAME_HEADER *header;
	/* v0 2 */ MC_ALBUM_HEADER *header;
}

/* 0021afc8 000000c0 */ void mcSetHeaderFile() {
	/* t1 9 */ MC_GAME_HEADER *header;
	/* v0 2 */ MC_ALBUM_HEADER *header;
}

/* 0021b088 00000094 */ char mcGetAlbumNo() {
	/* a1 5 */ u_int i;
	/* 0x0(sp) */ char flg[5];
}

/* 0021b120 000002b0 */ void mcSetIconSys(/* s1 17 */ sceMcIconSys *pSys) {
	/* s0 16 */ u_int i;
	/* 0x0(sp) */ char str[256];
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_start.c
// *****************************************************************************

/* 0021b3d0 000001e0 */ char mcStartCheckMain() {
	/* sdata 357756 */ static char err_flg;
}

/* 0021b5b0 00000060 */ void mcStartCheckSet() {}

/* 0021b610 00000128 */ char mcStartCheckResult() {
	/* a0 4 */ u_int i;
	/* a2 6 */ u_int card_exist;
}

/* 0021b738 0000025c */ char mcStartCheckYesno(/* a0 4 */ int def_pos) {
	/* sbss 357c10 */ static int backup[2];
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_disp.c
// *****************************************************************************

/* 0021b998 00000088 */ void mcDispMessage() {
	/* a1 5 */ int msg_no;
}

/* 0021ba20 0000000c */ void mcSetMessage(/* a0 4 */ int msg_no) {}
/* 0021ba30 0000003c */ char mcCheckMsgType(/* a0 4 */ int msg_no) {}
/* 0021ba70 00000038 */ char mcCheckDrawButton(/* a0 4 */ int msg_no) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_at.c
// *****************************************************************************

/* 0021baa8 0000004c */ char McAtLoadChk(/* a0 4 */ u_char type) {}
/* 0021baf8 00000040 */ char McAtSaveChk() {}
/* 0021bb38 00000044 */ char McAtAlbmChk() {}

/* 0021bb80 0000021c */ static char McAtLoadMainLoop(/* s6 22 */ u_char type) {
	/* s2 18 */ char rtrn;
	/* s3 19 */ u_char csr0;
	/* s5 21 */ u_char yes_no;
	/* sbss 357c18 */ static u_char csr1;
	/* sbss 357c19 */ static u_char csr2;
	/* s4 20 */ u_char msg;
	/* s1 17 */ u_char alt;
	/* sbss 357c1a */ static u_char fdt;
}

/* 0021bda0 00000218 */ static char McAtSaveMainLoop() {
	/* s2 18 */ char rtrn;
	/* s3 19 */ u_char csr0;
	/* s5 21 */ u_char yes_no;
	/* sbss 357c1b */ static u_char csr1;
	/* sbss 357c1c */ static u_char csr2;
	/* s4 20 */ u_char msg;
	/* s1 17 */ u_char alt;
	/* sbss 357c1d */ static u_char fdt;
}

/* 0021bfb8 000002a4 */ static char McAtAlbmMainLoop() {
	/* s4 20 */ char rtrn;
	/* s3 19 */ u_char csr0;
	/* s6 22 */ u_char yes_no;
	/* sbss 357c1e */ static u_char csr1;
	/* sbss 357c1f */ static u_char csr2;
	/* sbss 357c20 */ static u_char csr3;
	/* s5 21 */ u_char msg;
	/* s2 18 */ u_char alt;
	/* sbss 357c21 */ static u_char fdt;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/outgame.c
// *****************************************************************************

/* 0021c260 00000138 */ void OutGameCtrl() {}
/* 0021c398 00000094 */ void OutGameModeChange(/* s0 16 */ u_char mode) {}
/* 0021c430 00000044 */ void OrgSetSquare(/* a0 4 */ int pri, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float w, /* f15 53 */ float h, /* a1 5 */ u_char r, /* a2 6 */ u_char g, /* a3 7 */ u_char b, /* t0 8 */ u_char a) {}

/* 0021c478 0000012c */ void RoomSizeDisp() {
	/* 0x0(sp) */ char tmp_str[256];
}

/* 0021c5a8 000003a8 */ void RoomSizeCheckCtrl() {
	/* 0x0(sp) */ char tmp_str[256];
	/* 0x100(sp) */ char *str[6];
	/* 0x120(sp) */ int max[2];
	/* s0 16 */ u_int *end_addr;
}

/* 0021c950 00000034 */ void RoomSizeCheckInit() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/btl_mode/btl_menu.c
// *****************************************************************************

/* 0021c988 00000310 */ void FreeModeMain() {
	/* s0 16 */ char *str1;
	/* s1 17 */ char *str2;
	/* s2 18 */ char *str3;
	/* s3 19 */ char *csr0;
}

/* 0021cc98 00000084 */ void FreeModePosSet() {}
/* 0021cd20 00000014 */ void BattleModeInit() {}

/* 0021cd38 0000005c */ void ClearStageWrk() {
	/* v0 2 */ int i;
}

/* 0021cd98 00000720 */ void BattleModeMain() {
	/* s0 16 */ char *str1;
	/* s1 17 */ char *str2;
	/* s2 18 */ char *str3;
	/* s3 19 */ char *str4;
	/* s4 20 */ char *str7;
	/* s5 21 */ char *str5;
	/* s6 22 */ char *str6;
	/* s7 23 */ char *csr0;
}

/* 0021d4b8 00000104 */ int StageTitleInit() {
	/* s4 20 */ int ret;
}

/* 0021d5c0 00000220 */ int StageTitleLoad() {
	/* a2 6 */ int map_no;
}

/* 0021d7e0 000001ec */ void StageGhostLoadReq() {
	/* s3 19 */ int i;
	/* a0 4 */ int ene_no;
	/* 0x0(sp) */ ENE_DAT *edp;
}

/* 0021d9d0 0000016c */ void StageGhostLoadAfter() {
	/* s2 18 */ int i;
	/* s0 16 */ int ene_no;
	/* s7 23 */ ENE_DAT *edp;
}

/* 0021db40 000000dc */ void SaveStoryWrk() {
	/* a1 5 */ u_char *srcp;
	/* t2 10 */ u_char *dstp;
	/* t1 9 */ int i;
	/* a2 6 */ int j;
}

/* 0021dc20 000000e4 */ void LoadStoryWrk() {
	/* a1 5 */ u_char *srcp;
	/* a2 6 */ u_char *dstp;
	/* a1 5 */ int i;
	/* a3 7 */ int j;
}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/btl_mode/btl_mode.c
// *****************************************************************************

/* 0021dd08 00000168 */ void BattleModeStageInit() {
	/* t4 12 */ int i;
	/* t3 11 */ STAGE_DAT *sdp;
}

/* 0021de70 000003e0 */ void BattleModeStageMain() {
	/* v1 3 */ int ret_num;
}

/* 0021e250 00000008 */ void BattleModeInfomationDisp() {}

/* 0021e258 00000054 */ int CheckClearAllS() {
	/* a1 5 */ int i;
}

/* 0021e2b0 00000260 */ void BattleModeClear() {
	/* a2 6 */ int i;
	/* s0 16 */ int best_shot;
	/* s4 20 */ int best_time;
	/* s2 18 */ int rank;
	/* a0 4 */ int no_dmg;
}

/* 0021e510 00000020 */ void BattleModeScoreRecord(/* a0 4 */ long int score) {}
/* 0021e530 00000014 */ int isBattleModeGame() {}
/* 0021e548 00000030 */ int CheckClearAllFirst() {}

/* 0021e578 00000044 */ int CheckClearAll() {
	/* a1 5 */ int i;
	/* a2 6 */ int ret;
}

/* 0021e5c0 00000010 */ void SetBattleEnd() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/wan_soul.c
// *****************************************************************************

/* 0021e5d0 000000a8 */ sceVu0FVECTOR* SetFirstDestination(/* s0 16 */ sceVu0FVECTOR *destination, /* s1 17 */ float *pos) {
	/* f20 58 */ float dist;
}

/* 0021e678 00000034 */ float GetDist3(/* a0 4 */ float *v1, /* a1 5 */ float *v2) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 0021e6b0 00000060 */ float GetDistPlyr(/* s0 16 */ float *plyr, /* a1 5 */ float *soul) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 0021e710 00000170 */ void* SetEffectsWithScale(/* s5 21 */ float *pos, /* a1 5 */ SOUL_EFF_PARAM *param, /* f1 39 */ float scale, /* f13 51 */ float rgb) {
	/* bss 402e50 */ static SOUL_EFF_PARAM temp;
}

/* 0021e880 00000008 */ int GetUsableWanSoWrkID() {}
/* 0021e888 0000004c */ void SetNewSpeed(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}
/* 0021e8d8 00000014 */ void NewMissionInitWanderSoul() {}

/* 0021e8f0 00000070 */ void ReviveWanderSoul() {
	/* s1 17 */ int i;
}

/* 0021e960 000000a8 */ void BSplinePos(/* s0 16 */ float *pos, /* a1 5 */ float *mat_point_array[4], /* f12 50 */ float t1) {
	/* f3 41 */ float rev;
	/* f2 40 */ float t2;
	/* f12 50 */ float t3;
	/* 0x0(sp) */ sceVu0FVECTOR coeff;
}

/* 0021ea08 0000000c */ void ClearWanderSoulOne(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}

/* 0021ea18 00000080 */ void CallWanderSoul(/* s2 18 */ u_char data_id, /* s1 17 */ float *pos) {
	/* s0 16 */ WANDER_SOUL_WRK *wswrk;
}

/* 0021ea98 00000060 */ void RegisterWansoEffect(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}

/* 0021eaf8 000000e0 */ void WansoLateInit(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {
	/* a2 6 */ int i;
}

/* 0021ebd8 00000044 */ void ReleaseWanderSoul(/* a0 4 */ u_char data_id) {
	/* v1 3 */ int i;
	/* a1 5 */ WANDER_SOUL_WRK *wswrk;
}

/* 0021ec20 00000038 */ int WanSoNearJudge(/* f12 50 */ float dist, /* f13 51 */ float distv) {}
/* 0021ec58 00000060 */ int WanSoTouchJudge(/* s0 16 */ float *soul_pos, /* s1 17 */ MOVE_BOX *mbp) {}

/* 0021ecb8 0000006c */ void SoulFloating(/* s0 16 */ float *pos, /* a1 5 */ float *rgb) {
	/* sdata 357814 */ static int time;
}

/* 0021ed28 00000110 */ void SetSoulNewMove(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {
	/* f1 39 */ float dist;
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 0021ee38 00000050 */ void Change2WanSoExtinct(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}
/* 0021ee88 00000060 */ void FinishWanSoWrk(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}
/* 0021eee8 00000008 */ void ComeOnSignal(/* a0 4 */ float *scale, /* a1 5 */ float *rgb, /* a2 6 */ u_short time) {}

/* 0021eef0 00000038 */ float StopAbleDist(/* f12 50 */ float speed, /* f13 51 */ float accel, /* a0 4 */ u_short *count) {
	/* f1 39 */ float time;
}

/* 0021ef28 0000002c */ float GetRot(/* a0 4 */ float *a, /* a1 5 */ float *b) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 0021ef58 00000080 */ int RotCheck2(/* 0x0(sp) */ float rot1, /* f13 51 */ float rot2, /* a0 4 */ u_short range) {}

/* 0021efd8 000000a8 */ void GetBSplinePos(/* s0 16 */ float *pos, /* a1 5 */ float *mat_point_array[4], /* f12 50 */ float t1) {
	/* f3 41 */ float rev;
	/* f2 40 */ float t2;
	/* f12 50 */ float t3;
	/* 0x0(sp) */ sceVu0FVECTOR coeff;
}

/* 0021f080 000000fc */ int SetMoveDirect(/* s1 17 */ WANDER_SOUL_WRK *wswrk, /* f12 50 */ float s2p_len) {
	/* f20 58 */ float rot2;
	/* 0x0(sp) */ sceVu0FVECTOR temp;
	/* s0 16 */ sceVu0FVECTOR *tempdes;
}

/* 0021f180 00000058 */ void AddVec2MatD(/* a0 4 */ float *mat[4], /* a1 5 */ float *vec) {
	/* v1 3 */ int i;
}

/* 0021f1d8 00000010 */ void Change2WanSoFloat(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}

/* 0021f1e8 000000b4 */ float GetKnotDist(/* s1 17 */ float *mat[4]) {
	/* 0x0(sp) */ sceVu0FVECTOR coeff;
	/* 0x10(sp) */ sceVu0FVECTOR first_p;
	/* 0x20(sp) */ sceVu0FVECTOR last_p;
}

/* 0021f2a0 00000074 */ void SetWansoSpeed(/* s0 16 */ WANDER_SOUL_WRK *wswrk, /* f12 50 */ float dist) {
	/* sdata 357818 */ static int count;
}

/* 0021f318 000000a8 */ void WansoPreTell(/* s1 17 */ WANDER_SOUL_WRK *wswrk) {}

/* 0021f3c0 000000d0 */ u_char WansoAlphaCtrl(/* a0 4 */ WANDER_SOUL_WRK *wswrk, /* f12 50 */ float dist) {
	/* a1 5 */ int flg;
}

/* 0021f490 000000ec */ void WansoExtinctCtrl(/* a1 5 */ WANDER_SOUL_WRK *wswrk) {}

/* 0021f580 00000714 */ void OneSoulCtrl(/* s3 19 */ WANDER_SOUL_WRK *wswrk, /* a1 5 */ float *srate, /* a2 6 */ float *arate) {
	/* f20 58 */ float dist;
	/* f1 39 */ float knot_dist;
	/* sdata 35781c */ static float rate;
	/* s1 17 */ u_char visible;
	/* 0x30(sp) */ sceVu0FVECTOR soul;
	/* 0x40(sp) */ sceVu0FVECTOR camera;
	/* 0x50(sp) */ sceVu0FVECTOR interest;
	/* sbss 357c30 */ static u_char *strp;
	/* sbss 357c34 */ static signed char noise_in_time;
	/* sbss 357c36 */ static u_short se_no;
	/* sbss 357c38 */ static u_char face_load_end;
	/* sdata 357820 */ static float spd;
	/* sdata 357824 */ static float rate;
	/* sdata 357828 */ static float trate;
}

/* 0021fc98 000000e0 */ void WanderSoulCtrl() {
	/* s1 17 */ int i;
	/* s0 16 */ WANDER_SOUL_WRK *wswrk;
	/* sdata 35782c */ static signed char time;
}

/* 0021fd78 00000178 */ u_char CallSoulTellingCamera(/* s1 17 */ float *soul_pos, /* s3 19 */ float *relative_camera_pos, /* s6 22 */ float *relative_interest, /* s5 21 */ float *relative_soul_pos) {
	/* 0x0(sp) */ sceVu0FVECTOR tempv;
	/* 0x10(sp) */ sceVu0FVECTOR axis;
	/* 0x20(sp) */ sceVu0FMATRIX mtx;
	/* f1 39 */ float tempf;
	/* s7 23 */ u_char turn;
}

/* 0021fef0 000000cc */ void CallSoulTellingCameraIn(/* s1 17 */ float *soul_pos, /* a1 5 */ float *mic_eye_pos, /* v0 2 */ int time) {
	/* 0x0(sp) */ sceVu0FVECTOR temp;
}

/* 0021ffc0 00000070 */ int SoulTellingCameraInCtrl() {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/wan_dat.c
// *****************************************************************************

/* 00220030 00000068 */ void SetWanSoDat2Wrk(/* a0 4 */ int data_id, /* t1 9 */ WANDER_SOUL_WRK *wswrk) {}

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/sound_test.c
// *****************************************************************************

/* 00220098 00000088 */ void SoundTestForModeSlectInit() {}

/* 00220120 000005e0 */ char SoundTestForModeSlect() {
	/* a2 6 */ char set_flg;
	/* s3 19 */ char rtrn;
}

/* 00220700 00000868 */ void SoundTestForModeSlectDisp(/* s1 17 */ u_char alp, /* f20 58 */ float flsh) {
	/* s3 19 */ int i;
	/* s4 20 */ u_char dir;
}

/* 00220f68 00000234 */ void SlotNum(/* s3 19 */ int number, /* s4 20 */ u_char digit, /* s6 22 */ u_char timer, /* fp 30 */ u_char tim_lmt, /* 0x20(sp) */ short int pos_x, /* 0x24(sp) */ short int pos_y, /* 0x28(sp) */ short int lmt_upp, /* 0x2c(sp) */ short int lmt_dwn, /* 0xf0(sp) */ int alp, /* 0xf8(sp) */ int time_mode, /* 0x100(sp) */ int ud_sw) {
	/* 0x30(sp) */ u_char alp;
	/* 0x34(sp) */ u_char time_mode;
	/* s7 23 */ u_char ud_sw;
	/* s2 18 */ int i;
	/* s1 17 */ int multi10;
	/* v1 3 */ int multi10_bak;
	/* a1 5 */ int dsp_num;
	/* a2 6 */ u_char dsp_mode;
}

/* 002211a0 00000190 */ void ShockWave(/* a0 4 */ u_char bgm_no, /* s1 17 */ u_char alp) {
	/* 0x0(sp) */ BEAT_DATA bd[1];
}

/* 00221330 0000028c */ void OneNum(/* s5 21 */ u_short num_chr, /* a1 5 */ u_char number, /* s6 22 */ u_char no, /* a3 7 */ u_char timer, /* t0 8 */ u_char tim_lmt, /* t1 9 */ short int pos_x, /* t2 10 */ short int pos_y, /* 0x94(sp) */ short int lmt_upp, /* 0x150(sp) */ int lmt_dwn, /* 0x158(sp) */ int mode, /* 0x160(sp) */ int alp, /* 0x168(sp) */ int time_mode) {
	/* 0x98(sp) */ short int lmt_dwn;
	/* v1 3 */ u_char mode;
	/* 0x9c(sp) */ u_char alp;
	/* 0xa0(sp) */ u_char time_mode;
	/* t4 12 */ short int slot_mov;
	/* s3 19 */ int i;
	/* 0x90(sp) */ short int dsp_y;
	/* v0 2 */ u_char dsp_num;
	/* 0x92(sp) */ signed char dsp_v;
	/* 0x93(sp) */ signed char dsp_h;
	/* 0x0(sp) */ DISP_SPRT ds;
}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 002215c0 00000024 */ static CB_DelayTh() {}
/* 002215e8 00000068 */ sceCdDelayThread() {}
/* 00221650 00000054 */ sceCdCallback() {}
/* 002216a8 000000a0 */ _sceCd_cd_callback() {}
/* 00221748 000000bc */ _Cdvd_cbLoop() {}
/* 00221808 000000d4 */ sceCdInitEeCB() {}
/* 002218e0 000000a0 */ _sceCd_cd_read_intr() {}
/* 00221980 00000094 */ static cmd_sem_init() {}
/* 00221a18 00000080 */ static cdvd_exit() {}
/* 00221a98 0000006c */ sceCdPOffCallback() {}
/* 00221b08 0000003c */ static _sceCd_Poff_Intr() {}
/* 00221b48 00000188 */ static PowerOffCB() {}
/* 00221cd0 000002fc */ sceCdSearchFile() {}
/* 00221fd0 00000170 */ _sceCd_ncmd_prechk() {}
/* 00222140 00000098 */ sceCdNcmdDiskReady() {}
/* 002221d8 000000a0 */ sceCdSync() {}
/* 00222278 0000006c */ sceCdSyncS() {}
/* 002222e8 00000170 */ _sceCd_scmd_prechk() {}
/* 00222458 000002e0 */ sceCdInit() {}
/* 00222738 000001f8 */ sceCdDiskReady() {}
/* 00222930 000000c4 */ sceCdMmode() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 002229f8 000000f8 */ sceCdReadClock() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00222af0 0000002c */ sceCdStInit() {}
/* 00222b20 00000034 */ sceCdStStart() {}
/* 00222b58 0000002c */ sceCdStSeekF() {}
/* 00222b88 0000002c */ sceCdStSeek() {}
/* 00222bb8 00000038 */ sceCdStStop() {}
/* 00222bf0 00000188 */ sceCdStRead() {}
/* 00222d78 00000050 */ sceCdStPause() {}
/* 00222dc8 00000054 */ sceCdStResume() {}
/* 00222e20 00000048 */ sceCdStStat() {}
/* 00222e68 00000168 */ sceCdStream() {}

// *****************************************************************************
// FILE -- libdma.c
// *****************************************************************************

/* 00222fd0 00000034 */ static memclr() {}
/* 00223008 00000028 */ sceDmaGetChan() {}
/* 00223030 000000dc */ sceDmaReset() {}
/* 00223110 00000010 */ sceDmaDebug() {}
/* 00223120 000001d8 */ sceDmaPutEnv() {}
/* 002232f8 00000038 */ sceDmaGetEnv() {}
/* 00223330 00000028 */ sceDmaPutStallAddr() {}
/* 00223358 000000d8 */ sceDmaSend() {}
/* 00223430 000000e4 */ sceDmaSendN() {}
/* 00223518 000000e4 */ sceDmaSendI() {}
/* 00223600 000000c4 */ sceDmaRecv() {}
/* 002236c8 000000ec */ sceDmaRecvN() {}
/* 002237b8 000000f0 */ sceDmaRecvI() {}
/* 002238a8 000000c4 */ sceDmaSync() {}
/* 00223970 000000d0 */ sceDmaWatch() {}
/* 00223a40 0000001c */ sceDmaPause() {}
/* 00223a60 0000001c */ sceDmaRestart() {}

// *****************************************************************************
// FILE -- devvu0.c
// *****************************************************************************

/* 00223a80 00000014 */ static sceDevVu0CheckBusy() {}
/* 00223a98 00000014 */ sceDevVu0Reset() {}
/* 00223ab0 00000060 */ sceDevVu0Pause() {}
/* 00223b10 00000050 */ sceDevVu0Continue() {}
/* 00223b60 00000030 */ sceDevVu0PutDBit() {}
/* 00223b90 00000030 */ sceDevVu0PutTBit() {}
/* 00223bc0 00000010 */ sceDevVu0GetDBit() {}
/* 00223bd0 00000010 */ sceDevVu0GetTBit() {}
/* 00223be0 00000040 */ static sceDevVu0Sync() {}
/* 00223c20 00000010 */ sceDevVu0Exec() {}
/* 00223c30 0000000c */ sceDevVu0GetTpc() {}
/* 00223c40 000000e0 */ sceDevVu0GetCnd() {}
/* 00223d20 0000016c */ sceDevVu0PutCnd() {}

// *****************************************************************************
// FILE -- devvif0.c
// *****************************************************************************

/* 00223e90 00000024 */ sceDevVif0Reset() {}
/* 00223eb8 00000068 */ sceDevVif0Pause() {}
/* 00223f20 0000003c */ sceDevVif0Continue() {}
/* 00223f60 00000020 */ sceDevVif0PutErr() {}
/* 00223f80 00000010 */ sceDevVif0GetErr() {}
/* 00223f90 00000050 */ static sceDevVif0Sync() {}
/* 00223fe0 00000180 */ sceDevVif0GetCnd() {}
/* 00224160 0000005c */ sceDevVif0PutFifo() {}

// *****************************************************************************
// FILE -- devvif1.c
// *****************************************************************************

/* 002241c0 00000024 */ sceDevVif1Reset() {}
/* 002241e8 00000068 */ sceDevVif1Pause() {}
/* 00224250 0000003c */ sceDevVif1Continue() {}
/* 00224290 00000020 */ sceDevVif1PutErr() {}
/* 002242b0 00000010 */ sceDevVif1GetErr() {}
/* 002242c0 00000050 */ static sceDevVif1Sync() {}
/* 00224310 000001d8 */ sceDevVif1GetCnd() {}
/* 002244e8 0000005c */ sceDevVif1PutFifo() {}
/* 00224548 00000060 */ sceDevVif1GetFifo() {}

// *****************************************************************************
// FILE -- klib.s
// *****************************************************************************

/* 002245c0 00000010 */ RFU000_FullReset() {}
/* 002245d0 00000010 */ ResetEE() {}
/* 002245e0 00000010 */ SetGsCrt() {}
/* 002245f0 00000010 */ RFU003() {}
/* 00224600 00000010 */ Exit() {}
/* 00224610 00000010 */ RFU005() {}
/* 00224620 00000010 */ LoadExecPS2() {}
/* 00224630 00000010 */ ExecPS2() {}
/* 00224640 00000010 */ RFU008() {}
/* 00224650 00000010 */ RFU009() {}
/* 00224660 00000010 */ AddSbusIntcHandler() {}
/* 00224670 00000010 */ RemoveSbusIntcHandler() {}
/* 00224680 00000010 */ Interrupt2Iop() {}
/* 00224690 00000010 */ SetVTLBRefillHandler() {}
/* 002246a0 00000010 */ SetVCommonHandler() {}
/* 002246b0 00000010 */ SetVInterruptHandler() {}
/* 002246c0 00000010 */ AddIntcHandler() {}
/* 002246d0 00000010 */ AddIntcHandler2() {}
/* 002246e0 00000010 */ RemoveIntcHandler() {}
/* 002246f0 00000010 */ AddDmacHandler() {}
/* 00224700 00000010 */ AddDmacHandler2() {}
/* 00224710 00000010 */ RemoveDmacHandler() {}
/* 00224720 00000010 */ _EnableIntc() {}
/* 00224730 00000010 */ _DisableIntc() {}
/* 00224740 00000010 */ _EnableDmac() {}
/* 00224750 00000010 */ _DisableDmac() {}
/* 00224760 00000010 */ SetAlarm() {}
/* 00224770 00000010 */ ReleaseAlarm() {}
/* 00224780 00000010 */ _iEnableIntc() {}
/* 00224790 00000010 */ _iDisableIntc() {}
/* 002247a0 00000010 */ _iEnableDmac() {}
/* 002247b0 00000010 */ _iDisableDmac() {}
/* 002247c0 00000010 */ iSetAlarm() {}
/* 002247d0 00000010 */ iReleaseAlarm() {}
/* 002247e0 00000010 */ CreateThread() {}
/* 002247f0 00000010 */ DeleteThread() {}
/* 00224800 00000010 */ StartThread() {}
/* 00224810 00000010 */ ExitThread() {}
/* 00224820 00000010 */ ExitDeleteThread() {}
/* 00224830 00000010 */ TerminateThread() {}
/* 00224840 00000010 */ iTerminateThread() {}
/* 00224850 00000010 */ DisableDispatchThread() {}
/* 00224860 00000010 */ EnableDispatchThread() {}
/* 00224870 00000010 */ ChangeThreadPriority() {}
/* 00224880 00000010 */ iChangeThreadPriority() {}
/* 00224890 00000010 */ RotateThreadReadyQueue() {}
/* 002248a0 00000010 */ _iRotateThreadReadyQueue() {}
/* 002248b0 00000010 */ ReleaseWaitThread() {}
/* 002248c0 00000010 */ iReleaseWaitThread() {}
/* 002248d0 00000010 */ GetThreadId() {}
/* 002248e0 00000010 */ ReferThreadStatus() {}
/* 002248f0 00000010 */ iReferThreadStatus() {}
/* 00224900 00000010 */ SleepThread() {}
/* 00224910 00000010 */ WakeupThread() {}
/* 00224920 00000010 */ _iWakeupThread() {}
/* 00224930 00000010 */ CancelWakeupThread() {}
/* 00224940 00000010 */ iCancelWakeupThread() {}
/* 00224950 00000010 */ SuspendThread() {}
/* 00224960 00000010 */ _iSuspendThread() {}
/* 00224970 00000010 */ ResumeThread() {}
/* 00224980 00000010 */ iResumeThread() {}
/* 00224990 00000010 */ JoinThread() {}
/* 002249a0 00000010 */ RFU060() {}
/* 002249b0 00000010 */ RFU061() {}
/* 002249c0 00000010 */ EndOfHeap() {}
/* 002249d0 00000010 */ RFU063() {}
/* 002249e0 00000010 */ CreateSema() {}
/* 002249f0 00000010 */ DeleteSema() {}
/* 00224a00 00000010 */ SignalSema() {}
/* 00224a10 00000010 */ iSignalSema() {}
/* 00224a20 00000010 */ WaitSema() {}
/* 00224a30 00000010 */ PollSema() {}
/* 00224a40 00000010 */ iPollSema() {}
/* 00224a50 00000010 */ ReferSemaStatus() {}
/* 00224a60 00000010 */ iReferSemaStatus() {}
/* 00224a70 00000010 */ RFU073() {}
/* 00224a80 00000010 */ SetOsdConfigParam() {}
/* 00224a90 00000010 */ GetOsdConfigParam() {}
/* 00224aa0 00000010 */ GetGsHParam() {}
/* 00224ab0 00000010 */ GetGsVParam() {}
/* 00224ac0 00000010 */ SetGsHParam() {}
/* 00224ad0 00000010 */ SetGsVParam() {}
/* 00224ae0 00000010 */ RFU080_CreateEventFlag() {}
/* 00224af0 00000010 */ RFU081_DeleteEventFlag() {}
/* 00224b00 00000010 */ RFU082_SetEventFlag() {}
/* 00224b10 00000010 */ RFU083_iSetEventFlag() {}
/* 00224b20 00000010 */ RFU084_ClearEventFlag() {}
/* 00224b30 00000010 */ RFU085_iClearEventFlag() {}
/* 00224b40 00000010 */ RFU086_WaitEvnetFlag() {}
/* 00224b50 00000010 */ RFU087_PollEvnetFlag() {}
/* 00224b60 00000010 */ RFU088_iPollEvnetFlag() {}
/* 00224b70 00000010 */ RFU089_ReferEventFlagStatus() {}
/* 00224b80 00000010 */ RFU090_iReferEventFlagStatus() {}
/* 00224b90 00000010 */ RFU091() {}
/* 00224ba0 00000010 */ EnableIntcHandler() {}
/* 00224bb0 00000010 */ iEnableIntcHandler() {}
/* 00224bc0 00000010 */ DisableIntcHandler() {}
/* 00224bd0 00000010 */ iDisableIntcHandler() {}
/* 00224be0 00000010 */ EnableDmacHandler() {}
/* 00224bf0 00000010 */ iEnableDmacHandler() {}
/* 00224c00 00000010 */ DisableDmacHandler() {}
/* 00224c10 00000010 */ iDisableDmacHandler() {}
/* 00224c20 00000010 */ KSeg0() {}
/* 00224c30 00000010 */ EnableCache() {}
/* 00224c40 00000010 */ DisableCache() {}
/* 00224c50 00000010 */ GetCop0() {}
/* 00224c60 00000010 */ FlushCache() {}
/* 00224c70 00000010 */ CpuConfig() {}
/* 00224c80 00000010 */ iGetCop0() {}
/* 00224c90 00000010 */ iFlushCache() {}
/* 00224ca0 00000010 */ iCpuConfig() {}
/* 00224cb0 00000010 */ sceSifStopDma() {}
/* 00224cc0 00000010 */ SetCPUTimerHandler() {}
/* 00224cd0 00000010 */ SetCPUTimer() {}
/* 00224ce0 00000010 */ SetOsdConfigParam2() {}
/* 00224cf0 00000010 */ GetOsdConfigParam2() {}
/* 00224d00 00000010 */ GsGetIMR() {}
/* 00224d10 00000010 */ iGsGetIMR() {}
/* 00224d20 00000010 */ GsPutIMR() {}
/* 00224d30 00000010 */ iGsPutIMR() {}
/* 00224d40 00000010 */ SetPgifHandler() {}
/* 00224d50 00000010 */ SetVSyncFlag() {}
/* 00224d60 00000010 */ RFU116() {}
/* 00224d70 00000010 */ _print() {}
/* 00224d80 00000010 */ sceSifDmaStat() {}
/* 00224d90 00000010 */ isceSifDmaStat() {}
/* 00224da0 00000010 */ sceSifSetDma() {}
/* 00224db0 00000010 */ isceSifSetDma() {}
/* 00224dc0 00000010 */ sceSifSetDChain() {}
/* 00224dd0 00000010 */ isceSifSetDChain() {}
/* 00224de0 00000010 */ sceSifSetReg() {}
/* 00224df0 00000010 */ sceSifGetReg() {}
/* 00224e00 00000010 */ ExecOSD() {}
/* 00224e10 00000010 */ Deci2Call() {}
/* 00224e20 00000010 */ PSMode() {}
/* 00224e30 00000010 */ MachineType() {}
/* 00224e40 00000010 */ GetMemorySize() {}

// *****************************************************************************
// FILE -- intr.c
// *****************************************************************************

/* 00224e50 00000068 */ DisableIntc() {}
/* 00224eb8 00000068 */ EnableIntc() {}
/* 00224f20 00000068 */ DisableDmac() {}
/* 00224f88 00000068 */ EnableDmac() {}
/* 00224ff0 00000020 */ iEnableIntc() {}
/* 00225010 00000020 */ iDisableIntc() {}
/* 00225030 00000020 */ iEnableDmac() {}
/* 00225050 00000020 */ iDisableDmac() {}
/* 00225070 00000010 */ static setup() {}
/* 00225080 00000010 */ static Copy() {}
/* 00225090 00000038 */ static kCopy() {}
/* 002250c8 00000010 */ static GetEntryAddress() {}
/* 002250d8 000000d4 */ InitAlarm() {}

// *****************************************************************************
// FILE -- kprintf.c
// *****************************************************************************

/* 002251b0 00000038 */ static kputchar() {}
/* 002251e8 000000b0 */ static deci2Putchar() {}
/* 00225298 00000034 */ static serialPutchar() {}
/* 002252d0 00000090 */ static ftoi() {}
/* 00225360 00000168 */ static printfloat() {}
/* 002254c8 000005c8 */ _printf() {}
/* 00225a90 00000038 */ kprintf() {}
/* 00225ac8 00000060 */ scePrintf() {}

// *****************************************************************************
// FILE -- sifcmd.c
// *****************************************************************************

/* 00225b28 0000001c */ static _set_sreg() {}
/* 00225b48 0000000c */ static _change_addr() {}
/* 00225b58 00000018 */ sceSifGetSreg() {}
/* 00225b70 0000001c */ sceSifSetSreg() {}
/* 00225b90 0000000c */ sceSifGetDataTable() {}
/* 00225ba0 00000280 */ sceSifInitCmd() {}
/* 00225e20 00000034 */ sceSifExitCmd() {}
/* 00225e58 00000018 */ sceSifSetCmdBuffer() {}
/* 00225e70 00000018 */ sceSifSetSysCmdBuffer() {}
/* 00225e88 0000002c */ sceSifAddCmdHandler() {}
/* 00225eb8 00000028 */ sceSifRemoveCmdHandler() {}
/* 00225ee0 00000134 */ static _sceSifSendCmd() {}
/* 00226018 0000003c */ sceSifSendCmd() {}
/* 00226058 0000003c */ isceSifSendCmd() {}
/* 00226098 00000128 */ static _sceSifCmdIntrHdlr() {}
/* 002261c0 000000b0 */ sceSifWriteBackDCache() {}

// *****************************************************************************
// FILE -- sifrpc.c
// *****************************************************************************

/* 00226270 0000019c */ sceSifInitRpc() {}
/* 00226410 00000024 */ sceSifExitRpc() {}
/* 00226438 000000a8 */ static _sceRpcGetPacket() {}
/* 002264e0 0000001c */ static _sceRpcFreePacket() {}
/* 00226500 00000030 */ static _sceRpcGetFPacket() {}
/* 00226530 00000040 */ static _sceRpcGetFPacket2() {}
/* 00226570 000000b4 */ static _request_end() {}
/* 00226628 00000060 */ static _request_rdata() {}
/* 00226688 00000158 */ sceSifGetOtherData() {}
/* 002267e0 0000004c */ static _search_svdata() {}
/* 00226830 000000b0 */ static _request_bind() {}
/* 002268e0 00000140 */ sceSifBindRpc() {}
/* 00226a20 0000008c */ static _request_call() {}
/* 00226ab0 000001ec */ sceSifCallRpc() {}
/* 00226ca0 0000003c */ sceSifCheckStatRpc() {}
/* 00226ce0 00000094 */ sceSifSetRpcQueue() {}
/* 00226d78 000000d0 */ sceSifRegisterRpc() {}
/* 00226e48 00000094 */ sceSifRemoveRpc() {}
/* 00226ee0 00000090 */ sceSifRemoveRpcQueue() {}
/* 00226f70 00000058 */ sceSifGetNextRequest() {}
/* 00226fc8 000001c4 */ sceSifExecRequest() {}
/* 00227190 00000040 */ sceSifRpcLoop() {}

// *****************************************************************************
// FILE -- filestub.c
// *****************************************************************************

/* 002271d0 0000005c */ static _sceFsIobSemaMK() {}
/* 00227230 00000088 */ static new_iob() {}
/* 002272b8 0000006c */ static get_iob() {}
/* 00227328 000003b8 */ static _sceFs_Rcv_Intr() {}
/* 002276e0 0000004c */ static _sceFsSemInit() {}
/* 00227730 0000002c */ static _sceFsWaitS() {}
/* 00227760 0000000c */ static _sceFsSigSema() {}
/* 00227770 000001a0 */ sceFsInit() {}
/* 00227910 0000008c */ static _fs_version() {}
/* 002279a0 00000034 */ sceFsReset() {}
/* 002279d8 00000284 */ sceOpen() {}
/* 00227c60 0000017c */ sceClose() {}
/* 00227de0 00000238 */ sceLseek() {}
/* 00228018 00000270 */ sceRead() {}
/* 00228288 000002c0 */ sceWrite() {}
/* 00228548 0000034c */ sceIoctl() {}
/* 00228898 000001d4 */ sceIoctl2() {}
/* 00228a70 000001a4 */ static _sceCallCode() {}
/* 00228c18 0000001c */ sceRemove() {}
/* 00228c38 000001ac */ sceMkdir() {}
/* 00228de8 0000001c */ sceRmdir() {}
/* 00228e08 0000026c */ sceFormat() {}
/* 00229078 00000120 */ sceAddDrv() {}
/* 00229198 0000001c */ sceDelDrv() {}
/* 002291b8 0000009c */ sceDopen() {}
/* 00229258 00000168 */ sceDclose() {}
/* 002293c0 00000158 */ sceDread() {}
/* 00229518 000001a0 */ sceGetstat() {}
/* 002296b8 0000023c */ sceChstat() {}
/* 002298f8 000001f0 */ sceRename() {}
/* 00229ae8 0000001c */ sceChdir() {}
/* 00229b08 00000198 */ sceSync() {}
/* 00229ca0 0000026c */ sceMount() {}
/* 00229f10 0000001c */ sceUmount() {}
/* 00229f30 00000238 */ sceLseek64() {}
/* 0022a168 00000230 */ sceDevctl() {}
/* 0022a398 000001e0 */ sceSymlink() {}
/* 0022a578 000001c8 */ sceReadlink() {}

// *****************************************************************************
// FILE -- iopheap.c
// *****************************************************************************

/* 0022a740 00000088 */ sceSifInitIopHeap() {}
/* 0022a7c8 00000070 */ sceSifAllocIopHeap() {}
/* 0022a838 00000078 */ sceSifFreeIopHeap() {}
/* 0022a8b0 000000f0 */ sceSifLoadIopHeap() {}

// *****************************************************************************
// FILE -- eeloadfile.c
// *****************************************************************************

/* 0022a9a0 00000100 */ static _lf_bind() {}
/* 0022aaa0 0000008c */ static _lf_version() {}
/* 0022ab30 00000038 */ sceSifLoadFileReset() {}
/* 0022ab68 00000208 */ static _sceSifLoadModuleBuffer() {}
/* 0022ad70 0000001c */ sceSifLoadModuleBuffer() {}
/* 0022ad90 0000001c */ sceSifLoadStartModuleBuffer() {}
/* 0022adb0 00000224 */ static _sceSifLoadModule() {}
/* 0022afd8 00000020 */ sceSifLoadModule() {}
/* 0022aff8 0000001c */ sceSifLoadStartModule() {}
/* 0022b018 00000104 */ static _sceSifLoadElfPart() {}
/* 0022b120 0000001c */ sceSifLoadElfPart() {}
/* 0022b140 00000028 */ sceSifLoadElf() {}
/* 0022b168 000000ec */ sceSifGetIopAddr() {}
/* 0022b258 000000dc */ sceSifSetIopAddr() {}

// *****************************************************************************
// FILE -- iopreset.c
// *****************************************************************************

/* 0022b338 00000130 */ sceSifResetIop() {}
/* 0022b468 00000028 */ sceSifIsAliveIop() {}
/* 0022b490 00000048 */ sceSifSyncIop() {}
/* 0022b4d8 00000110 */ sceSifRebootIop() {}

// *****************************************************************************
// FILE -- diei.c
// *****************************************************************************

/* 0022b5e8 00000048 */ DIntr() {}
/* 0022b630 00000018 */ EIntr() {}

// *****************************************************************************
// FILE -- initsys.c
// *****************************************************************************

/* 0022b648 00000048 */ static supplement_crt0() {}
/* 0022b690 00000024 */ _InitSys() {}

// *****************************************************************************
// FILE -- glue.c
// *****************************************************************************

/* 0022b6b8 0000000c */ sceResetttyinit() {}
/* 0022b6c8 00000090 */ VSync() {}
/* 0022b758 000000a4 */ VSync2() {}
/* 0022b800 0000007c */ write() {}
/* 0022b880 00000074 */ read() {}
/* 0022b8f8 00000028 */ open() {}
/* 0022b920 00000008 */ close() {}
/* 0022b928 00000008 */ ioctl() {}
/* 0022b930 00000008 */ lseek() {}
/* 0022b938 000000ac */ sbrk() {}
/* 0022b9e8 00000008 */ isatty() {}
/* 0022b9f0 00000014 */ fstat() {}
/* 0022ba08 00000008 */ getpid() {}
/* 0022ba10 00000028 */ kill() {}
/* 0022ba38 00000028 */ stat() {}
/* 0022ba60 00000028 */ unlink() {}

// *****************************************************************************
// FILE -- thread.c
// *****************************************************************************

/* 0022ba88 000000d8 */ static topThread() {}
/* 0022bb60 000000d4 */ InitThread() {}
/* 0022bc38 00000094 */ iWakeupThread() {}
/* 0022bcd0 0000007c */ iRotateThreadReadyQueue() {}
/* 0022bd50 00000098 */ iSuspendThread() {}

// *****************************************************************************
// FILE -- deci2.c
// *****************************************************************************

/* 0022bde8 00000044 */ sceDeci2Open() {}
/* 0022be30 00000024 */ sceDeci2Close() {}
/* 0022be58 00000030 */ sceDeci2ReqSend() {}
/* 0022be88 00000024 */ sceDeci2Poll() {}
/* 0022beb0 00000034 */ sceDeci2ExRecv() {}
/* 0022bee8 00000034 */ sceDeci2ExSend() {}
/* 0022bf20 00000030 */ sceDeci2ExReqSend() {}
/* 0022bf50 00000024 */ sceDeci2ExLock() {}
/* 0022bf78 00000024 */ sceDeci2ExUnLock() {}
/* 0022bfa0 00000024 */ kputs() {}

// *****************************************************************************
// FILE -- tty.c
// *****************************************************************************

/* 0022bfc8 00000024 */ static QueueInit() {}
/* 0022bff0 0000003c */ static QueuePeekWriteDone() {}
/* 0022c030 0000003c */ static QueuePeekReadDone() {}
/* 0022c070 00000194 */ static sceTtyHandler() {}
/* 0022c208 00000150 */ sceTtyWrite() {}
/* 0022c358 000000d0 */ sceTtyRead() {}
/* 0022c428 000000bc */ sceTtyInit() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c4e8 00000010 */ sceGifPkInit() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c4f8 00000010 */ sceGifPkReset() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c508 00000058 */ sceGifPkTerminate() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c560 00000074 */ sceGifPkCnt() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c5d8 00000098 */ sceGifPkRef() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c670 00000074 */ sceGifPkEnd() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c6e8 00000014 */ sceGifPkReserve() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c700 00000018 */ sceGifPkOpenGifTag() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c718 000000a4 */ sceGifPkCloseGifTag() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 0022c7c0 00000024 */ sceGifPkAddGsAD() {}

// *****************************************************************************
// FILE -- libvu0.c
// *****************************************************************************

/* 0022c7e8 0000002c */ sceVu0ApplyMatrix() {}
/* 0022c818 00000044 */ sceVu0MulMatrix() {}
/* 0022c860 0000001c */ sceVu0OuterProduct() {}
/* 0022c880 00000024 */ sceVu0InnerProduct() {}
/* 0022c8a8 00000034 */ sceVu0Normalize() {}
/* 0022c8e0 00000044 */ sceVu0TransposeMatrix() {}
/* 0022c928 0000006c */ sceVu0InversMatrix() {}
/* 0022c998 00000020 */ sceVu0DivVector() {}
/* 0022c9b8 00000020 */ sceVu0DivVectorXYZ() {}
/* 0022c9d8 00000028 */ sceVu0InterVector() {}
/* 0022ca00 00000014 */ sceVu0AddVector() {}
/* 0022ca18 00000014 */ sceVu0SubVector() {}
/* 0022ca30 00000014 */ sceVu0MulVector() {}
/* 0022ca48 00000018 */ sceVu0ScaleVector() {}
/* 0022ca60 0000002c */ sceVu0TransMatrix() {}
/* 0022ca90 0000000c */ sceVu0CopyVector() {}
/* 0022caa0 00000024 */ sceVu0CopyMatrix() {}
/* 0022cac8 00000010 */ sceVu0FTOI4Vector() {}
/* 0022cad8 00000010 */ sceVu0FTOI0Vector() {}
/* 0022cae8 00000010 */ sceVu0ITOF4Vector() {}
/* 0022caf8 00000010 */ sceVu0ITOF0Vector() {}
/* 0022cb08 00000028 */ sceVu0UnitMatrix() {}
/* 0022cb30 00000074 */ static _sceVu0ecossin() {}
/* 0022cba8 000000a4 */ sceVu0RotMatrixZ() {}
/* 0022cc50 000000a8 */ sceVu0RotMatrixX() {}
/* 0022ccf8 000000a8 */ sceVu0RotMatrixY() {}
/* 0022cda0 00000050 */ sceVu0RotMatrix() {}
/* 0022cdf0 00000024 */ sceVu0ClampVector() {}
/* 0022ce18 000000b0 */ sceVu0CameraMatrix() {}
/* 0022cec8 000000c0 */ sceVu0NormalLightMatrix() {}
/* 0022cf88 00000068 */ sceVu0LightColorMatrix() {}
/* 0022cff0 00000104 */ sceVu0ViewScreenMatrix() {}
/* 0022d0f8 00000190 */ sceVu0DropShadowMatrix() {}
/* 0022d288 00000058 */ sceVu0RotTransPersN() {}
/* 0022d2e0 00000044 */ sceVu0RotTransPers() {}
/* 0022d328 0000001c */ sceVu0CopyVectorXYZ() {}
/* 0022d348 0000002c */ sceVu0InterVectorXYZ() {}
/* 0022d378 00000018 */ sceVu0ScaleVectorXYZ() {}
/* 0022d390 00000048 */ sceVu0ClipScreen() {}
/* 0022d3d8 00000060 */ sceVu0ClipScreen3() {}
/* 0022d438 0000008c */ sceVu0ClipAll() {}
/* 0022d4c8 0000005c */ sceVpu0Reset() {}

// *****************************************************************************
// FILE -- libpad.c
// *****************************************************************************

/* 0022d528 00000130 */ static _send_to_iop() {}
/* 0022d658 00000140 */ scePadInit() {}
/* 0022d798 0000009c */ static scePadInit2() {}
/* 0022d838 00000080 */ scePadEnd() {}
/* 0022d8b8 000001e4 */ scePadPortOpen() {}
/* 0022daa0 000000b8 */ scePadPortClose() {}
/* 0022db58 00000060 */ static scePadGetDmaStr() {}
/* 0022dbb8 00000050 */ scePadGetFrameCount() {}
/* 0022dc08 0000007c */ scePadRead() {}
/* 0022dc88 00000078 */ scePadGetState() {}
/* 0022dd00 00000034 */ scePadStateIntToStr() {}
/* 0022dd38 00000064 */ static scePadSetReqState() {}
/* 0022dda0 00000050 */ scePadGetReqState() {}
/* 0022ddf0 00000034 */ scePadReqIntToStr() {}
/* 0022de28 00000120 */ scePadInfoAct() {}
/* 0022df48 0000011c */ scePadInfoComb() {}
/* 0022e068 00000138 */ scePadInfoMode() {}
/* 0022e1a0 000000b4 */ scePadSetMainMode() {}
/* 0022e258 000000b8 */ scePadSetActDirect() {}
/* 0022e310 000000d8 */ scePadSetActAlign() {}
/* 0022e3e8 000000b4 */ static scePadGetButtonMask() {}
/* 0022e4a0 000000b0 */ static scePadSetButtonInfo() {}
/* 0022e550 0000005c */ scePadInfoPressMode() {}
/* 0022e5b0 00000054 */ scePadEnterPressMode() {}
/* 0022e608 00000054 */ scePadExitPressMode() {}
/* 0022e660 000000cc */ static scePadSetVrefParam() {}
/* 0022e730 00000064 */ static scePadGetPortMax() {}
/* 0022e798 00000068 */ scePadGetSlotMax() {}
/* 0022e800 00000064 */ static scePadGetModVersion() {}
/* 0022e868 00000068 */ scePadSetWarningLevel() {}

// *****************************************************************************
// FILE -- ../libmc.c
// *****************************************************************************

/* 0022e8d0 000001b4 */ sceMcInit() {}
/* 0022ea88 00000030 */ _lmcGetClientPtr() {}
/* 0022eab8 000000b4 */ sceMcChangeThreadPriority() {}
/* 0022eb70 000000c0 */ sceMcGetSlotMax() {}
/* 0022ec30 00000134 */ sceMcOpen() {}
/* 0022ed68 00000034 */ sceMcMkdir() {}
/* 0022eda0 000000b4 */ sceMcClose() {}
/* 0022ee58 000000d4 */ sceMcSeek() {}
/* 0022ef30 00000090 */ static mceIntrReadFixAlign() {}
/* 0022efc0 0000011c */ sceMcRead() {}
/* 0022f0e0 0000017c */ sceMcWrite() {}
/* 0022f260 00000024 */ static mcHearAlarm() {}
/* 0022f288 00000044 */ static mcDelayThread() {}
/* 0022f2d0 000000e0 */ sceMcSync() {}
/* 0022f3b0 00000054 */ static mceGetInfoApdx() {}
/* 0022f408 00000184 */ sceMcGetInfo() {}
/* 0022f590 00000158 */ sceMcGetDir() {}
/* 0022f6e8 00000084 */ static mceStorePwd() {}
/* 0022f770 00000150 */ sceMcChdir() {}
/* 0022f8c0 000000c8 */ sceMcFormat() {}
/* 0022f988 00000128 */ sceMcDelete() {}
/* 0022fab0 000000b4 */ sceMcFlush() {}
/* 0022fb68 000001d8 */ sceMcSetFileInfo() {}
/* 0022fd40 00000168 */ sceMcRename() {}
/* 0022fea8 000000c8 */ sceMcUnformat() {}
/* 0022ff70 00000118 */ sceMcGetEntSpace() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230088 00000110 */ sceGsResetGraph() {}
/* 00230198 0000000c */ sceGsGetGParam() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002301a8 00000068 */ sceGsResetPath() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230210 000000bc */ sceGsPutDispEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002302d0 000001e4 */ sceGsSetDefDrawEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002304b8 000000e8 */ sceGsPutDrawEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002305a0 00000298 */ sceGsSetDefDBuff() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230838 0000005c */ sceGsSwapDBuff() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230898 00000094 */ sceGsSyncV() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230930 00000314 */ sceGsSyncPath() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230c48 000001e4 */ sceGsSetDefLoadImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230e30 00000140 */ sceGsSetDefStoreImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00230f70 0000017c */ sceGsExecLoadImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002310f0 0000068c */ sceGsExecStoreImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00231780 00000060 */ sceGsSyncVCallback() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002317e0 0000003c */ sceGsPutIMR() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00231820 00000088 */ sceGsSetHalfOffset() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 002318a8 00000270 */ sceGsSetDefDispEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00231b18 000000c8 */ sceGszbufaddr() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 00231be0 00000104 */ sceGsSetDefClear() {}

// *****************************************************************************
// FILE -- pack.c
// *****************************************************************************

/* 00231ce8 00000088 */ _type2id() {}
/* 00231d70 000001fc */ _id2type() {}
/* 00231f70 000002f0 */ sceMpegDemuxPssRing() {}
/* 00232260 00000020 */ sceMpegDemuxPss() {}
/* 00232280 000000f4 */ sceMpegAddStrCallback() {}
/* 00232378 00000150 */ _pack_header() {}
/* 002324c8 0000006c */ _system_header() {}
/* 00232538 00000588 */ _PES_packet() {}

// *****************************************************************************
// FILE -- mpeg.c
// *****************************************************************************

/* 00232ac0 0000009c */ sceMpegInit() {}
/* 00232b60 0000023c */ sceMpegCreate() {}
/* 00232da0 00000008 */ sceMpegDelete() {}
/* 00232da8 00000038 */ sceMpegAddBs() {}
/* 00232de0 00000048 */ sceMpegGetPicture() {}
/* 00232e28 00000044 */ sceMpegGetPictureRAW8() {}
/* 00232e70 00000050 */ sceMpegGetPictureRAW8xy() {}
/* 00232ec0 00000014 */ sceMpegSetDecodeMode() {}
/* 00232ed8 00000020 */ sceMpegGetDecodeMode() {}
/* 00232ef8 0000000c */ sceMpegIsEnd() {}
/* 00232f08 00000010 */ sceMpegIsRefBuffEmpty() {}
/* 00232f18 00000040 */ sceMpegReset() {}
/* 00232f58 00000068 */ sceMpegClearRefBuff() {}
/* 00232fc0 00000024 */ sceMpegAddCallback() {}
/* 00232fe8 00000050 */ _dispatchMpegCallback() {}
/* 00233038 00000024 */ _dispatchMpegCbNodata() {}
/* 00233060 00000014 */ sceMpegSetDefaultPtsGap() {}
/* 00233078 00000010 */ sceMpegResetDefaultPtsGap() {}
/* 00233088 00000014 */ sceMpegSetImageBuff() {}
/* 002330a0 0000000c */ sceMpegDispWidth() {}
/* 002330b0 0000000c */ sceMpegDispHeight() {}
/* 002330c0 0000000c */ sceMpegDispCenterOffX() {}
/* 002330d0 0000000c */ sceMpegDispCenterOffY() {}
/* 002330e0 00000010 */ sceSetBrokenLink() {}
/* 002330f0 00000014 */ sceSetPtm() {}
/* 00233108 00000014 */ _alalcInit() {}
/* 00233120 0000000c */ _alalcSetDynamic() {}
/* 00233130 0000000c */ _alalcFree() {}
/* 00233140 00000068 */ _alalcAlloc() {}
/* 002331a8 00000018 */ _alalcRest() {}
/* 002331c0 00000184 */ static _getpic() {}
/* 00233348 00000124 */ static _decodeOrSkipFrame() {}
/* 00233470 0000003c */ static _decodeOrSkip() {}
/* 002334b0 00000170 */ static _decodeOrSkipField() {}
/* 00233620 00000070 */ _sceMpegFlush() {}

// *****************************************************************************
// FILE -- init.c
// *****************************************************************************

/* 00233690 00000010 */ _initSeqAgain() {}
/* 002336a0 00000084 */ _lastFrame() {}
/* 00233728 0000004c */ _clearOnce() {}
/* 00233778 000000c4 */ _clearEach() {}
/* 00233840 00000010 */ _ErrMessage() {}
/* 00233850 0000002c */ _Error1() {}
/* 00233880 00000058 */ _Error() {}
/* 002338d8 000000d4 */ _sendDataToIPU() {}
/* 002339b0 00000020 */ static _RefImageInit() {}
/* 002339d0 00000154 */ _sequenceHeader() {}
/* 00233b28 00000344 */ _initSeq() {}
/* 00233e70 000000e8 */ static _initRefImages() {}
/* 00233f58 000000c0 */ static _setDefaultQM() {}
/* 00234018 00000164 */ _sequenceExtension() {}
/* 00234180 000000a0 */ _sequenceDisplayExtension() {}
/* 00234220 0000000c */ _sequenceScalableExtension() {}
/* 00234230 0000000c */ _unknown_extension() {}
/* 00234240 0000000c */ _pictureSpatialScalableExtension() {}
/* 00234250 0000000c */ _pictureTemporalScalableExtension() {}

// *****************************************************************************
// FILE -- defhandler.c
// *****************************************************************************

/* 00234260 0000000c */ _defStopDMA() {}
/* 00234270 0000000c */ _defRestartDMA() {}

// *****************************************************************************
// FILE -- mpc.c
// *****************************************************************************

/* 00234280 00000334 */ static _motionComp0() {}
/* 002345b8 000006b0 */ _getAllRefs() {}
/* 00234c68 00000420 */ _getRef0() {}
/* 00235088 0000018c */ static _doMC() {}
/* 00235218 00000074 */ _rix_000() {}
/* 00235290 00000094 */ _ri0_000() {}
/* 00235328 000000b4 */ _rix_001() {}
/* 002353e0 000000cc */ _ri0_001() {}
/* 002354b0 000000ac */ _rix_010() {}
/* 00235560 000000b8 */ _ri0_010() {}
/* 00235618 000000f8 */ _rix_011() {}
/* 00235710 000000fc */ _ri0_011() {}
/* 00235810 000000a4 */ _rix_100() {}
/* 002358b8 000000ac */ _ri0_100() {}
/* 00235968 000000e4 */ _rix_101() {}
/* 00235a50 000000e4 */ _ri0_101() {}
/* 00235b38 000000dc */ _rix_110() {}
/* 00235c18 000000d0 */ _ri0_110() {}
/* 00235ce8 00000128 */ _rix_111() {}
/* 00235e10 00000114 */ _ri0_111() {}
/* 00235f28 0000005c */ _copyAddRefImage() {}
/* 00235f88 00000060 */ _copyRefImage() {}
/* 00235fe8 00000028 */ _ipuSetMPEG1() {}
/* 00236010 000001e4 */ _waitBdecOut() {}
/* 002361f8 0000001c */ _dmVector() {}
/* 00236218 00000188 */ _dualPrimeVector() {}
/* 002363a0 00000110 */ _mbAddressIncrement() {}
/* 002364b0 00000124 */ _pictureData0() {}
/* 002365d8 00000124 */ static _sliceA0() {}
/* 00236700 00000200 */ static _slice0() {}
/* 00236900 000000cc */ static _skipMB0() {}
/* 002369d0 00000524 */ static _decMB0() {}
/* 00236ef8 00000088 */ static _decode_motion_vector() {}
/* 00236f80 0000017c */ _motionVectors() {}
/* 00237100 0000013c */ _motionVector() {}
/* 00237240 00000030 */ _sendIpuCommand() {}
/* 00237270 000000a4 */ _waitIpuIdle() {}
/* 00237318 000000b0 */ _waitIpuIdle64() {}
/* 002373c8 000001b4 */ _ipuVdec() {}
/* 00237580 00000134 */ _peepBit() {}
/* 002376b8 00000114 */ _flushBuf() {}
/* 002377d0 00000168 */ _nextBit() {}
/* 00237938 00000068 */ _nextStartCode() {}
/* 002379a0 0000006c */ _sliceB() {}
/* 00237a10 00000124 */ _nextHeader() {}
/* 00237b38 000000cc */ _pictureHeader() {}
/* 00237c08 000000b0 */ _extensionAndUserData() {}
/* 00237cb8 0000022c */ _pictureCodingExtension() {}
/* 00237ee8 00000034 */ _extrainfo() {}
/* 00237f20 000000e0 */ static _updateTempTackData() {}
/* 00238000 000000e4 */ _groupOfPicturesHeader() {}
/* 002380e8 000000ac */ _quantMatrixExtension() {}
/* 00238198 000000f0 */ _pictureDisplayExtension() {}
/* 00238288 000000ac */ _copyrightExtension() {}
/* 00238338 000000e0 */ _decPicture() {}
/* 00238418 000000b8 */ _outputFrame() {}
/* 002384d0 000003dc */ _updateRefImage() {}
/* 002388b0 0000009c */ static _isOutSizeOK() {}
/* 00238950 000001ec */ _cpr8() {}
/* 00238b40 00000038 */ static _markOutput() {}
/* 00238b78 00000194 */ static _getPtsDtsFlags() {}
/* 00238d10 00000118 */ _dispRefImage() {}
/* 00238e28 000001c0 */ _dispRefImageField() {}

// *****************************************************************************
// FILE -- csc.c
// *****************************************************************************

/* 00238fe8 000000e8 */ static _doCSC() {}
/* 002390d0 00000148 */ static _ch3dmaCSC() {}
/* 00239218 000001c0 */ static _doCSC2() {}
/* 002393d8 000000d4 */ static _ch4dma() {}
/* 002394b0 00000254 */ _csc_storeRefImage() {}

// *****************************************************************************
// FILE -- bit.c
// *****************************************************************************

/* 00239708 00000034 */ _sysbitInit() {}
/* 00239740 0000001c */ _sysbitNext() {}
/* 00239760 00000098 */ static _sysbitFlush() {}
/* 002397f8 0000004c */ _sysbitGet() {}
/* 00239848 00000044 */ _sysbitMarker() {}
/* 00239890 00000054 */ _sysbitJump() {}
/* 002398e8 0000002c */ _sysbitPtr() {}

// *****************************************************************************
// FILE -- libpc.c
// *****************************************************************************

/* 00239918 00000064 */ scePcStart() {}
/* 00239980 0000001c */ scePcStop() {}

// *****************************************************************************
// FILE -- sdr_main.c
// *****************************************************************************

/* 002399a0 000000bc */ sceSdRemoteInit() {}
/* 00239a60 00000070 */ sceSdTransToIOP() {}
/* 00239ad0 0000000c */ sceSdCallBack() {}
/* 00239ae0 00000204 */ sceSdRemote() {}

// *****************************************************************************
// FILE -- sdr_cb.c
// *****************************************************************************

/* 00239ce8 000000d4 */ sceSdRemoteCallbackInit() {}
/* 00239dc0 00000064 */ static _sdrCBThread() {}
/* 00239e28 000000e0 */ static _sdrCB() {}

// *****************************************************************************
// FILE -- libipu.c
// *****************************************************************************

/* 00239f08 00000064 */ static setD3_CHCR() {}
/* 00239f70 00000064 */ static setD4_CHCR() {}
/* 00239fd8 000000e4 */ sceIpuStopDMA() {}
/* 0023a0c0 00000150 */ sceIpuRestartDMA() {}
/* 0023a210 00000068 */ sceIpuSync() {}

// *****************************************************************************
// FILE -- ipuinit.c
// *****************************************************************************

/* 0023a278 00000064 */ static setD4_CHCR() {}
/* 0023a2e0 00000238 */ sceIpuInit() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isnan.c
// *****************************************************************************

/* 0023a518 00000038 */ int isnan(/* a0 4 */ double x) {
	/* a0 4 */ __int32_t hx;
	/* a0 4 */ ieee_double_shape_type ew_u;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_tan.c
// *****************************************************************************

/* 0023a550 00000088 */ float tanf(/* f12 50 */ float x) {
	/* 0x0(sp) */ float y[2];
	/* a0 4 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_fmod.c
// *****************************************************************************

/* 0023a5d8 0000013c */ float fmodf(/* f21 59 */ float x, /* f20 58 */ float y) {
	/* f22 60 */ float z;
	/* 0x0(sp) */ exception exc;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_sqrt.c
// *****************************************************************************

/* 0023a718 00000114 */ float sqrtf(/* f20 58 */ float x) {
	/* f21 59 */ float z;
	/* 0x0(sp) */ exception exc;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_fmod.c
// *****************************************************************************

/* 0023a830 00000250 */ float __ieee754_fmodf(/* a0 4 */ float x, /* a3 7 */ float y) {
	/* a0 4 */ __int32_t n;
	/* a1 5 */ __int32_t hx;
	/* a2 6 */ __int32_t hy;
	/* v1 3 */ __int32_t hz;
	/* t0 8 */ __int32_t ix;
	/* a3 7 */ __int32_t iy;
	/* t1 9 */ __int32_t sx;
	/* v0 2 */ __int32_t i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* 0023aa80 000003e0 */ __int32_t __ieee754_rem_pio2f(/* f12 50 */ float x, /* s1 17 */ float *y) {
	/* f12 50 */ float z;
	/* f3 41 */ float w;
	/* f5 43 */ float t;
	/* f4 42 */ float r;
	/* f6 44 */ float fn;
	/* 0x0(sp) */ float tx[3];
	/* v1 3 */ __int32_t i;
	/* a0 4 */ __int32_t j;
	/* a1 5 */ __int32_t n;
	/* s0 16 */ __int32_t ix;
	/* s2 18 */ __int32_t hx;
	/* a2 6 */ int e0;
	/* a3 7 */ int nx;
	/* v0 2 */ __uint32_t high;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* 0023ae60 00000138 */ float __ieee754_sqrtf(/* f12 50 */ float x) {
	/* v0 2 */ float z;
	/* a2 6 */ __uint32_t r;
	/* a1 5 */ __int32_t ix;
	/* a3 7 */ __int32_t s;
	/* a0 4 */ __int32_t q;
	/* a2 6 */ __int32_t m;
	/* v1 3 */ __int32_t t;
	/* a0 4 */ __int32_t i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* 0023af98 0000094c */ int __kernel_rem_pio2f(/* 0x140(sp) */ float *x, /* s7 23 */ float *y, /* a2 6 */ int e0, /* a3 7 */ int nx, /* 0x144(sp) */ int prec, /* 0x148(sp) */ __int32_t *ipio2) {
	/* s0 16 */ __int32_t jz;
	/* s1 17 */ __int32_t jx;
	/* s6 22 */ __int32_t jv;
	/* s4 20 */ __int32_t jp;
	/* a3 7 */ __int32_t carry;
	/* s3 19 */ __int32_t n;
	/* 0x0(sp) */ __int32_t iq[20];
	/* a2 6 */ __int32_t i;
	/* a1 5 */ __int32_t j;
	/* t0 8 */ __int32_t k;
	/* a3 7 */ __int32_t m;
	/* s2 18 */ __int32_t q0;
	/* 0x14c(sp) */ __int32_t ih;
	/* f20 58 */ float z;
	/* f2 40 */ float fw;
	/* 0x50(sp) */ float f[20];
	/* 0xa0(sp) */ float fq[20];
	/* 0xf0(sp) */ float q[20];
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

/* 0023b8e8 00000294 */ float __kernel_tanf(/* f12 50 */ float x, /* f13 51 */ float y, /* a0 4 */ int iy) {
	/* f14 52 */ float z;
	/* f3 41 */ float r;
	/* f4 42 */ float v;
	/* f11 49 */ float w;
	/* f15 53 */ float s;
	/* a1 5 */ __int32_t ix;
	/* a2 6 */ __int32_t hx;
	/* a0 4 */ float a;
	/* v1 3 */ float t;
	/* v1 3 */ __int32_t i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_matherr.c
// *****************************************************************************

/* 0023bb80 00000024 */ int matherr(/* a0 4 */ exception *x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_fabs.c
// *****************************************************************************

/* 0023bba8 0000001c */ float fabsf(/* v1 3 */ float x) {
	/* v1 3 */ __uint32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* 0023bbc8 000000e4 */ float floorf(/* f12 50 */ float x) {
	/* a0 4 */ __int32_t i0;
	/* a1 5 */ __int32_t j0;
	/* a2 6 */ __uint32_t i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_isnan.c
// *****************************************************************************

/* 0023bcb0 00000024 */ int isnanf(/* v1 3 */ float x) {
	/* v0 2 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* 0023bcd8 00000160 */ float scalbnf(/* a1 5 */ float x, /* a0 4 */ int n) {
	/* v1 3 */ __int32_t k;
	/* a2 6 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_copysign.c
// *****************************************************************************

/* 0023be38 00000030 */ float copysignf(/* a1 5 */ float x, /* a0 4 */ float y) {
	/* a1 5 */ __uint32_t ix;
	/* v1 3 */ __uint32_t iy;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023be68 00000054 */ void __do_global_dtors() {}
/* 0023bec0 000000b0 */ void __do_global_ctors() {}
/* 0023bf70 00000020 */ void __main() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023bf90 000006ec */ DItype __divdi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c680 00000030 */ void exit(/* s0 16 */ int status) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c6b0 0000003c */ DItype __fixsfdi(/* f12 50 */ SFtype a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c6f0 000000ec */ DItype __fixunsdfdi(/* s1 17 */ DFtype a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c7e0 000000f4 */ DItype __fixunssfdi(/* f12 50 */ SFtype original_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c8d8 00000098 */ DFtype __floatdidf(/* s0 16 */ DItype u) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023c970 000000e0 */ SFtype __floatdisf(/* s1 17 */ DItype u) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023ca50 00000668 */ DItype __moddi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023d0b8 00000060 */ DItype __muldi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023d118 000005d0 */ UDItype __udivdi3(/* a0 4 */ UDItype n, /* a1 5 */ UDItype d) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 0023d6e8 00000540 */ UDItype __umoddi3(/* a0 4 */ UDItype u, /* a1 5 */ UDItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 0023dc28 0000012c */ FLO_type __pack_d(/* a0 4 */ fp_number_type *src) {}
/* 0023dd58 0000009c */ void __unpack_d(/* a0 4 */ FLO_union_type *src, /* a1 5 */ fp_number_type *dst) {}
/* 0023ddf8 00000240 */ static fp_number_type* _fpadd_parts(/* t0 8 */ fp_number_type *a, /* a1 5 */ fp_number_type *b, /* a2 6 */ fp_number_type *tmp) {}
/* 0023e038 00000058 */ FLO_type dpadd(/* 0x60(sp) */ FLO_type arg_a, /* 0x68(sp) */ FLO_type arg_b) {}
/* 0023e090 00000064 */ FLO_type dpsub(/* 0x60(sp) */ FLO_type arg_a, /* 0x68(sp) */ FLO_type arg_b) {}
/* 0023e0f8 000002a8 */ FLO_type dpmul(/* 0x60(sp) */ FLO_type arg_a, /* 0x68(sp) */ FLO_type arg_b) {}
/* 0023e3a0 00000168 */ FLO_type dpdiv(/* 0x40(sp) */ FLO_type arg_a, /* 0x48(sp) */ FLO_type arg_b) {}
/* 0023e508 00000114 */ int __fpcmp_parts_d(/* a0 4 */ fp_number_type *a, /* a1 5 */ fp_number_type *b) {}
/* 0023e620 0000004c */ SItype dpcmp(/* 0x40(sp) */ FLO_type arg_a, /* 0x48(sp) */ FLO_type arg_b) {}
/* 0023e670 000000b8 */ FLO_type litodp(/* a0 4 */ SItype arg_a) {}
/* 0023e728 00000094 */ SItype dptoli(/* 0x20(sp) */ FLO_type arg_a) {}
/* 0023e7c0 000000a0 */ USItype dptoul(/* 0x20(sp) */ FLO_type arg_a) {}
/* 0023e860 00000038 */ FLO_type __negdf2(/* 0x20(sp) */ FLO_type arg_a) {}
/* 0023e898 0000002c */ DFtype __make_dp(/* a0 4 */ fp_class_type class, /* a1 5 */ unsigned int sign, /* a2 6 */ int exp, /* a3 7 */ UDItype frac) {}
/* 0023e8c8 00000054 */ SFtype dptofp(/* 0x20(sp) */ DFtype arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

/* 0023e920 0000010c */ FLO_type __pack_f(/* a0 4 */ fp_number_type *src) {}
/* 0023ea30 00000090 */ void __unpack_f(/* a0 4 */ FLO_union_type *src, /* a1 5 */ fp_number_type *dst) {}
/* 0023eac0 00000234 */ static fp_number_type* _fpadd_parts(/* t1 9 */ fp_number_type *a, /* a1 5 */ fp_number_type *b, /* a2 6 */ fp_number_type *tmp) {}
/* 0023ecf8 00000058 */ FLO_type fpadd(/* 0x30(sp) */ FLO_type arg_a, /* 0x34(sp) */ FLO_type arg_b) {}
/* 0023ed50 00000064 */ FLO_type fpsub(/* 0x30(sp) */ FLO_type arg_a, /* 0x34(sp) */ FLO_type arg_b) {}
/* 0023edb8 000001f4 */ FLO_type fpmul(/* 0x30(sp) */ FLO_type arg_a, /* 0x34(sp) */ FLO_type arg_b) {}
/* 0023efb0 00000160 */ FLO_type fpdiv(/* 0x20(sp) */ FLO_type arg_a, /* 0x24(sp) */ FLO_type arg_b) {}
/* 0023f110 00000114 */ int __fpcmp_parts_f(/* a0 4 */ fp_number_type *a, /* a1 5 */ fp_number_type *b) {}
/* 0023f228 0000004c */ SItype fpcmp(/* 0x20(sp) */ FLO_type arg_a, /* 0x24(sp) */ FLO_type arg_b) {}
/* 0023f278 000000b8 */ FLO_type sitofp(/* a0 4 */ SItype arg_a) {}
/* 0023f330 0000008c */ SItype fptosi(/* 0x10(sp) */ FLO_type arg_a) {}
/* 0023f3c0 00000098 */ USItype fptoui(/* 0x10(sp) */ FLO_type arg_a) {}
/* 0023f458 00000038 */ FLO_type __negsf2(/* 0x10(sp) */ FLO_type arg_a) {}
/* 0023f490 0000002c */ SFtype __make_fp(/* a0 4 */ fp_class_type class, /* a1 5 */ unsigned int sign, /* a2 6 */ int exp, /* a3 7 */ USItype frac) {}
/* 0023f4c0 00000040 */ DFtype fptodp(/* 0x10(sp) */ SFtype arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atoi.c
// *****************************************************************************

/* 0023f500 00000028 */ int atoi(/* a0 4 */ char *s) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/errno/errno.c
// *****************************************************************************

/* 0023f528 0000000c */ int* __errno() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/findfp.c
// *****************************************************************************

/* 0023f538 00000058 */ static void std(/* a0 4 */ FILE *ptr, /* a1 5 */ int flags, /* a2 6 */ int file, /* a3 7 */ _reent *data) {}

/* 0023f590 00000070 */ _glue* __sfmoreglue(/* a0 4 */ _reent *d, /* s1 17 */ int n) {
	/* s0 16 */ _glue *g;
	/* v0 2 */ FILE *p;
}

/* 0023f600 000000e0 */ FILE* __sfp(/* s1 17 */ _reent *d) {
	/* a0 4 */ FILE *fp;
	/* v1 3 */ int n;
	/* s0 16 */ _glue *g;
}

/* 0023f6e0 0000000c */ void _cleanup_r(/* a0 4 */ _reent *ptr) {}
/* 0023f6f0 0000000c */ void _cleanup() {}
/* 0023f700 0000008c */ void __sinit(/* s0 16 */ _reent *s) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fwalk.c
// *****************************************************************************

/* 0023f790 00000094 */ int _fwalk(/* a0 4 */ _reent *ptr, /* s4 20 */ int (*function)(/* parameters unknown */)) {
	/* s1 17 */ FILE *fp;
	/* s0 16 */ int n;
	/* s3 19 */ int ret;
	/* s2 18 */ _glue *g;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/index.c
// *****************************************************************************

/* 0023f828 0000001c */ char* index(/* a0 4 */ char *s, /* a1 5 */ int c) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/malloc.c
// *****************************************************************************

/* 0023f848 00000028 */ void* malloc(/* a1 5 */ size_t nbytes) {}
/* 0023f870 00000010 */ void free(/* a1 5 */ void *aptr) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 0023f880 00000254 */ static void malloc_extend_top(/* s7 23 */ _reent *reent_ptr, /* a1 5 */ size_t nb) {
	/* s1 17 */ char *brk;
	/* a1 5 */ size_t front_misalign;
	/* s0 16 */ size_t correction;
	/* a0 4 */ char *new_brk;
	/* v0 2 */ size_t top_size;
	/* s4 20 */ mchunkptr old_top;
	/* s3 19 */ size_t old_top_size;
	/* s5 21 */ char *old_end;
	/* s2 18 */ size_t sbrk_size;
	/* v1 3 */ long unsigned int pagesz;
}

/* 0023fad8 00000778 */ void* _malloc_r(/* s3 19 */ _reent *reent_ptr, /* a1 5 */ size_t bytes) {
	/* s0 16 */ mchunkptr victim;
	/* t0 8 */ size_t victim_size;
	/* t3 11 */ int idx;
	/* a1 5 */ mbinptr bin;
	/* a3 7 */ mchunkptr remainder;
	/* a3 7 */ long int remainder_size;
	/* a2 6 */ int remainder_index;
	/* a0 4 */ long unsigned int block;
	/* t2 10 */ int startidx;
	/* t1 9 */ mchunkptr fwd;
	/* t2 10 */ mchunkptr bck;
	/* t1 9 */ mbinptr q;
	/* s1 17 */ size_t nb;
}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcmp.S
// *****************************************************************************

/* 00240250 00000094 */ memcmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcpy.S
// *****************************************************************************

/* 002402e4 000000b0 */ memcpy() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memmove.S
// *****************************************************************************

/* 00240394 00000104 */ memmove() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memset.S
// *****************************************************************************

/* 00240498 000000c0 */ memset() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mlock.c
// *****************************************************************************

/* 00240558 00000008 */ void __malloc_lock(/* a0 4 */ _reent *ptr) {}
/* 00240560 00000008 */ void __malloc_unlock(/* a0 4 */ _reent *ptr) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/printf.c
// *****************************************************************************

/* 00240568 0000003c */ int _printf_r(/* a0 4 */ _reent *ptr, /* a1 5 */ char *fmt) {}
/* 002405a8 00000050 */ int printf(/* a0 4 */ char *fmt) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/rand.c
// *****************************************************************************

/* 002405f8 00000010 */ void srand(/* a0 4 */ unsigned int seed) {}
/* 00240608 00000030 */ int rand() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* 00240638 0000005c */ void* _sbrk_r(/* s0 16 */ _reent *ptr, /* a1 5 */ size_t incr) {
	/* v1 3 */ char *ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/sprintf.c
// *****************************************************************************

/* 00240698 00000068 */ int _sprintf_r(/* a0 4 */ _reent *ptr, /* t4 12 */ char *str, /* a2 6 */ char *fmt) {
	/* 0x0(sp) */ FILE f;
}

/* 00240700 00000070 */ int sprintf(/* t4 12 */ char *str, /* a1 5 */ char *fmt) {
	/* 0x0(sp) */ FILE f;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/stdio.c
// *****************************************************************************

/* 00240770 00000064 */ int __sread(/* s0 16 */ void *cookie, /* v0 2 */ char *buf, /* a3 7 */ int n) {
	/* v1 3 */ int ret;
}

/* 002407d8 00000080 */ int __swrite(/* s0 16 */ void *cookie, /* s1 17 */ char *buf, /* s2 18 */ int n) {}

/* 00240858 00000068 */ fpos_t __sseek(/* s0 16 */ void *cookie, /* v0 2 */ fpos_t offset, /* a3 7 */ int whence) {
	/* a0 4 */ off_t ret;
}

/* 002408c0 00000020 */ int __sclose(/* a0 4 */ void *cookie) {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcat.S
// *****************************************************************************

/* 002408e0 0000012c */ strcat() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strchr.S
// *****************************************************************************

/* 00240a0c 00000190 */ strchr() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcmp.S
// *****************************************************************************

/* 00240b9c 00000144 */ strcmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcpy.S
// *****************************************************************************

/* 00240ce0 00000114 */ strcpy() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strlen.S
// *****************************************************************************

/* 00240df4 00000138 */ strlen() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncmp.S
// *****************************************************************************

/* 00240f30 000001b8 */ strncmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncpy.S
// *****************************************************************************

/* 002410e8 000001bc */ strncpy() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtol.c
// *****************************************************************************

/* 002412a8 00000238 */ long int _strtol_r(/* 0x0(sp) */ _reent *rptr, /* 0x4(sp) */ char *nptr, /* 0x8(sp) */ char **endptr, /* s3 19 */ int base) {
	/* s2 18 */ char *s;
	/* a0 4 */ long unsigned int acc;
	/* s1 17 */ int c;
	/* s4 20 */ long unsigned int cutoff;
	/* fp 30 */ int neg;
	/* s5 21 */ int any;
	/* s6 22 */ int cutlim;
}

/* 002414e0 00000034 */ long int strtol(/* t0 8 */ char *s, /* v1 3 */ char **ptr, /* a3 7 */ int base) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/ctype/tolower.c
// *****************************************************************************

/* 00241518 00000020 */ int tolower(/* a0 4 */ int c) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfprintf.c
// *****************************************************************************

/* 00241538 00000044 */ static int __sprint(/* a0 4 */ FILE *fp, /* s0 16 */ __suio *uio) {}

/* 00241580 000000b4 */ static int __sbprintf(/* s1 17 */ FILE *fp, /* a1 5 */ char *fmt, /* a2 6 */ va_list ap) {
	/* s0 16 */ int ret;
	/* 0x0(sp) */ FILE fake;
	/* 0x60(sp) */ unsigned char buf[1024];
}

/* 00241638 00000078 */ int vfprintf(/* s0 16 */ FILE *fp, /* s1 17 */ char *fmt0, /* s2 18 */ va_list ap) {}

/* 002416b0 00001518 */ int _vfprintf_r(/* 0x1e4(sp) */ _reent *data, /* 0x1e8(sp) */ FILE *fp, /* s0 16 */ char *fmt0, /* s4 20 */ va_list ap) {
	/* 0x1ec(sp) */ char *fmt;
	/* s7 23 */ int ch;
	/* s0 16 */ int n;
	/* s2 18 */ int m;
	/* s3 19 */ char *cp;
	/* s1 17 */ __siov *iovp;
	/* fp 30 */ int flags;
	/* 0x1f0(sp) */ int ret;
	/* 0x1f4(sp) */ int width;
	/* s2 18 */ int prec;
	/* 0x1d1(sp) */ char sign;
	/* 0x1d4(sp) */ wchar_t wc;
	/* 0x1f8(sp) */ char *decimal_point;
	/* 0x1d0(sp) */ char softsign;
	/* 0x200(sp) */ double _double;
	/* 0x1dc(sp) */ int expt;
	/* 0x208(sp) */ int expsize;
	/* 0x1e0(sp) */ int ndig;
	/* 0x0(sp) */ char expstr[7];
	/* s0 16 */ u_long _uquad;
	/* a0 4 */ enum {
		OCT = 0,
		DEC = 1,
		HEX = 2
	} base;
	/* 0x20c(sp) */ int dprec;
	/* 0x210(sp) */ int realsz;
	/* s5 21 */ int size;
	/* 0x214(sp) */ char *xdigs;
	/* 0x10(sp) */ __suio uio;
	/* 0x20(sp) */ __siov iov[8];
	/* 0x60(sp) */ char buf[348];
	/* 0x1c0(sp) */ char ox[2];
	/* 0x1d8(sp) */ int state;
	/* rdata 354c50 */ static char blanks[16];
	/* rdata 354c60 */ static char zeroes[16];
	/* v0 2 */ char *p;
}

/* 00242bc8 000001b0 */ static char* cvt(/* s6 22 */ _reent *data, /* s2 18 */ double value, /* s4 20 */ int ndigits, /* s7 23 */ int flags, /* s0 16 */ char *sign, /* s5 21 */ int *decpt, /* s1 17 */ int ch, /* fp 30 */ int *length) {
	/* s3 19 */ int mode;
	/* 0x0(sp) */ int dsgn;
	/* s3 19 */ char *digits;
	/* s0 16 */ char *bp;
	/* 0x4(sp) */ char *rve;
	/* v0 2 */ double_union tmp;
}

/* 00242d78 000000e0 */ static int exponent(/* a0 4 */ char *p0, /* a1 5 */ int exp, /* a2 6 */ int fmtch) {
	/* t0 8 */ char *p;
	/* a2 6 */ char *t;
	/* 0x0(sp) */ char expbuf[308];
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/writer.c
// *****************************************************************************

/* 00242e58 00000060 */ _ssize_t _write_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ void *buf, /* a3 7 */ size_t cnt) {
	/* v1 3 */ long int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/wsetup.c
// *****************************************************************************

/* 00242eb8 0000010c */ int __swsetup(/* s0 16 */ FILE *fp) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/closer.c
// *****************************************************************************

/* 00242fc8 00000058 */ int _close_r(/* s1 17 */ _reent *ptr, /* a1 5 */ int fd) {
	/* v1 3 */ int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/dtoa.c
// *****************************************************************************

/* 00243020 00000214 */ static int quorem(/* s4 20 */ _Bigint *b, /* t6 14 */ _Bigint *S) {
	/* s0 16 */ int n;
	/* t4 12 */ __int32_t borrow;
	/* v1 3 */ __int32_t y;
	/* v1 3 */ ULong carry;
	/* s2 18 */ ULong q;
	/* v0 2 */ ULong ys;
	/* t2 10 */ ULong *bx;
	/* t0 8 */ ULong *bxe;
	/* t3 11 */ ULong *sx;
	/* s3 19 */ ULong *sxe;
	/* a1 5 */ __int32_t z;
	/* a0 4 */ ULong si;
	/* t1 9 */ ULong zs;
}

/* 00243238 000011cc */ char* _dtoa_r(/* fp 30 */ _reent *ptr, /* a1 5 */ double _d, /* 0x8(sp) */ int mode, /* 0xc(sp) */ int ndigits, /* 0x10(sp) */ int *decpt, /* s0 16 */ int *sign, /* 0x14(sp) */ char **rve) {
	/* 0x4(sp) */ int bbits;
	/* 0x18(sp) */ int b2;
	/* 0x1c(sp) */ int b5;
	/* 0x0(sp) */ int be;
	/* s3 19 */ int dig;
	/* s4 20 */ int i;
	/* s4 20 */ int ieps;
	/* 0x20(sp) */ int ilim;
	/* 0x24(sp) */ int ilim0;
	/* 0x28(sp) */ int ilim1;
	/* s0 16 */ int j;
	/* s1 17 */ int j1;
	/* s3 19 */ int k;
	/* 0x2c(sp) */ int k0;
	/* 0x30(sp) */ int k_check;
	/* 0x34(sp) */ int leftright;
	/* s1 17 */ int m2;
	/* s2 18 */ int m5;
	/* 0x38(sp) */ int s2;
	/* 0x3c(sp) */ int s5;
	/* 0x40(sp) */ int spec_case;
	/* s2 18 */ int try_quick;
	/* s6 22 */ double_union d;
	/* s7 23 */ double_union d2;
	/* s2 18 */ double_union eps;
	/* s1 17 */ __int32_t L;
	/* 0x44(sp) */ int denorm;
	/* s0 16 */ ULong x;
	/* 0x48(sp) */ _Bigint *b;
	/* v0 2 */ _Bigint *b1;
	/* s2 18 */ _Bigint *delta;
	/* 0x4c(sp) */ _Bigint *mlo;
	/* 0x50(sp) */ _Bigint *mhi;
	/* 0x54(sp) */ _Bigint *S;
	/* s2 18 */ double ds;
	/* s5 21 */ char *s;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fflush.c
// *****************************************************************************

/* 00244408 00000104 */ int fflush(/* s1 17 */ FILE *fp) {
	/* s2 18 */ unsigned char *p;
	/* s0 16 */ int n;
	/* v1 3 */ int t;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 00244510 0000031c */ void _free_r(/* s1 17 */ _reent *reent_ptr, /* s0 16 */ void *mem) {
	/* t2 10 */ mchunkptr p;
	/* a3 7 */ size_t hd;
	/* t1 9 */ size_t sz;
	/* a2 6 */ int idx;
	/* a2 6 */ mchunkptr next;
	/* t3 11 */ size_t nextsz;
	/* a1 5 */ size_t prevsz;
	/* t0 8 */ mchunkptr bck;
	/* a3 7 */ mchunkptr fwd;
	/* a0 4 */ int islr;
}

/* 00244830 0000016c */ int _malloc_trim_r(/* s2 18 */ _reent *reent_ptr, /* s0 16 */ size_t pad) {
	/* s1 17 */ long int top_size;
	/* s0 16 */ long int extra;
	/* a1 5 */ char *current_brk;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fvwrite.c
// *****************************************************************************

/* 002449a0 000003d8 */ int __sfvwrite(/* s1 17 */ FILE *fp, /* s6 22 */ __suio *uio) {
	/* s2 18 */ size_t len;
	/* s3 19 */ char *p;
	/* s4 20 */ __siov *iov;
	/* s0 16 */ int w;
	/* a1 5 */ int s;
	/* v1 3 */ char *nl;
	/* s7 23 */ int nlknown;
	/* s5 21 */ int nldist;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* 00244d78 00000084 */ char* _setlocale_r(/* s1 17 */ _reent *p, /* s2 18 */ int category, /* s0 16 */ char *locale) {
	/* data 3495f8 */ static char lc_ctype[8];
	/* data 349600 */ static char last_lc_ctype[8];
}

/* 00244e00 0000000c */ lconv* _localeconv_r(/* a0 4 */ _reent *data) {}
/* 00244e10 0000002c */ char* setlocale(/* v0 2 */ int category, /* a2 6 */ char *locale) {}
/* 00244e40 00000024 */ lconv* localeconv() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/lseekr.c
// *****************************************************************************

/* 00244e68 00000060 */ _off_t _lseek_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ off_t pos, /* a3 7 */ int whence) {
	/* v1 3 */ off_t ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/makebuf.c
// *****************************************************************************

/* 00244ec8 00000150 */ void __smakebuf(/* s0 16 */ FILE *fp) {
	/* s2 18 */ size_t size;
	/* s1 17 */ size_t couldbetty;
	/* a1 5 */ void *p;
	/* 0x0(sp) */ stat st;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mbtowc_r.c
// *****************************************************************************

/* 00245018 0000003c */ int _mbtowc_r(/* a0 4 */ _reent *r, /* v1 3 */ wchar_t *pwc, /* a2 6 */ char *s, /* a3 7 */ size_t n, /* t0 8 */ int *state) {
	/* 0x0(sp) */ wchar_t dummy;
}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memchr.S
// *****************************************************************************

/* 00245054 000000e0 */ memchr() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* 00245138 000000a8 */ _Bigint* _Balloc(/* s0 16 */ _reent *ptr, /* s1 17 */ int k) {
	/* s0 16 */ int x;
	/* v1 3 */ _Bigint *rv;
}

/* 002451e0 0000002c */ void _Bfree(/* a0 4 */ _reent *ptr, /* a1 5 */ _Bigint *v) {}

/* 00245210 00000114 */ _Bigint* _multadd(/* s4 20 */ _reent *ptr, /* s1 17 */ _Bigint *b, /* t0 8 */ int m, /* s3 19 */ int a) {
	/* t1 9 */ int i;
	/* s2 18 */ int wds;
	/* a3 7 */ ULong *x;
	/* a0 4 */ ULong y;
	/* v1 3 */ ULong xi;
	/* v1 3 */ ULong z;
	/* s0 16 */ _Bigint *b1;
}

/* 00245328 00000148 */ _Bigint* _s2b(/* s4 20 */ _reent *ptr, /* s0 16 */ char *s, /* s3 19 */ int nd0, /* s5 21 */ int nd, /* s6 22 */ ULong y9) {
	/* a1 5 */ _Bigint *b;
	/* s1 17 */ int i;
	/* a1 5 */ int k;
	/* a3 7 */ __int32_t y;
}

/* 00245470 00000084 */ int _hi0bits(/* a0 4 */ ULong x) {
	/* a1 5 */ int k;
}

/* 002454f8 000000c0 */ int _lo0bits(/* a0 4 */ ULong *y) {
	/* a1 5 */ int k;
	/* v1 3 */ ULong x;
}

/* 002455b8 00000038 */ _Bigint* _i2b(/* a0 4 */ _reent *ptr, /* s0 16 */ int i) {
	/* v1 3 */ _Bigint *b;
}

/* 002455f0 0000022c */ _Bigint* _multiply(/* a0 4 */ _reent *ptr, /* s0 16 */ _Bigint *a, /* s1 17 */ _Bigint *b) {
	/* t9 25 */ _Bigint *c;
	/* v0 2 */ int k;
	/* s4 20 */ int wc;
	/* t3 11 */ ULong carry;
	/* t2 10 */ ULong y;
	/* v0 2 */ ULong z;
	/* t1 9 */ ULong *x;
	/* a0 4 */ ULong *xa;
	/* s1 17 */ ULong *xae;
	/* t4 12 */ ULong *xb;
	/* s2 18 */ ULong *xbe;
	/* t0 8 */ ULong *xc;
	/* t5 13 */ ULong *xc0;
	/* a3 7 */ ULong z2;
}

/* 00245820 00000100 */ _Bigint* _pow5mult(/* s3 19 */ _reent *ptr, /* s2 18 */ _Bigint *b, /* s1 17 */ int k) {
	/* v0 2 */ _Bigint *b1;
	/* s0 16 */ _Bigint *p5;
	/* v0 2 */ _Bigint *p51;
	/* v1 3 */ int i;
	/* rdata 354f00 */ static int p05[3];
}

/* 00245920 00000178 */ _Bigint* _lshift(/* s6 22 */ _reent *ptr, /* s1 17 */ _Bigint *b, /* a2 6 */ int k) {
	/* a3 7 */ int i;
	/* a1 5 */ int k1;
	/* s4 20 */ int n;
	/* s0 16 */ int n1;
	/* s5 21 */ _Bigint *b1;
	/* a0 4 */ ULong *x;
	/* a2 6 */ ULong *x1;
	/* a3 7 */ ULong *xe;
	/* v1 3 */ ULong z;
}

/* 00245a98 00000068 */ int __mcmp(/* a0 4 */ _Bigint *a, /* a1 5 */ _Bigint *b) {
	/* a2 6 */ ULong *xa;
	/* a3 7 */ ULong *xa0;
	/* v1 3 */ ULong *xb;
	/* v0 2 */ ULong *xb0;
	/* v0 2 */ int i;
	/* v1 3 */ int j;
}

/* 00245b00 00000190 */ _Bigint* __mdiff(/* s3 19 */ _reent *ptr, /* s1 17 */ _Bigint *a, /* s2 18 */ _Bigint *b) {
	/* t3 11 */ _Bigint *c;
	/* s0 16 */ int i;
	/* t4 12 */ int wa;
	/* v0 2 */ int wb;
	/* t2 10 */ __int32_t borrow;
	/* v1 3 */ __int32_t y;
	/* t0 8 */ ULong *xa;
	/* t5 13 */ ULong *xae;
	/* t1 9 */ ULong *xb;
	/* a2 6 */ ULong *xbe;
	/* a3 7 */ ULong *xc;
	/* a1 5 */ __int32_t z;
}

/* 00245c90 00000098 */ double _ulp(/* a0 4 */ double _x) {
	/* a1 5 */ double_union a;
	/* a0 4 */ __int32_t L;
}

/* 00245d28 0000017c */ double _b2d(/* a0 4 */ _Bigint *a, /* s0 16 */ int *e) {
	/* s2 18 */ ULong *xa;
	/* s4 20 */ ULong *xa0;
	/* a0 4 */ ULong w;
	/* s3 19 */ ULong y;
	/* a3 7 */ ULong z;
	/* a2 6 */ int k;
	/* s1 17 */ double_union d;
}

/* 00245ea8 0000017c */ _Bigint* _d2b(/* a0 4 */ _reent *ptr, /* a1 5 */ double _d, /* s4 20 */ int *e, /* s5 21 */ int *bits) {
	/* s0 16 */ double_union d;
	/* s1 17 */ _Bigint *b;
	/* s2 18 */ int de;
	/* s0 16 */ int i;
	/* a1 5 */ int k;
	/* s3 19 */ ULong *x;
	/* 0x0(sp) */ ULong y;
	/* 0x4(sp) */ ULong z;
}

/* 00246028 000000c0 */ double _ratio(/* s0 16 */ _Bigint *a, /* s1 17 */ _Bigint *b) {
	/* s2 18 */ double_union da;
	/* a2 6 */ double_union db;
	/* v0 2 */ int k;
	/* 0x0(sp) */ int ka;
	/* 0x4(sp) */ int kb;
}

/* 002460e8 0000006c */ double _mprec_log10(/* s0 16 */ int dig) {
	/* a0 4 */ double v;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/readr.c
// *****************************************************************************

/* 00246158 00000060 */ _ssize_t _read_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ void *buf, /* a3 7 */ size_t cnt) {
	/* v1 3 */ long int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isinf.c
// *****************************************************************************

/* 002461b8 00000048 */ int isinf(/* a0 4 */ double x) {
	/* a0 4 */ __int32_t hx;
	/* a0 4 */ ieee_double_shape_type ew_u;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 00246200 000000bc */ void* _calloc_r(/* a0 4 */ _reent *reent_ptr, /* a1 5 */ size_t n, /* a2 6 */ size_t elem_size) {
	/* v1 3 */ size_t csz;
	/* s0 16 */ void *mem;
	/* a2 6 */ size_t mzsz;
	/* a0 4 */ size_t *mz;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/fstatr.c
// *****************************************************************************

/* 002462c0 0000005c */ int _fstat_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ stat *pstat) {
	/* v1 3 */ int ret;
}

// *****************************************************************************
// FILE -- cache.c
// *****************************************************************************

/* 00246320 000000a4 */ _sceSDC() {}
/* 002463c8 0000007c */ SyncDCache() {}
/* 00246448 00000014 */ iSyncDCache() {}
/* 00246460 000000a4 */ _sceIDC() {}
/* 00246508 0000007c */ InvalidDCache() {}
/* 00246588 00000014 */ iInvalidDCache() {}
