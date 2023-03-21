// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_PUZZLE_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_PUZZLE_H

void EAdpcmPuzzleMain();
void AdpcmPrePuzzleFadeOut(u_short fout_flm);
u_char IsEndAdpcmPuzzle();
void AdpcmPreLoadPuzzle(int file_no);
u_char IsPreLoadEndAdpcmPuzzle();
void AdpcmPuzzlePreLoadEndPlay();
void AdpcmPuzzlePlay(int file_no);
void AdpcmPuzzleEnd();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_PUZZLE_H
