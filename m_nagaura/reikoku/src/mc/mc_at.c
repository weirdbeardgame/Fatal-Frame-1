// STATUS: NOT STARTED

typedef struct {
	u_char alp;
} DSP_MC;

static DSP_MC dsp_mc;

char McAtLoadChk(u_char type) {
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = mcLoadMain();
  cVar2 = McAtLoadMainLoop(type);
  cVar3 = '\0';
  if (cVar2 == '\x02') {
    cVar3 = cVar1;
  }
  return cVar3;
}

char McAtSaveChk() {
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = mcSaveMain();
  cVar2 = McAtSaveMainLoop();
  cVar3 = '\0';
  if (cVar2 == '\x02') {
    cVar3 = cVar1;
  }
  return cVar3;
}

char McAtAlbmChk() {
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = mcAlbumSaveMain();
  cVar2 = McAtAlbmMainLoop();
  cVar3 = '\0';
  if (cVar2 == '\x02') {
    cVar3 = cVar1;
  }
  return cVar3;
}

static char McAtLoadMainLoop(u_char type) {
	char rtrn;
	u_char csr0;
	u_char yes_no;
	static u_char csr1;
	static u_char csr2;
	u_char msg;
	u_char alt;
	static u_char fdt;
	
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  uchar alt;
  char cVar5;
  uchar csr0;
  uchar msg;
  int yes_no;
  uchar uVar6;
  
  csr0 = 0xff;
  switch(mc_ctrl.stepbak) {
  case 0:
    dsp_mc.alp = '\0';
    csr1_126 = 0xff;
    fdt_128 = 0xff;
    csr2_127 = 0xff;
    break;
  default:
    fdt_128 = 0xff;
    break;
  case 2:
  case 0x18:
    fdt_128 = 0xff;
    csr0 = (uchar)mc_ctrl.now_cur;
    break;
  case 4:
    csr2_127 = 0xff;
    csr1_126 = (uchar)mc_ctrl.port;
    fdt_128 = 0xff;
    break;
  case 6:
    fdt_128 = '\x01';
    csr2_127 = (uchar)mc_ctrl.sel_cur;
    break;
  case 7:
    csr0 = (uchar)mc_ctrl.now_cur;
    break;
  case 0xe:
  case 0x16:
  case 0x19:
    break;
  }
  cVar5 = '\0';
  if (mc_ctrl.step - 0x19U < 2) {
    if ((int)(dsp_mc.alp - 8) < 1) {
      dsp_mc.alp = '\0';
      cVar5 = '\x02';
    }
    else {
      dsp_mc.alp = (uchar)(dsp_mc.alp - 8);
    }
  }
  else if (dsp_mc.alp + 8 < 0x80) {
    dsp_mc.alp = (uchar)(dsp_mc.alp + 8);
  }
  else {
    cVar5 = '\x01';
    dsp_mc.alp = 0x80;
  }
  uVar6 = 0xff;
  msg = 0xff;
  alt = 0xff;
  yes_no = 0xff;
  uVar1 = uVar6;
  uVar2 = 0xff;
  if (mc_ctrl.msg_no != 0x29) {
    cVar3 = mcCheckMsgType(mc_ctrl.msg_no);
    uVar1 = (uchar)mc_ctrl.msg_no;
    if (cVar3 != '\x01') {
      uVar2 = uVar1;
      if (cVar3 < '\x02') {
        uVar4 = (uint)dsp_mc.alp;
        uVar1 = uVar6;
        if (cVar3 != '\0') goto LAB_0021bd20;
      }
      else {
        uVar4 = (uint)dsp_mc.alp;
        if (cVar3 != '\x02') goto LAB_0021bd20;
        yes_no = 1;
        uVar1 = uVar6;
      }
    }
  }
  alt = uVar2;
  msg = uVar1;
  uVar4 = (uint)dsp_mc.alp;
LAB_0021bd20:
  BgFusumaYW(0x606060,0.0,(float)uVar4,0x7d000);
  DspMemSavePoint(0xff,msg,fdt_128,'\x01',alt,csr0,csr1_126,csr2_127,yes_no,(uint)dsp_mc.alp,
                  (int)(char)type & 0xff);
  return cVar5;
}

