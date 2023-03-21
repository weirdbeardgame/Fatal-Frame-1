// STATUS: NOT STARTED

typedef struct {
	u_char type;
	u_char no;
	u_char msg0;
	u_char msg1;
	u_char flg;
	u_char itm_num;
} FILE_GET_CTRL;

typedef struct {
	u_short cnt;
	u_char stp;
	u_char dsp;
	u_char csr[1];
	u_char stts;
	u_char page_all;
	u_char open_page;
} FILE_GET_DSP;

typedef struct {
	u_char msg_type_bak;
	u_char msg_no_bak;
	u_char str;
	u_char msg;
	u_char scn;
	u_char chr;
	u_char ply;
	u_char nam;
	u_char tim;
	u_char bak;
	u_char msg_end;
} FILE_GET_FADE;

typedef struct {
	u_long tex_addr;
	float scl;
	u_char alp;
} FILE2D;

// warning: multiple differing types with the same name (#137,  not equal)
enum {
	GET_FILE_BOOK = 1,
	GET_FILE_PHOT = 2,
	GET_FILE_ITEM = 3
};

// warning: multiple differing types with the same name (#137,  not equal)
enum {
	START = 0,
	INIT = 1,
	ERROR = 2,
	END = 3,
	STEP_B00 = 4,
	STEP_B01 = 5,
	STEP_B02 = 6,
	STEP_B03 = 7,
	STEP_B04 = 8,
	STEP_B05 = 9,
	STEP_B06 = 10,
	STEP_B07 = 11,
	STEP_P00 = 12,
	STEP_P01 = 13,
	STEP_P02 = 14,
	STEP_P03 = 15,
	STEP_P04 = 16,
	STEP_P05 = 17,
	STEP_P06 = 18,
	STEP_I00 = 19,
	STEP_I01 = 20,
	STEP_I02 = 21,
	STEP_I03 = 22,
	STEP_I04 = 23
};

typedef struct {
	int item_no;
	int adpcm_no;
} TAPE_DAT;

TAPE_DAT tape_dat[0] = {
};
int play_tape_timer = 0;
static FILE_GET_CTRL get_ctrl;
static FILE_GET_DSP file_dsp;
static FILE_GET_FADE fade_ctr;
static FILE2D file2d;
static FLSH_CORE flsh;
static int igt_load_id;
char tape_play = 0;

void ItemGet(u_char get_type, u_char get_no, u_char msg0_no, u_char msg1_no) {
  memset(&get_ctrl,0,6);
  memset(&file_dsp,0,8);
  memset(&fade_ctr,0,0xb);
  memset(&file2d,0,0x10);
  get_ctrl.no = (uchar)((int)(char)get_no & 0xffU);
  get_ctrl.type = get_type;
  get_ctrl.msg0 = msg0_no;
  get_ctrl.msg1 = msg1_no;
  RstMessageYW();
  igt_load_id = -1;
  eff_blur_off = 1;
  tape_play = '\0';
  if (get_type < 3) {
    get_ctrl.flg = '\x01';
  }
  else if (get_type == '\x03') {
    get_ctrl.flg = '\x02';
  }
  else if (get_type == '\x04') {
    get_ctrl.flg = '\x03';
    get_ctrl.itm_num = poss_item[(int)(char)get_no & 0xffU];
  }
  return;
}

int ItemGetCtrl() {
  bool bVar1;
  int iVar2;
  
  SetSprFile(0x1ce0000);
  bVar1 = 0x3b < (ushort)file_dsp.cnt;
  file_dsp.cnt = file_dsp.cnt + 1;
  if (bVar1) {
    file_dsp.cnt = 0;
  }
  if (get_ctrl.flg == '\x02') {
    iVar2 = PhotGetMain();
  }
  else if (get_ctrl.flg < 3) {
    if (get_ctrl.flg != '\x01') {
      return 0;
    }
    iVar2 = BookGetMain();
  }
  else {
    if (get_ctrl.flg != '\x03') {
      return 0;
    }
    iVar2 = ItemGetMain();
  }
  return (uint)(iVar2 != 0);
}

