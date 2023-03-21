// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#179,  not equal)
enum {
	ST_VOL_DWN = 0,
	ST_SLCT_PRE = 1,
	ST_SND_PLAY = 2,
	ST_SND_STOP = 3,
	ST_SLCT_NXT = 4,
	ST_VOL_UPP = 5,
	ST_CMND_NUM = 6
};

typedef struct {
	u_short bgm_no;
	u_short bgm_vol;
	u_short bgm_no_bak;
	u_short mst_vol;
	u_char csr[1];
	u_char run[6];
	u_char csr_alp[6];
	u_char run_alp[6];
	u_char run_flsh[6];
	u_char num_tmr[3];
	u_char ply_flm;
	u_char ply_min;
	u_char ply_sec;
	u_char msg_no;
} ST_F;

typedef struct {
	u_short bgm_no;
	u_short time;
} BGM_DATA;

typedef struct {
	short int lvl_now;
	short int lvl_bak;
	u_char tmr;
	u_char beat;
} BEAT_DSP;

typedef struct {
	u_char beat;
	u_char max;
	u_char min;
	u_char drop;
} BEAT_DATA;

u_short music_list[0] = {
};
static ST_F stf;
static BEAT_DSP bb;
static char playback_part2;

void SoundTestForModeSlectInit() {
  memset(&stf,0,0x28);
  stf.bgm_no = 0;
  stf.bgm_no_bak = 0;
  stf.mst_vol = GetAdpcmVol((uint)_music_list);
  stf.msg_no = 0xff;
  stf.bgm_vol = opt_wrk.bgm_vol;
  stf.csr[0] = '\x02';
  stf.ply_flm = '\0';
  stf.ply_sec = '\0';
  stf.ply_min = '\0';
  bb.lvl_now = 0;
  stf.run[2] = '\0';
  playback_part2 = '\0';
  return;
}

