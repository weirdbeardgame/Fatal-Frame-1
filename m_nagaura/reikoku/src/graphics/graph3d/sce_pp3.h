// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SCE_PP3_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SCE_PP3_H


void scePP13_Sync();
void scePP1_Kick(void *addr);
void scePP3_Kick(u_int *addr, int qwc);
int scePP1_Disp(u_int mode);
int scePP1_Init(u_int mode);
int scePP1_End(u_int mode);

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_SCE_PP3_H