static int BookGetMain() {
  int iVar1;
  int iVar2;
  
  BookGetPad(get_ctrl.type,get_ctrl.no);
  BookGetDsp(get_ctrl.type,get_ctrl.no,get_ctrl.msg0,get_ctrl.msg1);
  iVar2 = 0;
  if (file_dsp.stp == '\x03') {
    file_dsp.stp = '\0';
    eff_blur_off = 0;
    SendManMdlTex();
    iVar1 = ItemGetContinueJudge();
    iVar2 = 0;
    if (iVar1 == 0) {
      get_ctrl.flg = '\0';
      iVar2 = 1;
    }
  }
  return iVar2;
}

static void BookGetPad(u_char model_type, u_char model_no) {
  uchar uVar1;
  
  uVar1 = file_dsp.stp;
  switch(file_dsp.stp) {
  case '\x04':
    if (((*key_now[6] == 1) || (*key_now[5] == 1)) && (fade_ctr.msg_end != '\0')) {
      file_dsp.stp = '\x05';
      SeStartFix(0xb,0,0x1000,0x1000,0);
      return;
    }
    break;
  case '\x06':
    uVar1 = '\a';
    if (*key_now[6] != 1) {
      if (*key_now[5] != 1) {
        return;
      }
      uVar1 = '\a';
    }
    break;
  case '\a':
    file_dsp.page_all = ChkPageYW(model_type + '\x12',model_no);
    file_dsp.open_page = '\x01';
    file_dsp.stp = '\b';
    uVar1 = file_dsp.stp;
    break;
  case '\b':
    if (*key_now[4] == 1) {
      file_dsp.stp = '\t';
      SeStartFix(3,0,0x1000,0x1000,0);
      return;
    }
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      if (file_dsp.page_all < 2) {
        file_dsp.stp = '\t';
        SeStartFix(1,0,0x1000,0x1000,0);
        return;
      }
      if (file_dsp.page_all <= file_dsp.open_page) {
        file_dsp.stp = '\t';
        SeStartFix(1,0,0x1000,0x1000,0);
        return;
      }
      file_dsp.open_page = file_dsp.open_page + '\x01';
      SeStartFix(4,0,0x1000,0x1000,0);
      return;
    }
    break;
  case '\n':
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      return;
    }
    uVar1 = '\v';
    if (fade_ctr.msg_end == '\0') {
      return;
    }
  }
  file_dsp.stp = uVar1;
  return;
}