char SoundTestForModeSlect() {
	char set_flg;
	char rtrn;
	
  short sVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  GetIopStatP();
  stf.run[0] = '\0';
  stf.run[1] = '\0';
  stf.run[3] = '\0';
  stf.run[4] = '\0';
  stf.run[5] = '\0';
  if (*key_now[4] == 1) {
    cVar5 = '\x01';
    EAdpcmFadeOut(0xf);
    cVar4 = playback_part2;
    goto LAB_002205c4;
  }
  if (*key_now[5] == 0) {
    if (((*key_now[2] == 1) ||
        (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
         (sVar1 = Ana2PadDirCnt('\x03'), sVar1 == 1)))) ||
       ((uVar2 = Ana2PadDirCnt('\x03'), 0x19 < uVar2 &&
        (sVar1 = Ana2PadDirCnt('\x03'), (int)sVar1 % 5 == 1)))) {
      stf.msg_no = 0xff;
      cVar4 = playback_part2;
      if (stf.csr[0] == '\0') {
        stf.csr[0] = '\x05';
      }
      else {
        stf.csr[0] = stf.csr[0] + 0xff;
      }
    }
    else if (((*key_now[3] == 1) ||
             ((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)))) ||
            ((sVar1 = Ana2PadDirCnt('\x01'), sVar1 == 1 ||
             ((uVar2 = Ana2PadDirCnt('\x01'), cVar4 = playback_part2, 0x19 < uVar2 &&
              (sVar1 = Ana2PadDirCnt('\x01'), cVar4 = playback_part2, (int)sVar1 % 5 == 1)))))) {
      stf.msg_no = 0xff;
      if (4 < stf.csr[0]) {
        stf.csr[0] = '\0';
        goto switchD_002201c0_caseD_6;
      }
      stf.csr[0] = stf.csr[0] + '\x01';
      cVar4 = playback_part2;
    }
    goto LAB_002205c4;
  }
  stf.msg_no = 0xff;
  cVar4 = playback_part2;
  switch(stf.csr[0]) {
  case '\0':
    stf.run[0] = '\x01';
    sVar1 = stf.bgm_vol + -0x20;
    if (((ushort)stf.bgm_vol < 0x21) && (sVar1 = stf.bgm_vol, stf.bgm_vol != 0)) {
      stf.bgm_vol = 0;
      sVar1 = stf.bgm_vol;
    }
    goto LAB_002201fc;
  case '\x01':
    if (stf.run[2] != '\x02') {
      stf.run[1] = '\x01';
      if (*key_now[5] == 1) {
        stf.run_flsh[1] = '\0';
        if (stf.bgm_no == 0) goto switchD_002201c0_caseD_6;
        stf.bgm_no = stf.bgm_no + -1;
      }
      break;
    }
    stf.run[1] = '\x01';
    sVar1 = *key_now[5];
    if (sVar1 != 1) break;
    stf.run_flsh[1] = '\0';
    if (stf.bgm_no != 0) {
      stf.bgm_no = stf.bgm_no + -1;
    }
LAB_002203d8:
    EAdpcmCmdStop(0,0,0);
    if (playback_part2 == '\0') {
      playback_part2 = (char)sVar1;
      cVar4 = '\x01';
      break;
    }
    goto LAB_002205cc;
  case '\x02':
    if (*key_now[5] == 1) {
      bb.lvl_now = 0;
      stf.ply_min = '\0';
      stf.ply_flm = '\0';
      stf.ply_sec = '\0';
    }
    stf.run[2] = '\x01';
    stf.msg_no = '\a';
    stf.mst_vol = GetAdpcmVol((uint)*(ushort *)(&music_list + (uint)(ushort)stf.bgm_no * 2));
    EAdpcmCmdPlay(0,0,(uint)*(ushort *)(&music_list + (uint)(ushort)stf.bgm_no * 2),0,stf.mst_vol,
                  0x280,0xfff,0);
    cVar4 = playback_part2;
    break;
  case '\x03':
    if (*key_now[5] == 1) {
      bb.lvl_now = 0;
      stf.ply_min = '\0';
      stf.run_flsh[3] = '\0';
      stf.ply_flm = '\0';
      stf.ply_sec = '\0';
    }
    stf.run[3] = '\x01';
    stf.run[2] = '\0';
    EAdpcmCmdStop(0,0,0);
    cVar4 = playback_part2;
    break;
  case '\x04':
    if (stf.run[2] == '\x02') {
      stf.run[4] = '\x01';
      sVar1 = *key_now[5];
      if (sVar1 == 1) {
        stf.run_flsh[4] = '\0';
        if ((ushort)stf.bgm_no < 0x2f) {
          stf.bgm_no = stf.bgm_no + 1;
        }
        goto LAB_002203d8;
      }
    }
    else {
      stf.run[4] = '\x01';
      if (*key_now[5] == 1) {
        stf.run_flsh[4] = '\0';
        if (0x2e < (ushort)stf.bgm_no) goto switchD_002201c0_caseD_6;
        stf.bgm_no = stf.bgm_no + 1;
      }
    }
    break;
  case '\x05':
    stf.run[5] = '\x01';
    sVar1 = stf.bgm_vol + 0x20;
    if ((0xfde < (ushort)stf.bgm_vol) && (sVar1 = stf.bgm_vol, stf.bgm_vol != 0xfff)) {
      stf.bgm_vol = 0xfff;
      sVar1 = stf.bgm_vol;
    }
LAB_002201fc:
    stf.bgm_vol = sVar1;
    SeSetMVol((short)(int)((float)((uint)(ushort)stf.bgm_vol * 0xfff) / DAT_003562d4));
    cVar4 = playback_part2;
    break;
  default:
switchD_002201c0_caseD_6:
    stf.msg_no = 0xff;
    cVar4 = playback_part2;
  }
