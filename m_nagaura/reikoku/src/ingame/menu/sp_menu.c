// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#143,  not equal)
enum {
	SPMENU_START_INN = 0,
	SPMENU_START = 1,
	SPMENU_BREAK = 2,
	SPMENU_PSVP_WAIT = 3,
	SPMENU_MODE_SLCT_INN = 4,
	SPMENU_MODE_SLCT = 5,
	SPMODE_SAVE_INN = 6,
	SPMODE_SAVE = 7,
	SPMODE_SAVE_OUT = 8,
	SPMODE_ALBM_PSVP_WAIT = 9,
	SPMODE_ALBM_INN = 10,
	SPMODE_ALBM_LOAD = 11,
	SPMODE_ALBM_PRE = 12,
	SPMODE_ALBM = 13,
	SPMODE_ALBM_AFT = 14,
	SPMODE_ALBM_SAVE = 15,
	SPMODE_ALBM_OUT = 16,
	SPMENU_MODE_FILM = 17,
	SPMENU_EXIT = 18,
	SPMENU_OPEN_FOR_MSN = 19,
	SPMENU_END_FOR_MSN = 20
};

typedef struct {
	u_char mode;
	u_char sub_mode;
	u_char csr[5];
} SAVE_POINT_MENU_WRK;

// warning: multiple differing types with the same name (#143,  not equal)
enum {
	CNT_STTS_IDOL = 0,
	CNT_START = 1,
	CNT_HALF_MASK = 2,
	CNT_FILE_CHECK = 3,
	CNT_SLOT_SELECT = 4,
	CNT_FILE_SELECT = 5,
	CNT_FINAL_ANSWER = 6,
	CNT_WAIT_SAVE_END = 7,
	CNT_BREAK = 8,
	CNT_END = 9
};

// warning: multiple differing types with the same name (#143,  not equal)
enum {
	SVP_MODE_NONE = -1,
	SVP_MODE_SAVE = 0,
	SVP_MODE_ALBUM = 1,
	SVP_MODE_FILM = 2,
	SVP_MODE_EXIT = 3,
	SVP_MODE_NUM = 4
};

// warning: multiple differing types with the same name (#143,  not equal)
enum {
	ALBM_MODE_INIT = 0,
	ALBM_MODE_LOAD_FOR_INN = 1,
	ALBM_MODE_DATA_LOAD = 2,
	ALBM_MODE_PRE = 3,
	ALBM_MODE_BODY = 4,
	ALBM_MODE_AFT = 5,
	ALBM_MODE_DATA_SAVE = 6,
	ALBM_MODE_OUT = 7
};

typedef struct {
	signed char slct_mode;
	u_char str_no;
	u_char top_alp;
	u_char bak_alp;
	u_char msg_alp;
	u_char ans_alp;
	u_char btn_tmr;
	u_char atype_buf[2];
	u_char load_side;
	u_char in_album;
} DSP_SVP;

typedef struct {
	u_short dmy_tmr;
	u_char step;
	u_char sv_ctrl;
	u_char slot;
	u_char file;
} SAVE_CONTE;

typedef struct {
	float slot1_alp;
	float slot2_alp;
	float slot3_alp;
} MIRACLE_LENZ;

typedef struct {
	u_short msk_alp;
	u_short msg_alp;
	u_short fdt_alp;
	u_short svp_alp;
	u_short alt_alp;
	u_short yno_alp;
	u_char bck;
	u_char msk;
	u_char msg;
	u_char fdt;
	u_char svp;
	u_char alt;
	u_char alt_bak_alp;
} SV_DSP_SW;

typedef struct {
	short int siz_w;
	short int siz_h;
	short int pos_x;
	short int pos_y;
	u_char ttl;
	u_char alp;
	u_char rgb;
} BOOK;

typedef struct {
	int load_id;
	u_char step;
	u_char type[2];
	u_char load_side;
	u_char in_album;
} ALBM_MODE;

