// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGSUP_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGSUP_H

extern u_int *save_tri2_pointer;
extern u_int *save_bw_pointer;

void SgSuPDbgOn();
void SgSuPDbgOff();
void DispMicroMemory();
void DispVUMemory();
void DrawBoundingBox(sceVu0FVECTOR *box);
void SetVUMeshDataP(u_int *prim);
int BoundingBoxCalcP(u_int *prim);
void SgSortUnitPrimP(u_int *prim);
void SgSortPreProcessP(u_int *prim);
void SgSortUnitP(void *sgd_top, int pnum);
u_int* GetModelGroupPacket(void *sgd_top);
void SgSortGroupP(void *sgd_top, int gnum);

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SGSUP_H