LAB_002205c4:
  if (cVar4 != '\0') {
LAB_002205cc:
    iVar3 = IsEndAdpcmFadeOut();
    if (iVar3 != 0) {
      stf.mst_vol = GetAdpcmVol((uint)*(ushort *)(&music_list + (uint)(ushort)stf.bgm_no * 2));
      EAdpcmCmdPlay(0,0,(uint)*(ushort *)(&music_list + (uint)(ushort)stf.bgm_no * 2),0,stf.mst_vol,
                    0x280,0xfff,0);
      stf.ply_min = '\0';
      stf.run[2] = '\x01';
      stf.ply_flm = '\0';
      stf.ply_sec = '\0';
      bb.lvl_now = 0;
      playback_part2 = '\0';
    }
  }
  if (stf.run[2] == '\x01') {
    uVar2 = EAGetRetStat();
    if (5 < (short)uVar2) {
      stf.run[2] = '\x02';
    }
  }
  else if ((stf.run[2] == '\x02') && (iVar3 = IsEndAdpcmFadeOut(), iVar3 != 0)) {
    stf.ply_min = '\0';
    stf.run[2] = '\0';
    stf.ply_flm = '\0';
    stf.ply_sec = '\0';
    bb.lvl_now = 0;
  }
  if (((stf.msg_no == 0xff) && (stf.msg_no = stf.csr[0], stf.csr[0] == '\x02')) &&
     (stf.run[2] == '\x02')) {
    stf.msg_no = '\a';
  }
  return cVar5;
}