static void BookGetDsp(u_char model_type, u_char model_no, u_char msg0_no, u_char msg1_no) {
	u_char fade_type;
	u_char chng_tm;
	u_char name_dsp;
	u_char msg_dsp;
	u_char str_dsp;
	u_char msg_type;
	u_char msg_no;
	
  byte bVar1;
  int iVar2;
  uchar uVar3;
  uchar uVar4;
  uchar fade;
  uchar uVar5;
  uchar msg_dsp;
  uchar msg_type;
  uint uVar6;
  uint uVar7;
  uchar time;
  uchar uVar8;
  uchar fade_00;
  uchar uVar9;
  uchar unaff_s8_lo;
  uchar str_dsp;
  
  uVar7 = (int)(char)model_type & 0xff;
  uVar8 = '\x10';
  time = '\x10';
  uVar4 = '\0';
  uVar9 = '\0';
  fade_00 = '\0';
  uVar5 = '\0';
  uVar3 = '\0';
  str_dsp = '\0';
  uVar6 = uVar7;
  switch(file_dsp.stp) {
  case '\0':
    uVar8 = '\0';
    if (map_file_dat[uVar7][(int)(char)model_no & 0xffU].dsp_pct != 0xff) {
      if (igt_load_id == -1) {
        igt_load_id = LoadItem2D('\x04',map_file_dat[uVar7][(int)(char)model_no & 0xffU].dsp_pct);
      }
      else {
        iVar2 = IsLoadEnd(igt_load_id);
        if (iVar2 != 0) {
          igt_load_id = -1;
          file_dsp.stp = '\x01';
          uVar4 = '\0';
        }
      }
    }
    break;
  case '\x01':
    file_dsp.stp = '\x04';
    uVar4 = '\0';
    break;
  case '\x04':
    if (msg0_no == 0xff) {
      file_dsp.stp = '\x05';
      uVar4 = '\0';
    }
    else {
      uVar5 = '\x02';
      unaff_s8_lo = msg0_no;
    }
    break;
  case '\x05':
    uVar4 = '\x03';
    uVar9 = '\x01';
    if (msg0_no != 0xff) {
      uVar6 = 0xff;
      uVar5 = '\a';
    }
    bVar1 = file_dsp.dsp + 1;
    if (file_dsp.dsp < 0x10) {
LAB_001e5430:
      file_dsp.dsp = bVar1;
      file2d.scl = (float)(uint)file_dsp.dsp * 0.0625;
      file2d.alp = (uchar)(int)((float)((uint)file_dsp.dsp << 7) * 0.0625);
    }
    else {
      file_dsp.stp = '\x06';
      uVar4 = '\x03';
    }
    break;
  case '\x06':
    uVar4 = '\x03';
    uVar5 = '\x03';
    uVar9 = '\x01';
    break;
  case '\a':
    uVar6 = 0xff;
    uVar4 = '\x04';
    uVar5 = '\x03';
    break;
  case '\b':
    uVar6 = 0xff;
    uVar4 = '\x04';
    uVar5 = '\x03';
    uVar3 = '\x01';
    break;
  case '\t':
    uVar4 = '\x03';
    msg_type = 0xff;
    msg_dsp = '\x03';
    if (file_dsp.dsp != '\0') {
LAB_001e542c:
      uVar5 = '\x03';
      uVar6 = 0xff;
      bVar1 = file_dsp.dsp - 1;
      goto LAB_001e5430;
    }
    fade = '\x03';
    uVar6 = 0xff;
    uVar4 = '\x03';
    uVar5 = '\x03';
    if (fade_ctr.str == '\0') {
      file_dsp.stp = '\n';
      goto LAB_001e5498;
    }
    break;
  case '\n':
    uVar4 = '\x03';
    if (msg1_no != 0xff) {
      uVar5 = '\x02';
      unaff_s8_lo = msg1_no;
    }
    break;
  case '\v':
    if (file_dsp.dsp != '\0') goto LAB_001e542c;
    uVar6 = 0xff;
    uVar5 = '\x03';
    if (fade_ctr.msg == '\0') {
      file_dsp.stp = '\x03';
    }
    else {
      uVar4 = '\0';
    }
  }
  str_dsp = uVar3;
  fade_00 = uVar9;
  msg_dsp = uVar5;
  time = uVar8;
  fade = uVar4;
  msg_type = (uchar)uVar6;
LAB_001e5498:
  uVar3 = (uchar)uVar7;
  uVar4 = (uchar)((int)(char)model_no & 0xffU);
  GetFad(uVar3,uVar4,fade,time);
  GetMsg(msg_type,unaff_s8_lo,msg_dsp);
  GetStr(uVar3,uVar4,str_dsp);
  FileName(uVar3,uVar4,fade_00,time);
  return;
}

static int PhotGetMain() {
  int iVar1;
  int iVar2;
  
  PhotGetPad(get_ctrl.type,get_ctrl.no);
  PhotGetDsp(get_ctrl.type,get_ctrl.no,get_ctrl.msg0,get_ctrl.msg1);
  iVar2 = 0;
  if (file_dsp.stp == '\x03') {
    file_dsp.stp = '\0';
    eff_blur_off = 0;
    SendManMdlTex();
    iVar1 = ItemGetContinueJudge();
    iVar2 = 0;
    if (iVar1 == 0) {
      get_ctrl.flg = '\0';
      iVar2 = 1;
    }
  }
  return iVar2;
}

static void PhotGetPad(u_char model_type, u_char model_no) {
  switch(file_dsp.stp) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\r':
  case '\x0f':
  case '\x12':
    break;
  case '\f':
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      return;
    }
    if (fade_ctr.msg_end != '\0') {
      file_dsp.stp = '\r';
      SeStartFix(0xb,0,0x1000,0x1000,0);
      return;
    }
    return;
  case '\x0e':
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      file_dsp.stp = '\x0f';
    }
    return;
  case '\x10':
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      file2d.scl = 1.0;
      file_dsp.stp = '\x11';
      return;
    }
    break;
  case '\x11':
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      return;
    }
    if (fade_ctr.msg_end == '\0') {
      return;
    }
    file_dsp.stp = '\x12';
    break;
  default:
    return;
  }
  return;
}

