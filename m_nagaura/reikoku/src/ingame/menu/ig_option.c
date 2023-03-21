// STATUS: NOT STARTED

typedef struct {
	u_short snd_vol;
	u_char mode;
	u_char vive_flg;
	u_char fade_alp[3];
} MENU_OPT;

typedef struct {
	short int x;
	short int y;
} OPT_CSR_POS;

static MENU_OPT menu_opt;
static FLSH_CORE flsh[2];

void NewgameMenuOptionInit() {
  memset(&menu_opt,0,8);
  return;
}

void LoadgameMenuOptionInit() {
  memset(&menu_opt,0,8);
  return;
}

void StartOptionModeInit(u_char mode) {
  if (mode == '\0') {
    ig_menu_wrk.csr[1] = '\0';
    menu_opt.mode = '\a';
  }
  yw2d.pad_lock = mode == '\0';
  menu_opt.vive_flg = '\0';
  menu_opt.fade_alp[2] = 0;
  menu_opt.snd_vol = opt_wrk.bgm_vol;
  menu_opt.fade_alp[1] = 0;
  menu_opt.fade_alp[0] = 0;
  return;
}

void IngameMenuOption() {
  char cVar1;
  
  cVar1 = MenuOptionPad(ig_menu_wrk.csr + 1,&menu_opt.mode);
  if (cVar1 != '\0') {
    if (spd_mnu.sopt == '\0') {
      yw2d.out_mode_cnt = 0xb;
    }
    else {
      yw2d.menu_io_cnt = 10;
      yw2d.menu_io_flg = 2;
    }
  }
  MenuOptionDisp(ig_menu_wrk.csr[1],menu_opt.mode,spd_mnu.sopt);
  return;
}

char MenuOptionPad(u_char *csr, u_char *mode) {
  bool bVar1;
  uchar uVar2;
  uchar uVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  
  switch(*mode) {
  case '\0':
    if (yw2d.pad_lock != 0) {
      return '\0';
    }
    if (*key_now[4] == 1) {
      *mode = '\a';
      SetKeyType();
      iVar9 = 3;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      *mode = '\a';
      SetKeyType();
      iVar9 = 1;
    }
    else if (((*key_now[2] == 1) ||
             (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
              (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)))) ||
            ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
             (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))) {
      bVar1 = opt_wrk.key_type == '\0';
      opt_wrk.key_type = opt_wrk.key_type + 0xff;
      if (bVar1) {
        opt_wrk.key_type = '\a';
      }
      iVar9 = 0;
    }
    else {
      if (((*key_now[3] != 1) &&
          (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
         (sVar5 = Ana2PadDirCnt('\x01'), sVar5 != 1)) {
        uVar6 = Ana2PadDirCnt('\x01');
        if (uVar6 < 0x1a) {
          return '\0';
        }
        sVar5 = Ana2PadDirCnt('\x01');
        if ((int)sVar5 % 5 != 1) {
          return '\0';
        }
      }
      bVar1 = 6 < opt_wrk.key_type;
      opt_wrk.key_type = opt_wrk.key_type + '\x01';
      if (bVar1) {
        opt_wrk.key_type = '\0';
      }
      iVar9 = 0;
    }
    goto joined_r0x001f65e8;
  case '\x01':
    if (yw2d.pad_lock != 0) {
      return '\0';
    }
    if (*key_now[4] != 1) {
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        *mode = '\a';
        iVar9 = 1;
      }
      else if (((*key_now[2] == 1) ||
               (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)))) ||
              ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
               (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))) {
        bVar1 = opt_wrk.pad_move == '\0';
        opt_wrk.pad_move = opt_wrk.pad_move + 0xff;
        if (bVar1) {
          opt_wrk.pad_move = '\x01';
        }
        if (opt_wrk.pad_move == '\0') {
          menu_opt.vive_flg = '<';
        }
        else {
          menu_opt.vive_flg = '\0';
        }
        iVar9 = 0;
      }
      else {
        if (((*key_now[3] != 1) &&
            (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
           (sVar5 = Ana2PadDirCnt('\x01'), sVar5 != 1)) {
          uVar6 = Ana2PadDirCnt('\x01');
          if (uVar6 < 0x1a) {
            return '\0';
          }
          sVar5 = Ana2PadDirCnt('\x01');
          if ((int)sVar5 % 5 != 1) {
            return '\0';
          }
        }
        opt_wrk.pad_move = opt_wrk.pad_move == '\0';
        if ((bool)opt_wrk.pad_move) {
          menu_opt.vive_flg = '\0';
        }
        else {
          menu_opt.vive_flg = '<';
        }
        iVar9 = 0;
      }
      goto joined_r0x001f65e8;
    }
LAB_001f6dc8:
    *mode = '\a';
    iVar9 = 3;
    if ((ingame_wrk.stts & 0x80) != 0) goto LAB_001f6e38;
    iVar9 = 3;
    goto LAB_001f6de8;
  case '\x02':
    if (yw2d.pad_lock != 0) goto LAB_001f6c9c;
    if (*key_now[4] == 1) {
      *mode = '\a';
      iVar9 = 3;
      if ((ingame_wrk.stts & 0x80) == 0) {
LAB_001f6ad4:
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
LAB_001f6ae0:
      SeStartFix(iVar9,0,0x1000,0x1000,bVar8);
    }
    else {
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        *mode = '\a';
        iVar9 = 1;
        if ((ingame_wrk.stts & 0x80) == 0) goto LAB_001f6ad4;
        bVar8 = 1;
        goto LAB_001f6ae0;
      }
      if ((*key_now[2] == 1) ||
         ((((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
           (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)) ||
          ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
           (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))))) {
        opt_wrk.sound_mode = '\x01' - opt_wrk.sound_mode;
        if ((ingame_wrk.stts & 0x80) == 0) {
          SeStartFix(0,0,0x1000,0x1000,0);
        }
        else {
LAB_001f6c58:
          SeStartFix(0,0,0x1000,0x1000,1);
        }
      }
      else if ((((*key_now[3] == 1) ||
                ((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)))) ||
               (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 1)) ||
              ((uVar6 = Ana2PadDirCnt('\x01'), 0x19 < uVar6 &&
               (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 == 1)))) {
        opt_wrk.sound_mode = '\x01' - opt_wrk.sound_mode;
        if ((ingame_wrk.stts & 0x80) != 0) goto LAB_001f6c58;
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
LAB_001f6c9c:
    SeSetSteMono(opt_wrk.sound_mode);
    cVar4 = '\0';
    break;
  case '\x03':
    if (yw2d.pad_lock != 0) {
      return '\0';
    }
    if (*key_now[4] == 1) goto LAB_001f6dc8;
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      if ((*key_now[2] == 0) && (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 0)) {
        if ((*key_now[3] == 0) && (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 0))
        goto switchD_001f6388_caseD_5;
        uVar7 = (ushort)menu_opt.snd_vol + 0x40;
        if (0xffe < uVar7) {
          uVar7 = 0xfff;
        }
        menu_opt.snd_vol = (short)uVar7;
      }
      else if ((int)((ushort)menu_opt.snd_vol - 0x40) < 1) {
        menu_opt.snd_vol = 0;
      }
      else {
        menu_opt.snd_vol = (short)((ushort)menu_opt.snd_vol - 0x40);
      }
      SeSetMVol(menu_opt.snd_vol);
      opt_wrk.bgm_vol = menu_opt.snd_vol;
      goto switchD_001f6388_caseD_5;
    }
    *mode = '\a';
    iVar9 = 1;
joined_r0x001f65e8:
    if ((ingame_wrk.stts & 0x80) == 0) {
LAB_001f6de8:
      SeStartFix(iVar9,0,0x1000,0x1000,0);
      cVar4 = '\0';
    }
    else {
LAB_001f6e38:
      SeStartFix(iVar9,0,0x1000,0x1000,1);
      cVar4 = '\0';
    }
    break;
  case '\x04':
    if (yw2d.pad_lock != 0) {
      return '\0';
    }
    if (*key_now[4] == 1) goto LAB_001f6dc8;
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      return '\0';
    }
    *mode = '\a';
    iVar9 = 1;
    if ((ingame_wrk.stts & 0x80) == 0) {
      SeStartFix(1,0,0x1000,0x1000,0);
      goto switchD_001f6388_caseD_5;
    }
    goto LAB_001f6e38;
  default:
switchD_001f6388_caseD_5:
    cVar4 = '\0';
    break;
  case '\a':
    if (yw2d.pad_lock != 0) {
      return '\0';
    }
    if (*key_now[4] == 1) {
      iVar9 = 3;
    }
    else {
      if (*key_now[6] == 1) {
        uVar2 = *csr;
      }
      else {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
LAB_001f6510:
            uVar2 = *csr;
LAB_001f6514:
            uVar3 = uVar2 + 0xff;
            if (uVar2 == '\0') {
              uVar3 = '\x05';
            }
            *csr = uVar3;
          }
          else {
            if ((0x19 < (ushort)*key_now[0]) && ((uint)(ushort)*key_now[0] % 5 == 1)) {
              uVar2 = *csr;
              goto LAB_001f6514;
            }
            sVar5 = Ana2PadDirCnt('\0');
            if (sVar5 == 1) {
              uVar2 = *csr;
              goto LAB_001f6514;
            }
            uVar6 = Ana2PadDirCnt('\0');
            if ((0x19 < uVar6) && (sVar5 = Ana2PadDirCnt('\0'), (int)sVar5 % 5 == 1))
            goto LAB_001f6510;
            if (*key_now[1] == 1) {
LAB_001f65c0:
              bVar8 = *csr;
            }
            else if (((ushort)*key_now[1] < 0x1a) || ((uint)(ushort)*key_now[1] % 5 != 1)) {
              sVar5 = Ana2PadDirCnt('\x02');
              if (sVar5 != 1) {
                uVar6 = Ana2PadDirCnt('\x02');
                if (uVar6 < 0x1a) {
                  return '\0';
                }
                sVar5 = Ana2PadDirCnt('\x02');
                if ((int)sVar5 % 5 != 1) {
                  return '\0';
                }
                goto LAB_001f65c0;
              }
              bVar8 = *csr;
            }
            else {
              bVar8 = *csr;
            }
            if (bVar8 < 5) {
              *csr = bVar8 + 1;
            }
            else {
              *csr = '\0';
            }
          }
          iVar9 = 0;
          goto joined_r0x001f65e8;
        }
        uVar2 = *csr;
      }
      if (uVar2 != '\x05') {
        if ((ingame_wrk.stts & 0x80) == 0) {
          SeStartFix(1,0,0x1000,0x1000,0);
          uVar2 = *csr;
        }
        else {
          SeStartFix(1,0,0x1000,0x1000,1);
          uVar2 = *csr;
        }
        *mode = uVar2;
        goto switchD_001f6388_caseD_5;
      }
      iVar9 = 1;
    }
    if ((ingame_wrk.stts & 0x80) == 0) {
      SeStartFix(iVar9,0,0x1000,0x1000,0);
      cVar4 = '\x01';
    }
    else {
      SeStartFix(iVar9,0,0x1000,0x1000,1);
      cVar4 = '\x01';
    }
  }
  return cVar4;
}

static void MenuOptionDisp(u_char csr, u_char mode, u_char io) {
  OptionCntInit();
  if (io == '\0') {
    OptionModeInOut();
  }
  DspMenuTitle(0,0,yw2d.io_a[1],'2','\t');
  DspOptCtrl(csr,mode,(byte)(int)yw2d.io_a[4],1);
  if (io == '\0') {
    OptionModeInOut2();
  }
  OptionCntRenew();
  return;
}

static void OptionCntInit() {
  return;
}