void SoundTestForModeSlectDisp(u_char alp, float flsh) {
	int i;
	u_char dir;
	
  bool bVar1;
  short sVar2;
  uchar uVar3;
  uint uVar4;
  uchar *puVar5;
  byte alp_00;
  uint alp_01;
  uint uVar6;
  int iVar7;
  int unaff_s4_lo;
  float fVar8;
  
  uVar6 = 0;
  alp_01 = (int)(char)alp & 0xff;
  bVar1 = true;
  do {
    alp_00 = (byte)alp_01;
    if (bVar1) {
      switch(uVar6) {
      default:
        if (stf.csr[0] == '\0') {
          if (stf.run[0] == '\x01') {
            uVar4 = (uint)stf.csr_alp[0];
            stf.csr_alp[0] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[0] = (uchar)(uVar4 + 8);
            }
            stf.run_alp[0] = (uchar)(int)((float)alp_01 * flsh);
          }
          else {
            stf.csr_alp[0] = (uchar)(int)((float)alp_01 * flsh);
            if ((int)(stf.run_alp[0] - 8) < 1) {
              stf.run_alp[0] = '\0';
            }
            else {
              stf.run_alp[0] = (uchar)(stf.run_alp[0] - 8);
            }
          }
        }
        else {
          if (0 < (int)(stf.csr_alp[0] - 8)) {
            stf.csr_alp[0] = (uchar)(stf.csr_alp[0] - 8);
          }
          if (0 < (int)(stf.run_alp[0] - 8)) {
            stf.run_alp[0] = (uchar)(stf.run_alp[0] - 8);
          }
        }
        break;
      case 1:
        if (stf.csr[0] == '\x01') {
          if (stf.run[1] == '\x01') {
            uVar4 = (uint)stf.csr_alp[1];
            stf.csr_alp[1] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[1] = (uchar)(uVar4 + 8);
            }
            if (stf.run_flsh[1] < 0x1e) {
              stf.run_flsh[1] = stf.run_flsh[1] + '\x01';
            }
            fVar8 = SgSinf(((float)(uint)stf.run_flsh[1] * DAT_003562d8) / 30.0);
            stf.run_alp[1] = (uchar)(int)((float)alp_01 * fVar8);
          }
          else {
            stf.csr_alp[1] = (uchar)(int)((float)alp_01 * flsh);
            if ((int)(stf.run_alp[1] - 8) < 1) {
              stf.run_alp[1] = '\0';
            }
            else {
              stf.run_alp[1] = (uchar)(stf.run_alp[1] - 8);
            }
          }
        }
        else {
          if (0 < (int)(stf.csr_alp[1] - 8)) {
            stf.csr_alp[1] = (uchar)(stf.csr_alp[1] - 8);
          }
          if (0 < (int)(stf.run_alp[1] - 8)) {
            stf.run_alp[1] = (uchar)(stf.run_alp[1] - 8);
          }
        }
        break;
      case 2:
        if (stf.csr[0] == '\x02') {
          if (stf.run[2] == '\0') {
            stf.csr_alp[2] = (uchar)(int)((float)alp_01 * flsh);
          }
          else {
            uVar4 = (uint)stf.csr_alp[2];
            stf.csr_alp[2] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[2] = (uchar)(uVar4 + 8);
            }
          }
        }
        else if (0 < (int)(stf.csr_alp[2] - 8)) {
          stf.csr_alp[2] = (uchar)(stf.csr_alp[2] - 8);
        }
        if (stf.run[2] == '\0') {
          if ((int)(stf.run_alp[2] - 8) < 1) {
            stf.run_alp[2] = '\0';
          }
          else {
            stf.run_alp[2] = (uchar)(stf.run_alp[2] - 8);
          }
        }
        else {
          stf.run_alp[2] = (uchar)(int)((float)alp_01 * flsh);
        }
        break;
      case 3:
        if (stf.csr[0] == '\x03') {
          if (stf.run[3] == '\x01') {
            uVar4 = (uint)stf.csr_alp[3];
            stf.csr_alp[3] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[3] = (uchar)(uVar4 + 8);
            }
            if (stf.run_flsh[3] < 0x1e) {
              stf.run_flsh[3] = stf.run_flsh[3] + '\x01';
            }
            fVar8 = SgSinf(((float)(uint)stf.run_flsh[3] * DAT_003562dc) / 30.0);
            stf.run_alp[3] = (uchar)(int)((float)alp_01 * fVar8);
          }
          else {
            stf.csr_alp[3] = (uchar)(int)((float)alp_01 * flsh);
            if ((int)(stf.run_alp[3] - 8) < 1) {
              stf.run_alp[3] = '\0';
            }
            else {
              stf.run_alp[3] = (uchar)(stf.run_alp[3] - 8);
            }
          }
        }
        else {
          if (0 < (int)(stf.csr_alp[3] - 8)) {
            stf.csr_alp[3] = (uchar)(stf.csr_alp[3] - 8);
          }
          if (0 < (int)(stf.run_alp[3] - 8)) {
            stf.run_alp[3] = (uchar)(stf.run_alp[3] - 8);
          }
        }
        break;
      case 4:
        if (stf.csr[0] == '\x04') {
          if (stf.run[4] == '\x01') {
            uVar4 = (uint)stf.csr_alp[4];
            stf.csr_alp[4] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[4] = (uchar)(uVar4 + 8);
            }
            if (stf.run_flsh[4] < 0x1e) {
              stf.run_flsh[4] = stf.run_flsh[4] + '\x01';
            }
            fVar8 = SgSinf(((float)(uint)stf.run_flsh[4] * DAT_003562e0) / 30.0);
            stf.run_alp[4] = (uchar)(int)((float)alp_01 * fVar8);
          }
          else {
            stf.csr_alp[4] = (uchar)(int)((float)alp_01 * flsh);
            if ((int)(stf.run_alp[4] - 8) < 1) {
              stf.run_alp[4] = '\0';
            }
            else {
              stf.run_alp[4] = (uchar)(stf.run_alp[4] - 8);
            }
          }
        }
        else {
          if (0 < (int)(stf.csr_alp[4] - 8)) {
            stf.csr_alp[4] = (uchar)(stf.csr_alp[4] - 8);
          }
          if (0 < (int)(stf.run_alp[4] - 8)) {
            stf.run_alp[4] = (uchar)(stf.run_alp[4] - 8);
          }
        }
        break;
      case 5:
        if (stf.csr[0] == '\x05') {
          if (stf.run[5] == '\x01') {
            uVar4 = (uint)stf.csr_alp[5];
            stf.csr_alp[5] = alp_00;
            if (uVar4 + 8 < alp_01) {
              stf.csr_alp[5] = (uchar)(uVar4 + 8);
            }
            stf.run_alp[5] = (uchar)(int)((float)alp_01 * flsh);
          }
          else {
            stf.csr_alp[5] = (uchar)(int)((float)alp_01 * flsh);
            if ((int)(stf.run_alp[5] - 8) < 1) {
              stf.run_alp[5] = '\0';
            }
            else {
              stf.run_alp[5] = (uchar)(stf.run_alp[5] - 8);
            }
          }
        }
        else {
          if (0 < (int)(stf.csr_alp[5] - 8)) {
            stf.csr_alp[5] = (uchar)(stf.csr_alp[5] - 8);
          }
          if (0 < (int)(stf.run_alp[5] - 8)) {
            stf.run_alp[5] = (uchar)(stf.run_alp[5] - 8);
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
    bVar1 = uVar6 < 6;
  } while ((int)uVar6 < 6);
  iVar7 = 0;
  puVar5 = stf.run_alp;
  do {
    sVar2 = (short)iVar7;
    PutChrOne(sVar2 + 0x51,0,0,0x80,puVar5[-6],0);
    iVar7 = iVar7 + 1;
    PutChrOne(sVar2 + 0x4b,0,0,0x80,*puVar5,0);
    puVar5 = puVar5 + 1;
  } while (iVar7 < 6);
  PutChrOne(0x59,(ushort)(int)((float)((uint)(ushort)stf.bgm_vol * 0xb0) / DAT_003562e4) & 0xff,0,
            0x80,alp_00,0);
  ShockWave('\0',alp_00);
  if ((ushort)stf.bgm_no_bak < (ushort)stf.bgm_no) {
    unaff_s4_lo = 0;
  }
  else if ((ushort)stf.bgm_no < (ushort)stf.bgm_no_bak) {
    unaff_s4_lo = 1;
  }
  uVar3 = '\n';
  if (stf.bgm_no_bak != stf.bgm_no) {
    if (stf.num_tmr[0] == '\0') {
      uVar3 = '\n';
    }
    else {
      uVar3 = stf.num_tmr[0] + 0xff;
      if (stf.num_tmr[0] == '\x01') {
        stf.bgm_no_bak = stf.bgm_no;
        uVar3 = '\n';
      }
    }
  }
  stf.num_tmr[0] = uVar3;
  SlotNum((uint)(ushort)stf.bgm_no_bak,'\x02','\n' - stf.num_tmr[0],'\n',0x13a,0x7a,0x7a,0x93,alp_01
          ,0,unaff_s4_lo);
  if (stf.run[2] == '\x02') {
    bVar1 = 0x3b < stf.ply_flm;
    stf.ply_flm = stf.ply_flm + '\x01';
    uVar3 = stf.ply_min;
    if (bVar1) {
      stf.ply_flm = '\0';
      if (stf.ply_sec < 0x3b) {
        stf.ply_sec = stf.ply_sec + '\x01';
      }
      else if (stf.ply_sec < 0x3c) {
        stf.ply_sec = '\0';
        uVar3 = stf.ply_min + '\x01';
      }
      else {
        uVar3 = stf.ply_min + '\x01';
        if ((0x3a < stf.ply_min) && (uVar3 = stf.ply_min, stf.ply_min < 0x3c)) {
          stf.ply_min = '\0';
          uVar3 = stf.ply_min;
        }
      }
    }
  }
  else {
    stf.ply_sec = '\0';
    stf.ply_flm = '\0';
    stf.ply_min = '\0';
    uVar3 = stf.ply_min;
  }
  stf.ply_min = uVar3;
  PutChrOne(100,0,0,0x80,alp_00,0);
  SlotNum((uint)stf.ply_sec,'\x02',stf.ply_flm,'<',0x144,0xb4,0xb4,0xcd,alp_01,1,0);
  if (stf.ply_sec == ';') {
    SlotNum((uint)stf.ply_min,'\x02',stf.ply_flm,'<',0x111,0xb4,0xb4,0xcd,alp_01,1,0);
  }
  else {
    SlotNum((uint)stf.ply_min,'\x02','\0','\0',0x111,0xb4,0xb4,0xcd,alp_01,1,0);
  }
  if (stf.msg_no != 0xff) {
    PutStringYW(0x34,stf.msg_no,0x50,0x165,0x808080,alp_00,0x1000,0);
  }
  SetSprFile(0x1ce0000);
  DispCaption(5,alp_00);
  return;
}

