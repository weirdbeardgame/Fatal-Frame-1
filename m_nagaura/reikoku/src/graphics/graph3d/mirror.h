// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_MIRROR_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_MIRROR_H

typedef struct {
	int mask;
	int xyz;
	float sgn;
} ClipData;

extern sceVu0FMATRIX mir_mtx;
extern sceVu0FVECTOR mir_norm;
extern sceVu0FVECTOR mir_center;
extern int mirror_points;
extern sceVu0FVECTOR mirror_lpos[5];
extern sceVu0FVECTOR mirror_cval[5];

int CheckMirrorModel(void *sgd_top);
void MirrorInterPNode(MNODE *dst, MNODE *inner, MNODE *outer, ClipData *cldata);
void SliceMirrorPolygon(MFlipNode *fn, ClipData *cldata);
void CalcScreenMirror(float *vp0, float *vp1, float *vp2, float sgn);
void AppendLocalMPos(float *vp);
int MakeMirrorEnvironment(u_int *prim);
void MirrorPrim(u_int *prim);
int PreMirrorPrim(SgCAMERA *camera, u_int *prim);
void MirrorBufferFlush(int tlen);
void CalcMirrorMatrix(SgCAMERA *camera);
void MirrorDraw(SgCAMERA *camera, void *sgd_top, void (*render_func)(/* parameters unknown */));
void MirrorRender(SgCAMERA *camera, void (*render_func)(/* parameters unknown */));

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_MIRROR_H
