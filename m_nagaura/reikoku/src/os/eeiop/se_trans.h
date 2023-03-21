// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_TRANS_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_TRANS_H

extern FG_FILE_TBL fgf_tbl[0];
extern SE_TRANS_CTRL st_ctrl;

void FGTransInit();
u_char IsEndFgTrans();
void FloatGhostSENotEmpty();
int SeFGhostTransCtrl();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_TRANS_H
