// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_PGOST_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_PGOST_H

typedef struct {
	u_short score;
	u_char efct_no;
	u_char room;
	short int pos[3];
} PGOST_DAT;

typedef struct {
	u_char req_no;
	u_char pgst_no;
	u_char ev_no;
	u_char stts;
	u_char time;
} PGOST_WRK;

extern PGOST_DAT pg_dat[0];
extern int test_rg_no;
extern PGOST_WRK pg_wrk;

void PuzzleGhostInit();
void PuzzleGhostLoadReq(u_char pg_no);
void PuzzleGhostReq(u_char pg_no);
int PuzzleGhostContinue(u_char ev_no);
void PuzzleGhostPhotoReq();
void PuzzleGhostMain();
void PuzzleGhostDispSet();
void PuzzleGhostDispMain();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_ENTRY_AP_PGOST_H
