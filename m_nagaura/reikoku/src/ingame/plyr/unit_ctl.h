// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_PLYR_UNIT_CTL_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_PLYR_UNIT_CTL_H

void RotLimitChk(float *rot);
float GetTrgtRotY(float *p0, float *p1);
void GetTrgtRotFromPlyr(float *p, float *rot, int id);
void GetTrgtRot(float *p0, float *p1, float *rot, int id);
int GetRndSP(u_int min, u_int lng);
u_char ConvertRot2Dir(float rot, u_char id);
u_char HitChkSegment2AllChk(float *f, float *t, float deg);
u_char OutSightChk(float *tp, float *vp, float rot, float sight, float dist);
int RotRngChk(float *vp, float *tp, float rot, float rng);
int GetPointHeightChk(float *tv);
void ReqEneStop(u_char req, u_char except);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_PLYR_UNIT_CTL_H
