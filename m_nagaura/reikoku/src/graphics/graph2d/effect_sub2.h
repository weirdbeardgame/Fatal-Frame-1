// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_EFFECT_SUB2_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_EFFECT_SUB2_H

extern FALL_TABLE fall_table[0];
extern short int fallen_effect_switch;
extern short int gus_effect_switch;
extern short int hole_effect_switch;
extern short int line_effect_switch[4];
extern SPRT_SDAT btl_strt[11];
extern SPRT_SDAT btl_rslt[23];
extern SPRT_SDAT msg_strt;
extern SPRT_SDAT btl_msel[0];
extern SPRT_SDAT btl_msel2[0];
extern ANM2D_DAT_TABLE anm2d_dat[0][12];
extern ANM2D_WRK_TABLE wrk_table[0];
extern ANM_WRK anm_wrk;
extern int clear_anime_timer;
extern SPRT_DAT clear_all[11];
extern SPRT_DAT story_end[11];
extern LEAVES_TABLE fall_wrk;
extern LEAVES_TABLE gus_wrk;
extern LEAVES_TABLE hole_wrk;
extern LEAVES_TABLE line_wrk[4];
extern BTL_ANM_LOAD banm;
extern enum T_LOAD_MODE {
	BANM_NORM = 0,
	BANM_LOAD = 1,
	BANM_AFTLOAD = 2,
	BANM_TEXDISP = 3
};

void InitEffectSub2();
void CallFallenEffect(float *mpos, int area, int fall_num, int fall_mode);
void StopFallenEffect();
void FallObjInit(float *mpos, int leaf_no, int area, int fall_num, int fall_mode);
void FallObjInitAll(float *mpos, int area, int fall_num, int fall_mode, int height);
void FallObjDropSet();
void FallenObjects();
void FallObjTrans(float *leaf, float *axel, float *aim, int fall_mode);
void FallObjRot(float *rotation, float *axel, float *aim, int fall_mode);
void FallObjWind(float *leaf, int fall_mode);
void FallObjLight(float *leaf, short int *rgba, int fall_mode);
void FallObjDraw(float *mpos, float *rotation, short int *rgba, int fall_mode);
void GusObjDebug();
void CallGusEffect(float *mpos, int area, int height);
void StopGusEffect();
void GusObjMove(float *mpos);
void GusObjInit(float *mpos, int leaf_no, int area);
void GusObjInit3(float *mpos, int leaf_no, int area, int fall_mode);
void GusObjInitAll(float *mpos, int area, int height);
void GusObjects();
int GusObjTrans(int leaf_no);
void GusAlpha(int leaf_no);
void GusObjDraw(int leaf_num, int area, int fall_mode);
void CallHoleGusEffect(float *mpos);
void StopHoleGusEffect();
void HoleGusInit(float *mpos, int leaf_no);
void HoleGusInitAll(float *mpos);
void HoleGusSetPos(int leaf_no);
void HoleGusObjects();
int HoleGusTransX(int leaf_no);
int HoleGusTransZ(int leaf_no);
int HoleGusTransY(int leaf_no);
int HoleGusAlpha(int leaf_no);
void HoleGusDraw(int leaf_no);
void CallLineGusEffect(float *mpos1, float *mpos2, int dir, int line_num);
void StopLineGusEffect(int line_num);
void LineGusInit(float *mpos, int leaf_no, int line_num);
void LineGusInitAll(float *mpos1, float *mpos2, int dir, int line_num);
void LineGusSetPos(int leaf_no, int dir, int line_num);
void LineGusObjects(int line_num);
int LineGusTransX(int leaf_no, int dir, int line_num);
int LineGusTransZ(int leaf_no, int dir, int line_num);
int LineGusTransY(int leaf_no, int dir, int line_num);
int LineGusAlpha(int leaf_no, int line_num);
void LineGusDraw(int leaf_no, int line_num);
void InitCallAnm();
int CallReadyGo();
void ResultDisp();
int CallMissionClear();
int CallMissionFailed();
int CallMissionAllClear();
int CallStoryClear();
int BtlAnmInit(int anm_no);
int BtlAnmMain();
void* BtlTblIncl(ANM2D_DAT_TABLE *b_table, void *p_table, short int *count_keep);
void BtlDataDirectSet(ANM2D_WRK_TABLE *w_table);
void BtlTblTransX(ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table, SPRT_SDAT *ssd_p);
void BtlTblTransY(ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table, SPRT_SDAT *ssd_p);
void BtlTblRotate(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table);
void BtlTblScale(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table);
void TblAlphaChg(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table);
void ZanzouEffect(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table);
void BtlReadyDisp(ANM2D_WRK_TABLE *w_table);
void SimpleMaskDraw(u_char alpha);
void DispSprt2(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate);
void DispSprt3(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate);
void DispSprtTemp(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate);
void TestPk2Data_2dg(long int sendtexaddr);

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_EFFECT_SUB2_H