static void PhotGetDsp(u_char model_type, u_char model_no, u_char msg0_no, u_char msg1_no) {
	u_char fade_type;
	u_char chng_tm;
	u_char name_dsp;
	u_char msg_dsp;
	u_char msg_type;
	u_char msg_no;
	u_char file_pct;
	
  byte bVar1;
  int iVar2;
  uchar fade;
  int in_t0_lo;
  uchar uVar3;
  uchar msg_dsp;
  uchar uVar4;
  uchar uVar5;
  uchar fade_00;
  uchar uVar6;
  uchar time;
  uchar unaff_s7_lo;
  
  time = '\x10';
  uVar6 = '\x10';
  fade = '\0';
  fade_00 = '\0';
  uVar5 = '\0';
  msg_dsp = '\0';
  uVar3 = '\0';
  uVar4 = model_type;
  switch(file_dsp.stp) {
  case '\0':
    time = '\0';
    if (in_t0_lo != 0xff) {
      if (igt_load_id == -1) {
        igt_load_id = LoadItem2D('\x04',(uchar)in_t0_lo);
      }
      else {
        iVar2 = IsLoadEnd(igt_load_id);
        if (iVar2 != 0) {
          igt_load_id = -1;
          file_dsp.stp = '\x01';
          fade = '\0';
          time = '\0';
          msg_dsp = uVar3;
          fade_00 = uVar5;
        }
      }
    }
    break;
  case '\x01':
    file_dsp.stp = '\f';
    fade = '\0';
    time = uVar6;
    msg_dsp = uVar3;
    fade_00 = uVar5;
    break;
  case '\f':
    if (msg0_no == 0xff) {
      file_dsp.stp = '\r';
      fade = '\0';
      time = uVar6;
      msg_dsp = uVar3;
      fade_00 = uVar5;
    }
    else {
      msg_dsp = '\x02';
      unaff_s7_lo = msg0_no;
    }
    break;
  case '\r':
    fade = '\x03';
    fade_00 = '\x01';
    if (msg0_no != 0xff) {
      uVar4 = 0xff;
      msg_dsp = '\a';
    }
    bVar1 = file_dsp.dsp + 1;
    if (0xf < file_dsp.dsp) {
      file_dsp.stp = '\x0e';
      fade = '\x03';
      time = uVar6;
      fade_00 = '\x01';
      break;
    }
    goto LAB_001e5874;
  case '\x0e':
    fade = '\x03';
    fade_00 = '\x01';
    msg_dsp = '\x03';
    break;
  case '\x0f':
    fade = '\x03';
    file2d.scl = 1.5;
    file_dsp.stp = '\x10';
    msg_dsp = '\x03';
    uVar4 = 0xff;
    break;
  case '\x10':
    fade = '\x01';
    msg_dsp = '\x03';
    uVar4 = 0xff;
    break;
  case '\x11':
    fade = '\x03';
    if (msg1_no != 0xff) {
      msg_dsp = '\x02';
      unaff_s7_lo = msg1_no;
    }
    bVar1 = file_dsp.dsp - 1;
    if (file_dsp.dsp == '\0') break;
    goto LAB_001e5874;
  case '\x12':
    msg_dsp = '\x03';
    uVar4 = 0xff;
    if (file_dsp.dsp == '\0') {
      if (fade_ctr.msg == '\0') {
        file_dsp.stp = '\x03';
        uVar4 = 0xff;
      }
      else {
        fade = '\0';
        time = uVar6;
        msg_dsp = '\x03';
        fade_00 = uVar5;
      }
      break;
    }
    bVar1 = file_dsp.dsp - 1;
LAB_001e5874:
    file_dsp.dsp = bVar1;
    file2d.scl = (float)(uint)file_dsp.dsp * 0.0625;
    file2d.alp = (uchar)(int)((float)((uint)file_dsp.dsp << 7) * 0.0625);
  }
  GetFad(model_type,model_no,fade,time);
  GetMsg(uVar4,unaff_s7_lo,msg_dsp);
  FileName(model_type,model_no,fade_00,time);
  return;
}

