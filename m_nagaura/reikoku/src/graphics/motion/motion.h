// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_MOTION_MOTION_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_MOTION_MOTION_H

typedef unsigned int u_int;

typedef struct {
	int playnum;
	int stat;
	int loop_rest;
	int timer;
	ANI_BUF buf[10];
	ANI_CODE *code_head;
	ANI_CODE *code_now;
	ANI_CODE *loop_start;
} ANI_CODE_CTRL;

typedef struct {
	sceVu0FVECTOR rot;
	sceVu0FVECTOR scale;
	sceVu0FVECTOR trans;
} RST_DATA;

typedef struct {
	u_int *top;
	u_int *dat;
	u_int play_id;
	int cnt;
	int all_cnt;
	int inp_allcnt;
	int inp_cnt;
	int reso;
	int reso_cnt;
	RST_DATA *rst0;
	RST_DATA *rst1;
} MOT_CTRL;

typedef struct {
	ANI_CODE_CTRL anm;
	MOT_CTRL mot;
	sceVu0FVECTOR pbak;
	u_int *mdl_p;
	u_int *pk2_p;
	u_int *mpk_p;
	u_int *base_p;
	u_int *anm_p;
	u_int *mtop;
	u_int *mdat;
	u_int *tanm_p;
	MIME_CTRL *mim;
	MIME_CTRL *bgmim;
	WMIM_CTRL *wmim;
	CLOTH_CTRL *cloth_ctrl;
	u_int mot_num;
	u_int mim_num;
	u_int bg_num;
	u_int wmim_num;
	u_short ftype;
	u_short interp_flg;
} ANI_CTRL;

typedef struct {
	u_int *mdl_p;
	u_int flg;
	u_int mdl_no;
	int offset;
} ENE_VRAM_CTRL;

typedef struct {
	float r;
	float ry;
	u_char bone_id;
	u_char flg;
} ENE_CHILD_CTRL;

typedef struct {
	u_char buf_no;
	u_char pkt_no;
} ENE_PKT_CTRL;

typedef struct {
	u_char msn_no;
	u_char step;
} MSN_PLYR_INIT;

typedef struct {
	float pow[2];
	int cnt;
	int all_cnt;
	short int req;
	char loop;
	char flg;
} QUAKE_CTRL;

typedef struct {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR trot;
	float spd;
	u_int timer;
	u_short timer2;
	u_int move_type;
	u_char req;
	u_char act_no;
} PLYR_ACT_WRK;

extern MIME_CTRL mim_chodo[20];
extern u_char mim_chodo_se[20];
extern MIME_DAT mim_cdat[2][20];
extern ANI_CTRL ani_mdl[20];
extern ANI_MDL_CTRL ani_mdl_ctrl[20];
extern ENE_PKT_CTRL ene_pkt_ctrl[4];
extern ACS_ALPHA plyracs_ctrl[2];
extern ROPE_CTRL rope_ctrl[20];
extern CMOVE_CTRL cmove_ctrl[10];
extern ENE_VRAM_CTRL ene_vram_ctrl[4];
extern ENE_VRAM_CTRL ene_vram_bak[4];
extern ENE_CHILD_CTRL ene_child_ctrl[4];
extern MSN_PLYR_INIT plyr_init_ctrl;
extern char plyr_mdl_no;
extern u_char mim_mepati_id;
extern u_char mim_nigiri_l_id;
extern u_char mim_nigiri_r_id;
extern QUAKE_CTRL quake;
extern PLYR_ACT_WRK plyr_act_wrk;
extern float now_frot_x;

void motInitPlayerAnm(char mdl_no);
void motInitEnemyAnm(u_int *anm_p, u_int mdl_no, u_int anm_no);
void motInitOneEnemyAnm(u_int *anm_p, u_int mdl_no, u_int anm_no);
void motInitMultiEnemyAnm(u_int *anm_p, u_int mdl_no, u_int anm_no, u_int num);
void motInitEnemyMdl(u_int *mdl_p, u_int mdl_no);
void motInitOneEnemyMdl(u_int *mdl_p, u_int mdl_no);
void motInitMultiEnemyMdl(u_int *mdl_addr, u_int mdl_no);
void motInitFlyMdl(u_int *mdl_p, u_int mdl_no);
void motInitMultiFlyMdl(u_int *mpk_p, u_int mdl_no);
void motInitOneFlyMdl(u_int *sgd_p, u_int mdl_no);
u_int* motInitAniCtrl(ANI_CTRL *ani_ctrl, u_int *anm_p, u_int *mdl_p, u_int *pkt_p, u_int mdl_no, u_int anm_no);
u_int* motInitMotCtrl(MOT_CTRL *m_ctrl, u_int *mot_addr, u_int *rst_addr);
void motSetCoordCamera(ANI_CTRL *ani_ctrl);
u_char motSetCoord(ANI_CTRL *ani_ctrl, u_char work_id);
u_int motGetNowFrame(MOT_CTRL *m_ctrl);
void ReqPlayerAnime(u_char flame);
void ReqEnemyAnime(u_char work_no, u_char flame);
void motSetAnime(ANI_CTRL *ani_ctrl, ANI_CODE **tbl, int req_no);
void* GetFileInPak(void *pak_head, int num);
void* GetPakTaleAddr(void *pak_head);
void GetMdlNeckPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
u_int GetMdlBonePos(sceVu0FVECTOR *pos, u_char work_no);
void GetMdlWaistPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
void GetMdlLegPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
void GetMdlShldPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr);
void GetPlyrFootPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr);
void GetPlyrAcsLightPos(float *pos, ANI_CTRL *ani_ctrl);
void GetToushuKatanaPos(float *p0, float *p1, ANI_CTRL *ani_ctrl);
u_short GetPlyrFtype();
void motInitInterpAnime(ANI_CTRL *ani_ctrl, int flame);
void motInterpMatrix(float *interp[4], float *m0[4], float *m1[4], float rate);
void motMatrix2Quaternion(float *q, float *m[4]);
void motQuaternion2Matrix(float *m[4], float *q);
void motQuaternionSlerp(float *q, float *q1, float *q2, float rate);
void LocalRotMatrixX(float *m0[4], float *m1[4], float rx);
void LocalRotMatrixY(float *m0[4], float *m1[4], float ry);
void LocalRotMatrixZ(float *m0[4], float *m1[4], float rz);
void motInversKinematics(SgCOORDUNIT *cp, float *target, u_int *top_addr, u_char bone_id);
void movGetMoveval(ANI_CTRL *ani_ctrl, u_int frame_num);
void motSetHierarchy(SgCOORDUNIT *coord, u_int *top_addr);
u_int* SceneInitAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p, u_int mdl_no);
u_int* SceneInitOtherAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p);
void motSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame);
void SceneSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame, u_int type);
void motSetInvMatrix(float *m1[4], float *m0[4]);
u_int* motAlign128(u_int *addr);
void motPrintVector(char *str, float *vec);
void sceRotMatrixXYZ(float *m0[4], float *m1[4], float *rot);

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_MOTION_MOTION_H
