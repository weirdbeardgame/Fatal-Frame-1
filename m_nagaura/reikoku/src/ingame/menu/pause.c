// STATUS: NOT STARTED

typedef struct {
	u_char alp;
	u_char msg_alp;
	u_char yn_mode;
} PAUSE_DSP;

PAD_CTRL pad_ctrl = {
	/* .lock = */ 0,
	/* .no_pause = */ 0
};
PAUSE_WRK pause_wrk = {
	/* .mode = */ 0,
	/* .opti = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .timer = */ 0
};
static PAUSE_DSP ps_dsp;
static FLSH_CORE flsh;
char in_pause = 0;

void PauseInit() {
  memset(&pause_wrk,0,8);
  memset(&ps_dsp,0,3);
  gra2dInitDbgMenu();
  in_pause = '\0';
  return;
}

int PauseMain() {
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  int se_no;
  
  bVar2 = pause_wrk.mode;
  if ((*key_now[12] == 1) || (((pad[0].flags & 1U) == 0 && (pause_wrk.mode == 0)))) {
    if (pause_wrk.mode == 0) {
      cVar3 = CanPauseCHK();
      if (cVar3 != '\0') {
        SeStartFix(1,0,0x1000,0x1000,1);
        CaptureScreen(0x1a40);
        DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
        pause_wrk.mode = 1;
        pause_wrk.csr[0] = '\0';
        pause_wrk.timer = 0;
        ingame_wrk.stts = ingame_wrk.stts | 0x80;
        ps_dsp.yn_mode = '\0';
        ps_dsp.msg_alp = '\0';
        ps_dsp.alp = '\0';
        SetTargetVolSeMenuFade(0x600);
        SetTargetVolAdpcmMenuFade(0x600);
      }
      goto LAB_001d45b0;
    }
    if (pause_wrk.mode != 1) goto LAB_001d45b0;
    se_no = 3;
    pause_wrk.mode = 2;
  }
  else {
    if (pause_wrk.mode == 2) {
      if (in_pause == '\0') {
        ingame_wrk.stts = ingame_wrk.stts & 0x5f;
        SetTargetVolSeMenuFade(0xfff);
        SetTargetVolAdpcmMenuFade(0xfff);
        pause_wrk.mode = 0;
        return 1;
      }
      goto LAB_001d45b0;
    }
    if ((dbg_wrk.mode_on != 0) || (pause_wrk.mode != 1)) goto LAB_001d45b0;
    if (pause_wrk.timer == 0) {
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
    }
    if (ps_dsp.yn_mode == '\0') {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        pause_wrk.mode = 2;
      }
      else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        SeStartFix(1,0,0x1000,0x1000,1);
        *key_now[4] = 2;
        if (pause_wrk.csr[0] == '\x01') {
          SpdOptStart();
          pause_wrk.mode = 0;
        }
        else if (pause_wrk.csr[0] < 2) {
          if (pause_wrk.csr[0] == '\0') {
            *key_now[5] = 2;
            pause_wrk.mode = 2;
          }
        }
        else if (pause_wrk.csr[0] == '\x02') {
          ps_dsp.yn_mode = bVar2;
          pause_wrk.csr[1] = bVar2;
        }
      }
      else if (((*key_now[0] == 1) ||
               ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        SeStartFix(0,0,0x1000,0x1000,1);
        bVar1 = pause_wrk.csr[0] == '\0';
        pause_wrk.csr[0] = pause_wrk.csr[0] + 0xff;
        if (bVar1) {
          pause_wrk.csr[0] = '\x02';
        }
      }
      else if ((*key_now[1] == 1) ||
              ((((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
                (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
               ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))))) {
        SeStartFix(0,0,0x1000,0x1000,1);
        bVar1 = 1 < pause_wrk.csr[0];
        pause_wrk.csr[0] = pause_wrk.csr[0] + '\x01';
        if (bVar1) {
          pause_wrk.csr[0] = '\0';
        }
      }
      goto LAB_001d45b0;
    }
    if (*key_now[4] != 0) {
      SeStartFix(3,0,0x1000,0x1000,1);
      *key_now[4] = 2;
      ps_dsp.yn_mode = '\0';
      goto LAB_001d45b0;
    }
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      if ((((*key_now[2] == 1) || (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)) || (*key_now[3] == 1)
          ) || (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) {
        SeStartFix(0,0,0x1000,0x1000,1);
        pause_wrk.csr[1] = '\x01' - pause_wrk.csr[1];
      }
      goto LAB_001d45b0;
    }
    se_no = 1;
    if (pause_wrk.csr[1] == '\0') {
      if (ingame_wrk.game == 1) {
        LoadStoryWrk();
        SetBattleEnd();
      }
      GameModeChange(1);
      EAdpcmFadeOutGameEnd(0x1e);
      SetTargetVolSeMenuFade(0xfff);
      SetTargetVolAdpcmMenuFade(0xfff);
      se_no = 1;
    }
    else {
      ps_dsp.yn_mode = '\0';
    }
  }
  SeStartFix(se_no,0,0x1000,0x1000,1);
LAB_001d45b0:
  if (pause_wrk.timer != -1) {
    pause_wrk.timer = pause_wrk.timer + 1;
  }
  return 0;
}

