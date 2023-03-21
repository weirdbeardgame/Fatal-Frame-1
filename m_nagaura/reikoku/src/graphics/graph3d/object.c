// STATUS: NOT STARTED

typedef sceVu0FVECTOR VECTOR;
typedef sceVu0FMATRIX MATRIX;

typedef struct {
	float scrz;
	float ax;
	float ay;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
	MATRIX vs;
	MATRIX vc;
} SCREEN;

typedef struct {
	VECTOR yd;
	VECTOR zd;
	VECTOR p;
	MATRIX wv;
	MATRIX ws;
	MATRIX wc;
} VIEW;

typedef struct {
	int model;
	VECTOR lp0;
	VECTOR lp1;
	VECTOR lp2;
	VECTOR ld0;
	VECTOR ld1;
	VECTOR ld2;
	VECTOR c0;
	VECTOR c1;
	VECTOR c2;
	VECTOR a;
	MATRIX nl;
	MATRIX lc;
} LIGHT;

typedef struct {
	qword tag;
	VIEW *view;
	LIGHT *light;
	MATRIX *mw;
	u_char shadow;
	u_char clip;
	u_char spec;
	float rate;
	VECTOR *c;
	VECTOR *c1;
	VECTOR *cvnt;
	VECTOR *cvnt1;
	VECTOR *box;
	qword* (*driver1)(/* parameters unknown */);
	qword* (*driver3)(/* parameters unknown */);
} OBJECT;

qword *pstart1 = NULL;
qword *pstart3 = NULL;
qword *pbase1 = NULL;
qword *pbase3 = NULL;

void objInit() {
	static int bufid = 0;
	static qword p3_buf[2][256];
	qword *base3;
	
  int iVar1;
  
  iVar1 = bufid_69 * 0x1000;
  bufid_69 = 1 - bufid_69;
  pstart3 = (int (*) [4])(&p3_buf_70 + iVar1);
  pbase3 = pstart3;
  SgSetWorkBase(pstart3);
  return;
}

void objFlush() {
  return;
}
