

_start() {}
_exit() {}
static _root() {}

int main() {}
void InitGameFirst() {}

void CallSoftReset() { int lcount; }

int SoftResetChk() {}

void ModeSlctInit(/* a0 4 */ u_char top, u_char end) {}
void ModeSlctLoop() {}

void ModeSlctCtrl(/* s2 18 */ u_char mode) { int adpcm_no; }

char ModeSlctPad(/* a0 4 */ u_char mode) {
  u_char rtrn;
  u_char sm_slct_num[1];
  u_char bm_slct_num[1];
  int level;
}

void ModeSlctDspBak(/* s1 17 */ u_char alp, u_char mode) {
  int i;
  DISP_SPRT ds;
}

void ModeSlctDspChr(/* s0 16 */ u_char alp, u_char mode) {
  u_char dsp_rgb[1];
  u_char dsp_alp[1];
  float flsh;
}

void DspModeSlect(/* s0 16 */ u_char alp) {
  int i;
  u_char dsp_rgb[1];
  u_char dsp_alp[1];
}

void DspStoryMode(/* s0 16 */ u_char alp, float flsh) {
  int i;
  u_int dsp_rgb[1];
  u_char dsp_alp[1];
}

void DspBattleMode(/* s0 16 */ u_char alp, float flsh) {
  int i;
  u_char dsp_rgb[1];
  u_char dsp_alp[1];
}

void DspMissionSelect(/* s6 22 */ u_char alp) {
  int i;
  int ene_no;
  int msn_no;
  int rank;
  int no;
  int page_base_no;
  static u_char csr_alpha;
  static u_char csr_brink;
  int level;
}

void PutChrOne(/* a0 4 */ u_short chr, short int px, short int py, u_char rgb,
               u_char alp, u_char flp) {
  DISP_SPRT ds;
}

void PutChrOneRGB(/* a0 4 */ u_short chr, short int px, short int py, u_int rgb,
                  u_char alp, u_char flp) {
  DISP_SPRT ds;
}

void ModeSlctDspFlm(/* a0 4 */ u_char per, u_char alp, u_char mode) {
  short int mx;
  DISP_SPRT ds;
}

void FilmCutter(/* a0 4 */ u_short chr, short int px, short int py,
                short int ex, u_char rgb, u_char alp) {
  short int cut;
  DISP_SPRT ds;
}

void ModeSlctDspWin(/* a0 4 */ u_char alp) { DISP_SPRT ds; }

void MsLoadCtrl(/* a0 4 */ u_char mode) {}
void TitleModeEnd() {}
void ChangeModeSel(/* v1 3 */ int mode) {}
void BattleModeExit() {}
void BattleModeNext() {}

int CheckClearStage() {
  int i;
  int j;
}

void ModeSlctDspMsg(/* t1 9 */ u_char alp, u_char mode) {}
void SetCsrInfoStoryMode() {}

void MemAlbmInit(/* a0 4 */ u_char h_type, u_char src_pht_max,
                 u_char cpy_pht_max, u_char src_cl_type, u_char cpy_cl_type,
                 u_char src_slot, u_char cpy_slot, u_char src_file,
                 int cpy_file) {
  u_char cpy_file;
}

void MemAlbmInit2(/* a0 4 */ u_char side, u_char pht_max, u_char cl_type,
                  u_char slot, u_char file) {}
void MemAlbmInit3() {}

void NewAlbumInit(/* s1 17 */ u_char side) { int i; }

char SweetMemories(/* a0 4 */ u_char mode, u_char alp) {
  u_char rtrn;
  u_char alp_max;
  u_char alp_m0;
  u_char alp_m1;
  u_char alp_s0;
  u_char alp_s1;
}

void DspPhotInTopPage(/* s3 19 */ u_char alp) {
  int i;
  u_char pht_adr;
  u_char csr_alp;
  int csr_rgb;
  float flsh;
  u_char base_alp;
  short int px[1];
  short int py[1];
}

char NmlPadInTopPage() {
  char rtrn;
  char rtrn2;
  u_char csr_movable;
  CSR_ADD csr_ax[1];
  CSR_ADD csr_ay[1];
}

char SamePhotoChk() {
  int i;
  char same;
}

void KillRingBuffer() { int i; }

char AbnPadInBigPage(/* s2 18 */ u_char alp) { u_char target; }

void MiniPht(/* s3 19 */ u_char alp) {
  u_char n_mode;
  u_char p_mode;
  u_char pre;
  u_char nxt;
  u_char pht_adr;
}

char MenuPadCmn() { u_char rtrn; }

char PasteCtrl() { char rtrn; }

void Paste() { int i; }

void BuffPadCmn() {}

void BuffPadMnu() { int i; }

void CopyToOsugi(/* a0 4 */ u_char from, u_char no1, u_char to, u_char no2) {
  u_char pht_adr1;
  u_char pht_adr2;
}

void CopyDataWithoutAdr(/* a0 4 */ u_char from, u_char no1, u_char to,
                        u_char no2) {}

void DelPyon(/* s1 17 */ u_char file, u_char csr) {
  int i;
  int j;
  int dust;
}

void DspOgAlbumTop1(/* s0 16 */ u_char alp, u_char alp0, u_char alp1) {
  short int px[1];
  short int py[1];
}

void DspOgAlbumTop2(/* a0 4 */ u_char alp, u_char alp0, u_char alp1) {}

void DspOgAlbumBig(/* s1 17 */ u_char alp) { u_char side; }

void InfoWin(/* s7 23 */ u_char mode, u_char side, u_char alp) {
  u_char alp0;
  u_char alp1;
  short int adj1;
  short int adj2;
  float rad;
  float flsh1;
}

void Navion(/* s2 18 */ u_char type, u_char sw, u_char alp) {
  u_char max;
  u_char csr;
  u_char alp_l;
  u_char alp_r;
  static FLSH_CORE flsh;
}

void ComWin(/* s1 17 */ u_char mode, u_char csr, u_char alp) {
  static FLSH_CORE flsh;
  u_char alp_csr;
}

void BufWin(/* a0 4 */ u_char type, u_char alp) {
  int i;
  u_char tmp;
  u_char pht_adr;
  float flsh1;
  float flsh2;
}

void DtlWin(/* a0 4 */ u_char mode, u_char type, u_char alp) { u_char target; }

void TruthPhoto(/* a0 4 */ u_char mode, short int px, short int py,
                u_char alp) {
  int i;
  DISP_STR ds;
  u_char obj_num;
  u_char str_alp;
  u_short obj_py[1][1];
  u_short obj_py2[1][1];
  PICTURE_WRK tmp_pic;
}

void BtnExt(/* a0 4 */ u_char mode, u_char alp) {}

char InKeyTamusi() { u_char hit; }

char GetAlbumCurPos(/* a0 4 */ char side) {}

void GameMain() {}
int GameInit() {}
int GameInitLoad() {}
void GameModeChange(/* a0 4 */ u_char mode) {}

void InitSystem() {}
void EndSystem() {}
static void InitIop() {}
static void LoadDefModule() {}
void LoadIRX() {}
void InitSysWrk() {}
void GetNowClock(/* s0 16 */ sceCdCLOCK *nc) {}
void InitOptionWrk() {}

void InitGraphics() { sceDmaEnv env; }

int userGsSwapDBuff(/* s0 16 */ sceGsDBuff *db, int id) { int ret; }

int vblankHandler(/* a0 4 */ int val) {}

void vfunc() {
  static int count;
  static int dfro;
}

void SetSysBackColor(/* a0 4 */ u_char r, u_char g, u_char b) {}

int FileLoadInit() { int i; }

void FileLoadNReq(/* a0 4 */ int file_no, long int addr) {}
int FileLoadNEnd(/* a0 4 */ int file_no) {}
void FileLoadB(/* a0 4 */ int file_no, long int addr) {}

void SetDefaultKeyType() {}

void SetKeyType() { u_char i; }

void SaveDataSet(/* t1 9 */ u_char *addr0) {
  u_char *addr1;
  int i;
  int j;
}

void SavePCFile() {
  int fd;
  u_char fname[1];
}

void LoadPCFile() {
  int fd;
  u_char fname[1];
}

void LoadDataDevelop(/* t1 9 */ u_char *addr0) {
  u_char *addr1;
  int i;
  int j;
}

int InitPad() {
  PAD_STRUCT *psp;
  int i;
  int j;
  int loop;
  int port_slot[1][1];
}

int PadSyncCallback() {
  int id;
  int i;
  int state;
  int wrk;
  int exid;
  int p_id;
  int intr;
  PAD_STRUCT *psp;
  char act_align[1];
}

int PadReadFunc(/* s0 16 */ PAD_STRUCT *psp, int p_id) {
  char r_data[1];
  int i;
  int j;
}

void SetAnlgInfo(/* a0 4 */ PAD_STRUCT *psp, int p_id) {
  float rot;
  short int pad_x;
  short int pad_y;
  u_char i;
  u_char dir_old;
}

u_short VibrateRequest(/* a0 4 */ u_short p_id, u_short act1, u_short act2) {
  PAD_STRUCT *psp;
}

u_short VibrateRequest1(/* a0 4 */ u_short p_id, u_short act_1) {
  PAD_STRUCT *psp;
}

u_short VibrateRequest2(/* a0 4 */ u_short p_id, u_short act_2) {
  PAD_STRUCT *psp;
}

void PadClearCount(/* t1 9 */ int p_id) { u_int i; }

void EiInit() {}

int EiMain() { int i; }

void SetIopCmdSm(/* a0 4 */ int cmd_no, int data1, int data2, int data3) {
  IOP_COMMAND cmd;
}

void SetIopCmdLg(/* a0 4 */ int cmd_no, int data1, int data2, int data3,
                 int data4, int data5, int data6, int data7) {
  IOP_COMMAND cmd;
}

static int EiInitRpc() { int i; }

static int EiInitIopDev() {}
static void InitIopCmd(/* a0 4 */ IOP_COMMAND *cmdp) {}
static void SetIopCmd(/* s0 16 */ IOP_COMMAND *cmdp) {}
static void TidyUpIopCmd(/* a0 4 */ IOP_COMMAND *cmdp) {}
int checkIOP() {}

static int EiSendCmd() { int ret; }

IOP_STAT *GetIopStatP() {}

void CdvdInit() {}
void CdvdInitSoftReset() {}

static void CdvdInitEe() { int i; }

static void CdvdInitIop() {}
static void CdvdInitResetIop() {}

int LoadReq(/* s0 16 */ int file_no, u_int addr) { IMG_ARRANGEMENT *img_arng; }

u_int LoadReqGetAddr(/* s1 17 */ int file_no, u_int addr, int *id) {
  IMG_ARRANGEMENT *img_arng;
  u_int ret;
}

int LoadReqSe(/* s2 18 */ int file_no, u_char se_type) {
  IMG_ARRANGEMENT *img_arng;
  int ret;
}

int LoadReqNSector(/* a0 4 */ int file_no, int sector, int size, int addr) {
  int ret;
}

int LoadReqNFno(/* a0 4 */ int file_no, int addr) {}
int LoadReqBFno(/* a0 4 */ int file_no, int addr) {}
u_int LoadReqBFnoGetAddr(/* a0 4 */ int file_no, int addr) {}
int IsLoadEndAll() {}
int IsLoadEnd(/* a0 4 */ int id) {}

static int IsLoadEndIop(/* t0 8 */ int id) {
  int i;
  u_char pos;
}

void LoadEndFlgRenew() { int i; }

u_char IsExistLoadReq() {}

static int GetFreeId() { int ret; }

IMG_ARRANGEMENT *GetImgArrangementP(/* a0 4 */ int file_no) {}

void AdpcmMapCtrlInit() {}
void AdpcmMapUse() {}
void AdpcmMapNoUse() {}
void AdpcmMapCtrl() {}
void AdpcmShiftMovie() {}
void AdpcmReturnFromMovie() {}

static u_char UpdateAdpcmMenuFade() { u_char update_flg; }

void SetTargetVolAdpcmMenuFade(/* a0 4 */ int tgt_vol) {}
void EAdpcmFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsEndAdpcmFadeOut() {}
void EAdpcmFadeOutGameEnd(/* a0 4 */ u_short fout_flm) {}
u_char IsHighModeUse(/* a0 4 */ u_char my_mode) {}

void EAdpcmCmdInit(/* a0 4 */ u_int dev_init) {}

void EAdpcmCmdPlay(/* a0 4 */ u_char channel, u_char loop, int file_no,
                   int start_flm, u_short vol, u_short pan, u_short pitch,
                   u_short fin_flm) {
  IMG_ARRANGEMENT *iap;
  int flg;
}

void EAdpcmCmdPreload(/* a0 4 */ u_char channel, int file_no, int start_flm,
                      u_short fin_flm) {
  IMG_ARRANGEMENT *iap;
}

void EAdpcmCmdPreEndPlay(/* a0 4 */ u_char channel, u_char loop, int file_no,
                         u_short vol, u_short pan, u_short pitch,
                         u_short fin_flm) {
  int flg;
}

void EAdpcmCmdStop(/* a0 4 */ u_char channel, int file_no, u_short fout_flm) {}
void EAdpcmCmdPause(/* a0 4 */ u_char channel, int file_no, u_short fout_flm) {}
void EAdpcmCmdRestart(/* a0 4 */ u_char channel, int file_no, u_short fin_flm) {
}
void EAdpcmCmdFadeVol(/* a0 4 */ u_char channel, int file_no,
                      u_short vol_percent, u_short fin_flm) {}
void EAdpcmCmdPos(/* a0 4 */ u_char channel, int file_no, u_short vol,
                  u_short pan, u_short pitch) {}
short int EAGetRetStat() {}
short int EAGetRetTune() {}
int EAGetRetCount() {}
u_char IsAdpcmPlay(/* s0 16 */ int file_no) {}

u_short EAdpcmGetPan(/* f12 50 */ float rot) { float panf; }

u_short EAdpcmGetVol(/* f12 50 */ float dist, u_short vol) { float ratio_dist; }

u_short EAdpcmGetPitch(/* f12 50 */ float rot, float dist, u_short pitch) {
  float fpitch_rate;
}

u_short GetAdpcmVol(/* a0 4 */ int file_no) {
  ADPCM_VOL *avp;
  int i;
  u_short vol;
}

void EAdpcmBtlmodeMain() {}
void AdpcmPreBtlmodeFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsEndAdpcmBtlmode() {}
void AdpcmPreBtlmodePreload(/* a0 4 */ int file_no) {}
u_char IsPreLoadEndAdpcmBtlmode() {}
void AdpcmBtlmodePreLoadEndPlay() {}
void AdpcmBtlmodePlay(/* v0 2 */ int file_no) {}
void AdpcmBtlmodeEnd() {}

void EAdpcmGoverMain() {}
void AdpcmPlayGameOver(/* v0 2 */ int file_no, u_short vol, int fade_flm) {}
void AdpcmStopGameOver(/* a0 4 */ int fout_flm) {}

void EAdpcmSceneMain() {}
void AdpcmPreSceneFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsFadeoutEndAdpcmScene() {}
void AdpcmScenePreLoadReq(/* a0 4 */ int scene_no) {}
int IsAdpcmScenePreLoadEnd() {}
void AdpcmScenePreLoadEndPlay(/* a0 4 */ int scene_no) {}
void AdpcmSceneStop() {}

void EAdpcmMagatokiMain() {}
void AdpcmPreMagatokiFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsFadeoutEndAdpcmMagatoki() {}
void AdpcmMagatokiPlay(/* v1 3 */ int file_no) {}
void AdpcmMagatokiStop() {}

void EAdpcmShinkanMain() {}
void AdpcmPlayShinkan(/* v0 2 */ int file_no, int fade_flm) {}
void AdpcmStopShinkan(/* a0 4 */ int fout_flm) {}
u_char IsEndAdpcmShinkan() {}

void EAdpcmPuzzleMain() {}
void AdpcmPrePuzzleFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsEndAdpcmPuzzle() {}
void AdpcmPreLoadPuzzle(/* a0 4 */ int file_no) {}
u_char IsPreLoadEndAdpcmPuzzle() {}
void AdpcmPuzzlePreLoadEndPlay() {}
void AdpcmPuzzlePlay(/* v0 2 */ int file_no) {}
void AdpcmPuzzleEnd() {}

void EAdpcmSoulMain() {}
void AdpcmPreSoulFadeOut(/* a0 4 */ u_short fout_flm) {}
u_char IsFadeoutEndAdpcmSoul() {}
void AdpcmPlaySoul(/* v0 2 */ int file_no, u_short vol, int fade_flm) {}
void AdpcmStopSoul(/* a0 4 */ int fout_flm) {}

void EAdpcmTapeMain() {}
void AdpcmPlayTape(/* v0 2 */ int file_no, u_short vol, int fade_flm) {}
void AdpcmStopTape(/* a0 4 */ int fout_flm) {}
u_char IsEndAdpcmTape() {}

void EAdpcmGdeadMain() {}
void AdpcmPlayGhostDead(/* v0 2 */ int file_no, u_short vol, int fade_flm) {}
void AdpcmStopGhostDead(/* a0 4 */ int fout_flm) {}

void EAdpcmEventMain() {}
void AdpcmPlayEvent(/* a0 4 */ int file_no, u_short start_flm, int fade_flm) {}
void AdpcmStopEvent(/* a0 4 */ int fout_flm) {}

void AdpcmPlayGhost(/* v1 3 */ int file_no, sceVu0FVECTOR *mpos, u_short vol,
                    u_char ewrk_no, int fade_flm) {}
void AdpcmStopGhost(/* s1 17 */ int fout_flm) {}

void EAdpcmGhostMain() { static int wait_cnt; }

static void EAdpcmGhostParaSet(/* s1 17 */ ADPCM_TUNE_PARAM *atpp) {
  static int cnt;
  float rot_cam;
  float rot_oc;
  float dist_obj;
}

void AdpcmPlayAutoGhost(/* a2 6 */ int file_no, sceVu0FVECTOR *mpos,
                        u_short vol, u_char ewrk_no, int fade_flm) {}
void AdpcmStopAutoGhost(/* a0 4 */ int fout_flm) {}
void EAdpcmAutogMain() {}
static void EadpcmUpdateAutog(/* a1 5 */ ADPCM_TUNE_PARAM *atpp) {}

static void EAdpcmAutogParaSet(/* s2 18 */ ADPCM_TUNE_PARAM *atpp) {
  static int cnt;
  float rot_cam;
  float rot_oc;
  float dist_obj;
}

void AdpcmPlayHiso(/* a0 4 */ int file_no, int fade_flm) { int call_no; }

void AdpcmStopHiso(/* s1 17 */ int fout_flm) {}
void EAdpcmHisoMain() {}

void EAdpcmFurnMain() {}

static void EAdpcmFurnParaSet(/* s2 18 */ ADPCM_TUNE_PARAM *atpp) {
  static int cnt;
  float rot_cam;
  float rot_oc;
  float dist_obj;
}

void AdpcmPlayFurn(/* a0 4 */ int file_no, float *pos, u_short vol,
                   int fade_flm) {}
void AdpcmStopFurn(/* s1 17 */ int fout_flm) {}

void EAdpcmMapMain() {
  int file_no;
  static int wait_cnt;
}

static int EAGetNowMapFileNo() {}
static u_short EAGetNowMapBgmVol() {}

void InitSe() {}

void InitSeGhost() { int i; }

void InitSeMenuFade() {}
void UpdateSeMenuFade() {}
void SetTargetVolSeMenuFade(/* a0 4 */ int tgt_vol) {}

void SeInitSeWrk() { int i; }

static void SeInitSeWrkSub(/* a0 4 */ int pos) {}
static void SeInitSeWrkP(/* a0 4 */ SE_WRK *swp) {}
void SetReverbVolume(/* a0 4 */ u_short vol) {}
void SeStopAndBackup() {}

void SeBackupInit() { int i; }

void SeRevival(/* s1 17 */ u_short fin_spd) {
  SE_REQ_TMP_STR tmp;
  int i;
}

int SeStartFix(/* s0 16 */ int se_no, u_short fin_spd, u_short vol_max,
               u_short pitch, u_char menu) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartFixFlame(/* a0 4 */ int se_no, u_short flame, u_short vol_max,
                    u_short pitch, u_char menu) {
  u_short fin_spd;
}

int SeStartFixV(/* s0 16 */ int se_no, u_short fin_spd, u_short vol_max,
                u_short pitch, u_char voice_no) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartPos(/* s2 18 */ int se_no, float *pos, u_short fin_spd,
               u_short vol_max, u_short pitch, u_char room_id) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartPosFlame(/* a0 4 */ int se_no, float *pos, u_short flame,
                    u_short vol_max, u_short pitch, u_char room_id) {
  u_short fin_spd;
}

int SeStartPut(/* s2 18 */ int se_no, float *pos, u_short fin_spd,
               u_short vol_max, u_short pitch, u_char room_id) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartPutFlame(/* a0 4 */ int se_no, float *pos, u_short flame,
                    u_short vol_max, u_short pitch, u_char room_id) {
  u_short fin_spd;
}

int SeStartGhost(/* v1 3 */ int se_no, int ewrk_no, u_short fin_spd,
                 u_short vol_max, u_short pitch, u_char gno) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartGhostFlame(/* a0 4 */ int se_no, int ewrk_no, u_short flame,
                      u_short vol_max, u_short pitch, u_char gno) {
  u_short fin_spd;
}

int SeStartPlyr(/* s0 16 */ int se_no, u_short fin_spd, u_short vol_max,
                u_short pitch) {
  SE_REQ_TMP_STR tmp;
  int vpos;
}

int SeStartPlyrFlame(/* a0 4 */ int se_no, u_short flame, u_short vol_max,
                     u_short pitch) {
  u_short fin_spd;
}

static void SeStartVp(/* s3 19 */ SE_REQ_TMP_STR *tmp_str) {
  SE_WRK *swp;
  float rot_oc;
}

int SeStartPosSrundFlame(/* t1 9 */ u_char room_id, float *pos, u_short flame,
                         u_short vol_max, u_short pitch) {
  int i;
  int req_file_no;
  int req_se_no;
}

int SeStartPosEventFlame(/* t5 13 */ u_char room_id, u_char req_pos, float *pos,
                         u_short flame, u_short vol_max, u_short pitch) {
  int i;
  int req_file_no;
  int req_se_no;
}

static int SeGetFreeVoice(/* s0 16 */ int start_no, int get) {
  SE_VSTAT *svp;
  int i;
}

int SeStopAll() {}
int SeStop(/* a0 4 */ int voice_num) {}

void SeFadeOut(/* a0 4 */ int voice_num, int fout_spd, int tgt_vol) {
  SE_WRK *swp;
}

void SeFadeFlame(/* s1 17 */ int voice_num, u_short flame, u_short tgt_vol) {
  SE_WRK *swp;
}

void SeFadeFlameAll(/* s3 19 */ u_short flame, u_short tgt_vol) {
  SE_WRK *swp;
  int i;
}

void SeWrkUpdate() {
  IOP_STAT *isp;
  SE_WRK *swp;
  int i;
}

u_char IsEndSe(/* a0 4 */ int v_no) {}
u_char IsEndSeGhost(/* a0 4 */ int v_no, u_char se_no, u_char gno) {}
void SeSetEfctVol(/* a0 4 */ u_short vol) {}

void SeSetMVol(/* a0 4 */ u_short vol) { int iop_vol; }

void SeSetSteMono(/* a0 4 */ u_char mono) {}

int SeFileLoadAndSet(/* a2 6 */ u_int file_no, int type) { int ret; }

int SeFileLoadAndSetFGhost(/* a2 6 */ u_int file_no, int type) { int ret; }

int SeFileLoadAndSetWide(/* a0 4 */ u_short lbl_no) { u_int file_no; }

char SeGetGhostPos(/* a0 4 */ u_int se_file_no, u_char type) { char i; }

char SeGetAutoGhostPos(/* a0 4 */ u_int se_file_no) { char i; }

SE_WRK *SeGetSeWrk(/* a0 4 */ int no) {}
int SeGetSvStat(/* s0 16 */ int v_no) {}

int SeStartCmn(/* s1 17 */ int se_no, float *pos, float *mb, int fin_spd,
               u_short vol_max) {
  int vpos;
}

void SeStartVpCmn(/* s1 17 */ int se_no, int vpos, float *pos, float *mb,
                  int fin_spd, u_short vol_max) {
  SE_WRK *swp;
  int mode;
  float rot_oc;
}

static int SeChkReqMode(/* a0 4 */ float *pos, float *mb) { int mode; }

u_char SeGetFreeSv() {}
int SeStartV(/* a0 4 */ int se_no, u_char voice_no) {}

void SeCtrlInit() {}

void SeCtrlMain() {
  SE_WRK tmp_sw;
  SE_WRK *swp;
  int cmd_flg;
  int i;
  float rot_oc;
  float dist_obj;
  float rot_cam;
  u_char stop_flg;
}

u_short SeCmdGetPan(/* f12 50 */ float rot) { float panf; }

u_short SeCmdGetPhase(/* f12 50 */ float rot) {}

u_short SeCmdGetPitch(/* f12 50 */ float rot, u_short pitch) {
  float fpitch_rate;
}

u_short SeCmdGetVol(/* f12 50 */ float dist, u_short vol) { float ratio_dist; }

void SeCmdSetVolForStts(/* a0 4 */ SE_WRK *swp) {}
static void SeCmdAjstVolChng(/* a0 4 */ u_short *new_vol, u_short old_vol) {}
int SeCmdFdIn(/* a0 4 */ int sw_no, u_short vol_tgt, short int vol_inc) {}

int SeCmdFdOut(/* s0 16 */ int sw_no, short int vol_inc) { SE_WRK *swp; }

static void SeSetVolReg(/* a0 4 */ SE_WRK *swp) {}

float SeCmdGetAngle(/* f12 50 */ float rot0, float rot1) { float rot_oc; }

static int SeCmdGetRotRatio(/* f12 50 */ float rot, float *ratio_rot_l,
                            float *ratio_rot_r) {}
int SeCmdSetPitch(/* a0 4 */ int sw_no, u_short pitch) {}
u_short SeCmdGetDataPitch(/* a0 4 */ int se_req_no) {}

char CheckSeUse(/* a0 4 */ int se_no) {
  u_char se_pos;
  u_char type;
  u_char tbl_no;
}

char GetSeUseTbl(/* a0 4 */ u_char type, u_char tbl_no, u_char se_no) {}
SE_STE *SeGetSeSte(/* a0 4 */ int num) {}

void SeEvInit() {
  SE_EV_WRK *seewp;
  int i;
}

static void SeEvInitOne(/* a0 4 */ SE_EV_WRK *seewp) {}

void SeEvMain() {
  SE_EV_WRK *seewp;
  SE_WRK *swp;
  int i;
}

void SeEvStopAll() { int i; }

void SeEvStop(/* a0 4 */ int se_ev_pos) { SE_EV_WRK *seewp; }

void SeEvReq(/* s0 16 */ int se_req_no, int se_ev_pos, int count, char mode) {
  SE_EV_WRK *seewp;
  SE_STE *ssp;
  u_char free_sw;
}

void SeEvSetPitch(/* a0 4 */ int se_ev_pos, u_short pitch) { SE_EV_WRK *seewp; }

u_short SeEvGetPitch(/* a0 4 */ int se_ev_pos) { SE_EV_WRK *seewp; }

static SE_EV_WRK *SeEvGetSeEvWrk(/* a0 4 */ u_char no) {}

void FGTransInit() {}
u_char IsEndFgTrans() {}
static u_char ChkLoadReqQueueFree() {}

static u_char ChkFGhostAlreadySet() { int i; }

static u_char ChkNeedsFGhostSe() {
  int i;
  u_char ret;
}

void FloatGhostSENotEmpty() { int i; }

static void GetSeTransSize() {}

static void DmaTransReq() { sceSifDmaData dma; }

static u_char ChkDmaTransEndSe() {}
static void TransReqIopCmd() {}
static u_char TransWaitIopCmd() {}
static void UseOkFGhost() {}

int SeFGhostTransCtrl() { int ret; }

static void SDoorNoUse(/* a0 4 */ u_char room_id0, u_char room_id1) {
  u_int *dp;
  u_int *sedp;
  int i;
  int k;
  u_char room_id[1];
  u_char exist_flg;
}

static void SDoorSetLoadTbl(/* s2 18 */ u_int *ld_tbl, u_char room_id) {
  u_int *idp;
  int i;
  int j;
  u_char vflg;
}

int SDoorLoadReqAndSetSub(/* s4 20 */ int load_id, u_char room_from,
                          u_char room_to) {
  u_int load_file_tbl[1];
  u_char empty_tbl[1];
  int i;
  int j;
}

int SDoorLoadReqAndSet(/* s1 17 */ int load_id, u_short door_id) {
  u_char *addr_uc;
  int i;
  u_char room_from;
  u_char room_to;
  u_char dr_num;
}

static u_char SDoorGetSeNo(/* a0 4 */ int file_no, u_char shut) { int i; }

void SeDoorOpen(/* a0 4 */ int dwrk_no) {}
void SeDoorClose(/* a0 4 */ int dwrk_no) {}

static void SFootNoUse(/* a0 4 */ u_char room_id0, u_char room_id1) {
  u_int *fp;
  u_int *sefp;
  int i;
  int k;
  u_char room_id[1];
  u_char exist_flg;
}

static void SFootSetLoadTbl(/* s2 18 */ u_int *ld_tbl, u_char room_id) {
  u_int *ifp;
  int i;
  int j;
  u_char vflg;
}

int SFootLoadReqAndSetSub(/* s4 20 */ int load_id, u_char room_from,
                          u_char room_to) {
  u_int load_file_tbl[1];
  u_char empty_tbl[1];
  int i;
  int j;
}

int SFootLoadReqAndSet(/* s1 17 */ int load_id, u_short door_id) {
  u_char *addr_uc;
  int i;
  u_char room_from;
  u_char room_to;
  u_char dr_num;
}

u_char SFootGetSeNo(/* a0 4 */ int call_no) {
  int i;
  int file_no;
}

u_char SFootGetSeNoFromFileNo(/* a0 4 */ int file_no) { int i; }

static void SEventNoUse(/* a0 4 */ u_char room_id0, u_char room_id1) {
  u_int *seep;
  int i;
  int j;
  u_char room_id[1];
  u_char exist_flg;
}

static void SEventSetLoadTbl(/* s1 17 */ u_int *ld_tbl, u_char room_id) {
  u_int load_file_no;
  int j;
  u_char vflg;
}

int SEventLoadReqAndSetSub(/* s1 17 */ int load_id, u_char room_from,
                           u_char room_to) {
  u_int load_file_no;
  u_char empty_tbl[1];
  int i;
  int j;
}

int SEventLoadReqAndSet(/* s1 17 */ int load_id, u_short door_id) {
  u_char *addr_uc;
  int i;
  u_char room_from;
  u_char room_to;
  u_char dr_num;
}

u_char SEventGetSeNo(/* a0 4 */ int file_no) { int i; }

static void SSrundNoUse(/* a0 4 */ u_char room_id0, u_char room_id1) {
  u_int *sesp;
  int i;
  int j;
  u_char room_id[1];
  u_char exist_flg;
}

static void SSrundSetLoadTbl(/* s1 17 */ u_int *ld_tbl, u_char room_id) {
  u_int load_file_no;
  int j;
  u_char vflg;
}

int SSrundLoadReqAndSetSub(/* s1 17 */ int load_id, u_char room_from,
                           u_char room_to) {
  u_int load_file_no;
  u_char empty_tbl[1];
  int i;
  int j;
}

int SSrundLoadReqAndSet(/* s1 17 */ int load_id, u_short door_id) {
  u_char *addr_uc;
  int i;
  u_char room_from;
  u_char room_to;
  u_char dr_num;
}

u_char SSrundGetSeNo(/* a0 4 */ int file_no) { int i; }

ROOM_SOUND_INFO *GetSdrDatP(/* a0 4 */ u_char room_id) {}
int GetSdrAdpcmFno(/* a0 4 */ u_char room_id) {}
u_short GetSdrAdpcmVol(/* a0 4 */ u_char room_id) {}
u_short GetSdrReverbVol(/* a0 4 */ u_char room_id) {}

void SetRoomReverbVol(/* a0 4 */ u_char room_id) { u_short vol; }

u_int *GetSdrDoorSeTblP(/* a0 4 */ u_char room_id) { u_char door_no; }

u_int *GetSdrFootSeTblP(/* a0 4 */ u_char room_id) {}
u_int GetSdrSrundSe(/* a0 4 */ u_char room_id) {}
u_int GetSdrEventSe(/* a0 4 */ u_char room_id) {}

int SeReqFootStep(/* s6 22 */ float *pos) {
  u_int *addr;
  int i;
  int rd0;
  int rd1;
  int foot_rand_per[1];
  int foot_rand;
  u_short px;
  u_short pz;
  u_short call_no;
  u_char room_no;
  u_char se_no;
  u_char dscv_flg;
  u_short frand_tbl[1][1];
}

u_char IsKarehaZone(/* v0 2 */ float *pos) {
  u_int *addr;
  int i;
  u_short px;
  u_short pz;
  u_short call_no;
  u_char room_no;
}

u_char IsTakenohaZone(/* v0 2 */ float *pos) {
  u_int *addr;
  int i;
  u_short px;
  u_short pz;
  u_short call_no;
  u_char room_no;
}

u_char IsHokoriZone() {}

void GetSquare(/* a0 4 */ sceVu0FVECTOR *v0, sceVu0FVECTOR *v1) {}

float GetDist(/* f12 50 */ float x, float z) {
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
}

float GetDistV(/* v0 2 */ float *p0, float *p1) {
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
}

float GetDistV2(/* s0 16 */ float *p0, float *p1) {
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
}

void RotFvector(/* s2 18 */ float *rot, float *tv) {
  sceVu0FMATRIX work;
  sceVu0FMATRIX rot_matrix;
}

char *StrToLower(/* s1 17 */ char *str) { char *strp; }

float SlideEncode(/* s5 21 */ u_char *base, u_char *addrs, int max_size) {
  short int s;
  short int r;
  short int len;
  short int codeptr;
  short int i;
  short int lastmatchlen;
  u_char c;
  u_char code[1];
  u_char mask;
  u_int incount;
  u_int size;
  u_int *savep;
  int save_size;
}

void SlideDecode(/* t4 12 */ u_char *base, u_char *addrs) {
  u_char textbuf[1];
  int i;
  int j;
  int k;
  int r;
  int c;
  u_short flags;
  u_int rest;
}

void init_tree() { short int i; }

void insert_node(/* t5 13 */ short int r) {
  short int p;
  short int cmp;
  short int i;
  u_char *key;
}

void delete_node(/* t8 24 */ short int p) { short int q; }

float CompressFile(/* a0 4 */ u_short *input, char *output, u_int max_size,
                   char quality) {
  int row;
  int col;
  int i;
  int j;
  u_char *input_array[1];
  int output_array[1][1];
  BIT_FILE bit_file;
  u_int size;
  u_short *top;
  u_short *addr;
  u_int tmp;
}

char CheckPhotoExpandEnd() {}
void InitPhotoExpand() {}
void ReqPhotoExpand() {}

void ExpandFile(/* s0 16 */ char *input, u_short *output2) {
  int row;
  int col;
  int i;
  int j;
  int input_array[1][1];
  u_char *output_array[1];
  u_int quality;
  static u_int *in_header;
  static u_int *out_header;
  static u_short *top;
  static BIT_FILE bit_file;
  static u_short *output;
  u_int end;
}

static void InitCompress(/* t0 8 */ char quality) {
  u_int i;
  u_int j;
  float val;
}

static void ForwardDCT(/* a0 4 */ u_char **input, int *output[1]) {
  float temp[1][1];
  float temp1;
  u_int i;
  u_int j;
  u_int k;
}

static void InverseDCT(/* a0 4 */ int *input[1], u_char **output) {
  float temp[1][1];
  float temp1;
  u_int i;
  u_int j;
  u_int k;
}

static void WriteDCTData(/* s3 19 */ BIT_FILE *output_file,
                         int *output_data[1]) {
  int i;
  int row;
  int col;
  float result;
}

static u_short *ReadPixelStrip(/* a0 4 */ u_short *input, u_char *strip[1],
                               u_char type) {
  int row;
  int col;
  u_short c;
}

static int InputCode(/* s1 17 */ BIT_FILE *input_file) {
  int bit_count;
  int result;
}

static void ReadDCTData(/* s5 21 */ BIT_FILE *input_file, int *input_data[1]) {
  int i;
  int row;
  int col;
}

static void OutputCode(/* s3 19 */ BIT_FILE *output_file, int code) {
  int top_of_range;
  int abs_code;
  int bit_count;
}

static u_short *WritePixelStrip(/* a0 4 */ u_short *output, u_char *strip[1],
                                u_char type) {
  int row;
  int col;
}

static void OutputBits(/* a0 4 */ BIT_FILE *bit_file, u_int code, int count) {
  u_int mask;
}

static int InputBits(/* a2 6 */ BIT_FILE *bit_file, int bit_count) {
  u_int mask;
  int return_value;
}

void InitEffects() {}

void InitEffectsEF() {
  int i;
  static void *e[1];
  static float aalp;
  static sceVu0FVECTOR canal1;
  static sceVu0FVECTOR canal2;
  static sceVu0FVECTOR torch_pos[1];
}

void EffectEndSet() {}

void *SetEffects(/* s0 16 */ int id, int fl) {
  int ret;
  va_list ap;
  EFFECT_CONT *ec;
  float r;
  float r;
}

void ResetEffects(/* a0 4 */ void *p) {}

int SearchEmptyEffectBuf() {
  int i;
  int fl;
  EFFECT_CONT *ecm;
}

void EffectZSort() {
  int i;
  int j;
  int num;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  EFFECT_CONT *ecm;
  EFFECT_CONT *ec;
  static int efzsort[1];
  float *v1;
}

void EffectZSort2() {
  int i;
  int j;
  int num;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  EFFECT_CONT *ecm;
  EFFECT_CONT *ec;
  static int efzsort[1];
  float *v1;
}

void EffectZSort3() {
  int i;
  int j;
  int num;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  EFFECT_CONT *ecm;
  EFFECT_CONT *ec;
  static int efzsort[1];
  float *v1;
}

int CheckEffectScrBuffer(/* a0 4 */ int eno) { int ret; }

void ResetEffectScrBuffer(/* a0 4 */ int eno) {}

void EffectControl(/* a0 4 */ int no) {
  static int fl;
  static void *ecw[1];
  EFFECT_CONT *ecm;
  int n;
}

void SetBlurOff() {}
void SetDebugMenuSwitch(/* a0 4 */ int sw) {}

void pblur() {
  sceVu0FVECTOR vpos;
  SPRITE_DATA sd;
  DRAW_ENV de;
  float fy;
  float ss1;
  float ss2;
  float xx;
  float yy;
  float zz;
  float l;
  float ll;
  static float d1;
}

void TmpEffectOff(/* a0 4 */ int id) {}
void tes_p10() {}
void tes_p11() {}

void tes_p20() {
  static void *ene_fire_work;
  sceVu0FVECTOR fire_pos;
  sceVu0FVECTOR fire_pos2;
  float fx;
  float fy;
  float fz;
  float l;
  float alp;
  static float off_x;
  static float off_z;
}

void tes_p21() {}
void tes_p3() {}

void InitEffectSub() {}
void SetParam(/* a0 4 */ int alp, int time, u_char r, u_char g, u_char b,
              int flag) {}
int ScreenCtrl() {}
void SetSquareS(/* a0 4 */ int pri, float x1, float y1, float x4, float y4,
                u_char r, u_char g, u_char b, u_char a) {}

void SetSquare(/* a0 4 */ int pri, float x1, float y1, float x2, float y2,
               float x3, float y3, float x4, float y4, u_char r, u_char g,
               u_char b, u_char a) {
  int x[1];
  int y[1];
  int z;
  int mpri;
  float div;
}

void SetSquare2s(/* a0 4 */ int pri, float x1, float y1, float x4, float y4,
                 u_char r1, u_char g1, u_char b1, u_char r2, u_char g2,
                 u_char b2, u_char a) {
  int x[1];
  int y[1];
  int z;
  int mpri;
  float div;
}

void SetSquareZ(/* s0 16 */ int pri, float x1, float y1, float x4, float y4,
                int z) {
  int x[1];
  int y[1];
  float div;
}

void SetPanel(/* a0 4 */ u_int pri, float x1, float y1, float x2, float y2,
              u_char r, u_char g, u_char b, u_char a) {}

void SetPanel2(/* s1 17 */ u_int pri, float x1, float y1, float x2, float y2,
               int z, u_char r, u_char g, u_char b, u_char a) {
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

void SetSquareSN(/* a0 4 */ int pri, float x1, float y1, float x4, float y4,
                 u_char r, u_char g, u_char b, u_char a) {}
void SetSquareN(/* a0 4 */ int pri, float x1, float y1, float x2, float y2,
                float x3, float y3, float x4, float y4, u_char r, u_char g,
                u_char b, u_char a) {}

void SetTriangle(/* a0 4 */ int pri, float x1, float y1, float x2, float y2,
                 float x3, float y3, u_char r, u_char g, u_char b, u_char a) {
  int x[1];
  int y[1];
  int z;
  int mpri;
  float div;
}

void SetTriangleZ(/* v1 3 */ int pri, float x1, float y1, float z1, float x2,
                  float y2, float z2, float x3, float y3, float z3, u_char r,
                  u_char g, u_char b, u_char a) {
  int x[1];
  int y[1];
  float div;
}

void SetLine(/* a0 4 */ int pri, float x1, float y1, float x2, float y2,
             u_char r, u_char g, u_char b, u_char a) {
  int x[1];
  int y[1];
  int z;
  int mpri;
  float div;
}

void SetLine2(/* s3 19 */ int pri, float x1, float y1, float x2, float y2,
              u_char r, u_char g, u_char b, u_char a) {
  u_char rr;
  u_char gg;
  u_char bb;
  float d;
  float dw;
}

void DrawPoint(/* s0 16 */ float *mpos, int no) {
  int n;
  int clip;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR fzero;
  sceVu0IVECTOR ivec;
}

void DrawPoint2(/* s0 16 */ float *mpos, u_char r, u_char g, u_char b,
                u_char a) {
  int n;
  int clip;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR fzero;
  sceVu0IVECTOR ivec;
}

void DrawLine(/* s0 16 */ float *mpos1, u_char r1, u_char g1, u_char b1,
              u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2) {
  u_char b2;
  u_char a2;
  int i;
  int n;
  int clip;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR fzero;
  sceVu0IVECTOR ivec[1];
}

void Set3DPosTexure(/* s4 20 */ float *wlm[1], DRAW_ENV *de, int texno, float w,
                    float h, u_char r, u_char g, u_char b, u_char a) {
  int i;
  int bak;
  float th;
  float tw;
  u_int clpz2;
  u_long tx0;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR ppos[1];
  float twoby[1];
  float stq[1];
  U32DATA ts[1];
  U32DATA tt[1];
  U32DATA tq[1];
}

void _SetTexDirectS(/* a3 7 */ int pri, SPRITE_DATA *sd, int atype) {
  int xx[1];
  int yy[1];
  int mz;
  u_int tw;
  u_int th;
  float div;
  float mx;
  float my;
  float mscw;
  float msch;
  float mszw;
  float mszh;
  float px;
  float py;
  float pw;
  float ph;
  u_char malp;
  sceGsTex0 Load;
  sceGsTex0 Change;
}

void SetTexDirectS(/* a3 7 */ int pri, SPRITE_DATA *sd, int atype) {
  int xx[1];
  int yy[1];
  int mz;
  u_int th;
  float div;
  int u[1];
  int v;
  int x[1];
  int i;
  int n;
  int mtw;
  float wx;
  float mx;
  float my;
  float mscw;
  float msch;
  float mszw;
  float mszh;
  float px;
  float py;
  float ph;
  u_char malp;
  sceGsTex0 Load;
  sceGsTex0 Change;
}

void SetTexDirectS2(/* t1 9 */ int pri, SPRITE_DATA *sd, DRAW_ENV *de,
                    int type) {
  int n;
  int tw[1];
  int th[1];
  float mx;
  float my;
  u_int mz;
  float mscw;
  float msch;
  float mszw;
  float mszh;
  int mclu;
  int mclv;
  u_int r;
  u_int g;
  u_int b;
  u_int a;
  u_long tex1;
  u_long alpha;
  u_long zbuf;
  u_long test;
  u_long clmp;
  u_long prim;
  sceGsTex0 Load;
  sceGsTex0 Change;
  float div;
  float px;
  float py;
  float pw;
  float ph;
  float xx[1];
  float yy[1];
}

void SetTexDirect2(/* t0 8 */ int pri, SPRITE_DATA *sd, DRAW_ENV *de,
                   sceVu0FVECTOR *v) {
  int tw[1];
  int th[1];
  float mx;
  float my;
  int mz;
  float mscw;
  float msch;
  float mszw;
  float mszh;
  int mclu;
  int mclv;
  u_int r;
  u_int g;
  u_int b;
  u_int a;
  u_long tex1;
  u_long alpha;
  u_long zbuf;
  u_long test;
  u_long clmp;
  u_long prim;
  sceGsTex0 Load;
  sceGsTex0 Change;
  float div;
  float px;
  float py;
  float pw;
  float ph;
  float xx[1];
  float yy[1];
}

void SetTexDirect(/* s0 16 */ SPRITE_DATA *sd, int atype) {
  int i;
  float xx[1];
  float yy[1];
  unsigned int tw;
  unsigned int th;
  float ss;
  float cc;
  float div;
  int mz;
  float mx;
  float my;
  float mscw;
  float msch;
  float mszw;
  float mszh;
  float mang;
  unsigned int mrc;
  unsigned char malp;
  sceGsTex0 Load;
  sceGsTex0 Change;
  u_int r;
  u_int g;
  u_int b;
  float px;
  float py;
  float pw;
  float ph;
}

void SetScreenDSlide(/* a0 4 */ int addr, int type, int alpha, float ang,
                     float scl, int z) {
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetScreenZ(/* a0 4 */ int addr) { SPRITE_DATA sd; }

void CaptureScreen(/* a0 4 */ u_int addr) {}

void DrawScreen(/* s1 17 */ u_int pri, u_int addr, u_char r, u_char g, u_char b,
                u_char a) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void ClearFBuffer() {
  int i;
  int x[1];
  int y[1];
  int div;
}

void ClearZBuffer() {
  int i;
  int x[1];
  int y[1];
  int div;
}

void CamSave() {}
int CamChangeCheck() {}
void *GetEmptyBuffer(/* a0 4 */ int no) {}

void CheckPointDepth(/* -0xc0(sp) */ PP_JUDGE *ppj) {
  int i;
  int xx[1];
  int yy[1];
  int clip[1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR bpos[1];
  sceVu0FVECTOR fzero;
  sceVu0FVECTOR ofst_pos[1];
  float fr_f;
  static sceGsStoreImage gs_simage1;
  Q_WORDDATA q;
  int n1;
  int n2;
  u_int ui;
}

void GetCamI2DPos(/* s0 16 */ float *pos, float *tx, float *ty) {
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR vt;
  sceVu0FVECTOR vtw;
  float pl;
}

void Get2PosRot(/* a0 4 */ float *v1, float *v2, float *x, float *y) {
  float l;
  float fx;
  float fy;
  float fz;
}

void Get2PosRot2(/* a0 4 */ float *v1, float *v2, float *x, float *z) {
  float fy;
  float fz;
}

void GetTrgtRotType2(/* s1 17 */ float *p0, float *p1, float *rot, int id) {
  sceVu0FVECTOR dist;
}

void CalcSimEquations(/* s5 21 */ double *sq[1], float *x, float *y) {
  double d;
  int i;
  int j;
  int k;
}

float Get2PLength(/* a0 4 */ float *v1, float *v2) {
  float xx;
  float yy;
  float zz;
}

int log_2(/* f12 50 */ float num) { int n; }

void LocalCopyLtoB_Sub(/* a0 4 */ int no, int type, int addr) {
  u_long128 *pbuf;
  static sceGsStoreImage gs_simage1;
  static sceGsStoreImage gs_simage2;
}

void LocalCopyLtoB_Sub2(/* a0 4 */ int no, int type, int addr) {}

void LocalCopyBtoL_Sub(/* a0 4 */ int no, int type, int addr) {
  u_long128 *bbuf;
  int nloop;
  int bline;
  int rline;
  int oline;
}

int GetYOffset() {}
float GetYOffsetf() {}
void LocalCopyLtoB2(/* a0 4 */ int no, int addr) {}
void LocalCopyLtoB(/* a0 4 */ int no, int addr) {}
void LocalCopyBtoL(/* a0 4 */ int no, int addr) {}
void LocalCopyLtoB_NB(/* a0 4 */ int no, int addr) {}
void LocalCopyBtoL_NB(/* a0 4 */ int no, int addr) {}
void ClearLocalCopyLtoLCache() {}

int LocalCopyLtoLDraw(/* s1 17 */ int addr1, int addr2) {
  int i;
  int old_ndpkt;
  int xyoff;
  Q_WORDDATA *ppbuf;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void LocalCopyLtoL(/* s1 17 */ int addr1, int addr2) {
  int i;
  Q_WORDDATA *ppbuf;
}

void LocalCopyZtoBZ() { static sceGsStoreImage gs_simage1; }

void LocalCopyBZtoZ() { static sceGsLoadImage gs_limage1; }

void LocalCopyLtoBD(/* a0 4 */ int addr, void *outbuf) {
  static sceGsStoreImage gs_simage1;
  static sceGsStoreImage gs_simage2;
}

void SetVibrate(/* a0 4 */ int type, int time, int pow) {}
void CallVibrate() {}
void InitTecmotLogo() {}

int SetTecmoLogo() {
  SPRT_DAT logotex[1];
  DISP_SPRT ds;
  static int cnt;
  u_char alp;
  int sec1;
  int sec3;
}

void set_vect(/* a0 4 */ float *v, float x, float y, float z, float w) {}

void Vu0SubOuterProduct(/* a0 4 */ float *v0, float *v1, float *v2, float *v3) {
  u_int reg0;
}

void Vu0Normalize(/* a0 4 */ float *v0, float *v1) {}
void Vu0ApplyMatrix(/* a0 4 */ float *v0, float *m0[1], float *v1) {}
void Vu0MulVector(/* a0 4 */ float *v0, float *v1, float *v2) {}
void Vu0FTOI0Vector(/* a0 4 */ int *v0, float *v1) {}

void InitEffectSub2() {}
void CallFallenEffect(/* a0 4 */ float *mpos, int area, int fall_num,
                      int fall_mode) {}
void StopFallenEffect() {}

void FallObjInit(/* a0 4 */ float *mpos, int leaf_no, int area, int fall_num,
                 int fall_mode) {
  int tmp;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void FallObjInitAll(/* a0 4 */ float *mpos, int area, int fall_num,
                    int fall_mode, int height) {
  int i;
}

void FallObjDropSet() {
  int i;
  float r;
}

void FallenObjects() {
  static int now_status;
  int i;
}

void FallObjTrans(/* a0 4 */ float *leaf, float *axel, float *aim,
                  int fall_mode) {
  int tmp;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void FallObjRot(/* t0 8 */ float *rotation, float *axel, float *aim,
                int fall_mode) {}
void FallObjWind(/* a0 4 */ float *leaf, int fall_mode) {}

void FallObjLight(/* a0 4 */ float *leaf, short int *rgba, int fall_mode) {
  float tes1;
  float tes2;
}

void FallObjDraw(/* a0 4 */ float *mpos, float *rotation, short int *rgba,
                 int fall_mode) {
  int i;
  int w;
  int th;
  int tw;
  int bak;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  u_char mr;
  u_char mg;
  u_char mb;
  u_long tex0;
}

void GusObjDebug() {}
void CallGusEffect(/* a0 4 */ float *mpos, int area, int height) {}
void StopGusEffect() {}
void GusObjMove(/* a0 4 */ float *mpos) {}

void GusObjInit(/* t2 10 */ float *mpos, int leaf_no, int area) {
  int tmp;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void GusObjInit3(/* a0 4 */ float *mpos, int leaf_no, int area, int fall_mode) {
  float r;
}

void GusObjInitAll(/* a0 4 */ float *mpos, int area, int height) { int i; }

void GusObjects() { int i; }

int GusObjTrans(/* a0 4 */ int leaf_no) { int ret_num; }

void GusAlpha(/* a1 5 */ int leaf_no) {}

void GusObjDraw(/* a0 4 */ int leaf_num, int area, int fall_mode) {
  int i;
  int w;
  int k;
  int th;
  int tw;
  int bak;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm2;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  u_char mr;
  u_char mg;
  u_char mb;
  u_long tex0;
}

void CallHoleGusEffect(/* a0 4 */ float *mpos) { int i; }

void StopHoleGusEffect() {}

void HoleGusInit(/* a0 4 */ float *mpos, int leaf_no) {
  int tmp;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void HoleGusInitAll(/* s1 17 */ float *mpos) { int i; }

void HoleGusSetPos(/* a0 4 */ int leaf_no) { float r; }

void HoleGusObjects() { int i; }

int HoleGusTransX(/* a0 4 */ int leaf_no) {}

int HoleGusTransZ(/* a3 7 */ int leaf_no) { int ret_num; }

int HoleGusTransY(/* a0 4 */ int leaf_no) {}

int HoleGusAlpha(/* a0 4 */ int leaf_no) { int ret_num; }

void HoleGusDraw(/* s5 21 */ int leaf_no) {
  int i;
  int w;
  int th;
  int tw;
  int bak;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm2;
  sceVu0IVECTOR ivec[1];
  float tmp_x;
  float tmp_y;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  u_long tex0;
}

void CallLineGusEffect(/* a0 4 */ float *mpos1, float *mpos2, int dir,
                       int line_num) {
  int i;
}

void StopLineGusEffect(/* a0 4 */ int line_num) {}

void LineGusInit(/* a0 4 */ float *mpos, int leaf_no, int line_num) {
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void LineGusInitAll(/* s3 19 */ float *mpos1, float *mpos2, int dir,
                    int line_num) {
  int i;
}

void LineGusSetPos(/* t4 12 */ int leaf_no, int dir, int line_num) {
  float tmp;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void LineGusObjects(/* s0 16 */ int line_num) { int i; }

int LineGusTransX(/* t0 8 */ int leaf_no, int dir, int line_num) {
  int ret_num;
}

int LineGusTransZ(/* t0 8 */ int leaf_no, int dir, int line_num) {
  int ret_num;
}

int LineGusTransY(/* t1 9 */ int leaf_no, int dir, int line_num) {
  int ret_num;
}

int LineGusAlpha(/* a0 4 */ int leaf_no, int line_num) { int ret_num; }

void LineGusDraw(/* s6 22 */ int leaf_no, int line_num) {
  int i;
  int w;
  int th;
  int tw;
  int bak;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm2;
  sceVu0IVECTOR ivec[1];
  float tmp_x;
  float tmp_y;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  u_long tex0;
}

void InitCallAnm() {}

int CallReadyGo() { short int ret_num; }

void ResultDisp() { u_long clear_time; }

int CallMissionClear() {
  static u_char now_pos;
  u_char alpha_res[1];
  int ret_num;
  STR_DAT sd;
  DISP_STR dsr;
}

int CallMissionFailed() {
  static u_char now_pos;
  u_char alpha_res[1];
  int ret_num;
}

int CallMissionAllClear() {
  static u_char now_pos;
  u_char alpha_res[1];
  int ret_num;
  STR_DAT sd;
  SPRT_DAT ssd;
  DISP_STR dsr;
  DISP_SPRT ds;
  int i;
}

int CallStoryClear() {
  short int ret_num;
  static u_long clear_time;
  static u_int t_point;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  DISP_STR dsr;
  STR_DAT sd;
  int i;
}

int BtlAnmInit(/* s0 16 */ int anm_no) {
  int i;
  int j;
  int story_rank;
}

int BtlAnmMain() { int i; }

void *BtlTblIncl(/* a0 4 */ ANM2D_DAT_TABLE *b_table, void *p_table,
                 short int *count_keep) {
  int i;
}

void BtlDataDirectSet(/* a0 4 */ ANM2D_WRK_TABLE *w_table) {}
void BtlTblTransX(/* a0 4 */ ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table,
                  SPRT_SDAT *ssd_p) {}
void BtlTblTransY(/* a0 4 */ ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table,
                  SPRT_SDAT *ssd_p) {}
void BtlTblRotate(/* a3 7 */ ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p,
                  void *p_table) {}
void BtlTblScale(/* a3 7 */ ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p,
                 void *p_table) {}
void TblAlphaChg(/* a0 4 */ ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p,
                 void *p_table) {}

void ZanzouEffect(/* a2 6 */ ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p,
                  void *p_table) {
  int i;
}

void BtlReadyDisp(/* s0 16 */ ANM2D_WRK_TABLE *w_table) { int i; }

void SimpleMaskDraw(/* a0 4 */ u_char alpha) {}

void DispSprt2(/* s0 16 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
               SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void DispSprt3(/* s0 16 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
               SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void DispSprtTemp(/* s1 17 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
                  SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void TestPk2Data_2dg(/* s1 17 */ long int sendtexaddr) {
  static int ttest_count;
  SPRT_SDAT ssd;
}

void InitEffectScr() {}
void InitEffectScrEF() {}
void SetWhiteOut() {}
void SetWhiteIn() {}
void SetBlackOut() {}
void SetBlackIn() {}
void SetWhiteOut2(/* a0 4 */ int time) {}
void SetWhiteIn2(/* a0 4 */ int time) {}
void SetBlackOut2(/* a0 4 */ int time) {}
void SetBlackIn2(/* a0 4 */ int time) {}
void SetFlash() {}
void SetBlackFilter(/* s0 16 */ EFFECT_CONT *ec) {}

void SubBlur(/* t2 10 */ int type, u_char alpha, float scale, float rot,
             float cx, float cy) {
  SPRITE_DATA sd;
  DRAW_ENV de;
  float hw;
  float hh;
  float fx;
  float fy;
}

void SetBlur(/* s0 16 */ EFFECT_CONT *ec) {}

void RunBlur(/* a0 4 */ EFFECT_CONT *ec) {
  int ef;
  float phase;
}

void CallBlur(/* a0 4 */ int type, int wait, u_char alpha, float scale,
              float rot) {}
void CallBlur2(/* a0 4 */ int in, int keep, int out, u_char alpha, float scale,
               float rot) {}
void CallBlur3(/* a0 4 */ int in, int keep, int out, u_char alpha, float scale,
               float rot, float cx, float cy) {}

void SubFocus(/* a0 4 */ int ef) {
  SPRITE_DATA sd;
  float hw;
  float ff;
}

void SetFocus(/* s0 16 */ EFFECT_CONT *ec) {}

void RunFocus(/* s2 18 */ EFFECT_CONT *ec) {
  int ef;
  float phase;
}

void CallFocus(/* a0 4 */ int type, int wait, int gap) {}
void CallFocus2(/* a0 4 */ int in, int keep, int out, int max) {}
void SubDeform(/* a2 6 */ int type, float rate, u_char alp) {}

void SetDeform(/* s0 16 */ EFFECT_CONT *ec) {
  float ef;
  float phase;
}

void RunDeform(/* s0 16 */ EFFECT_CONT *ec) { float phase; }

void CallDeform2(/* a0 4 */ int in, int keep, int out, int type, int max) {}
static void _SetScrData(/* a0 4 */ Q_WORDDATA *dst, SCRDEF *src) {}

void MakeScrDeformPacket(/* s1 17 */ int pnumw, int pnumh, u_long tex0,
                         SCRDEF *scrdef[1], int alp) {
  int i;
  int j;
  int k;
  Q_WORDDATA *ppbuf;
}

void SetDeform0(/* -0xd0(sp) */ int type, float rate, u_char alp) {
  static float r;
  static float add;
  static int swch;
  int i;
  int j;
  int c;
  int pnumw;
  float ll;
  float fw;
  float yoff;
  float tx[1][1];
  float ty[1][1];
  sceVu0FVECTOR vtw[1][1];
  SPRITE_DATA sd1;
}

void SetDeform2(/* -0x128(sp) */ int type, float rate, u_char alp) {
  static float rrr[1];
  static float lll[1];
  static float mm1[1];
  static float mm2[1];
  static float sss[1];
  static float ccc[1];
  static float r;
  static float add;
  static float ll;
  static int swch;
  int i;
  int k;
  int m;
  int bak;
  int vnumw;
  int wix;
  int pnumh;
  int wiy;
  float wfw;
  float wfh;
  float yoff;
  float l;
  float fw;
  float lm;
  float cntw;
  float cnth;
  float ts;
  float fx;
  float fy;
  float fz;
  float rot_x;
  float rot_y;
  float tx[1];
  float ty[1];
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR vt[1];
  sceVu0FVECTOR vtw[1];
  SPRITE_DATA sd1;
}

void SetDeform3(/* -0x120(sp) */ int type, float rate, u_char alp) {
  static float r;
  static float add;
  static float ll;
  static int swch;
  int i;
  int j;
  int c;
  int pnumw;
  int vnumw;
  int wix;
  int wiy;
  float wfw;
  float wfh;
  float fw;
  float lm;
  float cntw;
  float cnth;
  float fx;
  float fy;
  float tx[1][1];
  float ty[1][1];
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR vt[1][1];
  sceVu0FVECTOR vtw[1][1];
  DEFWORK *pdef;
  SPRITE_DATA sd1;
  float pszw;
  float pszh;
  float yoff;
}

void SetDeform4(/* -0xf0(sp) */ int type, float rate, u_char alp) {
  static float r;
  static float add;
  int i;
  int j;
  int pnumw;
  int vnumw;
  int wix;
  int pnumh;
  int wiy;
  float wfw;
  float wfh;
  float f;
  float lw;
  float fw;
  float lm;
  float fx;
  float fy;
  float fz;
  float yoff;
  SCRDEF scrdef[1][1];
  SCRDEF *pscr;
  DEFWORK *pdef;
  float r;
}

void SetDeform5(/* -0xe0(sp) */ int type, float rate, u_char alp) {
  static float r;
  static float add;
  int i;
  int j;
  int pnumw;
  int vnumw;
  int wix;
  int pnumh;
  int wiy;
  float wfw;
  float wfh;
  float f;
  float lw;
  float fw;
  float lm;
  float fx;
  float fy;
  float fz;
  SCRDEF scrdef[1][1];
  SCRDEF *pscr;
  float xx;
  float yy;
  DEFWORK *pdef;
  float r;
}

void SetDeform6(/* -0xe0(sp) */ int type, float rate, u_char alp) {
  static float r;
  static float add;
  int i;
  int j;
  int vnumw;
  int wix;
  int wiy;
  float wfw;
  float wfh;
  float f;
  float lw;
  float fw;
  float lm;
  float fx;
  float fy;
  float fz;
  float yoff;
  SCRDEF scrdef[1][1];
  SCRDEF *pscr;
  DEFWORK *pdef;
  float r;
}

void SubContrast2(/* t5 13 */ u_char col, u_char alp) {
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetContrast2(/* s0 16 */ EFFECT_CONT *ec) {}

void SubContrast3(/* t4 12 */ u_char col, u_char alp) {
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetContrast3(/* s0 16 */ EFFECT_CONT *ec) {}

void SubNega(/* s0 16 */ u_char r, u_char g, u_char b, u_char alp,
             u_char alp2) {
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetNega(/* s0 16 */ EFFECT_CONT *ec) {
  u_char col;
  u_char alp;
  u_char alp2;
}

void *CallNega2(/* a0 4 */ int in, int keep, int out) { static u_char alp; }

void *CallNega(/* a0 4 */ int time) {}

void SetOverRap(/* s0 16 */ EFFECT_CONT *ec) {
  static float cx;
  static float cy;
  static float cz;
  static float alp;
  float x;
  float y;
  float z;
  float fn;
  int fl;
  int ret;
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetForcusDepth(/* -0xc0(sp) */ EFFECT_CONT *ec) {
  int i;
  int zi[1];
  float bai[1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR vt;
  sceVu0FVECTOR vtw;
  sceVu0FVECTOR vtww;
  sceVu0IVECTOR ivec;
}

void SetForcusDepth2(/* s0 16 */ EFFECT_CONT *ec) {
  int zi[1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR vt;
  sceVu0FVECTOR vtw;
  sceVu0FVECTOR vtww;
  float bai[1];
  static float ff;
  sceVu0IVECTOR ivec;
}

void MakeRDither3() {
  u_char pat[1];
  u_int pal[1];
  int i;
  float r;
  float r;
  static sceGsLoadImage gs_limage1;
  static sceGsLoadImage gs_limage2;
}

void SubDither3(/* s0 16 */ int type, float alp, float spd, u_char alpmx,
                u_char colmx) {
  static sceVu0FVECTOR old_cam_i;
  static float cnf;
  static float cx;
  static float cy;
  static int fl;
  float tx;
  float ty;
  float otx;
  float oty;
  float mvx;
  float mvy;
  SPRITE_DATA sd;
  SPRITE_DATA sd2;
  DRAW_ENV de;
  DRAW_ENV de2;
  u_char pat[1];
  u_int pal[1];
  int i;
  static u_char oalp;
  static u_char ocol;
  static int numf;
  float r;
  float r;
  static sceGsLoadImage gs_limage1;
  static sceGsLoadImage gs_limage2;
}

void SetDither3(/* s0 16 */ EFFECT_CONT *ec) {
  u_char alpmx;
  u_char colmx;
  int type;
  float spd;
  float alp;
}

void SubDither4(/* f27 65 */ float alp, float spd) {
  static sceVu0FVECTOR old_cam_i;
  static float cnf;
  static float cx;
  static float cy;
  static int fl;
  float tx;
  float ty;
  float otx;
  float oty;
  float mvx;
  float mvy;
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetDither4(/* s0 16 */ EFFECT_CONT *ec) {}

void SubFadeFrame(/* t8 24 */ u_char alp, u_int pri) {
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void SetFadeFrame(/* s0 16 */ EFFECT_CONT *ec) {}
void ChangeMAGATOKI2(/* a0 4 */ int sw) {}

void SetMAGATOKI2() {
  EFFECT_CONT *ecm;
  static u_char alpr;
}

void SetMAGATOKI(/* s0 16 */ EFFECT_CONT *ec) {
  static int cnt1;
  u_char *flag;
  float per1;
  float mbalp;
  float mbscl;
  float mbrot;
  float mccol;
  float mcalp;
  float mdalp;
  float mdspd;
  float mdfrt;
  float mdfal;
  int sec1_1;
  int sec1_2;
  float balp[1];
  float bscl[1];
  float brot[1];
  float ccol[1];
  float calp[1];
  float dalp[1];
  float dspd[1];
  float dfrt[1];
  float dfal[1];
}

u_char SubNowLoading(int fl, int num, float sclx, float scly, float bx,
                     float by, float spd, float rate, float trate) {
  u_char alpha1[1];
  u_char alpha2[1];
  int i;
  int j;
  int k;
  int m;
  int bak;
  int vnumw;
  int pnumh;
  int vnumh;
  int sy2;
  int tx[1];
  int ty[1];
  u_int clip[1];
  u_int clpz2;
  float f1;
  float f2;
  float f3;
  float f4;
  float bxf;
  float byf;
  float pr11;
  float pr12;
  float pr21;
  float pr22;
  sceVu0FVECTOR vt[1];
  sceVu0IVECTOR vtiw[1];
  sceVu0IVECTOR ivec;
  u_long tex0;
  EFFPOS *pefp;
  EFFINFO2 *pefi;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void InitNowLoading() {}
void SetNowLoadingON() {}
void SetNowLoadingOFF() {}

int SetNowLoading() {
  SPRT_DAT test[1];
  DISP_SPRT ds;
  float out;
  float alp;
  static float bx[1];
  static float by[1];
  static int cnt;
}

void SubGameOver(/* -0x100(sp) */ u_char alp, float rate) {
  static float rrr[1];
  static float lll[1];
  static float mm1[1];
  static float mm2[1];
  static float sss[1];
  static float ccc[1];
  static int fl;
  static float r;
  int i;
  int k;
  int m;
  int bak;
  int pnumw;
  int vnumw;
  int wix;
  int pnumh;
  int vnumh;
  int wiy;
  int sx2;
  int sy2;
  float sclx;
  float scly;
  float add;
  float f1;
  float f2;
  float f3;
  float f4;
  float wfw;
  float wfh;
  float fw;
  float lm;
  float cntw;
  float cnth;
  float fx;
  float fy;
  float tx[1];
  float ty[1];
  u_long tex0;
  sceVu0FVECTOR vt[1];
  sceVu0IVECTOR vtiw[1];
}

void InitGameOver() {}
void SetGameOverON() {}

int SetGameOver() {
  SPRT_DAT gameover_tbl[1];
  DISP_SPRT ds;
  int i;
  static int cnt;
  int sec5;
  int sec0;
  int sec1;
  int sec2;
  int sec3;
  int sec4;
  int blr;
  int alp0;
  int alp1;
  int alp2;
  int alp3;
  int num;
  float scl;
}

void ChangeMonochrome(/* a0 4 */ int sw) {}
void InitExFade1(/* a0 4 */ int fl, int time1) {}

int SetExFade1() {
  static int cnt1;
  static int cnt2;
  int sec2_1;
  u_char dsp[1];
  u_char dal[1];
  u_char nal[1];
  u_char dalp;
  u_char dspd;
  static u_char nalp;
  float per2;
}

void InitExFade2(/* a0 4 */ int fl, int time1, int time2, int time3) {}

int SetExFade2() {
  static int cnt1;
  int sec1_1;
  int sec1_2;
  int sec1_3;
  u_char bal[1];
  u_char dfr[1];
  u_char dal[1];
  u_char ccl[1];
  u_char cal[1];
  static u_char balp;
  u_char dfrt;
  u_char dalp;
  u_char ccol;
  u_char calp;
  float per1;
}

void InitScreenSaver() {}

void SetScreenSaver() {
  int i;
  int r3;
  int l3;
  u_int pad_all;
  ONE_HAND *ohp;
  DISP_SPRT ds;
  SPRT_DAT hand_dat;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void SetScreenEffect() {
  SBTSET screen_effect[1];
  int n;
}

void InitEffectObj() { int i; }

void InitEffectObjEF() {}
void SetPartsBlurSW(/* a0 4 */ int sw) {}
void SetPartsBlur1Sub(/* a0 4 */ u_char alp) {}
void SetPartsBlur1(/* a0 4 */ u_char alp) {}
void SetPartsBlur2() {}
void RunPartsBlur() {}
void CallPartsBlur2(/* a0 4 */ int no, int in, int keep, int out, u_char alp) {}
void CallPartsBlur4(/* a0 4 */ int no, float *vol) {}
void ResetPartsBlur() {}
void *CallPartsDeform2(/* s3 19 */ int type, float scale, void *pos, u_int in,
                       u_int keep, u_int out) {}
void *CallPartsDeform3(/* s4 20 */ int type, float scale, void *pos, u_int in,
                       u_int keep, u_int out, int alp) {}
void *CallPartsDeform3_2(/* s4 20 */ int type, float sclx, float scly,
                         void *pos, u_int in, u_int keep, u_int out, int alp) {}
void *CallPartsDeform4(/* s2 18 */ int type, float scale, void *pos,
                       float *vol) {}
void *CallPartsDeform5(/* s2 18 */ int type, float sclx, float scly, void *pos,
                       float *vol) {}

void SetPartsDeform(/* s0 16 */ EFFECT_CONT *ec) {
  int ef;
  int n0;
  float sp;
  float rt;
  float vol;
  float tr;
}

void SetVURand(/* f12 50 */ float x) {}

int CalcPartsDeformXYZ(/* a0 4 */ int *vi, float *vf) { int ret; }

void MakePartsDeformPacket(/* -0xc0(sp) */ int pnumw, int pnumh,
                           sceVu0FVECTOR *vt, float *wlm[1], sceVu0FVECTOR *stq,
                           u_char *use_alpha, float aprate, u_long tex0) {
  int i;
  int j;
  int k;
  int l;
  int m;
  int bak;
  u_long *plong;
  Q_WORDDATA *ppbuf;
  int clip[1];
  sceVu0IVECTOR vtiw[1];
  sceVu0IVECTOR colvec;
  sceVu0FMATRIX slm;
}

u_char SubPartsDeform1(/* -0x148(sp) */ EFFECT_CONT *ec, u_char num, int page,
                       int sbj, float sclx, float scly, float vol, int fl,
                       float spd, float rate, float trate) {
  u_char alpha1[1];
  u_char alpha2[1];
  EFFINFO2 *pefi;
  u_char ret_num;
  int i;
  int j;
  int k;
  int n;
  int vnumw;
  int wix;
  int wiy;
  float l;
  float lw;
  float fw;
  float cntw;
  float cnth;
  float rad;
  float ss;
  float cc;
  float fx;
  float fy;
  float fz;
  float rot_x;
  float rot_y;
  float f1;
  float f2;
  float f3;
  float f4;
  float xx;
  float yy;
  u_int clpx2;
  u_int clpy2;
  u_int clpz2;
  sceVu0FVECTOR stqparam[1];
  u_long tex0;
  sceVu0FVECTOR stq[1];
  sceVu0FVECTOR vt[1];
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR fzero;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  float add;
  float wfw;
  float wfh;
  float ml;
  float aprate;
  float r;
  static float r2;
  static float renz;
  static int passflg[1];
  static float passcnt[1];
  float *v1;
  float vtrate;
  float vtrate;
  float rr;
  float rr;
  float rr;
}

u_char SubPartsDeform2(EFFECT_CONT *ec, u_char num, int page, int sbj,
                       float sclx, float scly, float vol, int fl, float spd,
                       float rate, float trate) {
  u_char alpha[1];
  EFFPOS *pefp;
  EFFINFO2 *pefi;
  static EFFINFO2 pefi_once[1];
  u_char ret_num;
  int i;
  int j;
  int k;
  int n;
  int vnumw;
  int wix;
  int wiy;
  float l;
  float lw;
  float cntw;
  float cnth;
  float fx;
  float fy;
  float fz;
  float rot_x;
  float rot_y;
  float pr12;
  float pr21;
  float pr22;
  float comp;
  float wfw;
  float wfh;
  float add;
  float ml;
  float aprate;
  float xx;
  float yy;
  u_int clpx2;
  u_int clpy2;
  u_int clpz2;
  sceVu0FVECTOR stqparam[1];
  sceVu0FVECTOR stq[1];
  sceVu0FVECTOR vt[1];
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR fzero;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float *v1;
  float r;
  float r;
  float r;
  float r;
  float vtrate;
  float r;
  float r;
  float r;
  float r;
}

int GetCornHitCheck(/* a0 4 */ float *bpos, float power) {
  float rrate;
  float lrate;
}

int GetCornHitCheck2(/* s3 19 */ float *bpos, float power, float *rrate,
                     float *lrate) {
  sceVu0FMATRIX wlm1;
  sceVu0FMATRIX wlm2;
  sceVu0FVECTOR wpos;
  float rot_x;
  float rot_y;
  float lp;
  float lc;
  float ang;
}

void SetRenzFlare(/* s4 20 */ EFFECT_CONT *ec) {
  static float f1bk;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR tpos;
  sceVu0FVECTOR pos1;
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR trot;
  sceVu0FVECTOR wppos;
  float t1rot_x;
  float t2rot_x;
  float t1rot_y;
  float t2rot_y;
  float f1;
  float f2;
  float rx;
  float ry;
  float mx;
  float my;
  float ang;
  int i;
  int ok;
  int tp;
  u_int ui;
  EFRENZ efrenz[1];
  static sceGsStoreImage gs_simage1;
  Q_WORDDATA q;
  int n1;
  int n2;
  float r;
}

void SetStarRay(/* a0 4 */ float *bpos, int tp, float sc, int num, float aang) {
  int i;
  int x[1];
  int y[1];
  u_int z;
  float f;
  float div;
  float ss;
  float cc;
  float ang;
  float pos2[1][1];
  float pos[1][1];
  u_char rr;
  u_char gg;
  u_char bb;
  float bx;
  float by;
}

void SetNegaCircle(/* s5 21 */ EFFECT_CONT *ec) {
  int i;
  int n;
  int bak;
  int r;
  int g;
  int b;
  u_int alp;
  u_int z;
  float f;
  float add;
  float bx;
  float by;
  float rad;
  sceVu0FVECTOR ncf[1];
  sceVu0IVECTOR nci[1];
  sceVu0IVECTOR bipos;
  float *v0;
}

void _SetPartsDeformSTQRegs(/* a0 4 */ sceVu0FVECTOR *params) {}
void _CalcParstDeformSTQ(/* a0 4 */ float *stq, float *vt) {}

void InitEffectOth() { int i; }

void InitEffectOthEF() { int i; }

int SearchEmptyRippleBuf() {
  int i;
  int fl;
}

void *CallRipple(/* s1 17 */ void *pos, void *rot, float scale, int num,
                 int time) {}

void SetRipple(/* s0 16 */ EFFECT_CONT *ec) {
  int n;
  int init;
  sceVu0FVECTOR vt;
  float r;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
}

void RunRipple2() {
  int i;
  int j;
  int n;
  int bak;
  u_int clip[1];
  u_int clpy2;
  u_int clpz2;
  float add;
  float q;
  sceVu0IVECTOR vtiw[1][1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR vtw[1];
}

void SetEffSQTex(/* a0 4 */ int n, float *v, int tp, float w, float h, u_char r,
                 u_char g, u_char b, u_char a) {
  u_char rr;
  u_char gg;
  u_char bb;
  int i;
  int tw;
  int th;
  float xx[1];
  float yy[1];
  u_long tx0;
}

void SetEffSQITex(/* t5 13 */ int n, int *v, int tp, float w, float h, u_char r,
                  u_char g, u_char b, u_char a) {
  u_char rr;
  u_char gg;
  u_char bb;
  int i;
  int tw;
  int th;
  int xx[1];
  int yy[1];
  u_long tx0;
  int tp1;
  int tp2;
  int tp3;
}

void *CallFire(/* a0 4 */ void *pos, u_char r, u_char g, u_char b,
               float scale) {
  static float rate;
}

void *CallFire2(/* s7 23 */ void *pos, u_char r, u_char g, u_char b, float scl,
                u_char r2, u_char g2, u_char b2, float scl2) {}
void *CallFire3(/* fp 30 */ void *pos, int type, u_char r, u_char g, u_char b,
                float scl, u_char r2, u_char g2, u_char b2, float scl2) {}

void SubFire1(/* s4 20 */ EFFECT_CONT *ec) {
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ipos;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw[1];
  sceVu0FVECTOR wpos[1];
  static int pat;
  static int rnbk;
  static float scw;
  static float sch;
  u_long tx0;
  float msc;
  float msch;
  float f;
  float rot_x;
  float rot_y;
  int i;
  int n;
  int rn;
  int tw;
  int th;
  int w;
  int wpat;
  u_char mr;
  u_char mg;
  u_char mb;
  u_char mrh;
  u_char mgh;
  u_char mbh;
  float arate;
  float wscw;
  float wsch;
  DRAW_ENV de;
  float *v1;
  float r;
}

void SetFire(/* a0 4 */ EFFECT_CONT *ec) { static float alp; }

void SetFire2(/* a0 4 */ EFFECT_CONT *ec) {}
void SetHalo(/* s0 16 */ EFFECT_CONT *ec) {}

void SubHalo(/* a0 4 */ float *p, int type, int textp, u_int z, u_char r,
             u_char g, u_char b, u_char alp, float sc) {
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ipos;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw[1];
  sceVu0FVECTOR wpos[1];
  static int rnbk;
  static float scw;
  static float sch;
  float f;
  float rot_x;
  float rot_y;
  int i;
  int rn;
  int w;
  int n;
  float r;
  float r;
}

void InitHeatHaze() { int i; }

int draw_distortion_particles(sceVu0FMATRIX *local_screen,
                              sceVu0FMATRIX *local_clip, int fr,
                              int t_particles, void *particles,
                              int size_of_particle, float psize,
                              float distortion_amount, int type) {
  int i;
  int n;
  int num;
  u_long *d;
  u_long areg;
  u_long treg;
  float y_correction;
  float rr;
  float gg;
  float bb;
  sceVu0FVECTOR warp_add;
  sceVu0FVECTOR screen_size;
  sceVu0FVECTOR particle_size;
  sceVu0FVECTOR *p;
  int dtex;
  sceVu0FVECTOR ones;
  sceVu0FVECTOR st_add;
  sceVu0FVECTOR st_scale;
  unsigned int clip_flags;
}

void add_particle(/* a0 4 */ int type, HEAT_HAZE *hh, float *pos, float *vel,
                  float r, float g, float b, float a) {
  float oolife;
  PARTICLE *p;
}

void update_particles(/* a0 4 */ PARTICLE *prt) { int i; }

void add_particle2(/* a0 4 */ int type, HEAT_HAZE *hh, float *pos, float *vel,
                   float r, float g, float b, float a) {
  PARTICLE *p;
}

void update_particles2(/* a0 4 */ HEAT_HAZE *hh, float lng, float arate) {
  int i;
  float a;
  float f;
  float f2;
  float center;
}

void sceVu0RotCameraMatrix(/* s5 21 */ float *m[1], float *p, float *zd,
                           float *yd, float *rot) {
  sceVu0FMATRIX work;
  sceVu0FVECTOR direction;
  sceVu0FVECTOR vertical;
  sceVu0FVECTOR position;
}

void sceVu0ViewClipMatrix(/* s0 16 */ float *vc[1], float scrw, float scrh,
                          float scrz, float zmin, float zmax) {}

void *ContHeatHaze(/* s2 18 */ void *addr, int type, float *pos, float *pos2,
                   int st, float r, float g, float b, float a, float size,
                   float arate) {
  static float pcnt1;
  static float pcnt2;
  int n1;
  int n2;
  int i;
  float f;
  float fw1;
  float lng;
  float escl;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR camera_p;
  sceVu0FVECTOR camera_zd;
  sceVu0FVECTOR camera_yd;
  sceVu0FVECTOR camera_rot;
  sceVu0FVECTOR obj_trans;
  sceVu0FVECTOR obj_rot;
  sceVu0FMATRIX local_clip;
  sceVu0FMATRIX view_clip;
  sceVu0FMATRIX local_world;
  sceVu0FMATRIX world_view;
  sceVu0FMATRIX view_screen;
  sceVu0FMATRIX local_screen;
  sceVu0FMATRIX work;
  sceVu0FVECTOR ppos;
  sceVu0FVECTOR pvel;
  sceVu0FVECTOR rot;
  float fx;
  float fy;
  float fz;
  float rx;
  float rz;
  float *v1;
  float *v1;
  float fx;
  float fy;
  float fz;
  float l;
  float rate;
  float *v1;
  float r;
  float fx;
  float fy;
  float fz;
  float l;
  float rate;
  float *v1;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void SetPartInit(/* s1 17 */ HEAT_HAZE *addr, int type, int lifetime) { int j; }

void *GetItemPartAddr(/* a0 4 */ void *addr, int type, int lifetime) {
  void *ret;
}

void *GetEnePartAddr(/* v0 2 */ void *addr, int type, int lifetime) {
  int i;
  int n;
  void *ret;
}

void *GetAmuPartAddr(/* v0 2 */ void *addr, int type, int lifetime) {
  int i;
  int n;
  void *ret;
}

void *GetTorchPartAddr(/* v0 2 */ void *addr, int type, int lifetime) {
  int i;
  int n;
  void *ret;
}

void *GetSmokePartAddr(/* v0 2 */ void *addr, int type, int lifetime) {
  int i;
  int n;
  void *ret;
  float r;
}

void SetNewItemEffect(/* s6 22 */ NEW_ITEM *nip) {
  int flow;
  int flg;
  float rot_z;
  float cnt;
  float wait;
  float out;
  float rot_x;
  float rot_y;
  float size;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm[1];
  DRAW_ENV de;
  float *v1;
}

void CheckItemEffect() {
  int i;
  int j;
  int n;
  int num;
  int item_heat_num[1];
  int iwn[1];
  int iwo[1];
  sceVu0FVECTOR item_heat_wpos[1];
  static int item_heat_onum[1];
  static int item_heat_use[1];
  static void *item_heat_addr[1];
  static sceVu0FVECTOR item_heat_pos[1];
  float r;
  float r;
  float *v1;
  float *v1;
  float r;
  float r;
  int w;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR fvec;
  sceVu0FMATRIX local_world;
  sceVu0FMATRIX local_screen;
  sceVu0FVECTOR itm_pos;
  float *v0;
}

void SetEneFire(/* s1 17 */ EFFECT_CONT *ec) {
  float r;
  float g;
  float b;
  float a;
  float s;
  float t;
  float ar;
  u_int col;
  u_int ty;
  sceVu0FVECTOR pos1;
  sceVu0FVECTOR pos2;
  float *v1;
}

void CallAmuletFire() {}

int SetAmuletFire() {
  static u_char alp[1];
  static int cnt;
  static int load_id;
  static float h;
  int i;
  int c;
  int n;
  int w;
  int ret;
  float fdiv;
  float size;
  float fx;
  float fy;
  float fz;
  float l;
  float lla;
  sceVu0IVECTOR ivec[1][1];
  sceVu0FVECTOR seal[1][1];
  sceVu0FMATRIX local_world;
  sceVu0FMATRIX world_view;
  sceVu0FMATRIX world_screen;
  sceVu0FMATRIX view_screen;
  sceVu0FMATRIX local_screen;
  sceVu0FMATRIX work;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR obj_pos;
  sceVu0FVECTOR fire_pos;
  U32DATA ts[1][1];
  U32DATA tt[1][1];
  U32DATA tq[1][1];
  sceVu0FVECTOR fpos;
}

void *ContTorch(/* s1 17 */ void *addr, int type, float *pos, float *pos2,
                int st, float r, float g, float b, float a, float size,
                float arate, int tp2, float ar, float sr) {
  float rrate;
  float escl;
  float ysp1;
  float ysp2;
  int i;
  int j;
  float wind;
  sceVu0FMATRIX work;
  sceVu0FMATRIX local_clip;
  sceVu0FMATRIX local_world;
  sceVu0FMATRIX local_screen;
  sceVu0FVECTOR ppos;
  sceVu0FVECTOR pvel;
  sceVu0FVECTOR wpos;
  float fx;
  float fy;
  float fz;
  float rx;
  float rz;
  float *v1;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void SetTorch(/* s0 16 */ EFFECT_CONT *ec) {
  sceVu0FVECTOR pos;
  int st;
  int life;
  float tr;
  float tg;
  float tb;
  float sr;
  float ar;
  int torch_type;
  float *v1;
}

void *ContSmoke(/* s4 20 */ void *addr, int type, float *pos, float *pos2,
                int st, float r, float g, float b, float a, float size,
                float arate) {
  int i;
  float rate;
  float escl;
  float wind;
  sceVu0FMATRIX work;
  sceVu0FMATRIX local_clip;
  sceVu0FMATRIX local_world;
  sceVu0FMATRIX local_screen;
  sceVu0FVECTOR ppos;
  sceVu0FVECTOR pvel;
  sceVu0FVECTOR wpos;
  float fx;
  float fy;
  float fz;
  float rx;
  float rz;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void SetSmoke(/* s1 17 */ EFFECT_CONT *ec) {
  sceVu0FVECTOR pos;
  int st;
  float r;
  float g;
  float b;
  float a;
  float s;
  float *v1;
}

void SetSunshine(/* -0x110(sp) */ EFFECT_CONT *ec) {
  int nsun;
  int i;
  int j;
  int k;
  int n;
  float rot_x;
  float rot_y;
  float power;
  float ww;
  float hh;
  float fx;
  float fy;
  float fz;
  float l;
  float add;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR base_pos;
  sceVu0FVECTOR mpos[1];
  EFF_SUNSHINE eff_ray[1];
  Q_WORDDATA pbh[1];
}

void SetDust(/* -0x148(sp) */ EFFECT_CONT *ec) {
  static float malp;
  static float mala;
  static float mphs;
  static float mang;
  static float mscl;
  static u_char mr;
  static u_char mg;
  static u_char mb;
  static float mv1x;
  static float mv1y;
  static float grv1x;
  static float grv1y;
  static float mv2x;
  static float mv2y;
  static float grv2x;
  static float grv2y;
  static EFF_DUST eff_dust[1];
  float f;
  float ss;
  float cc;
  float fw1;
  float fw2;
  float rot_x;
  float rot_y;
  int c;
  int i;
  int j;
  int k;
  int n;
  int w;
  int th;
  int tw;
  int so[1];
  u_long tx0;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  float r;
  float r;
  float r;
  float r;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetWaterdrop(/* s5 21 */ EFFECT_CONT *ec) {
  u_char r;
  u_char g;
  u_char b;
  int c;
  int i;
  int w;
  int th;
  int tw;
  int so[1];
  int uv[1][1];
  u_int wdbwait;
  u_int wdnwait;
  float wdadd;
  float wdcnt;
  float wddely;
  float rot_x;
  float rot_y;
  float pos_y;
  float grv1;
  u_long tx0;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR wpos;
  static sceVu0FVECTOR dummy_rot;
  static sceVu0FVECTOR wwpos[1];
  static int wwcnt;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR ppos[1];
  float *v1;
  float r;
  float r;
  float *v0;
  float r;
  float *v0;
  float r;
  float r;
  float *v0;
  float r;
}

void SetDustLeaf(/* t8 24 */ float *pos, int type) {
  u_char rgb1[1];
  u_char rgb2[1];
  u_char mr;
  u_char mg;
  u_char mb;
  u_char mrr;
  u_char mrg;
  u_char mrb;
  int i;
  int num;
  int status;
  int leaf_num;
  float ang;
  float angr;
  float wvx;
  float wvy;
  float mv1x;
  float mv1y;
  float mangr;
  EFF_LEAF *lep;
  EFF_LEAF_ONE *lepo;
  float *v0;
  float *v1;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void SetLeaf(/* a0 4 */ float *pos) {}
void SetDust2(/* a0 4 */ float *pos) {}

void RunLeafSub(/* -0xf8(sp) */ EFF_LEAF *lep) {
  float f;
  float ss;
  float cc;
  float fw2;
  int c;
  int i;
  int j;
  int k;
  int w;
  int th;
  int tw;
  int so[1];
  int leaf_num;
  int disp[1];
  float grv1y;
  float mphs;
  u_char rr;
  u_char gg;
  u_char bb;
  u_long tx0;
  float rot_x;
  float rot_y;
  sceVu0IVECTOR ivec[1][1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1][1];
  float *v0;
  float *v1;
}

void RunLeaf() {}

void light_rgb(/* s3 19 */ int *c0, float *LocalLightMatrix[1],
               float *LightColorMatrix[1], float *v0, float *v1, float *v2,
               float *c1) {
  sceVu0FVECTOR vector;
}

u_char SetCanalSub(/* s7 23 */ int no, float *mpos) {
  int tagnum;
  int cnt;
  u_long reg;
  RIP_WORK1 rw1;
  RIP_WORK2 rw2;
  RIPPLE2_M *rippm;
  sceVu0FVECTOR rip_light0;
  sceVu0FVECTOR rip_light1;
  sceVu0FVECTOR rip_light2;
  sceVu0FVECTOR rip_color0;
  sceVu0FVECTOR rip_color1;
  sceVu0FVECTOR rip_color2;
  sceVu0FVECTOR rip_ambient;
  u_int clpz2;
  int i;
  int j;
  int k;
  int t;
  int m;
  int n;
  int wix;
  int wiy;
  float f;
  float l;
  float lw;
  float y;
  int v1;
  int v2;
  int v3;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  sceVu0IVECTOR c0;
  sceVu0FVECTOR c1;
  sceVu0FVECTOR sufcol;
  sceVu0FMATRIX NormalLightMatrix;
  sceVu0FMATRIX LightColorMatrix;
  sceVu0FMATRIX LocalLightMatrix;
  RIPPLE2 *ripp;
  float far;
  float near;
  float *v1;
  float *v1;
}

void Call3DRipple(/* a0 4 */ float *bpos) {
  static int m;
  int i;
  int n;
  int vnumw;
  float cntw;
  float cnth;
  float tsw;
  float tsh;
  float x1;
  float x2;
  float x3;
  float z1;
  float z2;
  float z3;
}

void ContCanal() {
  static sceVu0FVECTOR bcp;
  int n;
}

void SetCanal() { int i; }

void SetGlowOfAFirefly(/* a0 4 */ float *p, float sc, u_char r1, u_char g1,
                       u_char b1, u_char r2, u_char g2, u_char b2, u_char alp) {
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ipos;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR vtw[1];
  sceVu0FVECTOR wpos[1];
  float f;
  float rot_x;
  float rot_y;
  int i;
  int w;
  int n;
}

void SetFireflySub(/* s0 16 */ FIREFLY *ffp) {
  sceVu0FVECTOR rot;
  sceVu0FVECTOR pos;
  sceVu0FMATRIX mtx;
  int cnt;
  float fw1;
  float fw2;
  float rate;
  float top;
  float under;
  float ph;
  float r;
  float r;
  float r;
  float r;
  float *v1;
  float *v0;
  float r;
}

void SetFirefly() {
  static int wait;
  static int no;
  static FIREFLY ff[1];
  int i;
  float rate;
  sceVu0FVECTOR fpos;
  sceVu0FVECTOR bpos;
  sceVu0FMATRIX mtx;
  FIREFLY *ffp;
  float *v0;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float *v0;
  float *v1;
  float *v0;
}

void SetSky() {
  float fx;
  float fz;
  float l;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR cpos;
  sceVu0FVECTOR rot;
  float length;
  float height;
  float sc_speed;
  int clip;
  int clpx2;
  int clpy2;
  u_int clpz2;
  float wline;
  u_int u1;
  u_int u2;
  u_int x1;
  u_int x2;
  u_int y2;
  int hori;
  int hline;
  int c;
  sceVu0IVECTOR ivec;
}

void SetPond() {
  static float wave;
  static float texsc;
  int i;
  int k;
  int t;
  int m;
  int n;
  int tagnum;
  int cnt;
  int pnumw;
  int vnumw;
  u_int clpz2;
  float f;
  float l;
  float tsh;
  float fcana2;
  float fcana3;
  float fcana4;
  float far;
  float near;
  u_long reg;
  TEX_WORK txw[1];
  sceVu0FVECTOR bpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR wfv;
  sceVu0FVECTOR wpos;
}

void SetHaze_Pond_SW(/* a0 4 */ int sw) {}

void SetHaze_Pond() {
  int i;
  int c;
  float near;
  float dist;
  float wline;
  float ang;
  float maxalp;
  float lft;
  float rht;
  float fx;
  float fz;
  float l;
  float ll;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR cpos;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR rw1;
  sceVu0FVECTOR rw2;
  HAZE_WORK hw[1];
  static HAZE_NUMS hn[1];
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
  float *v0;
  float *v0;
  float *v0;
}

void DrawNewPerticleSub(int num, sceVu0FVECTOR *pos, u_char r1, u_char g1,
                        u_char b1, u_char r2, u_char g2, u_char b2, int a) {
  u_char a;
  u_int clpy2;
  u_int clpz2;
  u_char rr1;
  u_char gg1;
  u_char bb1;
  u_char rr2;
  u_char gg2;
  u_char bb2;
  int i;
  int j;
  int k;
  int n;
  int alp;
  int cl;
  int tagnum;
  int cnt;
  int clip[1];
  sceVu0IVECTOR ivec[1];
  u_long xyzf[1];
  u_long rgbaq1;
  u_long rgbaq2;
  u_long reg;
}

void SetEneFace(/* s0 16 */ EFFECT_CONT *ec) {
  int alp;
  int direc;
  int i;
  int j;
  int th;
  int tw;
  int bak;
  int num;
  u_int clip[1][1];
  u_int clpz2;
  float scl;
  float dirfl;
  float rot_x;
  float rot_y;
  float stq[1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivec[1][1];
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppos[1];
  U32DATA ts[1][1];
  U32DATA tt[1][1];
  U32DATA tq[1][1];
}

void SetSpirit(/* s4 20 */ EFFECT_CONT *ec) {
  static sceVu0FVECTOR bpos;
  static sceVu0FVECTOR opos[1];
  static int tbl[1];
  u_char mr;
  u_char mg;
  u_char mb;
  u_char mrh;
  u_char mgh;
  u_char mbh;
  u_char mf;
  int i;
  int n;
  int num;
  int top;
  float sc;
  float arate;
  float msc;
  float msch;
  float *v1;
  float *v0;
}

void SetFaceSpirit(/* -0x128(sp) */ EFFECT_CONT *ec) {
  float mr;
  float mg;
  float mb;
  int i;
  int j;
  int n;
  int tw;
  int th;
  int bak;
  int num;
  int top;
  int clip[1];
  int bclip;
  u_int clpz1;
  u_int clpz2;
  float sc;
  float arate;
  float fx;
  float fy;
  float fz;
  float l;
  float rot_x;
  float rot_y;
  float tailsc[1];
  u_long tx0;
  u_long cnt;
  FACESPIRIT_ST *fs;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivclip;
  sceVu0IVECTOR ivec[1][1];
  sceVu0IVECTOR ivecb[1];
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR zero;
  sceVu0FVECTOR ppos[1];
  float *v1;
  float *v0;
  float *v0;
}

void SetSaveCameraLamp() {
  sceVu0FVECTOR bbpos[1];
  int n;
  int col;
  u_char rgb1[1][1];
  u_char rgb2[1][1];
  float rot_x;
  float rot_y;
  float direc[1];
  sceVu0FVECTOR comp;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  DRAW_ENV de;
}

void InitEffectRdr() { int i; }

void InitEffectRdrEF() {}
void *GetBurnFireWork() {}
void *SearchBurnFireFurnID(/* a0 4 */ u_short furn_id) {}

void SetRDLongFire2(/* s1 17 */ float *pos, u_char sta, float szw, float szh,
                    float sw, float sh, float r, float g, float b, float room,
                    u_short furn_id) {
  EFFECT_CONT *ecw;
  void *ret;
  float *v0;
  float *v1;
}

void SetRDLongFire(/* a0 4 */ float *pos, float r, float g, float b, float room,
                   u_short furn_id) {}

void ResetRDLongFire(/* a0 4 */ u_short furn_id) { void *ret; }

void SubRDFire(/* s4 20 */ EFFECT_CONT *ec) {
  static int rnbk;
  u_char mr;
  u_char mg;
  u_char mb;
  u_char mrh;
  u_char mgh;
  u_char mbh;
  int bak;
  int i;
  int n;
  int rn;
  int tw;
  int th;
  int w;
  int wpat;
  u_int vv[1];
  u_int clpz2;
  float bsw;
  float bsh;
  float sw;
  float sh;
  float fire1;
  float fire2;
  float fire4;
  float fire5;
  float fire6;
  float fire7;
  float arate;
  float wscw;
  float wsch;
  float ligpow;
  float msc;
  float msch;
  float f;
  float f1;
  float f2;
  float rot_x;
  float rot_y;
  u_long tx0;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ipos;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR vtw[1];
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR wcpos;
  BURN_FIRE *bf;
  DRAW_ENV de;
  float *v1;
  float r;
}

void SetRDFire3(/* a0 4 */ FURN_ACT_WRK *f1, FURN_ACT_WRK *f2, FURN_ACT_WRK *f3,
                FURN_ACT_WRK *f4, FURN_ACT_WRK *f5, FURN_ACT_WRK *f6) {
  int i;
}

void ResetRDFire3() { int i; }

void SubRDFire3() {
  int i;
  int time[1];
}

void SetRDPazzEne(/* a0 4 */ float *pos) {}
void ResetRDPazzEne() {}

void SetRoomDirecPazzEne() {
  static u_char alp;
  sceVu0FVECTOR bpos;
}

void SetRDSmoke() {}
void ResetRDSmoke() {}

void SetRoomDirecSmoke() { int room_id; }

void SetRDSunshine(/* a0 4 */ int n) {}
void ResetRDSunshine(/* a0 4 */ int n) {}

short int GetRDBloodDropWork() { int i; }

short int SearchRDBloodDropWork(/* a0 4 */ u_short furn_id) { int i; }

void SetRDBloodDrop(/* s2 18 */ float *pos, int sta, u_short furn_id) {
  int ret;
}

void ResetRDBloodDrop(/* a0 4 */ u_short furn_id) {}

short int GetRDPFireWork() { int i; }

short int SearchRDPFireWork(/* a0 4 */ u_short furn_id) { int i; }

void SetRDPFire(/* s0 16 */ float *pos, u_short furn_id) {}

void SetRDPFire2(/* a0 4 */ float *pos, u_short furn_id) { EFFECT_CONT *ecw; }

void ResetRDPFire(/* a0 4 */ u_short furn_id) {
  HEAT_HAZE *hh;
  EFFECT_CONT *ec;
}

void InitEffectEne() { int i; }

void InitEffectEneEF() {}

void SetETOCircleTexure(/* t8 24 */ float *wlm[1], DRAW_ENV *de, float w,
                        float h, u_char r, u_char g, u_char b, u_char a) {
  int i;
  int bak;
  u_int clpy2;
  u_int clpz2;
  u_long tx0;
  sceVu0FMATRIX slm;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR ppos[1];
  float stq[1];
  U32DATA ts[1];
  U32DATA tt[1];
  U32DATA tq[1];
}

int SetCamFont(/* s0 16 */ int no, int fl) {
  static float scw[1][1];
  static float sch[1][1];
  static float alp[1][1];
  static int cnt[1][1];
  static int flow[1][1];
  int i;
  int j;
  int bak;
  u_int clpz2;
  int clip[1];
  u_int tw[1];
  u_int th[1];
  u_long tx[1];
  sceVu0FVECTOR ppos[1][1];
  sceVu0IVECTOR ivec[1][1];
  U32DATA ts[1][1];
  U32DATA tt[1][1];
  U32DATA tq[1][1];
}

int SetEFLight(/* a0 4 */ int flg, int eneno, int ligno, int in, int keep,
               int out) {
  static sceVu0FVECTOR lig1[1];
  static sceVu0FVECTOR lig2[1];
  static sceVu0FVECTOR lig3[1];
  static int flow[1];
  static int cnt[1];
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void IniCamSearch() { int i; }

void SetCamSearch(/* a0 4 */ int eneno) {}

void RunCamSearch() {
  int sam4rgb[1];
  int i;
  int j;
  int k;
  int n;
  int o;
  int tbl[1];
  float rot_x;
  float rot_y;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  DRAW_ENV de;
  CAMSEARCH_STR *ct;
  float *v0;
}

void IniCamView() { int i; }

void SetCamView(/* a0 4 */ int eneno) {}

void RunCamViewP(/* s0 16 */ int o, int fl, float *cpos, float ap) {
  int i;
  float rot_x;
  float rot_y;
  float fx;
  float fy;
  float fz;
  float l;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR zero;
  sceVu0FMATRIX wlm;
  DRAW_ENV de;
  CAMVIEW_STR *ct;
  float *v1;
  float r;
  float r;
  float r;
  float r;
  float r;
  float r;
}

void RunCamView() {
  int j;
  int k;
  int o;
  float cv_fr1;
  float cv_fr2;
  float rot_r;
  float rot_x;
  float rot_y;
  sceVu0FVECTOR epos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  DRAW_ENV de;
  CAMVIEW_STR *ct;
  float *v1;
}

void IniCamPush() { int i; }

void SetCamPush(/* a0 4 */ int eneno) {}

void RunCamPushP(/* s0 16 */ int o, int fl, float *cpos, float ap) {
  int i;
  int n;
  float rot_x;
  float rot_y;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR zero;
  sceVu0FMATRIX wlm;
  DRAW_ENV de;
  CAMPUSH_STR *ct;
  float *v1;
  float r;
  float r;
  float *v1;
  float r;
  float r;
  float *v1;
}

void RunCamPush() {
  float cp_fr1;
  float cp_fr3;
  float cp_fr4;
  float rot_r;
  float rot_x;
  float rot_y;
  sceVu0FVECTOR epos;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  DRAW_ENV de;
  sceVu0FVECTOR ppos;
  sceVu0FVECTOR tpos;
  float fx;
  float fy;
  float fz;
  float l;
  float dist;
  int i;
  int j;
  int k;
  int o;
  CAMPUSH_STR *ct;
  float *v1;
}

void RunCamSlow2(/* s6 22 */ int o, float hrt, float rrt, u_int alp) {
  int i;
  int k;
  int n;
  int bak;
  float f;
  float rad;
  int clip[1][1];
  sceVu0IVECTOR nci[1][1];
  sceVu0FVECTOR tpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  u_int clpz2;
  CAMSLOW_STR *ct;
  float r;
  float *v0;
  float *v0;
  float *v1;
}

void IniCamSlow() { int i; }

void SetCamSlow(/* a0 4 */ int eneno) {}

void RunCamSlow() {
  int i;
  int j;
  int k;
  int o;
  u_int alp;
  u_int ralp[1];
  float size;
  float top;
  float bottom;
  float mvy;
  float ang1;
  float ang2;
  float angr;
  float rot_ry;
  float rot_rz;
  float rot_x;
  float rot_y;
  float f;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR tpos;
  DRAW_ENV de;
  CAMSLOW_STR *ct;
  float *v1;
  sceVu0FVECTOR zero;
  sceVu0FVECTOR wpos;
  int n;
  float r;
  float r;
  float r;
}

void IniCamStop() { int i; }

void SetCamStop(/* a0 4 */ int eneno) {}

void RunCamStop() {
  int i;
  int j;
  int k;
  int n;
  int o;
  sceVu0FVECTOR tpos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  DRAW_ENV de;
  CAMSTOP_STR *ct;
  float *v1;
  float cs_fr1;
  float rot_rz;
  float ralp[1];
  float rot_x;
  float rot_y;
  float rac1;
  float rac2;
  float rbre;
  sceVu0FVECTOR zero;
  sceVu0FVECTOR wpos;
  float r;
  float r;
  float r;
  float r;
  float r;
}

int CheckCamSubEffect() {
  int i;
  int n;
}

void SetSwordLineSub(/* s4 20 */ void *pos, int num, u_char r1, u_char g1,
                     u_char b1, u_char r2, u_char g2, u_char b2) {
  u_int clpx2;
  u_int clpy2;
  u_int clpz1;
  u_int clpz2;
  u_long reg;
  int i;
  int j;
  int k;
  int n;
  int alp1;
  int alp2;
  int cl;
  int tagnum;
  int cnt;
  sceVu0FVECTOR bpos;
  sceVu0IVECTOR ivec[1];
  int clip[1];
  u_long xyzf[1];
  u_long rgbaq1;
  u_long rgbaq2;
  int uu[1];
  int vv[1];
  u_long uv[1];
}

void SetSwordSwitch(/* a0 4 */ int sw) {}

void SetSwordLine() {
  int i;
  int n;
  int tbl[1];
  sceVu0FMATRIX wlm;
  sceVu0FVECTOR bpos[1];
  sceVu0FVECTOR wpos;
  static sceVu0FVECTOR spos2[1];
  float *v0;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

int SetSpiritAway(/* a0 4 */ int fl, float *tpos) {
  int i;
  int n;
  static SPAWAY spaway;
  SPAWAY *ct;
  DRAW_ENV de;
  float ralp[1];
  float rot_x;
  float rot_y;
  sceVu0FVECTOR zero;
  sceVu0FVECTOR wpos;
  sceVu0FMATRIX wlm;
  float r;
  float r;
  float r;
  float r;
  float r;
}

int SetNewEneOut(/* s0 16 */ int flag, u_char eneno, u_char type, float *bpos,
                 float sc) {
  static float sscl[1];
  static float r[1];
  static int flow[1];
  float alpha1[1];
  int i;
  int j;
  int k;
  int m;
  int bak;
  int wix;
  int pnumh;
  int wiy;
  int sx2;
  int sy2;
  int clip;
  float l;
  float lw;
  float fw;
  float cntw;
  float rad;
  float ss;
  float cc;
  float ts;
  float rot_x;
  float rot_y;
  float fa;
  float alp;
  float scl;
  float wfw;
  float wfh;
  float wff;
  float ml;
  int tx2[1];
  int ty2[1];
  sceVu0FVECTOR vpos;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR fzero;
  sceVu0FVECTOR vt[1];
  sceVu0IVECTOR vtiw[1];
  sceVu0IVECTOR ivec;
  sceVu0FMATRIX wm;
  sceVu0FMATRIX lrm;
  sceVu0FMATRIX rm;
  sceVu0FMATRIX swm;
  sceVu0FMATRIX svm;
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX wvm;
  float *v1;
  float rr;
  float rot_x;
  float rot_y;
  sceVu0FMATRIX wlm;
  DRAW_ENV de;
}

void SetEneDmgEffect3_Sub2(/* s1 17 */ NEW_PERTICLE *np, float *bpos1,
                           float *bpos2, u_char r1, u_char g1, u_char b1,
                           u_char r2, u_char g2, int b2) {
  int enedmg2_sp;
  float fx;
  float fy;
  float fz;
  float l;
  float f1;
  float f2;
  float rot_z;
  float r1l;
  float r2l;
  float r1r;
  sceVu0FVECTOR bpos3;
  sceVu0FVECTOR opos1;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR pos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
}

int SetEneDmgEffect3(/* s5 21 */ int flag, u_char eneno, sceVu0FVECTOR *pos) {
  static sceVu0FVECTOR bpos1[1];
  static NEW_PERTICLE nyoro2_npt[1];
  u_char rgb1[1];
  u_char rgb2[1];
  int enedmg2_sp;
  int ret;
  int j;
  int k;
  float fx;
  float fy;
  float fz;
  float l;
  float f1;
  float f2;
  float rot_z;
  float r1l;
  float r2l;
  float r1r;
  float r2r;
  float nyo1;
  float nyo3;
  float nyo4;
  sceVu0FVECTOR bpos2;
  sceVu0FVECTOR opos1;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppp;
  sceVu0FVECTOR ppp2;
  sceVu0FVECTOR spos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  NEW_PERTICLE *np;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetEneSeal(/* s0 16 */ EFFECT_CONT *ec) {
  static sceVu0FVECTOR bpos[1];
  u_char flag1;
  u_char flag2;
  u_char flag3;
  u_char eneno;
  u_char inifl;
  u_char eneseal_type;
  float scl;
  void *spr_fire;
  sceVu0IVECTOR ivec;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR fzero;
  sceVu0FVECTOR spos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  float *v0;
  float *v1;
}

void EneDmgTexInit() { int i; }

void LoadEneDmgTex(/* s2 18 */ int no, u_int *addr) {
  int i;
  int count;
  int texno;
}

void SetEneDmgTex(/* a0 4 */ int wrk_no) {}

void EneDmgTexDel(/* a0 4 */ int wrk_no) { int i; }

void ZeroHourEneDmgTexDel(/* a0 4 */ int mdl_no) { int i; }

void SetEneDmgEffect1_Sub2(/* s0 16 */ int num) {
  u_char rgb[1][1][1][1];
  sceVu0FVECTOR bpos1;
  sceVu0FVECTOR wpos[1];
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR cpos;
  int i;
  int j;
  int n;
  int st;
  int bak;
  float rot_x;
  float rot_y;
  float fx;
  float fy;
  float fz;
  float l;
  float scmax;
  float scl[1];
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  int mono;
  int clip[1];
  u_int tw[1];
  u_int th[1];
  u_long tex0[1];
  sceVu0FVECTOR ppos[1][1];
  sceVu0IVECTOR ivec[1][1];
  U32DATA ts[1][1];
  U32DATA tt[1][1];
  U32DATA tq[1][1];
  float dist[1];
  float bww[1];
  float bhh[1];
  float szw[1];
  float szh[1];
  u_int textbl[1];
  u_int clpz1;
  u_int clpz2;
  ENDMG1 *dmg1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetEneDmgEffect1_Sub() { int i; }

void SetEneDmgEffect1(/* a0 4 */ int num) {}

void SetEneDmgEffect2_Sub2(/* s3 19 */ NEW_PERTICLE *np, float *bpos1,
                           float *bpos2, u_char r1, u_char g1, u_char b1,
                           u_char r2, u_char g2, int b2) {
  u_char b2;
  int i;
  int n;
  int tbl[1];
  float fx;
  float fy;
  float fz;
  float l;
  float f1;
  float f2;
  float rot_z;
  float r1l;
  float r2l;
  float r2r;
  sceVu0FVECTOR wwpos[1];
  sceVu0FVECTOR bpos3;
  sceVu0FVECTOR opos1;
  sceVu0FVECTOR wpos[1];
  sceVu0FVECTOR wkpos[1];
  sceVu0FVECTOR rot;
  sceVu0FVECTOR pos;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  sceVu0FVECTOR rottt;
  float *m0[1];
  float *v0;
  float *v1;
  float *v0;
}

void SetEneDmgEffect2_Sub() {
  int fl;
  u_char rgb1[1][1];
  u_char rgb2[1][1];
  int mono;
  int c;
  int i;
  int j;
  int k;
  int n;
  int nyoro_num;
  float fx;
  float fy;
  float fz;
  float l;
  float f1;
  float f2;
  float rot_z;
  float span1;
  float span2;
  float r1l;
  float r2l;
  float r1r;
  float r2r;
  static sceVu0FVECTOR bpos1;
  sceVu0FVECTOR bpos2;
  sceVu0FVECTOR opos1;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR wpos;
  sceVu0FVECTOR ppp2;
  sceVu0FVECTOR ppp;
  sceVu0FMATRIX wlm;
  sceVu0FMATRIX slm;
  NEW_PERTICLE *np;
  sceVu0FVECTOR spos;
  float *v1;
  float *v0;
  float r;
  float r;
  float r;
  float r;
  float *v0;
  float *v1;
  float *v0;
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  float f;
}

void SetEneDmgEffect2() {}

void gra2dInitDbgMenu() {}

void gra2dDrawDbgMenuSub(/* s2 18 */ DEBUG_MENU *wlp) {
  int i;
  int n;
  int bx;
  int by;
  int sw;
  int sh;
}

void gra2dDrawDbgMenu() {
  static int now_tree;
  int i;
  int l;
  int n;
  int ok;
  int pad;
  char cwo[1];
  DEBUG_MENU *nlp;
  DEBUG_MENU *wlp;
}

void SetMaxNumber(/* a0 4 */ int num1, int num2, int nmax) {}
void InitShibataSet() {}
void SetShibataSet() {}
void InitPerformanceCounter() {}
void StartPerformanceCounter() {}

void StopPerformanceCounter() {
  static u_char ow;
  static int cnt;
  int ctr0;
}

void DrawPerformanceCounter() {
  u_char r;
  u_char g;
  u_char b;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
  int xx1;
  int xx2;
  float f;
  float d;
}

void WaitFrameTop(/* a0 4 */ int type) {
  int ctr0;
  int ctr0;
}

void CheckHintTex() {
  int n;
  int num;
  int target;
  u_char alp;
  float posy;
  static int num_old;
  static int hint_tbl[1];
  DISP_SPRT ds;
}

void gra2dInitBG() { int i; }

void gra2dInitST() {}
static void gra2dSubO() {}
static void gra2dSubG0(/* s0 16 */ int fl) {}
static void gra2dSubG1(/* a0 4 */ int fl) {}
static void gra2dSubG2(/* a0 4 */ int fl) {}
static void gra2dSubG3(/* a0 4 */ int fl) {}
static void gra2dSubLAST() {}
void gra2dDraw(/* s0 16 */ int fl) {}

void InitMessage() {}
void InitMessageEF() {}

void SetMessageDirect(/* fp 30 */ int addr, int pri, int fn, int x, int y,
                      u_char r, u_char g, u_char b) {
  static DISP_STR ds;
  STR_DAT sd;
}

void SetMessageAddr(/* v0 2 */ int addr) {}
int SetMessage() {}
void MessageWaitOff() {}

static void SetMesFrame2(/* s0 16 */ int pri, float bx, float by, float sw,
                         float sh) {
  float xx;
  float yy;
}

void SetMesFrame(/* a0 4 */ int pri, int type, float bx, float by, float sw,
                 float sh) {}
void SetInteger(/* f12 50 */ float x, float y, int num) {}

void SetInteger2(/* s2 18 */ int pri, float x, float y, int type, u_char r,
                 u_char g, u_char b, int num) {
  char cwo[1];
}

void SetInteger3(/* s3 19 */ int pri, float x, float y, int type, u_char r,
                 u_char g, u_char b, u_char a, int num) {
  char cwo[1];
}

void SetASCIIString(/* f12 50 */ float x, float y, char *str) {}
void SetASCIIString2(/* a0 4 */ int pri, float x, float y, int type, u_char r,
                     u_char g, u_char b, char *str) {}

void SetASCIIString3(/* fp 30 */ int pri, float x, float y, int type, u_char r,
                     u_char g, u_char b, u_char a, char *str) {
  int i;
  int n;
  int code;
  u_char c1;
  u_char c2;
  int w[1];
  u_char *tbl;
  int ft;
  int offset;
  int xoff;
}

void SetWString2(/* -0xe0(sp) */ int pri, float x, float y, u_char r, u_char g,
                 u_char b, char *str) {
  int i;
  int n;
  int code;
  int dc;
  int type;
  int font_code[1][1];
}

void SetString(/* f20 58 */ float x, float y, char *fmt) {
  va_list ap;
  int i;
  int n;
  int flag;
  int len;
  char cw;
  char cwo[1];
  char str[1];
  char *buf;
}

void SetString2(/* -0x110(sp) */ int pri, float x, float y, int type, u_char r,
                u_char g, u_char b, char *fmt) {
  va_list ap;
  int i;
  int n;
  int flag;
  int len;
  char cw;
  char cwo[1];
  char str[1];
  char *buf;
}

static void SetFontPacketHeader(/* t5 13 */ int n, int type, u_char alp) {
  sceGsTex0 Load;
  sceGsTex0 Change;
  int psm;
}

static void SetFont(/* a0 4 */ int pri, int type, int no, int x, int y,
                    u_char r, u_char g, u_char b, int a) {
  u_char a;
  unsigned int tw1;
  unsigned int th1;
  unsigned int tw2;
  unsigned int th2;
  int px2;
  int py2;
  int Font_W;
  int Font_H;
  int Num_W;
  int div;
  int off_w;
  int off_ht;
  int off_hd;
  int dx;
  int dy;
  int dw;
  int dh;
  int z;
}

static void FontInit() {}

static void SetFontTex(/* a0 4 */ int flg, int bank) { static int obank; }

static void SetFontEnv() {}

static void SetFontPat(/* a0 4 */ int pri, int fn, int x, int y, int fw,
                       u_char r, u_char g, u_char b, int a) {
  int px2;
  int py2;
  u_int tw1;
  u_int th1;
  u_int tw2;
  u_int th2;
  u_int Font_W;
  u_int Num_W;
  int div;
  int dx;
  int dy;
  int dw;
  int dh;
  u_int z;
}

static void SetUnderLine(/* a0 4 */ int sw, int pri, int x, int y, int fw,
                         u_char r, u_char g, u_char b, int a) {
  int px2;
  int py2;
  int div;
  int dx;
  int dw;
  int dh;
  u_int z;
}

static void PacketEnd() {}
void CopyStrDToStr(/* a0 4 */ DISP_STR *s, STR_DAT *d) {}

int SetMessageV2_2(/* s7 23 */ DISP_STR *s) {
  u_char *c;
  u_char *cp;
  int i;
  int n;
  int m;
  int loop;
  int sflg;
  int npri;
  int nx;
  int ny;
  int nxw;
  int nyw;
  int px[1];
  int py[1];
  int pw[1];
  int selnum;
  u_char nr;
  u_char ng;
  u_char nb;
  u_char na;
  u_char nfn;
  u_char nfw;
  char cwo[1];
  int line;
  int column;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

int SetMessageV2(/* s6 22 */ DISP_STR *s) {
  u_char *c;
  u_char *cp;
  int i;
  int n;
  int m;
  int loop;
  int sflg;
  int npri;
  int nx;
  int ny;
  int nxw;
  int nyw;
  int px[1];
  int py[1];
  int pw[1];
  int selnum;
  u_char nr;
  u_char ng;
  u_char nb;
  u_char na;
  u_char nfn;
  u_char nfw;
  char cwo[1];
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

int SubMessageV3(/* s0 16 */ u_char *s, int pri, int delflg) {
  u_char *c;
  u_char *cp;
  int i;
  int j;
  int k;
  int n;
  int m;
  int loop;
  int sflg;
  int npri;
  int nx;
  int ny;
  int nxw;
  int nyw;
  int px[1];
  int py[1];
  int pw[1];
  u_char nr;
  u_char ng;
  u_char nb;
  u_char na;
  u_char nfn;
  u_char nfw;
  u_char nul;
  char cwo[1];
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

int SetMessageV3(/* a0 4 */ u_char *s, int pri) {}
int SetMessageV3_2(/* a0 4 */ u_char *s, int pri) {}
void MesPassCheck() {}
static void MesKeyCheck() {}

int MesStatusCheck() { int ret; }

void DrawButtonTex(/* s1 17 */ u_int pri, int type, float x, float y,
                   u_char alp) {
  DISP_SPRT ds;
}

void DrawButtonTexNZ(/* s1 17 */ u_int pri, int type, float x, float y,
                     u_char alp) {
  DISP_SPRT ds;
}

void DrawMessageBox(/* s7 23 */ u_int pri, float x, float y, float sizew,
                    float sizeh, u_char alp) {
  int i;
  float ssw;
  float ssh;
  float px[1];
  float py[1];
  float sw[1];
  float sh[1];
  float p1w;
  float p1h;
  DISP_SPRT ds;
  float msx;
  float msy;
  u_char alp2;
}

int GetStrLength(/* a0 4 */ u_char *str) {
  u_char *c;
  int num;
  int loop;
}

int GetStrWidth(/* a0 4 */ u_char *str) {
  u_char *c;
  u_char n;
  int loop;
  int w;
}

void FontDispSample() {
  static float w;
  static float h;
  static int fl;
  u_char str3[1];
  u_char str2[1];
  u_char str1[1];
  DISP_STR ds;
  STR_DAT sd;
}

void NumberDisp(/* a0 4 */ int number, short int pos_x, short int pos_y,
                u_char font, u_char r, u_char g, u_char b, u_char alpha,
                int pri, int digit, int type) {
  int digit;
  int i;
  int multi10;
  int multi10_bak;
  int disp_number;
  int disp_digit;
}

void NumberFontDisp(/* a0 4 */ u_char number, u_char no, short int pos_x,
                    short int pos_y, u_char font, u_char r, u_char g, u_char b,
                    int pri, int alpha) {
  int pri;
  u_char alpha;
  u_short font_w[1];
  DISP_SPRT ds;
}

void TakeSnapshot(/* t7 15 */ char *data_i, char *data_o, int size_w,
                  int size_h, int type) {
  int bx;
  int by;
  int x;
  int y;
  int oneli;
  int onelo;
  int fd;
  char fname[1];
  int k;
  int nBytes;
  int offset;
  int tex_size;
  int bitc;
  BITMAPFILEHEADER2 bfhp2;
  BITMAPINFOHEADER bihp;
}

void printClut(/* a0 4 */ void *pClut, int ClutColors) { int i; }

void ResetClutAlpha(/* a0 4 */ void *pClut, int ClutColors) {
  int i;
  u_char *pointer;
}

void ResetPIXELAlpha(/* a0 4 */ u_char *ip, int size) { int i; }

int Tim2CheckFileHeaer(/* a0 4 */ void *pTim2) {
  TIM2_FILEHEADER *pFileHdr;
  int i;
}

TIM2_PICTUREHEADER *Tim2GetPictureHeader(/* a0 4 */ void *pTim2, int imgno) {
  TIM2_PICTUREHEADER *pPictHdr;
  int i;
}

int Tim2IsClut2(/* a0 4 */ TIM2_PICTUREHEADER *ph) {}

int Tim2GetMipMapPictureSize(/* a0 4 */ TIM2_PICTUREHEADER *ph, int mipmap,
                             int *pWidth, int *pHeight) {
  int w;
  int h;
  int n;
}

TIM2_MIPMAPHEADER *Tim2GetMipMapHeader(/* a0 4 */ TIM2_PICTUREHEADER *ph,
                                       int *pSize) {
  TIM2_MIPMAPHEADER *pMmHdr;
  static char mmsize[1];
}

void *Tim2GetUserSpace(/* a0 4 */ TIM2_PICTUREHEADER *ph, int *pSize) {
  void *pUserSpace;
  static char mmsize[1];
}

void *Tim2GetUserData(/* a0 4 */ TIM2_PICTUREHEADER *ph, int *pSize) {
  void *pUserSpace;
}

char *Tim2GetComment(/* a0 4 */ TIM2_PICTUREHEADER *ph) { void *pUserSpace; }

void *Tim2GetImage(/* a0 4 */ TIM2_PICTUREHEADER *ph, int mipmap) {
  void *pImage;
  int i;
}

void *Tim2GetClut(/* a0 4 */ TIM2_PICTUREHEADER *ph) { void *pClut; }

u_int Tim2GetClutColor(/* s1 17 */ TIM2_PICTUREHEADER *ph, int clut, int no) {
  unsigned char *pClut;
  int n;
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
}

u_int Tim2SetClutColor(/* s1 17 */ TIM2_PICTUREHEADER *ph, int clut, int no,
                       u_int newcolor) {
  unsigned char *pClut;
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
  int n;
}

u_int Tim2GetTexel(/* s1 17 */ TIM2_PICTUREHEADER *ph, int mipmap, int x,
                   int y) {
  unsigned char *pImage;
  int t;
  int w;
  int h;
}

u_int Tim2SetTexel(/* s2 18 */ TIM2_PICTUREHEADER *ph, int mipmap, int x, int y,
                   u_int newtexel) {
  unsigned char *pImage;
  int t;
  int w;
  int h;
  u_int oldtexel;
}

u_int Tim2GetTextureColor(/* s0 16 */ TIM2_PICTUREHEADER *ph, int mipmap,
                          int clut, int x, int y) {
  u_int t;
}

u_int Tim2LoadPicture2(/* s0 16 */ TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp,
                       u_int offset) {}
u_int Tim2LoadPicture(/* a0 4 */ TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp) {
}

u_int Tim2LoadImage2(/* s1 17 */ TIM2_PICTUREHEADER *ph, u_int tbp,
                     u_int offset) {
  static int psmtbl[1];
  int i;
  int psm;
  u_long128 *pImage;
  int w;
  int h;
  int tbw;
  TIM2_MIPMAPHEADER *pm;
  int miptbp;
}

u_int Tim2LoadImage(/* a0 4 */ TIM2_PICTUREHEADER *ph, u_int tbp) {}

u_int Tim2LoadClut2(/* s2 18 */ TIM2_PICTUREHEADER *ph, u_int cbp,
                    u_int offset) {
  int i;
  sceGsLoadImage li;
  u_long128 *pClut;
  int cpsm;
}

u_int Tim2LoadClut(/* a0 4 */ TIM2_PICTUREHEADER *ph, u_int cbp) {}

int Tim2TakeSnapshot(/* s4 20 */ sceGsDispEnv *d0, sceGsDispEnv *d1,
                     char *pszFname) {
  int i;
  int h;
  int nHeight;
  int nImageType;
  int psm;
  int nBytes;
  TIM2_FILEHEADER fhdr;
  TIM2_PICTUREHEADER phdr;
  int nImageSize;
  u_char buf[1];
  sceGsStoreImage si;
}

void Tim2LoadTexture(/* s5 21 */ int psm, u_int tbp, int tbw, int w, int h,
                     u_long128 *pImage) {
  sceGsLoadImage li;
  int i;
  int l;
  int n;
  u_long128 *p;
}

static int Tim2CalcBufWidth(/* a0 4 */ int psm, int w) {}
static int Tim2CalcBufSize(/* a0 4 */ int psm, int w, int h) {}

static int Tim2GetLog2(/* a0 4 */ int n) { int i; }

u_long LoadTIM2Sub(/* s0 16 */ SPRITE_DATA *sno, char *buf, int no,
                   u_int offset) {
  TIM2_PICTUREHEADER *ph;
}

u_long GetTex0Reg(/* a0 4 */ u_int addr, int no, u_int offset) {
  u_long ret;
  TIM2_PICTUREHEADER *ph;
}

u_long GetTex0RegTM(/* a0 4 */ u_int addr, u_int offset) {
  u_long ret;
  TIM2_PICTUREHEADER *ph;
}

void InitTIM2Files() {}

static void InitTIM2Addr() { long int l; }

static void FlushTextureCache() { Q_WORDDATA pflsh[1]; }

static int GetLog2(/* a0 4 */ u_int n) { int i; }

void SortEffectPacket() {
  int i;
  int j;
  int n;
}

void SortMessagePacket() {
  int i;
  int j;
  int n;
}

void DmaSync_Vif1() {}

void DrawOne2D_P2(/* s0 16 */ Q_WORDDATA *packet_buf) { int s; }

void DrawAll2D_P2() {
  int i;
  int m;
  int n;
  int s;
}

void *DrawAllMes_P2(/* s0 16 */ u_int ret_addr) {
  int i;
  int m;
  int n;
  int s;
  void *ret;
}

void DrawOne2D(/* a0 4 */ Q_WORDDATA *packet_buf) {}
void DrawOne2D2a(/* s0 16 */ Q_WORDDATA *packet_buf) {}
void DrawOne2D2b() {}
void DrawAll2D() {}
void DrawAllMes() {}
void LoadSprFileToMainD(/* a0 4 */ int no, int addr) {}
void SetSprFile(/* a0 4 */ u_int addr) {}
void SetSprFile2(/* a0 4 */ u_int addr, u_int offset) {}
void SetSprFile3(/* a0 4 */ u_int addr, u_int offset) {}

void SetETIM2File(/* s2 18 */ int addr) {
  int i;
  int texnum;
  int *offtop;
  SPRITE_DATA dummy;
}

void SetFTIM2File(/* a0 4 */ int addr) {}
void LoadTIM2File() {}

void SetScissor(/* a0 4 */ int pri, int x, int y, int w, int h) { int div; }

void ResetScissor(/* a0 4 */ int pri) {}
void CopySprDToSpr(/* a0 4 */ DISP_SPRT *s, SPRT_DAT *d) {}
void _ftoi0(/* a0 4 */ int *out, float *in) {}
void _ftoi4(/* a0 4 */ int *out, float *in) {}

void DispSprD(/* a0 4 */ DISP_SPRT *s) {
  u_int ui;
  int i;
  int psm;
  float ss;
  float cc;
  u_int matt;
  u_int mu;
  u_int mv;
  float mw;
  float mh;
  float mx;
  float my;
  float mcrx;
  float mcry;
  float mcsx;
  float mcsy;
  u_int mz;
  float msw;
  float msh;
  float mrot;
  u_long mtex1;
  u_long mtexa;
  u_long malpr;
  u_long mzbuf;
  u_long mtest;
  u_long mgftg;
  u_int mpri;
  u_char mr;
  u_char mg;
  u_char mb;
  u_char ma;
  u_char mlud;
  float x[1];
  float y[1];
  float x2[1];
  float y2[1];
  u_int xx[1];
  u_int yy[1];
  u_int uu[1];
  u_int vv[1];
  sceVu0IVECTOR itmp;
  sceVu0FVECTOR ftmp;
}

void CopySqrDToSqr(/* t1 9 */ DISP_SQAR *s, SQAR_DAT *d) { int i; }

void CopyGSqDToSqr(/* t1 9 */ DISP_SQAR *s, GSQR_DAT *d) { int i; }

void CopySq4DToSqr(/* t0 8 */ DISP_SQAR *s, SQR4_DAT *d) { int i; }

void CopyGS4DToSqr(/* t2 10 */ DISP_SQAR *s, GSQ4_DAT *d) { int i; }

void DispSqrD(/* a0 4 */ DISP_SQAR *s) {
  int i;
  float ss;
  float cc;
  float mx[1];
  float my[1];
  float mcrx;
  float mcry;
  float mcsx;
  float mcsy;
  u_char mr[1];
  u_char mg[1];
  u_char mb[1];
  float x[1];
  float y[1];
  float x2[1];
  float y2[1];
  u_int xx[1];
  u_int yy[1];
  sceVu0FVECTOR ftmp;
  sceVu0IVECTOR itmp;
}

u_int *MakeTim2Direct2(/* s1 17 */ u_int *pkt_addr, u_int *tim2_addr, int tbp) {
  TIM2_PICTUREHEADER *tph;
  u_int *img_addr;
  u_int psm;
  u_int tbw;
  u_int qwc;
  u_int nloop;
  sceGsTex0 sgtx0;
  Q_WORDDATA *qw;
}

u_int *MakeClutDirect2(/* s0 16 */ u_int *pkt_addr, u_int *tim2_addr, int cbp) {
  TIM2_PICTUREHEADER *tph;
  u_int *img_addr;
  u_int qwc;
  u_int nloop;
  sceGsTex0 sgtx0;
  Q_WORDDATA *qw;
}

u_int *MakeTim2ClutDirect2(/* a0 4 */ u_int *pkt_addr, u_int *tim2, int tbp,
                           int cbp) {}
Q_WORDDATA *SetImageTransParam2(/* a0 4 */ Q_WORDDATA *qw, int tbp, int tbw,
                                int psm, u_short w, u_short h) {}

u_int *ChainPK2Direct(/* v0 2 */ u_int *pkt_addr, u_int *tm2_addr) {
  int i;
  int texnum;
  int addr;
  int *offtop;
}

void MakeFontTexSendPacket() {
  u_int *pkt_addr;
  SPRITE_DATA dummy;
  int i;
  int texnum;
  int addr;
}

void CallFontTexSendPacket() {}

void CallFontTexAndMesPacket() { void *mmp; }

void MakeTim2Direct3(/* a0 4 */ u_int *tim2_addr, int tbp, int offset) {
  TIM2_PICTUREHEADER *tph;
  u_int *img_addr;
  u_int psm;
  u_int tbw;
  u_int qwc;
  u_int nloop;
  sceGsTex0 sgtx0;
  int qwtop;
}

void MakeClutDirect3(/* a0 4 */ u_int *tim2_addr, int cbp, int offset) {
  TIM2_PICTUREHEADER *tph;
  u_int *img_addr;
  u_int qwc;
  u_int nloop;
  sceGsTex0 sgtx0;
  int qwtop;
}

void MakeTim2ClutDirect3(/* s2 18 */ u_int tm2_addr, int tbp, int cbp,
                         int offset) {
  int i;
  int texnum;
  int *offtop;
}

void MakeTim2ClutDirect4(/* s3 19 */ u_int tm2_addr, int num, int tbp, int cbp,
                         int offset) {
  int i;
  int texnum;
  int *offtop;
}

void MakeTim2SendPacket(/* s0 16 */ u_int tm2_addr, int offset) {}
void MakeTim2SendPacket_3Dpkt(/* s1 17 */ u_int tm2_addr, int offset) {}
void Reserve2DPacket(/* a0 4 */ u_int pri) {}
void Reserve2DPacket_Load() {}
void SetG2DTopPkt(/* a0 4 */ u_int addr) {}
Q_WORDDATA *Get2DPacketBufferAddress() {}
void Set2DPacketBufferAddress(/* a0 4 */ Q_WORDDATA *addr) {}

void DrawAll2DMes_P2() {
  int i;
  int m;
  int n;
  int s;
  void *mmp;
  int nch;
  int npk;
  int mch;
  int mpk;
}

void LoadRareEneTex() {}

void DrawRareEne_Sub(/* s5 21 */ int mno, int dno, float *pos, int tblno,
                     int ani, int al) {
  u_char alp;
  int a;
  int i;
  int j;
  int k;
  int m;
  int n;
  int tx[1];
  int ty[1];
  int offset;
  float fm;
  float rot_x;
  float rot_y;
  RARE_ENE_DAT *redp;
  RARE_ENE_1DAT *re1dp;
  SPRT_DAT *sdp;
  Q_WORDDATA qw[1];
  sceVu0FMATRIX slm;
  sceVu0FMATRIX wlm;
  sceVu0IVECTOR ivec[1];
  sceVu0FVECTOR fvec[1];
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR fzero;
  int rx;
  int ry;
  int sp;
  int sub;
  float *v1;
}

void DrawRareEne() {
  int i;
  int j;
  int n;
  int passflg[1];
  static int fl;
  static float spd;
  static float rate;
  static float trate;
  static sceVu0FVECTOR cpos;
  static float alp[1];
  static void *efbuf[1];
  static int old_num[1];
  float fx;
  float fy;
  float fz;
  float l;
  int nene;
  RARE_ENE_DAT *redp;
  float *v1;
}

u_int *LoadDataFromDVD(/* a0 4 */ u_char *fname) {
  int rfd;
  int len;
}

u_int *LoadDataFromDVD2(/* a0 4 */ u_char *fname, u_int *addr) {
  int rfd;
  int len;
}

void LoadPackedTextureFromMemory(/* s1 17 */ u_int *pointer) {
  TIM2_PICTUREHEADER *ph;
}

void LoadPackedTexture(/* a0 4 */ u_char *fname) {
  int rfd;
  int len;
}

void CalcRoomCoord(/* s1 17 */ void *sgd_top, float *pos) {
  SgCOORDUNIT *cp;
  float *v0;
  float *v1;
}

void SetUpRoomCoordinate(/* a0 4 */ int disp_room, float *pos) {}

void ChoudoPreRender(/* s1 17 */ FURN_WRK *furn) {
  u_int *tmpModelp;
  u_int *lit_dat;
  int disp_chodo;
  int room_no;
  float grot;
  SgCOORDUNIT *cp;
  static SgLIGHT lights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
  sceVu0FVECTOR ambient;
  float *v0;
  float *v1;
}

void ChoudoPreRenderDual(/* s0 16 */ FURN_WRK *furn) {
  u_int *tmpModelp;
  u_int *lit_dat;
  int disp_chodo;
  int room_no;
  static SgLIGHT lights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
  sceVu0FVECTOR ambient;
}

void SetPreRender(/* s2 18 */ void *buf, void *light_buf) {
  static SgLIGHT lights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
  SgCOORDUNIT *cp;
  int i;
}

void ScenePrerender() {
  int i;
  int disp_room;
  int disp_model;
  u_int *tmpModelp;
  sceVu0FVECTOR ambient;
  static SgLIGHT lights;
  static SgLIGHT ilights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
}

void RequestBlackWhiteMode() {}
void CancelBlackWhiteMode() {}

void SetEnvironment() { qword *base; }

void SetEnvironment2() { qword *base; }

void ClearFrame() { dword *base; }

void SetLWS(/* s1 17 */ SgCOORDUNIT *cp, SgCAMERA *camera) {}

void CalcCoordinate(/* s3 19 */ SgCOORDUNIT *cp, int blocks) { int i; }

void CopyCoordinate(/* a0 4 */ SgCOORDUNIT *dcp, SgCOORDUNIT *scp, int blocks) {
  int i;
}

char *appendchar(/* s0 16 */ char *dest, char *source, char *append) {}

void SetUnitMatrix(/* a0 4 */ u_int *pmodel) {
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  int i;
}

void InitializeRoom(/* s0 16 */ RMDL_ADDR *room_tbl) {
  u_int pack_num;
  u_int *prim;
}

void gra3dInitFirst() { sceDmaChan *d1; }

u_int PlayerModelInit() {
  int i;
  u_int *tmpp;
  u_int *p;
}

u_int PlayerAccessoryInit(/* a0 4 */ int addr) {
  int i;
  u_int *tmpp;
}

u_int SGDLoadInit(/* s1 17 */ u_int *addr, int size) {}

void gra3dInit() { int i; }

void Init3D() {}
void SetDefaultLightPower(/* f12 50 */ float pow) {}
void RequestSpirit(/* a0 4 */ int no, int swch) {}

void InitRequestSpirit() { u_int i; }

void RequestFly(/* a0 4 */ int no, int swch) {}

void InitRequestFly() { u_int i; }

void SetSgSpotLight(/* a0 4 */ SPOT_WRK *spot, SgLIGHT *plight) {
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetMyLight(/* s0 16 */ LIGHT_PACK *light_pack, float *eyevec) {
  int i;
  int num;
  static SgLIGHT parallel[1];
  static SgLIGHT point[1];
  static SgLIGHT spot[1];
  float *v;
  float *v;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v1;
  float *v0;
}

void TransMyLight(/* -0xd0(sp) */ LIGHT_PACK *dest_pack, LIGHT_PACK *light_pack,
                  float *pos) {
  int i;
  int j;
  int k;
  int num;
  int nbuf[1];
  int stocks;
  sceVu0FVECTOR subvec;
  sceVu0FVECTOR mulvec;
  sceVu0FVECTOR dirbuf[1];
  sceVu0FVECTOR difbuf[1];
  float len;
  float lenbuf[1];
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
  int dest_num;
  int source_num;
  float ad;
  float as;
  float total;
  sceVu0FVECTOR ld;
  sceVu0FVECTOR ls;
  float *v;
  float *v;
  float *v0;
  float *v1;
}

void CalcReflectLight() {
  SPOT_WRK *psp;
  sceVu0FVECTOR cdir;
  sceVu0FVECTOR sdirection;
  sceVu0FVECTOR ipos;
  float ip;
  float ip2;
  float len;
  float *v0;
  float *v0;
  float *v1;
  float *v1;
}

void AppendReflectLight(/* a3 7 */ LIGHT_PACK *light_pack) {}
void DeleteReflectLight(/* a0 4 */ LIGHT_PACK *light_pack) {}

void SetMyLightObj(/* s3 19 */ LIGHT_PACK *trans_pack, LIGHT_PACK *light_pack,
                   float *cam_zd, float *pos) {
  int old_parallel_num;
  int old_spot_num;
  int old_point_num;
}

void SetMyLightRoom(/* s0 16 */ LIGHT_PACK *light_pack, float *eyevec) {
  int old_spot_num;
}

void SceneSortUnit() {}

void Kagu027Control(/* s0 16 */ void *sgd_top) {
  static float trans_rate;
  static float trans_added;
  TextureAnimation *pta;
  SgMaterial *matp;
  u_int *phead;
}

void MakeDebugValue() {}
void AppendSearchModel(/* a2 6 */ void *sgd_top, int room_no) {}

void DrawOneRoom(/* s1 17 */ int no) {
  int disp_room;
  void *mdl_addr;
  SgCOORDUNIT *cp;
  float *v0;
}

void DrawRoom(/* a0 4 */ int disp_no) { int j; }

int CalcShadowDirecion(/* s2 18 */ ShadowHandle *shandle) {
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  sceVu0FVECTOR center;
  sceVu0FVECTOR interest;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR sdirection;
  float degree;
  int num;
  int i;
  SPOT_WRK *psp;
  static int chk_bound[1];
  float *v0;
}

u_int *SearchBoundingBoxPacket(/* a0 4 */ u_int *prim) {}

void DrawRoomShadow() {
  int i;
  int disp_room;
  SgCOORDUNIT *cp;
  SgCOORDUNIT oldcoord;
  ShadowHandle shandle;
  u_int *prim;
}

void DrawFurniture(/* -0xc0(sp) */ int disp_room) {
  int i;
  int j;
  int disp_chodo;
  int now_room;
  SgCOORDUNIT *cp;
  u_int *tmpModelp;
  float grot;
  static int old_frame_counter;
  u_char acs_flg;
  float *v0;
  float *v1;
  char flg;
  u_int k;
  HeaderSection *ghs;
  static sceVu0FVECTOR ofs;
}

void SetWScissorBox(/* a0 4 */ int disp_room) {}
void ReSetWScissorBox() {}
void InitFogSelection() {}

void FogSelection(/* s0 16 */ int disp_room) { u_char now_cam_door_or; }

void gra3dDraw() {
  int i;
  int j;
  int disp_room;
  static float arad;
  static float adeg;
}

int CheckModelBoundingBox(/* s7 23 */ float *lwmtx[1], sceVu0FVECTOR *bbox) {
  int i;
  int clip1;
  int xmax_flg;
  int xmin_flg;
  int ymin_flg;
  int ymax_flg;
  sceVu0FVECTOR *tmpvec;
  sceVu0FMATRIX tmpmat;
  float fog_max;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void CalcGirlCoord() {
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  float grot;
  static float tmprot;
  ShadowHandle shandle;
  SgCOORDUNIT oldcoord;
  float *v0;
}

void DrawGirl(/* s4 20 */ int in_mirror) {
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  float grot;
  ShadowHandle shandle;
  sceVu0FVECTOR goffset;
  u_int i;
  sceVu0FMATRIX transmtx;
  sceVu0FVECTOR tgirlbox[1];
  u_int *dssearch_models[1];
  u_int dsearch_num;
  sceVu0FMATRIX tmpmat;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR tmpvec2;
}

int DrawEnemy(/* a0 4 */ int no) {
  int i;
  int j;
  u_int *tmpModelp;
  SgCOORDUNIT *cp;
  float grot;
  float scale;
  u_int mdl_no;
  sceVu0FVECTOR ebox[1];
  MANMDL_DAT *mdat;
  ANI_CTRL *ani_ctrl;
  sceVu0FVECTOR offset;
  static int old_frame_counter[1];
  HeaderSection *hs2;
  SgCOORDUNIT *cp2;
  sceVu0FVECTOR vec;
  sceVu0FMATRIX m;
  float *v0;
  float *v1;
}

int DrawFlyMove(/* a1 5 */ int work_no) {
  SgCOORDUNIT *cp;
  u_int *tmpModelp;
  u_int no;
  float grot;
  float *v0;
  float *v1;
}

void ReadLights(/* t1 9 */ ROOM_LIGHT *rdata, void *buf) {
  int num;
  int i;
  u_int *prim;
  sceVu0FVECTOR *pvec;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

static void LoadLightData(/* s4 20 */ DEBUG_MENU **dbgmenu_tbl, int disp_room) {
  int i;
  int sub_menu_num;
  int nnum;
  DEBUG_SUB_MENU *psubmenu;
}

static void GetSGDLightDataPointer(/* a0 4 */ int room_no, u_int **amb_p,
                                   u_int **infinite_p, u_int **point_p,
                                   u_int **spot_p) {
  u_int *prim;
}

static void WriteSGDLightDataPointer(/* a0 4 */ int room_no, u_int **amb_p,
                                     u_int **infinite_p, u_int **point_p,
                                     u_int **spot_p) {
  int i;
  sceVu0FVECTOR *pvec;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

static void SaveLightData(/* s2 18 */ int room_no) {
  u_int *amb_p;
  u_int *infinite_p;
  u_int *point_p;
  u_int *spot_p;
  int len;
  int rfd;
  static char LoadDir[1];
  char filename[1];
  char filename2[1];
}

void ApplyLight(/* s3 19 */ int room_no) {
  void *mdl_addr;
  SgCOORDUNIT *cp;
  u_int *amb_p;
  u_int *infinite_p;
  u_int *point_p;
  u_int *spot_p;
}

static int ReadNMax(/* a0 4 */ DEBUG_MENU **dbgmenu_tbl, int now_tree) {
  DEBUG_MENU *parent;
  DEBUG_SUB_MENU *select;
}

void MakeLightEditorData(/* s5 21 */ DEBUG_MENU **dbgmenu_tbl, int now_tree) {
  int i;
  int j;
  int disp_room;
  int menu_end;
  int menu_start;
  DEBUG_SUB_MENU *psubmenu;
  SgLIGHT *plight;
  static int old_disp;
  static int loff;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void MakeFogData(/* a0 4 */ DEBUG_SUB_MENU **dbgmenu_tbl, int pos) {
  int disp_room;
}

void ApplyFogData() { int disp_room; }

u_int *RoomMdlLoadReq(/* s5 21 */ u_int *addr, u_char blk_no, u_char msn_no,
                      u_char room_no, u_char sereq_type) {
  ROOM_LOAD_BLOCK *rlb;
  int next_addr;
  int i;
  int file_no;
  int tmp_load_id;
}

int RoomMdlLoadWait() {
  ROOM_LOAD_BLOCK *rlb;
  FURN_WRK *fwp;
  int i;
}

void SetRenewDoorAddr(/* t9 25 */ u_char blk_no) {
  ROOM_LOAD_BLOCK *rlb;
  ROOM_LOAD_BLOCK *seek_rlb;
  int i;
  int j;
  int k;
}

void SetRenewDoorAddrForMovie() {
  ROOM_LOAD_BLOCK *rlb;
  int i;
}

void InitModelLoad() { u_int i; }

void DelSameMdlID(/* t3 11 */ u_short *mdl_id, int *mdl_num) {
  int i;
  int j;
  u_short id_tmp[1];
}

void SetPreRenderR022(/* s1 17 */ int flg) {
  sceVu0FVECTOR ambient;
  SgLIGHT lights;
  SgLIGHT ilights[1];
  SgLIGHT plights[1];
  SgLIGHT slights[1];
}

static int LoadFDCheck(/* a0 4 */ u_short id, char flg) { short int *mdl_num; }

void LoadItemModel(/* a0 4 */ u_int *tmpp) { int i; }

void ItemLoadAfterInit(/* a0 4 */ int item_no, int addr) {}

int InitializeRoomUnder(/* s0 16 */ RMDL_ADDR *room_tbl) {
  static int init_st;
  u_int pack_num;
  u_int *prim;
  int ret;
}

int LoadInitFurnModel(/* s1 17 */ ROOM_LOAD_BLOCK *rlb) {
  static int init_st;
  static int load_cnt;
  static int load_id;
  int ret;
  u_short furn_id;
}

int LoadInitDoorModel(/* s1 17 */ ROOM_LOAD_BLOCK *rlb) {
  static int init_st;
  static int load_cnt;
  static int load_id;
  FURN_WRK *fwp;
  int i;
  int ret;
  u_short door_id;
}

void ManmdlSetAlpha(/* a0 4 */ void *sgd_top, u_char alpha) {
  SgMaterial *matp;
  u_int *phead;
}

char motCheckTrRateMdl(/* a0 4 */ u_int mdl_no) {}
u_int *MpkMapUnit(/* s0 16 */ u_int *mpk_p) {}

void DrawGirlSubObj(/* s2 18 */ u_int *mpk_p, u_char alpha) {
  u_int i;
  u_int obj_num;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR vf2reg;
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  char obj_id[1][1];
}

void DrawEneSubObj(/* s3 19 */ u_int *mpk_p, u_char alpha1, u_char alpha2) {
  u_int i;
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  u_int obj_num;
  u_char alpha;
}

void SortUnitRefCoordKind(/* s0 16 */ void *sgd_top, SgCOORDUNIT *coordp,
                          int num) {
  int old_di;
}

void SortUnitRefCoordP(/* s0 16 */ void *sgd_top, SgCOORDUNIT *coordp,
                       int pnum) {
  int i;
  u_int *pk;
}

void SortUnitRefCoord(/* s0 16 */ void *sgd_top, SgCOORDUNIT *coordp,
                      int pnum) {
  int i;
  u_int *pk;
}

void InitEneVramCtrl() { u_int i; }

void InitEneVramCtrlSub(/* a0 4 */ ENE_VRAM_CTRL *ev_ctrl) {}

void SetEneTexture(/* a0 4 */ u_int work_id) {
  u_int *mdl_p;
  u_int offset;
  u_int i;
  u_int num;
  u_int mdl_no;
}

void SetEneVram(/* s0 16 */ u_int *mdl_p, int offset) {
  u_int *mpk_p;
  u_int *pk2_p;
}

void ReleaseEneTexture(/* s1 17 */ u_int work_id) {
  u_int *mdl_p;
  u_int mdl_no;
  u_int offset;
  u_int i;
}

void SendManMdlTex() { u_int i; }

void SetTextureToScene() {
  u_int i;
  int offset;
}

void SetTextureAfterScene() { u_int i; }

void MpkAddTexOffset(/* s0 16 */ u_int *mpk_p, int offset) {}

void SetManmdlTm2(/* s3 19 */ u_int *pak_addr, int offset, char mode) {
  u_int tm2_num;
  u_int i;
  u_int *tm2_addr;
}

void BackupEneVramCtrl() { u_int i; }

void SetupEneVramCtrl() { u_int i; }

void motPrintVramCtrl() { u_int i; }

void ManTexflush() {}

void SgdAddTexOffset(/* a0 4 */ void *sgd_top, int offset) {
  u_int i;
  u_int *p;
  u_int *nextprim;
  u_int *pk;
}

u_int *GetOkuraBuffer(/* a0 4 */ u_char work_id) {}
void ReqMsnInitPlyr(/* a0 4 */ u_char msn_no) {}

char MsnInitPlyr() {
  static char sync_flg;
  char pk2_id;
}

void motInitMsn() {}
void motInitAniMdlBuf() {}
void motInitAniMdlBufSub(/* a0 4 */ ANI_MDL_CTRL *am_ctrl) {}

u_char motSetAniMdlBuf(/* a0 4 */ u_int anm_no, u_int *anm_p) {
  u_int i;
  u_int j;
  u_int pkt_no;
}

void motReleaseOneAniMdlBuf(/* s3 19 */ u_int anm_no, u_int *anm_p) {
  u_int i;
  u_int j;
}

void motReleaseAniMdlBuf(/* a0 4 */ u_int anm_no, u_int *anm_p) {}

ANI_CTRL *motGetAniMdl(/* a0 4 */ u_int work_no) {
  u_int i;
  u_int anm_no;
  u_int pkt_no;
  ANI_CTRL *ani_ctrl;
}

void motInitPacketCtrl() { u_int i; }

void motSetAnmPacket(/* a0 4 */ u_char no) { u_int i; }

void motReleaseAnmPacket(/* a3 7 */ u_char no) {}

void motEneTexAnm(/* s0 16 */ ANI_CTRL *ani_ctrl, u_int work_id) {
  u_int *pk2_p;
  u_int i;
  u_int offset;
  static u_int cnt;
}

void motInitEneKuttuki() {}

void motSetEnemyKuttuki(/* a0 4 */ u_char work_id, u_char bone_id, float radius,
                        float ry) {
  short int bone_list[1];
}

void motReleaseEnemyKuttuki(/* a0 4 */ u_char work_id) {}

void SetPlyrClut(/* a0 4 */ int bw_flg) {
  u_int *clut_addr;
  u_int i;
  u_int num;
}

char motPlayerActCtrl(/* s1 17 */ SgCOORDUNIT *cp) {
  sceVu0FVECTOR p;
  sceVu0FVECTOR trot;
  static float rot[1];
  float spd;
  char type;
  sceVu0FVECTOR target;
  float yrot;
  float xrot;
  u_int i;
  float sub;
  float tmp;
}

void motPlyrActExec(/* a0 4 */ SgCOORDUNIT *cp) {}
void motInitPlyrAct() {}
void motPlyrActReq(/* a0 4 */ char act_no, sceVu0FVECTOR *pos, u_short cnt) {}
void motPlyrActStop() {}

char motPlyrActLookAt(/* s1 17 */ SgCOORDUNIT *cp) { sceVu0FVECTOR sub; }

char motPlyrActSurprise(/* a0 4 */ SgCOORDUNIT *cp) { static u_int se_handle; }

char motPlyrActSowasowa(/* a0 4 */ SgCOORDUNIT *cp) { static char ofs; }

char motPlyrActKyoro(/* a0 4 */ SgCOORDUNIT *cp) { PLYR_FURI_DAT *dat; }

void motGetPlyrNeckRot(/* s5 21 */ SgCOORDUNIT *cp, float *trot, float *tpos) {
  sceVu0FVECTOR p;
  sceVu0FVECTOR d0;
  sceVu0FVECTOR d1;
  sceVu0FVECTOR d2;
  sceVu0FVECTOR n;
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  float inner;
}

void InitQuake() {}
void StopQuake() {}
void ReqQuake(/* a0 4 */ u_int furn_id, float pow, u_int time, u_int loop,
              u_int stop_flg) {}

char QuakeCamera() {
  float v0;
  float v1;
  float v2;
  sceVu0FVECTOR val[1];
  sceVu0FVECTOR xd;
  char i;
  QUAKE_CTRL *qk_p;
  float dat;
}

float motGetRandom(/* f20 58 */ float upper, float lower) {}

float motLinearSupValue(/* f21 59 */ float moto, float saki, u_char mode,
                        u_int cnt, u_int all_cnt) {
  u_int now_cnt;
  float val;
  float cnt_rate;
  float dv;
}

u_int *mimInitMimeCtrl(/* -0xb0(sp) */ MIME_CTRL *m_ctrl, MIME_DAT *mdat,
                       u_int *mim_p, u_int *mdl_p, u_int *tmp_p) {
  u_int i;
  u_int j;
  u_int mim_num;
  u_int parts_buf[1];
  u_int *parts_p[1];
  u_int *parts;
  u_int fsize;
  u_int parts_no;
  u_int flg;
}

void mimInitAcsCtrl(/* s3 19 */ ANI_CTRL *ani_ctrl, u_short mdl_no) {
  u_int i;
  u_int j;
  u_int k;
  u_int wmim_num;
  WMIM_DAT *wmim_tbl;
  MIME_CTRL *m_ctrl;
  u_char flg;
  u_char name[1];
  WMIM_DAT *wdat;
}

void mimInitLoop(/* a0 4 */ ANI_CTRL *ani_ctrl) { u_int i; }

void mimRequest(/* s0 16 */ MIME_CTRL *m_ctrl, u_char rev) {}
void mimRequestLastFrame(/* s0 16 */ MIME_CTRL *m_ctrl, u_char rev) {}
void mimMepatiReq(/* a0 4 */ u_char mode, u_char rev) {}
void mimLNigiriReq(/* a0 4 */ u_char mode, u_char rev) {}
void mimRNigiriReq(/* a0 4 */ u_char mode, u_char rev) {}
void mimStop(/* a0 4 */ MIME_CTRL *m_ctrl) {}
void mimSetReso(/* a0 4 */ MIME_CTRL *m_ctrl, u_char reso) {}

void mimClearVertex(/* a0 4 */ MIME_CTRL *m_ctrl) {
  u_int i;
  u_int vtx_num;
  sceVu0FVECTOR *pkt;
  sceVu0FVECTOR *vtx;
  MIME_DAT *mdat;
  float *v0;
  float *v1;
}

void mimCalcVertex(/* fp 30 */ MIME_CTRL *m_ctrl, WMIM_CTRL *wmim,
                   u_char clear_vtx_flg) {
  u_int i;
  u_int j;
  u_int k;
  u_int vtx_num;
  u_int key_num;
  u_int vtx_ofs;
  sceVu0FVECTOR vec;
  sceVu0FVECTOR *key;
  sceVu0FVECTOR *pkt;
  sceVu0FVECTOR *key_top;
  u_int *ko_top;
  float weight;
  MIME_DAT *mdat;
  u_char acs_flg[1];
  u_int koblock_num;
}

void mimSetMimeCtrl(/* s0 16 */ MIME_CTRL *m_ctrl, MIME_DAT *mdat,
                    u_int furn_id, u_int parts_id) {}

u_int *mimSetMimeDat(/* a0 4 */ MIME_DAT *mdat, u_int *mim_p, u_int *tmp_buf,
                     u_int *mdl_p) {
  PHEAD *ph;
}

void mimSetOriVertex(/* a0 4 */ MIME_DAT *mdat) {
  u_int i;
  u_int vtx_num;
  sceVu0FVECTOR *vtx;
  sceVu0FVECTOR *pkt;
  float *v0;
  float *v1;
}

void mimSetVertex(/* s3 19 */ ANI_CTRL *ani_ctrl) {
  MIME_DAT *mdat;
  u_int stat;
  u_int i;
  u_char flg[1];
  MIME_CTRL *m_ctrl;
  MIME_CTRL *m_ctrl;
}

void mimClearToScene() { u_int i; }

void mimClearAllVertex(/* s3 19 */ ANI_CTRL *ani_ctrl) {
  u_int mim_num;
  u_int i;
}

u_char mimAddFrame(/* s0 16 */ MIME_CTRL *m_ctrl, u_int *dat) {}

void SceneMimSetVertex(/* s3 19 */ ANI_CTRL *ani_ctrl, u_int frame) {
  MIME_DAT *mdat;
  u_int i;
  u_char flg[1];
  MIME_CTRL *m_ctrl;
}

void mimChodoInitWork() { u_int i; }

void mimChodoSetWork(/* a2 6 */ u_int furn_id, u_char room_no) {
  u_int i;
  char room_id;
  u_char mim_no;
}

void mimChodoReleaseWork(/* a3 7 */ u_int furn_id, u_char room_no) { u_int i; }

void mimInitChodo(/* s4 20 */ u_int *mim_p, u_short *furn_id, u_char room_id,
                  u_short room_no, u_int num) {
  u_short i;
  u_short j;
  u_int *pkt_p;
  u_short mim_num;
  u_char *chodo_num;
  u_int fsize;
  u_int flg;
}

void mimDispChodo(/* s0 16 */ MIME_CTRL *m_ctrl, u_int *mdl_p) {
  MIME_DAT *mdat;
}

u_char mimChodoChkExec(/* a0 4 */ u_int furn_id) { u_char i; }

void mimChodoRequest(/* a0 4 */ FURN_ACT_WRK *fawp, u_char mode, u_char rev) {
  u_char i;
}

void mimChodoStop(/* a1 5 */ u_int furn_id) { u_char i; }

void mimChodoSetReso(/* s2 18 */ u_int furn_id, u_char reso) { u_char i; }

u_int mimGetFrameNum(/* a0 4 */ u_int *mim_top) {}
u_int mimGetKeymdlNum(/* a0 4 */ u_int *mim_top) {}
u_int mimGetPartsNo(/* a0 4 */ u_int *mim_top) {}
u_int mimGetFlg(/* a0 4 */ u_int *mim_top) {}
u_char *mimGetWeightName(/* a0 4 */ u_int *mim_top) {}

float mimGetWavdata(/* a0 4 */ u_int *mim_top, u_int key_no, u_int frame) {
  u_int *wav_addr;
}

sceVu0FVECTOR *mimGetKeymdlTop(/* a0 4 */ u_int *mim_top, u_int key_no) {
  u_int *vtx_addr;
}

void mimAddressMapping(/* a0 4 */ u_int *top_addr) {
  MIM_FILE_HEADER *head_p;
  MIM_ADDR_TABLE *tbl_p;
  u_int i;
}

void mimPlyrMepatiCtrl() {}

void mimInitWeight(/* a0 4 */ ANI_CTRL *ani_ctrl) { u_int i; }

void mimWeightCtrl(/* s2 18 */ ANI_CTRL *ani_ctrl, u_int weight_id,
                   float scale) {
  u_int i;
  sceVu0FMATRIX m;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR f;
  sceVu0FVECTOR reverse;
  sceVu0FVECTOR force;
  HeaderSection *hs;
  WMIM_CTRL *w_ctrl;
  WMIM_DAT *wdat;
}

void InitPlyrAcsAlpha() { char i; }

void DispPlyrAcs(/* a0 4 */ u_int *base_p, u_int *mdl_p, ACS_ALPHA *acs_ctrl,
                 u_int bone_id) {
  SgCOORDUNIT *cp;
  SgCOORDUNIT *cp2;
}

void PlyrAcsAlphaCtrl() {
  u_int i;
  u_char spd[1];
  u_char dspd[1];
}

void acsInitRopeWork() { u_int i; }

void acsRopeSetWork(/* a1 5 */ u_int furn_id) {
  u_int i;
  u_char acs_no;
}

void acsRopeReleaseWork(/* a2 6 */ u_int furn_id) { u_int i; }

sceVu0FVECTOR *acsGetRopePos(/* a0 4 */ u_int furn_id) { u_int i; }

void acsInitRopeSub(/* a0 4 */ u_int work_id, u_int furn_id, u_int type) {
  u_int i;
  u_int j;
  ROPE_CTRL *rope;
  sceVu0FVECTOR p1;
  sceVu0FVECTOR p2;
  sceVu0FVECTOR p3;
  sceVu0FVECTOR gravity;
  C_PARTICLE *current;
  sceVu0FVECTOR d;
  sceVu0FVECTOR force;
  float r0;
  float dr;
  u_int id0;
  u_int id1;
}

void acsRopeMoveRequest(/* a0 4 */ u_int furn_id, u_char move_mode, float pow) {
  u_char i;
}

void acsRopeMoveStop(/* a0 4 */ u_int furn_id) { u_char i; }

u_char acsCheckRopeMoveExec(/* a0 4 */ u_int furn_id) { u_char i; }

void acsCalcCoordinate(/* s6 22 */ SgCOORDUNIT *cp, u_int block_num,
                       FURN_WRK *f_wrk, ROPE_CTRL *rope) {
  float grot;
  u_int i;
  sceVu0FVECTOR trans[1];
  sceVu0FVECTOR x;
  sceVu0FVECTOR y;
  sceVu0FVECTOR z;
  sceVu0FMATRIX base;
  float *v0;
  float *v1;
  sceVu0FVECTOR vec;
  sceVu0FMATRIX m;
  sceVu0FVECTOR axis;
}

void acsSetMoveDir(/* s1 17 */ float *dir) {}
void acsRopeMoveCtrl(/* a1 5 */ ROPE_CTRL *rope) {}

void acsRopeMoveWind(/* s2 18 */ ROPE_CTRL *rope, char dir_cng) {
  sceVu0FVECTOR wind;
  C_PARTICLE *current;
  u_int i;
  char cnt;
  char flg;
}

void acsRopeMoveVib(/* s2 18 */ ROPE_CTRL *rope) {
  sceVu0FVECTOR wind;
  C_PARTICLE *current;
  u_int i;
}

void acsRopeMoveFall(/* a0 4 */ ROPE_CTRL *rope) {
  C_PARTICLE *current;
  u_int i;
}

void acsMoveRope(/* s7 23 */ ROPE_CTRL *rope, SgCOORDUNIT *cp,
                 COLLISION_DAT *collision, float *l2w_inscale[1]) {
  u_int i;
  u_int j;
  sceVu0FMATRIX m;
  sceVu0FMATRIX m1;
  sceVu0FMATRIX w2c[1];
  sceVu0FMATRIX l2c[1];
  sceVu0FMATRIX l2w;
  sceVu0FMATRIX w2l;
  sceVu0FVECTOR gravity;
  C_PARTICLE *current;
  ROPE_DAT *rdat;
  u_int fixed_num;
  sceVu0FVECTOR d;
  sceVu0FVECTOR force;
  float r0;
  float dr;
  u_int id0;
  u_int id1;
  sceVu0FVECTOR p;
  sceVu0FVECTOR v;
  sceVu0FVECTOR p1;
  sceVu0FVECTOR v1;
  u_char hit;
}

u_int *acsInitCloth(/* a0 4 */ CLOTH_CTRL *cloth_top, u_int *mpk_p,
                    u_int *top_addr, u_int mdl_no) {
  u_int i;
  CLOTH *dat;
  CLOTH_CTRL *cloth;
  PHEAD *ph;
  sceVu0FVECTOR *vtx;
  u_int *addr;
  u_int div;
  u_int div1;
  u_int div2;
  u_int cloth_no;
  u_char id1;
  u_char id2;
  u_char id1;
  u_char id2;
  u_char j;
  u_char id1;
  u_char id2;
  u_char j;
  u_char id1;
  u_char id2;
  u_char j;
  u_int ofs[1];
}

void acsClothCtrl(/* s1 17 */ ANI_CTRL *ani_ctrl, u_int *mpk_p, u_int mdl_no,
                  u_char scene_flg) {
  u_int i;
  u_int limit;
  CLOTH_CTRL *cloth;
  SgCOORDUNIT *cp;
  sceVu0FVECTOR *vtx;
  PHEAD *ph;
  u_int no;
  static sceVu0FVECTOR pbak;
  sceVu0FVECTOR sub;
  sceVu0FVECTOR pos;
  float val;
  float *v1;
  CLOTH_DAT *cdat;
  COLLISION_DAT *collision;
  float scale;
}

void acsMoveCloth(/* -0xf0(sp) */ sceVu0FVECTOR *vtx, CLOTH_CTRL *cloth,
                  SgCOORDUNIT *cp, COLLISION_DAT *collision, float scale,
                  float collision_scale, u_int mdl_no) {
  u_int i;
  u_int j;
  u_int k;
  sceVu0FVECTOR gravity;
  C_PARTICLE *current;
  SPRING *spring;
  CLOTH *dat;
  sceVu0FMATRIX l2w;
  sceVu0FMATRIX w2l;
  sceVu0FMATRIX l2w_rist;
  char restrict[1];
  sceVu0FVECTOR ldef;
  sceVu0FVECTOR d;
  sceVu0FVECTOR force;
  float r0;
  float dr;
  u_int id0;
  u_int id1;
  sceVu0FMATRIX w2c[1];
  sceVu0FMATRIX c2w[1];
  sceVu0FVECTOR p;
  sceVu0FVECTOR v;
  sceVu0FVECTOR p1;
  sceVu0FVECTOR v1;
  u_char hit;
  u_short id0;
  u_short id1;
  u_short cnt;
  u_short id;
  u_short id;
}

u_char acsCheckCollisionSphere(/* v0 2 */ SPHERE *sphere, float *current,
                               float *relative_v, float Ke) {
  float r1;
  float r2;
  sceVu0FVECTOR tmp;
  sceVu0FVECTOR v;
  sceVu0FVECTOR v1;
}

u_char acsCheckCollisionTube(/* s3 19 */ TUBE *tube, float *current,
                             float *relative_v, float Ke) {
  sceVu0FVECTOR dir0;
  sceVu0FVECTOR dir1;
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
  sceVu0FVECTOR n;
  sceVu0FVECTOR PL;
  sceVu0FVECTOR AP;
  sceVu0FVECTOR PA;
  sceVu0FVECTOR P1P0;
  sceVu0FVECTOR normal;
  sceVu0FVECTOR p0;
  sceVu0FVECTOR p1;
  float dist;
  float inner;
  sceVu0FVECTOR n;
  sceVu0FVECTOR v;
  float ydif;
  float rdif;
  u_int axis;
}

void SetLWS2(/* s0 16 */ SgCOORDUNIT *cp, SgCAMERA *camera) {}

void acsInitChodoWork() { u_int i; }

void acsChodoSetWork(/* a0 4 */ u_int furn_id) {
  u_int i;
  u_char acs_no;
}

void acsChodoReleaseWork(/* t0 8 */ u_int furn_id) { u_int i; }

void acsChodoMoveRequest(/* a0 4 */ u_int furn_id) { u_char i; }

void acsChodoMoveStop(/* a0 4 */ u_int furn_id) { u_char i; }

void acsChodoMove(/* s1 17 */ CMOVE_CTRL *mv, u_int *sgd_top) {
  sceVu0FVECTOR p;
  SgCOORDUNIT *cp;
}

void acsChodoMoveKage(/* a0 4 */ SgCOORDUNIT *cp, float *p, CMOVE_CTRL *mv) {}

char acsChodoMoveBird(/* s6 22 */ SgCOORDUNIT *cp, float *p, CMOVE_CTRL *mv) {
  sceVu0FVECTOR pos;
  u_int i;
  u_int all_cnt;
  u_int reaction_cnt;
  char mode;
  sceVu0FVECTOR start;
  sceVu0FVECTOR end;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
}

void acsChodoMoveNingyo(/* -0xe0(sp) */ SgCOORDUNIT *cp, float *p,
                        CMOVE_CTRL *mv) {
  static sceVu0FVECTOR ofs;
  static sceVu0FVECTOR rot[1];
  static sceVu0FVECTOR trans[1];
  u_int id2;
  u_int i;
  sceVu0FVECTOR pos;
  sceVu0FMATRIX m;
  sceVu0FMATRIX m0;
  sceVu0FMATRIX m1;
  sceVu0FVECTOR r1;
  sceVu0FVECTOR r2;
  sceVu0FMATRIX s;
}

char acsChodoMoveKaidan(/* s5 21 */ SgCOORDUNIT *cp, float *p1,
                        CMOVE_CTRL *mv) {
  static sceVu0FVECTOR p;
  static sceVu0FVECTOR v;
  static float a;
  static float Ke;
  static float Kd;
  static float dv;
  static sceVu0FVECTOR start;
  static char cnt;
  float earth;
  static float r;
  char se_flg;
  float dr;
  sceVu0FVECTOR tmp;
  sceVu0FVECTOR sub;
}

void SetSpeFurnLight(/* s2 18 */ FURN_WRK *furn) {
  u_int *lit_dat;
  int room_no;
  static SgLIGHT lights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
  sceVu0FVECTOR ambient;
  u_int num;
  LIGHT_PACK *light_pack;
  float *v1;
  float *v1;
  float *v1;
}

void motInitPlayerAnm(/* a0 4 */ char mdl_no) {}
void motInitEnemyAnm(/* a0 4 */ u_int *anm_p, u_int mdl_no, u_int anm_no) {}

void motInitOneEnemyAnm(/* s2 18 */ u_int *anm_p, u_int mdl_no, u_int anm_no) {
  ANI_CTRL *ani_ctrl;
  u_int *mdl_p;
}

void motInitMultiEnemyAnm(/* s4 20 */ u_int *anm_p, u_int mdl_no, u_int anm_no,
                          u_int num) {
  u_int i;
}

void motInitEnemyMdl(/* a0 4 */ u_int *mdl_p, u_int mdl_no) {}

void motInitOneEnemyMdl(/* s2 18 */ u_int *mdl_p, u_int mdl_no) {
  u_int i;
  u_int pack_num;
  u_int *top;
}

void motInitMultiEnemyMdl(/* s2 18 */ u_int *mdl_addr, u_int mdl_no) {
  u_int i;
  u_int mdl_num;
}

void motInitFlyMdl(/* a0 4 */ u_int *mdl_p, u_int mdl_no) {}

void motInitMultiFlyMdl(/* s2 18 */ u_int *mpk_p, u_int mdl_no) {
  u_int i;
  u_int mdl_num;
}

void motInitOneFlyMdl(/* v1 3 */ u_int *sgd_p, u_int mdl_no) {}
static void motInitClearAniCtrl(/* a0 4 */ ANI_CTRL *ani_ctrl) {}

u_int *motInitAniCtrl(/* s2 18 */ ANI_CTRL *ani_ctrl, u_int *anm_p,
                      u_int *mdl_p, u_int *pkt_p, u_int mdl_no, u_int anm_no) {
  u_int *top;
  u_int i;
  u_int pack_num;
  MIME_DAT *mim_dat;
  MIME_DAT *mim_bg;
  u_int num;
}

u_int *motInitMotCtrl(/* s1 17 */ MOT_CTRL *m_ctrl, u_int *mot_addr,
                      u_int *rst_addr) {
  u_short i;
  u_int *tale_addr;
}

void motSetCoordCamera(/* s2 18 */ ANI_CTRL *ani_ctrl) {
  float sub;
  float rot;
  MOT_CTRL *m_ctrl;
}

u_char motSetCoord(/* s4 20 */ ANI_CTRL *ani_ctrl, u_char work_id) {
  MOT_CTRL *m_ctrl;
  u_char ani_end;
  ANI_CTRL tmp;
  u_int frame_num;
  u_int interp_cnt;
}

static void motInitNewMotion(/* s0 16 */ ANI_CTRL *ani_ctrl) {
  MOT_CTRL *m_ctrl;
}

static u_char motAddFrame(/* a1 5 */ MOT_CTRL *m_ctrl) {}
u_int motGetNowFrame(/* s0 16 */ MOT_CTRL *m_ctrl) {}
void ReqPlayerAnime(/* s3 19 */ u_char flame) {}

void ReqEnemyAnime(/* a0 4 */ u_char work_no, u_char flame) {
  ENE_WRK *e_work;
  ANI_CTRL *ani_ctrl;
}

void motSetAnime(/* s0 16 */ ANI_CTRL *ani_ctrl, ANI_CODE **tbl, int req_no) {}

void *GetFileInPak(/* a0 4 */ void *pak_head, int num) {
  int file_num;
  int file_size;
  int i;
  char *fp;
}

void *GetPakTaleAddr(/* a0 4 */ void *pak_head) {
  int file_num;
  int file_size;
  int i;
  char *fp;
}

void GetMdlNeckPos(/* t2 10 */ float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
  u_short id;
  static sceVu0FVECTOR p;
}

u_int GetMdlBonePos(/* s0 16 */ sceVu0FVECTOR *pos, u_char work_no) {
  HeaderSection *hs;
  u_int i;
  float *v0;
  float *v1;
}

void GetMdlWaistPos(/* a0 4 */ float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
  float *v1;
}

void GetMdlLegPos(/* a0 4 */ float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
  float *v1;
}

void GetMdlShldPos(/* a0 4 */ float *pos, ANI_CTRL *ani_ctrl, u_char lr) {
  float *v1;
}

void GetPlyrFootPos(/* a0 4 */ float *pos, ANI_CTRL *ani_ctrl, u_char lr) {
  float *v1;
}

void GetPlyrAcsLightPos(/* a0 4 */ float *pos, ANI_CTRL *ani_ctrl) {
  static sceVu0FVECTOR p;
}

void GetToushuKatanaPos(/* a0 4 */ float *p0, float *p1, ANI_CTRL *ani_ctrl) {
  static sceVu0FVECTOR ofs0;
  static sceVu0FVECTOR ofs1;
}

u_short GetPlyrFtype() {}

void motInitInterpAnime(/* s2 18 */ ANI_CTRL *ani_ctrl, int flame) {
  int args[1];
  ANI_CODE *ap;
  MOT_CTRL *m_ctrl;
}

static void motSetInterpMatrix(/* a0 4 */ ANI_CTRL *ani_ctrl,
                               sceVu0FMATRIX *start, sceVu0FMATRIX *end) {
  HeaderSection *hs;
  sceVu0FMATRIX m0;
  sceVu0FMATRIX m1;
  MOT_CTRL *m_ctrl;
  u_int i;
  float *m0[1];
  float *m0[1];
}

static void motInterpAnm(/* a0 4 */ ANI_CTRL *ani_ctrl, sceVu0FMATRIX *start,
                         sceVu0FMATRIX *end) {
  short int i;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR trans;
  sceVu0FVECTOR scale;
  sceVu0FMATRIX m0;
  sceVu0FMATRIX m1;
  sceVu0FMATRIX interp;
  HeaderSection *hs;
  SgCOORDUNIT *coord;
  float rate;
  MOT_CTRL *m_ctrl;
}

void motInterpMatrix(/* s4 20 */ float *interp[1], float *m0[1], float *m1[1],
                     float rate) {
  short int i;
  sceVu0FMATRIX m;
  sceVu0FVECTOR v;
  float r;
  float cos;
  float sin;
  float val;
}

void motMatrix2Quaternion(/* s3 19 */ float *q, float *m[1]) {
  float tr;
  float s;
  int i;
  int j;
  int k;
  int nxt[1];
}

void motQuaternion2Matrix(/* a0 4 */ float *m[1], float *q) {
  float wx;
  float wy;
  float wz;
  float xx;
  float yy;
  float yz;
  float xy;
  float xz;
  float zz;
  float x2;
  float y2;
  float z2;
}

void motQuaternionSlerp(/* s2 18 */ float *q, float *q1, float *q2,
                        float rate) {
  sceVu0FVECTOR ret;
  float cosom;
}

void LocalRotMatrixX(/* s1 17 */ float *m0[1], float *m1[1], float rx) {
  sceVu0FMATRIX rot;
}

void LocalRotMatrixY(/* s1 17 */ float *m0[1], float *m1[1], float ry) {
  sceVu0FMATRIX rot;
}

void LocalRotMatrixZ(/* s1 17 */ float *m0[1], float *m1[1], float rz) {
  sceVu0FMATRIX rot;
}

void motInversKinematics(SgCOORDUNIT *cp, float *target, u_int *top_addr,
                         u_char bone_id) {
  u_int parent_id;
  sceVu0FVECTOR end_eff;
  sceVu0FVECTOR root;
  sceVu0FVECTOR end_root;
  sceVu0FVECTOR target_root;
  float inner;
  sceVu0FMATRIX m;
  float r;
  float dist;
  sceVu0FVECTOR raxis;
}

static u_int movGetFrameNum(/* a0 4 */ u_int *mov_p) {}
static float movGetMaxval(/* a0 4 */ u_int *mov_p) {}

void movGetMoveval(/* a0 4 */ ANI_CTRL *ani_ctrl, u_int frame_num) {
  float dist;
  float height;
  u_int *mov_p;
  u_int playnum;
  float *p1;
}

static u_int motGetBoneNum(/* a0 4 */ u_int *mot_p) {}
static u_int motGetTransBoneNum(/* a0 4 */ u_int *mot_p) {}
static u_int motGetFrameNum(/* a0 4 */ u_int *mot_p) {}
static u_int motGetSIFrameNum(/* a0 4 */ u_int *mot_p) {}
static u_int motGetInterpFrameNum(/* a0 4 */ u_int *mot_p) {}
static u_int *motGetRstBuffer(/* a0 4 */ u_int *mot_p) {}
static u_int motCheckRstFull(/* a0 4 */ u_int *mot_p) {}
static u_int motCheckTransCut(/* a0 4 */ u_int *mot_p) {}
static u_int motCheckIncludeRstPacket(/* a0 4 */ u_int *mot_p) {}

static void motAddressMapping(/* s0 16 */ u_int *top_addr) {
  MOT_ADDR_TABLE *tbl_p;
  u_int i;
  u_int frame_num;
}

static u_int *motGetFrameDataAddr(/* s0 16 */ u_int *top_addr, u_int frame) {
  u_int *addr;
}

static void motGetFrameData(/* a0 4 */ RST_DATA *rst, u_int *top_addr,
                            u_int frame) {}

static void motGetFrameDataRST(/* s2 18 */ RST_DATA *rst, u_int *top_addr,
                               u_int frame) {
  u_int i;
  u_int bone_num;
  float *pkt;
}

static void motGetFrameDataRT(/* s1 17 */ RST_DATA *rst, u_int *top_addr,
                              u_int frame, u_int init_flg) {
  u_int i;
  u_int bone_num;
  float *pkt;
}

static u_int motGetTransId(/* a0 4 */ u_int *top_addr, u_int id) {}
static u_int motGetParentId(/* a0 4 */ u_int *top_addr, u_int id) {}

void motSetHierarchy(/* s3 19 */ SgCOORDUNIT *coord, u_int *top_addr) {
  u_int i;
  u_int bone_num;
  u_int parent_id;
}

u_int *SceneInitAnime(/* s1 17 */ ANI_CTRL *ani_ctrl, u_int *mdl_p,
                      u_int *mot_p, u_int *mim_p, u_int *pkt_p, u_int mdl_no) {
  MIME_DAT *mim_dat;
  u_int i;
}

u_int *SceneInitOtherAnime(/* s1 17 */ ANI_CTRL *ani_ctrl, u_int *mdl_p,
                           u_int *mot_p, u_int *mim_p, u_int *pkt_p) {
  MIME_DAT *mim_dat;
  u_int i;
}

void motSetCoordFrame(/* s2 18 */ ANI_CTRL *ani_ctrl, u_int frame) {
  MOT_CTRL *m_ctrl;
  u_int data_no;
}

void SceneSetCoordFrame(/* a0 4 */ ANI_CTRL *ani_ctrl, u_int frame,
                        u_int type) {
  u_int i;
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  static RST_DATA rst[1];
}

void motSetInvMatrix(/* s5 21 */ float *m1[1], float *m0[1]) {
  u_int i;
  sceVu0FMATRIX rot;
  sceVu0FMATRIX scale;
  sceVu0FMATRIX trans;
  sceVu0FVECTOR inv_inner;
}

u_int *motAlign128(/* a0 4 */ u_int *addr) { u_int tmp; }

void motPrintVector(/* a0 4 */ char *str, float *vec) {}

void sceRotMatrixXYZ(/* s1 17 */ float *m0[1], float *m1[1], float *rot) {
  sceVu0FMATRIX mat;
}

void motAniCodeClearBuf(/* a0 4 */ ANI_CTRL *ani_ctrl) { u_int i; }

void motAniCodeSetBuf(/* a0 4 */ ANI_CTRL *ani_ctrl, ANI_CODE code) { u_int i; }

u_char motAniCodeRead(/* a0 4 */ ANI_CTRL *ani_ctrl) {
  ANI_CODE_CTRL *c_ctrl;
  int args[1];
}

void motAniCodeExec(/* a0 4 */ ANI_CTRL *ani_ctrl, ANI_CODE code, int *args) {}

void motAniTimerCodeExec(/* s1 17 */ ANI_CTRL *ani_ctrl) { int args[1]; }

int motAniCodeIsEnd(/* a0 4 */ ANI_CODE code) { int args[1]; }

void GetAniCodeArgs(/* a0 4 */ ANI_CODE code, int *args) {}
void motAniCodeReadCTRL(/* a0 4 */ ANI_CTRL *ani_ctrl, int *args) {}
void motAniCodeReadTIMER(/* a0 4 */ ANI_CTRL *ani_ctrl, int *args) {}

void motAniCodeReadMOT(/* s0 16 */ ANI_CTRL *ani_ctrl, int *args) {
  MOT_CTRL *m_ctrl;
}

void motAniCodeReadMIM(/* s0 16 */ ANI_CTRL *ani_ctrl, int *args) {}

void motAniCodeReadSE(/* s0 16 */ ANI_CTRL *ani_ctrl, int *args) {
  sceVu0FVECTOR pos;
}

void motAniCodeReadDOOR(/* a1 5 */ ANI_CTRL *ani_ctrl, int *args) {}

void motAniCodeReadEFCT(/* s1 17 */ ANI_CTRL *ani_ctrl, int *args) {
  sceVu0FVECTOR pos;
}

u_char motGetNextMotion(/* a0 4 */ ANI_CTRL *ani_ctrl) {
  ANI_CODE_CTRL *c_ctrl;
  int args[1];
}

void objInit() {
  static int bufid;
  static qword p3_buf[1][1];
  qword *base3;
}

void objFlush() {}

void scePP13_Sync() {
  static int fr;
  static int count;
  static int odev;
}

void scePP1_Kick(/* s0 16 */ void *addr) { sceDmaChan *chVif1; }

void scePP3_Kick(/* s1 17 */ u_int *addr, int qwc) {
  static sceDmaTag tag[1][1];
  static int tid;
  sceDmaTag *tp;
  sceDmaChan *chGif;
  void *addr;
  int qwc;
  void *addr;
  int qwc;
  void *addr;
}

int scePP1_Disp(/* a0 4 */ u_int mode) {}
int scePP1_Init(/* a0 4 */ u_int mode) {}
int scePP1_End(/* a0 4 */ u_int mode) {}

void MappingVUVNData(/* a0 4 */ u_int *intpointer, HeaderSection *hs) {
  int i;
  VUVN_PRIM *vh;
  PHEAD *ph;
  sceVu0FVECTOR *vp;
  sceVu0FVECTOR *np;
}

void MappingVUVNDataPreset(/* a0 4 */ u_int *intpointer, int mtype, int gloops,
                           int hsize) {}

void MappingTYPE0(/* a0 4 */ int gloops, u_int *prim) {
  int j;
  int loops;
}

int MappingTYPE2(/* a0 4 */ int gloops, u_int *prim) {
  int j;
  int loops;
  int hsize;
}

void MappingMeshData(/* a0 4 */ u_int *intpointer, u_int *vuvnprim,
                     HeaderSection *hs) {
  int mtype;
  int gloops;
  int hsize;
  static u_int *old_mesh_p;
}

void MappingCoordinateData(/* a0 4 */ u_int *intpointer, HeaderSection *hs) {}

void MappingVertexList(/* t1 9 */ VERTEXLIST *vli, PHEAD *ph) {
  int i;
  int size;
  int vnnum;
}

void SgMapRebuld(/* v0 2 */ void *sgd_top) {
  u_int *prim;
  u_int *nextprim;
}

void SgMapUnit(/* a0 4 */ void *sgd_top) {
  int i;
  int j;
  int size;
  u_int *intpointer;
  u_int *nextprim;
  u_int *pk;
  u_int *vuvnprim;
  HeaderSection *hs;
  SgMaterial *matp;
  u_int *phead;
}

u_int *GetPrimitiveAddr(/* a0 4 */ void *sgd_top, int num) {
  int blocks;
  u_int *pk;
}

u_int *GetStartPacketAddr(/* a0 4 */ void *sgd_top, int num) {
  int blocks;
  u_int *pk;
}

u_int *GetEndPacketAddr(/* a0 4 */ void *sgd_top, int num) {
  u_int *pk;
  u_int *pkback;
}

void PostChainPacket(/* a0 4 */ u_int *dest, u_int *source) {}
int GetModelKind(/* a0 4 */ void *sgd_top) {}

void SgSetTEX1Prim(/* t0 8 */ u_int *prim, sceGsTex1 *ptex1) {
  u_int *mesh_prim;
  int i;
  int hsize;
}

void SgSetTEX1(/* s2 18 */ void *sgd_top, sceGsTex1 *ptex1) { int i; }

void _GetNormalVectorFromVector(/* a0 4 */ float *norm, float *p0, float *p1) {}
void WaitVU1() {}
float _TransPPower(/* f12 50 */ float scale) {}
float _TransSPower(/* f12 50 */ float scale) {}

void Set12Register() { sceVu0FVECTOR vf[1]; }

void SetVF2Register(/* a0 4 */ float *vf2reg) {}
void GetVF2Register(/* a0 4 */ float *vf2reg) {}
void printVector(/* s0 16 */ float *v) {}
void printVectorC(/* s0 16 */ float *v, char *s) {}

void printMat(/* a0 4 */ float *m0[1]) { int i; }

void printMatC(/* s0 16 */ float *m0[1], char *s) {}

void printLMatC(/* s0 16 */ float *m0[1], char *str) { int i; }

void SgSetWsMtx(/* a0 4 */ float *m0[1]) {}
void SgSetClipMtx(/* a0 4 */ float *m0[1]) {}
void SgSetClipVMtx(/* a0 4 */ float *m0[1]) {}
void SgSetWorkBase(/* a0 4 */ qword *base) {}
qword *SgGetWorkBase() {}

void SgSetProjection(/* f12 50 */ float scrz) { sceVu0FVECTOR tmp; }

float SgGetProjection() { sceVu0FVECTOR tmp; }

void SgInit3D() {
  u_int prim[1];
  SgSourceChainTag ftag;
}

void GetMatrixFromQuaternion(/* a0 4 */ float *quat[1], float *qvert) {
  sceVu0FMATRIX rmat;
  sceVu0FMATRIX lmat;
}

void GetMatrixRotateAxis(/* s1 17 */ float *quat[1], float *axis, float theta) {
  sceVu0FVECTOR qvert;
  float theta2;
}

float SgSinf(/* f1 39 */ float rad) {
  float rad;
  float rad;
}

float SgCosf(/* f12 50 */ float rad) {}

float SgSinfd(/* f1 39 */ float degree) {
  float degree;
  float rad;
}

float SgCosfd(/* f12 50 */ float degree) {}
float SgACosf(/* f20 58 */ float ccos) {}
static void GetATanf(/* a0 4 */ sceVu0FVECTOR *tmpv) {}

float SgAtanf(/* f12 50 */ float x) { sceVu0FVECTOR tmpv[1]; }

float SgAtan2f(/* f12 50 */ float y, float x) { float rad; }

float SgSqrtf(/* f12 50 */ float len) {}
float SgRSqrtf(/* f12 50 */ float len) {}
static void GetSgCalclen(/* a0 4 */ float *tmpv) {}

float SgCalcLen(/* f12 50 */ float x, float y, float z) { sceVu0FVECTOR tmpv; }

float _CalcLen(/* a0 4 */ float *v0, float *v1) { sceVu0FVECTOR tmpv; }

void _MulRotMatrix(/* a0 4 */ float *ans[1], float *m0[1], float *m1[1]) {}
void _MulMatrix(/* a0 4 */ float *ans[1], float *m0[1], float *m1[1]) {}
void _SetMulMatrix(/* a0 4 */ float *m0[1], float *m1[1]) {}
void _CalcLenASM(/* a0 4 */ float *out, float *v0, float *v1) {}
void _NormalizeVector(/* a0 4 */ float *v, float *v0) {}
void _NormalizeVector2(/* a0 4 */ float *v, float *v0) {}
void _ApplyRotMatrix(/* a0 4 */ float *v0, float *v1) {}
void _ApplyMatrixXYZ(/* a0 4 */ float *v0, float *m[1], float *v1) {}

void _AddColor(/* a0 4 */ float *v) {}
void SgSuDebugOn() {}
void SgSuDebugOff() {}
void SetDebugSign(/* a0 4 */ int num) {}

void PutDebugSign() {
  static int frame;
  qword *pedraw_buf;
}

void SgSetVNBuffer(/* a0 4 */ sceVu0FVECTOR *vnarray, int size) {}

int CheckCoordCache(/* t4 12 */ int cn) { int i; }

void SetVU1Header() {
  sceVu0FVECTOR *svec;
  sceVu0FVECTOR *dvec;
  int i;
  float *v0;
  float *v1;
}

void CalcVertexBuffer(/* a0 4 */ u_int *prim) {
  int i;
  int j;
  sceVu0FVECTOR *vpd;
  sceVu0FVECTOR *vps;
  VERTEXLIST *vli;
  float *m0[1];
  float *m0[1];
  float *dp;
  float *v;
  float *m0[1];
  float *m0[1];
  float *dp;
  float *v;
}

u_int *SetVUVNData(/* t1 9 */ u_int *prim) {
  int i;
  VUVN_PRIM *vh;
  sceVu0FVECTOR *vp;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
}

u_int *SetVUVNDataPost(/* t0 8 */ u_int *prim) {
  int i;
  VUVN_PRIM *vh;
  sceVu0FVECTOR *vp;
  sceVu0FVECTOR tmpvec;
  char *cn;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
  float *m0[1];
  float *m0[1];
  float *dp;
  float *n;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
  float *m0[1];
  float *m0[1];
  float *dp;
  float *n;
  sceVu0FVECTOR *vb;
  float *s0;
  float *s1;
}

void printTEX0(/* s0 16 */ sceGsTex0 *tex0) {}

void SetVUMeshData(/* s0 16 */ u_int *prim) {
  int mtype;
  u_int *read_p;
}

void SetVUMeshDataPost(/* s0 16 */ u_int *prim) {
  int mtype;
  u_int *read_p;
}

void SetCoordData(/* s3 19 */ u_int *prim) {
  int j;
  float abs;
  SgCOORDUNIT *llp;
  float *m0[1];
  float *m1[1];
}

void SgSortUnitPrim(/* s0 16 */ u_int *prim) {}
void SgSortUnitPrimPost(/* s0 16 */ u_int *prim) {}

void SgSortPreProcess(/* s0 16 */ u_int *prim) {
  static u_int *old_pointer;
  static sceDmaTag tag[1][1];
  static sceDmaTag *tp;
  static qword base[1];
  static qword base3[1];
  static qword *base2;
}

void AppendVUProgTag(/* s0 16 */ u_int *prog) {}

void LoadSgProg(/* s0 16 */ int load_prog) {
  static u_int pk[1];
  static SgSourceChainTag starttag;
}

void SetUpSortUnit() { u_int *datap; }

void SgSortUnit(/* s0 16 */ void *sgd_top, int pnum) {
  int i;
  u_int *pk;
}

void SgSortUnitKind(/* a0 4 */ void *sgd_top, int num) {}
void _SetLWMatrix0(/* a0 4 */ float *m0[1]) {}
void _SetLWMatrix1(/* a0 4 */ float *m0[1]) {}
void _SetRotTransPersMatrix(/* a0 4 */ float *m0[1]) {}
void _CalcVertex(/* a0 4 */ float *dp, float *v, float *n) {}
void _vfito0(/* a0 4 */ int *v0) {}

void SetBlackWhiteCLUT() {}
void ClearBlackWhiteCLUT() {}
void SendDmaON() {}
void SendDmaOFF() {}
void ClearDMATrans() {}
void CheckDMATrans() {}
void CheckDmaSync() {}

static void FlushBuffer() { int i; }

void FlushModel(/* a0 4 */ int signal) {}

void AppendDmaTag(/* a0 4 */ u_int addr, int size) { SgSourceChainTag *ptag; }

void AppendDmaBuffer(/* a0 4 */ int size) { SgSourceChainTag *ptag; }

void AppendDmaTagCall(/* a0 4 */ u_int next_tag_addr) {
  SgSourceChainTag *ptag;
}

void AppendDmaTagNextRet(/* a0 4 */ void *tag_addr) {}

void AppendDmaBufferFromEndAddress(/* a0 4 */ qword *end_adr) {
  int size;
  int tmp;
  SgSourceChainTag *ptag;
}

void ClearTextureCache() {}
void PushTextureCache() {}
void PopTextureCahche() {}
void SgSetPacketBuffer(/* a0 4 */ void *packet_buffer, int packet_size,
                       void *tag_buffer, int tag_num) {}
void SetDmaScratch() {}
void SetDmaBSS() {}
void InitialDmaBuffer() {}
void GsImageProcess(/* a0 4 */ u_int *prim) {}
void SgTEXTransEnable() {}
void SgTEXTransDisenable() {}

void LoadTRI2Files(/* s1 17 */ u_int *prim) {
  int i;
  int pads;
  int tnum;
  int tri2size;
}

void RebuildTRI2Files(/* s0 16 */ u_int *prim) {
  u_int next_pointer;
  int tnum;
  int pads;
  int tri2size;
  int i;
  u_int maxaddr;
  u_int minaddr;
  u_int maxtbp;
  u_int *search_addr;
  u_int *start_vif_code;
  u_int *fprim;
  u_int tbp;
  u_int tbw;
  u_int psm;
  u_int tsize;
  u_int vtsize;
  qword *base;
  sceGsStoreImage spi;
}

TextureAnimation *GetTextureAnimation(/* a0 4 */ void *sgd_top) { u_int *prim; }

void LoadTextureAnimation(/* a2 6 */ u_int *prim) {
  TextureAnimation *pta;
  int i;
  int tnum;
  int tri2size;
}

void SgPreRenderDbgOn() {}
void SgPreRenderDbgOff() {}

void QueSetMatrix(/* s1 17 */ float *m[1], int que, float *v) {
  sceVu0FVECTOR tmpv;
}

void QueSetMatrixNonNormalized(/* a0 4 */ float *m[1], int que, float *v) {}
void SgSetAmbient(/* a0 4 */ float *ambient) {}

void SgSetDefaultLight(/* a0 4 */ float *eye, SgLIGHT *p0, SgLIGHT *p1,
                       SgLIGHT *p2) {
  sceVu0FVECTOR nl;
  sceVu0FVECTOR tmpv;
  SgLIGHT *po[1];
  int i;
  float *v1;
  float *v1;
}

static void _SetColorMtx(/* a0 4 */ float *dc[1], float *sc[1], float *am,
                         float *v) {}
void _ReadDLightMtx(/* a0 4 */ float *tmp[1]) {}
static void _ReadSLightMtx(/* a0 4 */ float *tmp[1]) {}
void _ReadDColor(/* a0 4 */ float *tmp[1]) {}
static int Tim2CalcBufWidth(/* a0 4 */ int psm, int w) {}

int GetDecay() { u_int tmp; }

static void SetDecay(/* a0 4 */ u_int decay) {
  int count;
  u_int decay;
}

float SetMaxColor255(/* a0 4 */ float *dcol, float *col) { float div; }

void SetBWLight(/* a0 4 */ float *col) { float bwcolor; }

void SetMaterialPointer() {}

void ClearMaterialCache(/* a0 4 */ HeaderSection *hs) { int i; }

void SetMaterialDataVU(/* s2 18 */ u_int *prim) {
  static int old_tag_buf;
  qword *base;
  SgMaterialC *pmatC;
  static SgMaterialC *old_pmatC;
  int i;
  int qwc;
}

void SetMaterialPointerCoord() {}
void SetMaterialPointerCoordVU() {}

void SetMaterialDataPrerender() { float *amb; }

void SetMaterialData(/* a0 4 */ u_int *prim) {
  int i;
  int j;
  SgMaterialC *pmatC;
  sceVu0FVECTOR *dvec;
  float max_color;
  float *v;
  float *v1;
  float *v;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float sc;
  float *v;
  float *v0;
  float *v0;
  float *v1;
  float sc;
  float *v;
  float *v0;
  float *v0;
  float *v1;
  float sc;
  float *v;
  float *v;
  SgPOINTGROUP *ppg;
  float *v;
  float *v0;
  float *v1;
  float sc;
  float *v;
  float *v0;
  float *v0;
  float *v1;
  float sc;
  SgSPOTGROUP *spg;
  float *v;
  float *v0;
  float *v1;
  float sc;
  float *v;
  float *v0;
  float *v0;
  float *v1;
  float sc;
}

static void _SetDLight(/* a0 4 */ float *m0[1]) {}
static void _SetSLight(/* a0 4 */ float *m0[1]) {}

void SetPointGroup() {
  int i;
  int gnum;
  int gcount;
  SgLIGHT *TmpLight;
  SgPOINTGROUP *TmpGroup;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetSpotGroup(/* fp 30 */ float *wlmtx[1]) {
  int i;
  int gnum;
  int gcount;
  sceVu0FVECTOR dtmp;
  sceVu0FVECTOR stmp;
  SgLIGHT *TmpLight;
  SgSPOTGROUP *TmpGroup;
  float *v0;
  float *v1;
  float *v0;
  float *v;
  float *v;
  float *v;
  float *v;
  float *v;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *m0[1];
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SetLightData(/* a0 4 */ SgCOORDUNIT *cp0, SgCOORDUNIT *cp1) {
  int i;
  sceVu0FMATRIX tmp;
  sceVu0FMATRIX tmp2;
  sceVu0FVECTOR tmpv;
  sceVu0FVECTOR tmpv2;
  sceVu0FVECTOR scale;
  float *m0[1];
  float *m0[1];
}

void SgSetInfiniteLights(/* a0 4 */ float *eye, SgLIGHT *lights, int num) {}

void SgSetPointLights(/* a0 4 */ SgLIGHT *lights, int num) { int i; }

void SgSetSpotLights(/* a0 4 */ SgLIGHT *lights, int num) { int i; }

void PushLight() {
  sceVu0FVECTOR eye;
  float *v0;
}

void PopLight() {
  sceVu0FVECTOR eye;
  float *v1;
}

void ClearLightStack() {}
static void _CalcPointA(/* a0 4 */ float *grc[1], float *grm, float *len) {}
static void _CalcPointB(/* a0 4 */ float *len) {}

void CalcPointLight() {
  sceVu0FVECTOR len;
  static float max_len;
}

void CalcSpotLight() {
  float *cdata[1];
  float *mdata;
}

void SgReadLights(/* s0 16 */ void *sgd_top, void *light_top, float *Ambient,
                  SgLIGHT *Ilight, int imax, SgLIGHT *Plight, int pmax,
                  SgLIGHT *Slight, int smax) {
  int num;
  int i;
  u_int *prim;
  u_int *pk;
  sceVu0FVECTOR *pvec;
  sceVu0FVECTOR interest;
  sceVu0FVECTOR tmpvec;
  SgCOORDUNIT *cp;
  float scale;
  float *v0;
  float *v0;
  float *v0;
  float *v;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v0;
  float *v1;
  float *v1;
  float *v1;
  float *v0;
  float *v1;
  float *v1;
  float *v0;
  float *v1;
}

u_int *GetNextUnpackAddr(/* a0 4 */ u_int *prim) {}

void SetPreRenderTYPE0(/* fp 30 */ int gloops, u_int *prim) {
  int i;
  int j;
  int loops;
  float *vp;
  sceVu0FVECTOR normal;
  sceVu0FVECTOR vertex;
  sceVu0FVECTOR first;
  sceVu0FVECTOR pcol;
}

void SetPreRenderTYPE2(/* -0xb0(sp) */ int gloops, u_int *prim) {
  int i;
  int j;
  int loops;
  float *vp;
  sceVu0FVECTOR normal;
  sceVu0FVECTOR vertex;
  sceVu0FVECTOR first;
  sceVu0FVECTOR pcol;
}

void SetPreRenderTYPE2F(/* -0xb0(sp) */ int gloops, u_int *prim) {
  int i;
  int j;
  int loops;
  float *vp;
  float *np;
  sceVu0FVECTOR normal;
  sceVu0FVECTOR vertex;
  sceVu0FVECTOR first;
  sceVu0FVECTOR pcol;
}

void SetPreRenderMeshData(/* a1 5 */ u_int *prim) {
  int gloops;
  int mtype;
}

static void _SetSpotPos(/* a0 4 */ float *pos, float *dir) {}
static float _SpotInnerProduct(/* a0 4 */ float *bpos) {}

void SelectLight(/* a2 6 */ u_int *prim) {
  SgLIGHT *TmpLight;
  sceVu0FVECTOR *pvec;
  sceVu0FVECTOR minvec;
  sceVu0FVECTOR maxvec;
  sceVu0FVECTOR ominvec;
  sceVu0FVECTOR omaxvec;
  sceVu0FVECTOR *tmpvec;
  sceVu0FVECTOR plain;
  sceVu0FVECTOR interest;
  float maxpower[1];
  float colscale;
  float spotdir;
  float spotvalue[1];
  int maxnum[1];
  int i;
  int j;
  int k;
  float *v;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *m0[1];
  float *v0;
  float *v1;
  float *v1;
  float *v1;
  float ret;
  float *v0;
  float ret;
  float *v1;
  float ret;
}

void SgPreRenderPrim(/* s0 16 */ u_int *prim) { float *m1[1]; }

void SgPreRender(/* s2 18 */ void *sgd_top, int pnum) {
  int i;
  u_int *pk;
}

void ClearPreRenderMeshData(/* a0 4 */ u_int *prim) {
  int i;
  int j;
  int loops;
  int gloops;
  int mtype;
  sceVu0FVECTOR first;
}

void SgClearPreRenderPrim(/* s0 16 */ u_int *prim) {}

void SgClearPreRender(/* s2 18 */ void *sgd_top, int pnum) {
  int i;
  u_int *pk;
}

void SgSuPDbgOn() {}
void SgSuPDbgOff() {}

void DispMicroMemory() { u_int *read_p; }

void DispVUMemory() { u_int *read_p; }

void DrawBoundingBox(/* s0 16 */ sceVu0FVECTOR *box) {
  int i;
  int j;
  int qwc;
  u_int *datap;
  u_int *startp;
  static char boxmesh[1];
  float *v0;
  float *v1;
}

void SetVUMeshDataP(/* s0 16 */ u_int *prim) {
  int mtype;
  u_int *datap;
}

int BoundingBoxCalcP(/* s0 16 */ u_int *prim) {
  float *m1[1];
  float *m1[1];
}

void SgSortUnitPrimP(/* s0 16 */ u_int *prim) {}

void SgSortPreProcessP(/* s0 16 */ u_int *prim) {
  static u_int *old_pointer;
  static sceDmaTag tag[1][1];
  static sceDmaTag *tp;
  static qword base[1];
  static qword base3[1];
  static qword *base2;
}

void SgSortUnitP(/* s0 16 */ void *sgd_top, int pnum) {
  int i;
  u_int *pk;
}

u_int *GetModelGroupPacket(/* a0 4 */ void *sgd_top) { u_int *prim; }

void SgSortGroupP(/* s0 16 */ void *sgd_top, int gnum) {
  int i;
  int groups;
  u_int *pk;
  ModelGroup *mgp;
}

void SetViewScreenClipMatrix(/* s0 16 */ SgCAMERA *camera, float scrz) {
  float az;
  float cz;
  float gsx;
  float gsy;
  float gsxv;
  float gsyv;
  float rscrz;
  float zmin;
  float zmax;
  float farz;
  float nearz;
  sceVu0FMATRIX mt;
}

void SgSetRefCamera(/* s0 16 */ SgCAMERA *camera) {
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX clip_screen;
  float scrz;
}

void SetViewScreenClipMatrixOrtho(/* s0 16 */ SgCAMERA *camera, float scrz) {
  float az;
  float cz;
  float zmin;
  float zmax;
  float farz;
  float nearz;
  sceVu0FMATRIX mt;
}

void SgSetRefCameraOrtho(/* s0 16 */ SgCAMERA *camera) {
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX clip_screen;
  float scrz;
}

void SetClipValue(/* f12 50 */ float minx, float maxx, float miny, float maxy) {
}
void printClipValue() {}

int BoundClip(/* a0 4 */ float *ed, float *v) { int ret; }

int BoundClipQ(/* a0 4 */ float *ed, float *v0, float *v1) { int ret; }

void printBoundingBox(/* s0 16 */ u_int *prim) { sceVu0FVECTOR tmpvec[1]; }

int ClipCheck(/* a0 4 */ sceVu0FVECTOR *vec) {}

int CheckBoundingBox(/* s5 21 */ u_int *prim) {
  sceVu0FVECTOR *pvec;
  sceVu0FVECTOR *tmpvec;
  int i;
  int clip1;
  int xmax_flg;
  int xmin_flg;
  int ymin_flg;
  int ymax_flg;
  float *lw[1];
  float *m0[1];
  float *v1;
}

int CheckBoundingBoxEdge(/* s1 17 */ u_int *prim) {
  sceVu0FVECTOR *pvec;
  int clip;
  sceVu0FVECTOR *tmpvec;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void SgSetFog(/* f12 50 */ float min, float max, float near, float far, int r,
              int g, int b) {}
void SgSetWScissorBox(/* f12 50 */ float ax, float ay, float az, float bx,
                      float by, float bz) {}
void _SetMulMatrixBB(/* a0 4 */ float *m0[1], float *m1[1], float *lw[1]) {}

void ShadowDbgOn() {}
void ShadowDbgOff() {}
void ShadowInit() {}
void SetShadowTexSize(/* a0 4 */ u_int width, u_int height) {}
void SetShadowTexAddr(/* a0 4 */ u_int addr) {}
void SetShadowFundamentScale(/* f12 50 */ float size) {}
void SetShadowAssignGroup(/* a0 4 */ int gnum) {}

void TransShadowClut() { static qword shadow_pal[1]; }

void GetShadowTexture() { sceGsStoreImage spi; }

void DispShadowSprite() {
  dword *base;
  sceVu0IVECTOR urp;
  sceVu0IVECTOR dlp;
  float *v0;
  float *v0;
}

void GetInverseMatrix(/* s6 22 */ float *inv[1], float *org[1]) {
  int i;
  sceVu0FVECTOR tmpv;
  sceVu0FMATRIX rot;
  sceVu0FMATRIX scale;
  sceVu0FMATRIX trans;
}

void SetVU1HeaderShadow() {
  sceVu0FVECTOR *svec;
  sceVu0FVECTOR *dvec;
  int i;
  float *v0;
  float *v1;
}

static void _CalcWeightedVertexSM(/* a0 4 */ float *dp, float *v) {}
static void _CalcWeightedVertexBufferSM(/* a0 4 */ float *dp, float *v) {}
static void _CalcVertexSM(/* a0 4 */ float *dp, float *v) {}

void CalcVertexBufferShadow(/* a0 4 */ u_int *prim) {
  int i;
  int j;
  VERTEXLIST *vli;
  sceVu0FVECTOR *vpd;
  sceVu0FVECTOR *vps;
}

u_int *SetVUVNDataShadowModel(/* s2 18 */ u_int *prim) {
  int i;
  VUVN_PRIM *vh;
  sceVu0FVECTOR *vp;
  sceVu0FVECTOR tmpvec;
  char *cn;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void ShadowModelMesh(/* s0 16 */ u_int *prim) {
  int mtype;
  u_int *read_p;
}

void DrawShadowModelPrim(/* s0 16 */ u_int *prim) {
  u_int *read_p;
  float *m0[1];
}

void SetUpShadowModel() {
  u_int *datap;
  float *m0[1];
  float *m0[1];
  float *v0;
  float *v0;
}

void DrawShadowModel(/* s0 16 */ void *sgd_top, int pnum) {
  u_int *pk;
  u_int i;
}

void ShadowMeshDataVU(/* s0 16 */ u_int *prim) {
  int mtype;
  u_int *datap;
}

int ClipCheckShadow(/* a0 4 */ sceVu0FVECTOR *vec, float *cul) {}

int ShadowBoundClip(/* a0 4 */ float *v0, float *v1) { int ret; }

int AppendShadowClipCheck(/* s3 19 */ sceVu0FVECTOR *sts, BoundLine *bl) {
  float bmin;
  float bmax;
  float smin;
  float smax;
  float tmp;
  float tmp2;
  int i;
  int s;
  int e;
  static sceVu0FVECTOR shadowtex[1];
  sceVu0FVECTOR kei;
}

int CheckBoundingBoxShadowTrace(/* s1 17 */ float *lwmtx[1],
                                sceVu0FVECTOR *tmpv, float *dir) {
  int i;
  int clip;
  sceVu0FMATRIX tmpmat;
  static sceVu0FMATRIX clipmtx;
  static BoundLine boundline[1];
  int clip0;
  int clip1;
  int cliparray[1];
  char text[1];
}

int CheckBoundingBoxShadow(/* s0 16 */ u_int *prim) {}

void AssignShadowPrim(/* s0 16 */ u_int *prim) {
  int i;
  int cn;
  sceVu0FVECTOR tmpvec;
  float *m1[1];
}

void AssignShadowPreProcess(/* a0 4 */ u_int *prim) {}

void AssignShadow(/* a0 4 */ void *sgd_top, int except_num) {
  u_int *pk;
  u_int i;
  u_int groups;
  ModelGroup *mgp;
}

void SetUpShadow(/* s0 16 */ ShadowHandle *shandle) {
  u_int *datap;
  dword *base;
  static sceDmaTag tag[1][1];
  static sceDmaTag *tp;
  float *v0;
  float *v1;
}

void ClearShadowFrame() { dword *base; }

void SetShadowEnvironment() { qword *base; }

void GetRotMatrixYZPlain(/* s0 16 */ float *rmat[1], float *vec) {
  sceVu0FVECTOR cvec;
  float xzr;
}

void GetRotMatrixZAxis(/* s0 16 */ float *rmat[1], float *vec) {
  sceVu0FVECTOR cvec;
  float yzr;
}

void CalcShadowMatrix(/* s2 18 */ ShadowHandle *shandle, float *center,
                      float ax, float ay) {
  sceVu0FMATRIX touei;
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX quat;
  sceVu0FVECTOR culplain;
  float culval[1];
  float mincal;
  int i;
}

static void _ftoi0(/* a0 4 */ int *out, float *in) {}

void CalcShadowHeight(/* a0 4 */ sceVu0FVECTOR *bbox) {
  int tmp;
  sceVu0FVECTOR tmpvec;
  sceVu0IVECTOR itmp;
}

void SetShadowCamera(/* s0 16 */ float *center, sceVu0FVECTOR *bbox,
                     SgCOORDUNIT *cp) {
  int i;
  float xmax;
  float ymax;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR *cbbox;
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX quat;
  float *m0[1];
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v1;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v1;
}

void DrawShadow(/* s0 16 */ ShadowHandle *shandle,
                void (*env_func)(/* parameters unknown */)) {
  SgCOORDUNIT oldcoord;
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX quat;
  sceVu0FMATRIX touei;
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR center;
  sceVu0FVECTOR vf2reg;
  HeaderSection *hs;
  static int count;
}

static int MirrorLineClip(/* a0 4 */ float *v0, float *v1) {}
static int GetClipValue() {}

int CheckMirrorModel(/* a0 4 */ void *sgd_top) { u_int *prim; }

void MirrorInterPNode(/* a0 4 */ MNODE *dst, MNODE *inner, MNODE *outer,
                      ClipData *cldata) {
  float alpha;
  float ialpha;
  float *v0;
  float *v1;
}

void SliceMirrorPolygon(/* s4 20 */ MFlipNode *fn, ClipData *cldata) {
  int i;
  int clip;
  int newnodes;
  int currmask;
  int nextmask;
  MNODE *currN;
  MNODE *nextN;
  MNODE *swap;
  MNODE interN;
  MNODE *dst;
  MNODE *src;
  float *v1;
  float *v0;
  float *v0;
  MNODE *dst;
  MNODE *src;
  float *v1;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  float *v1;
}

static void CalcOuterProduct(/* a0 4 */ float *out, int *p0) {}

void CalcScreenMirror(/* a0 4 */ float *vp0, float *vp1, float *vp2,
                      float sgn) {
  int i;
  int allclip;
  qword screen_xyz[1];
  qword *pbase;
  MFlipNode *fn;
  sceVu0FVECTOR out;
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
  static ClipData cldata[1];
  MNODE *nm;
  MNODE *nm;
  MNODE *nm;
  MNODE *nm;
  float *v0;
  float *v0;
  float *v0;
  float *v0;
  int *base;
  int *base;
  float *vp;
}

void AppendLocalMPos(/* a3 7 */ float *vp) {
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

int MakeMirrorEnvironment(/* s1 17 */ u_int *prim) {
  int i;
  int j;
  int loops;
  int gloops;
  int mtype;
  int disp_flg;
  sceVu0FVECTOR cp;
  float sgn;
  float *vp;
  sceVu0FVECTOR vertex;
}

void MirrorPrim(/* s0 16 */ u_int *prim) { float *m1[1]; }

int PreMirrorPrim(/* s4 20 */ SgCAMERA *camera, u_int *prim) {
  sceVu0FMATRIX tmpmat;
  int mir_flag;
  float *m1[1];
}

void MirrorBufferFlush(/* a0 4 */ int tlen) {}

void CalcMirrorMatrix(/* a0 4 */ SgCAMERA *camera) {
  sceVu0FMATRIX quat;
  sceVu0FMATRIX tmpmat;
  sceVu0FMATRIX newws;
  sceVu0FMATRIX newwc;
  sceVu0FMATRIX newwcv;
  sceVu0FVECTOR centerpos;
  sceVu0FVECTOR norm;
  sceVu0FVECTOR milpos[1];
  sceVu0FVECTOR tmpvec;
  sceVu0FVECTOR vaxis;
  sceVu0FVECTOR qvert;
  sceVu0FVECTOR eye;
  float qrot;
  float *v0;
  float *v1;
}

void MirrorDraw(/* s4 20 */ SgCAMERA *camera, void *sgd_top,
                void (*render_func)(/* parameters unknown */)) {
  static sceVu0IVECTOR miccolor;
  qword *pedraw_buf;
  int i;
  int num;
  u_int *pk;
  sceVu0FVECTOR clip_value;
  sceGsScissor bak_scissor;
  sceVu0FVECTOR tmpv;
  float *v0;
  float *v0;
}

void MirrorRender(/* s4 20 */ SgCAMERA *camera,
                  void (*render_func)(/* parameters unknown */)) {
  sceVu0FVECTOR rreg;
  SgCAMERA mir_camera;
}

void MovieInitWrk() {}
void ReqMpegEvent(/* a0 4 */ int no) {}

int PlayMpegEvent() {
  int i;
  int ret;
}

u_int movie(/* s0 16 */ char *name) { static int count; }

void switchThread() {}

static int readMpeg(/* s0 16 */ VideoDec *vd, ReadBuf *rb, StrFile *file) {
  u_char cdata[1];
  int isStarted;
  u_char *put_ptr;
  u_char *get_ptr;
  int putsize;
  int getsize;
  int readrest;
  int writerest;
  int count;
  int proceed;
}

static int isAudioOK() {}

void initMov(/* s2 18 */ char *bsfilename) {
  ThreadParam th_param;
  void *val;
}

static void termMov() {
  sceGsGParam *gparam;
  u_long UserIMR;
}

static void defMain() {}
void ErrMessage(/* a0 4 */ char *message) {}
static void usage() {}
void proceedAudio() {}

int MoviePlay(/* s2 18 */ int scene_no) { int i; }

void MovieTest(/* a0 4 */ int scene_no) { int i; }

int PadSyncCallback2() {
  int id;
  int i;
  int state;
  int wrk;
  int exid;
  int p_id;
  PAD_STRUCT *psp;
  char act_align[1];
}

void movVblankPad() {}
void ReqLogoMovie() {}
int audioDecCreate(/* s1 17 */ AudioDec *ad, u_char *buff, int buffSize,
                   int iopBuffSize) {}
int audioDecDelete(/* s0 16 */ AudioDec *ad) {}

void audioDecPause(/* s0 16 */ AudioDec *ad) { int ret; }

void audioDecResume(/* s0 16 */ AudioDec *ad) {}
void audioDecStart(/* a0 4 */ AudioDec *ad) {}
void audioDecReset(/* s0 16 */ AudioDec *ad) {}

void audioDecBeginPut(/* t1 9 */ AudioDec *ad, u_char **ptr0, int *len0,
                      u_char **ptr1, int *len1) {
  int len;
}

void audioDecEndPut(/* a2 6 */ AudioDec *ad, int size) { int hdr_add; }

int audioDecIsPreset(/* a0 4 */ AudioDec *ad) {}

int audioDecSendToIOP(/* s0 16 */ AudioDec *ad) {
  int pd0;
  int pd1;
  int d0;
  int d1;
  u_char *ps0;
  int s0;
  int s1;
  int count_sent;
}

static void iopGetArea(/* t4 12 */ int *pd0, int *d0, int *pd1, int *d1,
                       AudioDec *ad, int pos) {
  int len;
}

static int sendToIOP2area(/* s5 21 */ int pd0, int d0, int pd1, int d1,
                          u_char *ps0, int s0, u_char *ps1, int s1) {
  int diff;
}

static int sendToIOP(/* v0 2 */ int dst, u_char *src, int size) {
  sceSifDmaData transData;
  int did;
}

static void changeMasterVolume(/* s1 17 */ u_int val) { int i; }

static void changeInputVolume(/* s0 16 */ u_int val) {}

void clearGsMem(/* s7 23 */ int r, int g, int b, int disp_width,
                int disp_height) {
  u_long giftag_clear[1];
  sceGifPacket packet;
  u_long128 packetBase[1];
  sceDmaChan *dmaGif;
}

void setImageTag(/* a0 4 */ u_int *tags, void *image, int index, int image_w,
                 int image_h) {
  int mbx;
  int mby;
  int i;
  int j;
  Rect tex;
  Rect poly;
  sceGifPacket packet;
  u_long giftag[1];
  u_long giftag_eop[1];
  u_long *tag;
  void *val;
}

int vblankHandlerM(/* a0 4 */ int val) {
  sceDmaChan *dmaGif_loadimage;
  VoTag *tag;
}

int handler_endimage(/* a0 4 */ int val) {}
void startDisplay(/* s0 16 */ int waitEven) {}
void endDisplay() {}

int videoCallback(/* a0 4 */ sceMpeg *mp, sceMpegCbDataStr *str, void *data) {
  u_char *ps0;
  int s0;
  int s1;
  u_char *pd0;
  u_char *pd1;
  int d0;
  int d1;
  int len;
  void *val;
  void *val;
}

int pcmCallback(/* a0 4 */ sceMpeg *mp, sceMpegCbDataStr *str, void *data) {
  ReadBuf *rb;
  u_char *ps0;
  int s0;
  int s1;
  u_char *pd0;
  u_char *pd1;
  int d0;
  int d1;
  int len;
  int ret;
}

static int copy2area(/* s4 20 */ u_char *pd0, int d0, u_char *pd1, int d1,
                     u_char *ps0, int s0, u_char *ps1, int s1) {}
void readBufCreate(/* a0 4 */ ReadBuf *b) {}
void readBufDelete(/* a0 4 */ ReadBuf *b) {}

int readBufBeginPut(/* a0 4 */ ReadBuf *b, u_char **ptr) { int size; }

int readBufEndPut(/* a0 4 */ ReadBuf *b, int size) { int size_ok; }

int readBufBeginGet(/* a3 7 */ ReadBuf *b, u_char **ptr) {}

int readBufEndGet(/* a0 4 */ ReadBuf *b, int size) { int size_ok; }

int strFileOpen(/* s3 19 */ StrFile *file, char *filename) {
  char *body;
  char fn[1];
  char devname[1];
  int dlen;
  int i;
  int len;
  char *tail;
  int __x;
  sceCdRMode mode;
}

int strFileClose(/* s0 16 */ StrFile *file) {}

int strFileRead(/* a0 4 */ StrFile *file, void *buff, int size) {
  int count;
  u_int err;
}

int getFIFOindex(/* a2 6 */ ViBuf *f, void *addr) { void *val; }

void setD3_CHCR(/* s0 16 */ u_int val) {}
void setD4_CHCR(/* s0 16 */ u_int val) {}
void scTag2(/* a0 4 */ QWORD *q, void *addr, u_int id, u_int qwc) {}

int viBufCreate(/* s0 16 */ ViBuf *f, u_long128 *data, u_long128 *tag, int size,
                TimeStamp *ts, int n_ts) {
  SemaParam param;
}

int viBufReset(/* s2 18 */ ViBuf *f) {
  int i;
  void *val;
  void *val;
  void *val;
}

void viBufBeginPut(/* s0 16 */ ViBuf *f, u_char **ptr0, int *len0,
                   u_char **ptr1, int *len1) {
  int en;
}

void viBufEndPut(/* s0 16 */ ViBuf *f, int size) {}

int viBufAddDMA(/* s2 18 */ ViBuf *f) {
  int i;
  int index;
  u_int d4chcr;
  int isNewData;
  int read_n;
}

int viBufStopDMA(/* s0 16 */ ViBuf *f) {}

int viBufRestartDMA(/* s0 16 */ ViBuf *f) {
  int bp;
  int fp;
  int ifc;
  u_int d4madr_next;
  u_int d4qwc_next;
  u_int d4tadr_next;
  u_int d4chcr_next;
  int index;
  int index_next;
  int id;
  void *val;
  void *val;
}

int viBufDelete(/* s0 16 */ ViBuf *f) {}

int viBufIsActive(/* s0 16 */ ViBuf *f) { int ret; }

int viBufCount(/* s0 16 */ ViBuf *f) { int ret; }

void viBufFlush(/* s0 16 */ ViBuf *f) {}

int viBufModifyPts(/* t3 11 */ ViBuf *f, TimeStamp *new_ts) {
  TimeStamp *ts;
  int rd;
  int datasize;
  int loop;
  int tgt;
  int pos;
  int size;
  int len;
}

int viBufPutTs(/* s0 16 */ ViBuf *f, TimeStamp *ts) { int ret; }

int viBufGetTs(/* s2 18 */ ViBuf *f, TimeStamp *ts) {
  u_int d4madr;
  u_int ipubp;
  int bp;
  int fp;
  int ifc;
  u_int d4madr_next;
  int datasize;
  int isEnd;
  int tscount;
  int wt;
  int i;
  int pos;
  int len;
  int size;
}

int videoDecCreate(/* s0 16 */ VideoDec *vd, u_char *mpegWork, int mpegWorkSize,
                   u_long128 *data, u_long128 *tag, int tagSize, TimeStamp *pts,
                   int n_pts) {}
void videoDecSetDecodeMode(/* a0 4 */ VideoDec *vd, int ni, int np, int nb) {}
int videoDecSetStream(/* a0 4 */ VideoDec *vd, int strType, int ch,
                      sceMpegCallback cb, void *data) {}
void videoDecBeginPut(/* a0 4 */ VideoDec *vd, u_char **ptr0, int *len0,
                      u_char **ptr1, int *len1) {}
void videoDecEndPut(/* a0 4 */ VideoDec *vd, int size) {}
void videoDecReset(/* a0 4 */ VideoDec *vd) {}
int videoDecDelete(/* s0 16 */ VideoDec *vd) {}
void videoDecAbort(/* a0 4 */ VideoDec *vd) {}
u_int videoDecGetState(/* a0 4 */ VideoDec *vd) {}

u_int videoDecSetState(/* a0 4 */ VideoDec *vd, u_int state) { u_int old; }

int videoDecPutTs(/* a0 4 */ VideoDec *vd, long int pts_val, long int dts_val,
                  u_char *start, int len) {
  TimeStamp ts;
}

int videoDecInputCount(/* a0 4 */ VideoDec *vd) {}

int videoDecInputSpaceCount(/* a0 4 */ VideoDec *vd) {
  u_char *ptr0;
  u_char *ptr1;
  int len0;
  int len1;
}

int videoDecFlush(/* s0 16 */ VideoDec *vd) {
  u_char *pd0;
  u_char *pd1;
  u_char seq_end_code[1];
  int d0;
  int d1;
  void *val;
  void *val;
}

int videoDecIsFlushed(/* s0 16 */ VideoDec *vd) {}
void videoDecMain(/* s1 17 */ VideoDec *vd) {}

int decBs0(/* fp 30 */ VideoDec *vd) {
  VoData *voData;
  int status;
  int i;
  int image_w;
  int image_h;
}

int mpegError(/* a0 4 */ sceMpeg *mp, sceMpegCbDataError *cberror,
              void *anyData) {}
int mpegNodata(/* a0 4 */ sceMpeg *mp, sceMpegCbData *cbdata, void *anyData) {}
int mpegStopDMA(/* a0 4 */ sceMpeg *mp, sceMpegCbData *cbdata, void *anyData) {}
int mpegRestartDMA(/* a0 4 */ sceMpeg *mp, sceMpegCbData *cbdata,
                   void *anyData) {}

int mpegTS(/* a0 4 */ sceMpeg *mp, sceMpegCbDataTimeStamp *cbts,
           void *anyData) {
  TimeStamp ts;
}

static int cpy2area(/* s4 20 */ u_char *pd0, int d0, u_char *pd1, int d1,
                    u_char *ps0, int s0, u_char *ps1, int s1) {}

void voBufCreate(/* a0 4 */ VoBuf *f, VoData *data, VoTag *tag, int size) {
  int i;
}

void voBufDelete(/* a0 4 */ VoBuf *f) {}
void voBufReset(/* a0 4 */ VoBuf *f) {}
int voBufIsFull(/* a0 4 */ VoBuf *f) {}
void voBufIncCount(/* s0 16 */ VoBuf *f) {}
VoData *voBufGetData(/* s0 16 */ VoBuf *f) {}
int voBufIsEmpty(/* a0 4 */ VoBuf *f) {}
VoTag *voBufGetTag(/* s0 16 */ VoBuf *f) {}
void voBufDecCount(/* a0 4 */ VoBuf *f) {}

void FodInit(/* s0 16 */ FOD_CTRL *fc, u_int *tcp, u_int *tlp, u_int *tep) {}

int FodNextFrame(/* a1 5 */ FOD_CTRL *fc) {
  u_int size;
  char *cam_addr;
  char *lit_addr;
  char *eff_addr;
}

void FodSetFrame(/* a0 4 */ FOD_CTRL *fc, u_int frame) {
  u_int i;
  u_int *fod_cam_addr;
  u_int *fod_lit_addr;
  u_int *fod_eff_addr;
}

void FodGetLightNum(/* a0 4 */ FOD_LIGHT *fl) { u_int *lit_addr; }

void FodGetLightSerial(/* s1 17 */ FOD_LIGHT *fl) {
  FOD_LIT_SERIAL *fls;
  u_int *lit_addr;
  int i;
}

u_int *FodGetFirstLight(/* s7 23 */ FOD_LIGHT *fl) {
  float cone_deg;
  int i;
  int lit_type;
  u_int *lit_addr;
  float *v1;
  float *v1;
  float *v1;
}

void FodSetMyLight(/* s5 21 */ FOD_LIGHT *fl, char *pfx, float *eye) {
  static SgLIGHT ilight[1];
  static SgLIGHT slight[1];
  static SgLIGHT plight[1];
  static sceVu0FVECTOR ambient;
  FOD_LIT_SERIAL *fls;
  SgLIGHT *org;
  int i;
  int il_num;
  int sl_num;
  int pl_num;
  int get_light_flg;
}

void FodSetSpotLights(/* s3 19 */ SgLIGHT *sl, u_int num) { u_int i; }

void FodGetToSgLight(/* s3 19 */ FOD_CTRL *fc) {
  SgLIGHT *sl;
  int i;
  u_int *lit_addr;
  float *data;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
  float cone_deg;
  float *v0;
  float *v1;
  float *v0;
  float *v0;
  float *v1;
}

void FodGetHandSpotPos(/* a0 4 */ FOD_LIGHT *fl, float *p, float *i) {
  SgLIGHT *sl;
  float *v1;
  float *v0;
  float *v1;
}

void FodGetDropSpotPos(/* s2 18 */ FOD_LIGHT *fl, char *pfx, float *lp,
                       float *li) {
  SgLIGHT *sl;
  int i;
  int no;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

int FodGetLightType(/* a0 4 */ FOD_LIGHT *fl, int id) {
  int i;
  int ret_type;
}

void FodGetFirstCam(/* s2 18 */ SgCAMERA *cam, FOD_CTRL *fc) {
  FOD_FIRST_CAM *fcam;
  float *v0;
  float *v1;
  float *v0;
  float *v1;
}

void FodGetCamData(/* s1 17 */ SgCAMERA *cam, FOD_CTRL *fc) {
  float *fdat;
  int i;
  float *v0;
  float *v1;
  float *v1;
}

u_int *FodGetFixEffect(/* s0 16 */ u_int *tep) {
  FOD_EFF_DATA *fed;
  u_int i;
}

void FodSetEffect(/* s6 22 */ FOD_CTRL *fc) {
  FOD_EFF_FRAME *fef;
  FOD_EFF_DATA *fed;
  int i;
  char *end_addr;
}

void FodSetEffectParam(/* s2 18 */ FOD_EFF_DATA *fed) {
  int i;
  sceVu0FMATRIX mtx;
  sceVu0FVECTOR base;
  sceVu0FVECTOR trgt;
  float x;
  float y;
  float z;
  sceVu0FVECTOR *fire;
}

int SceneAllLoad(/* a0 4 */ int scene_no, u_int *load_addr) { int ret; }

u_int *SceneDataLoadReq(/* a3 7 */ int scene_no, u_int *load_addr) {
  SCENE_CTRL *sc;
  u_int *scn_addr;
  int scn_file_no;
  int i;
  int next_addr;
}

int SceneDataLoadWait() {
  SCENE_CTRL *sc;
  int i;
}

void SceneDataAnalyze(/* s1 17 */ SCENE_FILE *sf, u_int *scn_addr) {}

void SceneGetHeaderData(/* s0 16 */ SCENE_CTRL *sc, u_int *hdr_top) {
  u_short *hdr_num_data;
}

void SceneInitEnvironment(/* s1 17 */ SCENE_FILE *sf, SCENE_CTRL *sc) {}

void SceneLightRevision(/* s5 21 */ SCENE_CTRL *sc) {
  sceVu0FVECTOR amb;
  FOD_LIGHT *fl;
  u_int *lit_addr;
  int i;
  int err_flg;
  float *v1;
}

void SceneAllMdlInit(/* s1 17 */ SCENE_CTRL *sc) { int i; }

void SceneInitManMdl(/* s1 17 */ SCN_ANM_MDL *sam, u_int *mot_addr,
                     u_int *mim_addr, u_int mdl_id) {
  SCENE_CTRL *sc;
  int i;
  char pfx[1];
}

void SceneInitOtherMdl(/* s0 16 */ SCN_ANM_MDL *sam, u_int *pk2_mot_addr,
                       u_int mdl_id) {
  SCENE_CTRL *sc;
  char pfx[1];
}

void SceneDraw(/* a2 6 */ int scene_no) {
  SCENE_CTRL *sc;
  FOD_CTRL *fc;
  int i;
}

void SceneRenewEnvironment(/* s1 17 */ SCENE_CTRL *sc) { int i; }

void SceneMirrorMdlDraw() {
  SCENE_CTRL *sc;
  FOD_CTRL *fc;
  SCN_ANM_MDL *sam;
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  int i;
}

int SceneIsEnd() {
  SCENE_CTRL *sc;
  int i;
  int ret;
  int skip_ok;
}

void SceneLightClear(/* s0 16 */ SCENE_CTRL *sc) { sceVu0FVECTOR zd; }

void SceneScenePrerender() {
  static SgLIGHT lights;
  static SgLIGHT ilights[1];
  static SgLIGHT plights[1];
  static SgLIGHT slights[1];
  sceVu0FVECTOR ambient;
  SCENE_CTRL *sc;
  SCN_ANM_MDL *sam;
  int i;
  int disp_room;
  u_int *tmpModelp;
}

sceVu0FVECTOR *SceneGetMdlWaistPos(/* a0 4 */ ANI_CTRL *ani_ctrl,
                                   u_short mdl_no) {}

void SceneSetEneEffect(/* s3 19 */ SCN_ANM_MDL *sam) {
  static sceVu0FVECTOR pos;
  static sceVu0FVECTOR pos2;
  static float spd;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tr;
  int i;
}

void SceneReleaseEffect(/* s3 19 */ SCENE_CTRL *sc) {
  SCN_ANM_MDL *sam;
  int i;
  int j;
}

SCN_ENE_EFCT *SceneGetEneEfctAddr(/* a0 4 */ SCENE_CTRL *sc, u_int mdl_no) {
  SCN_ENE_EFCT *ret_addr;
  u_int cnt;
}

void SceneSetFadeMdlEffect(/* a0 4 */ SCENE_CTRL *sc) {
  SCN_ANM_MDL *sam;
  FOD_EF_FADE_MDL *fefm;
  int i;
  int j;
  int mdl_num;
}

void SceneSetVibrate(/* a0 4 */ int scene_no, int frame) {
  SCN_VIB_DATA *vib_datp;
}

void SceneDrawManMdl(/* s4 20 */ SCENE_CTRL *sc, u_int mdl_id) {
  SgCOORDUNIT *cp;
  MANMDL_DAT *mdat;
  FOD_CTRL *fc;
  SCN_ANM_MDL *sam;
  u_int *base_p;
  float scale;
}

void SceneDrawManShadow(/* s5 21 */ SCENE_CTRL *sc, SCN_ANM_MDL *sam) {
  ShadowHandle shandle;
  SCN_ANM_MDL *dsam;
  sceVu0FMATRIX mat;
  sceVu0FVECTOR shadow_bbox[1];
  sceVu0FVECTOR dir;
  sceVu0FVECTOR lp;
  sceVu0FVECTOR li;
  sceVu0FVECTOR *bbox_addr;
  u_int *ysearch_models[1];
  u_int i;
  u_int born_no;
  u_int search_num;
  SgCOORDUNIT *cp;
  u_int *shdw_addr;
  float *v1;
}

void SceneDrawOtherMdl(/* s3 19 */ SCENE_CTRL *sc, SCN_ANM_MDL *sam) {
  SgCOORDUNIT *cp;
  FOD_CTRL *fc;
  u_int *base_p;
  u_int frame;
}

void SceneDrawRoom(/* s3 19 */ SCENE_CTRL *sc) {
  HeaderSection *hs;
  SgCOORDUNIT *cp;
  u_int *room_mdl[1];
  int i;
}

void SceneSpecialManage() {
  SCENE_CTRL *sc;
  SCN_ANM_MDL *sam;
  int i;
  int j;
}

int SceneDecisionMovie(/* a0 4 */ int scene_no) { int i; }

u_int *SceneGetMotAddr(/* s1 17 */ u_int *pak_top, u_int no, char *pfx) {}

u_int *SceneGetMimAddr(/* s4 20 */ u_int *pak_top, char *pfx) {
  int i;
  int no;
  char *pfx_top;
}

char *GetHeaderMdlNo(/* s1 17 */ SCN_ANM_MDL *sam, int num, char *hdr_pfx) {
  int i;
}

u_int GetPrefixNo(/* a0 4 */ char *pfx) {
  u_int mdl_no;
  char pfx_tmp[1];
}

u_int *GetADRTBL(/* a0 4 */ u_int *top, u_int no) {}

void SceneSetManMdlTexOffset(/* a0 4 */ SCENE_CTRL *sc) {
  int vram_offset[1];
  int i;
  int ofs_cnt;
  u_int hero_mdl_no;
}

int SceneGetChapterNo(/* a0 4 */ int scene_no) { int chapter_no; }

void SceneSetSquare(/* a0 4 */ int pri, float x, float y, float w, float h,
                    u_char r, u_char g, u_char b, u_char a) {}

void SceneCheckModelEntry(/* s1 17 */ SCENE_CTRL *sc) {
  SCN_ANM_MDL *sam;
  char prefix[1];
  int i;
}

void InitSceneWork() { int i; }

void InGameCtrl() {}
int InGameFirstLoad() {}

void InGameInit() { int next_msn_chk; }

void InGameInit2() { int mode; }

void InGameMain() { u_char tmp_room_no; }

void TmpPadOff() { int i; }

void InitCamera() { u_char i; }

void InitPlyr() {}
void InitPlyr2(/* s1 17 */ int film_no) {}
void InitPlyrAfterLoad() {}
void InitEnemy() {}

void EnemyActDataLoad() { int eadat_tbl[1]; }

void InitFlyWrk() {}
void InitFilm() {}
void LoadStartDataInit() {}

int LoadStartDataSet() { int ret; }

void InitLoadStartLock() {}
int GetLoadStartLock() {}

void CameraMain() {}

void KonwakuCamCtrl() {
  sceVu0FVECTOR rv;
  sceVu0FVECTOR tv;
}

void FinderInCameraCtrl() {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  static sceVu0FVECTOR pv;
  static sceVu0FVECTOR iv;
  static u_char time;
}

void NormalCameraCtrl() {
  MAP_CAM_INFO mci;
  SgCAMERA tc;
  SgCAMERA tc2;
  static SgCAMERA oc;
}

int GetCameraInfo(/* s0 16 */ MAP_CAM_INFO *mci) { static u_char kind_old; }

void GetCameraData(/* a0 4 */ u_char kind, MAP_CAM_INFO *mci) {}

void SetCamPos0(/* s0 16 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv;
}

void SetCamPos1(/* s0 16 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv2;
  static sceVu0FVECTOR tv;
}

void SetCamPos2(/* s0 16 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR bv;
  float per;
}

void SetCamPos3(/* s1 17 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv2;
  sceVu0FVECTOR bv;
  float per;
  static sceVu0FVECTOR tv;
}

void SetCamPos4(/* s1 17 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR bv;
  float per;
}

void SetCamPos5(/* s1 17 */ SgCAMERA *tc, MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tv2;
  static sceVu0FVECTOR tv;
}

float GetMCLocalPosPer(/* a3 7 */ u_short cn, u_char kind, u_char id) {
  u_short xmin;
  u_short xmax;
  u_short zmin;
  u_short zmax;
  u_char kind_tbl[1];
  static float min;
  static float max;
  static u_short req_cam_no_save;
  static u_char req_cam_kind_save;
}

void CompleCameraPos(/* s3 19 */ SgCAMERA *tc, SgCAMERA *oc,
                     MAP_CAM_INFO *mci) {
  sceVu0FVECTOR tc0;
  sceVu0FVECTOR tc1;
  float comple_div;
  float tca0;
  u_char i;
  u_char chk;
  u_int *tbl;
  static u_char rmax;
  static u_char pmax;
  static u_char comple_cnt;
  static u_char comple_spd_dwn;
  static u_char comple_dwn_tm;
  static sceVu0FVECTOR comple_adjr;
  static sceVu0FVECTOR comple_adjp;
  static float comple_adjfov;
  static float comple_adjroll;
}

u_char CompleReqChk(/* a0 4 */ MAP_CAM_INFO *mci) { u_char req; }

void FinderModeCameraCtrl() {
  MOVE_BOX *mb;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
}

void PlyrCamCondChk() {}

void PconMahiCameraCtrl() {
  MOVE_BOX *mb;
  static u_char time;
  static u_char flag;
}

void PconTebureCameraCtrl() {
  MOVE_BOX *mb;
  float ax;
  float ay;
  char pad_x;
  char pad_y;
  u_char jpad_on;
  static float rot;
  static float rot_adj;
  static float spd;
  static u_char flag;
}

int FinderModePadChk(/* t2 10 */ char *pad_x, char *pad_y, float *ax, float *ay,
                     u_char *jpad_on) {}

void SetFinderRot() {
  MOVE_BOX *mb;
  float delta;
  float dist;
  float spd;
  float ax;
  float ay;
  float rot;
  char pad_x;
  char pad_y;
  u_char jpad_on;
}

void CameraIdMoveCtrl() {
  MAP_CAM_DAT *mcd;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rav;
  float delta;
  u_short cn;
  char *str;
  char *str5;
  char *str6;
  char *str7;
  char *str0;
  char *str1;
  char *str2;
  char *str4;
  char *str_save;
}

u_char SetMapCamDat0(/* a2 6 */ MAP_CAM_DAT *mcd) { u_char i; }

u_char SetMapCamDat1(/* a3 7 */ MAP_CAM_DAT *mcd) { u_char i; }

u_char SetMapCamDat2(/* s0 16 */ MAP_CAM_DAT *mcd, u_char id) {
  u_char i;
  u_char end;
  static MAP_CAM_DAT tmpd;
}

u_char SetMapCamDat3(/* s0 16 */ MAP_CAM_DAT *mcd, u_char id) {
  u_char i;
  u_char end;
  static MAP_CAM_DAT tmpd;
}

u_char SetMapCamDat4(/* s0 16 */ MAP_CAM_DAT *mcd, u_char id) {
  u_char i;
  u_char end;
  static MAP_CAM_DAT tmpd;
}

u_char SetMapCamDat5(/* a3 7 */ MAP_CAM_DAT *mcd) { u_char i; }

void SaveCamDat(/* a0 4 */ u_char kind, u_char mn) {
  int fd;
  char fname[1];
  char fname2[1];
  char fname3[1];
  char fname4[1];
}

void ReqFinderInOverRap(/* a0 4 */ u_short time) {}
void FinderInOverRapCtrl() {}

void PlyrDmgCameraCtrl() {
  sceVu0FVECTOR tr;
  sceVu0FVECTOR tv;
  static int cnt;
  static sceVu0FVECTOR cv;
}

void ReqDramaCamera(/* a0 4 */ u_char req, u_short no, u_short time) {
  u_short *tbl;
  u_char i;
}

void DramaCameraReqCtrl() {
  u_char i;
  u_char chk;
}

void ClearDramaCamReq() { u_char i; }

void EneCtrlMain() {
  u_char i;
  static u_char flag;
}

void EneEntryChk(/* s0 16 */ u_char no) {}

void JEneEntry(/* s4 20 */ u_char wrk_no, u_char dat_no) {
  ENE_WRK *ew;
  sceVu0FVECTOR p;
  float rot;
  u_int sta_save;
  u_char i;
  u_char cnt;
}

void FEneEntry(/* a0 4 */ u_char wrk_no, u_char dat_no) {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  float rot;
}

void AEneEntry(/* a0 4 */ u_char wrk_no, u_char dat_no) {
  ENE_WRK *ew;
  AENE_INFO_DAT *aie;
  float rot;
  static ENE_DAT tmp_aene_dat;
}

void EneRule(/* s0 16 */ ENE_WRK *ew) {
  u_char act_no;
  u_char view_chk;
  char *str1;
  char *str2;
  char *str3;
  char *str_clr;
}

void EneCondCtrl(/* a0 4 */ ENE_WRK *ew) {}
void EneAuraCtrl(/* a1 5 */ ENE_WRK *ew) {}

void InitEneWrk(/* a0 4 */ u_char wrk_no) {
  ENE_WRK *ew;
  int i;
}

int EneWrkReleaseChk(/* s0 16 */ ENE_WRK *ew) { int result; }

void FuyuEneRelease() { u_char i; }

void EnePosInfoSet(/* s0 16 */ ENE_WRK *ew) {}

void EneSeOmenChk(/* s2 18 */ ENE_WRK *ew, u_char id) {
  float dist_tbl[1];
  u_short se_tbl[1];
  float dist;
  int i;
}

void EneMoveCtrl(/* s2 18 */ ENE_WRK *ew) {
  MOVE_BOX *mb;
  sceVu0FVECTOR tv;
  u_char i;
}

u_char EnePRecogChkChk(/* a0 4 */ ENE_WRK *ew) { u_char req; }

u_char EnePRecogChk(/* s3 19 */ ENE_WRK *ew, u_char *act_no) { u_char new_act; }

u_char HitDmgChk(/* a0 4 */ ENE_WRK *ew) { u_char chk; }

u_char CaptureOnChk1(/* a1 5 */ ENE_WRK *ew) {
  u_char chk;
  float gthr_rng;
}

u_char CaptureOnChk3(/* a0 4 */ ENE_WRK *ew) { u_char chk; }

u_char CaptureOnChk4(/* a0 4 */ ENE_WRK *ew) {}

u_char CaptureOnChk2(/* s1 17 */ ENE_WRK *ew) {
  sceVu0FVECTOR rot;
  float gthr_rng;
  u_char chk;
}

u_char PlyrSeFootChk(/* a1 5 */ ENE_WRK *ew) {
  float rng;
  u_char chk;
}

void EneActIniChk(/* a0 4 */ ENE_WRK *ew, u_char view_chk, u_char act_no) {}
void EneActIniSet(/* a0 4 */ ENE_WRK *ew, u_char act_no) {}

void EneActSet(/* a0 4 */ ENE_WRK *ew, u_char act_no) { MOVE_BOX *mb; }

void EneBlinkDataSet(/* a0 4 */ ENE_WRK *ew) {}
void EneARatioDataSet(/* a0 4 */ ENE_WRK *ew, u_char anime_no) {}

void EneActRule(/* s0 16 */ ENE_WRK *ew) {
  float dist;
  u_char act_no;
}

int EneActPreferChk(/* s0 16 */ ENE_WRK *ew, u_char *act_no) {
  u_char n;
  u_char prefer_act[1];
}

void EneAniResolutionCtrl(/* s0 16 */ ENE_WRK *ew) {
  u_char no;
  static u_char reso[1][1];
}

void EneAtkCtrl(/* a0 4 */ ENE_WRK *ew) {}

u_char EneDmgChk(/* s0 16 */ ENE_WRK *ew) { u_char result; }

void ClrEneStaDmg(/* a2 6 */ ENE_WRK *ew) {}

u_char PlyrOutAreaChk(/* a0 4 */ ENE_WRK *ew) { u_char result; }

u_char EneTrtryChk(/* a2 6 */ ENE_WRK *ew, u_char room_no) {
  u_char result;
  u_char i;
}

void EneLightCtrl(/* s3 19 */ ENE_WRK *ew) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tv2;
  POINT_WRK *p;
  SPOT_WRK *s;
  u_char id;
  u_char i;
}

void EneInDispChk(/* s2 18 */ ENE_WRK *ew) {
  PP_JUDGE ppj;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  float rot;
  float tx;
  float ty;
}

void EneBlinkPosSet(/* s2 18 */ ENE_WRK *ew) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tr;
}

void FlyRule(/* s1 17 */ FLY_WRK *fw) {
  MOVE_BOX *mb;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR av;
}

int FlyPlyrHitChk(/* a0 4 */ FLY_WRK *fw, float *tv) {
  sceVu0FVECTOR pf;
  sceVu0FVECTOR pp;
  int result;
}

void FlyAtkHit(/* s1 17 */ FLY_WRK *fw) { sceVu0FVECTOR rv; }

void EneMinDmgCtrl(/* a1 5 */ ENE_WRK *ew) {
  u_char no;
  static u_char wait_time[1];
}

void EneNormalEffectCtrl(/* s0 16 */ ENE_WRK *ew) {
  sceVu0FVECTOR rv;
  u_char no;
  static u_char ne_job[1];
  static u_short time[1];
  static float spd[1];
  static float rate[1];
  static float trate[1];
  static sceVu0FVECTOR padj[1];
  static void *dp[1];
}

char EndAutoEne(/* a0 4 */ u_char type) { char result; }

void ReqEneSpeakAdpcmCnt(/* a0 4 */ u_short time) {}
void EneSpeakAdpcmCtrl(/* a1 5 */ ENE_WRK *ew) {}
void GhostDeadInit(/* s2 18 */ int wrk_no) {}

void GhostDeadMain() { static int gd_load_id; }

int GhostDeadLoadEndJudge() {}

int EnemyUseJudge(/* a0 4 */ u_char ene_type) {
  int i;
  int ene_num;
  int cnt;
}

int ZeroGhostBattleJudge() {
  int result;
  u_char no[1];
}

void EneAdpcmPlayChk(/* a0 4 */ ENE_WRK *ew) {}

void InitMoveBox(/* s0 16 */ MOVE_BOX *mb) {}
void MoveCtrl(/* s0 16 */ MOVE_BOX *mb) {}
void EneBlinkCtrl(/* s0 16 */ ENE_WRK *ew) {}
void EJob000(/* a0 4 */ MOVE_BOX *mb) {}

void EJob001(/* s0 16 */ MOVE_BOX *mb) { sceVu0FVECTOR tv; }

void EJob002(/* a0 4 */ MOVE_BOX *mb) { u_char time; }

void EJob003(/* s0 16 */ MOVE_BOX *mb) { int chk; }

void EJob004(/* s0 16 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  float dist[1];
  int *erd;
  char i;
  char j;
  char n;
  char max;
  char candidate[1];
  u_char mt;
}

int *GetEneRootData(/* a0 4 */ u_char no) { int *rd; }

u_char GetEneRootMax(/* a0 4 */ u_char no) {}

void EJob005(/* a1 5 */ MOVE_BOX *mb) { float spd; }

void EJob006(/* a0 4 */ MOVE_BOX *mb) {}
void EJob007(/* a0 4 */ MOVE_BOX *mb) {}

void EJob008(/* a3 7 */ MOVE_BOX *mb) {
  short int rot[1];
  u_char i;
}

void EJob009(/* s0 16 */ MOVE_BOX *mb) {}

void EJob00A(/* s2 18 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tr;
  u_char x;
  u_char z;
}

void EJob00B(/* t0 8 */ MOVE_BOX *mb) {
  u_short time;
  u_short adj;
}

void EJob00C(/* s0 16 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  u_char id;
}

void EJob00D(/* s1 17 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tr;
  u_char type;
  u_char dmin;
  u_char wmin;
  static u_char tr_rate_save[1];
}

void EJob00E(/* s1 17 */ MOVE_BOX *mb) {
  float hit_rng;
  float rot;
  u_short adj;
  u_char id;
}

void EJob00F(/* s3 19 */ MOVE_BOX *mb) {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  u_short adj;
  u_char id;
  u_char per;
  u_char flag;
  u_char ani;
  u_char pani_tbl[1];
}

void EJob010(/* a3 7 */ MOVE_BOX *mb) { u_char no; }

void EJob011(/* a0 4 */ MOVE_BOX *mb) {}

void EJob012(/* s0 16 */ MOVE_BOX *mb) {
  u_char type;
  u_char no;
}

void EJob013(/* t0 8 */ MOVE_BOX *mb) {}

void EJob014(/* t0 8 */ MOVE_BOX *mb) {
  u_short time;
  u_short adj;
}

void EJob015(/* s1 17 */ MOVE_BOX *mb) {
  sceVu0FVECTOR rot;
  static u_char turn[1];
  static u_char time[1];
}

void EJob016(/* s1 17 */ MOVE_BOX *mb) {}
void EJob017(/* a0 4 */ MOVE_BOX *mb) {}
void EJob018(/* a2 6 */ MOVE_BOX *mb) {}
void EJob019(/* s0 16 */ MOVE_BOX *mb) {}
void EJob01A(/* t1 9 */ MOVE_BOX *mb) {}

void EJob01B(/* s6 22 */ MOVE_BOX *mb) {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  static float spd[1];
  static float rate[1];
  static float trate[1];
  static sceVu0FVECTOR p[1];
}

void EJob01C(/* s0 16 */ MOVE_BOX *mb) {}
void EJob01D(/* t0 8 */ MOVE_BOX *mb) {}
void EJob01E(/* s0 16 */ MOVE_BOX *mb) {}

void EJob01F(/* t0 8 */ MOVE_BOX *mb) {
  u_short time;
  u_short adj;
}

void EJob020(/* s0 16 */ MOVE_BOX *mb) { u_char door_id_tbl[1]; }

void EJob021(/* s0 16 */ MOVE_BOX *mb) { u_short se; }

void EJob022(/* t5 13 */ MOVE_BOX *mb) {
  u_char no;
  static sceVu0FVECTOR ep[1];
  static float fade[1];
  static float rate[1];
}

void EJob023(/* t3 11 */ MOVE_BOX *mb) { static sceVu0FVECTOR ep[1]; }

void EJob024(/* a0 4 */ MOVE_BOX *mb) {}
void EJob025(/* s0 16 */ MOVE_BOX *mb) {}

void EJob026(/* s0 16 */ MOVE_BOX *mb) { int rot; }

void EJob027(/* a2 6 */ MOVE_BOX *mb) {}

void EJob028(/* s5 21 */ MOVE_BOX *mb) {
  MOVE_BOX *fmb;
  u_char no;
  u_char i;
  u_char id;
}

void EJob029(/* t0 8 */ MOVE_BOX *mb) {}
void EJob02A(/* s0 16 */ MOVE_BOX *mb) {}
void FlyDataEnd(/* a0 4 */ u_char no) {}
void EJob02B(/* s0 16 */ MOVE_BOX *mb) {}

void EJob02C(/* s0 16 */ MOVE_BOX *mb) {
  u_short min;
  u_char rng;
}

void EJob02D(/* s0 16 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
}

void EJob02E(/* t2 10 */ MOVE_BOX *mb) { ENE_WRK *ew; }

void EJob02F(/* a2 6 */ MOVE_BOX *mb) {}

void EJob030(/* s2 18 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  short int rot;
  u_char min;
  u_char max;
}

void EJob031(/* t2 10 */ MOVE_BOX *mb) {}
void EJob032(/* s0 16 */ MOVE_BOX *mb) {}
void EJob033(/* a2 6 */ MOVE_BOX *mb) {}
void EJob034(/* a2 6 */ MOVE_BOX *mb) {}
void EJob035(/* a2 6 */ MOVE_BOX *mb) {}

void EJob036(/* s0 16 */ MOVE_BOX *mb) { int rot; }

void EJob037(/* s0 16 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  u_short time;
  short int spd;
}

void EJob038(/* s0 16 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  float rot;
  u_char side;
}

void EJob039(/* s0 16 */ MOVE_BOX *mb) {
  u_short time;
  u_short max;
  u_short mrng;
}

void EJob03A(/* t0 8 */ MOVE_BOX *mb) {}
void EJob03B(/* s1 17 */ MOVE_BOX *mb) {}
void EJob03C(/* t0 8 */ MOVE_BOX *mb) {}
void EJob03D(/* a2 6 */ MOVE_BOX *mb) {}
void EJob03E(/* t0 8 */ MOVE_BOX *mb) {}
void EJob03F(/* a0 4 */ MOVE_BOX *mb) {}

void EJob040(/* t5 13 */ MOVE_BOX *mb) {
  u_char no;
  static u_short time[1];
  static u_char max[1];
  static float up[1][1];
}

void EJob041(/* a2 6 */ MOVE_BOX *mb) {
  u_char no;
  static u_short time[1];
  static float down[1][1];
}

void EJob042(/* t1 9 */ MOVE_BOX *mb) {
  u_short no;
  u_short adj;
  u_char brnch;
}

void EJob043(/* a2 6 */ MOVE_BOX *mb) {}
void EJob044(/* t0 8 */ MOVE_BOX *mb) {}
void EJob045(/* a0 4 */ MOVE_BOX *mb) {}

void EJob046(/* s0 16 */ MOVE_BOX *mb) { sceVu0FVECTOR tv; }

void EJob047(/* s1 17 */ MOVE_BOX *mb) {
  u_short adj;
  u_short rng;
}

void EJob048(/* t1 9 */ MOVE_BOX *mb) {
  u_char no;
  static float fade[1];
  static float rate[1];
}

void EJob049(/* s2 18 */ MOVE_BOX *mb) { float spd; }

void EJob04A(/* a2 6 */ MOVE_BOX *mb) { u_char time; }

void EJob04B(/* t3 11 */ MOVE_BOX *mb) { u_short adj[1]; }

void EJob04C(/* t1 9 */ MOVE_BOX *mb) {
  u_short time;
  u_short adj;
  u_char id;
}

void EJob04D(/* a2 6 */ MOVE_BOX *mb) {}
void EJob04E(/* s0 16 */ MOVE_BOX *mb) {}
void EJob04F(/* a2 6 */ MOVE_BOX *mb) {}
void EJob050(/* a0 4 */ MOVE_BOX *mb) {}
void EJob051(/* a0 4 */ MOVE_BOX *mb) {}
void EJob052(/* s0 16 */ MOVE_BOX *mb) {}

void EJob053(/* s1 17 */ MOVE_BOX *mb) {
  sceVu0FVECTOR vb;
  sceVu0FVECTOR vt;
}

void EJob054(/* s0 16 */ MOVE_BOX *mb) {}
void EJob055(/* t1 9 */ MOVE_BOX *mb) {}

void EJob056(/* s0 16 */ MOVE_BOX *mb) {
  int *erd;
  u_short x;
  u_short z;
  u_char i;
  u_char n;
}

void EJob057(/* s1 17 */ MOVE_BOX *mb) { sceVu0FVECTOR tv; }

void EJob058(/* a3 7 */ MOVE_BOX *mb) {}
void EJob059(/* t0 8 */ MOVE_BOX *mb) {}
void EJob05A(/* a2 6 */ MOVE_BOX *mb) {}

void EJob05B(/* s1 17 */ MOVE_BOX *mb) {
  sceVu0FVECTOR rv;
  u_char i;
}

void EJob05C(/* t1 9 */ MOVE_BOX *mb) {}
void EJob05D(/* s0 16 */ MOVE_BOX *mb) {}
void EJob05E(/* a0 4 */ MOVE_BOX *mb) {}

void EJob05F(/* s1 17 */ MOVE_BOX *mb) { sceVu0FVECTOR tv; }

void EJob060(/* s0 16 */ MOVE_BOX *mb) {}
void EJob061(/* s0 16 */ MOVE_BOX *mb) {}

void EJob062(/* s3 19 */ MOVE_BOX *mb) {
  sceVu0FVECTOR rv;
  sceVu0FVECTOR tv;
  u_char req;
  u_char i;
}

void EJob063(/* s0 16 */ MOVE_BOX *mb) {}

void EJob064(/* s2 18 */ MOVE_BOX *mb) {
  sceVu0FVECTOR tv;
  short int x;
  short int y;
  short int z;
}

void EJob065(/* a0 4 */ MOVE_BOX *mb) { u_char i; }

void EJob066(/* t0 8 */ MOVE_BOX *mb) {}

void EJob067(/* s0 16 */ MOVE_BOX *mb) {
  u_char id;
  u_short rot;
  float adj;
}

void EJob068(/* t1 9 */ MOVE_BOX *mb) {}

void EJob069(/* a3 7 */ MOVE_BOX *mb) {
  u_short adj;
  u_char i;
}

void EJob06A(/* t0 8 */ MOVE_BOX *mb) {}

void EJob06B(/* s1 17 */ MOVE_BOX *mb) {
  sceVu0FVECTOR pv;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  float rot;
  float dist;
  short int spd;
  u_char side;
}

void EJob06C(/* s1 17 */ MOVE_BOX *mb) {}

void EJob06D(/* a3 7 */ MOVE_BOX *mb) {
  u_short adj;
  u_char charge;
}

void EJob06E(/* t1 9 */ MOVE_BOX *mb) {}
void EJob06F(/* t0 8 */ MOVE_BOX *mb) {}
void EJob070(/* a2 6 */ MOVE_BOX *mb) {}
void EJob071(/* s0 16 */ MOVE_BOX *mb) {}

void EJob072(/* s0 16 */ MOVE_BOX *mb) { float dist; }

void EJob073(/* a1 5 */ MOVE_BOX *mb) {}
void BJobDammy(/* a0 4 */ ENE_WRK *ew) {}

void BJob000(/* a0 4 */ ENE_WRK *ew) { u_char time; }

void BJob001(/* a0 4 */ ENE_WRK *ew) {}

void BJob009(/* t1 9 */ ENE_WRK *ew) {
  LIGHT_PACK *l;
  float diff;
  float r;
  float g;
  float b;
}

void BJob00A(/* s0 16 */ ENE_WRK *ew) {
  sceVu0FVECTOR tv;
  POINT_WRK *p;
  float power;
  float diff;
  short int tv2[1];
  u_char id;
  u_char i;
}

void BJob00B(/* s5 21 */ ENE_WRK *ew) {
  sceVu0FVECTOR p;
  sceVu0FVECTOR i;
  SPOT_WRK *s;
  float power;
  float diff;
  float intens;
  short int p2[1];
  short int i2[1];
  u_char id;
}

void BJob00C(/* s0 16 */ ENE_WRK *ew) {}

void BJob010(/* t0 8 */ ENE_WRK *ew) { u_short adj; }

void BJob011(/* a3 7 */ ENE_WRK *ew) {}

void BJob012(/* a2 6 */ ENE_WRK *ew) {
  u_char n;
  static float rate[1];
  static float r_adj[1];
}

void BJob013(/* a0 4 */ ENE_WRK *ew) {}
void BJob014(/* s0 16 */ ENE_WRK *ew) {}

void EntryInit() { int i; }

void ClearAppearWrkInfo() { int i; }

void EntryMain() {}
void AreaEntrySet() {}

void TimeCtrlInit() {}
void GameTimeCtrl() {}
void SetNowClock(/* s0 16 */ sceCdCLOCK *nc) {}
void PlyrTimerCtrl() {}
void EntryTimeCtrl() {}
void SetRealTime() {}

void Mission03BindGhost01Delete() {}
void Mission04BindGhostLoad01Req() {}
void Mission04BindGhostLoad02Req() {}
int BindGhostBattleEnd(/* a0 4 */ int wrk_no) {}
int BindGhostLoad() {}

void DeadGhostAppearReq() {
  sceVu0FVECTOR pos;
  sceVu0FVECTOR tv0;
  sceVu0FVECTOR tv1;
  sceVu0FVECTOR tv2;
  sceVu0FVECTOR rv;
}

void DeadGhostAppearMain() {}

int DeadGhostAppearJudge() { int i; }

void DeadGhostLoadReq() {}
int DeadGhostLoad() {}
void DeadGhostBattleEnd() {}
int EnemyNoDeadGhostJudge(/* a0 4 */ int ene_no) {}

void DeadGhostSetLoad() { int i; }

void DeadGhostLoadDel() { int i; }

void FloatGhostAppearInit() { int i; }

int FloatGhostEntrySet(/* a0 4 */ u_char area) {}

int FloatGhostAppearMain() { u_char type; }

int FloatGhostAppearJudge() {}

int FloatGhostAppearTypeSet(/* t2 10 */ u_char fg_no, u_char wrk_no,
                            u_char room) {
  int i;
  int ret;
}

int GetFloatGhostAppearPosType(/* t1 9 */ u_char *type) {
  int i;
  int j;
}

void FloatGhostAppearPosSet(/* s6 22 */ u_char dat_no, float *set_pos,
                            float *set_rot) {
  int i;
  float dist;
  float dist_bak;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
}

int FloatGhostBattleEnd() {}
int FloatGhostEscapeEnd() {}
void FloatGhostLoadReq() {}
int FloatGhostLoadMain() {}
int FloatGhostLoadSet() {}
int FloatGhostSetJudge() {}
void GetLoadFloatGhost(/* a0 4 */ u_char set_num, u_char *set_fgst) {}
void GetFloatGhostModelLoad() {}
void GetFloatGhostModelLoadAfter() {}
void GetFloatGhostMotionLoad() {}
void GetFloatGhostMotionLoadAfter() {}
void GetFloatGhostSELoad() {}

void FloatGhostAppearStop() { int i; }

void FloatGhostAppearStart() { int i; }

int GuardGhostAppearSet() {
  int i;
  int dat_no;
}

void GuardGhostLoadInit() {}
int GuardGhostAppearMain() {}

int GuardGhostReloadReq() { int dat_no; }

void GuardGhostLoadReq() { int dat_no; }

int GuardGhostLoad() {
  int dat_no;
  int gg_no;
}

int GuardGhostAppear() { int i; }

void GuardGhostBattleSet(/* s2 18 */ int room_no) {
  int dat_no;
  sceVu0FVECTOR pos;
}

void GuardGhostBattleEnd() {}

void PuzzleGhostInit() {}

void PuzzleGhostLoadReq(/* a0 4 */ u_char pg_no) { int i; }

void PuzzleGhostReq(/* a3 7 */ u_char pg_no) { int i; }

int PuzzleGhostContinue(/* a0 4 */ u_char ev_no) {}

void PuzzleGhostPhotoReq() { int i; }

void PuzzleGhostMain() {}
void PuzzleGhostDispSet() {}

void PuzzleGhostDispMain() { sceVu0FVECTOR room_pos; }

void RareGhostInit() { int i; }

void RareGhostEntrySet() {
  int i;
  int j;
}

int RareGhostLoadReq() {
  int i;
  int ret;
}

int RareGhostLoadGameLoadReq() {
  int i;
  int ret;
}

void RareGhostMain() {}

void RareGhostAppearCtrl() { int i; }

void RareGhostDispCtrl() {
  int i;
  int j;
  int dsp_cnt;
}

int RareGhostDispStartJudge(/* s1 17 */ int rg_no) {
  int dist;
  sceVu0FVECTOR room_pos;
  sceVu0FVECTOR rg_pos;
}

int RareGhostDispEndJudge(/* a0 4 */ int wrk_no) {
  int rg_no;
  int dist;
}

void RareGhostDispTimeCtrl(/* a0 4 */ int wrk_no, int rg_no) {}
void RareGhostDispEndSet(/* a0 4 */ int wrk_no) {}

void RareGhostDispWrkSet(/* s2 18 */ int wrk_no, int rg_no) {
  sceVu0FVECTOR room_pos;
}

void SetRareGhostDispAlpha(/* a0 4 */ int wrk_no, int rg_no) {
  int count;
  int cnt_min;
  u_char alp_no;
  u_char stts;
  u_char alpha;
  u_char mode;
  RG_ALP_DAT *rg_alp;
}

void SetRareGhostDispAnimation(/* a0 4 */ int wrk_no, int rg_no) {}
float SetRareGhostDispRate(/* a0 4 */ int wrk_no) {}

void SettleGhostInit() {}
int SettleGhostAppearReq(/* a0 4 */ int sg_no) {}

void SettleGhostMain() {
  int end;
  static int sg_load_id;
}

int SettleGhostLoadOneSize() {}

int SettleGhostLoadTwoSize() { static int sg_load_id; }

void SettleGhostBattleSet() { sceVu0FVECTOR pos; }

int SettleGhostStartDisp() {}
int SettleGhostBattleEnd() {}
void SettleGhostDispEffect() {}

int ZeroHourAppearMain() {
  sceVu0FVECTOR tv;
  u_char no_tbl[1];
}

void ZeroHourDataBackUp() { int i; }

void ZeroHourEnemyReLoad() {}
void ZeroHourEnemyReLoadAfter() {}
void ZeroHourAfterPosReset() {}
void ZeroHourOutReq() {}

void ZeroHourAfterRoomLoadReq() {
  int i;
  int load_room;
}

int ZeroHourAppearJudge() {}

void EventWrkInit() {}

void EventInit() { int i; }

void EventMain() {
  int i;
  int loop;
  int *addr;
  u_char *dat_adr;
  short int scene_no;
}

void EventOpenMain() {}

u_char EventOpenCtrl() { int i; }

u_char EventOpenJudge(/* s0 16 */ short int event_no) {
  int i;
  int *addr;
  sceVu0FVECTOR ev_pos;
}

int GetEventMessageAddr(/* a0 4 */ short int msg_no) {}

void EventEnemySet(/* s1 17 */ u_char *addr) { int i; }

int BattleEndEventOpenJudge(/* a0 4 */ u_char ene_no) {}

int PhotoEventOpenJudge(/* a0 4 */ u_char pht_2d, u_char pht_furn) { int i; }

float SetRot360(/* a0 4 */ short int rot360) { float rot; }

int EventSceneCtrl(/* s0 16 */ short int scene_no) { int ret; }

int SceneFadeOut() {
  static int fade_cnt;
  static int fade_cnt2;
  int ret;
  int frame;
  float alpha;
}

void InterMissionInit() {}
void InterMissionEnd() {}
void InterMissionMain() {}
void DoorLockBattleSet() {}
void DoorLockBattleAfter() {}
void LockBattleDoorOpen() {}
int LockBattleAfterJudge() {}
void LockBattleDoorOpenMSGDisp() {}
int ScenePlay(/* a0 4 */ short int scene_no) {}
void EndingInit() {}
void EndingMain() {}

void SpecialEventInit(/* a0 4 */ u_char spev_no) {}
void SpecialEventMain() {}
int GetSpecialEventMessageAddr(/* a0 4 */ short int msg_no) {}

void SimpleDispSprt(/* s1 17 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
                    SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void SimpleDispAlphaSprt(/* s1 17 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
                         u_char alp_rate, u_char alp_type) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void SimpleDispSprtRGB(/* s0 16 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
                       SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate,
                       u_char rr, u_char gg, int bb) {
  u_char bb;
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void SimpleDispSprtLNR(/* s1 17 */ SPRT_SDAT *ssd, u_int addr, int sp_no,
                       SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate,
                       int lnr) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void SimpleDispSprtDatCopy(/* a0 4 */ SPRT_SDAT *org, SPRT_SDAT *cpy) {}

void TestPk2Data(/* s1 17 */ long int sendtexaddr) {
  static int ttest_count;
  SPRT_SDAT ssd;
}

int ButtonMarkNext(/* s0 16 */ int x_off, int y_off, int se_flg) {}
int ButtonMarkWait() {}
void ButtonMarkTimeClear() {}

int CsrInclease(/* a0 4 */ u_char *csr_idx, u_char alpha_max, u_char inclease) {
  int ret_num;
}

int CsrDeclease(/* a0 4 */ u_char *csr_idx, u_char alpha_min, int inclease) {
  int ret_num;
}

int CsrBlink(/* a0 4 */ u_char *csr_idx, u_char alpha_max, u_char alpha_min,
             u_char inclease, u_char *blink) {
  int ret_num;
}

void CsrClear(/* a0 4 */ u_char *csr_idx) {}
void CsrClearAll() {}
void SpevStrInit() {}
void SpevWrkInit() {}
void SpevSelectYesNoCsr(/* f12 50 */ float pos_x, float pos_y, int pri,
                        float alp) {}

int DeadlySeStopWait() { static u_char dead_time; }

void DummyProg() {}
void StarPuzzleInit(/* s0 16 */ int pzl_no) {}

void StarPuzzleDataSet(/* a0 4 */ int pzl_no) {
  int i;
  int j;
  u_char line_dat[1][1];
  u_char stone_odr[1];
}

int StarPuzzleMain(/* a1 5 */ int pzl_no) {
  int i;
  int j;
  int tmp0;
  u_char stone_odr[1];
}

int StarPuzzleClearJudge() { int i; }

void StarPuzzleDisp() {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  u_char stone_odr[1];
}

int StarPuzzleMSGMain(/* a1 5 */ int pzl_no) { u_char stone_odr[1]; }

void StarPuzzleMSGDisp() {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void DialKeyDoorInit(/* a0 4 */ int door_no) {}
void DialKeyDoorDataSet(/* a0 4 */ int door_no) {}

int DialKeyDoorMain() { int i; }

void DialKeyDoorDisp() {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
  SPRT_SSCL sscl;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  int msg_index;
}

void DialKeyMSGDoorInit() {}
int DialKeyMSGDoorMain(/* s2 18 */ int msg_no) {}

void DialKeyMSGDoorDisp(/* s3 19 */ int msg_no) {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void GhostDoorInit(/* s0 16 */ int door_no) { int i; }

void GhostDoorSet(/* a2 6 */ int door_no) { int i; }

void GhostDoorMain(/* s0 16 */ int door_no) { int i; }

void GhostDoorDisp(/* s2 18 */ int door_no) {
  int i;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void DollPzlInit() {}

void DollPzlMain() {
  int no;
  int i;
  static int blink_dir;
}

int CursorManagerEvent003() { static int blink_dir; }

void SpecialEventDisp003(/* s1 17 */ int no) {
  int i;
  static int next_count;
  u_char ssd_tmp_col;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void ButsuzoPzlInit() { int i; }

void ButsuzoPzlMain() {
  int i;
  static int t_counter;
}

u_char BldAlpRetern(/* t0 8 */ short int time_cnt, short int bld_appear,
                    short int bld_end, short int bld_alp) {
  int tmp_alp;
}

void SpecialEventDisp004() {
  int i;
  int msg_no;
  static u_char blink_flg;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd2;
  SPRT_SDAT ssd3;
  SPRT_SDAT ssd4;
  DISP_SQAR dsq;
  DISP_STR ds;
  SQAR_DAT menu_sq0;
}

void ButsuzoMSGInit() {}
void ButsuzoMSGMain() {}

void ButsuzoMSGDisp() {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void LightsOutInit() { int i; }

void LightsOutMain() {
  int no;
  int i;
}

void SpecialEventDisp014(/* a0 4 */ int no) {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void FaceDoorInit(/* s0 16 */ int face_no) {}

void FaceDoorMain(/* s3 19 */ int face_no) {
  short int omen_no;
  short int have_omen;
  short int door_avail;
}

void FaceDoorOkSet(/* a0 4 */ int face_no) {}
void FaceDoorAimSet(/* a0 4 */ int face_no) {}

int NisUseCheck(/* a0 4 */ int face_no) { int ret_num; }

void NisUseSet(/* a0 4 */ int face_no) {}
void NisUseUnSet(/* a0 4 */ int face_no) {}

void FaceDoorDisp(/* s4 20 */ int face_no) {
  int i;
  int omen_no;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  int lng1;
  int lng2;
}

void SurpriseDoorInit() {}
void SurpriseDoorMain() {}

void SurpriseDoorDisp(/* a0 4 */ int face_no) {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void SimenPillarInit(/* a0 4 */ int event_no) {}
void SimenPillarMain(/* s0 16 */ int event_no) {}

int SimenCheck() { int i; }

void SimenPillarDisp() {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void IkariMenInit() {}
void IkariMenComeOn() {}
void HanyouKaitenInit(/* a0 4 */ int event_no) {}
void HanyouKaitenMain(/* a0 4 */ int event_no) {}
void ZushiBonjiInit(/* s1 17 */ int bonji_no) {}
void ZushiBonjiMain(/* s2 18 */ int bonji_no) {}

void ZushiBonjiDisp(/* a0 4 */ int bonji_no) {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void ZushiBonjiMSGInit() {}
void ZushiBonjiMSGMain() {}

void ZushiBonjiMSGDisp() {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void ZushiBonjiAfterInit(/* s0 16 */ int bonji_no) {}
void ZushiBonjiAfterMain(/* s0 16 */ int bonji_no) {}

void ZushiBonjiAfterDisp(/* s4 20 */ int bonji_no) {
  int i;
  static int next_count;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
}

void KakejikuDoorInit() {}
void KakejikuDoorMain() {}
void IdoFirstIntoInit() {}
void IdoFirstIntoMain() {}
void IdoIntoInit() {}
void IdoIntoMain() {}
void IdoFirstOutInit() {}
void IdoFirstOutMain() {}
void IdoOutInit() {}
void IdoOutMain() {}

void IdoInOutDisp(/* s0 16 */ int inout) { DISP_STR ds; }

void ItemEventInit(/* a2 6 */ int event_no) {}
void ItemEventMain(/* s2 18 */ int event_no) {}

void ItemEventDisp() { DISP_STR ds; }

void NawakakeFalseMain(/* s0 16 */ int event_no) {}

void NawakakeFalseDisp() { DISP_STR ds; }

void SpecialEventInit000() {}
void SpecialEventMain000() {}
void SpecialEventInit001() {}
void SpecialEventMain001() {}
void SpecialEventInit002() {}
void SpecialEventMain002() {}
void SpecialEventInit003() {}
void SpecialEventMain003() {}
void SpecialEventInit004() {}
void SpecialEventMain004() {}
void SpecialEventInit005() {}
void SpecialEventMain005() {}
void SpecialEventInit006() {}
void SpecialEventMain006() {}
void SpecialEventInit007() {}
void SpecialEventMain007() {}
void SpecialEventInit008() {}
void SpecialEventMain008() {}
void SpecialEventInit009() {}
void SpecialEventMain009() {}
void SpecialEventInit010() {}
void SpecialEventMain010() {}
void SpecialEventInit011() {}
void SpecialEventMain011() {}
void SpecialEventInit012() {}
void SpecialEventMain012() {}
void SpecialEventInit013() {}
void SpecialEventMain013() {}
void SpecialEventInit014() {}
void SpecialEventMain014() {}
void SpecialEventInit015() {}
void SpecialEventMain015() {}
void SpecialEventInit016() {}
void SpecialEventMain016() {}
void SpecialEventInit017() {}
void SpecialEventMain017() {}
void SpecialEventInit018() {}
void SpecialEventMain018() {}
void SpecialEventInit019() {}
void SpecialEventMain019() {}
void SpecialEventInit020() {}
void SpecialEventMain020() {}
void SpecialEventInit021() {}
void SpecialEventMain021() {}
void SpecialEventInit022() {}
void SpecialEventMain022() {}
void SpecialEventInit023() {}
void SpecialEventMain023() {}
void SpecialEventInit024() {}
void SpecialEventMain024() {}
void SpecialEventInit025() {}
void SpecialEventMain025() {}
void SpecialEventInit026() {}
void SpecialEventMain026() {}
void SpecialEventInit027() {}
void SpecialEventMain027() {}
void SpecialEventInit028() {}
void SpecialEventMain028() {}
void SpecialEventInit029() {}
void SpecialEventMain029() {}
void SpecialEventInit030() {}
void SpecialEventMain030() {}
void SpecialEventInit031() {}
void SpecialEventMain031() {}
void SpecialEventInit032() {}
void SpecialEventMain032() {}
void SpecialEventInit033() {}
void SpecialEventMain033() {}
void SpecialEventInit034() {}
void SpecialEventMain034() {}
void SpecialEventInit035() {}
void SpecialEventMain035() {}
void SpecialEventInit036() {}
void SpecialEventMain036() {}
void SpecialEventInit037() {}
void SpecialEventMain037() {}
void SpecialEventInit038() {}
void SpecialEventMain038() {}
void SpecialEventInit039() {}
void SpecialEventMain039() {}
void SpecialEventInit040() {}
void SpecialEventMain040() {}
void SpecialEventInit041() {}
void SpecialEventMain041() {}
void SpecialEventInit042() {}
void SpecialEventMain042() {}
void SpecialEventInit043() {}
void SpecialEventMain043() {}
void SpecialEventInit044() {}
void SpecialEventMain044() {}
void SpecialEventInit045() {}
void SpecialEventMain045() {}
void SpecialEventInit046() {}
void SpecialEventMain046() {}
void SpecialEventInit047() {}
void SpecialEventMain047() {}
void SpecialEventInit048() {}
void SpecialEventMain048() {}
void SpecialEventInit049() {}
void SpecialEventMain049() {}
void SpecialEventInit050() {}
void SpecialEventMain050() {}
void SpecialEventInit051() {}
void SpecialEventMain051() {}
void SpecialEventInit052() {}
void SpecialEventMain052() {}
void SpecialEventInit053() {}
void SpecialEventMain053() {}
void SpecialEventInit054() {}
void SpecialEventMain054() {}
void SpecialEventInit055() {}
void SpecialEventMain055() {}
void SpecialEventInit056() {}
void SpecialEventMain056() {}
void SpecialEventInit057() {}
void SpecialEventMain057() {}
void SpecialEventInit058() {}
void SpecialEventMain058() {}
void SpecialEventInit059() {}
void SpecialEventMain059() {}
void SpecialEventInit060() {}
void SpecialEventMain060() {}
void SpecialEventInit061() {}
void SpecialEventMain061() {}
void SpecialEventInit062() {}
void SpecialEventMain062() {}
void SpecialEventInit063() {}
void SpecialEventMain063() {}
void SpecialEventInit064() {}
void SpecialEventMain064() {}
void SpecialEventInit065() {}
void SpecialEventMain065() {}
void SpecialEventInit066() {}
void SpecialEventMain066() {}
void SpecialEventInit067() {}
void SpecialEventMain067() {}
void SpecialEventInit068() {}
void SpecialEventMain068() {}
void SpecialEventInit069() {}
void SpecialEventMain069() {}
void SpecialEventInit070() {}
void SpecialEventMain070() {}
void SpecialEventInit071() {}
void SpecialEventMain071() {}
void SpecialEventInit072() {}
void SpecialEventMain072() {}
void SpecialEventInit073() {}
void SpecialEventMain073() {}
void SpecialEventInit074() {}
void SpecialEventMain074() {}
void SpecialEventInit075() {}
void SpecialEventMain075() {}
void SpecialEventInit076() {}
void SpecialEventMain076() {}
void SpecialEventInit077() {}
void SpecialEventMain077() {}
void SpecialEventInit078() {}
void SpecialEventMain078() {}
void SpecialEventInit079() {}
void SpecialEventMain079() {}
void SpecialEventInit080() {}
void SpecialEventMain080() {}
void SpecialEventInit081() {}
void SpecialEventMain081() {}
void SpecialEventInit082() {}
void SpecialEventMain082() {}
void SpecialEventInit083() {}
void SpecialEventMain083() {}
void SpecialEventInit084() {}
void SpecialEventMain084() {}
void SpecialEventInit085() {}
void SpecialEventMain085() {}
void SpecialEventInit086() {}
void SpecialEventMain086() {}
void SpecialEventInit087() {}
void SpecialEventMain087() {}
void SpecialEventInit088() {}
void SpecialEventMain088() {}
void SpecialEventInit089() {}
void SpecialEventMain089() {}
void SpecialEventInit090() {}
void SpecialEventMain090() {}

void MissionTitleInit(/* s0 16 */ int msn_no) {}
int MissionTitleMain(/* s0 16 */ int msn_no) {}
int MissionTitleLoad(/* s1 17 */ int msn_no) {}

int MissionDataLoadReq(/* s0 16 */ MSN_LOAD_DAT *dat) { int ret; }

void MissionDataLoadAfterInit(/* a3 7 */ MSN_LOAD_DAT *dat) {}

void DataLoadWrkInit() { int i; }

void SetDataLoadWrk(/* a0 4 */ MSN_LOAD_DAT *dat) { int i; }

void DelDataLoadWrk(/* a0 4 */ u_short file_no) {}

u_int GetLoadDataAddr(/* a0 4 */ u_short file_no) { int i; }

void SortLoadDataAddr() {
  int i;
  int j;
  MSN_LOAD_DAT tmp;
}

void MissionTitleDisp(/* s2 18 */ int msn_no) {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
}

void StageTitleDisp(/* a0 4 */ int msn_no) {
  int i;
  u_char alp_rate;
  SPRT_SDAT ssd;
}

void EventLoadDataInit() {}

int EventLoadData(/* s2 18 */ u_char load_no) {
  SCN_LOAD_DAT *sld;
  MSN_LOAD_DAT *mld;
  int i;
}

int GetLoadGhostInfo(/* a0 4 */ u_char *load_inf) {
  int i;
  int count;
}

void MikuCGDisp() {
  int i;
  SPRT_SDAT ssd;
}

void RoomLoadReq(/* s2 18 */ int load_room) { int i; }

void EventMovieCommandInit() {}

void EventMovieCommandMain(/* a3 7 */ int flame, int top_addr) {
  int *dat_addr;
  u_char *cmd_addr;
}

int GetMovieMessageAddr(/* a0 4 */ short int msg_no) {}

void InformationDispInit() {}

void InformationDispMain() {
  short int fndr_mx;
  short int fndr_my;
}

void InformationDispModeCtrl() {}

static void FndrInit() {
  int i;
  short int init;
}

void InformationDispWrkSet() {}
void PlayerInformationDisp(/* a0 4 */ short int pos_x, short int pos_y) {}

void FinderDisp(/* a0 4 */ short int pos_x, short int pos_y) {
  short int bon_x[1];
  short int bon_y[1];
  char bon_c[1];
}

void PhotoScoreDispOnOff(/* a0 4 */ int on_off) {}
static void SttsFade() {}
static void FndrFade() {}

static void WeakPoint(/* -0xe0(sp) */ short int pos_x, short int pos_y) {
  int i;
  u_char alp;
  u_char siz;
  float ex;
  float ey;
  u_char hnt_alp_num;
  u_char ray_alp_num;
  short int hnt_all_alp;
  u_char chrg_max;
  u_char chrg_alp;
  float chrg_rate;
  short int big_size;
}

static void DspBigCircle(/* a0 4 */ u_short lu_chr, short int pos_x,
                         short int pos_y, u_char alp, short int size_r,
                         u_char cl_ptn) {
  int i;
  DISP_SPRT ds;
}

static void PointerNP(/* a0 4 */ short int cx, short int cy, u_char red,
                      u_char alp, float siz) {}

static void PointerEN(/* s0 16 */ short int pos_x, short int pos_y, u_char red,
                      u_char alp, float size) {
  float scl;
  DISP_SPRT ds;
}

static void FilmZansu(/* s3 19 */ int number, short int pos_x, short int pos_y,
                      short int num_x, short int num_y, int digit) {
  int i;
  int multi10;
  int multi10_bak;
  int dsp_num;
  u_char dsp_mode;
}

static void NumDisp(/* t0 8 */ u_char number, u_char no, short int pos_x,
                    short int pos_y, short int num_x, short int num_y,
                    u_char mode) {
  float alp;
  float slot_mov;
  int i;
  short int dsp_y;
  signed char dsp_v;
  signed char dsp_h;
  DISP_SPRT ds;
}

void YVH_CUT(/* a0 4 */ short int tmp_y, u_char tmp_h, short int up_lmt,
             short int dwn_lmt, short int *dsp_y, signed char *dsp_v,
             u_char *dsp_h) {}

static void EdogawaLamp(/* s2 18 */ short int pos_x, short int pos_y,
                        u_char out) {
  float chk;
  float pow;
  float lag_pow;
  float cng_pow;
  float cmn_pow;
  signed char pow_add;
  u_char f_max;
  float f;
  u_char sml_alp;
  u_char lag_alp;
  u_char cmn_alp;
  int i;
  u_char ene_num;
  u_char obj;
}

static void NewFndrBase(/* a0 4 */ short int pos_x, short int pos_y) {}

static void BigBon(/* s0 16 */ u_char bon_num, short int sx, short int sy,
                   short int ex, short int ey, u_char mov_tim) {
  int i;
  int j;
  float pr1;
  short int msx;
  short int msy;
  short int mex;
  short int mey;
}

static void BigBon2(/* s0 16 */ u_char bon_num, short int sx, short int sy,
                    short int ex, short int ey, u_char mov_tim) {
  int i;
  int j;
  u_char alp;
  float spd;
  short int msx;
  short int msy;
  short int mex;
  short int mey;
}

static char GetEnePoint() { int i; }

static void MafubaInit(/* f12 50 */ float t2_s1, float t2_s2) {}

static u_char Mafuba(/* s7 23 */ short int pos_x, short int pos_y, u_char stts,
                     u_char t1, u_char t2, u_char t3, u_char t4, u_char t5,
                     int t1_sw, float t2_s1, float t2_s2) {
  u_char t1_sw;
  int j;
  u_char alp_max;
}

static void MafubaFinish(/* s1 17 */ short int pos_x, short int pos_y,
                         u_char start, u_char time) {
  u_char alp_max;
}

static void DameEffNumber(/* a0 4 */ u_char type, u_short num, short int pos_x,
                          short int pos_y, u_char stts, u_char num_alp,
                          u_char num_siz_x, u_char num_siz_y) {
  u_char keta;
  u_char adj;
  float temp;
}

static void SndEffLoop() {}

static void ShowEneCtrl(/* s2 18 */ short int pos_x, short int pos_y) {
  u_char ene_no;
  u_char alp_max;
  u_short ene_hp;
}

static char EneDamegeCtrl(/* s4 20 */ short int pos_x, short int pos_y) {
  u_char alp_max;
  u_char ep_bar1;
  u_char dsp_no;
  u_short ene_no;
  u_short ene_dmg;
  u_short bar_red;
  u_short bar_blu;
}

static void ShowEnePower(/* s5 21 */ u_char blu_bar, u_char red_bar,
                         short int pos_x, short int pos_y, u_char alp,
                         u_char bar_over) {
  float rgb_per;
  float alp_per;
  int ovr_ene_rgb;
}

static void Koutakun(/* a0 4 */ u_char blu_bar, short int pos_x,
                     short int pos_y, u_char alp) {
  short int dsp_u;
  short int dsp_w;
  short int dsp_x;
}

static void ShowMikuPower(/* a0 4 */ short int pos_x, short int pos_y) {}

static void ShowMikuPower2(/* s5 21 */ short int pos_x, short int pos_y) {
  static FLSH_CORE flsh_life;
  u_char alp;
  u_short blu_bar;
}

static void DspKotaku(/* a0 4 */ u_short chr, short int pos_x, short int pos_y,
                      u_char alp, u_char dsp_u, u_char dsp_w, u_short dsp_x) {
  DISP_SPRT ds;
}

static void GayBar(/* a0 4 */ u_short chr, short int pos_x, short int pos_y,
                   u_char alp, float scl) {
  DISP_SPRT ds;
}

static void GayBar2(/* a0 4 */ u_short top_chr, u_short end_chr,
                    short int pos_x, short int pos_y, u_char alp, float scl) {
  int i;
  DISP_SPRT ds;
}

static void JetCD(/* s6 22 */ JET_SET *ninjin, u_char num, u_char tim,
                  u_char spd, u_char wid, u_short chr, u_char hgh,
                  short int mov_h, int mov_v, int px, int base, int alp) {
  short int mov_v;
  short int px;
  short int base;
  u_char alp;
  int i;
  float nin_scl_x;
}

static void SyonenJet(/* a0 4 */ u_short chr, u_char hgh, short int mov_h,
                      short int mov_v, short int px, short int base, u_char alp,
                      float scl_x, float scl_y) {
  DISP_SPRT ds;
}

static void TameKin2(/* s2 18 */ short int pos_x, short int pos_y) {
  int i;
  int j;
  u_char alp;
  float per;
  u_char charge_max;
  u_char ini_num;
  u_char top;
  u_char chrg_rot;
  u_char chrg_alp;
  u_char chrg_siz;
  u_char chrg_rgb;
  u_char chrg_flr;
  u_char init_alp;
}

static void ZanzoSS(/* t0 8 */ ZAN *zz) { int i; }

static void ZanzoSM(/* a0 4 */ ZAN *zz, u_char num1, u_char num2, u_char num3,
                    u_char num4, u_char mode) {
  int i;
}

static void ZanzoLS(/* a0 4 */ u_char *zz) { int i; }

static void ZanzoLM(/* a0 4 */ u_char *zz, u_char per) { int i; }

static void AhoBon(/* a0 4 */ u_short chr, short int px, short int py,
                   u_char rot, u_char rgb, u_char alp, u_char siz,
                   u_char now_num, int ini_num) {
  u_char ini_num;
  float xo;
  float yo;
  DISP_SPRT ds;
}

static void BakBon(/* a0 4 */ u_short chr, short int px, short int py,
                   u_char flr) {
  float xo;
  float yo;
  DISP_SPRT ds;
  int rgb;
}

static void PhotoScoreDisp(/* s0 16 */ int count, int wait) {
  u_char alp_table2[1];
  static int e_flow;
  static float fcnt;
  float fnum;
  float fslide;
  u_char alp;
  int cnt;
  float fw;
  float f;
  DISP_SPRT ds;
  SPRT_DAT raze_sprt;
}

void InfoDispPause() {}
void InfoDispRestart() {}

static void BukiyouMan(/* s3 19 */ short int px, short int py) {
  u_char alp_max;
  u_char num;
  u_char buki_alp;
}

static void DameDameInit() { int i; }

static void GekisyaBoyGeisyaGirl(/* s3 19 */ short int px, short int py) {
  int i;
  u_char alp1;
  u_char alp2;
  u_char alp_max;
  u_char mov;
  short int y[1];
}

static char KanKinoSyogai(/* a0 4 */ short int pos_x, short int pos_y) {
  int i;
  char dir;
}

int isDispLamp() {}

int MissonMapDataLoad(/* a0 4 */ u_char msn_no) {}
void InitMapStatus(/* a0 4 */ u_char msn_no) {}
void MapDataInit() {}
void MapMissionChange(/* a0 4 */ u_char new_msn) {}
void RoomPassInit() {}
void RoomPass(/* a0 4 */ u_char room_id) {}
int IsRoomPass(/* a0 4 */ u_char room_id) {}
void MapFloorChange(/* a0 4 */ u_char new_floor) {}

int GetFloorTopAddr(/* a0 4 */ u_char floor) { int *addr; }

void InitMap() { int i; }

void MapCtrlMain() {
  int get_room;
  float get_y;
}

void GetNewRoomData() {}
u_char RoomWrkRenew() {}
void CameraNoRenewEach(/* a0 4 */ u_char cam_type) {}
static void CameraNoRenew() {}

void DbgGetDrmCamNo() { int j; }

static u_short CameraGetDoramaCameraNo(/* s4 20 */ u_short now_cam_no) {
  u_int *addr_ui0;
  u_int *addr_ui1;
  u_short *dcamp;
  int i;
  int j;
  u_short cam_no[1];
  u_char room_no;
  u_char data_num;
  u_char get_flg;
  u_char now_camera_get_flg;
  u_char drm_cam_no_get_flg;
  static int count;
}

u_short CameraGetDoorCameraNo(/* a0 4 */ u_short door_id0, u_short door_id1) {
  CAMERA4_DATA_POP *cdpp;
  u_int *addr_ui0;
  u_int *addr_ui1;
  int i;
  int j;
  u_short dr_id[1];
  u_char room_no;
  u_char data_num;
}

static u_short CameraCheckDoorCameraNo(/* s4 20 */ u_short door_id,
                                       u_char room_id) {
  CAMERA4_DATA_POP *cdpp;
  u_int *addr_ui0;
  u_int *addr_ui1;
  u_int *addr_ui2;
  int i;
  u_char room_no;
  u_char data_num;
}

static void PlayerHeightRenew() {}

static u_char GetRoomNum() { int *addr; }

static u_char GetRoomNumFloor(/* a0 4 */ u_char floor) { int *addr; }

static u_char GetDataNum(/* s0 16 */ u_char map, u_char room) {
  int *addr;
  u_char data_room;
}

static u_char RoomChangeJudge() {}
static u_char CameraChangeJudgeEach(/* a0 4 */ u_char cam_type,
                                    u_short cam_no) {}
static u_char CameraChangeJudge() {}
static u_char HeightChangeJudge() {}

static u_char GetNowRoom() { u_char i; }

u_char GetRoomIdFromRoomNo(/* a0 4 */ u_char map, u_char room_no) {
  int *addr0;
  u_char *addr1;
  int i;
  u_char room_id;
  u_char room_num;
}

u_char GetRoomIdFromRoomNoFloor(/* s1 17 */ u_char map, u_char room_no,
                                u_char floor) {
  int *addr0;
  u_char *addr1;
  int i;
  u_char room_id;
  u_char room_num;
}

static u_char GetDoorRoomIdFromRoomNo(/* s0 16 */ u_char room_no) {
  u_char *addr1;
  int i;
  u_char room_num;
  u_char room_id;
}

static u_char GetDoorRoomIdFromRoomNoFloor(/* s0 16 */ u_char room_no,
                                           u_char floor) {
  u_char *addr1;
  int i;
  u_char room_num;
  u_char room_id;
}

u_char GetDataRoom(/* a0 4 */ u_char map, u_char room_id) {
  int *addr0;
  u_char *addr1;
  u_char i;
  u_char room_num;
}

static u_char GetDoorDataRoom(/* s0 16 */ u_char room_id) {
  u_char *addr1;
  u_char i;
  u_char room_num;
}

static u_short GetNowCameraEach(/* s3 19 */ u_char cam_type, u_char cam_num,
                                u_char *rm_cam_no) {
  u_char i;
  u_char room;
  int *addr;
}

static u_short GetNowCamera() {
  u_char i;
  u_char room;
  int *addr;
}

static float GetNowHeight() {
  u_char i;
  u_char room;
  int *addr;
}

int GetPointRoomNo(/* s2 18 */ u_short pos_x, u_short pos_z) { int i; }

int GetPointRoomNoFloor(/* s4 20 */ u_short pos_x, u_short pos_z,
                        u_char floor) {
  int i;
  u_char room_num;
}

int GetPointRoom(/* a0 4 */ u_short pos_x, u_short pos_z) { int *addr; }

float GetPointHeight(/* s6 22 */ u_short pos_x, u_short pos_z) {
  u_char i;
  u_char room;
  int *addr;
}

static void GetPlayerRoom(/* a0 4 */ u_char room) { int *addr; }

static void GetRoomDispPos(/* a0 4 */ u_char room) { int *addr; }

u_char PosInAreaJudge0(/* a0 4 */ u_char room, u_short pos_x, u_short pos_y) {
  int i;
  int *addr;
  int *addr_bak;
  u_char sq_num;
}

static u_char PosInAreaJudge0Floor(/* s1 17 */ u_char room, u_short pos_x,
                                   u_short pos_y, u_char floor) {
  int i;
  int *addr;
  int *addr_bak;
  u_char sq_num;
}

u_char PosInAreaJudge1(/* t1 9 */ u_char map, u_char room, u_char data,
                       u_short pos_x, u_short pos_y) {
  int i;
  int *addr;
  int *addr_bak;
  u_char sq_num;
  u_char ofs[1];
}

u_char MapHitCheck(/* s3 19 */ u_short pos_x, u_short pos_y, u_char room_id) {
  int i;
  u_char room_no;
}

u_char MapHitCheckAll(/* a0 4 */ u_short pos_x, u_short pos_y, u_char room_id) {
  u_char hit_flg;
}

void PlyrHitRot(/* s3 19 */ float *pos, float *dst, float *go_rot,
                float *no_rot, u_char div, u_char room_id) {
  sceVu0FVECTOR rpos;
  float chk_rot;
}

u_char PlyrMapHitCheck(/* s1 17 */ float *dst, float *pos, u_char div,
                       u_char room_id) {
  sceVu0FVECTOR rpos;
  float chk_rot;
  float chk_rotbk[1];
  float ok_rot[1];
  int i;
  int j;
  u_char div_bk;
  u_char ng_flg[1];
}

int PlyrMapHitMoveOfs(/* s7 23 */ float *dst, float *pos, u_char room,
                      u_char flr_room) {
  int i;
  int j;
  int k;
  int x_ofs;
  int z_ofs;
  float lng_cmp;
  sceVu0FVECTOR cpos;
  sceVu0FVECTOR dpos;
}

static void GetNowOpenEvent() {
  u_char i;
  u_char room;
  u_char cnt;
  int *addr;
}

static void GetNowOpenFindAct() {
  u_char i;
  u_char room;
  u_char cnt;
  int *addr;
}

static void GetNowPlayerMoveMotion() {}

u_char GetPointMoveMotion(/* s2 18 */ float *p, u_char no) {
  int *addr;
  u_char i;
  u_char room;
  u_char mot;
}

u_char MapCameraCdivideAB(/* s1 17 */ u_short data_no, u_short *xmin,
                          u_short *xmax, u_short *ymin, u_short *ymax,
                          u_char cam_type) {
  int i;
  int x_cnt;
  int *addr;
  int *dat_addr;
  int cmpx[1];
  int cmpy[1];
}

void NakasuHazeSet() {
  int i;
  u_char on_flg;
}

void DebugMemoryCheck(/* a0 4 */ u_char *addr, int size) { int i; }

static void MapSetFloorSeNo() {
  int *addr_si;
  int i;
  u_char room;
  u_char data_no;
}

int GetRoomPos(/* a0 4 */ u_char room_no, float *room_pos) {
  u_char dat_room;
  int *addr;
}

void MapAreaInit() { int i; }

void MapAreaMain() {}
int MapAreaRoomLoadReq() {}
void MapAreaLoadSet() {}

u_char GetRoomArea(/* a0 4 */ u_char room_id) {
  int i;
  int j;
}

int SetAreaLoadRoom(/* s2 18 */ u_char mode, u_char area_no) {
  int i;
  int j;
  int count;
  int tmp0[1];
  int tmp1[1];
  int tmp2[1];
  int tmp3;
}

void AreaRoomAllLoadInit() { int i; }

int AreaRoomAllLoad(/* a0 4 */ u_char area_no) { int i; }

int GetEmptyRoomAddr() { int i; }

void ClearDispRoom(/* a0 4 */ int wrk_no) {
  DOOR_WRK *dwp;
  int i;
}

u_char IsUseDoor(/* a0 4 */ u_char use) {}

short int SearchDoorWrk(/* s2 18 */ int door_id) {
  DOOR_WRK *dwp;
  int i;
}

static short int SearchAcDoor(/* a0 4 */ int door_id) {
  AUTO_CLOSE_DOOR_WRK *acp;
  int i;
}

static short int SearchNcDoor(/* a0 4 */ int door_id) {
  NON_CLOSE_DOOR_WRK *ncp;
  int i;
}

void ClearDoorAttrFlg() {}

void InitDoorAttrFlg() {
  int addr_map;
  int *addr_si0;
  int *addr_si1;
  u_short *addr_us;
  int i;
  u_short dat_num;
  int k;
}

void DoorPassRoom(/* a0 4 */ u_char room_id) {
  int *addr_si0;
  u_char *addr_uc0;
  int i;
  u_char dr_num;
}

void DoorRDoorSetRotOK(/* s3 19 */ u_short door_id) {
  DOOR_WRK *dwp;
  int i;
}

void DoorPassSetSttsMap(/* a0 4 */ u_short door_id) {}
void DoorPassSetHide(/* a0 4 */ u_short door_id) {}
void DoorPassSetTouch(/* a0 4 */ u_short door_id) {}

void DoorAcInit() { int i; }

void DoorCtrlInit() {
  int i;
  int j;
  int *addr;
  u_short *addr_us;
  u_short ncd_num;
}

static void InitDoorOpenCtrl() {}
void InitAreaReadWrk() {}

void DoorDataInit() {
  int i;
  int j;
  int *addr_si;
  u_char *addr_uc;
  u_short *dr_tbl;
  u_char dr_all;
  u_char dr_num;
  u_short dr_id;
  u_short dr_no;
  u_char no_use_fw;
  u_char no_use_dw;
  u_char room_id;
}

static void SetDoorSttsData(/* t2 10 */ int dw_no, int door_id, u_char type) {
  int i;
}

static void SetDoorSttsEve(/* a0 4 */ int door_id, u_char stts) {
  DOOR_STTS_KEEP *dskp;
}

static void SetDoorLockEve(/* a0 4 */ int door_id, u_char lock) {
  DOOR_STTS_KEEP *dskp;
}

void DoorSetAllLocked() {
  DOOR_STTS_KEEP *dskp;
  DOOR_WRK *dwp;
  int i;
}

int IsInDoorSpuare() { DOJ_SQUARE_MTN dsm; }

u_char GetRoomIdBeyondDoor2() {}

u_char GetRoomIdBeyondDoor(/* s0 16 */ u_short door_id, u_char now_room_id) {
  u_char *addr_uc;
  int i;
  u_char next_room_id;
  u_char dr_num;
}

u_char IsAllConnectDoorClose() {
  DOOR_WRK *dwp;
  NON_CLOSE_DOOR_WRK *ncp;
  int i;
  int j;
  u_char dscv_flg;
}

void LockAllDoorInNowRoom() {
  NON_CLOSE_DOOR_WRK *ncp;
  AUTO_CLOSE_DOOR_WRK *acp;
  u_char *addr_uc;
  int i;
  int j;
  int k;
  u_short tmp_did;
  u_char now_room_id;
  u_char next_room_id;
  u_char dr_num;
  u_char nuke;
  u_char lock_did_num;
}

void UnlockAllDoorInNowRoom() {
  DOOR_WRK *dwp;
  int i;
  int j;
}

u_char IsDoorLoad(/* a0 4 */ u_char type) {}

int GetRoomDoorID(/* s4 20 */ u_char room_id, u_short *door_id, u_char msn_no) {
  u_int *addr_cmn;
  u_int *adr_door_data_top;
  u_int *adr_drrm_top;
  u_int *adr_drdt_top;
  u_char *adr_rmnum;
  u_short *adr_drnum;
  u_char *adr_dr_tmp;
  u_int *adr_dd_tmp;
  u_short *adr_dtmp;
  u_char *adr_rtmp;
  u_char *adr_tmp_uc0;
  int ret;
  int i;
  int j;
  int k;
  u_short all_door_num;
  u_char dr_room_num;
  u_short door_num;
}

static void SetDoorWrk(/* s1 17 */ int dw_no, u_int *addr, int dr_id,
                       int fwrk_no) {
  DOOR_WRK *dwp;
}

static void DoorSetFurnWrk(/* a0 4 */ int dwrk_no, int fwrk_no, u_char use,
                           u_char room_id) {}
void DoorCtrlMain() {}
u_char IsDoorOpenCtrlMode() {}

static void DoorCtrlOpen() {
  DOJ_SQUARE_MTN *dsmtnp;
  DOOR_MTN_DAT *dmotionp;
  AUTO_CLOSE_DOOR_WRK *acp;
  NON_CLOSE_DOOR_WRK *ncp;
  float tmp_rot;
  int i;
  int j;
  static int load_id;
  static u_char req_flg;
  u_short tmp_rot_door_id;
}

void SetPlyrPosAfterDOpen() {
  PLYR_WRK *pwp;
  MOVE_BOX *mbp;
}

static void SetNcDwrk(/* a0 4 */ int nc_dwrk_pos, int dwrk_pos, u_char stts) {
  NON_CLOSE_DOOR_WRK *ncp;
  DOOR_WRK *dwp;
  DOOR_TYPE_DAT *dtdp;
}

static void SetAcDwrk(/* a0 4 */ int ac_dwrk_pos, int dwrk_pos, u_char stts) {
  AUTO_CLOSE_DOOR_WRK *acp;
  DOOR_WRK *dwp;
  DOOR_TYPE_DAT *dtdp;
}

static void DoorCtrlAutoClose() {
  DOOR_TYPE_DAT *dtdp;
  DOOR_WRK *dwp;
  AUTO_CLOSE_DOOR_WRK *acp;
  int i;
  int j;
  int k;
  u_short del_id;
}

void AllCloseAcDoor() {
  AUTO_CLOSE_DOOR_WRK *acp;
  int i;
}

void AllCloseConnectDoor() {
  DOOR_WRK *dwp;
  int i;
  u_char now_rid;
}

static int DoorReOpenCheck(/* s1 17 */ float *pos, int dwrk_no, u_short count,
                           u_char type) {
  DOOR_WRK *dwp;
  sceVu0FVECTOR tmp_dpos;
}

static void DoorCtrlNoClose() {
  DOOR_TYPE_DAT *dtdp;
  DOOR_WRK *dwp;
  NON_CLOSE_DOOR_WRK *ncp;
  int i;
  u_short del_id;
}

static float DoorOpenCtrlRot(/* f12 50 */ float count, float move_max,
                             float open_wait) {}
static short int DoorOpenCtrlSlide(/* a0 4 */ u_short count, short int move_max,
                                   u_short open_wait) {}
void DoorOpenCheckMain() {}
void DoorCheckOn(/* s0 16 */ u_char mode) {}
void DoorCheckOff() {}
static void SetDoorOpenPlyrPos() {}

u_char DoorOpenJudge() {
  u_short door_id[1];
  u_char sq_no;
}

void SetDoorOpenCameraNo() {
  int i;
  u_short door_id[1];
}

int AreaReadCheck() {
  u_char *addr_uc;
  int i;
  int dwrk_no;
  u_char type;
  u_char dr_num;
}

static u_char DoorOpenCheck(/* s0 16 */ u_char chk_stat) {
  sceVu0FVECTOR dbase1;
  sceVu0FVECTOR dbase2;
  DOJ_SQUARE tmp;
  DOJ_SQUARE_MTN *dsmp;
  DOOR_TYPE_DAT *dtdp;
  int dwn[1];
  int exc_flg;
  float dbrot1;
  float dbrot2;
  float p_rot;
  u_char is_door;
  u_char is_dbl;
  u_char is_kuguri;
  int i;
  int j;
  u_char ret_flg;
}

static int GetDoorBaseRot(/* a0 4 */ DOJ_SQUARE_MTN *dsmp, float *dbrot1,
                          float *dbrot2, u_char is_dbl, u_char is_door) {
  sceVu0FVECTOR dbase1;
  sceVu0FVECTOR dbase2;
  int dwn[1];
}

static void DoorOpenCheckSquareArea(/* -0xc0(sp) */ DOJ_SQUARE_MTN *dsmp,
                                    u_char stat_chk, u_char hs_chk) {
  int *ddp;
  int *dhp;
  int *dsp;
  u_char *rdp;
  u_char *stp;
  int i;
  int j;
  int dwrk_pos;
  u_short pos_x;
  u_short pos_y;
  u_char dr_num;
  u_char ds_num;
}

static u_char DoorOpenSttsPermissionCheck(/* a0 4 */ int dwrk_pos,
                                          u_char stat_chk) {}
static void DoorInitDSM(/* a0 4 */ DOJ_SQUARE_MTN *dsmp) {}
static void DoorSetDSM(/* a0 4 */ DOJ_SQUARE_MTN *dsmp, int dwrk_no,
                       u_char type, u_char sq_no) {}
static u_char DoorGetOpenSquareNo(/* a0 4 */ DOJ_SQUARE_MTN *dsmp) {}
int DoorKeyLock(/* a0 4 */ u_short door_id) {}
int DoorKeyLockOnly(/* a0 4 */ u_short door_id) {}
int DoorKeyUnlock(/* a0 4 */ u_short door_id) {}
int DoorKeyUnlockOnly(/* a0 4 */ u_short door_id) {}

static int DoorLockChange(/* s0 16 */ u_short door_id, u_char lock) { int i; }

int DoorSttsChange(/* s0 16 */ u_short door_id, u_char stts) {
  int i;
  int dwrk_no;
}

u_char DoorHitCheck(/* -0xf0(sp) */ u_char *dx_max, u_char *dz_max, float *dst,
                    float *ppos, u_char div) {
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
  sceVu0FVECTOR v3;
  sceVu0FVECTOR pos;
  DOOR_TYPE_DAT *dtdp;
  int *ddp;
  int *dhp;
  int *dsp;
  u_char *rdp;
  u_char *stp;
  int i;
  int j;
  int k;
  float mv_x;
  float mv_z;
  float sa;
  float sb;
  float p_rot;
  u_char div_x;
  u_char div_z;
  u_char dr_num;
  u_short dr_type;
}

u_char DoorHitCheck2(/* s7 23 */ u_short pos_x, u_short pos_y, u_char room_id) {
  DOOR_TYPE_DAT *dtdp;
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
  sceVu0FVECTOR v3;
  DOOR_WRK *dwp;
  int *ddp;
  int *dhp;
  int *dsp;
  u_char *rdp;
  int i;
  int j;
  u_char dr_num;
}

u_char DoorCoverCheck(/* s6 22 */ u_short pos_x, short int pos_y, u_short pos_z,
                      u_char room_id) {
  DOOR_TYPE_DAT *dtdp;
  int *dsp;
  int *ddp;
  int *dhp;
  u_char *rdp;
  sceVu0FVECTOR v0;
  sceVu0FVECTOR v1;
  sceVu0FVECTOR v2;
  sceVu0FVECTOR v3;
  int i;
  int j;
  int k;
  u_short count;
  u_char dr_num;
  u_char dr_type;
  u_char hit_flg;
}

static void GetFusumaHitVertex(/* -0xc0(sp) */ float *axis, float *v0,
                               float *v1, float *v2, float *v3, float pre_rot,
                               u_short count, u_short type) {
  sceVu0FVECTOR av0;
  sceVu0FVECTOR av1;
  sceVu0FVECTOR av2;
  sceVu0FVECTOR av3;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR add_sld;
  DOOR_TYPE_DAT *dtdp;
  int i;
}

static void GetFusumaHitVertex2(float *axis, float *v0, float *v1, float *v2,
                                float *v3, float pre_rot, u_short count,
                                u_short type, u_char mv) {
  sceVu0FVECTOR av0;
  sceVu0FVECTOR av1;
  sceVu0FVECTOR av2;
  sceVu0FVECTOR av3;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR add_sld;
  int i;
}

static void GetDoorHitVertex(/* fp 30 */ float *axis, float *v0, float *v1,
                             float *v2, float *v3, float pre_rot, u_short count,
                             u_short type) {
  sceVu0FVECTOR av0;
  sceVu0FVECTOR av1;
  sceVu0FVECTOR av2;
  sceVu0FVECTOR av3;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR add_sld;
  int i;
}

static void GetDoorHitVertex2(float *axis, float *v0, float *v1, float *v2,
                              float *v3, float pre_rot, u_short count,
                              u_short type, u_char mv) {
  sceVu0FVECTOR av0;
  sceVu0FVECTOR av1;
  sceVu0FVECTOR av2;
  sceVu0FVECTOR av3;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR add_sld;
  int i;
}

static int ChkRotBetween(/* f12 50 */ float sa, float sb, float rot) {}

void DoorDataRenewNow() { int i; }

void DoorFreeFurnWrk(/* a0 4 */ u_char room_id) { int i; }

void DoorJoint2Next() { int i; }

void DoorDataRenewNext(/* -0xc0(sp) */ u_char room_id) {
  int *addr_si;
  u_char *addr_uc;
  u_short *dr_tbl;
  int i;
  int j;
  u_char no_use_dw;
  u_char no_use_fw;
  u_char dr_num;
  u_short dr_id;
  u_short dr_no;
  u_short dr_all;
}

u_char GetNextRIdFromRNoDId(/* a0 4 */ u_char room_no, u_short door_id) {
  int *addr_si;
  u_char *addr_uc;
  int i;
  u_char dr_num;
}

u_char NextRoomRenew() { int *addr; }

u_char ChkNextRoomIsInsite() {
  sceVu0FVECTOR dp;
  sceVu0FVECTOR dv;
  short int *addr_ss;
  float drot;
  float dst_min;
  float tmp_dst;
  u_short dst_min_did;
  u_char dst_min_nrid;
  u_char *addr_uc;
  u_char next_rm_id;
  u_short dr_id;
  u_char dr_num;
  u_char i;
  u_char now_room_id;
}

u_char *GetDoorRoomNumP() { int *addr; }

u_char *GetDoorRoomNumPFloor(/* a0 4 */ u_char floor) { int *addr; }

static u_short *GetDoorDoorNumP() { int *addr; }

u_char *GetDoorRoomConectDataP(/* s0 16 */ u_char room_id) {
  u_char *addr_uc;
  int *addr_si;
  u_char room_num;
  u_char i;
}

static int *GetDoorDataTopP(/* s0 16 */ u_short door_id) {
  int *addr_si;
  u_short *addr_us;
  u_char i;
  u_short door_num;
}

static int *GetDoorDataHeader(/* a0 4 */ u_short door_id) { int *addr_si; }

int ChkDoorIsInsite(/* s1 17 */ float *dpos, float dpre_rot, u_short door_id) {
  sceVu0FVECTOR vr;
  sceVu0FVECTOR vp;
  sceVu0FVECTOR r2;
  sceVu0FVECTOR tvp;
  sceVu0FVECTOR dp;
  float rot_center;
  float rot_door;
  float view_rad;
  float dist_obj;
  float cam_rot;
  int ret_val;
  int i;
}

int ChkDoorIsInsite2(/* s0 16 */ float *dpos, float dpre_rot, u_short door_id) {
  sceVu0FVECTOR vr1;
  sceVu0FVECTOR vr2;
  sceVu0FVECTOR vr3;
  sceVu0FVECTOR tvr1;
  sceVu0FVECTOR tvr2;
  sceVu0FVECTOR tvr3;
  sceVu0FVECTOR vp;
  sceVu0FVECTOR tvpb;
  sceVu0FVECTOR vpb;
  sceVu0FVECTOR dp1;
  sceVu0FVECTOR dp2;
  sceVu0FVECTOR prot;
  sceVu0FVECTOR drot;
  float cam_rot;
  float tmp_cos;
  float tmp_sin;
  static int count;
}

int TmpMapHit(/* a0 4 */ u_short door_id) {
  sceVu0FVECTOR fpos;
  sceVu0FVECTOR tpos;
  u_int *addr_ui;
}

static int ChkDoorIsOpen(/* a0 4 */ u_short door_id) { int i; }

static u_short GetDoorIdFromDoorNo(/* s0 16 */ u_char door_no) {
  u_short *addr_us;
  int i;
  u_short dr_num;
}

static int GetDoorStts(/* s1 17 */ DOOR_DATA_POP **dppp, u_short door_id,
                       u_char floor) {
  int *addr_si0;
  int *addr_si1;
  u_short *addr_us;
  int i;
  u_short dat_num;
}

int GetDoorSttsForMap(/* s0 16 */ DOOR_STTS_MAP *dsmp, u_short door_id,
                      u_char floor) {
  DOOR_DATA_POP *dpp;
}

u_short DoorChangeModel(/* a3 7 */ u_short door_id, u_short model_no) {
  DOOR_WRK *dwp;
  int i;
  u_short last_model_no;
}

void DoorDispOnOff(/* t2 10 */ u_short door_id, u_char on_off) {
  DOOR_WRK *dwp;
  int i;
}

void DoorOpenShiftForce(/* a0 4 */ u_short door_id) {
  DOOR_WRK *dwp;
  sceVu0FVECTOR ref;
  int i;
}

char TargetDoorKindChk() {
  DOJ_SQUARE_MTN dsmp;
  int dwn[1];
}

void PlyrPosAdj(/* a0 4 */ u_char mtn_no, u_char mtn_type) {
  DOJ_SQUARE_MTN *dsmtnp;
  DOOR_MTN_DAT *dmotionp;
  float tmp_rot;
  float adj_r;
}

void DoorMoveStart(/* -0xc0(sp) */ u_char mtn_no, u_char door_close_flg) {
  int i;
  int j;
  AUTO_CLOSE_DOOR_WRK *acp;
  NON_CLOSE_DOOR_WRK *ncp;
  DOOR_MTN_DAT *dmotionp;
  DOJ_SQUARE_MTN *dsmtnp;
}

void OneRoomLoadReq() {
  int i;
  int dr_num;
  int dwrk_no;
  int load_room;
  u_char *addr_uc;
}

void PrintDoorID(/* a0 4 */ int no) {}

DOOR_MTN_DAT *GetDoorMtnDat(/* a0 4 */ u_char dtype) {}
DOOR_TYPE_DAT *GetDoorTypeDatP(/* a0 4 */ int no) {}
DOOR_TYPE_DAT GetDoorTypeDat(/* a1 5 */ int no) {}
u_short GetDoorMotionTblPos(/* a0 4 */ u_char door_motion_dat_no) {}
int IsFusumaType(/* a0 4 */ u_char type) {}
int IsRotType(/* a0 4 */ u_char type) {}
int IsFusumaAttr(/* a0 4 */ u_short attr) {}
int MotionIsDouble(/* a0 4 */ u_char motion_no) {}

int CheckRotDoorOpenStatus(/* s0 16 */ int dwrk_no, u_char type) {
  DOOR_TYPE_DAT *dtdp;
  DOOR_STTS_KEEP *dkeepp;
}

void ChangeRotDoorFace(/* a0 4 */ u_short door_id) { DOOR_STTS_KEEP *dkeepp; }

void ChangeRotDoorFaceRoomId(/* s4 20 */ u_short door_id, u_char room_id) {
  DOOR_STTS_KEEP *dkeepp;
  DOOR_WRK *dwp;
  int i;
}

void ChangeRotDoorFace2Room(/* a0 4 */ u_short door_id, u_char room_id) {
  DOOR_WRK *dwp;
  DOOR_STTS_KEEP *dkeepp;
}

int JudgePlyrRotForRotDoor(/* a0 4 */ int dwrk_no) {
  DOOR_WRK *dwp;
  sceVu0FVECTOR dedge_left;
  sceVu0FVECTOR dedge_right;
  float rd_left;
  float rd_right;
  float p_rot;
}

u_char ChkRotDoorRot(/* a0 4 */ int dwrk_no) {
  DOOR_WRK *dwp;
  sceVu0FVECTOR pvec;
  float drot;
  float prot;
  float dl_limit;
  float dr_limit;
}

void InitFindStatus() {}

void FindMapInit() { int i; }

u_char FindMapReqJudge() {
  int i;
  int open;
  int after_no;
  sceVu0FVECTOR fd_pos;
}

u_char FindMapCtrl() {}

void FurnCtrlMain() {}
void InitFurnDispFlg() {}
FURN_WRK *FurnGetFurnWrk(/* a0 4 */ u_char fw_no) {}

u_char ChkFurnGetAlready(/* a0 4 */ u_short furn_id) {
  FURN_WRK *fwp;
  int i;
}

void FurnSetWrkNoUse(/* s0 16 */ FURN_WRK *fwp, int no) {}

int FurnSetFurnWork(/* s2 18 */ FURN_DATA_POP *fdpp, int fw_no, u_char msn_no,
                    u_char use, u_char room_id) {
  FURN_WRK *fwp;
  F_ACT_WRK fbuf;
  int fact_type;
  float rot;
}

int FurnIsPicDispOnly(/* a0 4 */ u_short id, u_char msn_no) {}

void FurnAplyAmbient() {
  FURN_WRK *fwp;
  int i;
}

int GetRoomFurnID(/* s5 21 */ u_char room_id, u_short *furn_id, u_char msn_no) {
  FURN_DATA_POP *fdpp;
  int *addr_si0;
  int *addr_si1;
  int *addr_si2;
  u_char *addr_uc0;
  u_char *addr_uc1;
  int ret;
  int i;
  int j;
  int k;
  u_char room_num;
}

int FurnIsWrkUse(/* a0 4 */ FURN_WRK *fw) {}
int FurnIsSeUse(/* a0 4 */ u_short id, u_char msn_no) {}
int FurnIsUsable(/* a0 4 */ u_short id, u_char msn_no) {}
int FurnIsPicDisp(/* a0 4 */ u_short id, u_char msn_no) {}
int FurnIsDisp(/* a0 4 */ u_short id, u_char msn_no) {}
int FurnIsHit(/* a0 4 */ u_short id, u_char msn_no) {}
void FurnPicExecStart() {}
void FurnPicExecEnd() {}

void FurnPicNoDspOff() {
  FURN_WRK *fwp;
  int i;
  u_int attr;
}

void FurnPicNoDspOn() {
  FURN_WRK *fwp;
  int i;
  u_int attr;
}

void FurnSortFurnWrk(/* a0 4 */ u_char mode) {
  FURN_WRK *fwp0;
  FURN_WRK *fwp1;
  FURN_WRK fw_tmp;
  DOOR_WRK *dwp;
  int i;
  int j;
  int k;
  int flg;
}

void FurnDataRenewNow() {}

void FurnFreeFurnWrk(/* a0 4 */ u_char rm_id) { int i; }

void FurnDataInit() {
  FURN_DATA_POP *fdpp;
  int i;
  int *addr_si;
  int *addr_fdt;
  u_char *r_id_p;
  u_char rm_num;
  u_char dt_num;
  u_char no_use_fw;
}

void FurnDataRenewNext(/* a1 5 */ u_char room_id) {
  FURN_DATA_POP *fdpp;
  int *addr_si;
  int *addr_fdt;
  u_char *r_id_p;
  int i;
  u_char rm_num;
  u_char dt_num;
  u_char no_use_fw;
}

void FurnPicDispOn() {
  FURN_WRK *fwp0;
  int i;
  u_int attr;
}

void FurnPicDispOff() {
  FURN_WRK *fwp0;
  int i;
  u_int attr;
}

void ClearFurnAttrFlg() {}

void InitFurnAttrFlg() {
  int addr_map;
  int *addr_si0;
  int *addr_si1;
  int *addr_si2;
  int i;
  int j;
  u_char room_num;
  u_char dat_num;
  int k;
}

void SetFurnAttrEve(/* a0 4 */ u_short id, u_short flg, int on_flg) {
  FURN_WRK *fwp;
  int i;
  int j;
  int on;
  u_int mask;
  u_int checker;
  u_int furn_flg_bk;
}

u_int GetFurnAttrF(/* a0 4 */ FURN_WRK *fwp, u_char msn_no) {}
u_int GetFurnAttr(/* a0 4 */ u_short id, u_char msn_no) {}

u_char FurnHitCheck(/* -0xe0(sp) */ u_char *dx_max, u_char *dz_max, float *pos,
                    float *dst, u_char div, u_char room) {
  int *addr;
  int *addr_bak;
  int *addr_bak2;
  FURN_DATA_POP *fedp;
  u_char *sq_typep;
  int i;
  int j;
  int k;
  u_char dt_num;
  u_char sq_num;
  u_char rm_no;
  u_char div_x;
  u_char div_z;
}

u_char FurnHitCheck2(/* -0xb0(sp) */ u_short pos_x, u_short pos_y,
                     u_char room_id) {
  FURN_DATA_POP *fedp;
  int *addr_si;
  int *addr_bak_si;
  int *addr_bak2_si;
  u_char *sq_typep;
  int i;
  int j;
  u_char room_no;
  u_char dt_num;
  u_char sq_num;
}

FURN_DAT *GetFurnDatP(/* a0 4 */ u_short furn_id) {}

void FurnEfctSet(/* s3 19 */ FURN_WRK *fwp) {
  float *pos_top;
  int fewrk_no;
}

void FurnEfctFree(/* s0 16 */ FURN_WRK *fwp) {}
static void FurnEfctSetUse(/* a0 4 */ FURN_WRK *fwp, float *pos, int fewrk_no) {
}

static void FurnEfctSetPos0(/* a0 4 */ FURN_WRK *fwp, float *pos) {
  FURN_EFCT *fep;
}

static void FurnEfctSetPos1(/* a0 4 */ FURN_WRK *fwp, float *pos) {
  FURN_EFCT *fep;
}

static void FurnEfctSetRot0(/* a0 4 */ FURN_WRK *fwp, float *rot) {
  FURN_EFCT *fep;
}

static int FurnEfctGetFefct() {
  FURN_EFCT *fep;
  int i;
}

static void FurnEfctFreeFefct(/* a0 4 */ int num) {}

void FurnHintDeformCtrl() {
  FURN_WRK *fwp;
  float sclx;
  float scly;
  u_int fsta;
  int i;
  static sceVu0FVECTOR ep[1];
  static float spd;
  static float rate;
  static float trate;
}

void MapItemInit() {}
void MissionStartMapItemInit(/* a3 7 */ int msn_no) {}

void FileDateInit() { int i; }

int ItemGetMain() { int get_item; }

void ItemCtrl() {}

void ItemDispCtrl() { int i; }

void SetItemDispData(/* t4 12 */ u_char id) {
  int i;
  int j;
  int dsp_no;
}

void ItemDispDataRenew() { int i; }

int GetMapItemJudge() {
  int i;
  int j;
}

void GetMapItem(/* s1 17 */ u_short get_no) {}
void ItemAppearCtrl() {}

int ItemGetContinueJudge() { int get_item; }

u_char PosInAreaJudgeSub(/* t0 8 */ int *addr, u_short pos_x, u_short pos_y,
                         u_char type) {}
void Get2DLinearConstFromPos(/* a0 4 */ float *a, float *b, float *c, float x0,
                             float y0, float x1, float y1) {}

int Get2DLinearCrossPoint(/* a0 4 */ float *cpx, float *cpy, float a0, float b0,
                          float c0, float a1, float b1, float c1) {
  float mother;
}

int ChkLineCross(/* f26 64 */ float x0, float y0, float x1, float y1, float x2,
                 float y2, float x3, float y3) {
  float a0;
  float b0;
  float c0;
  float a1;
  float b1;
  float c1;
  float d;
}

int ChkInsideBox(/* f20 58 */ float cpx, float cpy, float x0, float y0,
                 float x1, float y1, float x2, float y2, float x3, float y3) {
  float x3;
  float y3;
  float a0;
  float b0;
  float c0;
  float a1;
  float b1;
  float c1;
  float d;
}

u_char HitChkSegment2All(/* s7 23 */ float *f, float *t, float deg) {
  sceVu0FVECTOR seg;
  sceVu0FVECTOR chk;
  float ft;
  int i;
  int j;
  u_short cmp_x;
  u_short cmp_y;
  u_short cmp_z;
  u_char room_id;
  u_char room_no;
  u_char tmp_hit_num;
}

u_char HitChkSegment2All2D(/* fp 30 */ float *f, float *t, float deg) {
  sceVu0FVECTOR seg;
  sceVu0FVECTOR chk;
  float ft;
  int i;
  int j;
  u_short cmp_x;
  u_short cmp_y;
  u_short cmp_z;
  u_char room_id;
  u_char room_no;
}

u_char FurnCoverCheck(/* -0xb0(sp) */ u_short pos_x, short int pos_y,
                      u_short pos_z, u_char room_no) {
  u_int *addr;
  u_int *addr_bak;
  FURN_DATA_POP *fedp;
  int i;
  u_char dt_num;
}

void NewgameFActInit() {}

void InitFurnDatSave() { int i; }

void PreGameInitFActWrk() {}
void InitFActWrk() {}
void FActWaitExecJob(/* s2 18 */ FURN_ACT_WRK *fawp) {}
void FActWrkMain() {}

int SearchRegisterFW2FAW(/* s0 16 */ u_short fw_id, u_short fact_no) {
  int vacant_id;
  int temp_id;
}

void ExchangeFAWFWID(/* s2 18 */ int fw_id1, int fw_id2) {
  int faw_id1;
  int faw_id2;
}

void FSpeFinishFlgOff(/* a0 4 */ u_short furn_id) { int id; }

void FurnActOffEve(/* a0 4 */ u_short furn_id) {}
void FurnActOnEve(/* a0 4 */ u_short furn_id) {}

int SearchFActWrkIDFromFurnID(/* a0 4 */ u_short furn_id) { int i; }

void AddRotVector(/* s0 16 */ float *rot, float *rot1) {}
void FActCheckExec(/* s0 16 */ FURN_ACT_WRK *fawp) {}
void FreeFActFwrk(/* s0 16 */ FURN_ACT_WRK *fawp) {}

int SearchFurnWrkIDFromFurnID(/* a0 4 */ u_short furn_id) { int i; }

void FreeFActFwrkNo(/* a0 4 */ int fw_id) { int id; }

u_char *ForwardActionPointer(/* a1 5 */ u_char *pointer) {}
u_char *ForwardConditionPointer(/* a2 6 */ u_char *cp, u_char count) {}

int SetFurnActData(/* s1 17 */ FURN_ACT_WRK *fawp, u_char fact_no) {
  int i;
  u_short header;
  u_short temp;
  u_char *pointer;
}

void RegisterFW2FAW(/* a0 4 */ u_short fw_id, FURN_ACT_WRK *fawp,
                    u_short fact_no) {}

int GetOpenedFAWID() { int i; }

int SearchFActWrkIDFromFWID(/* a0 4 */ u_short fw_id) { int i; }

void FActStopAction(/* s3 19 */ FURN_ACT_WRK *fawp, void *point) {
  u_short *sp;
  u_char *pointer;
  u_char *printer;
  int i;
  u_short furn_id[1];
}

void FActExecOccur(/* s7 23 */ FURN_ACT_WRK *fawp, void *point) {
  u_short *sp;
  u_char *pointer;
  u_char *printer;
  int i;
  u_short furn_id[1];
  int wrkid;
  u_char no;
  float f1;
  sceVu0FVECTOR temp;
  float f1;
}

void FActWait(/* s0 16 */ FURN_ACT_WRK *fawp) {}
int CompareFloatVal(/* f12 50 */ float a, float b) {}

int ChkANDCondition(/* s2 18 */ FURN_ACT_WRK *fawp, u_char **cpp,
                    u_char count) {
  int flg;
  u_short *sp;
  int i;
  int j;
}

int FSpeCheckOutOfRoom(/* a0 4 */ u_char room_no) {}

int FACheckCondition(/* s3 19 */ FURN_ACT_WRK *fawp, SPE_CHK_COND *p_con) {
  u_char *cp;
  u_char **cpp;
}

int FACheckDirect(/* s2 18 */ u_short range, u_short obj, float *fpos) {}

int RotCheck(/* a0 4 */ float *fpos, MOVE_BOX *mbp, u_short range) {
  sceVu0FVECTOR o2f;
  float rot1;
  float rot2;
}

int FACheckDistNear(/* s1 17 */ u_short obj, float dist, float *fpos) {}

int CheckSquareAreaOne(/* a0 4 */ float *pos, float *square_center,
                       float *mat[1], float tate, float yoko) {
  sceVu0FVECTOR obj_pos;
}

int FACheckCircleArea(/* f12 50 */ float x, float y, float z, float dist,
                      u_short obj) {
  sceVu0FVECTOR obj_pos;
  sceVu0FVECTOR temp;
  sceVu0FMATRIX mat;
}

int FACheckSquareArea(/* f22 60 */ float x, float y, float z, float tate,
                      float yoko, float y_rot, u_short obj) {
  sceVu0FVECTOR obj_pos;
  sceVu0FVECTOR temp;
  sceVu0FMATRIX mat;
}

int FACheckDistFar(/* s1 17 */ u_short obj, float dist, float *fpos) {}
int FACheckStatus(/* a0 4 */ u_short a, u_short b) {}
int SpeedLessOrVecF(/* f20 58 */ float s_speed, float *vec) {}

int SpeedLessOrVecVec(/* a0 4 */ float *vec1, float *vec2) { float f1; }

int FACheckSpeedLess(/* f20 58 */ float speed, u_short obj) {}
TextureAnimation *FSpeTexAnmCtrl(/* t0 8 */ TextureAnimation *pta,
                                 FSPE_TEXTURE_ANM *ta) {}
void FSpeTexAnmStop(/* a0 4 */ FURN_ACT_WRK *fawp) {}

void FSpeTexAnmExe(/* a0 4 */ u_char modelnum, FURN_ACT_WRK *fawp,
                   u_char regmode, u_char looptype, u_char speed) {
  static float trans_rate;
  static float trans_added;
  SgMaterial *matp;
  u_int *phead;
  u_int *tmpModelp;
}

void FSpeDelPointLight(/* s0 16 */ FURN_ACT_WRK *fawp) {}

void FSpeSetPointLight(/* s0 16 */ FURN_ACT_WRK *fawp, float r, float g,
                       float b) {
  sceVu0FVECTOR *pl_pos;
  static float power;
}

float GetRandVal(/* f20 58 */ float min, float max) { float width; }

void StopTrembleH(/* a0 4 */ FURN_ACT_WRK *fawp, signed char num) {}

signed char GetVacantTrembleHWrk() { int i; }

signed char CallTrembleH(/* s4 20 */ FURN_ACT_WRK *fawp) {
  signed char i;
  TREMBLE_H_WRK *wrk;
}

void TrembleHCtrl() {
  int i;
  float width;
  float temp;
  sceVu0FVECTOR tempv;
  TREMBLE_H_WRK *wrk;
}

void FSpeTrembleCtrl(/* s0 16 */ FURN_ACT_WRK *fawp) { float temp; }

void CallThunderLight(/* f20 58 */ float x, float y, float z, u_char delay,
                      sceVu0FVECTOR *pos, u_char room_no) {}

void SetThunderLightEach(/* s0 16 */ PARARELL_WRK *par, int *num) { u_char pn; }

void SetThunderLight() {}

void InitThunderLight() { int i; }

void ThunderLight() {}
u_char *CallLampTremble(/* s0 16 */ u_char *pointer) {}
u_char *StopLampTremble(/* s0 16 */ u_char *pointer) {}

FSPE_LIGHT_ANM *SetRandLightAnimEach(/* s1 17 */ FSPE_LIGHT_ANM **ap) {
  int i;
  int num;
  FSPE_LIGHT_ANM **temp;
}

void SetRandLightAnim(/* s2 18 */ FSPE_LIGHT_WRK *lw) {
  int num;
  FSPE_LIGHT_ANM **temp;
  FSPE_LIGHT_ANM **save;
}

signed char GetOpenPointLightWrkID() { int i; }

signed char GetVacantPLW() { int i; }

void DeletePointLight(/* a0 4 */ signed char num) {}

signed char AddNewPointLight(/* s1 17 */ sceVu0FVECTOR *pos,
                             sceVu0FVECTOR *diffuse, float *power,
                             u_char room_id) {
  signed char i;
  POINT_LIGHT_WRK *plw;
}

float SetPLW2PW(/* s1 17 */ POINT_WRK *pw, POINT_LIGHT_WRK *plw, float obj_dist,
                float compare) {
  float power;
  float multi;
  sceVu0FVECTOR temp;
}

int SetPointLightPack(/* -0xb0(sp) */ float *obj_pos, POINT_WRK *ppw,
                      u_char start_num) {
  int i;
  int j;
  POINT_LIGHT_WRK *plw;
  float power[1];
  float temppri;
  float obj_dist;
  u_char save_num;
  u_char registered_num;
  u_char lm_num;
}

void FinishCandle(/* v0 2 */ FSPE_LIGHT_WRK *lw) {}

void CandleAnmStop(/* a0 4 */ signed char lw_id) { FSPE_LIGHT_WRK *lw; }

signed char CandleAnmOcc(/* s6 22 */ sceVu0FVECTOR *pos, float r, float g,
                         float b, u_char in_pat, u_char pat, u_char out_pat,
                         u_char room_id) {
  signed char id;
  FSPE_LIGHT_WRK *lw;
}

void PointLightCtrl() {}

void CandleAnmCtrl() { int j; }

void FSpeMapDataMapping() {
  u_int *addr_top;
  u_int *addr_data;
  int i;
  u_short data_num;
}

u_char *FSpeGetTopAddr(/* a0 4 */ u_short fact_no) { u_int *addr; }

void InitAdjValGWrk() {}
void InitAdjValGWrkOne(/* a0 4 */ ADJ_VALG_WRK *avp) {}
ADJ_VALG_WRK *SearchVacantAdjValGWrk() {}

void ReleaseAdjValGWrkVec(/* v1 3 */ float *ori) { ADJ_VALG_WRK *avp; }

void ReleaseAdjValG(/* a1 5 */ ADJ_VALG_WRK *avp) {}

void SameObjectWrkDelete(/* v1 3 */ float *ori) { ADJ_VALG_WRK *avp; }

void RegisterAdjValG(/* s2 18 */ float *ori, float *des, u_int time) {
  sceVu0FVECTOR temp;
  ADJ_VALG_WRK *avp;
}

void AdjustValueG() { ADJ_VALG_WRK *avp; }

void NewgameItemInit() {}
void NewgameItemInit2() {}

void MissionSelectItemInit() {
  int i;
  int j;
  int save_item[1];
  int check_num;
}

void MenuItemInit() {}
void LoadgameMenuItemInit() {}
void StartItemModeInit() {}
void ItemInitAtMenuOpen() {}

void FilmPossessionExp() { int i; }

void IngameMenuItem() {}
void IngameMenuItemUseSlct() {}
void IngameMenuItemDisp() {}

static void ItemUse(/* a3 7 */ u_char item_no) { int adpcm_no; }

static int IngameMenuItemEventOpenJudge(/* a0 4 */ u_char item_no) {}

static void ItemModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void ItemModeInOut2() {}

void PlayerStatusYW(/* s3 19 */ u_char alpha) {
  u_char bak_alp;
  u_char tmp_alp;
  u_char flr_alp;
}

static void GageAnime(/* a0 4 */ short int pos_x, short int pos_y,
                      u_char alpha) {}

static void PutStsBar(/* a0 4 */ u_char char_label, int rgb, u_char alp,
                      float scl_x) {
  int i;
  DISP_SPRT ds;
}

static void FilmAnime(/* a0 4 */ short int pos_x, short int pos_y,
                      short int alpha) {
  int i;
}

static void ItemList(/* s0 16 */ short int pos_x, short int pos_y,
                     short int alpha) {
  int i;
  float top_bar;
  float mdl_bar;
  float dwn_bar;
}

static void CameUp(/* s0 16 */ u_char alp) {}
static void PlaySM(/* s0 16 */ u_char alp) {}
static void ItemInTheLenz2D(/* s4 20 */ short int pos_x, short int pos_y,
                            short int alpha) {}

int LoadItem2D(/* a0 4 */ u_char get_type, u_char get_no) { int load_id; }

u_long VramItem2D(/* a0 4 */ u_char mode, u_char type) {
  u_int offset;
  SPRITE_DATA dmy;
}

char DspItem2D(/* s1 17 */ u_long tex_addr, float pos_x, float pos_y, int rgb,
               float alp, float scl_x, float scl_y, char pri) {
  float scl_px;
  float scl_py;
  DISP_SPRT ds;
}

void PkTm2(/* s0 16 */ u_long tex_addr, short int pos_x, short int pos_y,
           short int w, short int h, u_char alp, int pri) {
  DISP_SPRT ds;
}

static void MessageWindow(/* s0 16 */ short int pos_x, short int pos_y,
                          short int alpha) {
  float btn_alp;
}

static void ItemCntInit() {}
static void ItemCntRenew() {}

static void GetItemNum() {
  int i;
  int chk;
}

void PutSpriteYW(/* s7 23 */ u_short top_label, u_short end_label, float pos_x,
                 float pos_y, float rot, int rgb, float alp, float scl_x,
                 float scl_y, u_char scl_mode, int pri, u_char by, u_char blnd,
                 u_char z_sw) {
  int i;
  float rot_px;
  float rot_py;
  float scl_px;
  float scl_py;
  DISP_SPRT ds;
}

static void WipeChange(/* a0 4 */ u_char before_label, u_char after_label,
                       float move_y) {
  DISP_SPRT ds;
}

static void PlusZanzo(/* -0xc0(sp) */ u_short top_label, u_short end_label,
                      float pos_x, float pos_y, int rgb, float alp, u_char num,
                      u_char dry, u_char znz_no) {
  int i;
  u_short znz_same;
}

void FlashStarYW(/* s0 16 */ FLSH_CORE *flsh, u_char flsh_max, u_char flsh_min,
                 u_char flsh_flm, u_char mode) {
  float alpha;
}

void CLRtoRGB(/* a0 4 */ int *rgb, u_char r, u_char g, u_char b) {}
void RGBtoCLR(/* a0 4 */ int rgb, u_char *r, u_char *g, u_char *b) {}

void PutStringYW(/* s5 21 */ u_char msg_knd, u_char msg_no, short int pos_x,
                 short int pos_y, int rgb, u_char alpha, int pri, u_char type) {
  DISP_STR ds;
  STR_DAT sd;
  int cnt_ofs;
}

void RstMessageYW() {}

u_char PutMessageYW(/* s0 16 */ u_char msg_knd, u_char msg_no, short int pos_x,
                    short int pos_y, int rgb, u_char alpha, int pri) {
  u_char all_page;
  u_char rtrn;
}

char ChkChrNumYW(/* a0 4 */ u_char msg_knd, u_char msg_no) {}
int ChkChrNumUS(/* a0 4 */ u_char msg_knd, u_char msg_no) {}

char ChkPageYW(/* a0 4 */ u_char msg_knd, u_char msg_no) {
  u_char *chk_str;
  u_char *nxt_str;
  char page_now;
}

void PutPageYW(/* a0 4 */ u_char msg_knd, u_char msg_no, u_char open_page,
               short int pos_x, short int pos_y, int rgb, u_char alpha,
               int pri) {
  DISP_STR ds;
  STR_DAT sd;
  u_char *chk_str;
  char page_now;
}

void PutPage2YW(/* a0 4 */ u_char msg_knd, u_char msg_no, u_char open_page,
                short int pos_x, short int pos_y, int rgb, u_char alpha,
                int pri) {
  DISP_STR ds;
  STR_DAT sd;
  u_char *chk_str;
  char page_now;
}

void PutNumberYW(/* s6 22 */ u_char font, int num, short int pos_x,
                 short int pos_y, float sx, float sy, int rgb, short int alpha,
                 int pri, int digit, int mode) {
  u_char mode;
  int i;
  int multi10;
  int multi10_bak;
  int disp_number;
  int disp_digit;
}

static void DigiPut01(/* s0 16 */ u_char font, u_char num, u_char no,
                      short int pos_x, short int pos_y, float sx, float sy,
                      int rgb, short int alpha, int pri) {
  DISP_SPRT ds;
  u_char r;
  u_char g;
  u_char b;
  short int rot_x;
  u_char fw[1];
  u_char fh[1];
}

void PolySquareYW(/* f20 58 */ float pos_x, float pos_y, u_short bar_l,
                  u_short bar_h, int rgb, float alp, float scl_x, float scl_y,
                  int pri, u_char blnd, u_char sw_z, short int rz) {
  u_char r;
  u_char g;
  u_char b;
  SQAR_DAT sd;
  DISP_SQAR ds;
  int i;
}

void YesNoCrslOKR(/* s1 17 */ int pri, float pos_x, float pos_y, int rgb,
                  float alp, float scl) {
  DISP_SPRT ds;
}

void XYAdefaultYW(/* a0 4 */ u_char no) {}

void BgFusumaYW(/* s0 16 */ int rgb, float pos_x, float alpha, int pri) {
  float scl_x;
  float scl_y;
}

static void SttsRenew() {}

static void ItmTrFlsh(/* s0 16 */ short int pos_x, short int pos_y,
                      short int alpha) {
  int rgb;
}

u_int FromPKZ(/* a0 4 */ u_int pkz_addr, u_char pk2_no) {}
void DcdCMP2PK2(/* a0 4 */ u_int cmp_addr, u_int tmp_addr) {}

static void YW_DBG() {
  int i;
  u_char spd;
}

void StartGameOver() {}
void ReturnGameOver() {}
static void GameOverInit() {}

void GameOverMenuMain() { u_char alp_add; }

static void GameOverMenuDisp(/* a0 4 */ u_char alp) { int i; }

void PauseInit() {}
int PauseMain() {}
void PauseDisp() {}

static void PauseDraw(/* s0 16 */ u_char alp) { int i; }

static char CanPauseCHK() { char can; }

void NewgameMenuAlbumInit() { int i; }

void LoadgameMenuAlbumInit() { int i; }

void StartAlbumModeInit() {}
void IngameMenuAlbum(/* a0 4 */ char is_outgame) {}

void IngameAlbumAllPad(/* s6 22 */ u_char *csr, u_char *csr_top, u_char *mode) {
  u_char csr_x;
  u_char csr_y;
  u_char max_x;
  u_char max_y;
}

void IngameAlbumLstPad(/* s1 17 */ u_char *csr, u_char *csr_top, u_char *mode) {
}
void IngameAlbumBigPad(/* s0 16 */ u_char *csr, u_char *csr_top, u_char *mode) {
}
static void IngameAlbumMenu(/* a0 4 */ u_char *csr0, u_char *csr1, u_char *pic,
                            u_char *mode, u_char *list_top) {}
static void CmndMenuVrgn(/* s5 21 */ u_char *csr0, u_char *csr1, u_char *pic,
                         u_char *mode, u_char *list_top) {}
static void CmndMenuClrB(/* s3 19 */ u_char *csr0, u_char *csr1, u_char *pic,
                         u_char *mode, u_char *list_top) {}

static void IngameAlbumMenuDsp(/* s2 18 */ u_char *csr0, u_char *csr1,
                               u_char *pic, u_char *mode) {
  short int mmx;
  short int mmy;
  short int smx;
  short int smy;
  short int mnx;
}

void IngameAlbumDispPhotoLarge(/* a0 4 */ u_char csr) {}
void IngameAlbumDisp(/* s2 18 */ u_char csr, u_char csr_top, u_char mode,
                     char is_outgame) {}
static void DrawAlbum(/* s2 18 */ u_char csr, u_char csr_top, u_char mode,
                      u_char str) {}

static void PhotOnlyAll(/* fp 30 */ u_char csr, short int pos_x,
                        short int pos_y, short int alpha) {
  int i;
  int pic_num;
  int rgb;
}

static void PhotOnlyLst(/* s0 16 */ u_char csr, short int pos_x,
                        short int pos_y, short int alpha) {
  int pic_num;
}

static void PhotOnlyBig(/* s5 21 */ u_char csr, short int pos_x,
                        short int pos_y, short int alpha) {
  int pic_num;
  int pht_no;
}

u_char *GetSubjectNameAddr(/* a0 4 */ u_short kind, u_short no, u_short show) {
  int *addr;
}

static void IngameAlbumSort() {
  int i;
  int j;
  int tmp;
  PICTURE_WRK tmp_pic;
}

static void DspMainMenu(/* s0 16 */ u_char csr0, u_char csr1, u_char mode,
                        short int pos_x, short int pos_y, short int alpha) {
  u_short anm;
}

static void DspSideMenu(/* a0 4 */ u_char csr0, u_char csr1, u_char mode,
                        short int pos_x, short int pos_y, short int alpha) {
  u_short anm;
}

static void DspMenuWin(/* s5 21 */ u_char type, u_char csr, u_char mode,
                       short int pos_x, short int pos_y, float flash,
                       short int alpha, u_short anm) {
  int i;
  short int pos_v;
  short int pos_h;
  short int alp1;
  short int alp2;
  short int alp3;
  short int mode_char;
  short int char_posy;
  int rgb;
}

static void DspDetail(/* -0x110(sp) */ u_char csr, short int pos_x,
                      short int pos_y, short int alpha, u_char dsp) {
  int i;
  DISP_STR disp_str;
  u_char obj_num;
  u_short obj_py[1][1];
  int width;
}

static void DspNotice(/* a0 4 */ short int pos_x, short int pos_y,
                      short int alpha, u_char now, u_char max, u_char btn) {}

static void DspSumnale(/* a0 4 */ u_char csr, short int pos_x, short int pos_y,
                       short int alpha) {
  int i;
  int pic_num;
  u_short pic_x;
  u_short pic_y;
}

static void DspPhtLst(/* s0 16 */ u_char csr, u_char csr_top, short int pos_x,
                      short int pos_y, short int alpha) {
  int i;
  int pic_num;
}

static void DspFilmCut(/* a0 4 */ u_char csr, short int pos_x, short int pos_y,
                       short int alpha) {}

static void DspSideSmnl(/* s1 17 */ u_char csr, short int pos_x,
                        short int pos_y, short int alpha) {
  int pht_no;
}

static void DspBtmDtl(/* -0xe0(sp) */ u_char csr, short int pos_x,
                      short int pos_y, short int alpha) {
  int i;
  DISP_STR disp_str;
  u_char obj_num;
  u_short obj_py[1][1];
  int width;
}

static void DspCherry(/* a0 4 */ short int pos_x, short int pos_y,
                      short int alpha) {
  int rgb;
}

static void AlbmTrFlsh(/* s1 17 */ short int pos_x, short int pos_y,
                       short int alpha) {
  int rgb;
}

u_char TimeIsMoney(/* a0 4 */ u_char hexhex) {}
u_char MoneyIsTime(/* a0 4 */ u_char time) {}
void PutDate(/* s5 21 */ PICTURE_WRK *pic_inf, short int pos_x, short int pos_y,
             short int alpha, int pri) {}
static void AlbmCntInit() {}
static void AlbmCntRenew() {}

static void AlbmModeInOut(/* a0 4 */ char is_outgame) {
  int i;
  float fade_in;
  float fade_out;
}

static void AlbmModeInOut2(/* a0 4 */ char is_outgame) {}

static u_char SealChk() {
  int i;
  u_char seal_num;
}

void OutGameInitPhoto() {}
int isPhotoEnd() {}
float GetPhtDispAlpha() {}

void CameraCustomNewgameInit() {}

void CameraCustomInit() {
  int i;
  u_char *pow[1];
}

void CameraCustomMain() { static char err; }

void CameraCustomMenuSlct(/* a0 4 */ char *err) {}
void CameraCustomFilm(/* s1 17 */ char *err) {}

void CameraCustomPowerUp(/* s2 18 */ char *err) { u_char *pow[1]; }

void CameraCustomSubAbility(/* s1 17 */ char *err) { int i; }

void CameraCustomSpecialAbility(/* s1 17 */ char *err) { int i; }

void CameraDspCtrl(/* a0 4 */ u_char err) {}

void CameraDsp(/* s6 22 */ short int pos_x, short int pos_y, u_char alp,
               u_char msg) {
  int i;
  int j;
  int cost;
  u_char rgb;
  u_char flsh_alp[1];
  u_char use;
  u_char *pow[1];
  int cst_rgb;
  short int flm_ax[1];
  short int flm_ay[1];
  float arw_alp;
}

char StrKndChk(/* a1 5 */ u_char err) { char str; }

char FilmPossChk(/* a0 4 */ u_char knd) {
  char rtrn;
  char chk;
}

void CameraModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

void CameraModeInOut2() {}
void CameraCntRenew() {}
int isCameraTopMenu() {}
void OutGameInitCamera() {}
int isCameraEnd() {}
float GetCamDispAlpha() {}
void OpenCameraMenu() {}

float NeonAlp(/* a0 4 */ short int num, short int exe, short int dly,
              short int stp, short int no, short int *timer) {
  float rad;
}

float BeMax(/* a0 4 */ u_char no) { float per; }

void NewgameMenuInit() {}
void LoadgameMenuInit() {}
void IngameMenuInit() {}
void IngameMenuOpenStart() {}

static void IngameMenuOpenInit() { int i; }

void IngameMenuMain() {}

void IngameMenuModeSlct() { u_char mode_limit; }

int Get4Byte(/* a0 4 */ u_char *addr) {}
int GetIngameMSGAddr(/* a0 4 */ u_char type, int msg_no) {}
void IngameMenuModeSlctDispInit() {}
void IngameMenuModeSlctDisp() {}

void DspTopMenu(/* s4 20 */ short int pos_x, short int pos_y, short int alpha,
                u_short anm) {
  int i;
  short int pos_v;
  short int pos_h;
  short int alp1;
  short int alp2;
  short int alp3;
  float alp_per;
  int rgb;
}

void WakuWaku(/* s2 18 */ short int pos_x, short int pos_y, u_char alp,
              u_char num, u_char pri) {
  int i;
  u_char adj_h[1];
  u_char adj_h2[1];
}

void WakuWaku2(/* s2 18 */ short int pos_x, short int pos_y, u_char alp,
               u_char num, u_char pri) {
  int i;
}

static u_char MenuInOut() {
  u_char count;
  float per;
  u_short cnt;
  u_char rtn;
}

void DspPlayData(/* s0 16 */ short int pos_x, short int pos_y, float alpha,
                 u_char str_mode) {}

static void TimeZone(/* a0 4 */ short int pos_x, short int pos_y, float alp) {
  float rot_s;
  float rot_m;
  float rot_h;
  sceCdCLOCK tmp;
}

static void ClockHari(/* a0 4 */ u_short char_lbl, short int pos_x,
                      short int pos_y, float rot, short int rot_x,
                      short int rot_y, float alp) {
  DISP_SPRT ds;
}

static void ComingOut(/* s7 23 */ short int pos_x, short int pos_y, float alp,
                      u_char shadow) {
  int rgb;
  int pri;
  sceCdCLOCK tmp;
}

static void MenuAdjClock(/* s4 20 */ sceCdCLOCK *time) {
  u_long all_second;
  u_char adj_minute;
  u_char adj_hour;
  u_char rslt_second;
  u_char rslt_minute;
  u_char rslt_hour;
}

static void MenuPlayTime(/* s3 19 */ sceCdCLOCK *time) { u_long all_second; }

void DspMenuTitle(/* s5 21 */ short int pos_x, short int pos_y, float alp,
                  u_char pri, u_char mode) {}

char SimpleMoveRuler(/* t4 12 */ float *rslt, u_short t1, u_short t2,
                     u_short t3, u_short dst, u_short *cnt) {
  u_short count;
  float vmax;
  float a;
  float v;
  static float move;
}

char MoveRuler(/* s4 20 */ short int *mov_x, short int *mov_y, short int x0,
               short int y0, short int x1, short int y1, u_short t1, u_short t2,
               int t3, u_short *cnt) {
  float per;
}

static void CmnWakuForWin(/* -0x110(sp) */ short int pos_x, short int pos_y,
                          u_short siz_x, u_short siz_y, u_char u_hgh,
                          u_char d_hgh, u_char l_wid, u_char r_wid, int pri,
                          int alp, int rgb, int msk_sw) {
  u_char pri;
  u_char alp;
  u_char rgb;
  int i;
  int j;
  int k;
  u_char h_num[1];
  u_char h_edg[1];
  u_char v_num[1];
  u_char v_edg[1];
  short int ofs_x[1];
  short int ofs_y[1];
  short int put_x;
  short int put_y;
  short int put_w;
  short int put_h;
  short int put_u;
  short int put_v;
}

static void PutParts(/* a0 4 */ u_char u, u_char v, u_char w, u_char h,
                     short int x, short int y, int pri, u_char alp, int rgb) {
  DISP_SPRT ds;
}

static void BehindTheMask(/* -0xb0(sp) */ short int pos_x, short int pos_y,
                          short int siz_x, short int siz_y, u_char alp, int pri,
                          u_char top) {
  u_char i;
  u_char j;
}

static void PutMask(/* a0 4 */ short int pos_x, short int pos_y, u_char alp,
                    u_char flp, int pri) {
  DISP_SPRT ds;
}

static void BehindTheMask2(/* fp 30 */ short int pos_x, short int pos_y,
                           short int siz_x, short int siz_y, u_char alp,
                           int pri, u_char top) {
  u_char i;
  u_char j;
}

static void CmnLineForWin(/* -0xf0(sp) */ short int win_x, short int win_y,
                          short int ofs_x, short int ofs_y, u_short siz_x,
                          u_short siz_y, u_char pri, u_char alp, int rgb) {
  u_char rgb;
  int i;
  int j;
  u_char h_num;
  u_char h_edg;
  u_char v_num;
  u_char v_edg;
  short int put_x;
  short int put_y;
  short int put_w;
  short int put_h;
  short int put_u;
  short int put_v;
}

void CmnWindow(/* s4 20 */ u_char win_no, short int pos_x, short int pos_y,
               u_char alp, u_char rgb) {
  int i;
  WIN_PTN win_ptn[1];
  signed char msk_dat_top[1];
  MSK_SIZ msk_siz[1];
  signed char lin_dat_top[1];
  PLS_LIN lin_ptn[1];
}

void CmnCursol(/* a0 4 */ short int pos_x, short int pos_y, short int wide,
               short int high, float flsh, u_char alp, int pri) {}
u_short Ana2PadDirCnt(/* a0 4 */ u_char chk) {}

void AnaPonChk() {
  int i;
  u_char dir_now;
}

char CanYouOpenMyMind(/* a0 4 */ char mode) { char can; }

int StopCameraMenu() {}

void SpdMenuInit() {}

char SpdMenuCtrl() { char rtrn; }

static void SpdMapStart() {}

static void SpdMapInit() { int i; }

void SpdMapMain() {}

static void SpdMapInOut() {
  int i;
  u_char count;
  float fade_in;
  float fade_out;
}

void SpdOptStart() {}

static void SpdOptInit() { int i; }

void SpdOptMain() {}

static void SpdOptInOut() {
  int i;
  u_char count;
}

void ItemGet(/* s2 18 */ u_char get_type, u_char get_no, u_char msg0_no,
             u_char msg1_no) {}
int ItemGetCtrl() {}
static int BookGetMain() {}
static void BookGetPad(/* a2 6 */ u_char model_type, u_char model_no) {}

static void BookGetDsp(/* s4 20 */ u_char model_type, u_char model_no,
                       u_char msg0_no, u_char msg1_no) {
  u_char fade_type;
  u_char chng_tm;
  u_char name_dsp;
  u_char msg_dsp;
  u_char str_dsp;
  u_char msg_type;
  u_char msg_no;
}

static int PhotGetMain() {}
static void PhotGetPad(/* a0 4 */ u_char model_type, u_char model_no) {}

static void PhotGetDsp(/* s3 19 */ u_char model_type, u_char model_no,
                       u_char msg0_no, u_char msg1_no) {
  u_char fade_type;
  u_char chng_tm;
  u_char name_dsp;
  u_char msg_dsp;
  u_char msg_type;
  u_char msg_no;
  u_char file_pct;
}

static int ItemGetMain() {}
static void ItemGetPad(/* a0 4 */ u_char model_type, u_char model_no) {}

static void ItemGetDsp(/* s2 18 */ u_char model_type, u_char model_no,
                       u_char msg0_no, u_char msg1_no) {
  u_char fade_type;
  u_char chng_tm;
  u_char msg_dsp;
  u_char msg_type;
  u_char msg_no;
}

static void GetStr(/* s1 17 */ u_char model_type, u_char model_no,
                   u_char str_dsp) {
  float str_add;
}

static void GetFad(/* s2 18 */ u_char model_type, u_char model_no, u_char fade,
                   u_char time) {
  u_char scn_obj;
  u_char chr_obj;
  u_char ply_obj;
  u_char chr_now;
  u_char ply_now;
  int chr;
  float per;
}

static void FileName(/* a0 4 */ u_char model_type, u_char model_no, u_char fade,
                     u_char time) {
  u_char msg_knd;
  char book_adj;
}

static void GetMsg(/* s2 18 */ u_char msg_type, u_char msg_no, u_char msg_dsp) {
  float msg_add;
  float btn_alp;
}

void NextPageNavi(/* s1 17 */ u_char hav_now, u_char dsp_max, u_short chr_top,
                  short int ofs_x, short int ofs_y, u_char alpha) {
  int rgb_l;
  int rgb_r;
}

int CheckTape(/* t1 9 */ int item_no) { int i; }

void PlayTape(/* a0 4 */ int adpcm_no) {}

void StopTape(/* t1 9 */ int item_no) { int i; }

void NewgameMenuFileInit() {}
void LoadgameMenuFileInit() {}

void StartFileModeInit() { int i; }

void IngameMenuFile() {}
void IngameMenuFileDisp() {}

void IngameMenuFileData() { short int no; }

void IngameMenuFileDataDisp() {}

void GetDispMenuFile(/* s1 17 */ u_char csr) { int i; }

static void FileCntInit() {}
static void FileCntRenew() {}

static void FileModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void FileModeInOut2() {}
static void DspFileOut(/* a0 4 */ short int pos_x, short int pos_y,
                       short int alpha) {}

static void DspKindTab(/* s1 17 */ short int pos_x, short int pos_y,
                       short int alpha) {
  int rgb;
}

static void DspFile2D(/* a0 4 */ short int pos_x, short int pos_y,
                      short int alpha) {
  int i;
  char add;
}

static void DspFile2D2(/* s6 22 */ short int pos_x, short int pos_y,
                       short int alpha) {
  short int no;
  u_short alp_add;
}

static void DspFileLst(/* -0xe0(sp) */ short int pos_x, short int pos_y,
                       short int alpha) {
  int i;
  short int no;
}

void SideBar(/* a0 4 */ u_char hav_now, u_char dsp_max, u_short mov_lng,
             u_char lst_top, u_short chr_top, u_char alp, short int dx,
             short int dy) {
  u_char csr_top;
  u_short now_lng;
}

static void PutBarScale(/* a0 4 */ short int pos_x, short int pos_y,
                        u_short now_lng, u_char alp, u_short chr_top) {
  int i;
  float scl_px;
  float scl_py;
  float mdl_lng;
  float mdl_scl;
  DISP_SPRT ds;
}

static void SideTri(/* s1 17 */ u_char hav_now, u_char dsp_max, u_short chr_top,
                    short int alpha) {
  int rgb_l;
  int rgb_r;
}

static void DspMsgWndw(/* s0 16 */ short int pos_x, short int pos_y,
                       short int alpha) {}
static void DspFileDtl(/* a0 4 */ short int pos_x, short int pos_y,
                       short int alpha) {}
static void DspFileBook(/* a0 4 */ short int pos_x, short int pos_y,
                        short int alpha) {}
static void DspFilePhot(/* a0 4 */ short int pos_x, short int pos_y,
                        short int alpha) {}

static void PhotDispCtrl(/* -0xd0(sp) */ u_char alp) {
  int i;
  int j;
  short int no;
  short int wk_no;
  char tate_yoko;
  signed char box_no;
  signed char lod_chk;
  u_int mem_ofs;
  SPRITE_DATA dmy;
  DSP_BOX dsp_box[1];
  DSP_PHT dsp_pht[1];
}

static char AllVramTensoOK(/* a0 4 */ char pht_num, DSP_BOX *dsp_box) {
  int i;
  short int dsp_ok;
}

static short int TargetPhot(/* a0 4 */ short int csr, short int no) {
  short int pht_no;
  short int load_pht;
}

static u_char DspPhot2D(/* s1 17 */ u_long tex, u_char rt, short int px,
                        short int py, short int sx, short int sy, u_char alp) {
  DISP_SPRT ds;
}

static void DspBack2D(/* a0 4 */ short int pht_no, u_char rt, short int px,
                      short int py, short int sx, short int sy, u_char alp) {}
static void DspFileCmmn(/* a0 4 */ short int pos_x, short int pos_y,
                        short int alpha) {}
void PageInfo(/* a0 4 */ u_char now, u_char all, short int pos_x,
              short int pos_y, u_char alpha) {}

void DokiDokiLetter(/* a3 7 */ u_char level) {
  u_char musinon_tbl[1];
  u_short ketuatu_tbl[1];
  static u_char musinon;
  static u_char sinpaku;
  static u_short ketuatu;
}

void RelationShip() {}

static char TateizFreeSpace() {
  int ret_num;
  DISP_SPRT ds;
}

void RelationMapInit() { int i; }

void RelAtributeChg() {
  int i;
  int j;
  int k;
}

void RelComAtributeChg() {
  int i;
  int j;
  int k;
}

void MoveBeyondData() {}

void MoveBeyondGroup() {
  int i;
  RELATION_PRT *temp_prt;
}

void RelMapScroolX(/* a0 4 */ RELATION_DAT *r_dat) {}
void RelMapScroolY(/* a0 4 */ RELATION_PRT *r_prt) {}

int ButtonManager() { int ret_num; }

void RelationDispDat(/* s2 18 */ RELATION_DAT *r_dat) {
  SPRT_DAT ssd;
  DISP_SPRT ds;
}

void RelDspYajirusi(/* s0 16 */ RELATION_YAJI *r_yaj) {
  float temp_x1;
  float temp_y1;
  float temp_x2;
  float temp_y2;
  float temp_x3;
  float temp_y3;
  u_char yaj_r;
  int yaj_pri;
}

void RelDspComment() {
  int i;
  int j;
  int l;
  int disp_flg;
  SPRT_DAT ssd;
  DISP_SPRT ds;
}

void RelDspPrtFla(/* s0 16 */ RELATION_PRT *r_prt) {
  int i;
  int j;
  int scl_flg;
  float scl_tmpx;
  float scl_tmpy;
  SPRT_DAT ssd;
  DISP_SPRT ds;
}

void RelDspPrt(/* a1 5 */ RELATION_PRT *r_prt) {
  int i;
  float temp_x1;
  float temp_y1;
  float temp_x4;
  float temp_y4;
}

void RelDspBackGrd() {
  int i;
  int j;
  u_char alp_rate;
  SPRT_DAT ssd;
  SPRT_DAT ssd_fnt;
  SPRT_DAT ssd_sakka;
  SPRT_DAT ssd_himuro;
  SPRT_DAT ssd_hina;
  SPRT_DAT ssd_muna;
  DISP_SPRT ds;
}

void RelationDispMsg(/* s5 21 */ RELATION_DAT *r_dat) {
  SPRT_SDAT ssd;
  SPRT_SDAT ssd2;
  SPRT_SDAT ssd3;
  SPRT_SDAT ssd4;
  DISP_SQAR dsq;
  DISP_STR ds;
  STR_DAT spev_str;
  short int dsp_offy;
}

void SimpleDispSprtDS(/* t4 12 */ SPRT_DAT *ssd, u_int addr, int sp_no,
                      SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
  DISP_SPRT ds;
  SPRT_DAT sd;
}

void TestPk2DataSou(/* a0 4 */ long int sendtexaddr) {
  static int ttest_count;
  SPRT_DAT ssd;
}

void DispCaption(/* a0 4 */ int no, u_char alp) {
  int i;
  u_int pri;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  CAPTION_DATA_SUB *cdsp;
  CAPTION_DATA *cdp;
  CAPTION_LIST *clp;
  DISP_SQAR dq;
  SQAR_DAT sq;
}

void NewgameMenuRankInit() {}
void LoadgameMenuRankInit() {}
void StartRankModeInit() {}
void IngameMenuRank() {}
void IngameMenuRankDisp() {}
static void IngameMenuRankData(/* a0 4 */ u_char dsp) {}
static void IngameMenuRankDataDisp(/* a0 4 */ u_char dsp) {}
static void RankCntInit() {}
static void RankCntRenew() {}

static void RankModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void RankModeInOut2() {}
static void DspTopRankLst(/* s2 18 */ u_char dsp, short int pos_x,
                          short int pos_y, u_char alpha) {}
static void DspRankersCHR(/* a0 4 */ u_char pos, u_char rank, u_char alpha) {}

static void RankEngine(/* a0 4 */ u_char rank, short int pos_x, short int pos_y,
                       u_char alpha) {
  u_int sc;
  u_char sm;
  u_char ss;
}

static char SrankCHK() {
  int i;
  u_int sc;
  char rtrn;
}

static void DspRankersSTR(/* a0 4 */ u_char pos, u_char rank, u_char alpha) {
  int i;
  DISP_STR ds;
  u_char obj_num;
  u_short obj_py[1][1];
  STR_DAT dmy_str;
}

static void DspRankersPHT(/* s0 16 */ u_char pos, u_char rank, u_char alpha) {
  u_char pic_no;
  float scale;
}

static void DspTopRankBig(/* s0 16 */ u_char dsp, short int pos_x,
                          short int pos_y, u_char alpha) {}

static void DspRankBigCHR(/* a0 4 */ u_char rank, u_char alpha) { int rgb; }

static void DspRankBigSTR(/* s2 18 */ u_char rank, u_char alpha) {
  int i;
  DISP_STR ds;
  u_char obj_num;
  u_short obj_py[1][1];
  STR_DAT dmy_str;
}

static void DspRankBigPHT(/* s2 18 */ u_char rank, u_char alpha) {
  u_char pic_no;
  signed char tmp;
}

static void RankingChkNow() {
  int i;
  int j;
  int tmp;
  PFILE_WRK tmp_srt;
  PICTURE_WRK tmp_pic;
}

void RankingChkMem(/* s1 17 */ PICTURE_WRK new_pic) {
  int i;
  int j;
  int same_pic;
  int del_no;
  int del_pic_id;
  int copy_flg;
}

int CheckSamePic(/* a0 4 */ PICTURE_WRK *newp) {
  int i;
  int j;
  int k;
  int no;
  PICTURE_WRK *savep;
  SUBJECT_CHK newp_chk[1];
  SUBJECT_CHK save_chk[1];
}

void NewgameMenuGlstInit() { u_int i; }

void StartGlstModeInit() {}
void IngameMenuGlst() {}
void IngameMenuGlstDisp() {}
static void IngameMenuGlstData() {}
static void IngameMenuGlstDataDisp() {}
static void GlstCntInit() {}
static void GlstCntRenew() {}

static void GlstModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void GlstModeInOut2() {}
static void DspGhostList(/* a0 4 */ short int pos_x, short int pos_y,
                         u_char alpha) {}
void DspGlst(/* s1 17 */ u_char alpha) {}

void DspLstOfs(/* a0 4 */ u_short start, u_char alpha) { int i; }

void PutRayName(/* a0 4 */ u_char ray_knd, u_short ray_no, u_char ray_msn,
                short int pos_x, short int pos_y, int rgb, u_char alpha) {
  DISP_STR ds;
  STR_DAT sd;
}

void DspGInf(/* s1 17 */ u_char alpha) {
  u_int per;
  float scale;
}

void DspGdtl(/* s1 17 */ u_char alpha) {
  u_char photo_alpha;
  u_int cur;
}

void Sheet(/* t5 13 */ u_short chr_lbl, short int pos_x, short int pos_y,
           u_short siz_x, u_short siz_y, u_char pri, u_char alp) {
  int i;
  int j;
  u_char sozai_w;
  u_char sozai_h;
  u_char h_num;
  u_char h_edg;
  u_char v_num;
  u_char v_edg;
}

void Fuchidori(/* a0 4 */ u_short chr_lbl, short int pos_x, short int pos_y,
               u_short siz_x, u_short siz_y, u_char pri, u_char alp) {}

void Naraberu(/* fp 30 */ u_short chr_lbl, short int pos_x, short int pos_y,
              u_char dir, u_short dst, u_char pri, u_char alp) {
  int i;
  u_char sozai_w;
  u_char sozai_h;
  u_char h_num;
  u_char h_edg;
  u_char v_num;
  u_char v_edg;
}

static void PutPtrn(/* a0 4 */ u_short chr_lbl, u_char w, u_char h, short int x,
                    short int y, int pri, u_char alp) {
  DISP_SPRT ds;
}

void ReSetGhostList(/* a0 4 */ PICTURE_WRK new_pic) {
  int i;
  int j;
  u_short ray_knd;
  u_short ray_no;
  u_char ray_msn;
  ENE_DAT *edat;
  char flg;
}

u_short GetGlistAllNum() { u_int i; }

u_short GetGlistGNum() {
  u_int i;
  u_int j;
}

void DispGlistPhoto(/* t0 8 */ u_int line, u_char alpha) { u_int id; }

char CheckGlistComplete(/* a0 4 */ u_int list) {
  u_int i;
  u_int flg;
}

char CheckGlistRareGhost(/* a0 4 */ u_int kind, u_int no) {}

void NewgameMenuMapInit() {}
void LoadgameMenuMapInit() {}
void StartMapModeInit() {}
void IngameMenuMap() {}
void IngameMenuMapDisp(/* s1 17 */ u_char mod) {}
static void MapCntInit() {}
static void MapCntRenew() {}

static void MapModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void MapModeInOut2() {}
static void DspPlyrInMap(/* a0 4 */ u_char alp) {}

static void MapScoop() {
  short int scl_cmp;
  short int scl_obj;
}

static void MapMove(/* a3 7 */ u_char alp) {
  short int mvx;
  short int mvy;
  u_char anacon;
}

static void MapInfo1(/* a0 4 */ u_char alp) {
  float px;
  float py;
}

static void MapInfo2(/* a0 4 */ u_char alp) {}

static void MapPrint(/* -0xd0(sp) */ short int mov_px, short int mov_py,
                     u_char alp) {
  int i;
  int j;
  int id;
  short int map_ox;
  short int map_oy;
  short int door_mx;
  short int door_my;
  u_char door_stts;
  DOOR_STTS_MAP dsmp;
  float bg_scl;
  u_char num_i;
  u_char num_j;
  short int start_x;
  short int start_y;
}

static void MapPlayer(/* a0 4 */ short int mov_px, short int mov_py,
                      u_char alp) {
  int i;
  float now_rd;
  short int x[1];
  short int y[1];
}

static void MapChrCtrl(/* s5 21 */ short int pos_x, short int pos_y,
                       u_char alp) {
  int id;
  int rgb;
  int red;
}

static void MapChrSet(/* t2 10 */ u_char id, short int pos_x, short int pos_y,
                      int rgb, u_char alp, float scl, int pri) {}

static void PutChrForMap(/* a0 4 */ u_short chr_lbl, short int pos_x,
                         short int pos_y, int rgb, u_char alp, float scl,
                         int pri) {
  DISP_SPRT ds;
}

static void PutIcnForMap(/* a0 4 */ u_short chr_lbl, short int pos_x,
                         short int pos_y, short int rot, u_char alp,
                         float scl) {
  DISP_SPRT ds;
}

static void PutIcnForMap2(/* a0 4 */ u_char type, short int pos_x,
                          short int pos_y, short int rot, u_char alp, float scl,
                          u_char sz_ptn) {
  SQAR_DAT base;
  DISP_SQAR ds;
}

static void DspLayOut(/* -0xe0(sp) */ short int pos_x, short int pos_y,
                      u_char alpha) {
  int i;
  LINE_PRT prot[1];
  SPRT_DAT ssd;
  DISP_SPRT ds;
}

static void MapTri(/* s0 16 */ short int pos_x, short int pos_y, u_char alpha) {
  int i;
  int rgb1[1];
  int rgb2[1];
  int flsh1;
  int flsh2;
}

static u_char MapExstFlr(/* a0 4 */ u_char id, u_char flr) {
  u_char rtrn;
  int i;
}

static void MapExistCHK() {
  int i;
  int id;
  u_char room_exist;
}

static u_char MapMovableCHK() {}

static void SetLineStrip(/* s1 17 */ int pri, u_char num, LINE_PRT *prot,
                         u_short alp) {
  int i;
  float div;
  int z;
  LINE_PRT tmp;
}

static void SetCircle(int pri, short int xo, short int yo, short int r,
                      u_char dtl, u_char cr, u_char cg, u_char cb, int a) {
  u_char a;
  float rad;
  float div;
  int i;
  int x[1];
  int y[1];
  int z;
  int mpri;
}

void AngleForWin(/* a0 4 */ int pri, short int xo, short int yo, short int r,
                 u_char ptn) {
  float px;
  float py;
  float rad;
  float div;
  int i;
  int x[1];
  int y[1];
  int z;
  int mpri;
}

void NewgameMenuOptionInit() {}
void LoadgameMenuOptionInit() {}
void StartOptionModeInit(/* a0 4 */ u_char mode) {}
void IngameMenuOption() {}
char MenuOptionPad(/* s2 18 */ u_char *csr, u_char *mode) {}
static void MenuOptionDisp(/* s2 18 */ u_char csr, u_char mode, u_char io) {}
static void OptionCntInit() {}
static void OptionCntRenew() {}

static void OptionModeInOut() {
  int i;
  float fade_in;
  float fade_out;
}

static void OptionModeInOut2() {}
void DspOptCtrl(/* s2 18 */ u_char csr, u_char mode, u_char alpha, u_char ttl) {
}
static void DspAlpCtrl(/* a0 4 */ u_char *src, u_char mode, u_char alpha) {}
static void DspOptMain(/* a0 4 */ u_char csr, u_char mode, u_char alp0,
                       u_char alp1, u_char alp2, u_char ttl) {}

static void DspOptCsr(/* s2 18 */ u_char csr, u_char mode, u_char alpha) {
  OPT_CSR_POS csr_pos[1];
  int rgb1;
  int rgb2;
}

static void DspBigFlame1(/* s1 17 */ u_char alpha, u_char str_mode) {}

static void DspBigFlame2(/* s1 17 */ u_char alpha, u_char str_mode) {
  DISP_SPRT ds;
}

static void DspSmlFlame1(/* s0 16 */ u_char alpha, u_char str_mode) {}
static void DspSmlFlame2(/* s0 16 */ u_char alpha, u_char str_mode) {}
static void DspMsgWin(/* a0 4 */ u_char csr, u_char alpha) {}

void StepLinesSimpleDraw(/* s1 17 */ short int *p_stp[1], u_char r, u_char g,
                         u_char b, u_char alpha) {
  int i;
}

void SimpleHorLine(/* s1 17 */ short int *p_stp[1], u_char r, u_char g,
                   u_char b, u_char alpha, int typ) {
  int i;
}

static void DspPadType(/* s5 21 */ u_char alpha, u_char ttl) {
  int i;
  int typ;
  int rev;
  int mov;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  short int pnt_stp3[1][1];
  short int pnt_stp4[1][1];
  short int pnt_stp5[1][1];
  short int pnt_stp6[1][1];
  short int p_idx4[1][1];
  short int p_idx5[1][1];
  short int f_idx[1][1];
  short int f_idx2[1][1];
  short int f_col[1][1];
}

static void DspLgtScrn(/* s0 16 */ u_char alpha, u_char ttl) {}

void SavePointMenuInit() {}
void SavePointMenuOpen() {}
void SavePointMenuOpenInit(/* a0 4 */ u_char msn) {}
void BtlModSaveInit() {}

char SavePointMenuMain(/* s4 20 */ u_char msn) {
  u_char mode;
  u_char rtrn;
  int is_btlmode;
}

void SavePointMenuModeSlct(/* a0 4 */ u_char msn, u_char mode) {}

void SavePointMenuModeSlctDisp(/* s7 23 */ u_char msn, u_char csr3, u_char csr4,
                               u_char alp_max, u_char mode) {
  int i;
  u_char alp;
  int rgb;
  short int csr_x0[1];
  short int csr_x1[1];
  short int csr_x2[1];
  short int csr;
  static short int adj_x;
  static short int adj_y;
}

void SavePointMenuAlbum() {}
void SavePointMenuSave() {}
static u_char SaveConte() {}

void DspMemSavePoint(/* a0 4 */ u_char msk, u_char msg, u_char fdt, u_char svp,
                     u_char alt, u_char csr0, u_char csr1, u_char csr2,
                     int yes_no, int alp_max, int type) {
  u_char yes_no;
  u_char alp_max;
  u_char type;
  int i;
  char num;
  u_char flg;
  u_short msk_add;
  u_short fdt_add;
  u_short svp_add;
  u_char alpha;
}

static void WarningMsg(/* s0 16 */ u_char msg, u_char csr0, u_char alp,
                       u_char ha) {
  float pos_y;
}

static void GetSvpNo(/* s1 17 */ u_char *no) {
  int i;
  u_char svp_no;
}

char SaveCamChk() {}
static void DspSavePoint(/* a0 4 */ u_char csr1, u_char csr2, u_char alp,
                         u_char type) {}

static void DspSpLenz(/* a0 4 */ u_char dsp_no, u_char alp) { float dec; }

static void DspSpCate(/* s3 19 */ u_char csr1, u_char csr2, u_char alp) {}

static void DspSpData(/* s4 20 */ u_char csr2, u_char alp, u_char type) {
  int i;
  u_short pos_y;
  float csr_alp;
}

static void DspSpFile(/* a0 4 */ u_char file_no, u_char pos_y, u_char alp,
                      u_char type) {}

static void DspSpInfo(/* a1 5 */ u_char file_no, u_char pos_y, u_char alp,
                      u_char type) {
  u_char end_showzo;
  u_char sv_pht;
}

static void DspSpFile2(/* a0 4 */ u_char file_no, u_char pos_y, u_char alp,
                       u_char type) {}
static void DspSpInfo2(/* a0 4 */ u_char csr_no, u_char pos_y, u_char alp,
                       u_char type) {}

char AlbmSlct(/* t3 11 */ u_char csr3, u_char step, u_char alp_max,
              u_char ini) {
  int i;
  float per;
  char rtrn;
  static u_char book_anm;
  static u_char back_alp;
  static u_char csr_bak;
  static u_char csr_bak2;
  BOOK init[1];
  BOOK move;
}

static void OpenBook(/* a0 4 */ int i, BOOK *book) { DISP_SPRT ds; }

static void SpMsgWin(/* a0 4 */ u_char alpha) {}
static void SpSideBar(/* a0 4 */ short int pos_x, short int pos_y,
                      u_char alpha) {}
static void SpTrFlsh(/* a0 4 */ short int pos_x, short int pos_y,
                     short int alpha) {}
static void DspSaveTitle(/* s0 16 */ u_char type, short int pos_x,
                         short int pos_y, u_char alp, u_char pri) {}
static void PhotoDataExchange() {}

static int AlbmDesignLoadInGame(/* v1 3 */ u_char side, u_char type) {
  u_int addr;
  int load_id;
}

void AlbumModeInGameOverInit() {}

char AlbumModeInGameOver() { char rtrn; }

int SavePointLightJudge() {}

void DoorOpenConteInit() {}

u_char DoorOpenConte() {
  u_char anm;
  static int i;
  static u_char one_flg;
}

static void DoorConteInit() {}

static void PlayerPosAdjust(/* a0 4 */ u_char *time, u_char max) { float per; }

static void PlyrPosReSet() {
  PLYR_WRK *pwp;
  MOVE_BOX *mbp;
}

long int PhotoScoreCount() {
  long int score;
  int i;
  float point;
  float point_2d;
}

int SubjectScoreCount(/* a0 4 */ SUBJECT_WRK *sj) { float score; }

int SpecialPhotoMakeJudge() {
  int count;
  int ret;
  u_char no;
  static int hint_tbl[1];
  static int hint_rea_tbl[1];
}

void AddPhotoData() {
  int i;
  int dust;
}

int GetSavePhotoNo() {}

void DeletePhotoData(/* a0 4 */ u_char no) {
  int i;
  int dust;
}

void GetRecordSubject(/* a0 4 */ PICTURE_WRK *pic) {
  int i;
  int sort[1][1];
  int tmp[1];
}

void PhotoCtrlInit() {}

void PhotoCtrl() {
  int i;
  static int load_id1;
  static int load_id2;
  static int btfl;
  static int cnt;
  static int fd_cnt;
  static int no;
  int fl;
}

void InitPazEneTexLoad() { int i; }

void InitPhotoMake() {}

void CopyScreenToBuffer(/* s1 17 */ int addr, int szfl, int mx, int my, int mw,
                        int mh) {
  int *data_i;
  short int *data_o;
  int x;
  int y;
  int oneli;
  int onelo;
  u_int un;
  int myy;
  int mhh;
}

void DrawPhotoBuffer(/* s2 18 */ u_int pri, int addr, int szfl, int x, int y,
                     int szw, int szh, int mszw, int mszh, int ftype, int alp,
                     int ztype) {
  int mszh;
  int ftype;
  u_char alp;
  int ztype;
  u_long128 *data_i;
  int dbw;
  sceGsLoadImage gs_limage;
  float fh;
  float xx;
  float yy;
  SPRITE_DATA sd;
  DRAW_ENV de;
}

void CompressData(/* s2 18 */ int addri, int addro, int n) {
  int one_size;
  u_int quality;
}

void UncompressData(/* a0 4 */ int addri, int n, int addro) {
  int one_size;
  u_int type;
}

void TakePhotoFromScreen() {}

void MakeSPhotoFromWorkArea(/* a0 4 */ int n) { int addr; }

void MakeSPhotoFromCompress(/* v1 3 */ int ni, int no) { int addr; }

void DrawSPhotoFromSmallPhotoArea(/* a0 4 */ int n, int pri, int ftype, int x,
                                  int y, u_char alp) {}

void DrawSPhotoFromSmallPhotoAreaAD(/* a0 4 */ int addr, int n, int pri,
                                    int ftype, int x, int y, u_char alp) {
  int addr2;
}

void DrawSPhotoFromSmallPhotoArea2(/* a0 4 */ int n, int pri, int ftype, int x,
                                   int y, int szw, int szh, u_char alp) {}

void DrawSPhotoFromSmallPhotoArea2AD(int addr, int n, int pri, int ftype, int x,
                                     int y, int szw, int szh, int alp) {
  int addr2;
}

void CompPhotoFromWorkArea(/* a0 4 */ int n) {}
void DrawPhotoFromWorkArea(/* a0 4 */ int pri, int ftype, int x, int y, int szw,
                           int szh, u_char alp) {}
void DrawPhotoFromCompress(/* a0 4 */ int n, u_int pri, int ftype, int x, int y,
                           int szw, int szh, u_char alp) {}
void UncompressPhoto(/* a1 5 */ int n) {}
void UncompressPhotoAD(/* a0 4 */ int addr, int n) {}
void DrawPhotoFromPhotoWrk(/* a0 4 */ int n, u_int pri, int ftype, int x, int y,
                           int szw, int szh, u_char alp) {}

void CopyPhoto(/* a0 4 */ int addri, int ni, int addro, int no) {
  int i;
  short int *data_o;
  int one_size;
}

void CopySPhoto(/* a0 4 */ int addri, int ni, int addro, int no) {
  int i;
  short int *data_o;
  int one_size;
}

void DrawPhotoHinttex(/* s1 17 */ u_int pri, int num) { DISP_SPRT ds; }

void DrawPhotoHinttex2(/* t0 8 */ u_int sw, u_int pri, int num) {
  DISP_SPRT ds;
  float f;
  float pos;
  u_char alp;
  u_char alp2;
  int time;
  int target;
  SPRT_DAT *sd;
  int max;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

void DrawPhotoEffect(/* s0 16 */ u_int pri, int type) {
  DISP_SPRT ds;
  SPRT_DAT sd;
  float sc;
  float velx;
  float vely;
}

void DrawPhotoFilter(/* s0 16 */ u_int pri, int type, u_char alp) {
  DISP_SPRT ds;
  static SPRT_DAT phtdat[1];
}

void DispPhotoFrame0() {
  int i;
  int num1;
  int num2;
}

void DispPhotoFrame00(/* a0 4 */ int flag) {
  static u_char cnt;
  static int flow;
  u_char a;
  DISP_SPRT ds;
  SPRT_DAT sd;
}

int DispPhotoFrame1(/* s2 18 */ int fl) {
  static int time1;
  static int cnt;
  static u_char alp1;
  static u_char alp2;
  static int flash_fr;
  static int fl_cnt;
  u_char a;
  int i;
  int j;
  int x;
  int y;
  int ret;
  DISP_SPRT ds;
  SPRT_DAT sd;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
  DISP_SPRT ds;
  SPRT_DAT sd;
  DISP_SPRT ds;
  SPRT_DAT sd;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
  float fh;
  float szw;
  float szh;
  float szhc;
}

void DispPhotoFrame2() {
  float x;
  float y;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

void DispPhotoFrame2_2(/* s4 20 */ int type) {
  float x;
  float y;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
  float szw;
  float szh;
}

void DispPhotoFrame2_3(/* s5 21 */ int type) {
  float x;
  float y;
  DISP_SPRT ds;
  SPRT_DAT sd;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
  float szw;
  float szh;
}

void SetNegaFilter(/* a1 5 */ int type) {
  float CHANGE_TIME;
  float x;
  float y;
  float y11;
  float y12;
  float y21;
  float y22;
  float f;
  int endf;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
  SQAR_DAT sq;
  DISP_SQAR dq;
  int i;
}

void PhotoMake() {
  int num2;
  STR_DAT sd;
  DISP_STR ds;
  int num;
  STR_DAT sd;
  DISP_STR ds;
  int num;
  u_char *strp;
  static int fl;
}

void PhotoMake_EneDead() {
  int i;
  int num1;
  int num2;
}

void PhotoMakeSaveInit() {}
void DrawPicture(/* a1 5 */ int pri, int addr, int n, float x, float y,
                 float szw, float szh, u_char alp) {}
void CopyPicture(/* a0 4 */ int addri, int ni, int addro, int no) {}
void ReqSavePicture() {}
void PhotoMakeSave() {}
void PhotoMakeSave2() {}

void PlyrCtrlMain() {}
int PlyrDoorOpenChk() {}

u_char ShortPauseChk() { u_char chk; }

void PlyrCondChk() {}

void PlyrDmgChk() {
  static u_char avoid_chk_tm;
  static u_char wrong_chk;
}

void PlyrVibCtrl(/* a0 4 */ u_char time) {}

void PlyrFinderModeChk() {
  u_short pad_finder;
  u_short pad_finder_bk;
}

void FinderInSet() {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  float dist[1];
  u_char i;
  u_char trgt;
}

void FinderEndSet() { u_char i; }

void ClrEneSta() { u_char i; }

void PlyrHeightCtrl(/* s1 17 */ float *tv) {
  sceVu0FVECTOR p;
  sceVu0FVECTOR av;
}

void PlyrNormalCtrl() {}

void PlyrSpotMoveCtrl() {
  sceVu0FVECTOR rv;
  float r;
  float rcng_adj;
  u_char d;
}

void PlyrFinderCtrl() {}
void PlyrCamRotCngChk() {}

void EneHPchk() {
  ENE_WRK *ew;
  float dist[1];
  u_char i;
  u_char no;
}

void FModeScreenEffect() {
  ENE_WRK *ew;
  float dist[1];
  float alpha;
  u_char i;
  u_char crate;
}

void PlyrDmgCtrl() {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  u_char n;
}

u_char LeverGachaChk() {
  u_char result;
  static u_char lever_dir_old;
}

void PlyrFinderEnd() {}

void PlyrNAnimeCtrl() {
  u_int psta;
  u_char anime_no;
  u_char frame;
  u_char rl_chk;
  u_char i;
  u_char j;
  u_int psta_chk_tbl[1];
  u_char pmani_no_tbl[1][1];
}

void SetPlyrAnime(/* a0 4 */ u_char anime_no, u_char frame) {}

void PlyrTrembleChk() {
  FURN_WRK *fw;
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  float dist;
  float dist_chk;
  u_int fsta;
  u_char i;
  u_char chk;
  u_char no;
  u_short mvib_time_tbl[1];
  u_char mvib_deg_tbl[1];
  static u_short mvib_time0;
  static u_short mvib_time1;
  static u_char mvib_degree;
}

void ReqPlyrHPdown(/* a0 4 */ u_short deg, u_char prio) {}

void PlyrHPdwonCtrl() { u_short down; }

void PlyrSpotLightOnChk() {}

void SetPlyrSpotLight(/* s3 19 */ u_char id) {
  SPOT_WRK ts0;
  SPOT_WRK ts1;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  u_char i;
}

void PlyrSubAtkChk() {
  u_char hit;
  int sub_se_tbl[1];
}

u_char PSAchk0() {
  ENE_WRK *ew;
  u_char i;
  u_char chk;
}

u_char PSAchk1() {
  ENE_WRK *ew;
  u_char i;
  u_char chk;
}

u_char PSAchk3() {
  ENE_WRK *ew;
  u_char i;
  u_char chk;
}

u_char PSAchk2() {
  ENE_WRK *ew;
  u_char i;
  u_char chk;
}

void PSAchk4(/* s4 20 */ u_char id) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR tr;
  sceVu0FVECTOR rv;
  ENE_WRK *ew;
  float dist[1];
  float rot;
  u_char i;
  u_char j;
  u_char trgt;
}

void PSAchk5() {
  ENE_WRK *ew;
  sceVu0FVECTOR rv;
  float dist[1];
  u_char i;
  u_char t;
}

void PlyrPhotoChk() { u_short pad_shutter; }

void EneFrameHitChk() {
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR rv;
  PP_JUDGE ppj;
  float dpe;
  float dce;
  float tx;
  float ty;
  u_char i;
  u_char chk;
  u_char chk2;
}

void PlyrChargeCtrl(/* a0 4 */ u_char req, ENE_WRK *ew) {
  u_short ctime[1];
  float cldown[1];
  float dpe;
  float rate0;
  float rate1;
  u_char cn;
  u_char cl_max;
}

void PhotoFlyChk() {
  FLY_WRK *fw;
  float tx;
  float ty;
  u_char i;
}

int FrameInsideChk(/* a0 4 */ float *tv, float *tx, float *ty) {
  float minx;
  float maxx;
  float miny;
  float maxy;
  int result;
}

int FrameInsideChkFurn(/* s0 16 */ FURN_WRK *fw, float *degree, u_int fsta) {
  PP_JUDGE ppj;
  sceVu0FVECTOR fpc;
  int i;
  int pchk;
  int ret;
  float magnify;
  float tx;
  float ty;
}

int FrameInsideChkRare(/* a0 4 */ int wrk_no, float *degree) {
  int i;
  int rg_no;
  int ret;
  float magnify;
  float tx;
  float ty;
  sceVu0FVECTOR rpc;
}

u_short PhotoDmgChk() {
  ENE_WRK *ew;
  u_short dmg;
}

u_short PhotoDmgChkSub(/* t0 8 */ ENE_WRK *ew) {
  u_int i;
  u_char film_up_tbl[1];
}

void PhotoPointSet() {}

void PhotoPointChkEne() {
  u_char i;
  u_char cnt;
}

void PhotoPointChkFurn() {
  PHOTO_WRK *pw;
  FURN_WRK *fw;
  sceVu0FVECTOR tv;
  u_int sta;
  u_int i;
  float dist;
  float degree;
}

void PhotoPointChkRare() {
  u_int i;
  float degree;
}

void PhotoPointCulcEne(/* t2 10 */ ENE_WRK *ew, PHOTO_WRK *pw) {
  SUBJECT_WRK *sw;
  int i;
  int point;
  float point_plus;
  float ratio;
  float ratio_tmp;
  float dist;
}

void PhotoPointCulcFurn(/* t4 12 */ FURN_WRK *fw, PHOTO_WRK *pw, float dist,
                        float degree, u_int stts) {
  SUBJECT_WRK *sw;
  int i;
}

void PhotoPointCulcRare(/* a0 4 */ u_char wrk_no, PHOTO_WRK *pw, float dist,
                        float degree) {
  SUBJECT_WRK *sw;
  int i;
  int rg_no;
  u_char para0;
}

void PlyrMpRecoverChk(/* a0 4 */ u_int recov) {}

void PlyrFModeMoveCtrl() {
  MOVE_BOX *mb;
  sceVu0FVECTOR tv;
}

void PlyrActionChk() {}

void PlyrNModeMoveCtrl() {
  sceVu0FVECTOR tv;
  MOVE_BOX *mb;
}

void PlyrHitTurnChk(/* s0 16 */ MOVE_BOX *mb, float *tv) { float rot; }

u_char PlyrSpecialMoveChk2(/* s5 21 */ float *mv) {
  sceVu0FVECTOR rv;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR cv;
  sceVu0FVECTOR bv;
  u_char i;
  u_char clr;
}

void PlyrSpecialMoveChk(/* s2 18 */ float *mv) {
  sceVu0FVECTOR tv;
  sceVu0FVECTOR cv;
  sceVu0FVECTOR rv;
  float rot;
  float adj;
  u_char move_mot;
  u_char up;
  float lstep_adju;
  float sstep_adju;
  float sstep_adjd;
  float nlad0_adju[1];
  float nlad0_adjd[1];
  float rlad0_adju[1];
  float rlad0_adjd[1];
  float rlad1_adju[1];
  float rlad1_adjd[1];
}

void PlyrPosSet(/* s1 17 */ MOVE_BOX *mb, float *tv) {}
void PlyrKonwakuMove(/* a0 4 */ MOVE_BOX *mb, float *tv) {}

void PlyrMovePad(/* s1 17 */ MOVE_BOX *mb, float *tv) {
  sceVu0FVECTOR fr;
  sceVu0FVECTOR tr;
  float r;
  float rcng;
  u_char run_chk;
  static u_char no_rot_cng2;
  static u_short cam_cng_tm;
  static int plyr_cam_no_save;
  static float keep_rot;
  static float rs[1];
  static u_char ds[1];
}

void GetMoveSpeed(/* a0 4 */ float *tv) {}

void PlyrMovePadV(/* s0 16 */ MOVE_BOX *mb, float *tv) {
  sceVu0FVECTOR r;
  float delta;
  u_char dir;
  static u_char dir_old;
}

void CngPlyrRotRapid(/* s0 16 */ MOVE_BOX *mb, float rot0) {}

void PlyrMovePadFind(/* s2 18 */ MOVE_BOX *mb, float *tv) {
  float rot;
  u_char anime;
  u_char frame;
  u_char anime_tbl[1];
}

float GetMovePad(/* a0 4 */ u_char id) {
  float rot;
  u_char dir;
}

int MovePadEnableChk(/* a0 4 */ u_char *dir_save) { int chk; }

void PadInfoTmpSave(/* t0 8 */ u_char *dir_save, u_char dir_now,
                    float *rot_save, float rot_now) {
  u_char i;
}

u_char PlyrMoveStaChk(/* f20 58 */ float pad_chk) {
  u_char run_chk;
  u_int psta;
}

u_int PlyrLeverInputChk() {
  u_char chkx;
  u_char chky;
  u_int result;
}

u_char PlyrMoveHitChk(/* s2 18 */ MOVE_BOX *mb, float *tv, u_char id) {
  float dist;
  u_char result;
  u_char div;
}

void InitPhotoWrk() {
  PHOTO_WRK *pw;
  int i;
}

void InitSubjectWrk(/* a0 4 */ SUBJECT_WRK *sw) {}

void PlyrBattleChk() {
  ENE_WRK *ew;
  int i;
}

void PlyrLightSet() {
  LIGHT_PACK *lp;
  POINT_WRK p;
  sceVu0FVECTOR tv;
  char pr_set;
  char po_set;
}

void PlyrMessageDisp() {}

int ReqPlyrSpeAnime(/* a0 4 */ u_char anime_no, u_char frame) { int result; }

void PlyrSpeAnimeCtrl() {
  MOVE_BOX *mb;
  sceVu0FVECTOR tv;
}

void PlyrDWalkTmCtrl() {}

float GetEnePowerDegree() {
  FURN_WRK *fw;
  ENE_WRK *ew;
  sceVu0FVECTOR tv;
  sceVu0FVECTOR sv;
  float dist[1];
  float degree;
  float far;
  float height;
  u_int fsta;
  u_char i;
}

float CulcEP(/* a0 4 */ float *v0, float *v1) {
  sceVu0FVECTOR rv;
  float degree;
}

float CulcEP2(/* a0 4 */ float *v0, float *v1) {
  sceVu0FVECTOR rv;
  float degree;
}

int ChkPhotoAble() {
  int result;
  u_char i;
}

int SearchRareEne() {
  sceVu0FVECTOR tv;
  float dist[1];
  float tx;
  float ty;
  int i;
  int result;
}

int SearchFurnHint() {
  PP_JUDGE ppj;
  FURN_WRK *fw;
  sceVu0FVECTOR tv;
  float dist[1];
  float tx;
  float ty;
  u_int fsta;
  int i;
  int result;
  u_char pchk;
}

int GetFurnHintPos(/* s0 16 */ FURN_WRK *fw, float *tv, u_int *fsta) {
  u_int furn_attr;
  int result;
}

float GetPlyrSpd() { float spd; }

int PlyrNeckDirectionChk(/* s0 16 */ float *p) {}

u_char NeckTargetEneChk(/* s2 18 */ float *p) {
  ENE_WRK *ew;
  float dist[1];
  u_char i;
  u_char no;
}

u_char NeckTargetItemChk(/* s1 17 */ float *p) {
  float dist[1];
  u_char i;
  u_char no;
}

u_char NeckTargetDoorChk(/* s1 17 */ float *p) {
  sceVu0FVECTOR rv;
  float dist[1];
  u_char i;
  u_char no;
}

u_char PlyrNoticeObjectChk(/* s1 17 */ float *ov, float *dist) {
  sceVu0FVECTOR rv;
  u_char result;
}

void ReqPlayerStop(/* a1 5 */ u_char frame) {}
void PlayerWarpReq(/* a0 4 */ u_char dat_no) {}
int PlayerWarpCtrl() {}
void PlayerWarpRoomLoadReq() {}

int ShutterChanceChk() {
  ENE_WRK *ew;
  u_char i;
  int result;
}

void PlayerWarpReq2(/* a0 4 */ u_char dat_no) {}

void RotLimitChk(/* a0 4 */ float *rot) {}
float GetTrgtRotY(/* a0 4 */ float *p0, float *p1) {}

void GetTrgtRotFromPlyr(/* s1 17 */ float *p, float *rot, int id) {
  sceVu0FVECTOR dist;
}

void GetTrgtRot(/* s1 17 */ float *p0, float *p1, float *rot, int id) {
  sceVu0FVECTOR dist;
}

int GetRndSP(/* s1 17 */ u_int min, u_int lng) { long int result; }

u_char ConvertRot2Dir(/* f12 50 */ float rot, u_char id) { u_char dir; }

u_char HitChkSegment2AllChk(/* s2 18 */ float *f, float *t, float deg) {}

u_char OutSightChk(/* s2 18 */ float *tp, float *vp, float rot, float sight,
                   float dist) {
  u_char chk;
}

int RotRngChk(/* a0 4 */ float *vp, float *tp, float rot, float rng) {}

int GetPointHeightChk(/* s1 17 */ float *tv) { int result; }

void ReqEneStop(/* a0 4 */ u_char req, u_char except) {
  ENE_WRK *ew;
  FLY_WRK *fw;
  u_char i;
}

void LayoutTestInit() {}
void LayoutTestMain() {}

void LayoutTestDisp() { DISP_SPRT ds; }

void SceneTestCtrl() {}

int SceneTestInit() {
  int ret;
  static int load_id;
  static int load_st;
}

void SceneTestMain() {}

void SceneTestSelect() {
  char str_title[1];
  char str_press[1];
  char str_scene_no[1];
  int ret;
  int scene_no;
}

void SceneTestPlay() { int end_flg; }

int SceneTestLoad() {
  static int load_id;
  int ret;
}

void ScnTestMdlLoadReq(/* s2 18 */ u_int *addr) {
  SCN_ANM_MDL *sam;
  int i;
  int hero_no;
}

int ScnTestMdlLoadWait() {
  SCN_ANM_MDL *sam;
  int i;
  int hero_no;
  int *addr;
}

void SceneTestMenu() { int end_flg; }

void SceneTestMainMenu() {
  int i;
  char *menu_str[1];
}

void SceneTestLightSelect() {
  FOD_LIT_SERIAL *fls;
  int i;
  int ret;
  char *ltype_name[1];
  char tmp_str[1];
}

void SceneTestLightData() {
  FOD_LIT_SERIAL *fls;
  SgLIGHT *light;
  sceVu0FVECTOR color;
  float cone_deg;
  int i;
  int yofs;
  int menu_num;
  int csr_pos;
  char *ltype_name[1];
  char *col_str[1];
  char tmp_str[1];
  float *v1;
}

void ScnDispPrintVector(/* s4 20 */ char *ttl, float *v, float x, float y) {
  char tmp_str[1];
}

void SceneTestAmbient() {
  SCN_TEST_WRK *stw;
  sceVu0FVECTOR *amb_p;
  char *amb_str[1];
  char *col_str[1];
  char tmp_str[1];
  int i;
  int j;
  int yofs;
  int csr_pos;
}

void RotVectorY(/* s0 16 */ float *normal, float *vector, float delta) {
  sceVu0FMATRIX m0;
}

void SceneTestPadCamera() {
  SgCAMERA *cam;
  sceVu0FMATRIX mat;
  sceVu0FVECTOR vec;
  sceVu0FVECTOR dir;
  sceVu0FVECTOR xz_dir;
  float dist;
  float accel;
}

void SceneTestCameraMode() {
  sceVu0FVECTOR pos[1];
  int i;
  char *menu_str[1];
  char tmp_str[1];
  float *v1;
  float *v1;
}

void SceneTestFogData() {
  int i;
  char *menu_str[1];
  char tmp_str[1];
  int fog_col[1];
  float fog_data[1];
}

void SceneTestEffect() {
  SCN_TEST_WRK *stw;
  SCN_EFF_CTRL *sec;
  int i;
  int ret;
  int yofs;
  char tmp_str[1];
  char *on_off[1];
}

void SceneTestEffectData() {
  SCN_TEST_WRK *stw;
  SCN_EFF_CTRL *sec;
  char tmp_str[1];
}

void SceneTestEneEffect() {
  SCN_TEST_WRK *stw;
  int i;
  int ret;
  int yofs;
  int non_flg;
  char *eff_name[1];
  char tmp_str[1];
}

void SceneTestEneEffFire() {
  SCN_TEST_WRK *stw;
  SCN_ENE_EFCT *see;
  int i;
  int ret;
  int yofs;
  char tmp_str[1];
  char *rgba_str[1];
  float size;
  float rate;
  u_char rgba[1];
}

void SceneTestEneEffPDeform() {
  SCN_TEST_WRK *stw;
  SCN_ENE_EF_PDF *pdf;
  SCN_ENE_EF_PDF pdf_buf;
  int ret;
  char tmp_str[1];
}

void SceneTestEneEffOthers() {
  SCN_TEST_WRK *stw;
  SCN_ENE_EFCT *see;
  int ret;
  char tmp_str[1];
  float dist;
  float pos_ajst;
  int alpha;
}

void SceneTestEffectTest() { FOD_EFF_DATA *fed; }

void SceneTestSetDefEffect() { int i; }

void SceneTestVibrate() {
  static int vib2_val;
  SCN_TEST_WRK *stw;
  int i;
  int yofs;
  char *vib_menu[1];
  char tmp_str[1];
}

int SceneTestDraw(/* s0 16 */ int cnt_flg) { char frame[1]; }

void SceneTestLoopManage(/* a0 4 */ char flg) {}

int ScnLRCtrl(/* a0 4 */ int *csr, int max, int min) { int ret; }

int ScnUDCtrl(/* a0 4 */ int *csr, int max, int min) { int ret; }

int ScnValueCtrl(/* a0 4 */ float *val, float max, float min, float inc,
                 float mul) {
  int ret;
}

int ScnValueCtrlI(/* a0 4 */ int *val, int max, int min, int inc, int mul) {
  int ret;
}

int ScnValueCtrlC(/* a0 4 */ u_char *val, u_char max, u_char min, int inc,
                  int mul) {
  int ret;
}

int SceneFileSaveBin() {
  SgLIGHT *lp;
  sceVu0FVECTOR amb;
  int i;
  int fd;
  int align128[1];
  char fname[1];
  char *discrim;
  float *v1;
}

int SceneFileSaveText() {
  FOD_LIT_SERIAL *fls;
  SgLIGHT *lp;
  sceVu0FVECTOR ambient;
  int i;
  int fd;
  char *ltype_name[1];
  char *amb_str[1];
  char fname[1];
  char line[1];
  float *v1;
}

void TitleCtrl() {
  static u_int mc_pnum1;
  static u_int mc_pnum2;
  static u_int mc_atyp1;
  static u_int mc_atyp2;
  static u_int mc_slot1;
  static u_int mc_slot2;
  static u_int mc_file1;
  static u_int mc_file2;
  static int title_cnt;
}

static int AlbmDesignLoad(/* v1 3 */ u_char side, u_char type) {
  u_int addr;
  int load_id;
}

void TitleWaitMode() {
  int i;
  float alp;
  DISP_SPRT ds;
}

void TitleStartSlct() {
  char *str1;
  char *str2;
  char *str3;
  char *str4;
  char *csr0;
}

void TitleStartSlctYW(/* -0xc0(sp) */ u_char pad_off, u_char alp_max) {
  int i;
  u_char mode;
  u_char adj;
  u_char dsp;
  u_char chr1;
  u_char chr2;
  u_char alp;
  u_char rgb;
  DISP_SPRT ds;
}

void TitleLoadCtrl() {}

void TitleSelectMode() {
  int i;
  char *mode_str[1];
  char *csr0;
}

void TitleSelectModeYW(/* -0xc0(sp) */ u_char pad_off, u_char alp_max) {
  int i;
  u_char mode;
  u_char adj;
  u_char dsp;
  u_char chr1;
  u_char chr2;
  u_char alp;
  u_char rgb;
  DISP_SPRT ds;
}

void TitleSelectDifficultyYW() {
  int i;
  u_char chr;
  float alp;
  DISP_SPRT ds;
}

void NewGameInit() {}
void LoadGameInit() {}
void InitOutDither() {}

void MakeOutDither() {
  u_char pat[1];
  u_int pal[1];
  int i;
  float r;
  float r;
  static sceGsLoadImage gs_limage1;
  static sceGsLoadImage gs_limage2;
}

void DispOutDither() {
  SPRITE_DATA sd2;
  DRAW_ENV de2;
}

void GetBetweenABVecUnitLen(/* s0 16 */ float *out_a2bv, float *out_unit_a2bv,
                            float *out_len, float *in_av, float *in_bv) {
  sceVu0FVECTOR temp;
}

void SetPrePEImage(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {
  PARTICLE_EFF_OBJ *temppep;
  PARTICLE_EFF_OBJ *prepep;
  PARTICLE_EFF_OBJ *temppointer;
  int tempalpha;
}

int InitPrePEImage(/* a0 4 */ PARTICLE_EFF_OBJ *obj, int pe_num) {
  int i;
  PARTICLE_EFF_OBJ *temp;
}

int SetPEObjPos(/* s0 16 */ PARTICLE_EFF_OBJ *obj) { sceVu0FVECTOR c2sv_move; }

void MakeRandomVec(/* s1 17 */ float *output, int m) {}

void InitPEObj(/* s4 20 */ PARTICLE_EFF_OBJ *obj, float *ov, float *sv,
               float *tempgv) {
  int temptime;
  float randrate;
  float tempkk;
  float hhh;
  float o2slen;
  sceVu0FVECTOR o2sv_unit;
  sceVu0FVECTOR o2gv_unit;
  sceVu0FVECTOR o2gv;
  sceVu0FVECTOR o2sv;
  sceVu0FVECTOR cv;
  sceVu0FVECTOR o2cv;
  sceVu0FVECTOR c2sv;
  sceVu0FVECTOR gv;
}

void SetPEObjSprSize(/* a0 4 */ PARTICLE_EFF_OBJ *obj) { float farpoint; }

void SetPEObjAlphaBl(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {}

int CtrlPEObj(/* s0 16 */ PARTICLE_EFF_OBJ *obj) { ST_PEOBJ state; }

void SortRegisterPEObj(/* a0 4 */ PARTICLE_EFF_OBJ *obj) {
  PARTICLE_EFF_OBJ *temppe;
  int flg;
}

Q_WORDDATA *ParticleEffectInTakingPicture(/* a0 4 */ Q_WORDDATA *qd,
                                          u_int b_num) {}
Q_WORDDATA *SetPESpritePacket(/* a0 4 */ Q_WORDDATA *qd, int *col,
                              int *centervec, int pe_width, int albl) {}

void SetCenterGravOfFVECTOR(/* s3 19 */ float *input, sceVu0FVECTOR *vec,
                            u_int num) {
  int i;
}

void GetA2BLoadVector(/* s1 17 */ float *out_v, float *fr_v, float *to_v,
                      float rate) {
  sceVu0FVECTOR temp;
}

void CallParticleEffect(/* a0 4 */ u_char ene_id) {}
void StopParticleEffect() {}

void SetParticleEffect() {
  int n;
  u_int start_pktaddr;
  u_int end_pktaddr;
  sceVu0FMATRIX mat;
}

void CallEyeLight(/* a0 4 */ sceVu0FVECTOR *lpos, sceVu0FVECTOR *rpos) {}
void StopEyeLight() {}

void EyeLightCtrl() {
  int i;
  int n;
  int w;
  u_int start_pktaddr;
  u_int end_pktaddr;
  sceVu0FMATRIX mat;
  sceVu0IVECTOR scr[1];
  sceVu0IVECTOR col;
  sceVu0FVECTOR vec;
  Q_WORDDATA *qd;
}

char mcSaveMain() { char end_flg; }

char mcLoadMain() { char end_flg; }

char mcCtrlCheck() { static int loop; }

char mcCtrlSelSlot() {}

char mcCtrlFileSel() { int num; }

char mcCtrlLoad() { u_char file_id; }

char mcCtrlSave() { u_char file_id; }

char mcCtrlMakeDir() {
  static char loop;
  static int load_id;
}

char mcCtrlFormat() {}

char mcCtrlDelete() { static u_int cnt; }

char mcCtrlDispErr() {}
char mcCtrlYesno(/* a0 4 */ int def_pos) {}
char mcCtrl3taku(/* a0 4 */ int def_pos) {}
void mcInit(/* a0 4 */ u_char mode, u_int *work_addr, u_char msn_flg) {}

void mcSubInit() { u_int i; }

void mcClearHeader() {}
void mcEnd() {}
void mcSetStep(/* s1 17 */ int step, int msg_no) {}
void mcSetStepAfterCheck() {}

char mcAcsMain() { char end_flg; }

void mcAcsReq(/* a1 5 */ int func_no) {}
void mcAcsEnd() {}
char mcSlotCheck() {}
char mcFileCheck() {}
char mcOpen() {}
char mcClose() {}
char mcLoad() {}
char mcSave() {}
char mcExistCheck() {}
char mcMakeDir() {}
char mcFormat() {}
char mcDelete() {}

char mcSyncNB() {
  int sync;
  int result;
  int cmd;
}

void mcSyncErrWork(/* a0 4 */ int cmd, int result) {}

char mcAlbumSaveMain() {
  char end_flg;
  static char newfile_flg;
}

char mcCtrlCheckAlbum() { static int loop; }

char mcCtrlAlbumSel() {}

void mcSetPathDir(/* s1 17 */ char file_no) {}
void mcMakeGameFileName(/* a0 4 */ char *fname, char file_id) {}
void mcMakeAlbumFileName(/* a0 4 */ char *fname, char file_id) {}
void mcMakeIconsysFileName(/* a0 4 */ char *fname) {}
void mcMakeIconDataFileName(/* a0 4 */ char *fname, char file_id) {}

char mcCheckEmpty(/* a0 4 */ u_int offset) { u_int size; }

void mcAcsFileReq(/* a1 5 */ char type, int mode, int header) {}
char mcWriteFile() {}
char mcReadFile() {}

char mcCheckFileList() {
  u_int i;
  u_int file_num;
  u_int size;
  char str[1];
}

char mcCheckRootList() {
  u_int i;
  u_int j;
  u_int file_num;
  char str[1];
}

u_int mcGetFileSizeCeil(/* a0 4 */ u_int file_id, u_int block) { u_int size; }

u_int mcGetFileSize(/* a0 4 */ u_int file_id) {
  u_int size;
  int i;
}

char mcCheckHeaderFile() {
  u_int i;
  u_int file_num;
}

int strindex(/* a0 4 */ char *s, char *t) {
  int i;
  int j;
  int k;
}

void mcMakeSaveFile(/* s2 18 */ u_int *work_addr, u_char file_id) {
  u_char *addr0;
  u_char *addr1;
  int i;
  int j;
  u_int sum;
  u_int size;
  u_int str_num;
  MC_DATA_STR *data_str;
}

char mcSetLoadFile(/* s1 17 */ u_int *work_addr, u_char file_id) {
  u_char *addr0;
  u_char *addr1;
  int i;
  int j;
  u_int size;
  u_int str_num;
  MC_DATA_STR *data_str;
}

char mcCompareCheckSum(/* a0 4 */ u_char *data_ptr, int data_size) {
  int sum;
  int data_sum;
  int i;
}

void mcMakeHeaderFile() {
  MC_GAME_HEADER *header;
  MC_ALBUM_HEADER *header;
}

void mcSetHeaderFile() {
  MC_GAME_HEADER *header;
  MC_ALBUM_HEADER *header;
}

char mcGetAlbumNo() {
  u_int i;
  char flg[1];
}

void mcSetIconSys(/* s1 17 */ sceMcIconSys *pSys) {
  u_int i;
  char str[1];
}

char mcStartCheckMain() { static char err_flg; }

void mcStartCheckSet() {}

char mcStartCheckResult() {
  u_int i;
  u_int card_exist;
}

char mcStartCheckYesno(/* a0 4 */ int def_pos) { static int backup[1]; }

void mcDispMessage() { int msg_no; }

void mcSetMessage(/* a0 4 */ int msg_no) {}
char mcCheckMsgType(/* a0 4 */ int msg_no) {}
char mcCheckDrawButton(/* a0 4 */ int msg_no) {}

char McAtLoadChk(/* a0 4 */ u_char type) {}
char McAtSaveChk() {}
char McAtAlbmChk() {}

static char McAtLoadMainLoop(/* s6 22 */ u_char type) {
  char rtrn;
  u_char csr0;
  u_char yes_no;
  static u_char csr1;
  static u_char csr2;
  u_char msg;
  u_char alt;
  static u_char fdt;
}

static char McAtSaveMainLoop() {
  char rtrn;
  u_char csr0;
  u_char yes_no;
  static u_char csr1;
  static u_char csr2;
  u_char msg;
  u_char alt;
  static u_char fdt;
}

static char McAtAlbmMainLoop() {
  char rtrn;
  u_char csr0;
  u_char yes_no;
  static u_char csr1;
  static u_char csr2;
  static u_char csr3;
  u_char msg;
  u_char alt;
  static u_char fdt;
}

void OutGameCtrl() {}
void OutGameModeChange(/* s0 16 */ u_char mode) {}
void OrgSetSquare(/* a0 4 */ int pri, float x, float y, float w, float h,
                  u_char r, u_char g, u_char b, u_char a) {}

void RoomSizeDisp() { char tmp_str[1]; }

void RoomSizeCheckCtrl() {
  char tmp_str[1];
  char *str[1];
  int max[1];
  u_int *end_addr;
}

void RoomSizeCheckInit() {}

void FreeModeMain() {
  char *str1;
  char *str2;
  char *str3;
  char *csr0;
}

void FreeModePosSet() {}
void BattleModeInit() {}

void ClearStageWrk() { int i; }

void BattleModeMain() {
  char *str1;
  char *str2;
  char *str3;
  char *str4;
  char *str7;
  char *str5;
  char *str6;
  char *csr0;
}

int StageTitleInit() { int ret; }

int StageTitleLoad() { int map_no; }

void StageGhostLoadReq() {
  int i;
  int ene_no;
  ENE_DAT *edp;
}

void StageGhostLoadAfter() {
  int i;
  int ene_no;
  ENE_DAT *edp;
}

void SaveStoryWrk() {
  u_char *srcp;
  u_char *dstp;
  int i;
  int j;
}

void LoadStoryWrk() {
  u_char *srcp;
  u_char *dstp;
  int i;
  int j;
}

void BattleModeStageInit() {
  int i;
  STAGE_DAT *sdp;
}

void BattleModeStageMain() { int ret_num; }

void BattleModeInfomationDisp() {}

int CheckClearAllS() { int i; }

void BattleModeClear() {
  int i;
  int best_shot;
  int best_time;
  int rank;
  int no_dmg;
}

void BattleModeScoreRecord(/* a0 4 */ long int score) {}
int isBattleModeGame() {}
int CheckClearAllFirst() {}

int CheckClearAll() {
  int i;
  int ret;
}

void SetBattleEnd() {}

sceVu0FVECTOR *SetFirstDestination(/* s0 16 */ sceVu0FVECTOR *destination,
                                   float *pos) {
  float dist;
}

float GetDist3(/* a0 4 */ float *v1, float *v2) { sceVu0FVECTOR temp; }

float GetDistPlyr(/* s0 16 */ float *plyr, float *soul) { sceVu0FVECTOR temp; }

void *SetEffectsWithScale(/* s5 21 */ float *pos, SOUL_EFF_PARAM *param,
                          float scale, float rgb) {
  static SOUL_EFF_PARAM temp;
}

int GetUsableWanSoWrkID() {}
void SetNewSpeed(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}
void NewMissionInitWanderSoul() {}

void ReviveWanderSoul() { int i; }

void BSplinePos(/* s0 16 */ float *pos, float *mat_point_array[1], float t1) {
  float rev;
  float t2;
  float t3;
  sceVu0FVECTOR coeff;
}

void ClearWanderSoulOne(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}

void CallWanderSoul(/* s2 18 */ u_char data_id, float *pos) {
  WANDER_SOUL_WRK *wswrk;
}

void RegisterWansoEffect(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}

void WansoLateInit(/* s0 16 */ WANDER_SOUL_WRK *wswrk) { int i; }

void ReleaseWanderSoul(/* a0 4 */ u_char data_id) {
  int i;
  WANDER_SOUL_WRK *wswrk;
}

int WanSoNearJudge(/* f12 50 */ float dist, float distv) {}
int WanSoTouchJudge(/* s0 16 */ float *soul_pos, MOVE_BOX *mbp) {}

void SoulFloating(/* s0 16 */ float *pos, float *rgb) { static int time; }

void SetSoulNewMove(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {
  float dist;
  sceVu0FVECTOR temp;
}

void Change2WanSoExtinct(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}
void FinishWanSoWrk(/* s0 16 */ WANDER_SOUL_WRK *wswrk) {}
void ComeOnSignal(/* a0 4 */ float *scale, float *rgb, u_short time) {}

float StopAbleDist(/* f12 50 */ float speed, float accel, u_short *count) {
  float time;
}

float GetRot(/* a0 4 */ float *a, float *b) { sceVu0FVECTOR temp; }

int RotCheck2(/* -0x30(sp) */ float rot1, float rot2, u_short range) {}

void GetBSplinePos(/* s0 16 */ float *pos, float *mat_point_array[1],
                   float t1) {
  float rev;
  float t2;
  float t3;
  sceVu0FVECTOR coeff;
}

int SetMoveDirect(/* s1 17 */ WANDER_SOUL_WRK *wswrk, float s2p_len) {
  float rot2;
  sceVu0FVECTOR temp;
  sceVu0FVECTOR *tempdes;
}

void AddVec2MatD(/* a0 4 */ float *mat[1], float *vec) { int i; }

void Change2WanSoFloat(/* a0 4 */ WANDER_SOUL_WRK *wswrk) {}

float GetKnotDist(/* s1 17 */ float *mat[1]) {
  sceVu0FVECTOR coeff;
  sceVu0FVECTOR first_p;
  sceVu0FVECTOR last_p;
}

void SetWansoSpeed(/* s0 16 */ WANDER_SOUL_WRK *wswrk, float dist) {
  static int count;
}

void WansoPreTell(/* s1 17 */ WANDER_SOUL_WRK *wswrk) {}

u_char WansoAlphaCtrl(/* a0 4 */ WANDER_SOUL_WRK *wswrk, float dist) {
  int flg;
}

void WansoExtinctCtrl(/* a1 5 */ WANDER_SOUL_WRK *wswrk) {}

void OneSoulCtrl(/* s3 19 */ WANDER_SOUL_WRK *wswrk, float *srate,
                 float *arate) {
  float dist;
  float knot_dist;
  static float rate;
  u_char visible;
  sceVu0FVECTOR soul;
  sceVu0FVECTOR camera;
  sceVu0FVECTOR interest;
  static u_char *strp;
  static signed char noise_in_time;
  static u_short se_no;
  static u_char face_load_end;
  static float spd;
  static float rate;
  static float trate;
}

void WanderSoulCtrl() {
  int i;
  WANDER_SOUL_WRK *wswrk;
  static signed char time;
}

u_char CallSoulTellingCamera(/* s1 17 */ float *soul_pos,
                             float *relative_camera_pos,
                             float *relative_interest,
                             float *relative_soul_pos) {
  sceVu0FVECTOR tempv;
  sceVu0FVECTOR axis;
  sceVu0FMATRIX mtx;
  float tempf;
  u_char turn;
}

void CallSoulTellingCameraIn(/* s1 17 */ float *soul_pos, float *mic_eye_pos,
                             int time) {
  sceVu0FVECTOR temp;
}

int SoulTellingCameraInCtrl() {}

void SetWanSoDat2Wrk(/* a0 4 */ int data_id, WANDER_SOUL_WRK *wswrk) {}

void SoundTestForModeSlectInit() {}

char SoundTestForModeSlect() {
  char set_flg;
  char rtrn;
}

void SoundTestForModeSlectDisp(/* s1 17 */ u_char alp, float flsh) {
  int i;
  u_char dir;
}

void SlotNum(/* s3 19 */ int number, u_char digit, u_char timer, u_char tim_lmt,
             short int pos_x, short int pos_y, short int lmt_upp,
             short int lmt_dwn, int alp, int time_mode, int ud_sw) {
  u_char alp;
  u_char time_mode;
  u_char ud_sw;
  int i;
  int multi10;
  int multi10_bak;
  int dsp_num;
  u_char dsp_mode;
}

void ShockWave(/* a0 4 */ u_char bgm_no, u_char alp) { BEAT_DATA bd[1]; }

void OneNum(/* s5 21 */ u_short num_chr, u_char number, u_char no, u_char timer,
            u_char tim_lmt, short int pos_x, short int pos_y, short int lmt_upp,
            int lmt_dwn, int mode, int alp, int time_mode) {
  short int lmt_dwn;
  u_char mode;
  u_char alp;
  u_char time_mode;
  short int slot_mov;
  int i;
  short int dsp_y;
  u_char dsp_num;
  signed char dsp_v;
  signed char dsp_h;
  DISP_SPRT ds;
}

static CB_DelayTh() {}
sceCdDelayThread() {}
sceCdCallback() {}
_sceCd_cd_callback() {}
_Cdvd_cbLoop() {}
sceCdInitEeCB() {}
_sceCd_cd_read_intr() {}
static cmd_sem_init() {}
static cdvd_exit() {}
sceCdPOffCallback() {}
static _sceCd_Poff_Intr() {}
static PowerOffCB() {}
sceCdSearchFile() {}
_sceCd_ncmd_prechk() {}
sceCdNcmdDiskReady() {}
sceCdSync() {}
sceCdSyncS() {}
_sceCd_scmd_prechk() {}
sceCdInit() {}
sceCdDiskReady() {}
sceCdMmode() {}

sceCdReadClock() {}

sceCdStInit() {}
sceCdStStart() {}
sceCdStSeekF() {}
sceCdStSeek() {}
sceCdStStop() {}
sceCdStRead() {}
sceCdStPause() {}
sceCdStResume() {}
sceCdStStat() {}
sceCdStream() {}

static memclr() {}
sceDmaGetChan() {}
sceDmaReset() {}
sceDmaDebug() {}
sceDmaPutEnv() {}
sceDmaGetEnv() {}
sceDmaPutStallAddr() {}
sceDmaSend() {}
sceDmaSendN() {}
sceDmaSendI() {}
sceDmaRecv() {}
sceDmaRecvN() {}
sceDmaRecvI() {}
sceDmaSync() {}
sceDmaWatch() {}
sceDmaPause() {}
sceDmaRestart() {}

static sceDevVu0CheckBusy() {}
sceDevVu0Reset() {}
sceDevVu0Pause() {}
sceDevVu0Continue() {}
sceDevVu0PutDBit() {}
sceDevVu0PutTBit() {}
sceDevVu0GetDBit() {}
sceDevVu0GetTBit() {}
static sceDevVu0Sync() {}
sceDevVu0Exec() {}
sceDevVu0GetTpc() {}
sceDevVu0GetCnd() {}
sceDevVu0PutCnd() {}

sceDevVif0Reset() {}
sceDevVif0Pause() {}
sceDevVif0Continue() {}
sceDevVif0PutErr() {}
sceDevVif0GetErr() {}
static sceDevVif0Sync() {}
sceDevVif0GetCnd() {}
sceDevVif0PutFifo() {}

sceDevVif1Reset() {}
sceDevVif1Pause() {}
sceDevVif1Continue() {}
sceDevVif1PutErr() {}
sceDevVif1GetErr() {}
static sceDevVif1Sync() {}
sceDevVif1GetCnd() {}
sceDevVif1PutFifo() {}
sceDevVif1GetFifo() {}

RFU000_FullReset() {}
ResetEE() {}
SetGsCrt() {}
RFU003() {}
Exit() {}
RFU005() {}
LoadExecPS2() {}
ExecPS2() {}
RFU008() {}
RFU009() {}
AddSbusIntcHandler() {}
RemoveSbusIntcHandler() {}
Interrupt2Iop() {}
SetVTLBRefillHandler() {}
SetVCommonHandler() {}
SetVInterruptHandler() {}
AddIntcHandler() {}
AddIntcHandler2() {}
RemoveIntcHandler() {}
AddDmacHandler() {}
AddDmacHandler2() {}
RemoveDmacHandler() {}
_EnableIntc() {}
_DisableIntc() {}
_EnableDmac() {}
_DisableDmac() {}
SetAlarm() {}
ReleaseAlarm() {}
_iEnableIntc() {}
_iDisableIntc() {}
_iEnableDmac() {}
_iDisableDmac() {}
iSetAlarm() {}
iReleaseAlarm() {}
CreateThread() {}
DeleteThread() {}
StartThread() {}
ExitThread() {}
ExitDeleteThread() {}
TerminateThread() {}
iTerminateThread() {}
DisableDispatchThread() {}
EnableDispatchThread() {}
ChangeThreadPriority() {}
iChangeThreadPriority() {}
RotateThreadReadyQueue() {}
_iRotateThreadReadyQueue() {}
ReleaseWaitThread() {}
iReleaseWaitThread() {}
GetThreadId() {}
ReferThreadStatus() {}
iReferThreadStatus() {}
SleepThread() {}
WakeupThread() {}
_iWakeupThread() {}
CancelWakeupThread() {}
iCancelWakeupThread() {}
SuspendThread() {}
_iSuspendThread() {}
ResumeThread() {}
iResumeThread() {}
JoinThread() {}
RFU060() {}
RFU061() {}
EndOfHeap() {}
RFU063() {}
CreateSema() {}
DeleteSema() {}
SignalSema() {}
iSignalSema() {}
WaitSema() {}
PollSema() {}
iPollSema() {}
ReferSemaStatus() {}
iReferSemaStatus() {}
RFU073() {}
SetOsdConfigParam() {}
GetOsdConfigParam() {}
GetGsHParam() {}
GetGsVParam() {}
SetGsHParam() {}
SetGsVParam() {}
RFU080_CreateEventFlag() {}
RFU081_DeleteEventFlag() {}
RFU082_SetEventFlag() {}
RFU083_iSetEventFlag() {}
RFU084_ClearEventFlag() {}
RFU085_iClearEventFlag() {}
RFU086_WaitEvnetFlag() {}
RFU087_PollEvnetFlag() {}
RFU088_iPollEvnetFlag() {}
RFU089_ReferEventFlagStatus() {}
RFU090_iReferEventFlagStatus() {}
RFU091() {}
EnableIntcHandler() {}
iEnableIntcHandler() {}
DisableIntcHandler() {}
iDisableIntcHandler() {}
EnableDmacHandler() {}
iEnableDmacHandler() {}
DisableDmacHandler() {}
iDisableDmacHandler() {}
KSeg0() {}
EnableCache() {}
DisableCache() {}
GetCop0() {}
FlushCache() {}
CpuConfig() {}
iGetCop0() {}
iFlushCache() {}
iCpuConfig() {}
sceSifStopDma() {}
SetCPUTimerHandler() {}
SetCPUTimer() {}
SetOsdConfigParam2() {}
GetOsdConfigParam2() {}
GsGetIMR() {}
iGsGetIMR() {}
GsPutIMR() {}
iGsPutIMR() {}
SetPgifHandler() {}
SetVSyncFlag() {}
RFU116() {}
_print() {}
sceSifDmaStat() {}
isceSifDmaStat() {}
sceSifSetDma() {}
isceSifSetDma() {}
sceSifSetDChain() {}
isceSifSetDChain() {}
sceSifSetReg() {}
sceSifGetReg() {}
ExecOSD() {}
Deci2Call() {}
PSMode() {}
MachineType() {}
GetMemorySize() {}

DisableIntc() {}
EnableIntc() {}
DisableDmac() {}
EnableDmac() {}
iEnableIntc() {}
iDisableIntc() {}
iEnableDmac() {}
iDisableDmac() {}
static setup() {}
static Copy() {}
static kCopy() {}
static GetEntryAddress() {}
InitAlarm() {}

static kputchar() {}
static deci2Putchar() {}
static serialPutchar() {}
static ftoi() {}
static printfloat() {}
_printf() {}
kprintf() {}
scePrintf() {}

static _set_sreg() {}
static _change_addr() {}
sceSifGetSreg() {}
sceSifSetSreg() {}
sceSifGetDataTable() {}
sceSifInitCmd() {}
sceSifExitCmd() {}
sceSifSetCmdBuffer() {}
sceSifSetSysCmdBuffer() {}
sceSifAddCmdHandler() {}
sceSifRemoveCmdHandler() {}
static _sceSifSendCmd() {}
sceSifSendCmd() {}
isceSifSendCmd() {}
static _sceSifCmdIntrHdlr() {}
sceSifWriteBackDCache() {}

sceSifInitRpc() {}
sceSifExitRpc() {}
static _sceRpcGetPacket() {}
static _sceRpcFreePacket() {}
static _sceRpcGetFPacket() {}
static _sceRpcGetFPacket2() {}
static _request_end() {}
static _request_rdata() {}
sceSifGetOtherData() {}
static _search_svdata() {}
static _request_bind() {}
sceSifBindRpc() {}
static _request_call() {}
sceSifCallRpc() {}
sceSifCheckStatRpc() {}
sceSifSetRpcQueue() {}
sceSifRegisterRpc() {}
sceSifRemoveRpc() {}
sceSifRemoveRpcQueue() {}
sceSifGetNextRequest() {}
sceSifExecRequest() {}
sceSifRpcLoop() {}

static _sceFsIobSemaMK() {}
static new_iob() {}
static get_iob() {}
static _sceFs_Rcv_Intr() {}
static _sceFsSemInit() {}
static _sceFsWaitS() {}
static _sceFsSigSema() {}
sceFsInit() {}
static _fs_version() {}
sceFsReset() {}
sceOpen() {}
sceClose() {}
sceLseek() {}
sceRead() {}
sceWrite() {}
sceIoctl() {}
sceIoctl2() {}
static _sceCallCode() {}
sceRemove() {}
sceMkdir() {}
sceRmdir() {}
sceFormat() {}
sceAddDrv() {}
sceDelDrv() {}
sceDopen() {}
sceDclose() {}
sceDread() {}
sceGetstat() {}
sceChstat() {}
sceRename() {}
sceChdir() {}
sceSync() {}
sceMount() {}
sceUmount() {}
sceLseek64() {}
sceDevctl() {}
sceSymlink() {}
sceReadlink() {}

sceSifInitIopHeap() {}
sceSifAllocIopHeap() {}
sceSifFreeIopHeap() {}
sceSifLoadIopHeap() {}

static _lf_bind() {}
static _lf_version() {}
sceSifLoadFileReset() {}
static _sceSifLoadModuleBuffer() {}
sceSifLoadModuleBuffer() {}
sceSifLoadStartModuleBuffer() {}
static _sceSifLoadModule() {}
sceSifLoadModule() {}
sceSifLoadStartModule() {}
static _sceSifLoadElfPart() {}
sceSifLoadElfPart() {}
sceSifLoadElf() {}
sceSifGetIopAddr() {}
sceSifSetIopAddr() {}

sceSifResetIop() {}
sceSifIsAliveIop() {}
sceSifSyncIop() {}
sceSifRebootIop() {}

DIntr() {}
EIntr() {}

static supplement_crt0() {}
_InitSys() {}

sceResetttyinit() {}
VSync() {}
VSync2() {}
write() {}
read() {}
open() {}
close() {}
ioctl() {}
lseek() {}
sbrk() {}
isatty() {}
fstat() {}
getpid() {}
kill() {}
stat() {}
unlink() {}

static topThread() {}
InitThread() {}
iWakeupThread() {}
iRotateThreadReadyQueue() {}
iSuspendThread() {}

sceDeci2Open() {}
sceDeci2Close() {}
sceDeci2ReqSend() {}
sceDeci2Poll() {}
sceDeci2ExRecv() {}
sceDeci2ExSend() {}
sceDeci2ExReqSend() {}
sceDeci2ExLock() {}
sceDeci2ExUnLock() {}
kputs() {}

static QueueInit() {}
static QueuePeekWriteDone() {}
static QueuePeekReadDone() {}
static sceTtyHandler() {}
sceTtyWrite() {}
sceTtyRead() {}
sceTtyInit() {}

sceGifPkInit() {}

sceGifPkReset() {}

sceGifPkTerminate() {}

sceGifPkCnt() {}

sceGifPkRef() {}

sceGifPkEnd() {}

sceGifPkReserve() {}

sceGifPkOpenGifTag() {}

sceGifPkCloseGifTag() {}

sceGifPkAddGsAD() {}

sceVu0ApplyMatrix() {}
sceVu0MulMatrix() {}
sceVu0OuterProduct() {}
sceVu0InnerProduct() {}
sceVu0Normalize() {}
sceVu0TransposeMatrix() {}
sceVu0InversMatrix() {}
sceVu0DivVector() {}
sceVu0DivVectorXYZ() {}
sceVu0InterVector() {}
sceVu0AddVector() {}
sceVu0SubVector() {}
sceVu0MulVector() {}
sceVu0ScaleVector() {}
sceVu0TransMatrix() {}
sceVu0CopyVector() {}
sceVu0CopyMatrix() {}
sceVu0FTOI4Vector() {}
sceVu0FTOI0Vector() {}
sceVu0ITOF4Vector() {}
sceVu0ITOF0Vector() {}
sceVu0UnitMatrix() {}
static _sceVu0ecossin() {}
sceVu0RotMatrixZ() {}
sceVu0RotMatrixX() {}
sceVu0RotMatrixY() {}
sceVu0RotMatrix() {}
sceVu0ClampVector() {}
sceVu0CameraMatrix() {}
sceVu0NormalLightMatrix() {}
sceVu0LightColorMatrix() {}
sceVu0ViewScreenMatrix() {}
sceVu0DropShadowMatrix() {}
sceVu0RotTransPersN() {}
sceVu0RotTransPers() {}
sceVu0CopyVectorXYZ() {}
sceVu0InterVectorXYZ() {}
sceVu0ScaleVectorXYZ() {}
sceVu0ClipScreen() {}
sceVu0ClipScreen3() {}
sceVu0ClipAll() {}
sceVpu0Reset() {}

static _send_to_iop() {}
scePadInit() {}
static scePadInit2() {}
scePadEnd() {}
scePadPortOpen() {}
scePadPortClose() {}
static scePadGetDmaStr() {}
scePadGetFrameCount() {}
scePadRead() {}
scePadGetState() {}
scePadStateIntToStr() {}
static scePadSetReqState() {}
scePadGetReqState() {}
scePadReqIntToStr() {}
scePadInfoAct() {}
scePadInfoComb() {}
scePadInfoMode() {}
scePadSetMainMode() {}
scePadSetActDirect() {}
scePadSetActAlign() {}
static scePadGetButtonMask() {}
static scePadSetButtonInfo() {}
scePadInfoPressMode() {}
scePadEnterPressMode() {}
scePadExitPressMode() {}
static scePadSetVrefParam() {}
static scePadGetPortMax() {}
scePadGetSlotMax() {}
static scePadGetModVersion() {}
scePadSetWarningLevel() {}

sceMcInit() {}
_lmcGetClientPtr() {}
sceMcChangeThreadPriority() {}
sceMcGetSlotMax() {}
sceMcOpen() {}
sceMcMkdir() {}
sceMcClose() {}
sceMcSeek() {}
static mceIntrReadFixAlign() {}
sceMcRead() {}
sceMcWrite() {}
static mcHearAlarm() {}
static mcDelayThread() {}
sceMcSync() {}
static mceGetInfoApdx() {}
sceMcGetInfo() {}
sceMcGetDir() {}
static mceStorePwd() {}
sceMcChdir() {}
sceMcFormat() {}
sceMcDelete() {}
sceMcFlush() {}
sceMcSetFileInfo() {}
sceMcRename() {}
sceMcUnformat() {}
sceMcGetEntSpace() {}

sceGsResetGraph() {}
sceGsGetGParam() {}

sceGsResetPath() {}

sceGsPutDispEnv() {}

sceGsSetDefDrawEnv() {}

sceGsPutDrawEnv() {}

sceGsSetDefDBuff() {}

sceGsSwapDBuff() {}

sceGsSyncV() {}

sceGsSyncPath() {}

sceGsSetDefLoadImage() {}

sceGsSetDefStoreImage() {}

sceGsExecLoadImage() {}

sceGsExecStoreImage() {}

sceGsSyncVCallback() {}

sceGsPutIMR() {}

sceGsSetHalfOffset() {}

sceGsSetDefDispEnv() {}

sceGszbufaddr() {}

sceGsSetDefClear() {}

_type2id() {}
_id2type() {}
sceMpegDemuxPssRing() {}
sceMpegDemuxPss() {}
sceMpegAddStrCallback() {}
_pack_header() {}
_system_header() {}
_PES_packet() {}

sceMpegInit() {}
sceMpegCreate() {}
sceMpegDelete() {}
sceMpegAddBs() {}
sceMpegGetPicture() {}
sceMpegGetPictureRAW8() {}
sceMpegGetPictureRAW8xy() {}
sceMpegSetDecodeMode() {}
sceMpegGetDecodeMode() {}
sceMpegIsEnd() {}
sceMpegIsRefBuffEmpty() {}
sceMpegReset() {}
sceMpegClearRefBuff() {}
sceMpegAddCallback() {}
_dispatchMpegCallback() {}
_dispatchMpegCbNodata() {}
sceMpegSetDefaultPtsGap() {}
sceMpegResetDefaultPtsGap() {}
sceMpegSetImageBuff() {}
sceMpegDispWidth() {}
sceMpegDispHeight() {}
sceMpegDispCenterOffX() {}
sceMpegDispCenterOffY() {}
sceSetBrokenLink() {}
sceSetPtm() {}
_alalcInit() {}
_alalcSetDynamic() {}
_alalcFree() {}
_alalcAlloc() {}
_alalcRest() {}
static _getpic() {}
static _decodeOrSkipFrame() {}
static _decodeOrSkip() {}
static _decodeOrSkipField() {}
_sceMpegFlush() {}

_initSeqAgain() {}
_lastFrame() {}
_clearOnce() {}
_clearEach() {}
_ErrMessage() {}
_Error1() {}
_Error() {}
_sendDataToIPU() {}
static _RefImageInit() {}
_sequenceHeader() {}
_initSeq() {}
static _initRefImages() {}
static _setDefaultQM() {}
_sequenceExtension() {}
_sequenceDisplayExtension() {}
_sequenceScalableExtension() {}
_unknown_extension() {}
_pictureSpatialScalableExtension() {}
_pictureTemporalScalableExtension() {}

_defStopDMA() {}
_defRestartDMA() {}

static _motionComp0() {}
_getAllRefs() {}
_getRef0() {}
static _doMC() {}
_rix_000() {}
_ri0_000() {}
_rix_001() {}
_ri0_001() {}
_rix_010() {}
_ri0_010() {}
_rix_011() {}
_ri0_011() {}
_rix_100() {}
_ri0_100() {}
_rix_101() {}
_ri0_101() {}
_rix_110() {}
_ri0_110() {}
_rix_111() {}
_ri0_111() {}
_copyAddRefImage() {}
_copyRefImage() {}
_ipuSetMPEG1() {}
_waitBdecOut() {}
_dmVector() {}
_dualPrimeVector() {}
_mbAddressIncrement() {}
_pictureData0() {}
static _sliceA0() {}
static _slice0() {}
static _skipMB0() {}
static _decMB0() {}
static _decode_motion_vector() {}
_motionVectors() {}
_motionVector() {}
_sendIpuCommand() {}
_waitIpuIdle() {}
_waitIpuIdle64() {}
_ipuVdec() {}
_peepBit() {}
_flushBuf() {}
_nextBit() {}
_nextStartCode() {}
_sliceB() {}
_nextHeader() {}
_pictureHeader() {}
_extensionAndUserData() {}
_pictureCodingExtension() {}
_extrainfo() {}
static _updateTempTackData() {}
_groupOfPicturesHeader() {}
_quantMatrixExtension() {}
_pictureDisplayExtension() {}
_copyrightExtension() {}
_decPicture() {}
_outputFrame() {}
_updateRefImage() {}
static _isOutSizeOK() {}
_cpr8() {}
static _markOutput() {}
static _getPtsDtsFlags() {}
_dispRefImage() {}
_dispRefImageField() {}

static _doCSC() {}
static _ch3dmaCSC() {}
static _doCSC2() {}
static _ch4dma() {}
_csc_storeRefImage() {}

_sysbitInit() {}
_sysbitNext() {}
static _sysbitFlush() {}
_sysbitGet() {}
_sysbitMarker() {}
_sysbitJump() {}
_sysbitPtr() {}

scePcStart() {}
scePcStop() {}

sceSdRemoteInit() {}
sceSdTransToIOP() {}
sceSdCallBack() {}
sceSdRemote() {}

sceSdRemoteCallbackInit() {}
static _sdrCBThread() {}
static _sdrCB() {}

static setD3_CHCR() {}
static setD4_CHCR() {}
sceIpuStopDMA() {}
sceIpuRestartDMA() {}
sceIpuSync() {}

static setD4_CHCR() {}
sceIpuInit() {}

int isnan(/* a0 4 */ double x) {
  __int32_t hx;
  ieee_double_shape_type ew_u;
}

float tanf(/* f12 50 */ float x) {
  float y[1];
  __int32_t ix;
}

float fmodf(/* f21 59 */ float x, float y) {
  float z;
  exception exc;
}

float sqrtf(/* f20 58 */ float x) {
  float z;
  exception exc;
}

float __ieee754_fmodf(/* a0 4 */ float x, float y) {
  __int32_t n;
  __int32_t hx;
  __int32_t hy;
  __int32_t hz;
  __int32_t ix;
  __int32_t iy;
  __int32_t sx;
  __int32_t i;
}

__int32_t __ieee754_rem_pio2f(/* f12 50 */ float x, float *y) {
  float z;
  float w;
  float t;
  float r;
  float fn;
  float tx[1];
  __int32_t i;
  __int32_t j;
  __int32_t n;
  __int32_t ix;
  __int32_t hx;
  int e0;
  int nx;
  __uint32_t high;
}

float __ieee754_sqrtf(/* f12 50 */ float x) {
  float z;
  __uint32_t r;
  __int32_t ix;
  __int32_t s;
  __int32_t q;
  __int32_t m;
  __int32_t t;
  __int32_t i;
}

int __kernel_rem_pio2f(/* -0xd0(sp) */ float *x, float *y, int e0, int nx,
                       int prec, __int32_t *ipio2) {
  __int32_t jz;
  __int32_t jx;
  __int32_t jv;
  __int32_t jp;
  __int32_t carry;
  __int32_t n;
  __int32_t iq[1];
  __int32_t i;
  __int32_t j;
  __int32_t k;
  __int32_t m;
  __int32_t q0;
  __int32_t ih;
  float z;
  float fw;
  float f[1];
  float fq[1];
  float q[1];
}

float __kernel_tanf(/* f12 50 */ float x, float y, int iy) {
  float z;
  float r;
  float v;
  float w;
  float s;
  __int32_t ix;
  __int32_t hx;
  float a;
  float t;
  __int32_t i;
}

int matherr(/* a0 4 */ exception *x) {}

float fabsf(/* v1 3 */ float x) { __uint32_t ix; }

float floorf(/* f12 50 */ float x) {
  __int32_t i0;
  __int32_t j0;
  __uint32_t i;
}

int isnanf(/* v1 3 */ float x) { __int32_t ix; }

float scalbnf(/* a1 5 */ float x, int n) {
  __int32_t k;
  __int32_t ix;
}

float copysignf(/* a1 5 */ float x, float y) {
  __uint32_t ix;
  __uint32_t iy;
}

void __do_global_dtors() {}
void __do_global_ctors() {}
void __main() {}

DItype __divdi3(/* a0 4 */ DItype u, DItype v) {}

void exit(/* s0 16 */ int status) {}

DItype __fixsfdi(/* f12 50 */ SFtype a) {}

DItype __fixunsdfdi(/* s1 17 */ DFtype a) {}

DItype __fixunssfdi(/* f12 50 */ SFtype original_a) {}

DFtype __floatdidf(/* s0 16 */ DItype u) {}

SFtype __floatdisf(/* s1 17 */ DItype u) {}

DItype __moddi3(/* a0 4 */ DItype u, DItype v) {}

DItype __muldi3(/* a0 4 */ DItype u, DItype v) {}

UDItype __udivdi3(/* a0 4 */ UDItype n, UDItype d) {}

UDItype __umoddi3(/* a0 4 */ UDItype u, UDItype v) {}

FLO_type __pack_d(/* a0 4 */ fp_number_type *src) {}
void __unpack_d(/* a0 4 */ FLO_union_type *src, fp_number_type *dst) {}
static fp_number_type *_fpadd_parts(/* t0 8 */ fp_number_type *a,
                                    fp_number_type *b, fp_number_type *tmp) {}
FLO_type dpadd(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type dpsub(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type dpmul(/* -0xa0(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type dpdiv(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
int __fpcmp_parts_d(/* a0 4 */ fp_number_type *a, fp_number_type *b) {}
SItype dpcmp(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type litodp(/* a0 4 */ SItype arg_a) {}
SItype dptoli(/* -0x20(sp) */ FLO_type arg_a) {}
USItype dptoul(/* -0x20(sp) */ FLO_type arg_a) {}
FLO_type __negdf2(/* -0x20(sp) */ FLO_type arg_a) {}
DFtype __make_dp(/* a0 4 */ fp_class_type class, unsigned int sign, int exp,
                 UDItype frac) {}
SFtype dptofp(/* -0x20(sp) */ DFtype arg_a) {}

FLO_type __pack_f(/* a0 4 */ fp_number_type *src) {}
void __unpack_f(/* a0 4 */ FLO_union_type *src, fp_number_type *dst) {}
static fp_number_type *_fpadd_parts(/* t1 9 */ fp_number_type *a,
                                    fp_number_type *b, fp_number_type *tmp) {}
FLO_type fpadd(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type fpsub(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type fpmul(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type fpdiv(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
int __fpcmp_parts_f(/* a0 4 */ fp_number_type *a, fp_number_type *b) {}
SItype fpcmp(/* -0x30(sp) */ FLO_type arg_a, FLO_type arg_b) {}
FLO_type sitofp(/* a0 4 */ SItype arg_a) {}
SItype fptosi(/* -0x20(sp) */ FLO_type arg_a) {}
USItype fptoui(/* -0x20(sp) */ FLO_type arg_a) {}
FLO_type __negsf2(/* -0x20(sp) */ FLO_type arg_a) {}
SFtype __make_fp(/* a0 4 */ fp_class_type class, unsigned int sign, int exp,
                 USItype frac) {}
DFtype fptodp(/* -0x20(sp) */ SFtype arg_a) {}

int atoi(/* a0 4 */ char *s) {}

int *__errno() {}

static void std(/* a0 4 */ FILE *ptr, int flags, int file, _reent *data) {}

_glue *__sfmoreglue(/* a0 4 */ _reent *d, int n) {
  _glue *g;
  FILE *p;
}

FILE *__sfp(/* s1 17 */ _reent *d) {
  FILE *fp;
  int n;
  _glue *g;
}

void _cleanup_r(/* a0 4 */ _reent *ptr) {}
void _cleanup() {}
void __sinit(/* s0 16 */ _reent *s) {}

int _fwalk(/* a0 4 */ _reent *ptr, int (*function)(/* parameters unknown */)) {
  FILE *fp;
  int n;
  int ret;
  _glue *g;
}

char *index(/* a0 4 */ char *s, int c) {}

void *malloc(/* a1 5 */ size_t nbytes) {}
void free(/* a1 5 */ void *aptr) {}

static void malloc_extend_top(/* s7 23 */ _reent *reent_ptr, size_t nb) {
  char *brk;
  size_t front_misalign;
  size_t correction;
  char *new_brk;
  size_t top_size;
  mchunkptr old_top;
  size_t old_top_size;
  char *old_end;
  size_t sbrk_size;
  long unsigned int pagesz;
}

void *_malloc_r(/* s3 19 */ _reent *reent_ptr, size_t bytes) {
  mchunkptr victim;
  size_t victim_size;
  int idx;
  mbinptr bin;
  mchunkptr remainder;
  long int remainder_size;
  int remainder_index;
  long unsigned int block;
  int startidx;
  mchunkptr fwd;
  mchunkptr bck;
  mbinptr q;
  size_t nb;
}

memcmp() {}

memcpy() {}

memmove() {}

memset() {}

void __malloc_lock(/* a0 4 */ _reent *ptr) {}
void __malloc_unlock(/* a0 4 */ _reent *ptr) {}

int _printf_r(/* a0 4 */ _reent *ptr, char *fmt) {}
int printf(/* a0 4 */ char *fmt) {}

void srand(/* a0 4 */ unsigned int seed) {}
int rand() {}

void *_sbrk_r(/* s0 16 */ _reent *ptr, size_t incr) { char *ret; }

int _sprintf_r(/* a0 4 */ _reent *ptr, char *str, char *fmt) { FILE f; }

int sprintf(/* t4 12 */ char *str, char *fmt) { FILE f; }

int __sread(/* s0 16 */ void *cookie, char *buf, int n) { int ret; }

int __swrite(/* s0 16 */ void *cookie, char *buf, int n) {}

fpos_t __sseek(/* s0 16 */ void *cookie, fpos_t offset, int whence) {
  off_t ret;
}

int __sclose(/* a0 4 */ void *cookie) {}

strcat() {}

strchr() {}

strcmp() {}

strcpy() {}

strlen() {}

strncmp() {}

strncpy() {}

long int _strtol_r(/* -0xb0(sp) */ _reent *rptr, char *nptr, char **endptr,
                   int base) {
  char *s;
  long unsigned int acc;
  int c;
  long unsigned int cutoff;
  int neg;
  int any;
  int cutlim;
}

long int strtol(/* t0 8 */ char *s, char **ptr, int base) {}

int tolower(/* a0 4 */ int c) {}

static int __sprint(/* a0 4 */ FILE *fp, __suio *uio) {}

static int __sbprintf(/* s1 17 */ FILE *fp, char *fmt, va_list ap) {
  int ret;
  FILE fake;
  unsigned char buf[1];
}

int vfprintf(/* s0 16 */ FILE *fp, char *fmt0, va_list ap) {}

int _vfprintf_r(/* -0xec(sp) */ _reent *data, FILE *fp, char *fmt0,
                va_list ap) {
  char *fmt;
  int ch;
  int n;
  int m;
  char *cp;
  __siov *iovp;
  int flags;
  int ret;
  int width;
  int prec;
  char sign;
  wchar_t wc;
  char *decimal_point;
  char softsign;
  double _double;
  int expt;
  int expsize;
  int ndig;
  char expstr[1];
  u_long _uquad;
  enum { OCT = 0, DEC = 1, HEX = 2 } base;
  int dprec;
  int realsz;
  int size;
  char *xdigs;
  __suio uio;
  __siov iov[1];
  char buf[1];
  char ox[1];
  int state;
  static char blanks[1];
  static char zeroes[1];
  char *p;
}

static char *cvt(/* s6 22 */ _reent *data, double value, int ndigits, int flags,
                 char *sign, int *decpt, int ch, int *length) {
  int mode;
  int dsgn;
  char *digits;
  char *bp;
  char *rve;
  double_union tmp;
}

static int exponent(/* a0 4 */ char *p0, int exp, int fmtch) {
  char *p;
  char *t;
  char expbuf[1];
}

_ssize_t _write_r(/* s0 16 */ _reent *ptr, int fd, void *buf, size_t cnt) {
  long int ret;
}

int __swsetup(/* s0 16 */ FILE *fp) {}

int _close_r(/* s1 17 */ _reent *ptr, int fd) { int ret; }

static int quorem(/* s4 20 */ _Bigint *b, _Bigint *S) {
  int n;
  __int32_t borrow;
  __int32_t y;
  ULong carry;
  ULong q;
  ULong ys;
  ULong *bx;
  ULong *bxe;
  ULong *sx;
  ULong *sxe;
  __int32_t z;
  ULong si;
  ULong zs;
}

char *_dtoa_r(/* fp 30 */ _reent *ptr, double _d, int mode, int ndigits,
              int *decpt, int *sign, char **rve) {
  int bbits;
  int b2;
  int b5;
  int be;
  int dig;
  int i;
  int ieps;
  int ilim;
  int ilim0;
  int ilim1;
  int j;
  int j1;
  int k;
  int k0;
  int k_check;
  int leftright;
  int m2;
  int m5;
  int s2;
  int s5;
  int spec_case;
  int try_quick;
  double_union d;
  double_union d2;
  double_union eps;
  __int32_t L;
  int denorm;
  ULong x;
  _Bigint *b;
  _Bigint *b1;
  _Bigint *delta;
  _Bigint *mlo;
  _Bigint *mhi;
  _Bigint *S;
  double ds;
  char *s;
}

int fflush(/* s1 17 */ FILE *fp) {
  unsigned char *p;
  int n;
  int t;
}

void _free_r(/* s1 17 */ _reent *reent_ptr, void *mem) {
  mchunkptr p;
  size_t hd;
  size_t sz;
  int idx;
  mchunkptr next;
  size_t nextsz;
  size_t prevsz;
  mchunkptr bck;
  mchunkptr fwd;
  int islr;
}

int _malloc_trim_r(/* s2 18 */ _reent *reent_ptr, size_t pad) {
  long int top_size;
  long int extra;
  char *current_brk;
}

int __sfvwrite(/* s1 17 */ FILE *fp, __suio *uio) {
  size_t len;
  char *p;
  __siov *iov;
  int w;
  int s;
  char *nl;
  int nlknown;
  int nldist;
}

char *_setlocale_r(/* s1 17 */ _reent *p, int category, char *locale) {
  static char lc_ctype[1];
  static char last_lc_ctype[1];
}

lconv *_localeconv_r(/* a0 4 */ _reent *data) {}
char *setlocale(/* v0 2 */ int category, char *locale) {}
lconv *localeconv() {}

_off_t _lseek_r(/* s0 16 */ _reent *ptr, int fd, off_t pos, int whence) {
  off_t ret;
}

void __smakebuf(/* s0 16 */ FILE *fp) {
  size_t size;
  size_t couldbetty;
  void *p;
  stat st;
}

int _mbtowc_r(/* a0 4 */ _reent *r, wchar_t *pwc, char *s, size_t n,
              int *state) {
  wchar_t dummy;
}

memchr() {}

_Bigint *_Balloc(/* s0 16 */ _reent *ptr, int k) {
  int x;
  _Bigint *rv;
}

void _Bfree(/* a0 4 */ _reent *ptr, _Bigint *v) {}

_Bigint *_multadd(/* s4 20 */ _reent *ptr, _Bigint *b, int m, int a) {
  int i;
  int wds;
  ULong *x;
  ULong y;
  ULong xi;
  ULong z;
  _Bigint *b1;
}

_Bigint *_s2b(/* s4 20 */ _reent *ptr, char *s, int nd0, int nd, ULong y9) {
  _Bigint *b;
  int i;
  int k;
  __int32_t y;
}

int _hi0bits(/* a0 4 */ ULong x) { int k; }

int _lo0bits(/* a0 4 */ ULong *y) {
  int k;
  ULong x;
}

_Bigint *_i2b(/* a0 4 */ _reent *ptr, int i) { _Bigint *b; }

_Bigint *_multiply(/* a0 4 */ _reent *ptr, _Bigint *a, _Bigint *b) {
  _Bigint *c;
  int k;
  int wc;
  ULong carry;
  ULong y;
  ULong z;
  ULong *x;
  ULong *xa;
  ULong *xae;
  ULong *xb;
  ULong *xbe;
  ULong *xc;
  ULong *xc0;
  ULong z2;
}

_Bigint *_pow5mult(/* s3 19 */ _reent *ptr, _Bigint *b, int k) {
  _Bigint *b1;
  _Bigint *p5;
  _Bigint *p51;
  int i;
  static int p05[1];
}

_Bigint *_lshift(/* s6 22 */ _reent *ptr, _Bigint *b, int k) {
  int i;
  int k1;
  int n;
  int n1;
  _Bigint *b1;
  ULong *x;
  ULong *x1;
  ULong *xe;
  ULong z;
}

int __mcmp(/* a0 4 */ _Bigint *a, _Bigint *b) {
  ULong *xa;
  ULong *xa0;
  ULong *xb;
  ULong *xb0;
  int i;
  int j;
}

_Bigint *__mdiff(/* s3 19 */ _reent *ptr, _Bigint *a, _Bigint *b) {
  _Bigint *c;
  int i;
  int wa;
  int wb;
  __int32_t borrow;
  __int32_t y;
  ULong *xa;
  ULong *xae;
  ULong *xb;
  ULong *xbe;
  ULong *xc;
  __int32_t z;
}

double _ulp(/* a0 4 */ double _x) {
  double_union a;
  __int32_t L;
}

double _b2d(/* a0 4 */ _Bigint *a, int *e) {
  ULong *xa;
  ULong *xa0;
  ULong w;
  ULong y;
  ULong z;
  int k;
  double_union d;
}

_Bigint *_d2b(/* a0 4 */ _reent *ptr, double _d, int *e, int *bits) {
  double_union d;
  _Bigint *b;
  int de;
  int i;
  int k;
  ULong *x;
  ULong y;
  ULong z;
}

double _ratio(/* s0 16 */ _Bigint *a, _Bigint *b) {
  double_union da;
  double_union db;
  int k;
  int ka;
  int kb;
}

double _mprec_log10(/* s0 16 */ int dig) { double v; }

_ssize_t _read_r(/* s0 16 */ _reent *ptr, int fd, void *buf, size_t cnt) {
  long int ret;
}

int isinf(/* a0 4 */ double x) {
  __int32_t hx;
  ieee_double_shape_type ew_u;
}

void *_calloc_r(/* a0 4 */ _reent *reent_ptr, size_t n, size_t elem_size) {
  size_t csz;
  void *mem;
  size_t mzsz;
  size_t *mz;
}

int _fstat_r(/* s0 16 */ _reent *ptr, int fd, stat *pstat) { int ret; }

_sceSDC() {}
SyncDCache() {}
iSyncDCache() {}
_sceIDC() {}
InvalidDCache() {}
iInvalidDCache() {}