void SlotNum(int number, u_char digit, u_char timer, u_char tim_lmt, short int pos_x, short int pos_y, short int lmt_upp, short int lmt_dwn, int alp, int time_mode, int ud_sw) {
	u_char alp;
	u_char time_mode;
	u_char ud_sw;
	int i;
	int multi10;
	int multi10_bak;
	int dsp_num;
	u_char dsp_mode;
	
  int iVar1;
  uchar no;
  int in_v1_lo;
  uchar number_00;
  uint mode;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = 1;
  uVar5 = (long)(char)digit & 0xff;
  for (uVar3 = uVar5; uVar3 != 0; uVar3 = (ulong)((int)uVar3 + -1)) {
    iVar2 = iVar2 * 10;
    in_v1_lo = iVar2;
  }
  iVar1 = number % iVar2;
  if (iVar2 == 0) {
    trap(7);
  }
  lVar4 = 0;
  if (uVar5 != 0) {
    do {
      in_v1_lo = in_v1_lo / 10;
      iVar2 = in_v1_lo * 10;
      number_00 = (uchar)((iVar1 % iVar2) / in_v1_lo);
      mode = 0;
      if (timer != '\0') {
        if (tim_lmt < timer) {
          if (iVar2 == 0) {
            trap(7);
          }
          number_00 = (uchar)(((iVar1 + 1) % iVar2) / in_v1_lo);
        }
        else if (lVar4 == (int)uVar5 + -1) {
          mode = 2;
          if ((char)ud_sw == '\0') {
            mode = 1;
          }
        }
        else if ((char)ud_sw == '\0') {
          mode = (uint)((iVar1 / (in_v1_lo / 10)) % 10 == 9);
        }
        else {
          mode = 2;
          if ((iVar1 / (in_v1_lo / 10)) % 10 != 0) {
            mode = 0;
          }
        }
      }
      no = (uchar)lVar4;
      lVar4 = (long)((int)lVar4 + 1);
      OneNum(0x5a,number_00,no,timer,tim_lmt,pos_x,pos_y,lmt_upp,(int)(short)lmt_dwn,mode,alp & 0xff
             ,time_mode & 0xff);
    } while (lVar4 < (long)uVar5);
  }
  return;
}

