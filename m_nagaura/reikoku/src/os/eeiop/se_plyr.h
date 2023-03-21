// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_PLYR_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_PLYR_H

extern SE_FOOT_RAND_ITA rand_ita_tbl[0];

int SeReqFootStep(float *pos);
u_char IsKarehaZone(float *pos);
u_char IsTakenohaZone(float *pos);
u_char IsHokoriZone();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_SE_PLYR_H
