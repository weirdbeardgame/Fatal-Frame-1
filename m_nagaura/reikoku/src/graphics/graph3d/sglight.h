// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGLIGHT_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGLIGHT_H

typedef struct {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR direction;
	sceVu0FVECTOR ldirection;
	sceVu0FVECTOR spvector;
	sceVu0FVECTOR diffuse;
	sceVu0FVECTOR specular;
	sceVu0FVECTOR ambient;
	float intens;
	float intens_b;
	float power;
	float btimes;
	float spower;
	int Enable;
	int SEnable;
	int num;
} SgLIGHT;


void SgPreRenderDbgOn();
void SgPreRenderDbgOff();
void QueSetMatrix(float *m[4], int que, float *v);
void QueSetMatrixNonNormalized(float *m[4], int que, float *v);
void SgSetAmbient(float *ambient);
void SgSetDefaultLight(float *eye, SgLIGHT *p0, SgLIGHT *p1, SgLIGHT *p2);
void _ReadDLightMtx(float *tmp[4]);
void _ReadDColor(float *tmp[4]);
int GetDecay();
float SetMaxColor255(float *dcol, float *col);
void SetBWLight(float *col);
void SetMaterialPointer();
void ClearMaterialCache(HeaderSection *hs);
void SetMaterialDataVU(u_int *prim);
void SetMaterialPointerCoord();
void SetMaterialPointerCoordVU();
void SetMaterialDataPrerender();
void SetMaterialData(u_int *prim);
void SetPointGroup();
void SetSpotGroup(float *wlmtx[4]);
void SetLightData(SgCOORDUNIT *cp0, SgCOORDUNIT *cp1);
void SgSetInfiniteLights(float *eye, SgLIGHT *lights, int num);
void SgSetPointLights(SgLIGHT *lights, int num);
void SgSetSpotLights(SgLIGHT *lights, int num);
void PushLight();
void PopLight();
void ClearLightStack();
void CalcPointLight();
void CalcSpotLight();
void SgReadLights(void *sgd_top, void *light_top, float *Ambient, SgLIGHT *Ilight, int imax, SgLIGHT *Plight, int pmax, SgLIGHT *Slight, int smax);
u_int* GetNextUnpackAddr(u_int *prim);
void SetPreRenderTYPE0(int gloops, u_int *prim);
void SetPreRenderTYPE2(int gloops, u_int *prim);
void SetPreRenderTYPE2F(int gloops, u_int *prim);
void SetPreRenderMeshData(u_int *prim);
void SelectLight(u_int *prim);
void SgPreRenderPrim(u_int *prim);
void SgPreRender(void *sgd_top, int pnum);
void ClearPreRenderMeshData(u_int *prim);
void SgClearPreRenderPrim(u_int *prim);
void SgClearPreRender(void *sgd_top, int pnum);

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGLIGHT_H