static void OptionCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void OptionModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
    yw2d.io_a[2] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    yw2d.io_a[3] = yw2d.io_a[2];
    yw2d.io_a[4] = yw2d.io_a[1];
    PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.out_mode_cnt == 0) {
    iVar1 = 0;
    do {
      XYAdefaultYW((uchar)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
  }
  else {
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = (float)(((ushort)yw2d.out_mode_cnt - 1) * 0x80) / 10.0;
    yw2d.io_a[2] = (1.0 - (float)((ushort)yw2d.out_mode_cnt - 1) / 10.0) * 128.0;
    yw2d.io_a[3] = yw2d.io_a[2];
    yw2d.io_a[4] = yw2d.io_a[1];
    PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    yw2d.pad_lock = 1;
    if (yw2d.out_mode_cnt == 1) {
      ig_menu_wrk.mode = '\a';
      IngameMenuModeSlctDispInit();
      yw2d.pad_lock = 0;
      yw2d.menu_io_flg = 0;
    }
  }
  return;
}

static void OptionModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  if (yw2d.out_mode_cnt != 0) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  return;
}

void DspOptCtrl(u_char csr, u_char mode, u_char alpha, u_char ttl) {
  byte mode_00;
  
  if (mode == 4) {
    DspAlpCtrl(menu_opt.fade_alp,2,alpha);
    DspAlpCtrl(menu_opt.fade_alp + 1,2,alpha);
    DspAlpCtrl(menu_opt.fade_alp + 2,3,alpha);
  }
  else {
    if (mode < 5) {
      if (mode != 0) goto LAB_001f7380;
      DspAlpCtrl(menu_opt.fade_alp,2,alpha);
      mode_00 = 3;
    }
    else {
      if (mode != 7) goto LAB_001f7380;
      if (yw2d.pad_lock == 0) {
        DspAlpCtrl(menu_opt.fade_alp,3,alpha);
        mode_00 = 2;
      }
      else {
        DspAlpCtrl(menu_opt.fade_alp,1,alpha);
        mode_00 = 2;
      }
    }
    DspAlpCtrl(menu_opt.fade_alp + 1,mode_00,alpha);
    DspAlpCtrl(menu_opt.fade_alp + 2,2,alpha);
  }
LAB_001f7380:
  DspOptMain(csr,mode,menu_opt.fade_alp[0],menu_opt.fade_alp[1],menu_opt.fade_alp[2],ttl);
  return;
}

static void DspAlpCtrl(u_char *src, u_char mode, u_char alpha) {
  ulong uVar1;
  
  if (mode == 1) {
LAB_001f7424:
    *src = (byte)((long)(char)alpha & 0xffU);
    return;
  }
  if (1 < mode) {
    if (mode == 2) {
      uVar1 = (ulong)(int)(*src - 0xc);
      if ((long)uVar1 < 1) goto LAB_001f73f4;
    }
    else {
      if (mode != 3) {
        return;
      }
      uVar1 = (ulong)(int)(*src + 0xc);
      if (((long)(char)alpha & 0xffU) <= uVar1) goto LAB_001f7424;
    }
    *src = (byte)uVar1;
    return;
  }
  if (mode != 0) {
    return;
  }
LAB_001f73f4:
  *src = 0;
  return;
}

static void DspOptMain(u_char csr, u_char mode, u_char alp0, u_char alp1, u_char alp2, u_char ttl) {
  DspPadType(alp1,ttl);
  DspLgtScrn(alp2,ttl);
  DspBigFlame1(alp0,'\0');
  DspSmlFlame1(alp0,'\0');
  DspBigFlame2(alp0,'\0');
  DspSmlFlame2(alp0,'\0');
  DspOptCsr(csr,mode,alp0);
  DspBigFlame1(alp0,'\x01');
  DspSmlFlame1(alp0,'\x01');
  DspBigFlame2(alp0,'\x01');
  DspSmlFlame2(alp0,'\x01');
  DspMsgWin(csr,alp0);
  DispCaption(1,alp0);
  return;
}