static int ItemGetMain() {
  int iVar1;
  int iVar2;
  
  ItemGetPad(get_ctrl.type,get_ctrl.no);
  ItemGetDsp(get_ctrl.type,get_ctrl.no,get_ctrl.msg0,get_ctrl.msg1);
  iVar1 = 0;
  if (file_dsp.stp == '\x03') {
    file_dsp.stp = '\0';
    eff_blur_off = 0;
    SendManMdlTex();
    iVar1 = 1;
    if (file_dsp.stts == '\0') {
      iVar2 = ItemGetContinueJudge();
      iVar1 = 0;
      if (iVar2 == 0) {
        get_ctrl.flg = '\0';
        iVar1 = 1;
      }
    }
    else {
      file_dsp.stts = '\0';
      get_ctrl.flg = '\0';
    }
  }
  return iVar1;
}

static void ItemGetPad(u_char model_type, u_char model_no) {
  switch(file_dsp.stp) {
  case '\0':
  case '\x01':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x14':
  case '\x17':
    return;
  case '\x02':
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      file_dsp.stts = '\x01';
      file_dsp.stp = '\x17';
      return;
    }
    break;
  case '\x13':
    if (((*key_now[6] == 1) || (*key_now[5] == 1)) && (fade_ctr.msg_end != '\0')) {
      file_dsp.stp = '\x14';
    }
    break;
  case '\x15':
    if (model_no == '\b') {
      if (get_ctrl.itm_num == '\0') {
        file_dsp.stp = '\x16';
        SeStartFix(0xb,0,0x1000,0x1000,0);
        return;
      }
    }
    else if (get_ctrl.itm_num < 99) {
      file_dsp.stp = '\x16';
      SeStartFix(0xb,0,0x1000,0x1000,0);
      return;
    }
    file_dsp.stp = '\x02';
    return;
  case '\x16':
    if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
      return;
    }
    if (fade_ctr.msg_end == '\0') {
      return;
    }
    file_dsp.stp = '\x17';
    return;
  }
  return;
}

static void ItemGetDsp(u_char model_type, u_char model_no, u_char msg0_no, u_char msg1_no) {
	u_char fade_type;
	u_char chng_tm;
	u_char msg_dsp;
	u_char msg_type;
	u_char msg_no;
	
  byte bVar1;
  int iVar2;
  uchar fade;
  uchar uVar3;
  uchar msg_dsp;
  uchar msg_type;
  uchar unaff_s4_lo;
  uchar uVar4;
  uchar time;
  
  time = '\x10';
  uVar4 = '\x10';
  fade = '\0';
  msg_dsp = '\0';
  uVar3 = '\0';
  msg_type = model_type;
  switch(file_dsp.stp) {
  case '\0':
    time = '\0';
    if (igt_load_id == -1) {
      igt_load_id = LoadItem2D(model_type,model_no);
    }
    else {
      iVar2 = IsLoadEnd(igt_load_id);
      if (iVar2 != 0) {
        igt_load_id = -1;
        file_dsp.stp = '\x01';
        fade = '\0';
        time = '\0';
        msg_dsp = uVar3;
      }
    }
    break;
  case '\x01':
    file_dsp.stp = '\x13';
    fade = '\0';
    time = uVar4;
    msg_dsp = uVar3;
    break;
  case '\x02':
    fade = '\x03';
    unaff_s4_lo = '\0';
    msg_dsp = '\x06';
    break;
  case '\x13':
    if (msg0_no == 0xff) {
      file_dsp.stp = '\x14';
      fade = '\0';
      time = uVar4;
      msg_dsp = uVar3;
    }
    else {
      msg_dsp = '\x02';
      unaff_s4_lo = msg0_no;
    }
    break;
  case '\x14':
    fade = '\x03';
    if (msg0_no != 0xff) {
      msg_type = 0xff;
      msg_dsp = '\a';
    }
    bVar1 = file_dsp.dsp + 1;
    if (0xf < file_dsp.dsp) {
      file_dsp.stp = '\x15';
      fade = '\x03';
      time = uVar4;
      break;
    }
    goto LAB_001e5c84;
  case '\x15':
    fade = '\x01';
    msg_dsp = '\x04';
    break;
  case '\x16':
    fade = '\x03';
    if (msg1_no != 0xff) {
      msg_dsp = '\x06';
      unaff_s4_lo = msg1_no;
    }
    break;
  case '\x17':
    msg_type = 0xff;
    msg_dsp = '\x03';
    if (file_dsp.dsp == '\0') {
      if (fade_ctr.msg == '\0') {
        file_dsp.stp = '\x03';
        msg_type = 0xff;
      }
      else {
        fade = '\0';
        time = uVar4;
        msg_dsp = '\x03';
      }
      break;
    }
    bVar1 = file_dsp.dsp - 1;
LAB_001e5c84:
    file_dsp.dsp = bVar1;
    file2d.scl = (float)(uint)file_dsp.dsp * 0.0625;
    file2d.alp = (uchar)(int)((float)((uint)file_dsp.dsp << 7) * 0.0625);
  }
  GetFad(model_type,model_no,fade,time);
  GetMsg(msg_type,unaff_s4_lo,msg_dsp);
  FileName(model_type,model_no,'\x01',time);
  return;
}

