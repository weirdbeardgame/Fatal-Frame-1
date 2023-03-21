// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SCENE_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SCENE_H

void EAdpcmSceneMain();
void AdpcmPreSceneFadeOut(u_short fout_flm);
u_char IsFadeoutEndAdpcmScene();
void AdpcmScenePreLoadReq(int scene_no);
int IsAdpcmScenePreLoadEnd();
void AdpcmScenePreLoadEndPlay(int scene_no);
void AdpcmSceneStop();

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_ADPCM_EA_SCENE_H
