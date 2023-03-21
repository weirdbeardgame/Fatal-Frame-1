// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#133,  not equal)
enum {
	NRM_ALBM_CMD_SEAL = 0,
	NRM_ALBM_CMD_DEL = 1,
	NRM_ALBM_CMD_MODE = 2,
	NRM_ALBM_CMD_SORT = 3,
	NRM_ALBM_CMD_NUM = 4
};

// warning: multiple differing types with the same name (#133,  not equal)
enum {
	BIG_ALBM_CMD_SEAL = 0,
	BIG_ALBM_CMD_DEL = 1,
	BIG_ALBM_CMD_NUM = 2
};

// warning: multiple differing types with the same name (#133,  not equal)
enum {
	ALBM_MODE_ALL = 0,
	ALBM_MODE_LST = 1,
	ALBM_MODE_BIG = 2,
	ALBM_MODE_NUM = 3
};

// warning: multiple differing types with the same name (#133,  not equal)
enum {
	ALBM_SORT_DATE = 0,
	ALBM_SORT_SCORE = 1,
	ALBM_SORT_SEAL = 2,
	ALBM_SORT_NUM = 3
};

typedef struct {
	float lrg_io_alf;
	u_short lrg_io_cnt;
	u_short mmenu_tmr;
	u_short smenu_tmr;
	u_char menu_csr_bak;
	u_char dsp_pct_bak;
} ALBM_WRK;

static ALBM_WRK albm_wrk;
static FLSH_CORE flsh[6];

void NewgameMenuAlbumInit() {
	int i;
	
  int iVar1;
  PICTURE_WRK *pPVar2;
  
  memset(&pfile_wrk,0,0x3c0);
  memset(&albm_wrk,0,0xc);
  pPVar2 = pfile_wrk.pic + 0x17;
  iVar1 = 0x17;
  do {
    pPVar2->adr_no = (uchar)iVar1;
    pPVar2 = pPVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

void LoadgameMenuAlbumInit() {
	int i;
	
  int iVar1;
  PICTURE_WRK *pPVar2;
  
  memset(&pfile_wrk,0,0x3c0);
  memset(&albm_wrk,0,0xc);
  pPVar2 = pfile_wrk.pic + 0x17;
  iVar1 = 0x17;
  do {
    pPVar2->adr_no = (uchar)iVar1;
    pPVar2 = pPVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

void StartAlbumModeInit() {
  albm_wrk.dsp_pct_bak = 0xff;
  ig_menu_wrk.csr[5] = 0xff;
  yw2d.out_mode_cnt = 0;
  yw2d.pad_lock = 1;
  ig_menu_wrk.csr[1] = '\0';
  ig_menu_wrk.csr_bak[2] = '\0';
  ig_menu_wrk.csr[2] = '\0';
  ig_menu_wrk.csr[3] = '\0';
  InitPhotoExpand();
  return;
}

void IngameMenuAlbum(char is_outgame) {
  IngameAlbumDisp(ig_menu_wrk.csr[1],ig_menu_wrk.csr[3],ig_menu_wrk.csr[2],is_outgame);
  if (pfile_wrk.pic_num == '\0') {
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (*key_now[4] != 1) {
      return;
    }
    SeStartFix(3,0,0x1000,0x1000,1);
    yw2d.out_mode_cnt = 0xb;
    return;
  }
  if (ig_menu_wrk.csr[5] != 0xff) {
    if (((ig_menu_wrk.csr_bak[0] == 0xff) && (yw2d.pad_lock == 0)) && (*key_now[4] == 1)) {
      ig_menu_wrk.csr[5] = ig_menu_wrk.csr_bak[0];
      SeStartFix(3,0,0x1000,0x1000,1);
    }
    if (ig_menu_wrk.csr[5] == 0xff) {
      return;
    }
    IngameAlbumMenu(ig_menu_wrk.csr + 5,ig_menu_wrk.csr_bak,ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 2,
                    ig_menu_wrk.csr + 3);
    return;
  }
  if (ig_menu_wrk.csr[2] == '\x02') {
    if (yw2d.pad_lock != 0) goto LAB_001d4de8;
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        ig_menu_wrk.csr[2] = ig_menu_wrk.csr_bak[2];
        if (ig_menu_wrk.csr_bak[2] == '\x01') {
          if (pfile_wrk.pic_num < 7) {
            ig_menu_wrk.csr[3] = '\0';
          }
          else {
            if ((int)(uint)ig_menu_wrk.csr[1] < (int)(pfile_wrk.pic_num - 6)) {
              ig_menu_wrk.csr[3] = ig_menu_wrk.csr[1];
            }
            else {
              ig_menu_wrk.csr[3] = (uchar)(pfile_wrk.pic_num - 6);
            }
            if ((int)(pfile_wrk.pic_num - 1) < (int)(uint)ig_menu_wrk.csr[1]) {
              ig_menu_wrk.csr[3] = ig_menu_wrk.csr[3] + '\x01';
            }
          }
        }
      }
      goto LAB_001d4de8;
    }
  }
  else {
    if (yw2d.pad_lock != 0) goto LAB_001d4de8;
    if (*key_now[6] != 1) {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        yw2d.out_mode_cnt = 0x15;
      }
      else if (*key_now[5] == 1) {
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.csr_bak[2] = ig_menu_wrk.csr[2];
        ig_menu_wrk.csr[2] = '\x02';
      }
      goto LAB_001d4de8;
    }
  }
  ig_menu_wrk.csr_bak[0] = ig_menu_wrk.csr[5];
  ig_menu_wrk.csr[5] = '\0';
  SeStartFix(1,0,0x1000,0x1000,1);
LAB_001d4de8:
  if (pfile_wrk.pic_num != '\0') {
    if (ig_menu_wrk.csr[2] == '\x01') {
      IngameAlbumLstPad(ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 3,ig_menu_wrk.csr + 2);
    }
    else if (ig_menu_wrk.csr[2] < 2) {
      if (ig_menu_wrk.csr[2] == '\0') {
        IngameAlbumAllPad(ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 3,ig_menu_wrk.csr + 2);
      }
    }
    else if (ig_menu_wrk.csr[2] == '\x02') {
      IngameAlbumBigPad(ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 3,ig_menu_wrk.csr + 2);
    }
  }
  return;
}

void IngameAlbumAllPad(u_char *csr, u_char *csr_top, u_char *mode) {
	u_char csr_x;
	u_char csr_y;
	u_char max_x;
	u_char max_y;
	
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar1 = *csr;
  iVar5 = pfile_wrk.pic_num - 1;
  iVar4 = pfile_wrk.pic_num + 6;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  uVar7 = (uint)(bVar1 >> 3);
  uVar8 = iVar4 >> 3 & 0xff;
  uVar9 = iVar5 + (iVar4 >> 3) * -8 & 0xff;
  uVar6 = bVar1 & 7;
  if (yw2d.pad_lock != 0) goto LAB_001d525c;
  if ((*key_now[2] == 1) ||
     ((((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
       (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) ||
      ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
       (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))))) {
    if ((bVar1 & 7) == 0) {
      uVar6 = 7;
      if (uVar7 == uVar8) {
        uVar6 = uVar9;
      }
    }
    else {
      uVar6 = uVar6 - 1 & 0xff;
    }
    goto LAB_001d4fb0;
  }
  if ((((*key_now[3] == 1) || ((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)))
       ) || (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) ||
     ((uVar3 = Ana2PadDirCnt('\x01'), 0x19 < uVar3 &&
      (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 == 1)))) {
    if (uVar7 == uVar8) {
      if (uVar6 < uVar9) {
LAB_001d5074:
        uVar6 = uVar6 + 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      if (uVar6 < 7) goto LAB_001d5074;
      uVar6 = 0;
    }
LAB_001d4fb0:
    *key_now[7] = 0;
    if ((uVar9 != 0) || (uVar7 != uVar8)) goto LAB_001d5154;
LAB_001d525c:
    iVar4 = uVar7 << 3;
  }
  else if (((*key_now[0] == 1) ||
           (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
            (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)))) ||
          ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
    if (uVar7 == 0) {
      uVar7 = uVar8;
      if ((uVar9 < uVar6) && (uVar8 != 0)) {
        uVar7 = uVar8 - 1 & 0xff;
      }
    }
    else {
      uVar7 = uVar7 - 1 & 0xff;
    }
    *key_now[7] = 0;
    if (uVar8 == 0) goto LAB_001d525c;
    if ((uVar9 < uVar6) && (iVar4 = uVar7 << 3, uVar8 == 1)) goto LAB_001d5260;
LAB_001d5154:
    SeStartFix(0,0,0x1000,0x1000,1);
    iVar4 = uVar7 << 3;
  }
  else {
    if ((*key_now[1] == 1) ||
       (((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
        (sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1)))) {
LAB_001d51f0:
      if (uVar6 <= uVar9) {
        if (uVar7 < uVar8) goto LAB_001d5218;
        uVar7 = 0;
      }
      else if ((int)(uVar8 - 2) < (int)uVar7) {
        uVar7 = 0;
      }
      else {
LAB_001d5218:
        uVar7 = uVar7 + 1;
      }
      *key_now[7] = 0;
      if (uVar8 != 0) {
        if ((uVar6 > uVar9) && (iVar4 = uVar7 << 3, uVar8 == 1)) goto LAB_001d5260;
        SeStartFix(0,0,0x1000,0x1000,1);
      }
      goto LAB_001d525c;
    }
    uVar3 = Ana2PadDirCnt('\x02');
    iVar4 = uVar7 << 3;
    if (0x19 < uVar3) {
      sVar2 = Ana2PadDirCnt('\x02');
      iVar4 = uVar7 << 3;
      if ((int)sVar2 % 5 == 1) goto LAB_001d51f0;
    }
  }
LAB_001d5260:
  uVar6 = uVar6 + iVar4;
  *csr = (uchar)uVar6;
  if ((yw2d.pad_lock == 0) && (*key_now[7] == 1)) {
    if ((uVar6 & 0xff) < (uint)pfile_wrk.pic_num) {
      bVar1 = pfile_wrk.pic[uVar6 & 0xff].status;
      if ((bVar1 & 2) == 0) {
        bVar1 = SealChk();
        if (bVar1 < 0x17) {
          pfile_wrk.pic[*csr].status = pfile_wrk.pic[*csr].status | 2;
          SeStartFix(5,0,0x1000,0x1000,1);
          goto LAB_001d5360;
        }
        iVar4 = 2;
      }
      else {
        iVar4 = 5;
        pfile_wrk.pic[uVar6 & 0xff].status = bVar1 & 0xfd;
      }
      SeStartFix(iVar4,0,0x1000,0x1000,1);
    }
    else {
      SeStartFix(2,0,0x1000,0x1000,1);
    }
  }
LAB_001d5360:
  if (((ingame_wrk.clear_count != 0) && (yw2d.pad_lock == 0)) &&
     ((*key_now[10] == 1 || (*key_now[8] == 1)))) {
    SeStartFix(1,0,0x1000,0x1000,1);
    *mode = '\x01';
    if (pfile_wrk.pic_num < 7) {
      *csr_top = '\0';
    }
    else {
      if ((int)(uint)*csr < (int)(pfile_wrk.pic_num - 6)) {
        *csr_top = *csr;
      }
      else {
        *csr_top = (uchar)(pfile_wrk.pic_num - 6);
      }
      if ((int)(pfile_wrk.pic_num - 1) < (int)(uint)*csr) {
        *csr_top = *csr_top + '\x01';
      }
    }
  }
  return;
}

void IngameAlbumLstPad(u_char *csr, u_char *csr_top, u_char *mode) {
  uchar uVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int se_no;
  
  if (yw2d.pad_lock != 0) goto LAB_001d579c;
  if (*key_now[0] == 1) {
LAB_001d5510:
    uVar1 = *csr;
LAB_001d5514:
    if (uVar1 == '\0') {
      *csr = pfile_wrk.pic_num + 0xff;
      if (pfile_wrk.pic_num < 6) {
        *csr_top = '\0';
      }
      else {
        *csr_top = pfile_wrk.pic_num + 0xfa;
      }
    }
    else {
      if (uVar1 == *csr_top) {
        *csr_top = *csr_top + 0xff;
        uVar1 = *csr;
      }
      *csr = uVar1 + 0xff;
    }
    *key_now[7] = 0;
    if (1 < pfile_wrk.pic_num) {
      SeStartFix(0,0,0x1000,0x1000,1);
    }
  }
  else {
    if ((0x19 < (ushort)*key_now[0]) && ((uint)(ushort)*key_now[0] % 5 == 1)) {
      uVar1 = *csr;
      goto LAB_001d5514;
    }
    sVar3 = Ana2PadDirCnt('\0');
    if (sVar3 == 1) {
      uVar1 = *csr;
      goto LAB_001d5514;
    }
    uVar4 = Ana2PadDirCnt('\0');
    if ((0x19 < uVar4) && (sVar3 = Ana2PadDirCnt('\0'), (int)sVar3 % 5 == 1)) goto LAB_001d5510;
    if ((*key_now[1] == 1) ||
       ((((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
         (sVar3 = Ana2PadDirCnt('\x02'), sVar3 == 1)) ||
        ((uVar4 = Ana2PadDirCnt('\x02'), 0x19 < uVar4 &&
         (sVar3 = Ana2PadDirCnt('\x02'), (int)sVar3 % 5 == 1)))))) {
      if ((int)(uint)*csr < (int)(pfile_wrk.pic_num - 1)) {
        if ((uint)*csr == *csr_top + 5) {
          *csr_top = *csr_top + 1;
          uVar1 = *csr;
        }
        else {
          uVar1 = *csr;
        }
        *csr = uVar1 + '\x01';
      }
      else {
        *csr = '\0';
        *csr_top = '\0';
      }
      *key_now[7] = 0;
      if (1 < pfile_wrk.pic_num) {
        SeStartFix(0,0,0x1000,0x1000,1);
      }
    }
  }
  if ((yw2d.pad_lock == 0) && (*key_now[7] == 1)) {
    if (*csr < pfile_wrk.pic_num) {
      bVar2 = pfile_wrk.pic[*csr].status;
      if ((bVar2 & 2) == 0) {
        bVar2 = SealChk();
        if (bVar2 < 0x17) {
          pfile_wrk.pic[*csr].status = pfile_wrk.pic[*csr].status | 2;
          SeStartFix(5,0,0x1000,0x1000,1);
          goto LAB_001d579c;
        }
        se_no = 2;
      }
      else {
        se_no = 5;
        pfile_wrk.pic[*csr].status = bVar2 & 0xfd;
      }
      SeStartFix(se_no,0,0x1000,0x1000,1);
    }
    else {
      SeStartFix(2,0,0x1000,0x1000,1);
    }
  }
LAB_001d579c:
  if (((ingame_wrk.clear_count != 0) && (yw2d.pad_lock == 0)) &&
     ((*key_now[10] == 1 || (*key_now[8] == 1)))) {
    SeStartFix(1,0,0x1000,0x1000,1);
    *mode = '\0';
  }
  return;
}

void IngameAlbumBigPad(u_char *csr, u_char *csr_top, u_char *mode) {
  uchar uVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  
  if (*key_now[2] == 1) {
LAB_001d58c0:
    uVar2 = *csr;
  }
  else if (((ushort)*key_now[2] < 0x1a) || ((uint)(ushort)*key_now[2] % 5 != 1)) {
    sVar4 = Ana2PadDirCnt('\x03');
    if (sVar4 != 1) {
      uVar5 = Ana2PadDirCnt('\x03');
      if ((uVar5 < 0x1a) || (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 != 1)) {
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
            ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
             (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))))) {
          if ((int)(uint)*csr < (int)(pfile_wrk.pic_num - 1)) {
            *csr = *csr + 1;
          }
          else {
            *csr = '\0';
          }
          if (1 < pfile_wrk.pic_num) {
            SeStartFix(0,0,0x1000,0x1000,1);
          }
        }
        goto LAB_001d59e8;
      }
      goto LAB_001d58c0;
    }
    uVar2 = *csr;
  }
  else {
    uVar2 = *csr;
  }
  uVar1 = pfile_wrk.pic_num;
  if (uVar2 != '\0') {
    uVar1 = uVar2;
  }
  *csr = uVar1 + 0xff;
  if (1 < pfile_wrk.pic_num) {
    SeStartFix(0,0,0x1000,0x1000,1);
  }
LAB_001d59e8:
  if ((yw2d.pad_lock != 0) || (*key_now[7] != 1)) {
    return;
  }
  if (pfile_wrk.pic_num <= *csr) {
    SeStartFix(2,0,0x1000,0x1000,1);
    return;
  }
  bVar3 = pfile_wrk.pic[*csr].status;
  if ((bVar3 & 2) != 0) {
    pfile_wrk.pic[*csr].status = bVar3 & 0xfd;
    SeStartFix(5,0,0x1000,0x1000,1);
    return;
  }
  bVar3 = SealChk();
  if (bVar3 < 0x17) {
    pfile_wrk.pic[*csr].status = pfile_wrk.pic[*csr].status | 2;
    SeStartFix(5,0,0x1000,0x1000,1);
    return;
  }
  SeStartFix(2,0,0x1000,0x1000,1);
  return;
}