static void GetStr(u_char model_type, u_char model_no, u_char str_dsp) {
	float str_add;
	
  float fVar1;
  
  if (str_dsp == '\0') {
    fVar1 = (float)(uint)fade_ctr.str - 8.0;
    if (fVar1 <= 0.0) {
      fade_ctr.str = '\0';
      goto LAB_001e5de4;
    }
  }
  else {
    fVar1 = (float)(uint)fade_ctr.str + 8.0;
    if (128.0 <= fVar1) {
      fade_ctr.str = 0x80;
      goto LAB_001e5de4;
    }
  }
  fade_ctr.str = (uchar)(int)fVar1;
LAB_001e5de4:
  if (fade_ctr.str == '\0') {
    return;
  }
  CmnWindow(9,0xffbc,0,fade_ctr.str,0x80);
  NextPageNavi(file_dsp.open_page,file_dsp.page_all,0x21b,(ushort)fade_ctr.str,0,'\0');
  PutStringYW(model_type + 10,model_no,0x13d,0x23,0x808080,fade_ctr.str,0x19000,1);
  PutPage2YW(model_type + '\x12',model_no,file_dsp.open_page,0x5a,0x6e,0x808080,fade_ctr.str,0x19000
            );
  PageInfo(file_dsp.open_page,file_dsp.page_all,0,0xfff3,fade_ctr.str);
  DispCaption(0x15,fade_ctr.str);
  return;
}

