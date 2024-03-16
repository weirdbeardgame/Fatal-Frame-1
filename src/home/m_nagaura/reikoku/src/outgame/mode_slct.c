#include "common.h"
#include "typedefs.h"
#include "globals.h"
#include "mode_slct.h"


INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctInit);

void ModeSlctLoop(void) {
  ModeSlctCtrl(dsp_ms.win_alp);
  dsp_ms.mode_tmr++;
}

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctCtrl);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctPad);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctDspBak);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctDspChr);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", DspModeSlect);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", DspStoryMode);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", DspBattleMode);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", DspMissionSelect);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", PutChrOne);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", PutChrOneRGB);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctDspFlm);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", FilmCutter);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctDspWin);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", MsLoadCtrl);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", TitleModeEnd);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ChangeModeSel);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", BattleModeExit);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", BattleModeNext);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", CheckClearStage);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", ModeSlctDspMsg);

INCLUDE_ASM(const s32, "home/m_nagaura/reikoku/src/outgame/mode_slct", SetCsrInfoStoryMode);
