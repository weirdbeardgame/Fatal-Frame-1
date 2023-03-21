// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_SYSTEM_H
#define M_NAGAURA_REIKOKU_SRC_OS_SYSTEM_H

#include "lost.h"
#include "zeromath.h"

void InitSystem();
void EndSystem();
void LoadIRX();
void InitSysWrk();
void GetNowClock(sceCdCLOCK *nc);
void InitOptionWrk();
void InitGraphics();
int userGsSwapDBuff(sceGsDBuff *db, int id);
int vblankHandler(int val);
void vfunc();
void SetSysBackColor(u_char r, u_char g, u_char b);

#endif // M_NAGAURA_REIKOKU_SRC_OS_SYSTEM_H