static void GetFad(u_char model_type, u_char model_no, u_char fade, u_char time) {
	u_char scn_obj;
	u_char chr_obj;
	u_char ply_obj;
	u_char chr_now;
	u_char ply_now;
	int chr;
	float per;
	
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  byte bVar4;
  uint uVar5;
  uchar uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  uVar5 = (int)(char)time & 0xff;
  switch(fade) {
  case '\0':
    uVar6 = 0x80;
    goto LAB_001e5f60;
  case '\x01':
    uVar6 = '@';
    uVar7 = 0x80;
    break;
  case '\x02':
    uVar6 = 0x80;
    uVar7 = 0x40;
    break;
  case '\x03':
    uVar6 = '@';
    uVar7 = 0x40;
    break;
  case '\x04':
    uVar6 = '@';
    uVar7 = 0x40;
    uVar8 = 0x40;
    goto LAB_001e5f68;
  default:
    uVar6 = '\0';
LAB_001e5f60:
    uVar7 = 0;
  }
  uVar8 = 0;
LAB_001e5f68:
  uVar1 = (uchar)uVar7;
  uVar2 = (uchar)uVar8;
  if (uVar5 == 0) {
    fade_ctr.tim = '\0';
    uVar3 = fade;
  }
  else {
    bVar4 = fade_ctr.tim - 1;
    uVar3 = fade_ctr.bak;
    if (fade_ctr.tim == '\0') {
      uVar7 = (uint)fade_ctr.chr;
      uVar8 = (uint)fade_ctr.ply;
      uVar6 = fade_ctr.scn;
      uVar1 = fade_ctr.chr;
      uVar2 = fade_ctr.ply;
      if (fade_ctr.bak != fade) {
        fade_ctr.tim = (uchar)uVar5;
      }
    }
    else {
      fVar9 = 1.0 - (float)(uint)bVar4 / (float)uVar5;
      fade_ctr.tim = bVar4;
      uVar3 = fade;
      if (bVar4 != 0) {
        uVar8 = (int)((float)(uVar8 - fade_ctr.ply) * fVar9 + (float)(uint)fade_ctr.ply) & 0xff;
        uVar7 = (int)((float)(uVar7 - fade_ctr.chr) * fVar9 + (float)(uint)fade_ctr.chr) & 0xff;
        uVar6 = fade_ctr.scn;
        uVar1 = fade_ctr.chr;
        uVar2 = fade_ctr.ply;
        uVar3 = fade_ctr.bak;
      }
    }
  }
  fade_ctr.bak = uVar3;
  fade_ctr.ply = uVar2;
  fade_ctr.chr = uVar1;
  fade_ctr.scn = uVar6;
  if (1 < file_dsp.stp) {
    SetPanel2(0x1000,0.0,0.0,640.0,448.0,1,'\0','\0','\0',(uchar)uVar7);
    if (model_type == '\x04') {
      file2d.tex_addr = VramItem2D('\0','\0');
      DspItem2D(file2d.tex_addr,-160.0,-40.0,uVar7 * 0x10101,(float)(uint)file2d.alp,1.0,1.0,'2');
    }
    else {
      file2d.tex_addr = VramItem2D('\0','\0');
      DspItem2D(file2d.tex_addr,-160.0,0.0,uVar7 * 0x10101,(float)(uint)file2d.alp,1.5,1.5,'2');
    }
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,(float)uVar8,1.0,1.0,0x2d000,0,0,0);
    return;
  }
  return;
}

static void FileName(u_char model_type, u_char model_no, u_char fade, u_char time) {
	u_char msg_knd;
	char book_adj;
	
  int iVar1;
  short in_t0_lo;
  byte in_t1_lo;
  
  if (fade == '\0') {
    iVar1 = (uint)fade_ctr.nam - ((int)(100.0 / (float)((int)(char)time & 0xff)) & 0xffU);
    if (iVar1 < 1) {
      fade_ctr.nam = '\0';
    }
    else {
      fade_ctr.nam = (uchar)iVar1;
    }
  }
  else {
    fade_ctr.nam = 'd';
  }
  if (1 < file_dsp.stp) {
    if (model_type < 3) {
      in_t0_lo = 100;
      in_t1_lo = model_type + 10;
    }
    else if (model_type == '\x03') {
      in_t0_lo = 0;
      in_t1_lo = 0xd;
    }
    else if (model_type == '\x04') {
      in_t0_lo = 0;
      in_t1_lo = 0x18;
    }
    PutStringYW(in_t1_lo,model_no,0x140,0x104 - in_t0_lo,0x808080,
                (byte)(int)((float)((uint)file2d.alp * (uint)fade_ctr.nam) / 100.0),0x19000,1);
    return;
  }
  return;
}