static SAVE_CONTE sav_con;
static MIRACLE_LENZ mrcl_lnz;
static SV_DSP_SW sv_dsp_sw;
static DSP_SVP dsp_svp;
static ALBM_MODE albm_mode;
static BOOK book[6];
SAVE_POINT_MENU_WRK spmenu_wrk = {
	/* .mode = */ 0,
	/* .sub_mode = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	}
};
static FLSH_CORE flsh[3];
static int sp_load_id;
static u_char btn_flsh_cnt;

void SavePointMenuInit() {
  memset(&spmenu_wrk,0,7);
  return;
}

void SavePointMenuOpen() {
  int iVar1;
  
  iVar1 = SavePointLightJudge();
  if (iVar1 != 0) {
    SavePointMenuOpenInit('\0');
    return;
  }
  return;
}

void SavePointMenuOpenInit(u_char msn) {
  memset(&sav_con,0,6);
  memset(&mrcl_lnz,0,0xc);
  memset(&sv_dsp_sw,0,0x14);
  memset(&dsp_svp,0,0xb);
  spmenu_wrk.csr[4] = '\x01';
  dsp_svp.slct_mode = -1;
  dsp_svp.msg_alp = '\0';
  spmenu_wrk.csr[3] = '\0';
  dsp_svp.top_alp = '\0';
  dsp_svp.bak_alp = '\0';
  CaptureScreen(0x1a40);
  DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  InitialDmaBuffer();
  if (msn == '\0') {
    spmenu_wrk.mode = '\0';
    ingame_wrk.mode = 0x10;
  }
  else {
    spmenu_wrk.mode = '\x13';
  }
  dsp_svp.slct_mode = -1;
  sp_load_id = -1;
  btn_flsh_cnt = '\0';
  return;
}

void BtlModSaveInit() {
  memset(&sav_con,0,6);
  memset(&mrcl_lnz,0,0xc);
  memset(&sv_dsp_sw,0,0x14);
  memset(&dsp_svp,0,0xb);
  dsp_svp.msg_alp = '\0';
  dsp_svp.slct_mode = -1;
  spmenu_wrk.csr[4] = '\x01';
  spmenu_wrk.csr[3] = '\0';
  dsp_svp.top_alp = '\0';
  dsp_svp.bak_alp = '\0';
  InitialDmaBuffer();
  dsp_svp.slct_mode = -1;
  ingame_wrk.mode = 0x10;
  spmenu_wrk.mode = '\x13';
  sp_load_id = -1;
  btn_flsh_cnt = '\0';
  return;
}

char SavePointMenuMain(u_char msn) {
	u_char mode;
	u_char rtrn;
	int is_btlmode;
	
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  short (*pasVar5) [2];
  MC_ALBUM_SAVE *pMVar6;
  sceCdCLOCK sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uchar mode;
  float fVar11;
  
  bVar1 = msn == 3;
  if (bVar1) {
    msn = 2;
  }
  if ((msn == 2) || (poss_item[9] == 0)) {
    mode = '\0';
  }
  else {
    mode = '\x01';
    if (poss_item[1] < 0x1e) {
      mode = '\x02';
    }
  }
  if ((sp_load_id != -1) && (iVar4 = IsLoadEnd(sp_load_id), iVar4 != 0)) {
    sp_load_id = -1;
  }
  if (msn != 2) {
    DrawScreen(0xffff7f0,0x1a40,0x80,0x80,0x80,0x80);
  }
  BgFusumaYW(0x606060,0.0,(float)(uint)dsp_svp.bak_alp,0x7d000);
  switch(spmenu_wrk.mode) {
  case '\0':
    if (dsp_svp.msg_alp + 8 < 0x80) {
      dsp_svp.msg_alp = (uchar)(dsp_svp.msg_alp + 8);
    }
    else {
      dsp_svp.msg_alp = 0x80;
      spmenu_wrk.mode = '\x01';
    }
    break;
  case '\x01':
    if (*key_now[4] == 1) {
      cVar10 = '\0';
      SeStartFix(3,0,0x1000,0x1000,0);
      bVar2 = msn - 1;
      spmenu_wrk.mode = '\x02';
      goto LAB_001fa18c;
    }
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      SeStartFix(1,0,0x1000,0x1000,0);
      sp_load_id = LoadReq(0x48,0x1d59630);
      goto LAB_001fa154;
    }
    break;
  case '\x02':
    if ((int)(dsp_svp.msg_alp - 8) < 1) {
      dsp_svp.msg_alp = '\0';
      bVar2 = msn - 1;
LAB_001fa110:
      cVar10 = '\0';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      InitialDmaBuffer();
      ingame_wrk.mode = 6;
      goto LAB_001fa18c;
    }
    dsp_svp.msg_alp = (uchar)(dsp_svp.msg_alp - 8);
    break;
  case '\x03':
    if (sp_load_id == -1) {
      spmenu_wrk.mode = '\x04';
    }
    break;
  case '\x04':
    SetSprFile(0x1d59630);
    if (dsp_svp.top_alp + 8 < 0x80) {
      cVar10 = '\0';
      dsp_svp.top_alp = (uchar)(dsp_svp.top_alp + 8);
      dsp_svp.msg_alp = 0x80 - dsp_svp.top_alp;
      bVar2 = msn - 1;
      dsp_svp.bak_alp = dsp_svp.top_alp;
    }
    else {
      dsp_svp.msg_alp = '\0';
      dsp_svp.top_alp = 0x80;
      cVar10 = '\0';
      dsp_svp.slct_mode = -1;
      bVar2 = msn - 1;
      spmenu_wrk.mode = '\x05';
      dsp_svp.bak_alp = 0x80;
    }
    goto LAB_001fa18c;
  case '\x05':
    cVar10 = '\0';
    bVar2 = msn - 1;
    SetSprFile(0x1d59630);
    SavePointMenuModeSlct(msn,mode);
    goto LAB_001fa18c;
  case '\x06':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      if (0 < (int)(dsp_svp.top_alp - 8)) {
        cVar10 = '\0';
        dsp_svp.top_alp = (uchar)(dsp_svp.top_alp - 8);
        bVar2 = msn - 1;
        dsp_svp.bak_alp = 0x80;
        goto LAB_001fa18c;
      }
      dsp_svp.top_alp = '\0';
      dsp_svp.bak_alp = 0x80;
      if (bVar1) {
        mcInit('\0',(uint *)&DAT_00420000,mc_header.album.pad[4]._0_1_);
      }
      else if (msn == 0) {
        mcInit('\0',(uint *)&DAT_00420000,'\0');
      }
      else {
        mcInit('\0',(uint *)&DAT_00420000,'\x01');
      }
      spmenu_wrk.mode = '\a';
      sav_con.step = '\x01';
    }
    break;
  case '\a':
    SetSprFile(0x1d15600);
    SetSprFile(0x1d59630);
    SetSprFile(0x1d28c80);
    cVar3 = McAtSaveChk();
    cVar10 = '\0';
    if (cVar3 != '\0') {
      bVar2 = msn - 1;
      SendManMdlTex();
      spmenu_wrk.mode = '\b';
      goto LAB_001fa18c;
    }
    break;
  case '\b':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      dsp_svp.bak_alp = 0x80;
      if (dsp_svp.top_alp + 8 < 0x80) {
        dsp_svp.top_alp = (uchar)(dsp_svp.top_alp + 8);
      }
      else {
        dsp_svp.top_alp = 0x80;
        dsp_svp.slct_mode = -1;
        spmenu_wrk.mode = '\x05';
      }
    }
    break;
  case '\t':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      spmenu_wrk.mode = '\n';
    }
    break;
  case '\n':
    SetSprFile(0x1d59630);
    dsp_svp.bak_alp = 0x80;
    if ((int)(dsp_svp.top_alp - 8) < 1) {
      dsp_svp.top_alp = '\0';
      InitialDmaBuffer();
      if (dsp_svp.in_album == '\0') {
        mcInit('\x03',(uint *)&DAT_00420000,'\0');
      }
      else {
        mcInit('\x04',(uint *)&DAT_00420000,'\0');
      }
      spmenu_wrk.mode = '\v';
    }
    else {
      dsp_svp.top_alp = (uchar)(dsp_svp.top_alp - 8);
    }
    break;
  case '\v':
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar3 = McAtLoadChk('\x02');
    if (cVar3 == '\x01') {
      if (dsp_svp.in_album == '\0') {
        PhotoDataExchange();
        pMVar6 = &mc_album_save;
        pasVar5 = (short (*) [2])(album_save_dat + 1);
        do {
          uVar9 = *(undefined8 *)((int)pMVar6 + 8);
          sVar7 = *(sceCdCLOCK *)((int)pMVar6 + 0x10);
          uVar8 = *(undefined8 *)((int)pMVar6 + 0x18);
          *(undefined8 *)pasVar5 = *(undefined8 *)pMVar6;
          *(undefined8 *)pasVar5[2] = uVar9;
          *(sceCdCLOCK *)pasVar5[4] = sVar7;
          *(undefined8 *)pasVar5[6] = uVar8;
          pMVar6 = (MC_ALBUM_SAVE *)((int)pMVar6 + 0x20);
          pasVar5 = pasVar5[8];
        } while (pMVar6 != album_save_dat);
        dsp_svp.atype_buf[1] = (byte)mc_album_type;
        dsp_svp.atype_buf[0] = '\x05';
        MemAlbmInit(0,0xff,(byte)mc_photo_num,0xff,(byte)mc_album_type,0xff,(char)mc_ctrl.port + 1,
                    0xff,(mc_ctrl.sel_file & 0xffU) + 1 & 0xff);
        sp_load_id = AlbmDesignLoadInGame('\0','\x05');
      }
      else {
        pMVar6 = &mc_album_save;
        pasVar5 = (short (*) [2])(album_save_dat + 1);
        do {
          uVar9 = *(undefined8 *)((int)pMVar6 + 8);
          sVar7 = *(sceCdCLOCK *)((int)pMVar6 + 0x10);
          uVar8 = *(undefined8 *)((int)pMVar6 + 0x18);
          *(undefined8 *)pasVar5 = *(undefined8 *)pMVar6;
          *(undefined8 *)pasVar5[2] = uVar9;
          *(sceCdCLOCK *)pasVar5[4] = sVar7;
          *(undefined8 *)pasVar5[6] = uVar8;
          pMVar6 = (MC_ALBUM_SAVE *)((int)pMVar6 + 0x20);
          pasVar5 = pasVar5[8];
        } while (pMVar6 != album_save_dat);
        dsp_svp.atype_buf[1] = (byte)mc_album_type;
        MemAlbmInit2(1,(byte)mc_photo_num,(byte)mc_album_type,(char)mc_ctrl.port + 1,
                     (char)mc_ctrl.sel_file + 1);
        sp_load_id = AlbmDesignLoadInGame('\0','\x05');
      }
    }
    else {
      cVar10 = '\0';
      if (cVar3 < '\x02') break;
      if (cVar3 == '\x02') {
        if (dsp_svp.in_album != '\0') goto LAB_001f9fe0;
        sp_load_id = LoadReq(0x4d,0x1d266c0);
        sp_load_id = LoadReq(0x4e,0x1d15600);
        spmenu_wrk.mode = '\x10';
        goto LAB_001fa028;
      }
      if (cVar3 != '\x03') {
        bVar2 = msn - 1;
        goto LAB_001fa18c;
      }
      if (dsp_svp.in_album == '\0') {
        cVar10 = '\0';
        dsp_svp.atype_buf[0] = '\x05';
        bVar2 = msn - 1;
        PhotoDataExchange();
        MemAlbmInit(0,0xff,0,0xff,0,0xff,0,0xff,0);
        sp_load_id = AlbmDesignLoadInGame('\0','\x05');
        dsp_svp.atype_buf[1] = '\x05';
        NewAlbumInit(1);
        sp_load_id = AlbmDesignLoadInGame('\x01','\x05');
        spmenu_wrk.mode = '\f';
        sp_load_id = LoadReq(0x56,0x1d15600);
        goto LAB_001fa18c;
      }
      dsp_svp.atype_buf[1] = '\x05';
      NewAlbumInit(1);
      sp_load_id = AlbmDesignLoadInGame('\0','\x05');
      mc_album_type._0_1_ = '\x05';
    }
    goto LAB_001fa008;
  case '\f':
    if (sp_load_id == -1) {
      spmenu_wrk.mode = '\r';
    }
    break;
  case '\r':
    SetSprFile(0x1d15600);
    bVar2 = SweetMemories(0,0x80);
    switch(bVar2) {
    default:
      goto LAB_001fa184;
    case 1:
      if (bVar1) {
        mcInit('\x02',(uint *)&DAT_00420000,mc_header.album.pad[4]._0_1_);
      }
      else if (msn == 0) {
        mcInit('\x02',(uint *)&DAT_00420000,'\0');
      }
      else {
        mcInit('\x02',(uint *)&DAT_00420000,'\x01');
      }
      dsp_svp.load_side = '\0';
      sp_load_id = LoadReq(0x47,0x1d15600);
      sp_load_id = LoadReq(99,0x1d28c80);
      spmenu_wrk.mode = '\x0e';
      goto LAB_001f9e14;
    case 2:
      if (bVar1) {
        mcInit('\x02',(uint *)&DAT_00420000,mc_header.album.pad[4]._0_1_);
      }
      else if (msn == 0) {
        mcInit('\x02',(uint *)&DAT_00420000,'\0');
      }
      else {
        mcInit('\x02',(uint *)&DAT_00420000,'\x01');
      }
      dsp_svp.load_side = '\x01';
      sp_load_id = LoadReq(0x47,0x1d15600);
      sp_load_id = LoadReq(99,0x1d28c80);
      dsp_svp.in_album = '\x01';
      spmenu_wrk.mode = '\x0e';
      break;
    case 3:
      dsp_svp.load_side = '\0';
      sp_load_id = LoadReq(0x47,0x1d15600);
      sp_load_id = LoadReq(99,0x1d28c80);
      spmenu_wrk.mode = '\t';
LAB_001f9e14:
      bVar2 = msn - 1;
      cVar10 = '\0';
      dsp_svp.in_album = '\x01';
      goto LAB_001fa18c;
    case 4:
      dsp_svp.load_side = '\x01';
      sp_load_id = LoadReq(0x47,0x1d15600);
      sp_load_id = LoadReq(99,0x1d28c80);
      dsp_svp.in_album = '\x01';
      spmenu_wrk.mode = '\t';
      break;
    case 5:
      sp_load_id = LoadReq(0x4a,0x1d88100);
      spmenu_wrk.mode = '\x10';
    }
    goto LAB_001fa028;
  case '\x0e':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      spmenu_wrk.mode = '\x0f';
    }
    break;
  case '\x0f':
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar3 = McAtAlbmChk();
    iVar4 = mc_ctrl.sel_file;
    if (cVar3 == '\x01') {
      if (dsp_svp.in_album == '\0') {
        PhotoDataExchange();
        dsp_svp.atype_buf[0] = '\x05';
        dsp_svp.atype_buf[1] = (byte)mc_album_type;
        MemAlbmInit(0,0xff,(byte)mc_photo_num,0xff,(byte)mc_album_type,0xff,(char)mc_ctrl.port + 1,
                    0xff,(mc_ctrl.sel_file & 0xffU) + 1 & 0xff);
        NewAlbumInit(1);
      }
      else {
        dsp_svp.atype_buf[dsp_svp.load_side] = (byte)mc_album_type;
        MemAlbmInit2(dsp_svp.load_side,(byte)mc_photo_num,(byte)mc_album_type,(char)mc_ctrl.port + 1
                     ,(char)iVar4 + 1);
      }
    }
    else {
      cVar10 = '\0';
      if (cVar3 < '\x02') break;
      if (cVar3 != '\x02') {
        bVar2 = msn - 1;
        goto LAB_001fa18c;
      }
      if (dsp_svp.in_album == '\0') {
        cVar10 = '\0';
        mcInit('\x03',(uint *)&DAT_00420000,'\0');
        bVar2 = msn - 1;
        spmenu_wrk.mode = '\v';
        goto LAB_001fa18c;
      }
LAB_001f9fe0:
      MemAlbmInit3();
    }
    sp_load_id = AlbmDesignLoadInGame('\0',dsp_svp.atype_buf[0]);
    mc_album_type._0_1_ = dsp_svp.atype_buf[1];
LAB_001fa008:
    sp_load_id = AlbmDesignLoadInGame('\x01',(byte)mc_album_type);
    sp_load_id = LoadReq(0x56,0x1d15600);
    spmenu_wrk.mode = '\f';
LAB_001fa028:
    bVar2 = msn - 1;
    cVar10 = '\0';
    goto LAB_001fa18c;
  case '\x10':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      dsp_svp.bak_alp = 0x80;
      if (0x7f < dsp_svp.top_alp + 8) {
        dsp_svp.top_alp = 0x80;
        cVar10 = '\0';
        InitialDmaBuffer();
        bVar2 = msn - 1;
        dsp_svp.slct_mode = -1;
        spmenu_wrk.mode = '\x05';
        goto LAB_001fa18c;
      }
      dsp_svp.top_alp = (uchar)(dsp_svp.top_alp + 8);
    }
    break;
  case '\x11':
    break;
  case '\x12':
    SetSprFile(0x1d59630);
    if (sp_load_id == -1) {
      if ((int)(dsp_svp.top_alp - 8) < 1) {
        dsp_svp.bak_alp = '\0';
        dsp_svp.top_alp = '\0';
        if (msn == 0) {
          bVar2 = 0xff;
          goto LAB_001fa110;
        }
        spmenu_wrk.mode = '\x14';
      }
      else {
        dsp_svp.top_alp = (uchar)(dsp_svp.top_alp - 8);
        dsp_svp.bak_alp = dsp_svp.top_alp;
      }
    }
    break;
  case '\x13':
    sp_load_id = LoadReq(0x48,0x1d59630);
LAB_001fa154:
    bVar2 = msn - 1;
    cVar10 = '\0';
    spmenu_wrk.mode = '\x03';
    spmenu_wrk.csr[4] = '\0';
    goto LAB_001fa18c;
  case '\x14':
    bVar2 = msn - 1;
    cVar10 = '\x01';
    goto LAB_001fa18c;
  default:
    bVar2 = msn - 1;
    cVar10 = '\0';
    goto LAB_001fa18c;
  }
LAB_001fa184:
  cVar10 = '\0';
  bVar2 = msn - 1;
LAB_001fa18c:
  if (dsp_svp.top_alp == '\0') {
    dsp_svp.slct_mode = -1;
  }
  else {
    SavePointMenuModeSlctDisp(msn,spmenu_wrk.csr[3],spmenu_wrk.csr[4],dsp_svp.top_alp,mode);
  }
  if (bVar2 < 2) {
    dsp_svp.msg_alp = '\0';
  }
  if (dsp_svp.msg_alp != '\0') {
    DrawMessageBox(0xf000,56.0,304.0,528.0,106.0,dsp_svp.msg_alp);
    PutStringYW(9,0,0x4e,0x141,0x808080,dsp_svp.msg_alp,0x5000,0);
    bVar1 = 0x3b < dsp_svp.btn_tmr;
    dsp_svp.btn_tmr = dsp_svp.btn_tmr + '\x01';
    if (bVar1) {
      dsp_svp.btn_tmr = '\0';
    }
    fVar11 = SgSinf(((float)(uint)dsp_svp.btn_tmr * DAT_00355fd4) / 60.0);
    DrawButtonTex(0xa000,3,536.0,368.0,
                  (uchar)(int)((fVar11 * (float)(uint)dsp_svp.msg_alp + (float)(uint)dsp_svp.msg_alp
                               ) * 0.5));
  }
  return cVar10;
}

void SavePointMenuModeSlct(u_char msn, u_char mode) {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int se_no;
  
  if (dsp_svp.slct_mode == -1) {
    if (*key_now[4] == 1) {
      if (spmenu_wrk.csr[3] == '\x03') {
        return;
      }
      SeStartFix(1,0,0x1000,0x1000,0);
      spmenu_wrk.csr[3] = '\x03';
      spmenu_wrk.csr[4] = '\x01';
      dsp_svp.slct_mode = '\x03';
      dsp_svp.str_no = '\x03';
      return;
    }
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      if (((*key_now[3] == 1) ||
          (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)))) ||
         ((uVar3 = Ana2PadDirCnt('\x01'), 0x19 < uVar3 &&
          (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 == 1)))) {
        bVar1 = 2 < spmenu_wrk.csr[3];
        spmenu_wrk.csr[3] = spmenu_wrk.csr[3] + '\x01';
        if (bVar1) {
          spmenu_wrk.csr[3] = '\0';
        }
        if ((mode < 2) && (spmenu_wrk.csr[3] == '\x02')) {
          spmenu_wrk.csr[3] = '\x03';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
        return;
      }
      if ((*key_now[2] != 1) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) {
        uVar3 = Ana2PadDirCnt('\x03');
        if (uVar3 < 0x1a) {
          return;
        }
        sVar2 = Ana2PadDirCnt('\x03');
        if ((int)sVar2 % 5 != 1) {
          return;
        }
      }
      bVar1 = spmenu_wrk.csr[3] == '\0';
      spmenu_wrk.csr[3] = spmenu_wrk.csr[3] + 0xff;
      if (bVar1) {
        spmenu_wrk.csr[3] = '\x03';
      }
      if ((mode < 2) && (spmenu_wrk.csr[3] == '\x02')) {
        spmenu_wrk.csr[3] = '\x01';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      return;
    }
    if ((mode < 2) && (spmenu_wrk.csr[3] == '\x02')) {
      SeStartFix(2,0,0x1000,0x1000,0);
      return;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    spmenu_wrk.csr[4] = '\x01';
    dsp_svp.slct_mode = spmenu_wrk.csr[3];
    dsp_svp.str_no = spmenu_wrk.csr[3];
    return;
  }
  if (*key_now[4] == 1) {
    se_no = 3;
  }
  else {
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      if ((*key_now[3] != 1) &&
         (((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 && (*key_now[2] != 1)) &&
          (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) {
        return;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      spmenu_wrk.csr[4] = '\x01' - spmenu_wrk.csr[4];
      return;
    }
    if (spmenu_wrk.csr[4] == '\0') {
      if (dsp_svp.slct_mode == '\x01') {
        SeStartFix(1,0,0x1000,0x1000,0);
        sp_load_id = LoadReq(0x47,0x1d15600);
        sp_load_id = LoadReq(99,0x1d28c80);
        spmenu_wrk.mode = '\t';
        dsp_svp.atype_buf[0] = '\x05';
        dsp_svp.atype_buf[1] = '\x05';
        dsp_svp.in_album = '\0';
        return;
      }
      if (dsp_svp.slct_mode < '\x02') {
        if (dsp_svp.slct_mode != '\0') {
          return;
        }
        SeStartFix(1,0,0x1000,0x1000,0);
        sp_load_id = LoadReq(0x47,0x1d15600);
        sp_load_id = LoadReq(0x68,0x1d28c80);
        spmenu_wrk.mode = '\x06';
        return;
      }
      if (dsp_svp.slct_mode == '\x02') {
        SeStartFix(1,0,0x1000,0x1000,0);
        poss_item[1] = 0x1e;
        dsp_svp.slct_mode = -1;
        return;
      }
      if (dsp_svp.slct_mode != '\x03') {
        return;
      }
      SeStartFix(1,0,0x1000,0x1000,0);
      sp_load_id = LoadReq(0x4d,0x1d266c0);
      sp_load_id = LoadReq(0x4e,0x1d15600);
      spmenu_wrk.mode = '\x12';
      return;
    }
    se_no = 1;
  }
  SeStartFix(se_no,0,0x1000,0x1000,0);
  dsp_svp.slct_mode = -1;
  return;
}

void SavePointMenuModeSlctDisp(u_char msn, u_char csr3, u_char csr4, u_char alp_max, u_char mode) {
	int i;
	u_char alp;
	int rgb;
	short int csr_x0[4];
	short int csr_x1[4];
	short int csr_x2[4];
	short int csr;
	static short int adj_x = 0;
	static short int adj_y = 0;
	
  ulong *puVar1;
  uint uVar2;
  short sVar3;
  byte alp;
  byte bVar4;
  short end_label;
  undefined *puVar5;
  ushort pos_y;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int unaff_s5_lo;
  float fVar9;
  float alp_00;
  float alp_01;
  float fVar10;
  ushort csr_x0 [4];
  ushort csr_x1 [4];
  ushort csr_x2 [4];
  
  uVar8 = (int)(char)alp_max & 0xff;
  uVar2 = (int)csr_x0 + 7U & 7;
  puVar1 = (ulong *)(((int)csr_x0 + 7U) - uVar2);
  *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003571d8 >> (7 - uVar2) * 8;
  csr_x0 = DAT_003571d8;
  uVar2 = (int)csr_x1 + 7U & 7;
  puVar1 = (ulong *)(((int)csr_x1 + 7U) - uVar2);
  *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003571e0 >> (7 - uVar2) * 8;
  csr_x1 = DAT_003571e0;
  uVar2 = (int)csr_x2 + 7U & 7;
  puVar1 = (ulong *)(((int)csr_x2 + 7U) - uVar2);
  *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003571e0 >> (7 - uVar2) * 8;
  csr_x2 = DAT_003571e0;
  if ((*key_now[0] == 0) && (*key_now[8] != 1)) {
    if ((*key_now[1] == 0) && (*key_now[10] != 1)) {
      if ((*key_now[2] == 0) && (*key_now[9] != 1)) {
        if ((*key_now[3] != 0) || (*key_now[11] == 1)) {
          adj_x_135 = adj_x_135 + 1;
        }
      }
      else {
        adj_x_135 = adj_x_135 + -1;
      }
    }
    else {
      adj_y_136 = adj_y_136 + 1;
    }
  }
  else {
    adj_y_136 = adj_y_136 + -1;
  }
  alp_00 = (float)uVar8;
  fVar9 = 1.0;
  PutSpriteYW(0x2a8,0x2a8,0.0,0.0,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  alp_01 = alp_00;
  PutSpriteYW(0x2a4,0x2a4,0.0,0.0,0.0,0x808080,alp_00,fVar9,fVar9,0,0xff,1,0,0);
  PutSpriteYW(0x2a7,0x2a7,0.0,0.0,0.0,0x808080,alp_01,fVar9,fVar9,0,0xff,1,0,0);
  if (mode == '\x01') {
    PutSpriteYW(0x2a5,0x2a5,0.0,0.0,0.0,0x808080,alp_01,fVar9,fVar9,0,0xff,1,0,0);
    fVar10 = 0.0;
    sVar3 = 0x2a6;
    end_label = 0x2a6;
    puVar5 = &DAT_00303030;
LAB_001fab20:
    PutSpriteYW(sVar3,end_label,fVar10,0.0,0.0,(int)puVar5,alp_01,fVar9,fVar9,0,0xff,1,0,0);
  }
  else if (mode < 2) {
    if (mode == '\0') {
      fVar10 = 75.0;
      sVar3 = 0x2a5;
      end_label = 0x2a5;
      puVar5 = (undefined *)0x808080;
      goto LAB_001fab20;
    }
  }
  else if (mode == '\x02') {
    PutSpriteYW(0x2a5,0x2a5,0.0,0.0,0.0,0x808080,alp_01,fVar9,fVar9,0,0xff,1,0,0);
    PutSpriteYW(0x2a6,0x2a6,0.0,0.0,0.0,0x808080,alp_01,fVar9,fVar9,0,0xff,1,0,0);
  }
  fVar9 = 1.0;
  FlashStarYW(flsh + 2,'`','@','Z','\0');
  uVar7 = 0;
  do {
    if (uVar7 == ((long)(char)csr3 & 0xffU)) {
      puVar5 = (undefined *)0x808080;
      uVar2 = (int)((float)(flsh[2].alpha * uVar8) * 0.0078125) & 0xff;
    }
    else {
      puVar5 = &DAT_00404040;
      uVar2 = uVar8;
    }
    iVar6 = (int)uVar7;
    if (mode == '\x01') {
      if (uVar7 == 2) {
        sVar3 = 0x2af;
        fVar10 = 0.0;
        puVar5 = &DAT_00303030;
      }
      else {
LAB_001facd0:
        sVar3 = (short)uVar7 + 0x2ad;
        fVar10 = 0.0;
      }
LAB_001facec:
      PutSpriteYW(sVar3,sVar3,fVar10,0.0,0.0,(int)puVar5,(float)uVar2,fVar9,fVar9,0,0xff,1,0,0);
      uVar7 = (ulong)(iVar6 + 1);
    }
    else if (mode < 2) {
      if (mode == '\0') {
        if (uVar7 == 1) {
          fVar10 = 75.0;
          sVar3 = 0x2ae;
          goto LAB_001facec;
        }
        if (uVar7 != 2) goto LAB_001facd0;
LAB_001fad50:
        uVar7 = (ulong)(iVar6 + 1);
      }
      else {
        uVar7 = (ulong)(iVar6 + 1);
      }
    }
    else {
      sVar3 = (short)uVar7 + 0x2ad;
      if (mode == '\x02') {
        PutSpriteYW(sVar3,sVar3,0.0,0.0,0.0,(int)puVar5,(float)uVar2,fVar9,fVar9,0,0xff,1,0,0);
        goto LAB_001fad50;
      }
      uVar7 = (ulong)(iVar6 + 1);
    }
  } while ((long)uVar7 < 4);
  iVar6 = (int)((long)(char)csr3 & 0xffU);
  if (mode == '\x01') {
    unaff_s5_lo = (int)(short)csr_x1[iVar6];
  }
  else if (mode < 2) {
    if (mode == '\0') {
      unaff_s5_lo = (int)(short)csr_x0[iVar6];
    }
  }
  else if (mode == '\x02') {
    unaff_s5_lo = (int)(short)csr_x2[iVar6];
  }
  fVar10 = (float)unaff_s5_lo;
  fVar9 = 1.0;
  PutSpriteYW(0x2a9,0x2a9,fVar10,0.0,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x2aa,0x2aa,fVar10,0.0,0.0,0x808080,alp_00,fVar9,fVar9,0,0xff,1,0,0);
  PutSpriteYW(0x2ab,0x2ab,fVar10,0.0,0.0,0x808080,alp_00,fVar9,fVar9,0,0xff,1,0,0);
  PutSpriteYW(0x2ac,0x2ac,fVar10,0.0,0.0,0x808080,alp_00,fVar9,fVar9,0,0xff,1,0,0);
  alp = (byte)uVar8;
  DrawMessageBox(0x19000,22.0,308.0,596.0,118.0,alp);
  if (dsp_svp.slct_mode != -1) {
    YesNoCrslOKR(0x14000,(float)(((int)(char)csr4 & 0xffU) * 0x84 + 0xb2),370.0,0x808080,alp_01,2.0)
    ;
    if ((dsp_svp.str_no == '\x03') && (msn == '\x02')) {
      if (ingame_wrk.game == 1) {
        bVar4 = 0x15;
      }
      else {
        bVar4 = 7;
      }
      PutStringYW(9,bVar4,0x140,0x14d,0x808080,alp,0xf000,1);
    }
    else {
      PutStringYW(9,dsp_svp.str_no + 3,0x140,0x14d,0x808080,alp,0xf000,1);
    }
    PutStringYW(9,1,0x30,0x177,0x808080,alp,0xf000,0);
    goto LAB_001fb1c8;
  }
  if (spmenu_wrk.csr[3] == '\x01') {
    PutStringYW(9,9,0x140,0x14d,0x808080,alp,0xf000,1);
    PutStringYW(9,0x12,0x140,0x167,0x808080,alp,0xf000,1);
    bVar4 = 0x13;
    pos_y = 0x181;
  }
  else if (spmenu_wrk.csr[3] < 2) {
    if (spmenu_wrk.csr[3] != '\0') goto LAB_001fb1c8;
    PutStringYW(9,8,0x140,0x14d,0x808080,alp,0xf000,1);
    PutStringYW(9,0x10,0x140,0x167,0x808080,alp,0xf000,1);
    bVar4 = 0x11;
    pos_y = 0x181;
  }
  else if (spmenu_wrk.csr[3] == '\x02') {
    PutStringYW(9,10,0x140,0x14d,0x808080,alp,0xf000,1);
    bVar4 = 0x14;
    pos_y = 0x167;
  }
  else {
    if (spmenu_wrk.csr[3] != '\x03') goto LAB_001fb1c8;
    if (msn != '\x02') {
      PutStringYW(9,0xb,0x140,0x14d,0x808080,alp,0xf000,1);
      goto LAB_001fb1c8;
    }
    if (ingame_wrk.game == 1) {
      bVar4 = 0x16;
    }
    else {
      bVar4 = 0xc;
    }
    pos_y = 0x14d;
  }
  PutStringYW(9,bVar4,0x140,pos_y,0x808080,alp,0xf000,1);
LAB_001fb1c8:
  SetSprFile(0x1ce0000);
  DispCaption(2,alp);
  return;
}

void SavePointMenuAlbum() {
  return;
}

void SavePointMenuSave() {
  uchar uVar1;
  
  if (sav_con.step != '\0') {
    PlyrSpotLightOnChk();
    PlyrSpotMoveCtrl();
    uVar1 = SaveConte();
    if (uVar1 != '\0') {
      sp_load_id = LoadReq(0x4d,0x1d266c0);
      sp_load_id = LoadReq(0x4e,0x1d15600);
      spmenu_wrk.mode = '\b';
    }
  }
  return;
}

static u_char SaveConte() {
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = sav_con.dmy_tmr;
  switch(sav_con.step) {
  case '\x01':
    spmenu_wrk.csr[0] = 0xff;
    sv_dsp_sw.fdt = 0xff;
    sv_dsp_sw.alt = 0xff;
    sv_dsp_sw.msg = 0xff;
    sv_dsp_sw.msk = 0xff;
    sv_dsp_sw.bck = 0xff;
    sv_dsp_sw.fdt_alp = 0;
    sv_dsp_sw.alt_alp = 0;
    sv_dsp_sw.svp_alp = 0;
    sv_dsp_sw.msg_alp = 0;
    sv_dsp_sw.msk_alp = 0;
    spmenu_wrk.csr[2] = 0xff;
    spmenu_wrk.csr[1] = '\0';
    sVar3 = sav_con.dmy_tmr + -1;
    if (sav_con.dmy_tmr == 0) {
      sv_dsp_sw.msk = '\x01';
      sav_con.step = '\x02';
      sv_dsp_sw.bck = '\x01';
      sv_dsp_sw.svp = '\x01';
      sVar3 = sav_con.dmy_tmr;
    }
    break;
  case '\x02':
    if (sv_dsp_sw.msk_alp == 0x1900) {
      sav_con.dmy_tmr = 0x3c;
      sav_con.step = '\x03';
      sVar3 = sav_con.dmy_tmr;
    }
    break;
  case '\x03':
    if (sav_con.dmy_tmr == 0) {
      sv_dsp_sw.alt = 0xff;
      spmenu_wrk.csr[1] = sav_con.slot;
      sav_con.step = '\x04';
    }
    else {
      sv_dsp_sw.alt = '\x01';
      sVar3 = sav_con.dmy_tmr + -1;
    }
    break;
  case '\x04':
    sv_dsp_sw.msg = '\0';
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      sv_dsp_sw.msg = 0xff;
      sav_con.step = '\b';
      sv_dsp_sw.msk = 0xff;
      sv_dsp_sw.svp = 0xff;
      sVar3 = sav_con.dmy_tmr;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      SeStartFix(1,0,0x1000,0x1000,0);
      sav_con.slot = spmenu_wrk.csr[1];
      spmenu_wrk.csr[2] = sav_con.file;
      sav_con.step = '\x05';
      sVar3 = sav_con.dmy_tmr;
    }
    else if (((*key_now[1] == 1) ||
             (((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
              (sVar3 = Ana2PadDirCnt('\x02'), sVar3 == 1)))) ||
            ((uVar2 = Ana2PadDirCnt('\x02'), 0x19 < uVar2 &&
             (sVar3 = Ana2PadDirCnt('\x02'), (int)sVar3 % 5 == 1)))) {
      SeStartFix(0,0,0x1000,0x1000,0);
      bVar1 = 1 < spmenu_wrk.csr[1];
      spmenu_wrk.csr[1] = spmenu_wrk.csr[1] + '\x01';
      sVar3 = sav_con.dmy_tmr;
      if (bVar1) {
        spmenu_wrk.csr[1] = '\0';
      }
    }
    else if (((*key_now[0] == 1) ||
             ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))) ||
            ((sVar3 = Ana2PadDirCnt('\0'), sVar3 == 1 ||
             ((uVar2 = Ana2PadDirCnt('\0'), sVar3 = sav_con.dmy_tmr, 0x19 < uVar2 &&
              (sVar4 = Ana2PadDirCnt('\0'), sVar3 = sav_con.dmy_tmr, (int)sVar4 % 5 == 1)))))) {
      SeStartFix(0,0,0x1000,0x1000,0);
      bVar1 = spmenu_wrk.csr[1] == '\0';
      spmenu_wrk.csr[1] = spmenu_wrk.csr[1] + 0xff;
      sVar3 = sav_con.dmy_tmr;
      if (bVar1) {
        spmenu_wrk.csr[1] = '\x02';
      }
    }
    break;
  case '\x05':
    sv_dsp_sw.msg = '\x01';
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      spmenu_wrk.csr[2] = 0xff;
      spmenu_wrk.csr[1] = sav_con.slot;
      sav_con.step = '\x04';
      sVar3 = sav_con.dmy_tmr;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      sv_dsp_sw.msg = 0xff;
      sav_con.step = '\x06';
      sav_con.file = spmenu_wrk.csr[2];
      spmenu_wrk.csr[0] = '\x01';
      SeStartFix(1,0,0x1000,0x1000,0);
      sVar3 = sav_con.dmy_tmr;
    }
    else if ((*key_now[1] == 1) ||
            ((((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
              (sVar3 = Ana2PadDirCnt('\x02'), sVar3 == 1)) ||
             ((uVar2 = Ana2PadDirCnt('\x02'), 0x19 < uVar2 &&
              (sVar3 = Ana2PadDirCnt('\x02'), (int)sVar3 % 5 == 1)))))) {
      SeStartFix(0,0,0x1000,0x1000,0);
      bVar1 = 1 < spmenu_wrk.csr[2];
      spmenu_wrk.csr[2] = spmenu_wrk.csr[2] + '\x01';
      sVar3 = sav_con.dmy_tmr;
      if (bVar1) {
        spmenu_wrk.csr[2] = '\0';
      }
    }
    else if ((((*key_now[0] == 1) ||
              ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))) ||
             (sVar3 = Ana2PadDirCnt('\0'), sVar3 == 1)) ||
            ((uVar2 = Ana2PadDirCnt('\0'), sVar3 = sav_con.dmy_tmr, 0x19 < uVar2 &&
             (sVar4 = Ana2PadDirCnt('\0'), sVar3 = sav_con.dmy_tmr, (int)sVar4 % 5 == 1)))) {
      SeStartFix(0,0,0x1000,0x1000,0);
      bVar1 = spmenu_wrk.csr[2] == '\0';
      spmenu_wrk.csr[2] = spmenu_wrk.csr[2] + 0xff;
      sVar3 = sav_con.dmy_tmr;
      if (bVar1) {
        spmenu_wrk.csr[2] = '\x02';
      }
    }
    break;
  case '\x06':
    sv_dsp_sw.msg = '\x12';
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      spmenu_wrk.csr[0] = 0xff;
      spmenu_wrk.csr[2] = sav_con.file;
      sav_con.step = '\x05';
      sVar3 = sav_con.dmy_tmr;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      if (spmenu_wrk.csr[0] == '\0') {
        SeStartFix(1,0,0x1000,0x1000,0);
        sav_con.sv_ctrl = '\x01';
        SavePCFile();
        sav_con.step = '\a';
        sVar3 = sav_con.dmy_tmr;
      }
      else {
        SeStartFix(3,0,0x1000,0x1000,0);
        sv_dsp_sw.svp = 0xff;
        sav_con.step = '\b';
        sv_dsp_sw.msk = 0xff;
        sv_dsp_sw.msg = 0xff;
        sVar3 = sav_con.dmy_tmr;
      }
    }
    else if ((*key_now[3] == 1) || (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) {
      SeStartFix(0,0,0x1000,0x1000,0);
      spmenu_wrk.csr[0] = '\x01';
      sVar3 = sav_con.dmy_tmr;
    }
    else if ((*key_now[2] == 1) ||
            (sVar4 = Ana2PadDirCnt('\x03'), sVar3 = sav_con.dmy_tmr, sVar4 == 1)) {
      SeStartFix(0,0,0x1000,0x1000,0);
      spmenu_wrk.csr[0] = '\0';
      sVar3 = sav_con.dmy_tmr;
    }
    break;
  case '\a':
    sv_dsp_sw.svp = 0xff;
    sav_con.step = '\b';
    sv_dsp_sw.msk = 0xff;
    sv_dsp_sw.msg = 0xff;
    break;
  case '\b':
    spmenu_wrk.csr[0] = 0xff;
    spmenu_wrk.csr[4] = '\x01';
    sav_con.step = '\t';
    spmenu_wrk.csr[2] = 0xff;
    spmenu_wrk.csr[1] = 0xff;
    spmenu_wrk.csr[3] = '\0';
    break;
  case '\t':
    sv_dsp_sw.bck = 0xff;
    sav_con.step = '\0';
    SendManMdlTex();
    return '\x01';
  }
  sav_con.dmy_tmr = sVar3;
  BgFusumaYW(0x606060,0.0,128.0,0x7d000);
  DspMemSavePoint(sv_dsp_sw.msk,sv_dsp_sw.msg,sv_dsp_sw.svp,sv_dsp_sw.fdt,sv_dsp_sw.alt,
                  spmenu_wrk.csr[0],spmenu_wrk.csr[1],spmenu_wrk.csr[2],0,0x80,0);
  return '\0';
}

void DspMemSavePoint(u_char msk, u_char msg, u_char fdt, u_char svp, u_char alt, u_char csr0, u_char csr1, u_char csr2, int yes_no, int alp_max, int type) {
	u_char yes_no;
	u_char alp_max;
	u_char type;
	int i;
	char num;
	u_char flg;
	u_short msk_add;
	u_short fdt_add;
	u_short svp_add;
	u_char alpha;
	
  bool bVar1;
  uchar uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte msg_no;
  ushort pos_x;
  ushort pos_y;
  uint uVar7;
  int iVar8;
  long lVar9;
  uchar uVar10;
  uint uVar11;
  int iVar12;
  long unaff_s2;
  uint msg_no_00;
  float pos_y_00;
  float fVar13;
  uchar flg;
  
  uVar7 = (int)(char)csr0 & 0xff;
  msg_no_00 = (int)(char)msg & 0xff;
  bVar1 = false;
  if (msk == 0xff) {
    iVar8 = (uint)(ushort)sv_dsp_sw.msk_alp + (uint)((byte)alp_max >> 6) * -100;
    if (iVar8 < 1) {
      sv_dsp_sw.msk_alp = 0;
    }
    else {
      sv_dsp_sw.msk_alp = (short)iVar8;
    }
  }
  else {
    uVar11 = (alp_max & 0xffU) * 0x32;
    uVar5 = (uint)(ushort)sv_dsp_sw.msk_alp + (uint)((byte)alp_max >> 6) * 100;
    if (uVar5 < uVar11) {
      sv_dsp_sw.msk_alp = (short)uVar5;
    }
    else {
      sv_dsp_sw.msk_alp = (short)uVar11;
    }
  }
  if (sv_dsp_sw.msk_alp != 0) {
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,(float)(uint)(ushort)sv_dsp_sw.msk_alp / 100.0,1.0,1.0,
                 0x7d000,0,0,0);
  }
  uVar5 = alp_max & 0xff;
  uVar11 = (uint)((byte)alp_max >> 5);
  if (svp == 0xff) {
    iVar8 = (uint)(ushort)sv_dsp_sw.svp_alp + uVar11 * -100;
    if (iVar8 < 1) {
      sv_dsp_sw.svp_alp = 0;
    }
    else {
      sv_dsp_sw.svp_alp = (short)iVar8;
    }
  }
  else {
    uVar6 = (uint)(ushort)sv_dsp_sw.svp_alp + uVar11 * 100;
    if (uVar6 < uVar5 * 100) {
      sv_dsp_sw.svp_alp = (short)uVar6;
    }
    else {
      sv_dsp_sw.svp_alp = (short)(uVar5 * 100);
    }
  }
  if (sv_dsp_sw.svp_alp != 0) {
    DspSavePoint(csr1,csr2,(uchar)(int)((float)(uint)(ushort)sv_dsp_sw.svp_alp / 100.0),(byte)type);
  }
  cVar4 = mc_ctrl.album.file_num;
  if (fdt == 0xff) {
    iVar8 = (uint)(ushort)sv_dsp_sw.fdt_alp + uVar11 * -100;
    if (iVar8 < 1) {
      sv_dsp_sw.fdt_alp = 0;
    }
    else {
      sv_dsp_sw.fdt_alp = (short)iVar8;
    }
    if (uVar5 * 100 < (uint)(ushort)sv_dsp_sw.fdt_alp) {
      sv_dsp_sw.fdt_alp = (short)(uVar5 * 100);
    }
  }
  else {
    uVar11 = (uint)(ushort)sv_dsp_sw.fdt_alp + uVar11 * 100;
    if (uVar11 < uVar5 * 100) {
      sv_dsp_sw.fdt_alp = (short)uVar11;
    }
    else {
      sv_dsp_sw.fdt_alp = (short)(uVar5 * 100);
    }
  }
  if (sv_dsp_sw.fdt_alp != 0) {
    if ((byte)type < 2) {
      if ((mc_ctrl.mode == 0) || (mc_ctrl.mode == 2)) {
        unaff_s2 = (long)(((char)mc_ctrl.dir.gamefile_num + 1) * 0x1000000 >> 0x18);
        if (3 < unaff_s2) {
          unaff_s2 = 3;
        }
      }
      else {
        unaff_s2 = (long)(char)mc_ctrl.dir.gamefile_num;
      }
      lVar9 = 0;
      if (0 < unaff_s2) {
        uVar10 = '\0';
        do {
          uVar2 = (uchar)lVar9;
          lVar9 = (long)((int)lVar9 + 1);
          DspSpInfo(uVar2,uVar10,(uchar)(int)((float)(uint)(ushort)sv_dsp_sw.fdt_alp / 100.0),
                    (byte)type);
          uVar10 = uVar10 + 'b';
        } while (lVar9 < unaff_s2);
      }
    }
    else {
      unaff_s2 = (long)mc_ctrl.album.file_num;
      if ((unaff_s2 < 5) && ((mc_ctrl.mode == 0 || (mc_ctrl.mode == 2)))) {
        cVar3 = mcCheckEmpty(0);
        if (cVar3 == '\0') {
          unaff_s2 = (long)((cVar4 + 1) * 0x1000000 >> 0x18);
        }
      }
      lVar9 = 0;
      if (0 < unaff_s2) {
        uVar10 = '\0';
        do {
          uVar2 = (uchar)lVar9;
          lVar9 = (long)((int)lVar9 + 1);
          DspSpInfo2(uVar2,uVar10,(uchar)(int)((float)(uint)(ushort)sv_dsp_sw.fdt_alp / 100.0),
                     (byte)type);
          uVar10 = uVar10 + ';';
        } while (lVar9 < unaff_s2);
      }
    }
    bVar1 = true;
  }
  if ((sv_dsp_sw.svp_alp != 0) && (1 < (byte)type)) {
    fVar13 = 0.0;
    iVar12 = 0;
    iVar8 = 4;
    do {
      pos_y_00 = (float)iVar12;
      iVar12 = iVar12 + 0x3b;
      iVar8 = iVar8 + -1;
      PutSpriteYW(0x2ec,0x2ec,fVar13,pos_y_00,fVar13,0x808080,
                  (float)((int)((float)(uint)(ushort)sv_dsp_sw.svp_alp / 100.0) & 0xff),1.0,1.0,0,
                  0xff,1,0,0);
    } while (-1 < iVar8);
  }
  if (bVar1) {
    uVar11 = (int)((float)(uint)(ushort)sv_dsp_sw.fdt_alp / 100.0) & 0xff;
    if (0x50 < uVar11) {
      uVar11 = 0x50;
    }
    if ((byte)type < 2) {
      if (unaff_s2 < 3) {
        do {
          iVar8 = (int)unaff_s2;
          unaff_s2 = (long)(iVar8 + 1);
          PolySquareYW(209.0,(float)(iVar8 * 0x62 + 0x21),0x178,0x60,0,(float)uVar11,1.0,1.0,0xa000,
                       0,0,0);
        } while (unaff_s2 < 3);
      }
    }
    else if (unaff_s2 < 5) {
      do {
        iVar8 = (int)unaff_s2;
        unaff_s2 = (long)(iVar8 + 1);
        PolySquareYW(209.0,(float)(iVar8 * 0x3b + 0x21),0x178,0x36,0,(float)uVar11,1.0,1.0,0xa000,0,
                     0,0);
      } while (unaff_s2 < 5);
    }
  }
  if (msg_no_00 == 0xff) {
    sv_dsp_sw.msg_alp = 0;
  }
  else {
    sv_dsp_sw.msg_alp = (ushort)(byte)alp_max * 100;
  }
  if (((sv_dsp_sw.msg_alp == 0) || (msg_no_00 == 0xff)) || (mc_ctrl.step != mc_ctrl.stepbak))
  goto LAB_001fc2ec;
  if (uVar7 != 0xff) {
    if (mc_ctrl.step == 2) {
      YesNoCrslOKR(0x14000,(float)(uVar7 * 0x84 + 0x72),378.0,0x808080,
                   (float)(uint)(ushort)sv_dsp_sw.msg_alp / 100.0,2.0);
    }
    else {
      YesNoCrslOKR(0x14000,(float)(uVar7 * 0x84 + 0xb2),376.0,0x808080,
                   (float)(uint)(ushort)sv_dsp_sw.msg_alp / 100.0,2.0);
    }
  }
  if (CONCAT44(mc_ctrl.step,mc_ctrl.mode) == 0x600000002) {
    if (mc_ctrl.album.sta[mc_ctrl.now_cur] == '\x03') {
      msg_no = 0x21;
      pos_x = 0x30;
      pos_y = 0x164;
    }
    else {
      PutStringYW(8,(byte)msg_no_00,0x30,0x164,0x808080,
                  (byte)(int)((float)(uint)(ushort)sv_dsp_sw.msg_alp / 100.0),0xf000,0);
      cVar4 = mcCheckEmpty(0);
      if ((cVar4 == '\0') || ('\x04' < mc_ctrl.album.file_num)) goto LAB_001fc244;
      msg_no = 0x28;
      pos_x = 0x26;
      pos_y = 0x17e;
    }
    PutStringYW(8,msg_no,pos_x,pos_y,0x808080,0x80,0xf000,0);
  }
  else {
    PutStringYW(8,(byte)msg_no_00,0x30,0x164,0x808080,
                (byte)(int)((float)(uint)(ushort)sv_dsp_sw.msg_alp / 100.0),0xf000,0);
  }
LAB_001fc244:
  cVar4 = mcCheckDrawButton(msg_no_00);
  if (cVar4 != '\0') {
    fVar13 = SgSinf(((float)(uint)btn_flsh_cnt * DAT_00355fd8) / 60.0);
    DrawButtonTex(0xf000,3,552.0,380.0,(uchar)(int)((fVar13 + 1.0) * 128.0 * 0.5));
    bVar1 = 0x3b < btn_flsh_cnt;
    btn_flsh_cnt = btn_flsh_cnt + '\x01';
    if (bVar1) {
      btn_flsh_cnt = '\0';
    }
  }
LAB_001fc2ec:
  if (alt == 0xff) {
    sv_dsp_sw.alt_alp = 0;
  }
  else {
    sv_dsp_sw.alt_alp = (ushort)(byte)alp_max * 100;
  }
  if ((yes_no & 0xffU) == 0xff) {
    sv_dsp_sw.yno_alp = 0;
  }
  else {
    sv_dsp_sw.yno_alp = (ushort)(byte)alp_max * 100;
  }
  WarningMsg(alt,(uchar)uVar7,(uchar)(int)((float)(uint)(ushort)sv_dsp_sw.alt_alp / 100.0),
             (uchar)(int)((float)(uint)(ushort)sv_dsp_sw.yno_alp / 100.0));
  SetSprFile(0x1ce0000);
  DispCaption(9,(byte)alp_max);
  return;
}

static void WarningMsg(u_char msg, u_char csr0, u_char alp, u_char ha) {
	float pos_y;
	
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint msg_no;
  uint uVar4;
  float fVar5;
  
  uVar4 = (int)(char)alp & 0xff;
  msg_no = (int)(char)msg & 0xff;
  if (uVar4 != 0) {
    uVar3 = sv_dsp_sw.alt_bak_alp + 8;
    if (0x5f < uVar3) {
      uVar3 = 0x60;
    }
    sv_dsp_sw.alt_bak_alp = (uchar)uVar3;
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,(float)(uVar3 & 0xff),1.0,1.0,0x5000,0,0,0);
    PolySquareYW(35.0,198.0,0x23a,0x78,0,(float)uVar4,1.0,1.0,0x4000,0,0,0);
    DrawMessageBox(0x3000,26.0,195.0,DAT_00355fdc,125.0,(byte)uVar4);
    fVar5 = DAT_00355fe0;
    if ((msg_no != 0xc) && ((msg_no == 0x25 || (fVar5 = 255.0, msg_no == 0x27)))) {
      fVar5 = 229.0;
    }
    if (mc_ctrl.step == 2) {
      YesNoCrslOKR(0x2000,(float)(((int)(char)csr0 & 0xffU) * 0x84 + 0x72),fVar5 + 1.0,0x808080,
                   (float)((int)(char)ha & 0xffU),2.0);
    }
    else {
      YesNoCrslOKR(0x2000,(float)(((int)(char)csr0 & 0xffU) * 0x84 + 0xb8),fVar5 + 1.0,0x808080,
                   (float)((int)(char)ha & 0xffU),2.0);
    }
    if (msg_no != 0xff) {
      PutStringYW(8,(byte)msg_no,0x30,0xd3,0x808080,(byte)uVar4,0x1000,0);
      cVar2 = mcCheckDrawButton(msg_no);
      if (cVar2 != '\0') {
        fVar5 = SgSinf(((float)(uint)btn_flsh_cnt * DAT_00355fe4) / 60.0);
        DrawButtonTex(0x2000,3,552.0,280.0,(uchar)(int)((fVar5 + 1.0) * 128.0 * 0.5));
        bVar1 = 0x3b < btn_flsh_cnt;
        btn_flsh_cnt = btn_flsh_cnt + '\x01';
        if (bVar1) {
          btn_flsh_cnt = '\0';
        }
      }
    }
    return;
  }
  if ((int)(sv_dsp_sw.alt_bak_alp - 8) < 1) {
    sv_dsp_sw.alt_bak_alp = '\0';
  }
  else {
    sv_dsp_sw.alt_bak_alp = (uchar)(sv_dsp_sw.alt_bak_alp - 8);
  }
  PolySquareYW(0.0,0.0,0x280,0x1c0,0,(float)(uint)sv_dsp_sw.alt_bak_alp,1.0,1.0,0x5000,0,0,0);
  return;
}

static void GetSvpNo(u_char *no) {
	int i;
	u_char svp_no;
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  
  iVar3 = GetPointRoomNoFloor((short)(int)plyr_wrk.move_box.spd.z,
                              (short)(int)plyr_wrk.move_box.rot.x,map_wrk.floor);
  uVar2 = GetRoomIdFromRoomNoFloor('\0',(uchar)iVar3,map_wrk.floor);
  uVar7 = 0xff;
  uVar5 = 0;
  puVar6 = &DAT_0033fa7f;
  do {
    uVar1 = *puVar6;
    uVar4 = uVar5 & 0xff;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 8;
    if (uVar1 == uVar2) {
      uVar7 = uVar4;
    }
  } while ((int)uVar5 < 7);
  *no = (uchar)uVar7;
  return;
}

char SaveCamChk() {
  return '\0';
}

static void DspSavePoint(u_char csr1, u_char csr2, u_char alp, u_char type) {
  FlashStarYW(flsh + 1,'`','@','Z','\0');
  DspSpLenz(csr1,alp);
  DspSpData(csr2,alp,type);
  DspSpCate(csr1,csr2,alp);
  SpMsgWin(alp);
  DspSaveTitle(type,0,0,alp,'\x05');
  return;
}

static void DspSpLenz(u_char dsp_no, u_char alp) {
	float dec;
	
  float scl_x;
  uint uVar1;
  uint uVar2;
  float rot;
  float pos_y;
  
  uVar2 = (int)(char)alp & 0xff;
  uVar1 = ((int)(char)dsp_no & 0xffU) + 1;
  if (uVar1 == 2) {
    mrcl_lnz.slot1_alp = mrcl_lnz.slot1_alp - DAT_00355fe8;
    if (mrcl_lnz.slot1_alp <= 0.0) {
      mrcl_lnz.slot1_alp = 0.0;
    }
    mrcl_lnz.slot2_alp = mrcl_lnz.slot2_alp + DAT_00355fe8;
    if ((float)uVar2 <= mrcl_lnz.slot2_alp) {
      mrcl_lnz.slot2_alp = (float)uVar2;
    }
    mrcl_lnz.slot3_alp = mrcl_lnz.slot3_alp - DAT_00355fe8;
    if (mrcl_lnz.slot3_alp <= 0.0) {
      mrcl_lnz.slot3_alp = 0.0;
    }
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 1) {
        mrcl_lnz.slot1_alp = mrcl_lnz.slot1_alp + DAT_00355fe8;
        if ((float)uVar2 <= mrcl_lnz.slot1_alp) {
          mrcl_lnz.slot1_alp = (float)uVar2;
        }
        mrcl_lnz.slot2_alp = mrcl_lnz.slot2_alp - DAT_00355fe8;
        if (mrcl_lnz.slot2_alp <= 0.0) {
          mrcl_lnz.slot2_alp = 0.0;
        }
        mrcl_lnz.slot3_alp = mrcl_lnz.slot3_alp - DAT_00355fe8;
        if (mrcl_lnz.slot3_alp <= 0.0) {
          mrcl_lnz.slot3_alp = 0.0;
        }
        goto LAB_001fcacc;
      }
    }
    else if (uVar1 == 3) {
      mrcl_lnz.slot1_alp = mrcl_lnz.slot1_alp - DAT_00355fe8;
      if (mrcl_lnz.slot1_alp <= 0.0) {
        mrcl_lnz.slot1_alp = 0.0;
      }
      mrcl_lnz.slot2_alp = mrcl_lnz.slot2_alp - DAT_00355fe8;
      if (mrcl_lnz.slot2_alp <= 0.0) {
        mrcl_lnz.slot2_alp = 0.0;
      }
      mrcl_lnz.slot3_alp = mrcl_lnz.slot3_alp + DAT_00355fe8;
      if ((float)uVar2 <= mrcl_lnz.slot3_alp) {
        mrcl_lnz.slot3_alp = (float)uVar2;
      }
      goto LAB_001fcacc;
    }
    mrcl_lnz.slot1_alp = mrcl_lnz.slot1_alp - DAT_00355fe8;
    if (mrcl_lnz.slot1_alp <= 0.0) {
      mrcl_lnz.slot1_alp = 0.0;
    }
    mrcl_lnz.slot2_alp = mrcl_lnz.slot2_alp - DAT_00355fe8;
    if (mrcl_lnz.slot2_alp <= 0.0) {
      mrcl_lnz.slot2_alp = 0.0;
    }
    mrcl_lnz.slot3_alp = mrcl_lnz.slot3_alp - DAT_00355fe8;
    if (mrcl_lnz.slot3_alp <= 0.0) {
      mrcl_lnz.slot3_alp = 0.0;
    }
  }
LAB_001fcacc:
  rot = 0.0;
  PutSpriteYW(0x280,0x280,79.0,138.0,0.0,0x808080,mrcl_lnz.slot1_alp,1.0,1.0,0,0xff,1,0,0);
  scl_x = DAT_00355fec;
  PutSpriteYW(0x281,0x281,75.0,138.0,rot,0x808080,mrcl_lnz.slot2_alp,1.0,1.0,0,0xff,1,0,0);
  pos_y = -37.0;
  PutSpriteYW(0x2ad,0x2ad,-6.0,-37.0,rot,0x808080,mrcl_lnz.slot1_alp,scl_x,scl_x,0,0xff,1,0,0);
  PutSpriteYW(0x2ad,0x2ad,-6.0,pos_y,rot,0x808080,mrcl_lnz.slot2_alp,scl_x,scl_x,0,0xff,1,0,0);
  PutSpriteYW(0x2b0,0x2b0,DAT_00355ff0,-41.0,rot,0x808080,mrcl_lnz.slot3_alp,scl_x,scl_x,0,0xff,1,0,
              0);
  PutSpriteYW(0x27f,0x27f,22.0,77.0,rot,0x808080,(float)uVar2,scl_x,scl_x,0,0xff,1,0,0);
  return;
}

static void DspSpCate(u_char csr1, u_char csr2, u_char alp) {
  byte alp_00;
  float rot;
  float alp_01;
  
  alp_01 = (float)((int)(char)alp & 0xffU);
  alp_00 = (byte)((int)(char)alp & 0xffU);
  WakuWaku(0xfff0,0xba,alp_00,'\x03','\x1e');
  rot = 0.0;
  PutSpriteYW(0x282,0x282,36.0,218.0,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x283,0x283,36.0,256.0,rot,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x284,0x284,36.0,DAT_00355ff4,rot,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0);
  if (csr2 == 0xff) {
    CmnCursol(0x21,((short)(char)csr1 & 0xffU) * 0x26 + 0xda,0x7a,0x1e,(float)(uint)flsh[1].alpha,
              alp_00,0xa000);
    return;
  }
  CmnCursol(0x21,((short)(char)csr1 & 0xffU) * 0x26 + 0xda,0x7a,0x1e,64.0,alp_00,0xa000);
  return;
}

static void DspSpData(u_char csr2, u_char alp, u_char type) {
	int i;
	u_short pos_y;
	float csr_alp;
	
  byte alp_00;
  int iVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float in_f23;
  
  uVar4 = (int)(char)csr2 & 0xff;
  uVar3 = (int)(char)alp & 0xff;
  alp_00 = (byte)uVar3;
  CmnWindow(0x12,0,0,alp_00,0x80);
  SpSideBar(0,0,alp_00);
  iVar1 = 0;
  if (1 < type) {
    uVar2 = '\0';
    do {
      DspSpFile2((uchar)iVar1,uVar2,alp_00,type);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 + ';';
    } while (iVar1 < 5);
  }
  else {
    uVar2 = '\0';
    do {
      DspSpFile((uchar)iVar1,uVar2,alp_00,type);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 + 'b';
    } while (iVar1 < 3);
  }
  if (1 < type) {
    if (uVar4 == 0xff) {
      iVar1 = 0;
    }
    else {
      iVar1 = uVar4 * 0x3b;
      in_f23 = (float)(flsh[1].alpha * uVar3) * 0.0078125;
    }
    if (in_f23 != 0.0) {
      fVar5 = (float)iVar1;
      PutSpriteYW(0x2cf,0x2cf,0.0,fVar5,0.0,0x808080,in_f23,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x2d0,0x2d0,0.0,fVar5,0.0,0x808080,in_f23,1.0,1.0,0,0xff,1,0,0);
      return;
    }
  }
  else {
    if (uVar4 == 0xff) {
      iVar1 = 0x23;
    }
    else {
      iVar1 = uVar4 * 0x62 + 0x23;
      in_f23 = (float)(flsh[1].alpha * uVar3) * 0.0078125;
    }
    if (in_f23 != 0.0) {
      fVar5 = 1.0;
      PutSpriteYW(0x265,0x268,217.0,(float)iVar1,0.0,0x808080,in_f23,1.0,1.0,0,0xff,1,1,0);
      PutSpriteYW(0x269,0x26a,217.0,(float)iVar1,0.0,0x808080,in_f23,DAT_00355ff8,fVar5,0,0xff,1,1,0
                 );
      return;
    }
  }
  return;
}

static void DspSpFile(u_char file_no, u_char pos_y, u_char alp, u_char type) {
  CmnWindow(0x13,0,(ushort)((int)(char)pos_y & 0xffU),(byte)((int)(char)alp & 0xffU),0x80);
  PutSpriteYW(0x285,0x285,206.0,(float)(((int)(char)pos_y & 0xffU) + 0x4e),-90.0,0x808080,
              (float)((int)(char)alp & 0xffU),1.0,1.0,0,0xff,1,0,0);
  return;
}

static void DspSpInfo(u_char file_no, u_char pos_y, u_char alp, u_char type) {
	u_char end_showzo;
	u_char sv_pht;
	
  uint uVar1;
  ushort uVar2;
  byte alpha;
  ushort alpha_00;
  short sVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  uVar8 = (int)(char)pos_y & 0xff;
  uVar1 = (int)(char)file_no & 0xff;
  iVar7 = uVar1 * 0x20;
  uVar6 = (int)(char)alp & 0xff;
  iVar9 = uVar8 + 0x32;
  alpha_00 = (ushort)uVar6;
  PutNumberYW(6,uVar1 + 1,0xda,(ushort)iVar9,1.0,1.0,0x808080,alpha_00,0xa000,2,0);
  alpha = (byte)uVar6;
  sVar3 = (short)uVar8;
  if (mc_header_buf[uVar1].game.map_flg == 0) {
    PutStringYW(8,100,0xfa,sVar3 + 0x46,0x808080,alpha,0xa000,0);
    return;
  }
  if (*(short *)((int)mc_header_buf + iVar7 + 0x1c) == 0) {
    if (*(char *)((int)mc_header_buf + iVar7 + 0x1f) == '\0') {
      PutStringYW(8,*(char *)((int)mc_header_buf + iVar7 + 4) + 0x65,0xfa,sVar3 + 0x2e,0x808080,
                  alpha,0xa000,0);
    }
    else {
      PutStringYW(8,*(char *)((int)mc_header_buf + iVar7 + 4) + 0x65,0xfa,sVar3 + 0x2e,0x800000,
                  alpha,0xa000,0);
    }
    puVar5 = (undefined4 *)((int)mc_header_buf + iVar7 + 8);
    PutStringYW(0x1e,*(byte *)puVar5,0xfa,sVar3 + 0x46,0x808080,alpha,0xa000,0);
    uVar2 = sVar3 + 0x5b;
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0xc),0xff,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    PutStringYW(8,0x6c,0x132,uVar2,0x808080,alpha,0xa000,0);
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0x10),0x145,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    PutStringYW(8,0x6c,0x178,uVar2,0x808080,alpha,0xa000,0);
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0x14),0x18b,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    switch(*puVar5) {
    case 0:
      sVar3 = 0;
      break;
    default:
      sVar3 = 0xff;
      break;
    case 6:
      sVar3 = 1;
      break;
    case 0xe:
      sVar3 = 2;
      break;
    case 0xf:
      sVar3 = 3;
      break;
    case 0x15:
      sVar3 = 4;
      break;
    case 0x1f:
      sVar3 = 5;
      break;
    case 0x29:
      sVar3 = 6;
    }
    if (sVar3 != 0xff) {
      SetSprFile(0x1d28c80);
      fVar10 = 0.0;
      PutSpriteYW(sVar3 + 0x298,sVar3 + 0x298,DAT_00355ffc,(float)iVar9,0.0,0x808080,(float)uVar6,
                  1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x26b,0x274,456.0,(float)(uVar8 + 0x2f),fVar10,0x808080,(float)uVar6,1.0,1.0,0,
                  0xff,1,0,0);
    }
  }
  else {
    bVar4 = *(byte *)((int)mc_header_buf + iVar7 + 4);
    if (5 < bVar4) {
      bVar4 = 5;
    }
    if (*(char *)((int)mc_header_buf + iVar7 + 0x1f) == '\0') {
      PutStringYW(8,bVar4 + 0x65,0xfa,sVar3 + 0x2e,0x808080,alpha,0xa000,0);
    }
    else {
      PutStringYW(8,bVar4 + 0x65,0xfa,sVar3 + 0x2e,0x800000,alpha,0xa000,0);
    }
    uVar2 = sVar3 + 0x5b;
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0xc),0xff,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    PutStringYW(8,0x6c,0x132,uVar2,0x808080,alpha,0xa000,0);
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0x10),0x145,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    PutStringYW(8,0x6c,0x178,uVar2,0x808080,alpha,0xa000,0);
    PutNumberYW(0,*(int *)((int)mc_header_buf + iVar7 + 0x14),0x18b,uVar2,1.0,1.0,0x808080,alpha_00,
                0xa000,2,1);
    switch(bVar4) {
    case 0:
    case 5:
      sVar3 = 4;
      break;
    case 1:
      sVar3 = 0;
      break;
    case 2:
      sVar3 = 1;
      break;
    case 3:
      sVar3 = 2;
      break;
    case 4:
      sVar3 = 3;
      break;
    default:
      sVar3 = 0xff;
    }
    if (sVar3 != 0xff) {
      SetSprFile(0x1d28c80);
      fVar10 = 0.0;
      PutSpriteYW(sVar3 + 0x29f,sVar3 + 0x29f,DAT_00356000,(float)iVar9,0.0,0x808080,(float)uVar6,
                  1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x26b,0x274,456.0,(float)(uVar8 + 0x2f),fVar10,0x808080,(float)uVar6,1.0,1.0,0,
                  0xff,1,0,0);
    }
  }
  if (*(char *)((int)mc_header_buf + iVar7 + 0x1e) == '\0') {
    return;
  }
  PutSpriteYW(0x275,0x27e,456.0,(float)(uVar8 + 0x2f),0.0,0x808080,(float)uVar6,1.0,1.0,0,0xff,1,0,0
             );
  return;
}

static void DspSpFile2(u_char file_no, u_char pos_y, u_char alp, u_char type) {
  CmnWindow(0x1c,0,(ushort)((int)(char)pos_y & 0xffU),(byte)((int)(char)alp & 0xffU),0x80);
  PutSpriteYW(0x2e5,0x2e5,-7.0,(float)(((int)(char)pos_y & 0xffU) + 2),0.0,0x808080,
              (float)((int)(char)alp & 0xffU),1.0,1.0,0,0xff,1,0,0);
  return;
}

static void DspSpInfo2(u_char csr_no, u_char pos_y, u_char alp, u_char type) {
  byte bVar1;
  short sVar2;
  ushort alpha;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float alp_00;
  
  uVar6 = (int)(char)pos_y & 0xff;
  bVar1 = mc_ctrl.album.sta[(int)(char)csr_no & 0xffU];
  uVar5 = (int)(char)alp & 0xff;
  sVar2 = (short)uVar6;
  if (bVar1 == 3) {
    PutStringYW(8,0x6b,0x10f,sVar2 + 0x2f,0x808080,(byte)uVar5,0xa000,0);
    return;
  }
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      fVar7 = 0.0;
      bVar1 = mc_ctrl.album.file_no[(int)(char)csr_no & 0xffU];
      PutSpriteYW(0x2e7,0x2e7,0.0,(float)uVar6,0.0,0x808080,(float)uVar5,1.0,1.0,0,0xff,1,0,0);
      uVar3 = (uint)bVar1;
      iVar4 = uVar3 * 0x20;
      alpha = (ushort)uVar5;
      PutNumberYW(9,uVar3 + 1,0x13f,sVar2 + 0x31,1.0,1.0,0x808080,alpha,0xa000,2,0);
      PutNumberYW(10,*(int *)((int)mc_header_buf + iVar4 + 4),0x1bb,sVar2 + 0x30U,1.0,1.0,0x808080,
                  alpha,0xa000,2,0);
      PutNumberYW(10,0x18,0x1e5,sVar2 + 0x30U,1.0,1.0,0x808080,alpha,0xa000,2,0);
      sVar2 = *(short *)((int)mc_header_buf + iVar4 + 8) + 0x2c9;
      PutSpriteYW(sVar2,sVar2,DAT_00356004,(float)(uVar6 + 1),fVar7,0x808080,(float)uVar5,0.25,0.25,
                  0,0xff,1,0,0);
      return;
    }
  }
  else {
    if (bVar1 == 9) {
      PutStringYW(8,0x6b,0x10f,sVar2 + 0x2f,0x808080,(byte)uVar5,0xa000,0);
      return;
    }
    if (bVar1 == 0xff) {
      alp_00 = (float)uVar5;
      fVar7 = 0.0;
      PutSpriteYW(0x2e9,0x2e9,0.0,(float)uVar6,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x2e8,0x2e8,DAT_00356008,(float)(uVar6 + 0x30),fVar7,0x808080,alp_00,1.0,1.0,0,
                  0xff,1,0,0);
      PutSpriteYW(0x2e8,0x2e8,DAT_0035600c,(float)(uVar6 + 0x31),fVar7,0x808080,alp_00,1.0,1.0,0,
                  0xff,1,0,0);
      return;
    }
  }
  return;
}

char AlbmSlct(u_char csr3, u_char step, u_char alp_max, u_char ini) {
	int i;
	float per;
	char rtrn;
	static u_char book_anm;
	static u_char back_alp;
	static u_char csr_bak;
	static u_char csr_bak2;
	BOOK init[6];
	BOOK move;
	
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar14;
  uint uVar15;
  short *psVar16;
  BOOK *pBVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  BOOK *pBVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  BOOK init [6];
  BOOK move;
  
  bVar6 = csr_bak_187;
  uVar9 = DAT_00351368;
  uVar18 = (long)(char)csr3 & 0xff;
  pBVar17 = init;
  puVar13 = (ulong *)&DAT_00351318;
  uVar15 = (int)(char)alp_max & 0xff;
  pBVar21 = init;
  do {
    puVar11 = (ulong *)pBVar21;
    uVar12 = puVar13[1];
    uVar19 = puVar13[2];
    uVar20 = puVar13[3];
    *puVar11 = *puVar13;
    puVar11[1] = uVar12;
    puVar11[2] = uVar19;
    puVar11[3] = uVar20;
    puVar13 = puVar13 + 4;
    pBVar21 = (BOOK *)(puVar11 + 4);
  } while (puVar13 != (ulong *)&UNK_00351358);
  uVar10 = (int)puVar11 + 0x27U & 7;
  puVar13 = (ulong *)(((int)puVar11 + 0x27U) - uVar10);
  *puVar13 = *puVar13 & -1L << (uVar10 + 1) * 8 | _UNK_00351358 >> (7 - uVar10) * 8;
  puVar11[4] = _UNK_00351358;
  puVar1 = (undefined *)((int)&move.pos_y + 1);
  uVar10 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar10);
  *puVar13 = *puVar13 & -1L << (uVar10 + 1) * 8 | DAT_00351360 >> (7 - uVar10) * 8;
  move._0_8_ = DAT_00351360;
  uVar10 = (uint)&move.field_0xb & 3;
  puVar4 = (uint *)(&move.field_0xb + -uVar10);
  *puVar4 = *puVar4 & -1 << (uVar10 + 1) * 8 | DAT_00351368 >> (3 - uVar10) * 8;
  move._8_4_ = DAT_00351368;
  bVar14 = (byte)uVar15;
  if (step == '\f') {
    if (csr_bak2_188 != 0xff) {
      csr_bak2_188 = 0xff;
      uVar8 = (uint)csr_bak_187;
      puVar1 = (undefined *)((int)&init[uVar8].pos_y + 1);
      uVar9 = (uint)puVar1 & 7;
      uVar10 = (uint)(init + uVar8) & 7;
      uVar12 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar10) * 8 |
               *(ulong *)((int)(init + uVar8) - uVar10) >> uVar10 * 8;
      uVar10 = *(uint *)&init[uVar8].ttl;
      uVar9 = uVar8 * 0xc + 0x402d17;
      uVar22 = uVar9 & 7;
      puVar13 = (ulong *)(uVar9 - uVar22);
      *puVar13 = *puVar13 & -1L << (uVar22 + 1) * 8 | uVar12 >> (7 - uVar22) * 8;
      uVar9 = (uint)(book + uVar8) & 7;
      puVar13 = (ulong *)((int)(book + uVar8) - uVar9);
      *puVar13 = uVar12 << uVar9 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      uVar9 = uVar8 * 0xc + 0x402d1b;
      uVar22 = uVar9 & 3;
      puVar4 = (uint *)(uVar9 - uVar22);
      *puVar4 = *puVar4 & -1 << (uVar22 + 1) * 8 | uVar10 >> (3 - uVar22) * 8;
      *(uint *)&book[uVar8].ttl = uVar10;
    }
    uVar9 = (uint)back_alp_186;
    back_alp_186 = bVar14;
    if (uVar9 + 8 < uVar15) {
      back_alp_186 = (byte)(uVar9 + 8);
    }
    uVar12 = 0;
    pBVar21 = book;
    do {
      uVar9 = pBVar21->alp + 8;
      if (uVar9 < uVar15) {
        pBVar21->alp = (uchar)uVar9;
      }
      else {
        pBVar21->alp = bVar14;
      }
      if (uVar12 == uVar18) {
        pBVar21->rgb = 0x80;
      }
      else {
        pBVar21->rgb = '@';
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      pBVar21 = pBVar21 + 1;
    } while ((long)uVar12 < 6);
    csr_bak_187 = (byte)uVar18;
    cVar7 = '\x01';
    book_anm_185 = 0;
  }
  else {
    iVar24 = 0;
    if (step == '\r') {
      if (book_anm_185 < 0x10) {
        book_anm_185 = book_anm_185 + 1;
      }
      pBVar21 = book;
      uVar10 = (uint)csr_bak_187;
      move.siz_w = (ushort)DAT_00351360;
      move.siz_h = (ushort)(DAT_00351360 >> 0x10);
      fVar25 = (float)(uint)book_anm_185 * 0.0625;
      move.pos_x = (ushort)(DAT_00351360 >> 0x20);
      move.pos_y = (ushort)(DAT_00351360 >> 0x30);
      uVar22 = 0;
      iVar24 = 0;
      psVar16 = (short *)((uint)init | 6);
      do {
        if (uVar22 == uVar10) {
          bVar2 = *(byte *)((int)pBVar17 + 8);
          pBVar21->siz_w =
               (ushort)(int)((float)((int)(short)move.siz_w - (int)*(short *)pBVar17) * fVar25 +
                            (float)(int)*(short *)pBVar17);
          pBVar21->siz_h =
               (ushort)(int)((float)((int)(short)move.siz_h - (int)psVar16[-2]) * fVar25 +
                            (float)(int)psVar16[-2]);
          *(short *)((int)&book[0].pos_x + iVar24) =
               (short)(int)((float)((int)(short)move.pos_x - (int)psVar16[-1]) * fVar25 +
                           (float)(int)psVar16[-1]);
          sVar3 = *psVar16;
          pBVar21->ttl = (uchar)(int)((float)((uVar9 & 0xff) - (uint)bVar2) * fVar25 +
                                     (float)(uint)bVar2);
          pBVar21->rgb = 0x80;
          pBVar21->alp = bVar14;
          pBVar21->pos_y =
               (ushort)(int)((float)((int)(short)move.pos_y - (int)sVar3) * fVar25 +
                            (float)(int)sVar3);
        }
        else {
          pBVar21->rgb = '@';
          pBVar21->alp = (uchar)(int)((float)uVar15 * (1.0 - fVar25));
        }
        uVar22 = uVar22 + 1;
        pBVar21 = pBVar21 + 1;
        pBVar17 = (BOOK *)((int)pBVar17 + 0xc);
        psVar16 = psVar16 + 6;
        iVar24 = iVar24 + 0xc;
      } while ((int)uVar22 < 6);
      csr_bak2_188 = bVar6;
      cVar7 = '\x02';
    }
    else {
      do {
        iVar5 = iVar24 * 0xc;
        iVar23 = iVar24 + 1;
        puVar1 = (undefined *)((int)&init[iVar24].pos_y + 1);
        uVar9 = (uint)puVar1 & 7;
        uVar15 = (uint)(init + iVar24) & 7;
        uVar12 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
                 (long)iVar5 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar15) * 8 |
                 *(ulong *)((int)(init + iVar24) - uVar15) >> uVar15 * 8;
        uVar9 = *(uint *)&init[iVar24].ttl;
        uVar15 = iVar5 + 0x402d17U & 7;
        puVar13 = (ulong *)((iVar5 + 0x402d17U) - uVar15);
        *puVar13 = *puVar13 & -1L << (uVar15 + 1) * 8 | uVar12 >> (7 - uVar15) * 8;
        uVar15 = (uint)(book + iVar24) & 7;
        puVar13 = (ulong *)((int)(book + iVar24) - uVar15);
        *puVar13 = uVar12 << uVar15 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
        uVar15 = iVar5 + 0x402d1bU & 3;
        puVar4 = (uint *)((iVar5 + 0x402d1bU) - uVar15);
        *puVar4 = *puVar4 & -1 << (uVar15 + 1) * 8 | uVar9 >> (3 - uVar15) * 8;
        *(uint *)&book[iVar24].ttl = uVar9;
        iVar24 = iVar23;
      } while (iVar23 < 6);
      back_alp_186 = 0;
      csr_bak2_188 = 0xff;
      cVar7 = '\0';
      book_anm_185 = 0;
      csr_bak_187 = 0xff;
    }
  }
  if (uVar18 == 0xff) {
    cVar7 = -1;
  }
  else {
    iVar24 = 0;
    PolySquareYW(80.0,54.0,0x1e0,0x100,0,(float)(uint)back_alp_186 * 0.5,1.0,1.0,0x5000,0,0,0);
    pBVar21 = book;
    do {
      OpenBook(iVar24,pBVar21);
      iVar24 = iVar24 + 1;
      pBVar21 = pBVar21 + 1;
    } while (iVar24 < 6);
  }
  return cVar7;
}

static void OpenBook(int i, BOOK *book) {
	DISP_SPRT ds;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  DISP_SPRT ds;
  
  iVar3 = (i + 0x2c9U & 0xffff) * 0x20;
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + iVar3));
  uVar1 = *(ushort *)(&DAT_0032987c + iVar3);
  uVar2 = *(ushort *)(&DAT_0032987e + iVar3);
  if (uVar1 == 0) {
    trap(7);
  }
  ds.alpha = book->alp;
  ds.x = (float)(int)(short)(int)((float)(int)(short)book->pos_x +
                                 (float)((int)(short)book->siz_w - (uint)uVar1) * 0.5);
  ds.y = (float)(int)(short)(int)((float)(int)(short)book->pos_y +
                                 (float)((int)(short)book->siz_h - (uint)uVar2) * 0.5);
  ds.r = book->rgb;
  ds.tex1 = 0x161;
  ds.csx = (float)(int)(short)(int)(ds.x + (float)(uint)uVar1 * 0.5);
  ds.pri = 0x1000;
  ds.z = 0xfffefff;
  ds.csy = (float)(int)(short)(int)(ds.y + (float)(uint)uVar2 * 0.5);
  ds.scw = (float)(((short)book->siz_w * 100) / (int)(uint)uVar1 & 0xff) / 100.0;
  ds.sch = (float)(((short)book->siz_h * 100) / (int)(uint)uVar2 & 0xff) / 100.0;
  ds.g = ds.r;
  ds.b = ds.r;
  DispSprD(&ds);
  return;
}

static void SpMsgWin(u_char alpha) {
  DrawMessageBox(0x19000,26.0,340.0,588.0,80.0,alpha);
  return;
}

static void SpSideBar(short int pos_x, short int pos_y, u_char alpha) {
  uint uVar1;
  float rot;
  float pos_y_00;
  float pos_x_00;
  float alp;
  
  uVar1 = (int)(char)alpha & 0xff;
  alp = (float)uVar1;
  pos_y_00 = (float)(int)(short)pos_y;
  pos_x_00 = (float)(int)(short)pos_x;
  rot = 0.0;
  PutSpriteYW(0x290,0x290,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x291,0x291,pos_x_00,pos_y_00,rot,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x292,0x292,pos_x_00,pos_y_00,rot,0x808080,alp,1.0,DAT_00356010,0,0xff,1,0,0);
  SideBar('\x03','\x03',0x11a,'\0',0x295,(uchar)uVar1,0,0);
  SpTrFlsh(pos_x,pos_y,(ushort)uVar1);
  return;
}

static void SpTrFlsh(short int pos_x, short int pos_y, short int alpha) {
  PutSpriteYW(0x293,0x294,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,(int)&DAT_00404040,
              (float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  return;
}

static void DspSaveTitle(u_char type, short int pos_x, short int pos_y, u_char alp, u_char pri) {
  short top_label;
  short end_label;
  int pri_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float pos_x_00;
  float alp_00;
  
  iVar3 = (int)(short)pos_x;
  alp_00 = (float)((int)(char)alp & 0xff);
  iVar2 = (int)(short)pos_y;
  pos_x_00 = (float)(iVar3 + -0xf);
  uVar1 = (int)(char)pri & 0xff;
  fVar4 = 1.0;
  PutSpriteYW(200,200,pos_x_00,(float)(iVar2 + -0x67),0.0,0x808080,alp_00 * 0.5,1.0,1.0,0,
              (uVar1 + 4 & 0xff) << 0xc,1,0,0);
  if (type == '\x01') {
    top_label = 0x219;
    end_label = 0x219;
  }
  else {
    if (1 < type) {
      if (type == '\x02') {
        PutSpriteYW(0x21a,0x21a,pos_x_00,(float)iVar2,0.0,0x808080,alp_00,fVar4,fVar4,0,
                    (uVar1 + 3 & 0xff) << 0xc,1,0,0);
      }
      goto LAB_001fe868;
    }
    if (type != '\0') goto LAB_001fe868;
    top_label = 0x218;
    end_label = 0x218;
  }
  PutSpriteYW(top_label,end_label,pos_x_00,(float)iVar2,0.0,0x808080,alp_00,fVar4,fVar4,0,
              (uVar1 + 3 & 0xff) << 0xc,1,0,0);
LAB_001fe868:
  fVar4 = 0.0;
  pri_00 = (uVar1 + 1 & 0xff) << 0xc;
  PutSpriteYW(0xb5,0xb5,(float)(iVar3 + 9),(float)(iVar2 + 0x1b),0.0,0x808080,alp_00,1.0,1.0,0,
              pri_00,1,0,0);
  PutSpriteYW(0xb5,0xb5,(float)(iVar3 + 9),(float)(iVar2 + 0x41),fVar4,0x808080,alp_00,1.0,1.0,0,
              pri_00,1,0,0);
  PutSpriteYW(0xa7,0xa8,(float)(iVar3 + 0x10),(float)(iVar2 + 0x30),fVar4,0x808080,alp_00,1.0,1.0,0,
              uVar1 << 0xc,1,0,0);
  PutSpriteYW(0xa7,0xa8,(float)(iVar3 + 0x92),(float)(iVar2 + 0x30),fVar4,0x808080,alp_00,1.0,1.0,0,
              uVar1 << 0xc,1,0,0);
  return;
}

static void PhotoDataExchange() {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  uchar *puVar6;
  ulong uVar7;
  MC_ALBUM_SAVE *pMVar8;
  uint uVar9;
  ulong in_a2;
  ulong in_a3;
  
  uVar7 = 0x265928;
  pMVar8 = album_save_dat;
  uVar9 = 0x26592c;
  do {
    uVar2 = uVar9 + 7 & 7;
    uVar3 = uVar9 & 7;
    uVar7 = (*(long *)((uVar9 + 7) - uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)(uVar9 - uVar3) >> uVar3 * 8;
    uVar2 = uVar9 + 0xf & 7;
    uVar3 = uVar9 + 8 & 7;
    in_a2 = (*(long *)((uVar9 + 0xf) - uVar2) << (7 - uVar2) * 8 |
            in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((uVar9 + 8) - uVar3) >> uVar3 * 8;
    uVar2 = uVar9 + 0x17 & 7;
    uVar3 = uVar9 + 0x10 & 7;
    in_a3 = (*(long *)((uVar9 + 0x17) - uVar2) << (7 - uVar2) * 8 |
            in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((uVar9 + 0x10) - uVar3) >> uVar3 * 8;
    uVar4 = *(undefined4 *)(uVar9 + 0x18);
    puVar1 = (undefined *)((int)pMVar8->pic[0].subject + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)pMVar8 & 7;
    *(ulong *)((int)pMVar8 - uVar2) =
         uVar7 << uVar2 * 8 |
         *(ulong *)((int)pMVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar1 = (undefined *)((int)pMVar8->pic[0].subject[2] + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_a2 >> (7 - uVar2) * 8;
    uVar2 = (uint)pMVar8->pic[0].subject[1] & 7;
    puVar5 = (ulong *)((int)pMVar8->pic[0].subject[1] - uVar2);
    *puVar5 = in_a2 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar6 = &pMVar8->pic[0].time.hour;
    uVar2 = (uint)puVar6 & 7;
    puVar6 = puVar6 + -uVar2;
    *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
    uVar2 = (uint)&pMVar8->pic[0].score & 7;
    puVar5 = (ulong *)((int)&pMVar8->pic[0].score - uVar2);
    *puVar5 = in_a3 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    *(undefined4 *)&pMVar8->pic[0].time.pad = uVar4;
    pMVar8 = (MC_ALBUM_SAVE *)((int)pMVar8 + 0x1c);
    uVar9 = uVar9 + 0x1c;
    uVar7 = (ulong)((int)pMVar8 < 0x252020);
  } while (uVar7 != 0);
  return;
}

static int AlbmDesignLoadInGame(u_char side, u_char type) {
	u_int addr;
	int load_id;
	
  int iVar1;
  uint in_a2_lo;
  
  if (side == '\0') {
    in_a2_lo = 0x1d88100;
  }
  else if (side == '\x01') {
    in_a2_lo = 0x1d98570;
  }
  switch(type) {
  case '\0':
    iVar1 = LoadReq(0x57,in_a2_lo);
    break;
  case '\x01':
    iVar1 = LoadReq(0x58,in_a2_lo);
    break;
  case '\x02':
    iVar1 = LoadReq(0x59,in_a2_lo);
    break;
  case '\x03':
    iVar1 = LoadReq(0x5a,in_a2_lo);
    break;
  case '\x04':
    iVar1 = LoadReq(0x5b,in_a2_lo);
    break;
  case '\x05':
    iVar1 = LoadReq(0x5c,in_a2_lo);
    break;
  default:
    iVar1 = -1;
  }
  return iVar1;
}

void AlbumModeInGameOverInit() {
  ingame_wrk.mode = 0x15;
  albm_mode.load_id = -1;
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  albm_mode.step = '\0';
  return;
}

char AlbumModeInGameOver() {
	char rtrn;
	
  byte bVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  short (*pasVar5) [2];
  MC_ALBUM_SAVE *pMVar6;
  sceCdCLOCK sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((albm_mode.load_id != -1) && (iVar4 = IsLoadEnd(albm_mode.load_id), iVar4 != 0)) {
    albm_mode.load_id = -1;
  }
  cVar3 = '\0';
  switch(albm_mode.step) {
  case '\0':
    albm_mode.type[0] = '\x05';
    albm_mode.load_side = '\0';
    albm_mode.in_album = '\0';
    albm_mode.type[1] = '\x05';
    albm_mode.load_id = LoadReq(0x48,0x1d59630);
    albm_mode.load_id = LoadReq(0x47,0x1d15600);
    albm_mode.load_id = LoadReq(99,0x1d28c80);
    albm_mode.step = '\x01';
    break;
  case '\x01':
    if (albm_mode.load_id == -1) {
      InitialDmaBuffer();
      if (albm_mode.in_album == '\0') {
        mcInit('\x03',(uint *)&DAT_00420000,'\0');
      }
      else {
        mcInit('\x04',(uint *)&DAT_00420000,'\0');
      }
      albm_mode.step = '\x02';
    }
    break;
  case '\x02':
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    uVar2 = McAtLoadChk('\x02');
    if (uVar2 == '\x01') {
      if (albm_mode.in_album == '\0') {
        PhotoDataExchange();
        pMVar6 = &mc_album_save;
        pasVar5 = (short (*) [2])(album_save_dat + 1);
        albm_mode.type[0] = '\x05';
        do {
          uVar9 = *(undefined8 *)((int)pMVar6 + 8);
          sVar7 = *(sceCdCLOCK *)((int)pMVar6 + 0x10);
          uVar8 = *(undefined8 *)((int)pMVar6 + 0x18);
          *(undefined8 *)pasVar5 = *(undefined8 *)pMVar6;
          *(undefined8 *)pasVar5[2] = uVar9;
          *(sceCdCLOCK *)pasVar5[4] = sVar7;
          *(undefined8 *)pasVar5[6] = uVar8;
          pMVar6 = (MC_ALBUM_SAVE *)((int)pMVar6 + 0x20);
          pasVar5 = pasVar5[8];
        } while (pMVar6 != album_save_dat);
        albm_mode.type[1] = (byte)mc_album_type;
        MemAlbmInit(0,0xff,(byte)mc_photo_num,0xff,(byte)mc_album_type,0xff,(char)mc_ctrl.port + 1,
                    0xff,(mc_ctrl.sel_file & 0xffU) + 1 & 0xff);
        uVar2 = '\x05';
      }
      else {
        pMVar6 = &mc_album_save;
        pasVar5 = (short (*) [2])(album_save_dat + 1);
        do {
          uVar9 = *(undefined8 *)((int)pMVar6 + 8);
          sVar7 = *(sceCdCLOCK *)((int)pMVar6 + 0x10);
          uVar8 = *(undefined8 *)((int)pMVar6 + 0x18);
          *(undefined8 *)pasVar5 = *(undefined8 *)pMVar6;
          *(undefined8 *)pasVar5[2] = uVar9;
          *(sceCdCLOCK *)pasVar5[4] = sVar7;
          *(undefined8 *)pasVar5[6] = uVar8;
          pMVar6 = (MC_ALBUM_SAVE *)((int)pMVar6 + 0x20);
          pasVar5 = pasVar5[8];
        } while (pMVar6 != album_save_dat);
        albm_mode.type[1] = (byte)mc_album_type;
        MemAlbmInit2(1,(byte)mc_photo_num,(byte)mc_album_type,(char)mc_ctrl.port + 1,
                     (char)mc_ctrl.sel_file + 1);
        uVar2 = albm_mode.type[0];
      }
      albm_mode.load_id = AlbmDesignLoadInGame('\0',uVar2);
      albm_mode.load_id = AlbmDesignLoadInGame('\x01',(byte)mc_album_type);
      albm_mode.load_id = LoadReq(0x56,0x1d15600);
      albm_mode.step = '\x03';
      return '\0';
    }
    if ((char)uVar2 < '\x02') {
      return '\0';
    }
    if (uVar2 != '\x02') {
      if (uVar2 != '\x03') {
        return '\0';
      }
      if (albm_mode.in_album != '\0') {
        albm_mode.type[1] = '\x05';
        NewAlbumInit(1);
        albm_mode.load_id = AlbmDesignLoadInGame('\0',albm_mode.type[0]);
        albm_mode.load_id = AlbmDesignLoadInGame('\x01','\x05');
        albm_mode.load_id = LoadReq(0x56,0x1d15600);
        albm_mode.step = uVar2;
        return '\0';
      }
      albm_mode.type[0] = '\x05';
      PhotoDataExchange();
      MemAlbmInit(0,0xff,0,0xff,0,0xff,0,0xff,0);
      albm_mode.load_id = AlbmDesignLoadInGame('\0',albm_mode.type[0]);
      albm_mode.type[1] = '\x05';
      NewAlbumInit(1);
      albm_mode.load_id = AlbmDesignLoadInGame('\x01','\x05');
      albm_mode.step = uVar2;
      albm_mode.load_id = LoadReq(0x56,0x1d15600);
      return '\0';
    }
    if (albm_mode.in_album == '\0') {
      albm_mode.step = '\a';
      return '\0';
    }
    MemAlbmInit3();
    albm_mode.load_id = AlbmDesignLoadInGame('\0','\x05');
    goto LAB_001ff334;
  case '\x03':
    if (albm_mode.load_id == -1) {
      albm_mode.step = '\x04';
    }
    break;
  case '\x04':
    BgFusumaYW(0x606060,0.0,128.0,0x7d000);
    SetSprFile(0x1d15600);
    bVar1 = SweetMemories(0,0x80);
    switch(bVar1) {
    case 1:
      mcInit('\x02',(uint *)&DAT_00420000,'\x01');
      albm_mode.load_side = '\0';
      albm_mode.load_id = LoadReq(0x47,0x1d15600);
      albm_mode.load_id = LoadReq(99,0x1d28c80);
      albm_mode.in_album = '\x01';
      albm_mode.step = '\x05';
      break;
    case 2:
      mcInit('\x02',(uint *)&DAT_00420000,'\x01');
      albm_mode.load_side = '\x01';
      albm_mode.load_id = LoadReq(0x47,0x1d15600);
      albm_mode.load_id = LoadReq(99,0x1d28c80);
      albm_mode.step = '\x05';
      albm_mode.in_album = '\x01';
      break;
    case 3:
      albm_mode.load_side = '\0';
      albm_mode.load_id = LoadReq(0x47,0x1d15600);
      albm_mode.load_id = LoadReq(99,0x1d28c80);
      albm_mode.step = '\x01';
      albm_mode.in_album = '\x01';
      break;
    case 4:
      albm_mode.load_side = '\x01';
      albm_mode.load_id = LoadReq(0x47,0x1d15600);
      albm_mode.load_id = LoadReq(99,0x1d28c80);
      albm_mode.step = '\x01';
      albm_mode.in_album = '\x01';
      break;
    case 5:
      albm_mode.step = '\a';
    }
    break;
  case '\x05':
    if (albm_mode.load_id == -1) {
      albm_mode.step = '\x06';
    }
    break;
  case '\x06':
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    uVar2 = McAtAlbmChk();
    iVar4 = mc_ctrl.sel_file;
    if (uVar2 != '\x01') {
      if ((char)uVar2 < '\x02') {
        return '\0';
      }
      if (uVar2 != '\x02') {
        return '\0';
      }
      if (albm_mode.in_album != '\0') {
        MemAlbmInit3();
        albm_mode.load_id = AlbmDesignLoadInGame('\0',albm_mode.type[0]);
        albm_mode.load_id = AlbmDesignLoadInGame('\x01',albm_mode.type[1]);
        albm_mode.load_id = LoadReq(0x56,0x1d15600);
        albm_mode.step = '\x03';
        return '\0';
      }
      mcInit('\x03',(uint *)&DAT_00420000,'\0');
      albm_mode.step = uVar2;
      return '\0';
    }
    if (albm_mode.in_album == '\0') {
      PhotoDataExchange();
      albm_mode.type[0] = '\x05';
      albm_mode.type[1] = (byte)mc_album_type;
      MemAlbmInit(0,0xff,0,0xff,0,0xff,0,0xff,0);
      NewAlbumInit(1);
    }
    else {
      albm_mode.type[albm_mode.load_side] = (byte)mc_album_type;
      MemAlbmInit2(albm_mode.load_side,(byte)mc_photo_num,(byte)mc_album_type,(char)mc_ctrl.port + 1
                   ,(char)iVar4 + 1);
    }
    albm_mode.load_id = AlbmDesignLoadInGame('\0',albm_mode.type[0]);
    mc_album_type._0_1_ = albm_mode.type[1];
LAB_001ff334:
    albm_mode.load_id = AlbmDesignLoadInGame('\x01',(byte)mc_album_type);
    albm_mode.load_id = LoadReq(0x56,0x1d15600);
    albm_mode.step = '\x03';
    break;
  case '\a':
    cVar3 = '\0';
    if (albm_mode.load_id == -1) {
      cVar3 = '\x01';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      InitialDmaBuffer();
    }
  }
  return cVar3;
}

int SavePointLightJudge() {
  int iVar1;
  uint uVar2;
  
  iVar1 = EnemyUseJudge(0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = (uint)(ev_wrk.btl_lock == 0);
  }
  return uVar2;
}