static char McAtSaveMainLoop() {
	char rtrn;
	u_char csr0;
	u_char yes_no;
	static u_char csr1;
	static u_char csr2;
	u_char msg;
	u_char alt;
	static u_char fdt;
	
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  uchar alt;
  char cVar5;
  uchar csr0;
  uchar msg;
  int yes_no;
  uchar uVar6;
  
  csr0 = 0xff;
  switch(mc_ctrl.stepbak) {
  case 0:
    dsp_mc.alp = '\0';
    csr1_132 = 0xff;
    fdt_134 = 0xff;
    csr2_133 = 0xff;
    break;
  default:
    fdt_134 = 0xff;
    break;
  case 4:
    csr2_133 = 0xff;
    csr1_132 = (uchar)mc_ctrl.port;
    fdt_134 = 0xff;
    break;
  case 6:
    fdt_134 = '\x01';
    csr2_133 = (uchar)mc_ctrl.sel_cur;
    break;
  case 8:
    csr0 = (uchar)mc_ctrl.now_cur;
    break;
  case 9:
  case 10:
  case 0xb:
    fdt_134 = 0xff;
    csr0 = (uchar)mc_ctrl.now_cur;
    break;
  case 0xf:
    break;
  case 0x17:
    fdt_134 = '\x01';
  }
  cVar5 = '\0';
  if (mc_ctrl.step - 0x19U < 2) {
    if ((int)(dsp_mc.alp - 8) < 1) {
      dsp_mc.alp = '\0';
      cVar5 = '\x02';
    }
    else {
      dsp_mc.alp = (uchar)(dsp_mc.alp - 8);
    }
  }
  else if (dsp_mc.alp + 8 < 0x80) {
    dsp_mc.alp = (uchar)(dsp_mc.alp + 8);
  }
  else {
    cVar5 = '\x01';
    dsp_mc.alp = 0x80;
  }
  uVar6 = 0xff;
  msg = 0xff;
  alt = 0xff;
  yes_no = 0xff;
  uVar1 = uVar6;
  uVar2 = 0xff;
  if (mc_ctrl.msg_no != 0x29) {
    cVar3 = mcCheckMsgType(mc_ctrl.msg_no);
    uVar1 = (uchar)mc_ctrl.msg_no;
    if (cVar3 != '\x01') {
      uVar2 = uVar1;
      if (cVar3 < '\x02') {
        uVar4 = (uint)dsp_mc.alp;
        uVar1 = uVar6;
        if (cVar3 != '\0') goto LAB_0021bf40;
      }
      else {
        uVar4 = (uint)dsp_mc.alp;
        if (cVar3 != '\x02') goto LAB_0021bf40;
        yes_no = 1;
        uVar1 = uVar6;
      }
    }
  }
  alt = uVar2;
  msg = uVar1;
  uVar4 = (uint)dsp_mc.alp;
LAB_0021bf40:
  BgFusumaYW(0x606060,0.0,(float)uVar4,0x7d000);
  DspMemSavePoint(0xff,msg,fdt_134,'\x01',alt,csr0,csr1_132,csr2_133,yes_no,(uint)dsp_mc.alp,0);
  return cVar5;
}

static char McAtAlbmMainLoop() {
	char rtrn;
	u_char csr0;
	u_char yes_no;
	static u_char csr1;
	static u_char csr2;
	static u_char csr3;
	u_char msg;
	u_char alt;
	static u_char fdt;
	
  uchar uVar1;
  char cVar2;
  uchar alt;
  byte csr0;
  char cVar3;
  uchar uVar4;
  uchar msg;
  int yes_no;
  
  csr0 = 0xff;
  switch(mc_ctrl.stepbak) {
  case 0:
    csr2_139 = 0xff;
    csr1_138 = (uchar)mc_ctrl.port;
    fdt_141 = 0xff;
    csr3_140 = 0xff;
    dsp_mc.alp = '\0';
    break;
  default:
    fdt_141 = 0xff;
    break;
  case 4:
    csr2_139 = 0xff;
    csr1_138 = (uchar)mc_ctrl.port;
    fdt_141 = 0xff;
    break;
  case 6:
    fdt_141 = '\x01';
    csr2_139 = (byte)mc_ctrl.now_cur;
    csr3_140 = 0xff;
    break;
  case 8:
  case 10:
  case 0xd:
    csr0 = (byte)mc_ctrl.now_cur;
    break;
  case 9:
    fdt_141 = 0xff;
    csr0 = (byte)mc_ctrl.now_cur;
    break;
  case 0xb:
    fdt_141 = 0xff;
    csr0 = (byte)mc_ctrl.now_cur;
    break;
  case 0xc:
    csr3_140 = (byte)mc_ctrl.now_cur;
    break;
  case 0xf:
    break;
  case 0x10:
    fdt_141 = '\x01';
    csr0 = (byte)mc_ctrl.now_cur;
    break;
  case 0x17:
    fdt_141 = '\x01';
  }
  cVar3 = '\0';
  if (mc_ctrl.step - 0x19U < 2) {
    if ((int)(dsp_mc.alp - 8) < 1) {
      mc_album_type = (uint)csr3_140;
      dsp_mc.alp = '\0';
      if (mc_album_type == 0xff) {
        mc_album_type =
             *(uint *)((int)mc_header_buf + (uint)mc_ctrl.album.file_no[csr2_139] * 0x20 + 8);
      }
      cVar3 = '\x02';
    }
    else {
      dsp_mc.alp = (uchar)(dsp_mc.alp - 8);
    }
  }
  else if (dsp_mc.alp + 8 < 0x80) {
    dsp_mc.alp = (uchar)(dsp_mc.alp + 8);
  }
  else {
    cVar3 = '\x01';
    dsp_mc.alp = 0x80;
  }
  uVar4 = 0xff;
  alt = 0xff;
  yes_no = 0xff;
  msg = uVar4;
  if (mc_ctrl.msg_no != 0x29) {
    cVar2 = mcCheckMsgType(mc_ctrl.msg_no);
    uVar1 = (uchar)mc_ctrl.msg_no;
    msg = uVar1;
    if (cVar2 != '\x01') {
      if (cVar2 < '\x02') {
        msg = uVar4;
        if (cVar2 == '\0') {
          alt = uVar1;
        }
      }
      else {
        msg = uVar4;
        if (cVar2 == '\x02') {
          yes_no = 1;
          alt = uVar1;
        }
      }
    }
  }
  SetSprFile(0x1ce0000);
  BgFusumaYW(0x606060,0.0,128.0,0x7d000);
  DspMemSavePoint(0xff,msg,fdt_141,'\x01',alt,csr0,csr1_138,csr2_139,yes_no,(uint)dsp_mc.alp,2);
  AlbmSlct(csr3_140,(uchar)mc_ctrl.stepbak,dsp_mc.alp,'\0');
  return cVar3;
}