void ShockWave(u_char bgm_no, u_char alp) {
	BEAT_DATA bd[1];
	
  bool bVar1;
  uchar *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  BEAT_DATA bd [1];
  
  uVar5 = (uint)&bd[0].drop & 3;
  puVar2 = &bd[0].drop + -uVar5;
  *(uint *)puVar2 = *(uint *)puVar2 & -1 << (uVar5 + 1) * 8 | (uint)DAT_00357830 >> (3 - uVar5) * 8;
  bd[0] = DAT_00357830;
  uVar5 = (int)(char)bgm_no & 0xff;
  if (stf.run[2] == '\x02') {
    if (bd[uVar5].beat == 0) {
      trap(7);
    }
    if ((uint)bb.tmr % (uint)bd[uVar5].beat == 0) {
      iVar4 = rand();
      bb.lvl_bak = (ushort)(int)((float)(bd[uVar5].max - 7) * (float)iVar4 * 4.656613e-10 * 6.0);
      uVar3 = bb.lvl_bak;
      if ((long)(int)(short)bb.lvl_bak <= (long)(short)bb.lvl_now) goto LAB_002212c8;
    }
    else if ((long)(int)((bd[uVar5].min - 7) * 6) < (long)(short)bb.lvl_now) {
      uVar3 = bb.lvl_now - bd[uVar5].drop;
    }
    else {
      bb.lvl_now = 6;
      uVar3 = bb.lvl_now;
    }
  }
  else {
    bb.lvl_now = 6;
    uVar3 = bb.lvl_now;
  }
  bb.lvl_now = uVar3;
LAB_002212c8:
  PutChrOne(0x57,0,0xfffa,0x80,alp,0);
  PutChrOne(0x58,0,0xfffa,0x80,alp,0);
  bVar1 = 99 < bb.tmr;
  bb.tmr = bb.tmr + '\x01';
  if (bVar1) {
    bb.tmr = '\0';
  }
  return;
}