void PauseDisp() {
  uint uVar1;
  
  if ((pause_wrk.mode == 0) || (pause_wrk.mode == 2)) {
    if ((int)(ps_dsp.alp - 6) < 1) {
      in_pause = '\0';
      ps_dsp.alp = '\0';
      return;
    }
    ps_dsp.alp = (uchar)(ps_dsp.alp - 6);
  }
  else {
    uVar1 = ps_dsp.alp + 6;
    if (0x7f < uVar1) {
      uVar1 = 0x80;
    }
    ps_dsp.alp = (uchar)uVar1;
  }
  in_pause = '\0';
  if ((ps_dsp.alp != '\0') && (spd_mnu.sopt == '\0')) {
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    PauseDraw(ps_dsp.alp);
    in_pause = '\x01';
  }
  return;
}

static void PauseDraw(u_char alp) {
	int i;
	
  ulong uVar1;
  byte alp_00;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (long)(char)alp & 0xff;
  iVar4 = 0xb80000;
  iVar3 = 0;
  SetSprFile(0x1ce0000);
  alp_00 = (byte)uVar2;
  CmnWindow(0x14,0,0,alp_00,0x80);
  PutSpriteYW(0x215,0x215,0.0,0.0,0.0,0x808080,(float)(int)uVar2,1.0,1.0,0,0xff,1,0,0);
  FlashStarYW(&flsh,'`','@','Z','\0');
  CmnCursol(0xaa,(ushort)pause_wrk.csr[0] * 0x1d + 0xb5,300,0x1d,(float)(uint)flsh.alpha,alp_00,
            0x78000);
  do {
    if ((ingame_wrk.game == 1) && (iVar3 == 2)) {
      PutStringYW(6,0x23,0x140,0xf2,0x808080,alp_00,0x75000,1);
    }
    else {
      PutStringYW(6,(char)iVar3 + 0xd,0x140,(ushort)((uint)iVar4 >> 0x10),0x808080,alp_00,0x75000,1)
      ;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x1d0000;
  } while (iVar3 < 3);
  if (ps_dsp.yn_mode == '\0') {
    uVar1 = (ulong)(int)(ps_dsp.msg_alp - 8);
    if ((long)uVar1 <= (long)uVar2) {
      ps_dsp.msg_alp = '\0';
      goto LAB_001d4858;
    }
  }
  else {
    uVar1 = (ulong)(int)(ps_dsp.msg_alp + 8);
    ps_dsp.msg_alp = alp_00;
    if (uVar2 <= uVar1) goto LAB_001d4858;
  }
  ps_dsp.msg_alp = (uchar)uVar1;
LAB_001d4858:
  if (ps_dsp.msg_alp == '\0') {
    return;
  }
  DrawMessageBox(0xf000,56.0,DAT_00355ed4,528.0,81.0,ps_dsp.msg_alp);
  YesNoCrslOKR(0xa000,(float)((uint)pause_wrk.csr[1] * 0x84 + 0xb2),366.0,0x808080,
               (float)(uint)ps_dsp.msg_alp,2.0);
  if (ingame_wrk.game == 1) {
    PutStringYW(6,0x24,0x140,0x15a,0x808080,ps_dsp.msg_alp,0x5000,1);
  }
  else {
    PutStringYW(6,0x1e,0x140,0x15a,0x808080,ps_dsp.msg_alp,0x5000,1);
  }
  PutStringYW(6,0x1f,0x30,0x173,0x808080,ps_dsp.msg_alp,0x5000,0);
  return;
}

static char CanPauseCHK() {
	char can;
	
  bool bVar1;
  
  bVar1 = pad_ctrl.no_pause == '\0';
  if (!bVar1) {
    pad_ctrl.no_pause = '\0';
  }
  return bVar1 && (eff_filament_off == 0 &&
                  (plyr_wrk.mode != 9 &&
                  (plyr_wrk.mode != 3 &&
                  (plyr_wrk.mode != 1 &&
                  (plyr_wrk.mode != 6 &&
                  (plyr_wrk.mode != 4 && ((plyr_wrk.sta & 8) == 0 && ingame_wrk.mode == 6)))))));
}