static void DspOptCsr(u_char csr, u_char mode, u_char alpha) {
	OPT_CSR_POS csr_pos[12];
	int rgb1;
	int rgb2;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  byte alp;
  uint uVar4;
  OPT_CSR_POS csr_pos [12];
  int rgb1;
  int rgb2;
  
  uVar4 = (int)(char)csr & 0xff;
  puVar1 = (undefined *)((int)&csr_pos[1].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d00 >> (7 - uVar2) * 8;
  csr_pos._0_8_ = DAT_00350d00;
  puVar1 = (undefined *)((int)&csr_pos[3].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d08 >> (7 - uVar2) * 8;
  csr_pos._8_8_ = DAT_00350d08;
  puVar1 = (undefined *)((int)&csr_pos[5].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d10 >> (7 - uVar2) * 8;
  csr_pos._16_8_ = DAT_00350d10;
  puVar1 = (undefined *)((int)&csr_pos[7].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d18 >> (7 - uVar2) * 8;
  csr_pos._24_8_ = DAT_00350d18;
  puVar1 = (undefined *)((int)&csr_pos[9].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d20 >> (7 - uVar2) * 8;
  csr_pos._32_8_ = DAT_00350d20;
  puVar1 = (undefined *)((int)&csr_pos[0xb].y + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_00350d28 >> (7 - uVar2) * 8;
  csr_pos._40_8_ = DAT_00350d28;
  if (mode == '\a') {
    FlashStarYW(flsh,'@','`','Z','\0');
    CLRtoRGB(&rgb1,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
    FlashStarYW(flsh + 1,'@','`','Z',0xff);
    CLRtoRGB(&rgb2,flsh[1].alpha,flsh[1].alpha,flsh[1].alpha);
  }
  else {
    FlashStarYW(flsh,'@','`','Z',0xff);
    CLRtoRGB(&rgb1,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
    FlashStarYW(flsh + 1,'@','`','Z','\0');
    CLRtoRGB(&rgb2,flsh[1].alpha,flsh[1].alpha,flsh[1].alpha);
  }
  alp = (byte)((int)(char)alpha & 0xffU);
  CmnCursol(csr_pos[uVar4].x,csr_pos[uVar4].y,0xd4,0x20,(float)(uint)flsh[0].alpha,alp,0x28000);
  if ((byte)(mode - 1) < 2) {
    CmnCursol(csr_pos[uVar4 + 6].x,csr_pos[uVar4 + 6].y,0xc2,0x20,(float)(uint)flsh[1].alpha,alp,
              0x28000);
  }
  if ((byte)(mode - 1) < 3) {
    PutSpriteYW(0x236,0x237,(float)(int)(short)csr_pos[uVar4 + 6].x,
                (float)(int)(short)csr_pos[uVar4 + 6].y,0.0,rgb2,(float)((int)(char)alpha & 0xffU),
                1.0,1.0,0,0x14000,1,1,0);
  }
  return;
}

static void DspBigFlame1(u_char alpha, u_char str_mode) {
  byte alpha_00;
  uint uVar1;
  
  uVar1 = (int)(char)alpha & 0xff;
  if (uVar1 != 0) {
    alpha_00 = (byte)uVar1;
    if (str_mode == '\0') {
      CmnWindow(0xf,0,0,alpha_00,0x80);
      PutSpriteYW(0x232,0x232,0.0,0.0,0.0,0x808080,(float)uVar1,1.0,1.0,0,0xff,1,0,0);
    }
    else {
      PutStringYW(0x1c,0,0xeb,0x65,0x808080,alpha_00,0x23000,1);
      PutStringYW(0x1c,opt_wrk.key_type + 7,0x1d0,0x65,0x808080,alpha_00,0x23000,1);
      PutStringYW(0x1c,1,0xeb,0x85,0x808080,alpha_00,0x23000,1);
      if (opt_wrk.pad_move == '\0') {
        PutStringYW(0x1c,0xf,0x1d0,0x85,0x808080,alpha_00,0x23000,1);
      }
      else {
        PutStringYW(0x1c,0x10,0x1d0,0x85,0x808080,alpha_00,0x23000,1);
      }
      if (menu_opt.vive_flg == '\0') {
        VibrateRequest2(0,0);
      }
      else {
        VibrateRequest2(0,0x78);
      }
      if (menu_opt.vive_flg != '\0') {
        menu_opt.vive_flg = menu_opt.vive_flg + 0xff;
      }
    }
  }
  return;
}

static void DspBigFlame2(u_char alpha, u_char str_mode) {
	DISP_SPRT ds;
	
  int iVar1;
  uint uVar2;
  float scl_x;
  float alp;
  DISP_SPRT ds;
  
  uVar2 = (int)(char)alpha & 0xff;
  if (uVar2 != 0) {
    ds.alpha = (byte)uVar2;
    if (str_mode == '\0') {
      alp = (float)uVar2;
      CmnWindow(0xf,0,0x4e,ds.alpha,0x80);
      scl_x = 1.0;
      PutSpriteYW(0x233,0x233,0.0,0.0,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x230,0x230,0.0,0.0,0.0,0x808080,alp,scl_x,scl_x,0,0xff,1,0,0);
      iVar1 = (int)(short)(int)((float)((uint)(ushort)menu_opt.snd_vol * 0xa2) / DAT_00355fa0);
      CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0032de50);
      ds.w = iVar1 + 1;
      ds.tex1 = 0x161;
      DispSprD(&ds);
      PutSpriteYW(0x231,0x231,(float)iVar1,0.0,0.0,0x808080,alp,scl_x,scl_x,0,0xff,1,0,0);
    }
    else {
      PutStringYW(0x1c,2,0xeb,0xb3,0x808080,ds.alpha,0x23000,1);
      PutStringYW(0x1c,opt_wrk.sound_mode + 0x11,0x1d0,0xb3,0x808080,ds.alpha,0x23000,1);
      PutStringYW(0x1c,3,0xeb,0xd3,0x808080,ds.alpha,0x23000,1);
    }
  }
  return;
}

static void DspSmlFlame1(u_char alpha, u_char str_mode) {
  uint uVar1;
  
  uVar1 = (int)(char)alpha & 0xff;
  if (uVar1 != 0) {
    if (str_mode == '\0') {
      CmnWindow(0x10,0,0,(byte)uVar1,0x80);
      PutSpriteYW(0x234,0x234,0.0,0.0,0.0,0x808080,(float)uVar1,DAT_00355fa4,DAT_00355fa8,0,0xff,1,0
                  ,0);
    }
    else {
      PutStringYW(0x1c,4,0xeb,0x102,0x808080,(byte)uVar1,0x23000,1);
    }
  }
  return;
}

static void DspSmlFlame2(u_char alpha, u_char str_mode) {
  uint uVar1;
  
  uVar1 = (int)(char)alpha & 0xff;
  if (uVar1 != 0) {
    if (str_mode == '\0') {
      CmnWindow(0x10,0,0x2e,(byte)uVar1,0x80);
      PutSpriteYW(0x235,0x235,0.0,0.0,0.0,0x808080,(float)uVar1,1.0,1.0,0,0xff,1,0,0);
    }
    else {
      PutStringYW(0x1c,6,0xeb,0x130,0x808080,(byte)uVar1,0x23000,1);
    }
  }
  return;
}

static void DspMsgWin(u_char csr, u_char alpha) {
  if (alpha != '\0') {
    DrawMessageBox(0x2d000,26.0,340.0,588.0,80.0,alpha);
    PutStringYW(0x1d,csr,0x30,0x164,0x808080,alpha,0x23000,0);
    return;
  }
  return;
}

void StepLinesSimpleDraw(short int *p_stp[2], u_char r, u_char g, u_char b, u_char alpha) {
	int i;
	
  ushort uVar1;
  ushort (*pauVar2) [2];
  int iVar3;
  
  iVar3 = 0;
  if ((*p_stp)[0] != 0x7fff) {
    uVar1 = p_stp[1][0];
    pauVar2 = p_stp;
    while (uVar1 != 0x7fff) {
      if (pauVar2[1][0] == 0x7ff0) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = iVar3 + 1;
        SetLine(0x2d000,(float)((short)(*pauVar2)[0] + -0x140),(float)((short)(*pauVar2)[1] + -0xe0)
                ,(float)((short)pauVar2[1][0] + -0x140),(float)((short)pauVar2[1][1] + -0xe0),r,g,b,
                alpha);
      }
      pauVar2 = p_stp[iVar3];
      if ((*pauVar2)[0] == 0x7fff) {
        return;
      }
      uVar1 = pauVar2[1][0];
    }
  }
  return;
}

void SimpleHorLine(short int *p_stp[3], u_char r, u_char g, u_char b, u_char alpha, int typ) {
	int i;
	
  ushort uVar1;
  ushort (*pauVar2) [3];
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  uVar1 = (*p_stp)[0];
  pauVar2 = p_stp;
  do {
    if (uVar1 == 0x7fff) {
      return;
    }
    if ((typ == 1) || (typ == 3)) {
      if (iVar3 != 6) {
        uVar1 = (*pauVar2)[0];
        goto LAB_001f7fe4;
      }
      fVar4 = (float)((short)p_stp[6][1] + -0xcc);
      SetLine(0x1e000,(float)((short)p_stp[6][0] + -0x140),fVar4,
              (float)((int)(short)p_stp[6][0] + (int)(short)p_stp[6][2] + -0x140),fVar4,r,g,b,alpha)
      ;
      fVar4 = (float)((short)p_stp[6][1] + -0xcb);
      SetLine(0x1e000,(float)((short)p_stp[6][0] + -0x140),fVar4,
              (float)((int)(short)p_stp[6][0] + (int)(short)p_stp[6][2] + -0x140),fVar4,r,g,b,alpha)
      ;
    }
    else {
      uVar1 = (*pauVar2)[0];
LAB_001f7fe4:
      fVar4 = (float)((short)(*pauVar2)[1] + -0xe0);
      SetLine(0x1e000,(float)((short)uVar1 + -0x140),fVar4,
              (float)((int)(short)uVar1 + (int)(short)(*pauVar2)[2] + -0x140),fVar4,r,g,b,alpha);
      fVar4 = (float)((short)(*pauVar2)[1] + -0xdf);
      SetLine(0x1e000,(float)((short)(*pauVar2)[0] + -0x140),fVar4,
              (float)((int)(short)(*pauVar2)[0] + (int)(short)(*pauVar2)[2] + -0x140),fVar4,r,g,b,
              alpha);
    }
    pauVar2 = pauVar2[1];
    uVar1 = (*pauVar2)[0];
    iVar3 = iVar3 + 1;
  } while( true );
}

static void DspPadType(u_char alpha, u_char ttl) {
	int i;
	int typ;
	int rev;
	int mov;
	SPRT_DAT ssd;
	DISP_SPRT ds;
	short int pnt_stp3[12][3];
	short int pnt_stp4[62][2];
	short int pnt_stp5[62][2];
	short int pnt_stp6[5][2];
	short int p_idx4[18][2];
	short int p_idx5[18][2];
	short int f_idx[3][18];
	short int f_idx2[4][18];
	short int f_col[4][18];
	
  undefined *puVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ulong *puVar5;
  uint *puVar6;
  bool bVar7;
  int iVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  uint uVar24;
  undefined8 uVar25;
  byte alp;
  uint uVar26;
  float fVar27;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  ushort pnt_stp3 [12] [3];
  ushort pnt_stp4 [62] [2];
  ushort pnt_stp5 [62] [2];
  ushort pnt_stp6 [5] [2];
  ushort p_idx4 [18] [2];
  ushort p_idx5 [18] [2];
  ushort f_idx [3] [18];
  ushort f_idx2 [4] [18];
  ushort f_col [4] [18];
  int rev;
  undefined8 *local_bc;
  
  puVar13 = &DAT_00350d30;
  uVar26 = (int)(char)alpha & 0xff;
  local_bc = (undefined8 *)p_idx4;
  puVar5 = (ulong *)pnt_stp3;
  do {
    puVar9 = puVar5;
    uVar16 = puVar13[1];
    uVar17 = puVar13[2];
    uVar18 = puVar13[3];
    *puVar9 = *puVar13;
    puVar9[1] = uVar16;
    puVar9[2] = uVar17;
    puVar9[3] = uVar18;
    puVar13 = puVar13 + 4;
    puVar5 = puVar9 + 4;
  } while (puVar13 != (ulong *)&UNK_00350d70);
  puVar23 = (ulong *)p_idx5;
  uVar24 = (int)puVar9 + 0x27U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x27U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00350d70 >> (7 - uVar24) * 8;
  puVar9[4] = _UNK_00350d70;
  puVar5 = (ulong *)pnt_stp4;
  puVar13 = &DAT_00350d78;
  do {
    puVar14 = puVar13;
    puVar9 = puVar5;
    uVar18 = puVar14[1];
    uVar16 = puVar14[2];
    uVar17 = puVar14[3];
    *puVar9 = *puVar14;
    puVar9[1] = uVar18;
    puVar9[2] = uVar16;
    puVar9[3] = uVar17;
    puVar5 = puVar9 + 4;
    puVar13 = puVar14 + 4;
  } while (puVar14 + 4 != (ulong *)&UNK_00350e58);
  uVar16 = puVar14[5];
  uVar17 = puVar14[6];
  uVar24 = (int)puVar9 + 0x27U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x27U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00350e58 >> (7 - uVar24) * 8;
  puVar9[4] = _UNK_00350e58;
  uVar24 = (int)puVar9 + 0x2fU & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x2fU) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar16 >> (7 - uVar24) * 8;
  puVar9[5] = uVar16;
  uVar24 = (int)puVar9 + 0x37U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x37U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar17 >> (7 - uVar24) * 8;
  puVar9[6] = uVar17;
  puVar5 = (ulong *)pnt_stp5;
  puVar13 = &DAT_00350e70;
  do {
    puVar14 = puVar13;
    puVar9 = puVar5;
    uVar16 = puVar14[1];
    uVar17 = puVar14[2];
    uVar18 = puVar14[3];
    *puVar9 = *puVar14;
    puVar9[1] = uVar16;
    puVar9[2] = uVar17;
    puVar9[3] = uVar18;
    puVar5 = puVar9 + 4;
    puVar13 = puVar14 + 4;
  } while (puVar14 + 4 != (ulong *)&UNK_00350f50);
  puVar15 = &DAT_00350f80;
  uVar16 = puVar14[5];
  uVar17 = puVar14[6];
  uVar24 = (int)puVar9 + 0x27U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x27U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00350f50 >> (7 - uVar24) * 8;
  puVar9[4] = _UNK_00350f50;
  uVar24 = (int)puVar9 + 0x2fU & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x2fU) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar16 >> (7 - uVar24) * 8;
  puVar9[5] = uVar16;
  uVar24 = (int)puVar9 + 0x37U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x37U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar17 >> (7 - uVar24) * 8;
  puVar9[6] = uVar17;
  puVar11 = local_bc;
  puVar1 = (undefined *)((int)pnt_stp6[1] + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | DAT_00350f68 >> (7 - uVar24) * 8;
  pnt_stp6._0_8_ = DAT_00350f68;
  puVar1 = (undefined *)((int)pnt_stp6[3] + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | DAT_00350f70 >> (7 - uVar24) * 8;
  pnt_stp6._8_8_ = DAT_00350f70;
  puVar1 = (undefined *)((int)pnt_stp6[4] + 3);
  uVar24 = (uint)puVar1 & 3;
  puVar6 = (uint *)(puVar1 + -uVar24);
  *puVar6 = *puVar6 & -1 << (uVar24 + 1) * 8 | (uint)DAT_00350f78 >> (3 - uVar24) * 8;
  pnt_stp6[4] = DAT_00350f78;
  do {
    puVar10 = puVar11;
    uVar21 = puVar15[1];
    uVar22 = puVar15[2];
    uVar25 = puVar15[3];
    *puVar10 = *puVar15;
    puVar10[1] = uVar21;
    puVar10[2] = uVar22;
    puVar10[3] = uVar25;
    uVar16 = _UNK_00350fc0;
    puVar15 = puVar15 + 4;
    puVar11 = puVar10 + 4;
  } while (puVar15 != (undefined8 *)&UNK_00350fc0);
  puVar13 = &DAT_00350fc8;
  uVar24 = (int)puVar10 + 0x27U & 7;
  puVar5 = (ulong *)(((int)puVar10 + 0x27U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00350fc0 >> (7 - uVar24) * 8;
  uVar24 = (uint)puVar11 & 7;
  *(ulong *)((int)puVar11 - uVar24) =
       uVar16 << uVar24 * 8 |
       *(ulong *)((int)puVar11 - uVar24) & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar5 = puVar23;
  do {
    puVar9 = puVar5;
    uVar16 = puVar13[1];
    uVar17 = puVar13[2];
    uVar18 = puVar13[3];
    *puVar9 = *puVar13;
    puVar9[1] = uVar16;
    puVar9[2] = uVar17;
    puVar9[3] = uVar18;
    puVar13 = puVar13 + 4;
    puVar5 = puVar9 + 4;
  } while (puVar13 != (ulong *)&UNK_00351008);
  uVar24 = (int)puVar9 + 0x27U & 7;
  puVar5 = (ulong *)(((int)puVar9 + 0x27U) - uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00351008 >> (7 - uVar24) * 8;
  puVar9[4] = _UNK_00351008;
  puVar19 = (ushort *)f_idx;
  puVar5 = &DAT_00351010;
  do {
    puVar13 = puVar5;
    puVar20 = puVar19;
    uVar16 = puVar13[1];
    uVar17 = puVar13[2];
    uVar18 = puVar13[3];
    *(ulong *)puVar20 = *puVar13;
    *(ulong *)(puVar20 + 4) = uVar16;
    *(ulong *)(puVar20 + 8) = uVar17;
    *(ulong *)(puVar20 + 0xc) = uVar18;
    puVar19 = puVar20 + 0x10;
    puVar5 = puVar13 + 4;
  } while (puVar13 + 4 != (ulong *)&UNK_00351070);
  uVar24 = *(uint *)(puVar13 + 5);
  uVar4 = (uint)(undefined *)((int)puVar20 + 0x27U) & 7;
  puVar5 = (ulong *)((undefined *)((int)puVar20 + 0x27U) + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | _UNK_00351070 >> (7 - uVar4) * 8;
  *(ulong *)(puVar20 + 0x10) = _UNK_00351070;
  uVar4 = (uint)(undefined *)((int)puVar20 + 0x2bU) & 3;
  puVar6 = (uint *)((undefined *)((int)puVar20 + 0x2bU) + -uVar4);
  *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | uVar24 >> (3 - uVar4) * 8;
  *(uint *)(puVar20 + 0x14) = uVar24;
  puVar19 = (ushort *)f_idx2;
  puVar5 = &DAT_00351080;
  do {
    puVar13 = puVar5;
    puVar20 = puVar19;
    uVar16 = puVar13[1];
    uVar17 = puVar13[2];
    uVar18 = puVar13[3];
    *(ulong *)puVar20 = *puVar13;
    *(ulong *)(puVar20 + 4) = uVar16;
    *(ulong *)(puVar20 + 8) = uVar17;
    *(ulong *)(puVar20 + 0xc) = uVar18;
    puVar19 = puVar20 + 0x10;
    puVar5 = puVar13 + 4;
  } while (puVar13 + 4 != (ulong *)&UNK_00351100);
  uVar16 = puVar13[5];
  uVar24 = (uint)(undefined *)((int)puVar20 + 0x27U) & 7;
  puVar5 = (ulong *)((undefined *)((int)puVar20 + 0x27U) + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00351100 >> (7 - uVar24) * 8;
  *(ulong *)(puVar20 + 0x10) = _UNK_00351100;
  uVar24 = (uint)(undefined *)((int)puVar20 + 0x2fU) & 7;
  puVar5 = (ulong *)((undefined *)((int)puVar20 + 0x2fU) + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar16 >> (7 - uVar24) * 8;
  *(ulong *)(puVar20 + 0x14) = uVar16;
  puVar19 = (ushort *)f_col;
  puVar5 = &DAT_00351110;
  do {
    puVar13 = puVar5;
    puVar20 = puVar19;
    uVar16 = puVar13[1];
    uVar17 = puVar13[2];
    uVar18 = puVar13[3];
    *(ulong *)puVar20 = *puVar13;
    *(ulong *)(puVar20 + 4) = uVar16;
    *(ulong *)(puVar20 + 8) = uVar17;
    *(ulong *)(puVar20 + 0xc) = uVar18;
    puVar19 = puVar20 + 0x10;
    puVar5 = puVar13 + 4;
  } while (puVar13 + 4 != (ulong *)&UNK_00351190);
  uVar16 = puVar13[5];
  uVar24 = (uint)(undefined *)((int)puVar20 + 0x27U) & 7;
  puVar5 = (ulong *)((undefined *)((int)puVar20 + 0x27U) + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | _UNK_00351190 >> (7 - uVar24) * 8;
  *(ulong *)(puVar20 + 0x10) = _UNK_00351190;
  uVar24 = (uint)(undefined *)((int)puVar20 + 0x2fU) & 7;
  puVar5 = (ulong *)((undefined *)((int)puVar20 + 0x2fU) + -uVar24);
  *puVar5 = *puVar5 & -1L << (uVar24 + 1) * 8 | uVar16 >> (7 - uVar24) * 8;
  *(ulong *)(puVar20 + 0x14) = uVar16;
  if (uVar26 == 0) {
    return;
  }
  alp = (byte)uVar26;
  if (ttl != '\0') {
    CmnWindow(0,0,0,alp,0x80);
    PutStringYW(0x1c,0,0x112,0x25,0x808080,alp,0x23000,0);
  }
  if (opt_wrk.key_type == '\0') {
    uVar24 = 0;
  }
  else {
    if (opt_wrk.key_type != '\x01') {
      if (opt_wrk.key_type == '\x02') {
        uVar24 = 2;
      }
      else {
        if (opt_wrk.key_type != '\x03') {
          if (opt_wrk.key_type == '\x04') {
            uVar24 = 0;
            bVar7 = false;
            rev = 1;
          }
          else if (opt_wrk.key_type == '\x05') {
            uVar24 = 1;
            bVar7 = false;
            rev = 1;
          }
          else if (opt_wrk.key_type == '\x06') {
            uVar24 = 2;
            bVar7 = true;
            rev = 1;
          }
          else if (opt_wrk.key_type == '\a') {
            uVar24 = 3;
            bVar7 = true;
            rev = 1;
          }
          else {
            rev = 0;
            uVar24 = 0;
            bVar7 = false;
          }
          goto LAB_001f8908;
        }
        uVar24 = 3;
      }
      bVar7 = true;
      rev = 0;
      goto LAB_001f8908;
    }
    uVar24 = 1;
  }
  bVar7 = false;
  rev = 0;
LAB_001f8908:
  ssd.tex0 = DAT_0032e2d0;
  ssd._8_8_ = DAT_0032e2d8;
  ssd._16_8_ = DAT_0032e2e0;
  ssd.pri = (int)DAT_0032e2e8;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e2e8 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.tex0 = DAT_0032e2f0;
  ssd._8_8_ = DAT_0032e2f8;
  ssd._16_8_ = DAT_0032e300;
  ssd.pri = (int)DAT_0032e308;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e308 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  ds.att = ds.att | 2;
  DispSprD(&ds);
  ssd.tex0 = DAT_0032e310;
  ssd._8_8_ = DAT_0032e318;
  ssd._16_8_ = DAT_0032e320;
  ssd.pri = (int)DAT_0032e328;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e328 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  iVar12 = (uVar24 + rev * 4 + 0x256) * 0x20;
  ssd.tex0 = *(ulong *)(&spr_dat + iVar12);
  ssd._8_8_ = *(undefined8 *)(&DAT_00329878 + iVar12);
  ssd._16_8_ = *(undefined8 *)(&DAT_00329880 + iVar12);
  ssd.pri = (int)*(ulong *)(&DAT_00329888 + iVar12);
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = *(ulong *)(&DAT_00329888 + iVar12) & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  PutSpriteYW(0x22a,0x22e,0.0,-82.0,0.0,0x808080,(float)uVar26,1.0,1.0,0,0xff,1,0,0);
  fVar27 = 195.0;
  if (bVar7) {
    fVar27 = 215.0;
  }
  DrawButtonTex(0x2d000,1,600.0,fVar27,alp);
  DrawButtonTex(0x2d000,2,600.0,247.0,alp);
  DrawButtonTex(0x2d000,3,600.0,DAT_00355fac,alp);
  DrawButtonTex(0x2d000,0,600.0,DAT_00355fb0,alp);
  if (uVar24 < 2) {
    StepLinesSimpleDraw(pnt_stp4,0xa6,0xa6,0xa6,alp);
  }
  else {
    StepLinesSimpleDraw(pnt_stp5,0xa6,0xa6,0xa6,alp);
  }
  ssd.tex0 = DAT_0032e250;
  ssd._8_8_ = DAT_0032e258;
  ssd._16_8_ = DAT_0032e260;
  ssd.pri = (int)DAT_0032e268;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e268 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  fVar27 = DAT_00355fb4;
  DispSprD(&ds);
  ssd.tex0 = DAT_0032e270;
  ssd._8_8_ = DAT_0032e278;
  ssd._16_8_ = DAT_0032e280;
  ssd.pri = (int)DAT_0032e288;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e288 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.x = (int)DAT_0032df40;
  ssd.y = (int)((ulong)DAT_0032df40 >> 0x20);
  ssd.tex0 = DAT_0032df30;
  ssd._8_8_ = DAT_0032df38;
  ssd._16_8_ = CONCAT44(ssd.y + 0x5a,ssd.x + 0xe6);
  ssd.pri = (int)DAT_0032df48;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032df48 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.x = (int)DAT_0032df60;
  ssd.y = (int)((ulong)DAT_0032df60 >> 0x20);
  ssd.tex0 = DAT_0032df50;
  ssd._8_8_ = DAT_0032df58;
  ssd._16_8_ = CONCAT44(ssd.y + 0x5a,ssd.x + 0xe6);
  ssd.pri = (int)DAT_0032df68;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032df68 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  CmnWindow(0x28,0,0,alp,0x80);
  ssd.tex0 = DAT_0032e1d0;
  ssd._8_8_ = DAT_0032e1d8;
  ssd._16_8_ = DAT_0032e1e0;
  ssd._24_8_ = DAT_0032e1e8;
  CopySprDToSpr(&ds,&ssd);
  ds.r = 0;
  ds.x = 40.0;
  ds.g = 0;
  ds.b = 0;
  ds.y = fVar27;
  ds.alpha = alp;
  DispSprD(&ds);
  ds.y = fVar27;
  ds.x = 41.0;
  DispSprD(&ds);
  ssd.tex0 = DAT_0032e050;
  ssd._8_8_ = DAT_0032e058;
  ssd._16_8_ = DAT_0032e060;
  ssd.pri = (int)DAT_0032e068;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = DAT_0032e068 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.tex0 = DAT_0032e090;
  ssd._8_8_ = _PTR_DAT_0032e098;
  ssd._16_8_ = DAT_0032e0a0;
  uVar16 = DAT_0032e0a8;
  if (rev == 0) {
    ssd.tex0 = DAT_0032e070;
    ssd._8_8_ = DAT_0032e078;
    ssd._16_8_ = DAT_0032e080;
    uVar16 = DAT_0032e088;
  }
  ssd.pri = (int)uVar16;
  ssd._24_5_ = CONCAT14(alp,ssd.pri);
  ssd._24_8_ = uVar16 & 0xffffff0000000000 | (ulong)ssd._24_5_;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  puVar19 = p_idx5 + 1;
  iVar12 = 0x11;
  puVar20 = (ushort *)((int)f_idx2 + uVar24 * 0x12 * 2);
  do {
    iVar8 = (short)*puVar20 * 0x20;
    ssd.tex0 = *(ulong *)(&spr_dat + iVar8);
    ssd._8_8_ = *(undefined8 *)(&DAT_00329878 + iVar8);
    if (uVar24 < 2) {
      sVar2 = *(short *)local_bc;
      uVar3 = puVar19[-0x28];
    }
    else {
      sVar2 = *(short *)puVar23;
      uVar3 = *puVar19;
    }
    ssd._16_8_ = CONCAT44((int)(short)uVar3,(int)sVar2);
    ssd.pri = (int)*(ulong *)(&DAT_00329888 + iVar8);
    ssd._24_5_ = CONCAT14(alp,ssd.pri);
    ssd._24_8_ = *(ulong *)(&DAT_00329888 + iVar8) & 0xffffff0000000000 | (ulong)ssd._24_5_;
    puVar23 = (ulong *)((int)puVar23 + 4);
    CopySprDToSpr(&ds,&ssd);
    puVar19 = puVar19 + 2;
    local_bc = (undefined8 *)((int)local_bc + 4);
    DispSprD(&ds);
    iVar12 = iVar12 + -1;
    puVar20 = puVar20 + 1;
  } while (-1 < iVar12);
  DispCaption(7,alp);
  return;
}

static void DspLgtScrn(u_char alpha, u_char ttl) {
  byte alp;
  uint uVar1;
  float pos_x;
  float alp_00;
  
  uVar1 = (int)(char)alpha & 0xff;
  if (uVar1 != 0) {
    alp_00 = (float)uVar1;
    pos_x = 0.0;
    alp = (byte)uVar1;
    DrawMessageBox(0x64000,36.0,DAT_00355fb8,568.0,120.0,alp);
    PutStringYW(0x1d,7,0x4d,0x14c,0x808080,alp,0xf000,0);
    PutSpriteYW(0x238,0x238,pos_x,pos_x,pos_x,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23d,0x23d,149.0,262.0,pos_x,0x808080,alp_00,DAT_00355fbc,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23d,0x23d,111.0,127.0,pos_x,0x808080,alp_00,DAT_00355fc0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23d,0x23d,412.0,125.0,pos_x,0x808080,alp_00,DAT_00355fc4,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23d,0x23d,DAT_00355fc8,DAT_00355fcc,pos_x,0x808080,alp_00,DAT_00355fd0,1.0,0,0xff,
                1,0,0);
    PutSpriteYW(0x239,0x239,pos_x,pos_x,pos_x,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23a,0x23a,pos_x,pos_x,pos_x,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23b,0x23b,pos_x,pos_x,pos_x,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x23c,0x23c,pos_x,pos_x,pos_x,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    if (ttl != '\0') {
      CmnWindow(0,0,0,alp,0x80);
      PutStringYW(0x1c,4,0x106,0x25,0x808080,alp,0xf000,0);
    }
    DispCaption(6,alp);
    return;
  }
  return;
}
