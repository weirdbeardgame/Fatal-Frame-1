// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_TAKEP_PE_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_TAKEP_PE_H

extern sceVu0IVECTOR particle_eff_col;
extern u_char eye_light_flg;
extern sceVu0FVECTOR l_eye_pos;
extern sceVu0FVECTOR r_eye_pos;
extern PARTICLE_EFF_OBJ dummy_pe_obj;

void GetBetweenABVecUnitLen(float *out_a2bv, float *out_unit_a2bv, float *out_len, float *in_av, float *in_bv);
void SetPrePEImage(PARTICLE_EFF_OBJ *obj);
int InitPrePEImage(PARTICLE_EFF_OBJ *obj, int pe_num);
int SetPEObjPos(PARTICLE_EFF_OBJ *obj);
void MakeRandomVec(float *output, int m);
void InitPEObj(PARTICLE_EFF_OBJ *obj, float *ov, float *sv, float *tempgv);
void SetPEObjSprSize(PARTICLE_EFF_OBJ *obj);
void SetPEObjAlphaBl(PARTICLE_EFF_OBJ *obj);
int CtrlPEObj(PARTICLE_EFF_OBJ *obj);
void SortRegisterPEObj(PARTICLE_EFF_OBJ *obj);
Q_WORDDATA* ParticleEffectInTakingPicture(Q_WORDDATA *qd, u_int b_num);
Q_WORDDATA* SetPESpritePacket(Q_WORDDATA *qd, int *col, int *centervec, int pe_width, int albl);
void SetCenterGravOfFVECTOR(float *input, sceVu0FVECTOR *vec, u_int num);
void GetA2BLoadVector(float *out_v, float *fr_v, float *to_v, float rate);
void CallParticleEffect(u_char ene_id);
void StopParticleEffect();
void SetParticleEffect();
void CallEyeLight(sceVu0FVECTOR *lpos, sceVu0FVECTOR *rpos);
void StopEyeLight();
void EyeLightCtrl();

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH2D_TAKEP_PE_H