static void IngameAlbumMenu(u_char *csr0, u_char *csr1, u_char *pic, u_char *mode, u_char *list_top) {
  if (ingame_wrk.clear_count != 0) {
    CmndMenuClrB(csr0,csr1,pic,mode,list_top);
    return;
  }
  CmndMenuVrgn(csr0,csr1,pic,mode,list_top);
  return;
}

static void CmndMenuVrgn(u_char *csr0, u_char *csr1, u_char *pic, u_char *mode, u_char *list_top) {
  byte bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  
  if (*csr1 != 0xff) {
    if (*csr0 != '\x01') {
      return;
    }
    albm_wrk.mmenu_tmr = 0;
    albm_wrk.smenu_tmr = 0;
    if (yw2d.pad_lock != 0) {
      albm_wrk.mmenu_tmr = 0;
      albm_wrk.smenu_tmr = 0;
      return;
    }
    if (*key_now[4] == 1) {
      *csr1 = 0xff;
      SeStartFix(3,0,0x1000,0x1000,1);
      return;
    }
    if (*key_now[6] == 1) {
      uVar2 = *csr1;
    }
    else {
      if (*key_now[5] != 1) {
        if (*key_now[2] == 1) {
          uVar2 = *csr1;
        }
        else {
          sVar3 = Ana2PadDirCnt('\x03');
          if (sVar3 != 1) {
            if (*key_now[3] == 1) {
              uVar2 = *csr1;
            }
            else {
              sVar3 = Ana2PadDirCnt('\x01');
              if (sVar3 != 1) {
                return;
              }
              uVar2 = *csr1;
            }
            *csr1 = '\x01' - uVar2;
            SeStartFix(0,0,0x1000,0x1000,1);
            return;
          }
          uVar2 = *csr1;
        }
        *csr1 = '\x01' - uVar2;
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      uVar2 = *csr1;
    }
    if (uVar2 == '\0') {
      DeletePhotoData(*pic);
      SeStartFix(1,0,0x1000,0x1000,1);
      iVar5 = pfile_wrk.pic_num - 1;
      if (iVar5 < (int)(uint)*pic) {
        *pic = (uchar)iVar5;
        if (*list_top != '\0') {
          *list_top = *list_top + 0xff;
        }
      }
      else {
        bVar1 = *list_top;
        if (((int)((uint)pfile_wrk.pic_num - (uint)bVar1) < 6) && (bVar1 != 0)) {
          *list_top = bVar1 - 1;
        }
      }
    }
    else {
      SeStartFix(3,0,0x1000,0x1000,1);
    }
    *csr0 = 0xff;
    *csr1 = 0xff;
    return;
  }
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[6] == 1) {
    uVar2 = *csr0;
  }
  else {
    if (*key_now[5] != 1) {
      if (*key_now[0] != 1) {
        if ((0x19 < (ushort)*key_now[0]) && ((uint)(ushort)*key_now[0] % 5 == 1)) {
          uVar2 = *csr0;
          goto LAB_001d5da0;
        }
        sVar3 = Ana2PadDirCnt('\0');
        if (sVar3 == 1) {
          uVar2 = *csr0;
          goto LAB_001d5da0;
        }
        uVar4 = Ana2PadDirCnt('\0');
        if ((uVar4 < 0x1a) || (sVar3 = Ana2PadDirCnt('\0'), (int)sVar3 % 5 != 1)) {
          if (*key_now[1] != 1) {
            if ((0x19 < (ushort)*key_now[1]) && ((uint)(ushort)*key_now[1] % 5 == 1)) {
              uVar2 = *csr0;
              goto LAB_001d5e6c;
            }
            sVar3 = Ana2PadDirCnt('\x02');
            if (sVar3 == 1) {
              uVar2 = *csr0;
              goto LAB_001d5e6c;
            }
            uVar4 = Ana2PadDirCnt('\x02');
            if (uVar4 < 0x1a) {
              return;
            }
            sVar3 = Ana2PadDirCnt('\x02');
            if ((int)sVar3 % 5 != 1) {
              return;
            }
          }
          uVar2 = *csr0;
LAB_001d5e6c:
          if (uVar2 == '\x01') {
            *csr0 = '\0';
          }
          else {
            *csr0 = uVar2 + '\x01';
          }
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
      }
      uVar2 = *csr0;
LAB_001d5da0:
      if (uVar2 == '\0') {
        uVar2 = '\x01';
      }
      else {
        uVar2 = uVar2 + 0xff;
      }
      *csr0 = uVar2;
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
    uVar2 = *csr0;
  }
  if (uVar2 != '\0') {
    if (uVar2 != '\x01') {
      return;
    }
    if (*pic < pfile_wrk.pic_num) {
      SeStartFix(1,0,0x1000,0x1000,1);
      *csr1 = '\x01';
      return;
    }
    SeStartFix(2,0,0x1000,0x1000,1);
    return;
  }
  if (*pic < pfile_wrk.pic_num) {
    bVar1 = pfile_wrk.pic[*pic].status;
    if ((bVar1 & 2) == 0) {
      bVar1 = SealChk();
      if (bVar1 < 0x17) {
        pfile_wrk.pic[*pic].status = pfile_wrk.pic[*pic].status | 2;
        SeStartFix(5,0,0x1000,0x1000,1);
        goto LAB_001d5cb0;
      }
      iVar5 = 2;
    }
    else {
      iVar5 = 5;
      pfile_wrk.pic[*pic].status = bVar1 & 0xfd;
    }
    SeStartFix(iVar5,0,0x1000,0x1000,1);
  }
  else {
    SeStartFix(2,0,0x1000,0x1000,1);
  }
LAB_001d5cb0:
  *csr0 = 0xff;
  return;
}

static void CmndMenuClrB(u_char *csr0, u_char *csr1, u_char *pic, u_char *mode, u_char *list_top) {
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  
  uVar3 = *csr1;
  if (uVar3 != 0xff) {
    if (*csr0 != '\x03') {
      if (*csr0 != '\x01') {
        return;
      }
      albm_wrk.mmenu_tmr = 0;
      albm_wrk.smenu_tmr = 0;
      if (yw2d.pad_lock != 0) {
        albm_wrk.mmenu_tmr = 0;
        albm_wrk.smenu_tmr = 0;
        return;
      }
      if (*key_now[4] == 1) {
        *csr1 = 0xff;
        SeStartFix(3,0,0x1000,0x1000,1);
        return;
      }
      if (*key_now[6] == 1) {
        uVar3 = *csr1;
      }
      else {
        if (*key_now[5] != 1) {
          if (*key_now[2] == 1) {
            uVar3 = *csr1;
          }
          else {
            sVar4 = Ana2PadDirCnt('\x03');
            if (sVar4 != 1) {
              if (*key_now[3] == 1) {
                uVar3 = *csr1;
              }
              else {
                sVar4 = Ana2PadDirCnt('\x01');
                if (sVar4 != 1) {
                  return;
                }
                uVar3 = *csr1;
              }
              *csr1 = '\x01' - uVar3;
              SeStartFix(0,0,0x1000,0x1000,1);
              return;
            }
            uVar3 = *csr1;
          }
          *csr1 = '\x01' - uVar3;
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
        uVar3 = *csr1;
      }
      if (uVar3 == '\0') {
        DeletePhotoData(*pic);
        SeStartFix(1,0,0x1000,0x1000,1);
        iVar6 = pfile_wrk.pic_num - 1;
        if (iVar6 < (int)(uint)*pic) {
          *pic = (uchar)iVar6;
          if (*list_top != '\0') {
            *list_top = *list_top + 0xff;
          }
        }
        else {
          bVar1 = *list_top;
          if (((int)((uint)pfile_wrk.pic_num - (uint)bVar1) < 6) && (bVar1 != 0)) {
            *list_top = bVar1 - 1;
          }
        }
      }
      else {
        SeStartFix(3,0,0x1000,0x1000,1);
      }
      *csr0 = 0xff;
      *csr1 = 0xff;
      return;
    }
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (*key_now[4] == 1) {
      *csr1 = 0xff;
      SeStartFix(3,0,0x1000,0x1000,1);
      return;
    }
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      if (pfile_wrk.sort_key == uVar3) {
        if (pfile_wrk.skey_bak == '\0') {
          pfile_wrk.skey_bak = '\x01';
        }
        else {
          pfile_wrk.skey_bak = '\0';
        }
      }
      else {
        pfile_wrk.skey_bak = '\0';
        pfile_wrk.sort_key = *csr1;
      }
      *csr0 = 0xff;
      *csr1 = 0xff;
      SeStartFix(1,0,0x1000,0x1000,1);
      IngameAlbumSort();
      return;
    }
    if ((*key_now[0] == 1) || ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))
       ) {
LAB_001d6728:
      if (uVar3 == '\0') {
        uVar3 = '\x02';
      }
      else {
        uVar3 = uVar3 + 0xff;
      }
      *csr1 = uVar3;
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
    sVar4 = Ana2PadDirCnt('\0');
    if (sVar4 == 1) {
      uVar3 = *csr1;
      goto LAB_001d6728;
    }
    uVar5 = Ana2PadDirCnt('\0');
    if ((0x19 < uVar5) && (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)) {
      uVar3 = *csr1;
      goto LAB_001d6728;
    }
    if (*key_now[1] != 1) {
      if ((0x19 < (ushort)*key_now[1]) && ((uint)(ushort)*key_now[1] % 5 == 1)) {
        uVar3 = *csr1;
        goto LAB_001d67fc;
      }
      sVar4 = Ana2PadDirCnt('\x02');
      if (sVar4 == 1) {
        uVar3 = *csr1;
        goto LAB_001d67fc;
      }
      uVar5 = Ana2PadDirCnt('\x02');
      if (uVar5 < 0x1a) {
        return;
      }
      sVar4 = Ana2PadDirCnt('\x02');
      if ((int)sVar4 % 5 != 1) {
        return;
      }
    }
    uVar3 = *csr1;
LAB_001d67fc:
    if (uVar3 == '\x02') {
      *csr1 = '\0';
    }
    else {
      *csr1 = uVar3 + '\x01';
    }
    SeStartFix(0,0,0x1000,0x1000,1);
    return;
  }
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[6] == 1) {
    bVar1 = *csr0;
  }
  else {
    if (*key_now[5] != 1) {
      if (*key_now[0] == 1) {
LAB_001d6420:
        uVar3 = *mode;
LAB_001d6424:
        uVar2 = *csr0;
        if (uVar3 == '\x02') {
          if (uVar2 == '\0') {
            uVar2 = '\x01';
          }
          else {
            uVar2 = uVar2 + 0xff;
          }
        }
        else if (uVar2 == '\0') {
          uVar2 = '\x03';
        }
        else {
          uVar2 = uVar2 + 0xff;
        }
        *csr0 = uVar2;
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if ((0x19 < (ushort)*key_now[0]) && ((uint)(ushort)*key_now[0] % 5 == 1)) {
        uVar3 = *mode;
        goto LAB_001d6424;
      }
      sVar4 = Ana2PadDirCnt('\0');
      if (sVar4 == 1) {
        uVar3 = *mode;
        goto LAB_001d6424;
      }
      uVar5 = Ana2PadDirCnt('\0');
      if ((0x19 < uVar5) && (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)) goto LAB_001d6420;
      if (*key_now[1] == 1) {
LAB_001d6510:
        uVar3 = *mode;
      }
      else if (((ushort)*key_now[1] < 0x1a) || ((uint)(ushort)*key_now[1] % 5 != 1)) {
        sVar4 = Ana2PadDirCnt('\x02');
        if (sVar4 != 1) {
          uVar5 = Ana2PadDirCnt('\x02');
          if (uVar5 < 0x1a) {
            return;
          }
          sVar4 = Ana2PadDirCnt('\x02');
          if ((int)sVar4 % 5 != 1) {
            return;
          }
          goto LAB_001d6510;
        }
        uVar3 = *mode;
      }
      else {
        uVar3 = *mode;
      }
      if (uVar3 == '\x02') {
        uVar3 = *csr0;
        if (uVar3 == '\x01') {
          *csr0 = '\0';
          goto LAB_001d6550;
        }
      }
      else {
        uVar3 = *csr0;
        if (uVar3 == '\x03') {
          *csr0 = '\0';
          goto LAB_001d6550;
        }
      }
      *csr0 = uVar3 + '\x01';
LAB_001d6550:
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
    bVar1 = *csr0;
  }
  if (bVar1 == 1) {
    if (*pic < pfile_wrk.pic_num) {
      SeStartFix(1,0,0x1000,0x1000,1);
      *csr1 = '\x01';
      return;
    }
    SeStartFix(2,0,0x1000,0x1000,1);
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      SeStartFix(1,0,0x1000,0x1000,1);
      *csr1 = '\0';
      return;
    }
    SeStartFix(1,0,0x1000,0x1000,1);
    albm_wrk.mmenu_tmr = 0;
    *csr0 = 0xff;
    *csr1 = 0xff;
    uVar3 = *mode;
    *mode = '\x01' - uVar3;
    if ((uchar)('\x01' - uVar3) != '\x01') {
      return;
    }
    if (pfile_wrk.pic_num < 7) {
      *list_top = '\0';
      return;
    }
    if ((int)(uint)*pic < (int)(pfile_wrk.pic_num - 6)) {
      *list_top = *pic;
    }
    else {
      *list_top = (uchar)(pfile_wrk.pic_num - 6);
    }
    if ((int)(uint)*pic <= (int)(pfile_wrk.pic_num - 1)) {
      return;
    }
    *list_top = *list_top + '\x01';
    return;
  }
  if (bVar1 != 0) {
    return;
  }
  if (*pic < pfile_wrk.pic_num) {
    bVar1 = pfile_wrk.pic[*pic].status;
    if ((bVar1 & 2) == 0) {
      bVar1 = SealChk();
      if (bVar1 < 0x17) {
        pfile_wrk.pic[*pic].status = pfile_wrk.pic[*pic].status | 2;
        SeStartFix(5,0,0x1000,0x1000,1);
        goto LAB_001d6274;
      }
      iVar6 = 2;
    }
    else {
      iVar6 = 5;
      pfile_wrk.pic[*pic].status = bVar1 & 0xfd;
    }
    SeStartFix(iVar6,0,0x1000,0x1000,1);
  }
  else {
    SeStartFix(2,0,0x1000,0x1000,1);
  }
LAB_001d6274:
  *csr0 = 0xff;
  return;
}

static void IngameAlbumMenuDsp(u_char *csr0, u_char *csr1, u_char *pic, u_char *mode) {
	short int mmx;
	short int mmy;
	short int smx;
	short int smy;
	short int mnx;
	
  byte mode_00;
  short sVar1;
  int iVar2;
  uchar uVar3;
  uchar csr0_00;
  ushort in_t0_lo;
  ushort in_t1_lo;
  ushort unaff_s1_lo;
  ushort unaff_s5_lo;
  
  if (ingame_wrk.clear_count != 0) {
    if (*csr0 == '\x01') {
      if (*csr1 != 0xff) {
        DrawMessageBox(0xa000,26.0,163.0,DAT_00355ed8,80.0,0x80);
        if ((pfile_wrk.pic[*pic].status & 2) == 0) {
          PutStringYW(0x21,1,0x30,0xb3,0x808080,0x80,0x5000,0);
        }
        else {
          PutStringYW(0x21,2,0x30,0xb3,0x808080,0x80,0x5000,0);
        }
        PutStringYW(0x21,4,0x30,0xcd,0x808080,0x80,0x5000,0);
        YesNoCrslOKR(0xa000,(float)((uint)*csr1 * 0x84 + 0xb2),201.0,0x808080,128.0,2.0);
        return;
      }
      mode_00 = *mode;
    }
    else {
      mode_00 = *mode;
    }
    if (mode_00 == 1) {
      in_t1_lo = 0x1e5;
      unaff_s1_lo = 0x16d;
    }
    else if (mode_00 < 2) {
      if (mode_00 != 0) {
        uVar3 = *csr0;
        goto LAB_001d6cb4;
      }
      iVar2 = (*pic & 7) * 0x48;
      if ((*pic & 7) < 4) {
        sVar1 = (short)iVar2;
        in_t1_lo = sVar1 + 0x6b;
        unaff_s1_lo = sVar1 + 0xe3;
      }
      else {
        iVar2 = (iVar2 + -0x69) * 0x10000;
        in_t1_lo = (ushort)((uint)iVar2 >> 0x10);
        unaff_s1_lo = (ushort)((uint)(((iVar2 >> 0x10) + -0x78) * 0x10000) >> 0x10);
      }
    }
    else {
      if (mode_00 != 2) {
        uVar3 = *csr0;
        goto LAB_001d6cb4;
      }
      in_t1_lo = 0x181;
      unaff_s1_lo = 0x109;
    }
    in_t0_lo = 0x36;
    unaff_s5_lo = 0x36;
    uVar3 = *csr0;
LAB_001d6cb4:
    DspMainMenu(uVar3,*csr1,mode_00,in_t1_lo,in_t0_lo,0x80);
    DspSideMenu(*csr0,*csr1,*mode,unaff_s1_lo,unaff_s5_lo,0x80);
    return;
  }
  if (*csr0 == '\x01') {
    if (*csr1 != 0xff) {
      DrawMessageBox(0xa000,26.0,163.0,DAT_00355edc,80.0,0x80);
      if ((pfile_wrk.pic[*pic].status & 2) == 0) {
        PutStringYW(0x21,1,0x30,0xb3,0x808080,0x80,0x5000,0);
      }
      else {
        PutStringYW(0x21,2,0x30,0xb3,0x808080,0x80,0x5000,0);
      }
      PutStringYW(0x21,4,0x30,0xcd,0x808080,0x80,0x5000,0);
      YesNoCrslOKR(0xa000,(float)((uint)*csr1 * 0x84 + 0xb8),203.0,0x808080,128.0,2.0);
      return;
    }
    uVar3 = *mode;
  }
  else {
    uVar3 = *mode;
  }
  if (uVar3 == '\0') {
    sVar1 = (*pic & 7) * 0x48;
    if ((*pic & 7) < 4) {
      in_t1_lo = sVar1 + 0x6b;
    }
    else {
      in_t1_lo = sVar1 - 0x69;
    }
  }
  else {
    if (uVar3 != '\x02') {
      csr0_00 = *csr0;
      goto LAB_001d6ea0;
    }
    in_t1_lo = 0x181;
  }
  in_t0_lo = 0x36;
  csr0_00 = *csr0;
LAB_001d6ea0:
  DspMainMenu(csr0_00,*csr1,uVar3,in_t1_lo,in_t0_lo,0x80);
  return;
}

void IngameAlbumDispPhotoLarge(u_char csr) {
  return;
}

void IngameAlbumDisp(u_char csr, u_char csr_top, u_char mode, char is_outgame) {
  int no;
  
  AlbmCntInit();
  AlbmModeInOut(is_outgame);
  if (yw2d.inn_mode_cnt == 10) {
    DrawAlbum(csr,csr_top,mode,'\x02');
  }
  else {
    DrawAlbum(csr,csr_top,mode,'\0');
    if (mode == '\x02') {
      no = 0xb;
    }
    else {
      no = 10;
    }
    DispCaption(no,(byte)(int)yw2d.io_a[4]);
  }
  AlbmModeInOut2(is_outgame);
  if (pfile_wrk.pic_num == '\0') goto LAB_001d7168;
  if (yw2d.io_a[5] != 0.0) {
    if (ingame_wrk.clear_count == 0) {
      if (mode == '\0') {
LAB_001d70a0:
        PhotOnlyAll(csr,(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],
                    (ushort)(int)yw2d.io_a[5]);
      }
      else if (mode == '\x02') {
        PhotOnlyBig(csr,(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],
                    (ushort)(int)yw2d.io_a[5]);
      }
    }
    else if (mode == '\x01') {
      PhotOnlyLst(csr,(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],(ushort)(int)yw2d.io_a[5])
      ;
    }
    else if (mode < 2) {
      if (mode == '\0') goto LAB_001d70a0;
    }
    else if (mode == '\x02') {
      PhotOnlyBig(csr,(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],(ushort)(int)yw2d.io_a[5])
      ;
    }
  }
  if (yw2d.out_mode_cnt == 0xc) {
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0xffff7f0);
    DrawAlbum(csr,csr_top,mode,'\x01');
  }
LAB_001d7168:
  AlbmCntRenew();
  return;
}