static void GetMsg(u_char msg_type, u_char msg_no, u_char msg_dsp) {
	float msg_add;
	float btn_alp;
	
  float fVar1;
  
  switch(msg_dsp) {
  case '\0':
  case '\x04':
    fade_ctr.msg = '\0';
    goto switchD_001e6340_caseD_8;
  case '\x01':
  case '\x05':
    fade_ctr.msg = 0x80;
    goto switchD_001e6340_caseD_8;
  case '\x02':
  case '\x06':
    fVar1 = (float)(uint)fade_ctr.msg + 8.0;
    if (128.0 <= fVar1) {
      fade_ctr.msg = 0x80;
      goto switchD_001e6340_caseD_8;
    }
    break;
  case '\x03':
    fVar1 = (float)(uint)fade_ctr.msg - 8.0;
    if (fVar1 <= 0.0) {
      fade_ctr.msg = '\0';
      goto switchD_001e6340_caseD_8;
    }
    break;
  case '\a':
    fVar1 = (float)(uint)fade_ctr.msg - 8.0;
    if (fVar1 <= 0.0) {
      fade_ctr.msg = '\0';
      goto switchD_001e6340_caseD_8;
    }
    break;
  default:
    goto switchD_001e6340_caseD_8;
  }
  fade_ctr.msg = (uchar)(int)fVar1;
switchD_001e6340_caseD_8:
  if (msg_dsp < 4) {
    if (fade_ctr.msg != '\0') {
      DrawMessageBox(0x19000,56.0,304.0,528.0,106.0,fade_ctr.msg);
    }
  }
  else {
    DrawMessageBox(0x19000,56.0,304.0,528.0,106.0,0x80);
  }
  if (msg_type == 0xff) {
    msg_type = fade_ctr.msg_type_bak;
    msg_no = fade_ctr.msg_no_bak;
  }
  if (msg_no != 0xff) {
    if (msg_no == '\x01') {
      PutStringYW(msg_type,1,0x50,0x140,0x808080,fade_ctr.msg,0xf000,0);
      PutStringYW(6,0x11,0x30,0x15a,0x808080,fade_ctr.msg,0xf000,0);
      YesNoCrslOKR(0x14000,(float)((uint)file_dsp.csr[0] * 0x84 + 0xb8),344.0,0x808080,
                   (float)(uint)fade_ctr.msg,2.0);
    }
    else {
      fade_ctr.msg_end = PutMessageYW(msg_type,msg_no,0x50,0x140,0x808080,fade_ctr.msg,0x19000);
      fVar1 = SgSinf(((float)(uint)(ushort)file_dsp.cnt * DAT_00355f24) / 60.0);
      DrawButtonTex(0x14000,3,536.0,368.0,
                    (uchar)(int)((fVar1 * (float)(uint)fade_ctr.msg + (float)(uint)fade_ctr.msg) *
                                0.5));
    }
  }
  fade_ctr.msg_type_bak = msg_type;
  fade_ctr.msg_no_bak = msg_no;
  return;
}

void NextPageNavi(u_char hav_now, u_char dsp_max, u_short chr_top, short int ofs_x, short int ofs_y, u_char alpha) {
	int rgb_l;
	int rgb_r;
	
  int rgb_r;
  
  if (dsp_max < 2) {
    FlashStarYW(&flsh,'@',0xc0,'<',0xff);
    CLRtoRGB(&rgb_r,flsh.alpha,flsh.alpha,flsh.alpha);
  }
  else {
    FlashStarYW(&flsh,'@',0xc0,'<','\0');
    CLRtoRGB(&rgb_r,flsh.alpha,flsh.alpha,flsh.alpha);
    if (1 < hav_now) {
      PutSpriteYW(chr_top,chr_top,(float)(int)(short)ofs_x,(float)(int)(short)ofs_y,0.0,rgb_r,
                  (float)((int)(char)alpha & 0xffU),1.0,1.0,0,0xff,1,0,0);
    }
    if (hav_now < dsp_max) {
      PutSpriteYW(chr_top + 1,chr_top + 1,(float)(int)(short)ofs_x,(float)(int)(short)ofs_y,0.0,
                  rgb_r,(float)((int)(char)alpha & 0xffU),1.0,1.0,0,0xff,1,0,0);
    }
  }
  return;
}

int CheckTape(int item_no) {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_tape_dat == -1) {
    return -1;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (item_no == *(int *)(&tape_dat + iVar1)) {
      return *(int *)((int)&DAT_0033d954 + iVar1);
    }
    iVar1 = iVar2 * 8;
  } while (*(int *)(&tape_dat + iVar1) != -1);
  return -1;
}

void PlayTape(int adpcm_no) {
  AdpcmPlayTape(adpcm_no,0x3fff,5);
  tape_play = '\x01';
  play_tape_timer = 0xb4;
  return;
}

void StopTape(int item_no) {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_tape_dat != -1) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      if (item_no == *(int *)(&tape_dat + iVar1)) {
        AdpcmStopTape(5);
        return;
      }
      iVar1 = iVar2 * 8;
    } while (*(int *)(&tape_dat + iVar1) != -1);
  }
  return;
}