void OneNum(u_short num_chr, u_char number, u_char no, u_char timer, u_char tim_lmt, short int pos_x, short int pos_y, short int lmt_upp, int lmt_dwn, int mode, int alp, int time_mode) {
	short int lmt_dwn;
	u_char mode;
	u_char alp;
	u_char time_mode;
	short int slot_mov;
	int i;
	short int dsp_y;
	u_char dsp_num;
	signed char dsp_v;
	signed char dsp_h;
	DISP_SPRT ds;
	
  uint uVar1;
  int in_t4_lo;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_hi;
  DISP_SPRT ds;
  ushort dsp_y;
  char dsp_v;
  char dsp_h;
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  ushort *local_a8;
  int local_a4;
  
  uVar5 = (int)num_chr & 0xffff;
  local_bc = (int)(short)lmt_upp;
  local_b4 = alp & 0xff;
  local_b8 = (int)(short)lmt_dwn;
  uVar1 = mode & 0xff;
  local_b0 = time_mode & 0xff;
  if (uVar1 == 1) {
    uVar1 = (uint)*(ushort *)(&DAT_0025086e + uVar5 * 0x20);
  }
  else {
    if ((byte)mode < 2) {
      if (uVar1 == 0) {
        in_t4_lo = 0;
      }
      goto LAB_00221450;
    }
    if (uVar1 != 2) goto LAB_00221450;
    uVar1 = -(uint)*(ushort *)(&DAT_0025086e + uVar5 * 0x20);
  }
  iVar3 = uVar1 * ((int)(char)timer & 0xffU);
  in_hi = iVar3 >> 0x1f;
  in_t4_lo = (int)(short)(int)((float)iVar3 / (float)((int)(char)tim_lmt & 0xff));
LAB_00221450:
  local_ac = ((int)(short)pos_x | in_hi) + ((int)(char)no & 0xffU) * 0x14;
  local_a4 = (short)pos_y - in_t4_lo;
  local_a8 = &dsp_y;
  iVar3 = ((int)(char)number & 0xffU) + 0xb;
  iVar4 = 0;
  do {
    if ((local_b0 == 0) || (((int)(char)no & 0xffU) != 0)) {
      uVar1 = iVar3 % 10;
    }
    else {
      uVar1 = (iVar3 + -4) % 6;
    }
    CopySprDToSpr(&ds,(SPRT_DAT *)(&msel_sprt + (uVar5 + (uVar1 & 0xff)) * 0x20));
    iVar3 = iVar3 + -1;
    iVar2 = ds.h * iVar4;
    iVar4 = iVar4 + 1;
    iVar2 = (((ds.h & 0xffff) + local_a4) - iVar2) * 0x10000;
    YVH_CUT((ushort)((uint)iVar2 >> 0x10),(uchar)ds.h,(ushort)local_bc,(ushort)local_b8,local_a8,
            &dsp_v,(uchar *)&dsp_h);
    ds.x = (float)local_ac;
    ds.y = (float)((iVar2 >> 0x10) + (int)(short)dsp_y);
    ds.v = ds.v + (int)dsp_v;
    ds.h = (uint)dsp_h;
    ds.tex1 = 0x161;
    ds.alpha = (byte)local_b4;
    DispSprD(&ds);
  } while (iVar4 < 3);
  return;
}
