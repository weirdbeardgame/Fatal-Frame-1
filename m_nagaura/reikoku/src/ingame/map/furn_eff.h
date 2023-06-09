// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FURN_EFF_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FURN_EFF_H

typedef struct {
	float pos_x;
	float pos_y;
	float pos_z;
	float fscl;
	float kscl;
	u_char fr;
	u_char fg;
	u_char fb;
	u_char kr;
	u_char kg;
	u_char kb;
} FURN_EFCT_FIRE;

typedef struct {
	float pos_x;
	float pos_y;
	float pos_z;
	float lpos_x;
	float lpos_y;
	float lpos_z;
	float rot_x;
	float rot_y;
	float rot_z;
	float w;
	float h;
	int power;
	u_char r;
	u_char g;
	u_char b;
} FURN_EFCT_SUNSHINE;

typedef struct {
	u_char sclw;
	u_char sclh;
} FURN_EFCT_DEFORM;

extern FURN_EFCT_FIRE fefct_fire[0];
extern FURN_EFCT_SUNSHINE fefct_sunshine[0];
extern FURN_EFCT_DEFORM fefct_deform[0];

void FurnEfctSet(FURN_WRK *fwp);
void FurnEfctFree(FURN_WRK *fwp);
void FurnHintDeformCtrl();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MAP_FURN_EFF_H