static void DrawAlbum(u_char csr, u_char csr_top, u_char mode, u_char str) {
  DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x03');
  if (pfile_wrk.pic_num == '\0') {
    DrawMessageBox(0x14000,170.0,210.0,300.0,60.0,(byte)(int)yw2d.io_a[4]);
    PutStringYW(0x21,0,0xd7,0xe4,0x808080,(byte)(int)yw2d.io_a[4],0xf000,0);
    return;
  }
  if (ingame_wrk.clear_count == 0) {
    if (mode == '\0') {
      DspNotice((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                csr + '\x01',pfile_wrk.pic_num,'\x01');
      DspSumnale(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspDetail(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                str);
      return;
    }
    if (mode == '\x02') {
      DspNotice((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                csr + '\x01',pfile_wrk.pic_num,'\0');
      DspFilmCut(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspCherry((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspBtmDtl(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspSideSmnl(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4])
      ;
      return;
    }
  }
  else {
    if (mode == '\x01') {
      DspNotice((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                csr + '\x01',pfile_wrk.pic_num,'\x01');
      DspDetail(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                str);
      DspPhtLst(csr,csr_top,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],
                (ushort)(int)yw2d.io_a[4]);
      return;
    }
    if (mode < 2) {
      if (mode == '\0') {
        DspNotice((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                  csr + '\x01',pfile_wrk.pic_num,'\x01');
        DspSumnale(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]
                  );
        DspDetail(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                  str);
        return;
      }
    }
    else if (mode == '\x02') {
      DspNotice((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4],
                csr + '\x01',pfile_wrk.pic_num,'\0');
      DspFilmCut(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspCherry((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspBtmDtl(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
      DspSideSmnl(csr,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4])
      ;
      return;
    }
  }
  return;
}

static void PhotOnlyAll(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int i;
	int pic_num;
	int rgb;
	
  uchar uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int rgb;
  int local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  
  local_cc = (int)(short)pos_x;
  local_c8 = (int)(short)pos_y;
  iVar11 = (int)(short)alpha;
  local_c4 = (int)(char)csr & 7;
  uVar12 = (uint)((long)(char)csr & 0xffU);
  local_c0 = uVar12 >> 3;
  lVar9 = 0;
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  uVar10 = (ulong)pfile_wrk.pic_num;
  local_bc = (uint)(((long)(char)csr & 0xffU) < uVar10);
  do {
    iVar8 = (int)lVar9;
    lVar5 = (long)(iVar8 + 7);
    if (-1 < lVar9) {
      lVar5 = lVar9;
    }
    iVar4 = (int)lVar5 >> 3;
    iVar2 = (iVar8 + iVar4 * -8) * 0x48;
    uVar7 = local_c8 + iVar4 * 0x39 + 0x55 & 0xffff;
    uVar6 = local_cc + iVar2 + 0x23 & 0xffff;
    if (lVar9 < (long)uVar10) {
      iVar2 = (iVar2 >> 0x1f | 0x265928U) + iVar8 * 0x1c;
      DrawSPhotoFromSmallPhotoArea
                ((uint)*(byte *)(iVar2 + 4),0x28000,0,uVar6 + 2,uVar7 + 6,(byte)alpha);
      if ((*(byte *)(iVar2 + 7) & 2) != 0) {
        PutSpriteYW(0x157,0x157,(float)(uVar6 + 3),(float)(uVar7 + 2),0.0,0xc0c0c0,
                    (float)((iVar11 << 2) / 5),1.0,1.0,0,0xff,1,1,0);
      }
    }
    lVar9 = (long)(iVar8 + 1);
  } while (lVar9 < 0x18);
  uVar6 = local_cc + local_c4 * 0x48 + 0x23;
  uVar7 = local_c8 + local_c0 * 0x39 + 0x55;
  FlashStarYW(flsh + 2,'@',0x80,'x','\0');
  CLRtoRGB(&rgb,flsh[2].alpha,flsh[2].alpha,flsh[2].alpha);
  PutSpriteYW(0x158,0x158,(float)((uVar6 & 0xffff) + 9),(float)((uVar7 & 0xffff) + 7),0.0,rgb,
              (float)(long)iVar11 * 0.5,1.25,1.25,0,0xff,1,1,0);
  if (local_bc != 0) {
    uVar1 = pfile_wrk.pic[uVar12].adr_no;
    if (uVar1 != albm_wrk.dsp_pct_bak) {
      albm_wrk.dsp_pct_bak = uVar1;
      ReqPhotoExpand();
    }
    PolySquareYW(76.0,272.0,0xd8,0x90,0,(float)iVar11,1.0,1.0,0x29000,0,0,0);
    UncompressPhoto((uint)pfile_wrk.pic[uVar12].adr_no);
    bVar3 = CheckPhotoExpandEnd();
    if (bVar3 != 0) {
      DrawPhotoFromPhotoWrk
                ((uint)pfile_wrk.pic[uVar12].adr_no,0x28000,0,local_cc + 0x4c,local_c8 + 0x110,0xd8,
                 0x90,(byte)alpha);
    }
  }
  IngameAlbumMenuDsp(ig_menu_wrk.csr + 5,ig_menu_wrk.csr_bak,ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 2
                    );
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  return;
}

static void PhotOnlyLst(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int pic_num;
	
  uchar uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (int)(char)csr & 0xff;
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  if (uVar3 < pfile_wrk.pic_num) {
    uVar1 = pfile_wrk.pic[uVar3].adr_no;
    if (uVar1 != albm_wrk.dsp_pct_bak) {
      albm_wrk.dsp_pct_bak = uVar1;
      ReqPhotoExpand();
    }
    PolySquareYW(76.0,272.0,0xd8,0x90,0,(float)(int)(short)alpha,1.0,1.0,0x29000,0,0,0);
    UncompressPhoto((uint)pfile_wrk.pic[uVar3].adr_no);
    bVar2 = CheckPhotoExpandEnd();
    if (bVar2 != 0) {
      DrawPhotoFromPhotoWrk
                ((uint)pfile_wrk.pic[uVar3].adr_no,0x28000,0,(short)pos_x + 0x4c,
                 (short)pos_y + 0x110,0xd8,0x90,(uchar)alpha);
    }
  }
  IngameAlbumMenuDsp(ig_menu_wrk.csr + 5,ig_menu_wrk.csr_bak,ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 2
                    );
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  return;
}

static void PhotOnlyBig(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int pic_num;
	int pht_no;
	
  uchar uVar1;
  byte bVar2;
  int iVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  iVar9 = (int)(short)pos_x;
  uVar8 = (long)(char)csr & 0xff;
  iVar5 = (int)(short)pos_y;
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  uVar1 = pfile_wrk.pic_num;
  iVar7 = (int)uVar8;
  uVar4 = pfile_wrk.pic[iVar7].adr_no;
  if (uVar4 != albm_wrk.dsp_pct_bak) {
    albm_wrk.dsp_pct_bak = uVar4;
    ReqPhotoExpand();
  }
  UncompressPhoto((uint)pfile_wrk.pic[iVar7].adr_no);
  PolySquareYW(127.0,76.0,0x180,0xff,0,(float)(int)(short)alpha,1.0,1.0,0x2e000,0,0,0);
  bVar2 = CheckPhotoExpandEnd();
  uVar4 = (uchar)alpha;
  if ((bVar2 != 0) &&
     (DrawPhotoFromPhotoWrk
                ((uint)pfile_wrk.pic[iVar7].adr_no,0x2d000,0,iVar9 + 0x7f,iVar5 + 0x4c,0x180,0xff,
                 uVar4), (pfile_wrk.pic[iVar7].status & 2) != 0)) {
    PutSpriteYW(0x17f,0x182,(float)iVar9,(float)iVar5,0.0,0xc0c0c0,
                (float)(((int)(short)alpha << 2) / 5),1.0,1.0,0,0xff,1,1,0);
  }
  if (1 < uVar1) {
    iVar6 = uVar1 - 1;
    iVar3 = iVar7 + 1;
    if ((long)iVar6 <= (long)uVar8) {
      iVar3 = 0;
    }
    DrawSPhotoFromSmallPhotoArea2
              ((uint)pfile_wrk.pic[iVar3].adr_no,0x28000,0,iVar9 + 0x222,iVar5 + 0xbd,0x30,0x20,
               uVar4);
    iVar7 = iVar7 + -1;
    if (uVar8 == 0) {
      iVar7 = iVar6;
    }
    DrawSPhotoFromSmallPhotoArea2
              ((uint)pfile_wrk.pic[iVar7].adr_no,0x28000,0,iVar9 + 0x32,iVar5 + 0xbd,0x30,0x20,uVar4
              );
  }
  IngameAlbumMenuDsp(ig_menu_wrk.csr + 5,ig_menu_wrk.csr_bak,ig_menu_wrk.csr + 1,ig_menu_wrk.csr + 2
                    );
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  return;
}

u_char* GetSubjectNameAddr(u_short kind, u_short no, u_short show) {
	int *addr;
	
  int iVar1;
  char *pcVar2;
  uchar *addr;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (int)show & 0xffff;
  uVar3 = (int)no & 0xffff;
  if (6 < ((int)kind & 0xffffU)) {
    return (char *)0x0;
  }
  switch((&switchD_001d80e4::switchdataD_0034fd00)[(int)kind & 0xffffU]) {
  case (undefined *)0x1d80ec:
    pcVar2 = (char *)GetIngameMSGAddr('!',3);
    return pcVar2;
  case (undefined *)0x1d8100:
    iVar1 = Get4Byte((uchar *)0x84a07c);
    addr = (uchar *)(iVar1 + uVar4 * 4 + 0x84a000);
    break;
  case (undefined *)0x1d8124:
    iVar1 = Get4Byte((uchar *)0x84a07c);
    addr = (uchar *)(iVar1 + (uVar4 + 5) * 4 + 0x84a000);
    break;
  case (undefined *)0x1d814c:
    iVar1 = Get4Byte((uchar *)0x84a07c);
    addr = (uchar *)(iVar1 + (uVar4 + 10) * 4 + 0x84a000);
    break;
  case (undefined *)0x1d8174:
    addr = (uchar *)0x84a080;
    break;
  case (undefined *)0x1d81a4:
    if (0x7f < uVar3) {
      iVar1 = Get4Byte((uchar *)0x84a098);
      iVar1 = Get4Byte((uchar *)(iVar1 + (uVar3 - 0x80) * 4 + 0x84a000));
      return (char *)(iVar1 + 0x84a000);
    }
    addr = (uchar *)0x84a094;
    break;
  case (undefined *)0x1d81e8:
    pcVar2 = (char *)GetIngameMSGAddr('!',3);
    return pcVar2;
  }
  iVar1 = Get4Byte(addr);
  iVar1 = Get4Byte((uchar *)(iVar1 + uVar3 * 4 + 0x84a000));
  return (char *)(iVar1 + 0x84a000);
}

static void IngameAlbumSort() {
	int i;
	int j;
	int tmp;
	PICTURE_WRK tmp_pic;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  uchar uVar8;
  uchar uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uchar *puVar16;
  ulong in_a1;
  ulong in_a2;
  ulong in_a3;
  ulong uVar17;
  ulong in_t1;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong in_t2;
  ulong in_t3;
  uchar *puVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  PICTURE_WRK tmp_pic;
  
  if (pfile_wrk.sort_key == '\x01') {
    if (0 < (int)(pfile_wrk.pic_num - 1)) {
      iVar12 = 0;
      uVar19 = 0x265928;
      iVar24 = 0;
      do {
        iVar26 = iVar24 + 1;
        uVar14 = iVar12 + 0x265933U & 7;
        uVar3 = iVar12 + 0x26592cU & 7;
        tmp_pic._0_8_ =
             (*(long *)((iVar12 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
             uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((iVar12 + 0x26592cU) - uVar3) >> uVar3 * 8;
        uVar14 = iVar12 + 0x26593bU & 7;
        uVar3 = iVar12 + 0x265934U & 7;
        uVar19 = (*(long *)((iVar12 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
                 in_a1 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar12 + 0x265934U) - uVar3) >> uVar3 * 8;
        uVar14 = iVar12 + 0x265943U & 7;
        uVar3 = iVar12 + 0x26593cU & 7;
        uVar20 = (*(long *)((iVar12 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
                 in_t2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar12 + 0x26593cU) - uVar3) >> uVar3 * 8;
        tmp_pic.time._4_4_ = *(int *)((int)pfile_wrk.pic[0].subject[5] + iVar12);
        uVar17 = (ulong)tmp_pic.time._4_4_;
        puVar1 = (undefined *)((int)tmp_pic.subject + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar14) * 8;
        puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
        tmp_pic.subject._4_8_ = uVar19;
        puVar21 = &tmp_pic.time.hour;
        uVar14 = (uint)puVar21 & 7;
        puVar21 = puVar21 + -uVar14;
        *(ulong *)puVar21 = *(ulong *)puVar21 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8
        ;
        tmp_pic._16_8_ = uVar20;
        iVar12 = iVar24;
        if (iVar26 < (int)(uint)pfile_wrk.pic_num) {
          uVar19 = 0x260000;
          uVar14 = iVar26 * 0x1c + 0x26592c;
          iVar22 = iVar26;
          do {
            if ((ulong)(long)(int)tmp_pic.score < (ulong)(long)*(int *)(uVar14 + 0x10)) {
              uVar3 = uVar14 + 7 & 7;
              uVar2 = uVar14 & 7;
              tmp_pic._0_8_ =
                   (*(long *)((uVar14 + 7) - uVar3) << (7 - uVar3) * 8 |
                   (ulong)pfile_wrk.pic_num & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                   -1L << (8 - uVar2) * 8 | *(ulong *)(uVar14 - uVar2) >> uVar2 * 8;
              uVar3 = uVar14 + 0xf & 7;
              uVar2 = uVar14 + 8 & 7;
              tmp_pic.subject._4_8_ =
                   (*(long *)((uVar14 + 0xf) - uVar3) << (7 - uVar3) * 8 |
                   (long)*(int *)(uVar14 + 0x10) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                   -1L << (8 - uVar2) * 8 | *(ulong *)((uVar14 + 8) - uVar2) >> uVar2 * 8;
              uVar3 = uVar14 + 0x17 & 7;
              uVar2 = uVar14 + 0x10 & 7;
              uVar20 = (*(long *)((uVar14 + 0x17) - uVar3) << (7 - uVar3) * 8 |
                       uVar20 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)((uVar14 + 0x10) - uVar2) >> uVar2 * 8;
              tmp_pic.time._4_4_ = *(int *)(uVar14 + 0x18);
              uVar17 = (ulong)tmp_pic.time._4_4_;
              puVar1 = (undefined *)((int)tmp_pic.subject + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar5 = (ulong *)(puVar1 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar5 = (ulong *)(puVar1 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar3) * 8;
              puVar21 = &tmp_pic.time.hour;
              uVar3 = (uint)puVar21 & 7;
              puVar21 = puVar21 + -uVar3;
              *(ulong *)puVar21 =
                   *(ulong *)puVar21 & -1L << (uVar3 + 1) * 8 | uVar20 >> (7 - uVar3) * 8;
              tmp_pic._16_8_ = uVar20;
              iVar12 = iVar22;
            }
            iVar22 = iVar22 + 1;
            uVar14 = uVar14 + 0x1c;
          } while (iVar22 < (int)(uint)pfile_wrk.pic_num);
        }
        iVar6 = iVar24 * 0x1c;
        iVar7 = iVar12 * 0x1c;
        uVar14 = iVar6 + 0x265933U & 7;
        uVar3 = iVar6 + 0x26592cU & 7;
        uVar18 = (*(long *)((iVar6 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar6 + 0x26592cU) - uVar3) >> uVar3 * 8;
        uVar14 = iVar6 + 0x26593bU & 7;
        uVar3 = iVar6 + 0x265934U & 7;
        uVar20 = (*(long *)((iVar6 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
                 uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar6 + 0x265934U) - uVar3) >> uVar3 * 8;
        uVar14 = iVar6 + 0x265943U & 7;
        uVar3 = iVar6 + 0x26593cU & 7;
        uVar17 = (*(long *)((iVar6 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
                 uVar17 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar6 + 0x26593cU) - uVar3) >> uVar3 * 8;
        iVar22 = *(int *)&pfile_wrk.pic[iVar24].time.pad;
        uVar19 = (ulong)iVar22;
        uVar14 = iVar7 + 0x265933U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265933U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar18 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x26592cU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26592cU) - uVar14);
        *puVar5 = uVar18 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar7 + 0x26593bU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26593bU) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x265934U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265934U) - uVar14);
        *puVar5 = uVar20 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar7 + 0x265943U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265943U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar17 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x26593cU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26593cU) - uVar14);
        *puVar5 = uVar17 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        *(int *)&pfile_wrk.pic[iVar12].time.pad = iVar22;
        uVar14 = iVar6 + 0x265933U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265933U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x26592cU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26592cU) - uVar14);
        *puVar5 = tmp_pic._0_8_ << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar6 + 0x26593bU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26593bU) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x265934U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265934U) - uVar14);
        *puVar5 = tmp_pic.subject._4_8_ << uVar14 * 8 |
                  *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar6 + 0x265943U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265943U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x26593cU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26593cU) - uVar14);
        *puVar5 = tmp_pic._16_8_ << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        *(int *)&pfile_wrk.pic[iVar24].time.pad = tmp_pic.time._4_4_;
        iVar12 = iVar26 * 0x1c;
        in_a1 = tmp_pic._0_8_;
        in_t1 = 0x265928;
        in_t2 = tmp_pic.subject._4_8_;
        in_t3 = tmp_pic._16_8_;
        iVar24 = iVar26;
      } while (iVar26 < (int)(pfile_wrk.pic_num - 1));
    }
  }
  else if (pfile_wrk.sort_key < 2) {
    if ((pfile_wrk.sort_key == '\0') && (0 < (int)(pfile_wrk.pic_num - 1))) {
      iVar12 = 0;
      iVar24 = 0;
      do {
        iVar26 = iVar24 + 1;
        uVar14 = iVar12 + 0x265933U & 7;
        uVar3 = iVar12 + 0x26592cU & 7;
        uVar19 = (*(long *)((iVar12 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
                 in_a1 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar12 + 0x26592cU) - uVar3) >> uVar3 * 8;
        uVar14 = iVar12 + 0x26593bU & 7;
        uVar3 = iVar12 + 0x265934U & 7;
        uVar20 = (*(long *)((iVar12 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
                 in_a2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar12 + 0x265934U) - uVar3) >> uVar3 * 8;
        uVar14 = iVar12 + 0x265943U & 7;
        uVar3 = iVar12 + 0x26593cU & 7;
        uVar17 = (*(long *)((iVar12 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
                 in_a3 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar12 + 0x26593cU) - uVar3) >> uVar3 * 8;
        tmp_pic.time._4_4_ = *(int *)((int)pfile_wrk.pic[0].subject[5] + iVar12);
        uVar18 = (ulong)tmp_pic.time._4_4_;
        puVar1 = (undefined *)((int)tmp_pic.subject + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
        puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8;
        tmp_pic.subject._4_8_ = uVar20;
        puVar21 = &tmp_pic.time.hour;
        uVar14 = (uint)puVar21 & 7;
        puVar21 = puVar21 + -uVar14;
        *(ulong *)puVar21 = *(ulong *)puVar21 & -1L << (uVar14 + 1) * 8 | uVar17 >> (7 - uVar14) * 8
        ;
        tmp_pic._16_8_ = uVar17;
        iVar12 = iVar24;
        tmp_pic._0_8_ = uVar19;
        if (iVar26 < (int)(uint)pfile_wrk.pic_num) {
          uVar13 = (ulong)(iVar24 * 0x1c + 0x1c);
          puVar21 = &pfile_wrk.pic[iVar24].time.pad;
          iVar22 = iVar26;
          do {
            uVar8 = TimeIsMoney(tmp_pic.time.year);
            uVar9 = TimeIsMoney(puVar21[0x1f]);
            if ((ulong)(long)(char)uVar8 < (ulong)(long)(char)uVar9) {
              uVar14 = (int)puVar21 + 0xbU & 7;
              uVar3 = (int)puVar21 + 4U & 7;
              in_t2 = (*(long *)(((int)puVar21 + 0xbU) - uVar14) << (7 - uVar14) * 8 |
                      in_t2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                      *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
              uVar14 = (int)puVar21 + 0x13U & 7;
              uVar3 = (int)puVar21 + 0xcU & 7;
              in_t3 = (*(long *)(((int)puVar21 + 0x13U) - uVar14) << (7 - uVar14) * 8 |
                      in_t3 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                      *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
              uVar14 = (int)puVar21 + 0x1bU & 7;
              uVar3 = (int)puVar21 + 0x14U & 7;
              tmp_pic._16_8_ =
                   (*(long *)(((int)puVar21 + 0x1bU) - uVar14) << (7 - uVar14) * 8 |
                   (long)(char)uVar9 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                   -1L << (8 - uVar3) * 8 | *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
              tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
              uVar13 = (ulong)tmp_pic.time._4_4_;
              puVar1 = (undefined *)((int)tmp_pic.subject + 3);
              uVar14 = (uint)puVar1 & 7;
              puVar5 = (ulong *)(puVar1 + -uVar14);
              *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_t2 >> (7 - uVar14) * 8;
              puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
              uVar14 = (uint)puVar1 & 7;
              puVar5 = (ulong *)(puVar1 + -uVar14);
              *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_t3 >> (7 - uVar14) * 8;
              tmp_pic.subject._4_8_ = in_t3;
              puVar16 = &tmp_pic.time.hour;
              uVar14 = (uint)puVar16 & 7;
              puVar16 = puVar16 + -uVar14;
              *(ulong *)puVar16 =
                   *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
              iVar12 = iVar22;
              tmp_pic._0_8_ = in_t2;
            }
            else {
              uVar8 = TimeIsMoney(tmp_pic.time.year);
              uVar9 = TimeIsMoney(puVar21[0x1f]);
              uVar20 = 0x260000;
              if (uVar8 == uVar9) {
                bVar10 = TimeIsMoney(tmp_pic.time.month);
                uVar15 = (ulong)puVar21[0x1e];
                bVar11 = TimeIsMoney(puVar21[0x1e]);
                if (bVar10 < bVar11) {
                  uVar14 = (int)puVar21 + 0xbU & 7;
                  uVar3 = (int)puVar21 + 4U & 7;
                  tmp_pic._0_8_ =
                       (*(long *)(((int)puVar21 + 0xbU) - uVar14) << (7 - uVar14) * 8 |
                       uVar15 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                       *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
                  uVar14 = (int)puVar21 + 0x13U & 7;
                  uVar3 = (int)puVar21 + 0xcU & 7;
                  uVar19 = (*(long *)(((int)puVar21 + 0x13U) - uVar14) << (7 - uVar14) * 8 |
                           uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                           -1L << (8 - uVar3) * 8 |
                           *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
                  uVar14 = (int)puVar21 + 0x1bU & 7;
                  uVar3 = (int)puVar21 + 0x14U & 7;
                  tmp_pic._16_8_ =
                       (*(long *)(((int)puVar21 + 0x1bU) - uVar14) << (7 - uVar14) * 8 |
                       uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                       *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
                  tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
                  uVar17 = (ulong)tmp_pic.time._4_4_;
                  puVar1 = (undefined *)((int)tmp_pic.subject + 3);
                  uVar14 = (uint)puVar1 & 7;
                  puVar5 = (ulong *)(puVar1 + -uVar14);
                  *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar14) * 8;
                  puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
                  uVar14 = (uint)puVar1 & 7;
                  puVar5 = (ulong *)(puVar1 + -uVar14);
                  *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
                  tmp_pic.subject._4_8_ = uVar19;
                  puVar16 = &tmp_pic.time.hour;
                  uVar14 = (uint)puVar16 & 7;
                  puVar16 = puVar16 + -uVar14;
                  *(ulong *)puVar16 =
                       *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 |
                       tmp_pic._16_8_ >> (7 - uVar14) * 8;
                  iVar12 = iVar22;
                }
                else {
                  uVar8 = TimeIsMoney(tmp_pic.time.month);
                  uVar9 = TimeIsMoney(puVar21[0x1e]);
                  if (uVar8 == uVar9) {
                    bVar10 = TimeIsMoney(tmp_pic.time.day);
                    bVar11 = TimeIsMoney(puVar21[0x1d]);
                    if (bVar10 < bVar11) {
                      uVar14 = (int)puVar21 + 0xbU & 7;
                      uVar3 = (int)puVar21 + 4U & 7;
                      uVar18 = (*(long *)(((int)puVar21 + 0xbU) - uVar14) << (7 - uVar14) * 8 |
                               uVar18 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                               -1L << (8 - uVar3) * 8 |
                               *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
                      uVar14 = (int)puVar21 + 0x13U & 7;
                      uVar3 = (int)puVar21 + 0xcU & 7;
                      in_t2 = (*(long *)(((int)puVar21 + 0x13U) - uVar14) << (7 - uVar14) * 8 |
                              in_t2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                              -1L << (8 - uVar3) * 8 |
                              *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
                      uVar14 = (int)puVar21 + 0x1bU & 7;
                      uVar3 = (int)puVar21 + 0x14U & 7;
                      in_t3 = (*(long *)(((int)puVar21 + 0x1bU) - uVar14) << (7 - uVar14) * 8 |
                              in_t3 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                              -1L << (8 - uVar3) * 8 |
                              *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
                      tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
                      puVar1 = (undefined *)((int)tmp_pic.subject + 3);
                      uVar14 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar14);
                      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar18 >> (7 - uVar14) * 8;
                      puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
                      uVar14 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar14);
                      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_t2 >> (7 - uVar14) * 8;
                      tmp_pic.subject._4_8_ = in_t2;
                      puVar16 = &tmp_pic.time.hour;
                      uVar14 = (uint)puVar16 & 7;
                      puVar16 = puVar16 + -uVar14;
                      *(ulong *)puVar16 =
                           *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 | in_t3 >> (7 - uVar14) * 8;
                      tmp_pic._16_8_ = in_t3;
                      iVar12 = iVar22;
                      tmp_pic._0_8_ = uVar18;
                    }
                    else {
                      uVar8 = TimeIsMoney(tmp_pic.time.day);
                      uVar9 = TimeIsMoney(puVar21[0x1d]);
                      if (uVar8 == uVar9) {
                        bVar10 = TimeIsMoney(tmp_pic.time.hour);
                        uVar20 = (ulong)puVar21[0x1b];
                        bVar11 = TimeIsMoney(puVar21[0x1b]);
                        if (bVar10 < bVar11) {
                          uVar14 = (int)puVar21 + 0xbU & 7;
                          uVar3 = (int)puVar21 + 4U & 7;
                          uVar13 = (*(long *)(((int)puVar21 + 0xbU) - uVar14) << (7 - uVar14) * 8 |
                                   uVar13 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                   -1L << (8 - uVar3) * 8 |
                                   *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
                          uVar14 = (int)puVar21 + 0x13U & 7;
                          uVar3 = (int)puVar21 + 0xcU & 7;
                          tmp_pic.subject._4_8_ =
                               (*(long *)(((int)puVar21 + 0x13U) - uVar14) << (7 - uVar14) * 8 |
                               uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                               -1L << (8 - uVar3) * 8 |
                               *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
                          uVar14 = (int)puVar21 + 0x1bU & 7;
                          uVar3 = (int)puVar21 + 0x14U & 7;
                          uVar19 = (*(long *)(((int)puVar21 + 0x1bU) - uVar14) << (7 - uVar14) * 8 |
                                   uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                   -1L << (8 - uVar3) * 8 |
                                   *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
                          tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
                          puVar1 = (undefined *)((int)tmp_pic.subject + 3);
                          uVar14 = (uint)puVar1 & 7;
                          puVar5 = (ulong *)(puVar1 + -uVar14);
                          *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar13 >> (7 - uVar14) * 8;
                          puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
                          uVar14 = (uint)puVar1 & 7;
                          puVar5 = (ulong *)(puVar1 + -uVar14);
                          *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 |
                                    tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
                          puVar16 = &tmp_pic.time.hour;
                          uVar14 = (uint)puVar16 & 7;
                          puVar16 = puVar16 + -uVar14;
                          *(ulong *)puVar16 =
                               *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 |
                               uVar19 >> (7 - uVar14) * 8;
                          tmp_pic._16_8_ = uVar19;
                          iVar12 = iVar22;
                          tmp_pic._0_8_ = uVar13;
                        }
                        else {
                          uVar8 = TimeIsMoney(tmp_pic.time.hour);
                          uVar9 = TimeIsMoney(puVar21[0x1b]);
                          if (uVar8 == uVar9) {
                            bVar10 = TimeIsMoney(tmp_pic.time.minute);
                            bVar11 = TimeIsMoney(puVar21[0x1a]);
                            if (bVar10 < bVar11) {
                              uVar14 = (int)puVar21 + 0xbU & 7;
                              uVar3 = (int)puVar21 + 4U & 7;
                              uVar17 = (*(long *)(((int)puVar21 + 0xbU) - uVar14) <<
                                        (7 - uVar14) * 8 |
                                       uVar17 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                       -1L << (8 - uVar3) * 8 |
                                       *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
                              uVar14 = (int)puVar21 + 0x13U & 7;
                              uVar3 = (int)puVar21 + 0xcU & 7;
                              uVar18 = (*(long *)(((int)puVar21 + 0x13U) - uVar14) <<
                                        (7 - uVar14) * 8 |
                                       uVar18 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                       -1L << (8 - uVar3) * 8 |
                                       *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
                              uVar14 = (int)puVar21 + 0x1bU & 7;
                              uVar3 = (int)puVar21 + 0x14U & 7;
                              in_t2 = (*(long *)(((int)puVar21 + 0x1bU) - uVar14) <<
                                       (7 - uVar14) * 8 |
                                      in_t2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                      -1L << (8 - uVar3) * 8 |
                                      *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
                              tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
                              in_t3 = (ulong)tmp_pic.time._4_4_;
                              puVar1 = (undefined *)((int)tmp_pic.subject + 3);
                              uVar14 = (uint)puVar1 & 7;
                              puVar5 = (ulong *)(puVar1 + -uVar14);
                              *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 |
                                        uVar17 >> (7 - uVar14) * 8;
                              puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
                              uVar14 = (uint)puVar1 & 7;
                              puVar5 = (ulong *)(puVar1 + -uVar14);
                              *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 |
                                        uVar18 >> (7 - uVar14) * 8;
                              tmp_pic.subject._4_8_ = uVar18;
                              puVar16 = &tmp_pic.time.hour;
                              uVar14 = (uint)puVar16 & 7;
                              puVar16 = puVar16 + -uVar14;
                              *(ulong *)puVar16 =
                                   *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 |
                                   in_t2 >> (7 - uVar14) * 8;
                              tmp_pic._16_8_ = in_t2;
                              iVar12 = iVar22;
                              tmp_pic._0_8_ = uVar17;
                            }
                            else {
                              uVar8 = TimeIsMoney(tmp_pic.time.minute);
                              uVar9 = TimeIsMoney(puVar21[0x1a]);
                              if (uVar8 == uVar9) {
                                uVar8 = TimeIsMoney(tmp_pic.time.second);
                                uVar20 = (ulong)puVar21[0x19];
                                uVar9 = TimeIsMoney(puVar21[0x19]);
                                if ((ulong)(long)(char)uVar8 < (ulong)(long)(char)uVar9) {
                                  uVar14 = (int)puVar21 + 0xbU & 7;
                                  uVar3 = (int)puVar21 + 4U & 7;
                                  tmp_pic._0_8_ =
                                       (*(long *)(((int)puVar21 + 0xbU) - uVar14) <<
                                        (7 - uVar14) * 8 |
                                       (long)(char)uVar9 & 0xffffffffffffffffU >> (uVar14 + 1) * 8)
                                       & -1L << (8 - uVar3) * 8 |
                                       *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
                                  uVar14 = (int)puVar21 + 0x13U & 7;
                                  uVar3 = (int)puVar21 + 0xcU & 7;
                                  uVar13 = (*(long *)(((int)puVar21 + 0x13U) - uVar14) <<
                                            (7 - uVar14) * 8 |
                                           uVar13 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                           -1L << (8 - uVar3) * 8 |
                                           *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
                                  uVar14 = (int)puVar21 + 0x1bU & 7;
                                  uVar3 = (int)puVar21 + 0x14U & 7;
                                  tmp_pic._16_8_ =
                                       (*(long *)(((int)puVar21 + 0x1bU) - uVar14) <<
                                        (7 - uVar14) * 8 |
                                       uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                                       -1L << (8 - uVar3) * 8 |
                                       *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
                                  tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
                                  uVar19 = (ulong)tmp_pic.time._4_4_;
                                  puVar1 = (undefined *)((int)tmp_pic.subject + 3);
                                  uVar14 = (uint)puVar1 & 7;
                                  puVar5 = (ulong *)(puVar1 + -uVar14);
                                  *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 |
                                            tmp_pic._0_8_ >> (7 - uVar14) * 8;
                                  puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
                                  uVar14 = (uint)puVar1 & 7;
                                  puVar5 = (ulong *)(puVar1 + -uVar14);
                                  *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 |
                                            uVar13 >> (7 - uVar14) * 8;
                                  tmp_pic.subject._4_8_ = uVar13;
                                  puVar16 = &tmp_pic.time.hour;
                                  uVar14 = (uint)puVar16 & 7;
                                  puVar16 = puVar16 + -uVar14;
                                  *(ulong *)puVar16 =
                                       *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 |
                                       tmp_pic._16_8_ >> (7 - uVar14) * 8;
                                  iVar12 = iVar22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar20 = 0x260000;
            iVar22 = iVar22 + 1;
            puVar21 = puVar21 + 0x1c;
          } while (iVar22 < (int)(uint)pfile_wrk.pic_num);
        }
        iVar6 = iVar24 * 0x1c;
        iVar7 = iVar12 * 0x1c;
        uVar14 = iVar6 + 0x265933U & 7;
        uVar3 = iVar6 + 0x26592cU & 7;
        uVar19 = (*(long *)((iVar6 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((iVar6 + 0x26592cU) - uVar3) >> uVar3 * 8;
        uVar14 = iVar6 + 0x26593bU & 7;
        uVar3 = iVar6 + 0x265934U & 7;
        in_a2 = (*(long *)((iVar6 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
                uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((iVar6 + 0x265934U) - uVar3) >> uVar3 * 8;
        uVar14 = iVar6 + 0x265943U & 7;
        uVar3 = iVar6 + 0x26593cU & 7;
        in_a3 = (*(long *)((iVar6 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
                uVar17 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((iVar6 + 0x26593cU) - uVar3) >> uVar3 * 8;
        iVar22 = *(int *)&pfile_wrk.pic[iVar24].time.pad;
        in_t1 = (ulong)iVar22;
        uVar14 = iVar7 + 0x265933U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265933U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x26592cU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26592cU) - uVar14);
        *puVar5 = uVar19 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar7 + 0x26593bU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26593bU) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_a2 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x265934U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265934U) - uVar14);
        *puVar5 = in_a2 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar7 + 0x265943U & 7;
        puVar5 = (ulong *)((iVar7 + 0x265943U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_a3 >> (7 - uVar14) * 8;
        uVar14 = iVar7 + 0x26593cU & 7;
        puVar5 = (ulong *)((iVar7 + 0x26593cU) - uVar14);
        *puVar5 = in_a3 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        *(int *)&pfile_wrk.pic[iVar12].time.pad = iVar22;
        uVar14 = iVar6 + 0x265933U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265933U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x26592cU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26592cU) - uVar14);
        *puVar5 = tmp_pic._0_8_ << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar6 + 0x26593bU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26593bU) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x265934U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265934U) - uVar14);
        *puVar5 = tmp_pic.subject._4_8_ << uVar14 * 8 |
                  *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        uVar14 = iVar6 + 0x265943U & 7;
        puVar5 = (ulong *)((iVar6 + 0x265943U) - uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
        uVar14 = iVar6 + 0x26593cU & 7;
        puVar5 = (ulong *)((iVar6 + 0x26593cU) - uVar14);
        *puVar5 = tmp_pic._16_8_ << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        *(int *)&pfile_wrk.pic[iVar24].time.pad = tmp_pic.time._4_4_;
        in_a1 = 0x260000;
        iVar12 = iVar26 * 0x1c;
        in_t2 = tmp_pic._0_8_;
        in_t3 = tmp_pic.subject._4_8_;
        iVar24 = iVar26;
      } while (iVar26 < (int)(pfile_wrk.pic_num - 1));
    }
  }
  else if ((pfile_wrk.sort_key == '\x02') && (lVar25 = 0, 0 < (int)(pfile_wrk.pic_num - 1))) {
    in_t3 = 0x1c;
    in_t2 = 0x1c;
    iVar12 = 0;
    do {
      iVar24 = (int)lVar25;
      lVar25 = (long)(iVar24 + 1);
      if ((((&((PICTURE_WRK *)pfile_wrk.pic[0].subject[-1])->adr_no)[iVar12 + 3] & 2) == 0) &&
         (lVar25 < (long)(ulong)pfile_wrk.pic_num)) {
        puVar21 = &pfile_wrk.pic[iVar24].time.pad;
        puVar16 = &pfile_wrk.pic[iVar24 + 1].status;
        lVar23 = lVar25;
        do {
          if ((*puVar16 & 2) != 0) {
            iVar12 = iVar24 * 0x1c;
            uVar14 = (int)puVar21 + 0xbU & 7;
            uVar3 = (int)puVar21 + 4U & 7;
            uVar20 = (*(long *)(((int)puVar21 + 0xbU) - uVar14) << (7 - uVar14) * 8 |
                     (long)(int)puVar21 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                     -1L << (8 - uVar3) * 8 | *(ulong *)(((int)puVar21 + 4U) - uVar3) >> uVar3 * 8;
            uVar14 = (int)puVar21 + 0x13U & 7;
            uVar3 = (int)puVar21 + 0xcU & 7;
            tmp_pic.subject._4_8_ =
                 (*(long *)(((int)puVar21 + 0x13U) - uVar14) << (7 - uVar14) * 8 |
                 (ulong)pfile_wrk.pic_num & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                 -1L << (8 - uVar3) * 8 | *(ulong *)(((int)puVar21 + 0xcU) - uVar3) >> uVar3 * 8;
            uVar14 = (int)puVar21 + 0x1bU & 7;
            uVar3 = (int)puVar21 + 0x14U & 7;
            tmp_pic._16_8_ =
                 (*(long *)(((int)puVar21 + 0x1bU) - uVar14) << (7 - uVar14) * 8 |
                 0xffffffffffffffffU >> (uVar14 + 1) * 8 & 0x265928) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)(((int)puVar21 + 0x14U) - uVar3) >> uVar3 * 8;
            tmp_pic.time._4_4_ = *(int *)(puVar21 + 0x1c);
            puVar1 = (undefined *)((int)tmp_pic.subject + 3);
            uVar14 = (uint)puVar1 & 7;
            puVar5 = (ulong *)(puVar1 + -uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8;
            puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
            uVar14 = (uint)puVar1 & 7;
            puVar5 = (ulong *)(puVar1 + -uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
            puVar16 = &tmp_pic.time.hour;
            uVar14 = (uint)puVar16 & 7;
            puVar16 = puVar16 + -uVar14;
            *(ulong *)puVar16 =
                 *(ulong *)puVar16 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
            uVar14 = iVar12 + 0x265933U & 7;
            uVar3 = iVar12 + 0x26592cU & 7;
            uVar17 = (*(long *)((iVar12 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
                     uVar20 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)((iVar12 + 0x26592cU) - uVar3) >> uVar3 * 8;
            uVar14 = iVar12 + 0x26593bU & 7;
            uVar3 = iVar12 + 0x265934U & 7;
            uVar18 = (*(long *)((iVar12 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
                     tmp_pic.subject._4_8_ & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                     -1L << (8 - uVar3) * 8 | *(ulong *)((iVar12 + 0x265934U) - uVar3) >> uVar3 * 8;
            uVar14 = iVar12 + 0x265943U & 7;
            uVar3 = iVar12 + 0x26593cU & 7;
            uVar19 = (*(long *)((iVar12 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
                     tmp_pic._16_8_ & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
                     -1L << (8 - uVar3) * 8 | *(ulong *)((iVar12 + 0x26593cU) - uVar3) >> uVar3 * 8;
            uVar4 = *(undefined4 *)&pfile_wrk.pic[iVar24].time.pad;
            uVar14 = (int)puVar21 + 0xbU & 7;
            puVar5 = (ulong *)(((int)puVar21 + 0xbU) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar17 >> (7 - uVar14) * 8;
            uVar14 = (int)puVar21 + 4U & 7;
            puVar5 = (ulong *)(((int)puVar21 + 4U) - uVar14);
            *puVar5 = uVar17 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            uVar14 = (int)puVar21 + 0x13U & 7;
            puVar5 = (ulong *)(((int)puVar21 + 0x13U) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar18 >> (7 - uVar14) * 8;
            uVar14 = (int)puVar21 + 0xcU & 7;
            puVar5 = (ulong *)(((int)puVar21 + 0xcU) - uVar14);
            *puVar5 = uVar18 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            uVar14 = (int)puVar21 + 0x1bU & 7;
            puVar5 = (ulong *)(((int)puVar21 + 0x1bU) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
            uVar14 = (int)puVar21 + 0x14U & 7;
            puVar5 = (ulong *)(((int)puVar21 + 0x14U) - uVar14);
            *puVar5 = uVar19 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            *(undefined4 *)(puVar21 + 0x1c) = uVar4;
            uVar14 = iVar12 + 0x265933U & 7;
            puVar5 = (ulong *)((iVar12 + 0x265933U) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8;
            uVar14 = iVar12 + 0x26592cU & 7;
            puVar5 = (ulong *)((iVar12 + 0x26592cU) - uVar14);
            *puVar5 = uVar20 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            uVar14 = iVar12 + 0x26593bU & 7;
            puVar5 = (ulong *)((iVar12 + 0x26593bU) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
            uVar14 = iVar12 + 0x265934U & 7;
            puVar5 = (ulong *)((iVar12 + 0x265934U) - uVar14);
            *puVar5 = tmp_pic.subject._4_8_ << uVar14 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            uVar14 = iVar12 + 0x265943U & 7;
            puVar5 = (ulong *)((iVar12 + 0x265943U) - uVar14);
            *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
            uVar14 = iVar12 + 0x26593cU & 7;
            puVar5 = (ulong *)((iVar12 + 0x26593cU) - uVar14);
            *puVar5 = tmp_pic._16_8_ << uVar14 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
            *(int *)&pfile_wrk.pic[iVar24].time.pad = tmp_pic.time._4_4_;
            uVar14 = (uint)pfile_wrk.pic_num;
            goto LAB_001d8968;
          }
          lVar23 = (long)((int)lVar23 + 1);
          puVar21 = puVar21 + 0x1c;
          puVar16 = puVar16 + 0x1c;
        } while (lVar23 < (long)(ulong)pfile_wrk.pic_num);
        uVar14 = (uint)pfile_wrk.pic_num;
      }
      else {
        uVar14 = (uint)pfile_wrk.pic_num;
      }
LAB_001d8968:
      iVar12 = (iVar24 + 1) * 0x1c;
      in_t1 = 0x260000;
    } while (lVar25 < (int)(uVar14 - 1));
  }
  if ((pfile_wrk.skey_bak != '\0') && (0 < (int)(pfile_wrk.pic_num - 1))) {
    iVar12 = 1;
    iVar24 = 0;
    do {
      iVar22 = iVar12;
      iVar12 = iVar24 * 0x1c;
      uVar14 = iVar12 + 0x265933U & 7;
      uVar3 = iVar12 + 0x26592cU & 7;
      uVar19 = (*(long *)((iVar12 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
               in_t1 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((iVar12 + 0x26592cU) - uVar3) >> uVar3 * 8;
      uVar14 = iVar12 + 0x26593bU & 7;
      uVar3 = iVar12 + 0x265934U & 7;
      tmp_pic.subject._4_8_ =
           (*(long *)((iVar12 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
           in_t2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((iVar12 + 0x265934U) - uVar3) >> uVar3 * 8;
      uVar14 = iVar12 + 0x265943U & 7;
      uVar3 = iVar12 + 0x26593cU & 7;
      tmp_pic._16_8_ =
           (*(long *)((iVar12 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
           in_t3 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((iVar12 + 0x26593cU) - uVar3) >> uVar3 * 8;
      tmp_pic.time._4_4_ = *(int *)&pfile_wrk.pic[iVar24].time.pad;
      puVar1 = (undefined *)((int)tmp_pic.subject + 3);
      uVar14 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
      puVar1 = (undefined *)((int)tmp_pic.subject[2] + 3);
      uVar14 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
      puVar21 = &tmp_pic.time.hour;
      uVar14 = (uint)puVar21 & 7;
      puVar21 = puVar21 + -uVar14;
      *(ulong *)puVar21 =
           *(ulong *)puVar21 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
      iVar26 = (((uint)pfile_wrk.pic_num - iVar24) + -1) * 0x1c;
      uVar14 = iVar26 + 0x265933U & 7;
      uVar3 = iVar26 + 0x26592cU & 7;
      uVar20 = (*(long *)((iVar26 + 0x265933U) - uVar14) << (7 - uVar14) * 8 |
               uVar19 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((iVar26 + 0x26592cU) - uVar3) >> uVar3 * 8;
      uVar14 = iVar26 + 0x26593bU & 7;
      uVar3 = iVar26 + 0x265934U & 7;
      in_t2 = (*(long *)((iVar26 + 0x26593bU) - uVar14) << (7 - uVar14) * 8 |
              tmp_pic.subject._4_8_ & 0xffffffffffffffffU >> (uVar14 + 1) * 8) &
              -1L << (8 - uVar3) * 8 | *(ulong *)((iVar26 + 0x265934U) - uVar3) >> uVar3 * 8;
      uVar14 = iVar26 + 0x265943U & 7;
      uVar3 = iVar26 + 0x26593cU & 7;
      in_t3 = (*(long *)((iVar26 + 0x265943U) - uVar14) << (7 - uVar14) * 8 |
              tmp_pic._16_8_ & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((iVar26 + 0x26593cU) - uVar3) >> uVar3 * 8;
      uVar4 = *(undefined4 *)((int)&pfile_wrk + iVar26 + 0x1c);
      uVar14 = iVar12 + 0x265933U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265933U) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar20 >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x26592cU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26592cU) - uVar14);
      *puVar5 = uVar20 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      uVar14 = iVar12 + 0x26593bU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26593bU) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_t2 >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x265934U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265934U) - uVar14);
      *puVar5 = in_t2 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      uVar14 = iVar12 + 0x265943U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265943U) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | in_t3 >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x26593cU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26593cU) - uVar14);
      *puVar5 = in_t3 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      *(undefined4 *)&pfile_wrk.pic[iVar24].time.pad = uVar4;
      iVar12 = (((uint)pfile_wrk.pic_num - iVar24) + -1) * 0x1c;
      in_t1 = (ulong)tmp_pic.time._4_4_;
      uVar14 = iVar12 + 0x265933U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265933U) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | uVar19 >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x26592cU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26592cU) - uVar14);
      *puVar5 = uVar19 << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      uVar14 = iVar12 + 0x26593bU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26593bU) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x265934U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265934U) - uVar14);
      *puVar5 = tmp_pic.subject._4_8_ << uVar14 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      uVar14 = iVar12 + 0x265943U & 7;
      puVar5 = (ulong *)((iVar12 + 0x265943U) - uVar14);
      *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar14) * 8;
      uVar14 = iVar12 + 0x26593cU & 7;
      puVar5 = (ulong *)((iVar12 + 0x26593cU) - uVar14);
      *puVar5 = tmp_pic._16_8_ << uVar14 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
      *(int *)((int)&pfile_wrk + iVar12 + 0x1c) = tmp_pic.time._4_4_;
      iVar12 = iVar22 + 1;
      iVar24 = iVar22;
    } while (iVar22 < (int)((uint)pfile_wrk.pic_num - (iVar22 + 1)));
  }
  return;
}

static void DspMainMenu(u_char csr0, u_char csr1, u_char mode, short int pos_x, short int pos_y, short int alpha) {
	u_short anm;
	
  short anm;
  
  if (csr0 == 0xff) {
    if (albm_wrk.mmenu_tmr != 0) {
      albm_wrk.mmenu_tmr = albm_wrk.mmenu_tmr + -1;
    }
  }
  else if ((ushort)albm_wrk.mmenu_tmr < 0xf) {
    albm_wrk.mmenu_tmr = albm_wrk.mmenu_tmr + 1;
  }
  if (csr1 == 0xff) {
    FlashStarYW(flsh,'@',0x80,'x','\0');
  }
  else {
    FlashStarYW(flsh,'@',0x80,'x',0xff);
  }
  anm = (short)(int)((float)((0xf - (uint)(ushort)albm_wrk.mmenu_tmr) * 300) / 15.0);
  if (ingame_wrk.clear_count != 0) {
    if (mode != '\x02') {
      DspMenuWin('\0',csr0,mode,pos_x,pos_y,(float)(uint)flsh[0].alpha,alpha,anm);
      return;
    }
    DspMenuWin('\x01',csr0,'\x02',pos_x,pos_y,(float)(uint)flsh[0].alpha,alpha,anm);
    return;
  }
  DspMenuWin('\x01',csr0,mode,pos_x,pos_y,(float)(uint)flsh[0].alpha,alpha,anm);
  return;
}

static void DspSideMenu(u_char csr0, u_char csr1, u_char mode, short int pos_x, short int pos_y, short int alpha) {
	u_short anm;
	
  short sVar1;
  
  if ((csr0 == 0xff) || (csr1 == 0xff)) {
    FlashStarYW(flsh + 1,'@',0x80,'x',0xff);
    sVar1 = albm_wrk.smenu_tmr + -1;
    if (albm_wrk.smenu_tmr == 0) {
      albm_wrk.menu_csr_bak = 0xff;
      sVar1 = albm_wrk.smenu_tmr;
    }
  }
  else {
    albm_wrk.menu_csr_bak = csr0;
    FlashStarYW(flsh + 1,'@',0x80,'x','\0');
    sVar1 = albm_wrk.smenu_tmr;
    if ((ushort)albm_wrk.smenu_tmr < 0xf) {
      sVar1 = albm_wrk.smenu_tmr + 1;
    }
  }
  albm_wrk.smenu_tmr = sVar1;
  sVar1 = (short)(int)((float)((0xf - (uint)(ushort)albm_wrk.smenu_tmr) * 300) / 15.0);
  if (albm_wrk.menu_csr_bak != '\x02') {
    if (albm_wrk.menu_csr_bak != '\x03') {
      return;
    }
    DspMenuWin('\x03',csr1,mode,pos_x,pos_y + 0x26,(float)(uint)flsh[1].alpha,alpha,sVar1);
    return;
  }
  DspMenuWin('\x02',csr1,mode,pos_x,pos_y,(float)(uint)flsh[1].alpha,alpha,sVar1);
  return;
}

static void DspMenuWin(u_char type, u_char csr, u_char mode, short int pos_x, short int pos_y, float flash, short int alpha, u_short anm) {
	int i;
	short int pos_v;
	short int pos_h;
	short int alp1;
	short int alp2;
	short int alp3;
	short int mode_char;
	short int char_posy;
	int rgb;
	
  uchar r;
  int iVar1;
  ushort pos_x_00;
  short sVar2;
  ushort uVar3;
  undefined *rgb_00;
  byte alp;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong in_hi;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int rgb;
  uint local_10c;
  uint local_108;
  ushort mode_char;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  
  iVar10 = (int)(short)pos_y;
  local_10c = (int)(char)csr & 0xff;
  local_108 = (int)(char)mode & 0xff;
  iVar8 = (int)(short)pos_x;
  uVar4 = (uint)(short)alpha;
  uVar11 = (int)anm & 0xffff;
  uVar9 = uVar4;
  if (uVar11 == 0) {
    iVar1 = 0;
    iVar5 = 0;
    uVar11 = uVar4;
  }
  else if (uVar11 < 200) {
    if (uVar11 < 100) {
      iVar6 = uVar4 * (100 - uVar11);
      in_hi = (ulong)(uint)(iVar6 >> 0x1f);
      iVar5 = 0;
      iVar1 = 0;
      uVar11 = (int)(short)(int)((float)iVar6 / 100.0);
    }
    else {
      iVar6 = uVar4 * (200 - uVar11);
      in_hi = (ulong)(uint)(iVar6 >> 0x1f);
      iVar5 = 0;
      iVar1 = (int)(short)(int)((float)((uVar11 - 100) * 0x1e) / 100.0);
      uVar9 = (int)(short)(int)((float)iVar6 / 100.0);
      uVar11 = 0;
    }
  }
  else {
    iVar5 = (uVar11 - 200) * 0x19;
    in_hi = (ulong)(uint)(iVar5 >> 0x1f);
    iVar1 = 0x1e;
    iVar5 = (int)(short)(int)((float)iVar5 / 100.0);
    uVar4 = (uint)(short)(int)((float)(uVar4 * (300 - uVar11)) / 100.0);
    uVar9 = 0;
    uVar11 = 0;
  }
  r = (uchar)(int)flash;
  CLRtoRGB(&rgb,r,r,r);
  if (type != '\0') {
    if (type == '\x01') {
      fVar16 = (float)uVar11;
      fVar15 = 1.0;
      fVar14 = (float)uVar4;
      PutSpriteYW(0xb8,0xb9,(float)(iVar8 + -0x21),(float)(iVar10 + -0x66),0.0,0x808080,fVar16,
                  DAT_00355ee4,1.0,0,0x14000,1,0,0);
      fVar17 = (float)(iVar8 + iVar5 + 0x4b);
      PutSpriteYW(0xb6,0xb7,fVar17,(float)(iVar10 + 0x1d),0.0,0x808080,fVar14,fVar15,fVar15,0,0xff,1
                  ,0,0);
      PutSpriteYW(0xb6,0xb7,(float)(iVar8 - (iVar5 + -0x4b)),(float)(iVar10 + 0x43),0.0,0x808080,
                  fVar14,fVar15,fVar15,0,0xff,1,0,0);
      PutSpriteYW(0xb6,0xb7,fVar17,(float)(iVar10 + 0x69),0.0,0x808080,fVar14,fVar15,fVar15,0,0xff,1
                  ,0,0);
      PutSpriteYW(0xa9,0xaa,(float)(iVar8 + 0x11),(float)(iVar10 + iVar1 + 0x43),0.0,0x808080,
                  (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
      PutSpriteYW(0xa9,0xaa,(float)(iVar8 + 0x6c),(float)(iVar10 - (iVar1 + -0x43)),0.0,0x808080,
                  (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
      if (local_10c == 0) {
        fVar17 = (float)iVar8;
        PutSpriteYW(0x124,0x124,fVar17,(float)iVar10,0.0,rgb,fVar16,fVar15,fVar15,0,0xff,1,0,0);
        PutSpriteYW(0x125,0x125,fVar17,(float)iVar10,0.0,0x808080,fVar16,fVar15,fVar15,0,0xff,1,0,0)
        ;
        sVar2 = (short)local_10c;
      }
      else {
        sVar2 = (short)local_10c;
        if (local_10c == 1) {
          fVar17 = (float)iVar8;
          PutSpriteYW(0x124,0x124,fVar17,(float)iVar10,0.0,0x808080,fVar16,fVar15,fVar15,0,0xff,1,0,
                      0);
          PutSpriteYW(0x125,0x125,fVar17,(float)iVar10,0.0,rgb,fVar16,fVar15,fVar15,0,0xff,1,0,0);
          sVar2 = (short)local_10c;
        }
      }
      alp = (byte)uVar11;
      pos_x_00 = (ushort)((uint)((iVar8 + 0x24) * 0x10000) >> 0x10);
      uVar3 = sVar2 * 0x26 + pos_y + 0x25;
    }
    else {
      if (type != '\x02') {
        if (type != '\x03') {
          return;
        }
        fVar14 = (float)uVar11;
        fVar15 = 1.0;
        local_f8 = uVar11 & 0xff;
        PutSpriteYW(0xb8,0xba,(float)(iVar8 + -0x21),(float)(iVar10 + -0x66),0.0,0x808080,fVar14,
                    DAT_00355eec,1.0,0,0x14000,1,0,0);
        local_fc = iVar8 - (iVar5 + -0x4b);
        local_e8 = iVar8 + 0x6c;
        local_f0 = iVar8 + 0x24;
        local_ec = iVar10 + 0x25;
        fVar17 = (float)iVar10;
        iVar12 = local_10c + 0x128;
        iVar13 = iVar10 + 0x43;
        iVar7 = iVar10 + 0x1d;
        iVar6 = 1;
        do {
          fVar16 = (float)iVar7;
          iVar7 = iVar7 + 0x4c;
          PutSpriteYW(0xb6,0xb7,(float)(iVar8 + iVar5 + 0x4b),fVar16,0.0,0x808080,(float)uVar4,
                      fVar15,fVar15,0,0xff,1,0,0);
          iVar6 = iVar6 + -1;
          fVar16 = (float)iVar13;
          iVar13 = iVar13 + 0x4c;
          PutSpriteYW(0xb6,0xb7,(float)local_fc,fVar16,0.0,0x808080,(float)uVar4,fVar15,fVar15,0,
                      0xff,1,0,0);
        } while (-1 < iVar6);
        PutSpriteYW(0xab,0xac,(float)(iVar8 + 0x11),(float)(iVar10 + iVar1 + 0x56),0.0,0x808080,
                    (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
        PutSpriteYW(0xab,0xac,(float)local_e8,(float)(iVar10 - (iVar1 + -0x56)),0.0,0x808080,
                    (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
        iVar10 = 0x128;
        do {
          sVar2 = (short)iVar10;
          if (iVar10 == iVar12) {
            PutSpriteYW(sVar2,sVar2,(float)iVar8,fVar17,0.0,rgb,fVar14,fVar15,fVar15,0,0xff,1,0,0);
          }
          else {
            PutSpriteYW(sVar2,sVar2,(float)iVar8,fVar17,0.0,0x808080,fVar14,fVar15,fVar15,0,0xff,1,0
                        ,0);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 299);
        CmnCursol((ushort)local_f0,
                  (ushort)(((local_ec | (uint)in_hi) + local_10c * 0x26) * 0x10000 >> 0x10),0x52,
                  0x1e,flash,(byte)local_f8,0x5000);
        return;
      }
      fVar17 = (float)uVar11;
      fVar15 = 1.0;
      fVar14 = 0.0;
      local_f8 = uVar11 & 0xff;
      PutSpriteYW(0xb8,0xba,(float)(iVar8 + -0x21),(float)(iVar10 + -0x66),0.0,0x808080,fVar17,
                  DAT_00355ee8,1.0,0,0x14000,1,0,0);
      local_100 = iVar8 - (iVar5 + -0x4b);
      local_e8 = iVar8 + 0x6c;
      local_f0 = iVar8 + 0x24;
      local_ec = iVar10 + 0x25;
      iVar13 = iVar10 + 0x43;
      iVar7 = iVar10 + 0x1d;
      iVar6 = 1;
      do {
        fVar16 = (float)iVar7;
        iVar7 = iVar7 + 0x4c;
        PutSpriteYW(0xb6,0xb7,(float)(iVar8 + iVar5 + 0x4b),fVar16,fVar14,0x808080,(float)uVar4,
                    fVar15,fVar15,0,0xff,1,0,0);
        iVar6 = iVar6 + -1;
        fVar16 = (float)iVar13;
        iVar13 = iVar13 + 0x4c;
        PutSpriteYW(0xb6,0xb7,(float)local_100,fVar16,fVar14,0x808080,(float)uVar4,fVar15,fVar15,0,
                    0xff,1,0,0);
      } while (-1 < iVar6);
      PutSpriteYW(0xab,0xac,(float)(iVar8 + 0x11),(float)(iVar10 + iVar1 + 0x56),fVar14,0x808080,
                  (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
      PutSpriteYW(0xab,0xac,(float)local_e8,(float)(iVar10 - (iVar1 + -0x56)),fVar14,0x808080,
                  (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
      uVar9 = 0;
      do {
        uVar4 = uVar9 + 1;
        iVar5 = (int)(local_108 + uVar4) % 3;
        iVar1 = (int)((uVar9 * 0x26 + iVar10) * 0x10000) >> 0x10;
        _mode_char = iVar5 + 299;
        sVar2 = (short)_mode_char;
        rgb_00 = (undefined *)rgb;
        if (uVar9 == local_10c) {
LAB_001d9d90:
          PutSpriteYW(sVar2,sVar2,(float)iVar8,(float)iVar1,0.0,(int)rgb_00,fVar17,fVar15,fVar15,0,
                      0xff,1,0,0);
          uVar3 = (ushort)iVar5;
        }
        else {
          if (uVar9 == 2) {
            rgb_00 = &DAT_00404040;
            goto LAB_001d9d90;
          }
          PutSpriteYW(sVar2,sVar2,(float)iVar8,(float)iVar1,0.0,0x808080,fVar17,fVar15,fVar15,0,0xff
                      ,1,0,0);
          uVar3 = (ushort)iVar5;
        }
        uVar9 = uVar4;
      } while ((int)uVar4 < 3);
      alp = (byte)local_f8;
      pos_x_00 = (ushort)local_f0;
      uVar3 = ((ushort)local_ec | uVar3) + (short)local_10c * 0x26;
    }
    goto LAB_001d9e44;
  }
  fVar17 = (float)uVar11;
  fVar15 = 1.0;
  PutSpriteYW(0xb8,0xbb,(float)(iVar8 + -0x21),(float)(iVar10 + -0x66),0.0,0x808080,fVar17,
              DAT_00355ee0,1.0,0,0x14000,1,0,0);
  local_f8 = uVar11 & 0xff;
  local_e8 = iVar8 + 0x6c;
  local_f4 = iVar1 + -0x69;
  local_f0 = iVar8 + 0x24;
  local_ec = iVar10 + 0x25;
  iVar13 = iVar10 + 0x43;
  iVar7 = iVar10 + 0x1d;
  iVar6 = 2;
  do {
    fVar14 = (float)iVar7;
    iVar7 = iVar7 + 0x4c;
    PutSpriteYW(0xb6,0xb7,(float)(iVar8 + iVar5 + 0x4b),fVar14,0.0,0x808080,(float)uVar4,fVar15,
                fVar15,0,0xff,1,0,0);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar6 = 1;
  do {
    fVar14 = (float)iVar13;
    iVar13 = iVar13 + 0x4c;
    PutSpriteYW(0xb6,0xb7,(float)(iVar8 - (iVar5 + -0x4b)),fVar14,0.0,0x808080,(float)uVar4,fVar15,
                fVar15,0,0xff,1,0,0);
    uVar3 = (ushort)in_hi;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  PutSpriteYW(0xad,0xae,(float)(iVar8 + 0x11),(float)(iVar10 + iVar1 + 0x69),0.0,0x808080,
              (float)uVar9,fVar15,fVar15,0,0xff,1,0,0);
  PutSpriteYW(0xad,0xae,(float)local_e8,(float)(iVar10 - local_f4),0.0,0x808080,(float)uVar9,fVar15,
              fVar15,0,0xff,1,0,0);
  if (local_108 == 0) {
    _mode_char = 300;
  }
  else if (local_108 == 1) {
    _mode_char = 299;
  }
  if (local_10c == 1) {
    fVar14 = (float)iVar8;
    fVar15 = 0.0;
    PutSpriteYW(0x124,0x124,fVar14,(float)iVar10,0.0,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x125,0x125,fVar14,(float)iVar10,fVar15,rgb,fVar17,1.0,1.0,0,0xff,1,0,0);
    sVar2 = (short)_mode_char;
    rgb = 0x808080;
LAB_001d95a0:
    PutSpriteYW(sVar2,sVar2,fVar14,(float)iVar10,fVar15,rgb,fVar17,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x127,0x127,fVar14,(float)iVar10,fVar15,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
    pos_x_00 = (ushort)local_f0;
  }
  else {
    pos_x_00 = (ushort)local_f0;
    if ((int)local_10c < 2) {
      if (local_10c == 0) {
        fVar14 = (float)iVar8;
        fVar15 = 0.0;
        PutSpriteYW(0x124,0x124,fVar14,(float)iVar10,0.0,rgb,fVar17,1.0,1.0,0,0xff,1,0,0);
        PutSpriteYW(0x125,0x125,fVar14,(float)iVar10,fVar15,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
        sVar2 = (short)_mode_char;
        rgb = 0x808080;
        goto LAB_001d95a0;
      }
    }
    else {
      if (local_10c == 2) {
        fVar14 = (float)iVar8;
        fVar15 = 0.0;
        PutSpriteYW(0x124,0x124,fVar14,(float)iVar10,0.0,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
        PutSpriteYW(0x125,0x125,fVar14,(float)iVar10,fVar15,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
        sVar2 = (short)_mode_char;
        goto LAB_001d95a0;
      }
      if (local_10c == 3) {
        fVar14 = (float)iVar8;
        fVar16 = (float)iVar10;
        fVar15 = 0.0;
        PutSpriteYW(0x124,0x124,fVar14,fVar16,0.0,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
        PutSpriteYW(0x125,0x125,fVar14,fVar16,fVar15,0x808080,fVar17,1.0,1.0,0,0xff,1,0,0);
        PutSpriteYW((short)_mode_char,(short)_mode_char,fVar14,fVar16,fVar15,0x808080,fVar17,1.0,1.0
                    ,0,0xff,1,0,0);
        PutSpriteYW(0x127,0x127,fVar14,fVar16,fVar15,rgb,fVar17,1.0,1.0,0,0xff,1,0,0);
        pos_x_00 = (ushort)local_f0;
      }
    }
  }
  alp = (byte)local_f8;
  uVar3 = ((ushort)local_ec | uVar3) + (short)local_10c * 0x26;
LAB_001d9e44:
  CmnCursol(pos_x_00,uVar3,0x52,0x1e,flash,alp,0x5000);
  return;
}

static void DspDetail(u_char csr, short int pos_x, short int pos_y, short int alpha, u_char dsp) {
	int i;
	DISP_STR disp_str;
	u_char obj_num;
	u_short obj_py[4][3];
	int width;
	
  undefined *puVar1;
  ulong *puVar2;
  byte alp;
  float pos_y_00;
  int iVar3;
  short (*pasVar4) [2];
  int iVar5;
  uint uVar6;
  int iVar7;
  float pos_x_00;
  float alp_00;
  float pos_x_01;
  float pos_y_01;
  DISP_STR disp_str;
  short obj_py [4] [3];
  uint local_110;
  
  local_110 = (int)(char)csr & 0xff;
  iVar7 = (int)(short)alpha;
  puVar1 = (undefined *)((int)obj_py[1] + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd20 >> (7 - uVar6) * 8;
  obj_py._0_8_ = DAT_0034fd20;
  puVar1 = (undefined *)((int)obj_py[2] + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd28 >> (7 - uVar6) * 8;
  obj_py._8_8_ = DAT_0034fd28;
  puVar1 = (undefined *)((int)obj_py[3] + 5);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd30 >> (7 - uVar6) * 8;
  obj_py._16_8_ = DAT_0034fd30;
  alp = (byte)alpha;
  if (dsp < 2) {
    alp_00 = (float)iVar7;
    CmnWindow(5,pos_x,pos_y,alp,0x80);
    pos_x_01 = (float)(int)(short)pos_x;
    pos_y_01 = (float)(int)(short)pos_y;
    PutSpriteYW(0x187,0x187,15.0,332.0,-90.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x131,0x134,pos_x_01,pos_y_01,0.0,0x505050,alp_00,1.0,1.0,0,0xff,1,0,0);
    pos_y_00 = DAT_00355ef0;
    if (local_110 < pfile_wrk.pic_num) {
      pos_x_00 = 70.0;
      PutSpriteYW(0x165,0x166,70.0,DAT_00355ef0,0.0,0x808080,alp_00,DAT_00355ef4,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x167,0x168,pos_x_00,pos_y_00,0.0,0x808080,alp_00,1.0,12.0,0,0xff,1,0,0);
      if ((pfile_wrk.pic[local_110].status & 2) != 0) {
        PutSpriteYW(0x142,0x145,pos_x_01,pos_y_01,0.0,0xc0c0c0,(float)((iVar7 << 2) / 5),1.0,1.0,0,
                    0xff,1,1,0);
      }
    }
  }
  if ((dsp == '\0') || (dsp == '\x02')) {
    if (local_110 < pfile_wrk.pic_num) {
      pasVar4 = pfile_wrk.pic[local_110].subject;
      uVar6 = 0;
      iVar5 = 2;
      do {
        if ((*pasVar4)[0] != 0) {
          uVar6 = uVar6 + 1 & 0xff;
        }
        iVar5 = iVar5 + -1;
        pasVar4 = pasVar4[1];
      } while (-1 < iVar5);
      if (uVar6 == 0) {
        PutStringYW(0x21,3,pos_x + 0x1c4,pos_y + obj_py[0][0] + 0x10b,0x808080,alp,0x28000,0);
      }
      else if (uVar6 != 0) {
        iVar5 = uVar6 * 6;
        pasVar4 = pfile_wrk.pic[local_110].subject;
        do {
          if ((*pasVar4)[0] != 0) {
            ig_menu_str.str =
                 GetSubjectNameAddr((*pasVar4)[0],(*pasVar4)[1],
                                    (ushort)pfile_wrk.pic[local_110].msn_no);
            iVar3 = GetStrWidth((uchar *)ig_menu_str.str);
            CopyStrDToStr(&disp_str,&ig_menu_str);
            disp_str.pos_x = (int)(short)pos_x - (iVar3 / 2 + -0x1e2);
            disp_str.r = 0x80;
            disp_str.pos_y = (uint)*(ushort *)((int)obj_py + iVar5) + (short)pos_y + 0x10b;
            disp_str.g = 0x80;
            disp_str.b = 0x80;
            disp_str.pri = 0x28000;
            disp_str.alpha = iVar7;
            SetMessageV2(&disp_str);
          }
          iVar5 = iVar5 + 2;
          uVar6 = uVar6 - 1;
          pasVar4 = pasVar4[1];
        } while (uVar6 != 0);
      }
    }
    PutDate(pfile_wrk.pic + local_110,pos_x + 0x172,pos_y + 0x154,alpha,0x28000);
    PutStringYW(0x1e,pfile_wrk.pic[local_110].room,pos_x + 0x1e2,pos_y + 0x173,0x808080,alp,0x28000,
                1);
    PutNumberYW(0,pfile_wrk.pic[local_110].score,pos_x + 0x1a5,pos_y + 399,1.0,1.0,0x808080,alpha,
                0x28000,7,0);
  }
  return;
}

static void DspNotice(short int pos_x, short int pos_y, short int alpha, u_char now, u_char max, u_char btn) {
  return;
}

static void DspSumnale(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int i;
	int pic_num;
	u_short pic_x;
	u_short pic_y;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float alp;
  
  alp = (float)(int)(short)alpha;
  iVar8 = (int)(short)pos_x;
  iVar7 = (int)(short)pos_y;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    uVar6 = iVar7 + (iVar3 >> 3) * 0x39 + 0x55 & 0xffff;
    uVar5 = iVar8 + (iVar4 + (iVar3 >> 3) * -8) * 0x48 + 0x23 & 0xffff;
    iVar4 = iVar4 + 1;
    PutSpriteYW(0x155,0x155,(float)uVar5,(float)uVar6,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
    PutNumberYW(5,iVar4,(short)uVar5 + 0x1f,(short)uVar6 + 0x22,1.0,1.0,0x808080,alpha,0x2d000,2,1);
  } while (iVar4 < 0x18);
  iVar4 = 0;
  PutSpriteYW(0x149,0x154,(float)(iVar8 + 0x18),(float)(iVar7 + 0x4b),0.0,0x808080,alp,1.0,1.0,0,
              0xff,1,0,0);
  uVar5 = (uint)pfile_wrk.pic_num;
  bVar1 = true;
  while( true ) {
    iVar3 = iVar4 + 7;
    if (bVar1) {
      iVar3 = iVar4;
    }
    iVar2 = iVar4 + (iVar3 >> 3) * -8;
    bVar1 = iVar4 < (int)uVar5;
    iVar4 = iVar4 + 1;
    if (bVar1) {
      PutSpriteYW(0x15a,0x15a,(float)(iVar8 + iVar2 * 0x48 + 0x23 & 0xffff),
                  (float)(iVar7 + (iVar3 >> 3) * 0x39 + 0x55 & 0xffff),0.0,0x808080,alp,1.0,1.0,0,
                  0xff,1,0,0);
    }
    if (0x17 < iVar4) break;
    bVar1 = -1 < iVar4;
  }
  return;
}

static void DspPhtLst(u_char csr, u_char csr_top, short int pos_x, short int pos_y, short int alpha) {
	int i;
	int pic_num;
	
  int iVar1;
  byte alp;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort in_hi;
  float rot;
  float pos_x_00;
  float pos_y_00;
  float alp_00;
  int pic_num;
  
  uVar6 = (int)(char)csr_top & 0xff;
  alp = (byte)alpha;
  alp_00 = (float)(int)(short)alpha;
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  iVar5 = 0;
  CmnWindow(4,pos_x,pos_y,alp,0x80);
  rot = 0.0;
  PutSpriteYW(0x169,0x16a,pos_x_00,pos_y_00,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x16b,0x16b,pos_x_00,pos_y_00,rot,0x808080,alp_00,1.0,DAT_00355ef8,0,0xff,1,0,0);
  iVar2 = pfile_wrk.pic_num - uVar6;
  if (5 < iVar2) {
    iVar2 = 6;
  }
  SideBar(pfile_wrk.pic_num,'\x06',0x95,(uchar)uVar6,0x16e,alp,0,0);
  AlbmTrFlsh(pos_x,pos_y,alpha);
  PutSpriteYW(0x188,0x188,pos_x_00,pos_y_00,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x189,0x189,pos_x_00,pos_y_00,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x18a,0x18a,pos_x_00,pos_y_00,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x18b,0x18b,pos_x_00,pos_y_00,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  if (0 < iVar2) {
    do {
      iVar3 = iVar5 + uVar6;
      if ((pfile_wrk.pic[iVar3].status & 2) != 0) {
        PutStringYW(0x21,7,pos_x + 0x30,(short)iVar5 * 0x18 + pos_y + 0x5e,0x808080,alp,0x23000,0);
      }
      iVar1 = iVar5 * 0x18;
      in_hi = (ushort)(iVar1 >> 0x1f);
      iVar4 = iVar1 + (short)pos_y + 0x5f;
      iVar5 = iVar5 + 1;
      PutDate(pfile_wrk.pic + iVar3,pos_x + 0x49,(ushort)((uint)(iVar4 * 0x10000) >> 0x10),alpha,
              0x23000);
      PutStringYW(0x1e,pfile_wrk.pic[iVar3].room,pos_x + 0x133,(short)iVar4 - 2,0x808080,alp,0x23000
                  ,0);
      PutNumberYW(3,pfile_wrk.pic[iVar3].score,pos_x + 0x1f1,(short)iVar1 + pos_y + 0x5e,1.0,1.0,
                  0x808080,alpha,0x23000,7,0);
    } while (iVar5 < iVar2);
  }
  FlashStarYW(flsh + 3,'@','`','Z','\0');
  CmnCursol(pos_x + 0x2c,(pos_y + 0x5d | in_hi) + (((short)(char)csr & 0xffU) - (short)uVar6) * 0x18
            ,0x23c,0x1a,(float)(uint)flsh[3].alpha,alp,0x23000);
  return;
}

static void DspFilmCut(u_char csr, short int pos_x, short int pos_y, short int alpha) {
  float rot;
  float alp;
  float pos_y_00;
  float pos_x_00;
  
  pos_x_00 = (float)(int)(short)pos_x;
  alp = (float)(int)(short)alpha;
  pos_y_00 = (float)(int)(short)pos_y;
  rot = 0.0;
  PutSpriteYW(0x171,0x176,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x183,0x184,pos_x_00,pos_y_00,rot,0x808080,alp,DAT_00355efc,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x185,0x186,pos_x_00,pos_y_00,rot,0x808080,alp,1.0,16.0,0,0xff,1,0,0);
  return;
}

static void DspSideSmnl(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int pht_no;
	
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float rot;
  float alp;
  
  iVar6 = (int)(short)pos_y;
  iVar5 = (int)(short)alpha;
  iVar4 = (int)(short)pos_x;
  uVar3 = (long)(char)csr & 0xff;
  if (1 < pfile_wrk.pic_num) {
    uVar1 = (uint)uVar3;
    if (uVar3 == 0) {
      uVar1 = (uint)pfile_wrk.pic_num;
    }
    alp = (float)iVar5;
    rot = 0.0;
    PutSpriteYW(0x159,0x159,(float)(iVar4 + 0x2e),(float)(iVar6 + 0xb9),0.0,0x808080,alp,1.0,1.0,0,
                0xff,1,0,0);
    if ((pfile_wrk.pic[uVar1 - 1].status & 2) != 0) {
      PutSpriteYW(0x156,0x156,(float)(iVar4 + 0x2d),(float)(iVar6 + 0xb7),rot,0xc0c0c0,
                  (float)((iVar5 << 2) / 5),1.0,1.0,0,0xff,1,1,0);
    }
    iVar2 = 0;
    if ((long)uVar3 < (long)(int)(pfile_wrk.pic_num - 1)) {
      iVar2 = (uint)uVar3 + 1;
    }
    PutSpriteYW(0x159,0x159,(float)(iVar4 + 0x21e),(float)(iVar6 + 0xb9),rot,0x808080,alp,1.0,1.0,0,
                0xff,1,0,0);
    if ((pfile_wrk.pic[iVar2].status & 2) != 0) {
      PutSpriteYW(0x156,0x156,(float)(iVar4 + 0x21d),(float)(iVar6 + 0xb7),rot,0xc0c0c0,
                  (float)((iVar5 << 2) / 5),1.0,1.0,0,0xff,1,1,0);
      return;
    }
  }
  return;
}

static void DspBtmDtl(u_char csr, short int pos_x, short int pos_y, short int alpha) {
	int i;
	DISP_STR disp_str;
	u_char obj_num;
	u_short obj_py[4][3];
	int width;
	
  undefined *puVar1;
  ulong *puVar2;
  int iVar3;
  short (*pasVar4) [2];
  int iVar5;
  uint uVar6;
  float alp;
  DISP_STR disp_str;
  short obj_py [4] [3];
  uint local_e0;
  int local_dc;
  byte local_d8;
  ushort local_cc;
  ushort local_c8;
  ushort local_c4;
  ushort local_c0;
  ushort local_bc;
  ushort local_b8;
  
  local_dc = (int)(short)alpha;
  local_bc = pos_x + 0x182;
  local_cc = pos_x + 0x1b3;
  local_c8 = pos_y + 0x154;
  local_c0 = pos_x + 0x1f0;
  local_c4 = pos_y + 0x173;
  local_b8 = pos_y + 399;
  local_e0 = (int)(char)csr & 0xff;
  alp = (float)local_dc;
  puVar1 = (undefined *)((int)obj_py[1] + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  local_d8 = (byte)alpha;
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd20 >> (7 - uVar6) * 8;
  obj_py._0_8_ = DAT_0034fd20;
  puVar1 = (undefined *)((int)obj_py[2] + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd28 >> (7 - uVar6) * 8;
  obj_py._8_8_ = DAT_0034fd28;
  puVar1 = (undefined *)((int)obj_py[3] + 5);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034fd30 >> (7 - uVar6) * 8;
  obj_py._16_8_ = DAT_0034fd30;
  iVar5 = 2;
  CmnWindow(6,pos_x,pos_y,(byte)alpha,0x80);
  PutSpriteYW(0x187,0x187,14.0,DAT_00355f00,-90.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x177,0x17a,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x505050,alp,1.0,1.0
              ,0,0xff,1,0,0);
  uVar6 = 0;
  pasVar4 = pfile_wrk.pic[local_e0].subject;
  do {
    if ((*pasVar4)[0] != 0) {
      uVar6 = uVar6 + 1 & 0xff;
    }
    iVar5 = iVar5 + -1;
    pasVar4 = pasVar4[1];
  } while (-1 < iVar5);
  if (uVar6 == 0) {
    PutStringYW(0x21,3,pos_x + 0xc0,pos_y + obj_py[0][0] + 0x15b,0x808080,local_d8,0x28000,0);
  }
  else if (uVar6 != 0) {
    iVar5 = uVar6 * 6;
    pasVar4 = pfile_wrk.pic[local_e0].subject;
    do {
      if ((*pasVar4)[0] != 0) {
        ig_menu_str.str =
             GetSubjectNameAddr((*pasVar4)[0],(*pasVar4)[1],(ushort)pfile_wrk.pic[local_e0].msn_no);
        iVar3 = GetStrWidth((uchar *)ig_menu_str.str);
        CopyStrDToStr(&disp_str,&ig_menu_str);
        disp_str.pos_y = (uint)*(ushort *)((int)obj_py + iVar5) + (short)pos_y + 0x15b;
        disp_str.pos_x = (int)(short)pos_x - (iVar3 / 2 + -0xd8);
        disp_str.r = 0x80;
        disp_str.g = 0x80;
        disp_str.b = 0x80;
        disp_str.alpha = local_dc;
        disp_str.pri = 0x28000;
        SetMessageV2(&disp_str);
      }
      iVar5 = iVar5 + 2;
      uVar6 = uVar6 - 1;
      pasVar4 = pasVar4[1];
    } while (uVar6 != 0);
  }
  PutDate(pfile_wrk.pic + local_e0,local_bc,local_c8,(ushort)local_dc,0x28000);
  PutStringYW(0x1e,pfile_wrk.pic[local_e0].room,local_c0,local_c4,0x808080,local_d8,0x28000,1);
  PutNumberYW(0,pfile_wrk.pic[local_e0].score,local_cc,local_b8,1.0,1.0,0x808080,(ushort)local_dc,
              0x28000,7,0);
  return;
}

static void DspCherry(short int pos_x, short int pos_y, short int alpha) {
	int rgb;
	
  float rot;
  float alp;
  int rgb;
  
  if (pfile_wrk.pic_num < 2) {
    FlashStarYW(flsh + 4,0xc0,'@','<',0xff);
    CLRtoRGB(&rgb,flsh[4].alpha,flsh[4].alpha,flsh[4].alpha);
  }
  else {
    alp = (float)(int)(short)alpha;
    rot = 0.0;
    PutSpriteYW(0x17d,0x17e,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,alp,1.0,
                1.0,0,0xff,1,0,0);
    FlashStarYW(flsh + 4,0xc0,'@','<','\0');
    CLRtoRGB(&rgb,flsh[4].alpha,flsh[4].alpha,flsh[4].alpha);
    PutSpriteYW(0x17b,0x17c,(float)(int)(short)pos_x,(float)(int)(short)pos_y,rot,rgb,alp,1.0,1.0,0,
                0xff,1,0,0);
  }
  return;
}

static void AlbmTrFlsh(short int pos_x, short int pos_y, short int alpha) {
	int rgb;
	
  int rgb;
  
  if (pfile_wrk.pic_num < 7) {
    FlashStarYW((FLSH_CORE *)&DAT_00402b3c,'@',0xc0,'<',0xff);
    CLRtoRGB(&rgb,DAT_00402b3d,DAT_00402b3d,DAT_00402b3d);
    PutSpriteYW(0x16c,0x16d,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,(int)&DAT_00404040
                ,(float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  }
  else {
    FlashStarYW(flsh + 5,'@',0xc0,'<','\0');
    CLRtoRGB(&rgb,flsh[5].alpha,flsh[5].alpha,flsh[5].alpha);
    PutSpriteYW(0x16c,0x16d,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,rgb,
                (float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  }
  return;
}

u_char TimeIsMoney(u_char hexhex) {
  return (char)(((int)(char)hexhex & 0xffU) >> 4) * '\n' + (hexhex & 0xf);
}

u_char MoneyIsTime(u_char time) {
  uint uVar1;
  
  uVar1 = ((int)(char)time & 0xffU) % 10;
  return (char)uVar1 + (char)(((int)(((int)(char)time & 0xffU) - uVar1) / 10 & 0xffU) << 4);
}

void PutDate(PICTURE_WRK *pic_inf, short int pos_x, short int pos_y, short int alpha, int pri) {
  byte alpha_00;
  uchar uVar1;
  
  alpha_00 = (byte)alpha;
  uVar1 = TimeIsMoney((pic_inf->time).year);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 4,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  uVar1 = TimeIsMoney((pic_inf->time).month);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 0x29,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  uVar1 = TimeIsMoney((pic_inf->time).day);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 0x4e,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  uVar1 = TimeIsMoney((pic_inf->time).hour);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 0x76,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  uVar1 = TimeIsMoney((pic_inf->time).minute);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 0x9b,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  uVar1 = TimeIsMoney((pic_inf->time).second);
  PutNumberYW(3,(int)(char)uVar1,pos_x + 0xc0,pos_y,1.0,1.0,0x808080,alpha,pri,2,1);
  PutStringYW(0x21,5,pos_x + 0x1d,pos_y + 1,0x808080,alpha_00,pri,0);
  PutStringYW(0x21,5,pos_x + 0x42,pos_y + 1,0x808080,alpha_00,pri,0);
  PutStringYW(0x21,6,pos_x + 0x91,pos_y + 2,0x808080,alpha_00,pri,0);
  PutStringYW(0x21,6,pos_x + 0xb6,pos_y + 2,0x808080,alpha_00,pri,0);
  return;
}

static void AlbmCntInit() {
  return;
}

static void AlbmCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void AlbmModeInOut(char is_outgame) {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0x15) {
    if ((ushort)yw2d.inn_mode_cnt < 0xb) {
      yw2d.io_a[5] = 0.0;
      yw2d.io_a[4] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
      yw2d.io_a[3] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    }
    else {
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[5] = (float)(((ushort)yw2d.inn_mode_cnt - 10) * 0x80) / 10.0;
      yw2d.io_a[3] = 0.0;
    }
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = yw2d.io_a[4];
    yw2d.io_a[2] = yw2d.io_a[3];
    if (is_outgame == '\0') {
      PlayerStatusYW((uchar)(int)yw2d.io_a[3]);
      DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
      DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    }
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
    if ((ushort)yw2d.out_mode_cnt < 0xc) {
      iVar1 = (ushort)yw2d.out_mode_cnt - 1;
      yw2d.io_a[5] = 0.0;
      yw2d.io_a[4] = (float)(iVar1 * 0x80) / 10.0;
      yw2d.io_a[3] = (1.0 - (float)iVar1 / 10.0) * 128.0;
    }
    else {
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[5] = (float)(((ushort)yw2d.out_mode_cnt - 0xb) * 0x80) / 10.0;
      yw2d.io_a[3] = 0.0;
    }
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = yw2d.io_a[4];
    yw2d.io_a[2] = yw2d.io_a[3];
    if (is_outgame == '\0') {
      PlayerStatusYW((uchar)(int)yw2d.io_a[3]);
      DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
      DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    }
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

static void AlbmModeInOut2(char is_outgame) {
  if (is_outgame == '\0') {
    if ((ushort)yw2d.inn_mode_cnt < 0xb) {
      DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
      return;
    }
    if (yw2d.out_mode_cnt != 0) {
      DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
      return;
    }
  }
  return;
}

static u_char SealChk() {
	int i;
	u_char seal_num;
	
  uchar *puVar1;
  int iVar2;
  uchar uVar3;
  
  uVar3 = '\0';
  iVar2 = 0x17;
  puVar1 = &pfile_wrk.pic[0].status;
  do {
    if ((*puVar1 & 2) != 0) {
      uVar3 = uVar3 + '\x01';
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 0x1c;
  } while (-1 < iVar2);
  return uVar3;
}

void OutGameInitPhoto() {
  yw2d.inn_mode_cnt = 0;
  ig_menu_wrk.mode = '\x02';
  return;
}

int isPhotoEnd() {
  return (int)(ig_menu_wrk.mode != '\x02');
}

float GetPhtDispAlpha() {
  float fVar1;
  
  fVar1 = 0.0;
  if (yw2d.inn_mode_cnt != 0) {
    fVar1 = yw2d.io_a[5];
  }
  return fVar1;
}
