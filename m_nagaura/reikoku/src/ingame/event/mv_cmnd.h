// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_EVENT_MV_CMND_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_EVENT_MV_CMND_H

extern MOVIE_CMD_WRK mvcmd_wrk;

void EventMovieCommandInit();
void EventMovieCommandMain(int flame, int top_addr);
int GetMovieMessageAddr(short int msg_no);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_EVENT_MV_CMND_H
