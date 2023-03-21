// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_MC_MC_H
#define M_NAGAURA_REIKOKU_SRC_MC_MC_H

typedef struct {
	u_char *addr;
	int size;
} MC_DATA_STR;

extern MC_DATA_STR mc_gamedata_str[0];
extern MC_DATA_STR mc_albumdata_str[0];
extern MC_DATA_STR mc_albumdata2_str[0];
extern u_long mc_gamedata_str_num;
extern u_long mc_albumdata_str_num;


#endif // M_NAGAURA_REIKOKU_SRC_MC_MC_H
