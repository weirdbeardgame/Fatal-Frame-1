// STATUS: NOT STARTED

struct EFF_BLUR {
	u_int flow;
	u_int cnt;
	u_int in;
	u_int keep;
	u_int out;
	u_int alp;
	float scl;
	float rot;
	float cx;
	float cy;
};

struct EFF_FOCUS {
	u_int flow;
	u_int cnt;
	u_int in;
	u_int keep;
	u_int out;
	u_int max;
};

struct EFF_DEFORM {
	u_char type;
	u_char otype;
	u_char init;
	u_char pass;
};

// warning: multiple differing types with the same name (#50,  not equal)
enum {
	EX1_SEC1_INIT1 = 0,
	EX1_SEC1_FADEIN1 = 1,
	EX1_SEC1_FADEOUT1 = 2,
	EX1_SEC1_KEEP = 3,
	EX1_SEC1_INIT2 = 4,
	EX1_SEC1_FADEIN2 = 5,
	EX1_SEC1_FADEOUT2 = 6,
	EX1_SEC1_FINISH = 7,
	EX1_SEC2_INIT = 8,
	EX1_SEC2_CHANGE = 9,
	EX1_SEC2_WAIT = 10,
	EX1_SEC2_FINISH = 11
};

// warning: multiple differing types with the same name (#50,  not equal)
enum {
	EX2_SEC1_INIT1 = 0,
	EX2_SEC1_CHANGE1 = 1,
	EX2_SEC1_KEEP = 2,
	EX2_SEC1_INIT2 = 3,
	EX2_SEC1_CHANGE2 = 4,
	EX2_SEC1_CHANGE3 = 5,
	EX2_SEC1_FINISH = 6
};

typedef struct {
	float rrr;
	float lll;
	float mm1;
	float mm2;
	float sss;
	float ccc;
} DEFWORK;

typedef struct {
	sceVu0FVECTOR stq;
	sceVu0FVECTOR vtw;
} SCRDEF;

// warning: multiple differing types with the same name (#50,  not equal)
enum {
	EX0_SEC1_INIT1 = 0,
	EX0_SEC1_CHANGE1 = 1,
	EX0_SEC1_KEEP1 = 2,
	EX0_SEC1_INIT2 = 3,
	EX0_SEC1_CHANGE2 = 4,
	EX0_SEC1_KEEP2 = 5,
	EX0_SEC1_INIT3 = 6,
	EX0_SEC1_CHANGE3 = 7,
	EX0_SEC1_KEEP3 = 8,
	EX0_SEC1_INIT4 = 9,
	EX0_SEC1_CHANGE4 = 10,
	EX0_SEC1_KEEP4 = 11,
	EX0_SEC1_FINISH = 12
};

// warning: multiple differing types with the same name (#50,  not equal)
enum {
	GAMEOVER_INIT = 0,
	GAMEOVER_WHITE_OUT = 1,
	GAMEOVER_LOAD_WAIT = 2,
	GAMEOVER_WHITE_IN = 3,
	GAMEOVER_BG_IN = 4,
	GAMEOVER_IN = 5,
	GAMEOVER_WAIT = 6,
	GAMEOVER_OUT = 7,
	GAMEOVER_BLACK_OUT = 8,
	GAMEOVER_FINISH = 9
};

EFF_BLUR eff_blur = {
	/* .flow = */ 3,
	/* .cnt = */ 0,
	/* .in = */ 0,
	/* .keep = */ 0,
	/* .out = */ 0,
	/* .alp = */ 0,
	/* .scl = */ 1.f,
	/* .rot = */ 180.f,
	/* .cx = */ 320.f,
	/* .cy = */ 224.f
};
EFF_FOCUS eff_focus = {
	/* .flow = */ 3,
	/* .cnt = */ 0,
	/* .in = */ 0,
	/* .keep = */ 0,
	/* .out = */ 0,
	/* .max = */ 0
};
EFF_DEFORM eff_deform = {
	/* .type = */ 0,
	/* .otype = */ 0,
	/* .init = */ 0,
	/* .pass = */ 0
};
short int overlap_passflg[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};
float blur_x_offset = 0.f;
float blur_y_offset = 0.f;
int gameover_flow = 9;
int ef_exfade1_flow1 = 0;
int ef_exfade1_flow2 = 0;
int ef_exfade1_time1 = 0;
int ef_exfade2_flow1 = 0;
int ef_exfade2_time1 = 0;
int ef_exfade2_time2 = 0;
int ef_exfade2_time3 = 0;
static HAND_WRK hand_wrk;
static DEFWORK dw[25][33];
static int now_loading_flow;

void InitEffectScr() {
  MakeRDither3();
  SetParam(0,0,'\0','\0','\0',0);
  eff_focus.flow = 3;
  eff_blur.flow = 3;
  eff_focus.max = 0;
  eff_blur.cy = 224.0;
  eff_blur.scl = 1.0;
  eff_blur.rot = 180.0;
  eff_blur.cx = 320.0;
  eff_deform.init = 1;
  ef_exfade1_flow1 = 7;
  ef_exfade1_flow2 = 0xb;
  ef_exfade2_flow1 = 6;
  ef_exfade2_time3 = 1;
  eff_blur.cnt = 0;
  eff_blur.in = 0;
  eff_blur.keep = 0;
  eff_blur.out = 0;
  eff_blur.alp = 0;
  eff_focus.cnt = 0;
  eff_focus.in = 0;
  eff_focus.keep = 0;
  eff_focus.out = 0;
  eff_deform.type = 0;
  eff_deform.otype = 0;
  eff_deform.pass = 0;
  ef_exfade1_time1 = 1;
  ef_exfade2_time1 = 1;
  ef_exfade2_time2 = 1;
  InitScreenSaver();
  return;
}

void InitEffectScrEF() {
  overlap_passflg[1] = overlap_passflg[0];
  overlap_passflg[0] = 0;
  if (eff_deform.pass == 0) {
    eff_deform.init = 1;
  }
  eff_deform.pass = 0;
  eff_deform.otype = eff_deform.type;
  return;
}

void SetWhiteOut() {
  SetParam(0,0x20,0xff,0xff,0xff,2);
  return;
}

void SetWhiteIn() {
  SetParam(0x80,0x20,0xff,0xff,0xff,1);
  return;
}

void SetBlackOut() {
  SetParam(0,0x20,'\0','\0','\0',2);
  return;
}

void SetBlackIn() {
  SetParam(0x80,0x20,'\0','\0','\0',1);
  return;
}

void SetWhiteOut2(int time) {
  SetParam(0,time,0xff,0xff,0xff,2);
  return;
}

void SetWhiteIn2(int time) {
  SetParam(0x80,time,0xff,0xff,0xff,1);
  return;
}

void SetBlackOut2(int time) {
  SetParam(0,time,'\0','\0','\0',2);
  return;
}

void SetBlackIn2(int time) {
  SetParam(0x80,time,'\0','\0','\0',1);
  return;
}

void SetFlash() {
  SetParam(0x80,0x12,0xff,0xff,0xff,1);
  return;
}

void SetBlackFilter(EFFECT_CONT *ec) {
  SetPanel(0x500,0.0,0.0,640.0,448.0,'\0','\0','\0',(ec->dat).uc8[2]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SubBlur(int type, u_char alpha, float scale, float rot, float cx, float cy) {
	SPRITE_DATA sd;
	DRAW_ENV de;
	float hw;
	float hh;
	float fx;
	float fy;
	
  uchar uVar1;
  undefined8 *puVar2;
  SPRITE_DATA *pSVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar3 = &sd;
  puVar2 = &DAT_0034a8c0;
  do {
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    pSVar3->g_GsTex0 = *puVar2;
    *(undefined8 *)((int)pSVar3 + 8) = uVar5;
    *(undefined8 *)((int)pSVar3 + 0x10) = uVar6;
    *(undefined8 *)((int)pSVar3 + 0x18) = uVar7;
    puVar2 = puVar2 + 4;
    pSVar3 = (SPRITE_DATA *)((int)pSVar3 + 0x20);
  } while (puVar2 != &DAT_0034a920);
  if (((plyr_wrk.sta & 1) != 0) && (efcnt[12].dat._0_1_ != '\0')) {
    return;
  }
  if (type == 1) {
    uVar1 = 'x';
  }
  else if (type < 2) {
    uVar1 = 0x80;
    if (type != 0) goto LAB_001281e0;
  }
  else {
    uVar1 = 0x88;
    if (type != 2) goto LAB_001281e0;
  }
  sd.r = uVar1;
  sd.g = uVar1;
  sd.b = uVar1;
LAB_001281e0:
  fVar10 = scale * 448.0 - 448.0;
  fVar9 = scale * 640.0 - 640.0;
  sd.pos_z = 0xfffff5f;
  sd.angle = rot - 180.0;
  fVar8 = fVar10 * cy;
  sd.size_w = fVar9 + 640.0;
  sd.size_h = fVar10 + 448.0;
  sd.pos_x = DAT_0035520c - (fVar9 * cx) / 640.0;
  sd.pos_y = DAT_00355210 - (fVar8 + fVar8) / 448.0;
  uVar4 = sys_wrk.count;
  if (eff_blur_off == 0) {
    uVar4 = sys_wrk.count + 1;
  }
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | (uVar4 & 1) * 0x8c0);
  sd.alpha = alpha;
  SetTexDirect(&sd,1);
  return;
}

void SetBlur(EFFECT_CONT *ec) {
  byte bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((uchar *)ec->pnt[0] == (uchar *)0x0) {
    bVar1 = (ec->dat).uc8[1];
  }
  else {
    uVar2 = (ec->dat).iv[2];
                    /* WARNING: Load size is inaccurate */
    if ((int)uVar2 < 0) {
      fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar2;
    }
    uVar2 = (ec->dat).iv[3];
    if ((int)uVar2 < 0) {
      fVar3 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar2;
    }
    SubBlur((uint)(ec->dat).uc8[2],*ec->pnt[0],fVar4 / 1000.0,fVar3 / 10.0,ec->fw[0],ec->fw[1]);
    bVar1 = (ec->dat).uc8[1];
  }
  if ((bVar1 & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void RunBlur(EFFECT_CONT *ec) {
	int ef;
	float phase;
	
  float fVar1;
  float fVar2;
  
  if (eff_blur.flow == 1) {
    eff_blur.cnt = eff_blur.cnt + 1;
    fVar1 = SgSinf(DAT_00355218);
    if ((int)eff_blur.alp < 0) {
      fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)eff_blur.alp;
    }
    SubBlur(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,eff_blur.cy);
    if (eff_blur.cnt < eff_blur.keep) {
      return;
    }
    if (eff_blur.out == 0) {
      eff_blur.flow = 3;
      eff_blur.cnt = 0;
      return;
    }
    eff_blur.flow = 2;
    eff_blur.cnt = 0;
    return;
  }
  if (eff_blur.flow == 0) {
    eff_blur.cnt = eff_blur.cnt + 1;
    if (eff_blur.in != 0) {
      if ((int)eff_blur.cnt < 0) {
        fVar1 = (float)(eff_blur.cnt & 1 | eff_blur.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_blur.cnt;
      }
      if ((int)eff_blur.in < 0) {
        fVar2 = (float)(eff_blur.in & 1 | eff_blur.in >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.in;
      }
      fVar1 = SgSinf((((fVar1 * 90.0) / fVar2) * DAT_00355214) / 180.0);
      if ((int)eff_blur.alp < 0) {
        fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.alp;
      }
      SubBlur(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,eff_blur.cy);
    }
    if (eff_blur.cnt < eff_blur.in) {
      return;
    }
    if (eff_blur.keep == 0) {
      eff_blur.flow = 3;
      if (eff_blur.out != 0) {
        eff_blur.flow = 2;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  else {
    if (eff_blur.flow != 2) {
      return;
    }
    eff_blur.cnt = eff_blur.cnt + 1;
    if (eff_blur.out != 0) {
      if ((int)eff_blur.cnt < 0) {
        fVar1 = (float)(eff_blur.cnt & 1 | eff_blur.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_blur.cnt;
      }
      if ((int)eff_blur.out < 0) {
        fVar2 = (float)(eff_blur.out & 1 | eff_blur.out >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.out;
      }
      fVar1 = SgSinf((((fVar1 * 90.0) / fVar2 + 90.0) * DAT_0035521c) / 180.0);
      if ((int)eff_blur.alp < 0) {
        fVar2 = (float)(eff_blur.alp & 1 | eff_blur.alp >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_blur.alp;
      }
      SubBlur(0,(uchar)(int)(fVar1 * fVar2),eff_blur.scl,eff_blur.rot,eff_blur.cx,eff_blur.cy);
    }
    if (eff_blur.cnt < eff_blur.out) {
      return;
    }
    eff_blur.flow = 3;
  }
  eff_blur.cnt = 0;
  return;
}

void CallBlur(int type, int wait, u_char alpha, float scale, float rot) {
  eff_blur.flow = 3;
  if (wait != 0) {
    eff_blur.flow = (uint)(type != 0);
  }
  eff_blur.cy = 224.0;
  eff_blur.alp = (int)(char)alpha & 0xff;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.keep = wait;
  eff_blur.out = 0x1e;
  eff_blur.cx = 320.0;
  eff_blur.cnt = 0;
  eff_blur.in = 0x1e;
  return;
}

void CallBlur2(int in, int keep, int out, u_char alpha, float scale, float rot) {
  if (in < 1) {
    if (keep < 1) {
      eff_blur.flow = 3;
      if (0 < out) {
        eff_blur.flow = 2;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  else {
    eff_blur.flow = 0;
  }
  eff_blur.cy = 224.0;
  eff_blur.in = in;
  eff_blur.keep = keep;
  eff_blur.out = out;
  eff_blur.alp = (int)(char)alpha & 0xff;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.cx = 320.0;
  eff_blur.cnt = 0;
  return;
}

void CallBlur3(int in, int keep, int out, u_char alpha, float scale, float rot, float cx, float cy) {
  if (in < 1) {
    if (keep < 1) {
      eff_blur.flow = 3;
      if (0 < out) {
        eff_blur.flow = 2;
      }
    }
    else {
      eff_blur.flow = 1;
    }
  }
  else {
    eff_blur.flow = 0;
  }
  eff_blur.cy = cy;
  eff_blur.in = in;
  eff_blur.keep = keep;
  eff_blur.out = out;
  eff_blur.alp = (int)(char)alpha & 0xff;
  eff_blur.scl = scale;
  eff_blur.rot = rot;
  eff_blur.cx = cx;
  eff_blur.cnt = 0;
  return;
}

void SubFocus(int ef) {
	SPRITE_DATA sd;
	float hw;
	float ff;
	
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  SPRITE_DATA *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  SPRITE_DATA sd;
  
  fVar1 = DAT_00355220;
  pSVar4 = &sd;
  puVar3 = &DAT_0034a950;
  do {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    pSVar4->g_GsTex0 = *puVar3;
    *(undefined8 *)((int)pSVar4 + 8) = uVar5;
    *(undefined8 *)((int)pSVar4 + 0x10) = uVar6;
    *(undefined8 *)((int)pSVar4 + 0x18) = uVar7;
    puVar3 = puVar3 + 4;
    pSVar4 = (SPRITE_DATA *)((int)pSVar4 + 0x20);
  } while (puVar3 != (undefined8 *)&switchD_00128e90::switchdataD_0034a9b0);
  fVar9 = 0.0;
  if (0 < ef) {
    fVar10 = (float)ef / 40.0;
    sd.alpha = (uchar)(ef << 2);
    if (10 < ef) {
      sd.alpha = '(';
    }
    sd.pos_x = _DAT_00355224 - fVar10;
    sd.pos_y = (DAT_00355220 - fVar10) + 0.0;
    fVar8 = fVar10 + _DAT_00355224;
    sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | (sys_wrk.count & 1) * 0x8c0)
    ;
    sd.pos_z = 0xffffdff;
    SetTexDirectS(0x200,&sd,0);
    fVar2 = sd.pos_x;
    sd.pos_x = fVar8;
    SetTexDirectS(0x200,&sd,0);
    fVar9 = fVar10 + fVar1 + fVar9;
    sd.pos_y = fVar9;
    SetTexDirectS(0x200,&sd,0);
    sd.pos_x = fVar8;
    sd.pos_y = fVar9;
    SetTexDirectS(0x200,&sd,0);
  }
  return;
}

void SetFocus(EFFECT_CONT *ec) {
  if ((((ec->dat).uc8[2] != 0) && (eff_focus.flow == 3)) &&
     (SubFocus((uint)(ec->dat).uc8[2]), ((ec->dat).uc8[1] & 1) != 0)) {
    ResetEffects(ec);
  }
  return;
}

void RunFocus(EFFECT_CONT *ec) {
	int ef;
	float phase;
	
  float fVar1;
  float fVar2;
  
  if (eff_focus.flow == 1) {
    eff_focus.cnt = eff_focus.cnt + 1;
    fVar1 = SgSinf(DAT_0035522c);
    if ((int)eff_focus.max < 0) {
      fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)eff_focus.max;
    }
    SubFocus((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    if (eff_focus.cnt < eff_focus.keep) {
      return;
    }
    if (eff_focus.out == 0) {
      eff_focus.flow = 3;
      eff_focus.cnt = 0;
      return;
    }
    eff_focus.flow = 2;
    eff_focus.cnt = 0;
    return;
  }
  if (eff_focus.flow == 0) {
    eff_focus.cnt = eff_focus.cnt + 1;
    if (eff_focus.in != 0) {
      if ((int)eff_focus.cnt < 0) {
        fVar1 = (float)(eff_focus.cnt & 1 | eff_focus.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_focus.cnt;
      }
      if ((int)eff_focus.in < 0) {
        fVar2 = (float)(eff_focus.in & 1 | eff_focus.in >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.in;
      }
      fVar1 = SgSinf((((fVar1 * 90.0) / fVar2) * DAT_00355228) / 180.0);
      if ((int)eff_focus.max < 0) {
        fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.max;
      }
      SubFocus((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    }
    if (eff_focus.cnt < eff_focus.in) {
      return;
    }
    if (eff_focus.keep == 0) {
      eff_focus.flow = 3;
      if (eff_focus.out != 0) {
        eff_focus.flow = 2;
      }
    }
    else {
      eff_focus.flow = 1;
    }
  }
  else {
    if (eff_focus.flow != 2) {
      return;
    }
    eff_focus.cnt = eff_focus.cnt + 1;
    if (eff_focus.out != 0) {
      if ((int)eff_focus.cnt < 0) {
        fVar1 = (float)(eff_focus.cnt & 1 | eff_focus.cnt >> 1);
        fVar1 = fVar1 + fVar1;
      }
      else {
        fVar1 = (float)eff_focus.cnt;
      }
      if ((int)eff_focus.out < 0) {
        fVar2 = (float)(eff_focus.out & 1 | eff_focus.out >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.out;
      }
      fVar1 = SgSinf((((fVar1 * 90.0) / fVar2 + 90.0) * DAT_00355230) / 180.0);
      if ((int)eff_focus.max < 0) {
        fVar2 = (float)(eff_focus.max & 1 | eff_focus.max >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)eff_focus.max;
      }
      SubFocus((uint)(ec->dat).uc8[2] + (int)(fVar1 * fVar2));
    }
    if (eff_focus.cnt < eff_focus.out) {
      return;
    }
    eff_focus.flow = 3;
  }
  eff_focus.cnt = 0;
  return;
}

void CallFocus(int type, int wait, int gap) {
  eff_focus.flow = (uint)(type != 0);
  eff_focus.max = gap;
  eff_focus.out = 0x1e;
  eff_focus.keep = wait;
  eff_focus.cnt = 0;
  eff_focus.in = 0x1e;
  return;
}

void CallFocus2(int in, int keep, int out, int max) {
  if (in < 1) {
    if (keep < 1) {
      eff_focus.flow = 3;
      if (0 < out) {
        eff_focus.flow = 2;
      }
    }
    else {
      eff_focus.flow = 1;
    }
  }
  else {
    eff_focus.flow = 0;
  }
  eff_focus.out = out;
  eff_focus.max = max;
  eff_focus.in = in;
  eff_focus.keep = keep;
  eff_focus.cnt = 0;
  return;
}

void SubDeform(int type, float rate, u_char alp) {
  switch(type) {
  case 1:
    SetDeform0(type,rate,alp);
    return;
  case 2:
    SetDeform0(type,rate,alp);
    return;
  case 3:
    SetDeform2(type,rate,alp);
    return;
  case 4:
    SetDeform3(type,rate,alp);
    return;
  case 5:
    SetDeform4(type,rate,alp);
    return;
  case 6:
    SetDeform5(type,rate,alp);
    return;
  case 7:
    SetDeform6(type,rate,alp);
    return;
  default:
    return;
  }
}

void SetDeform(EFFECT_CONT *ec) {
	float ef;
	float phase;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float in_f12;
  
  fVar3 = DAT_00355238;
  if ((ec->dat).uc8[2] != eff_deform.otype) {
    eff_deform.init = 1;
  }
  if (((ec->dat).uc8[1] & 4) == 0) {
    in_f12 = (float)(uint)(ec->dat).uc8[3];
  }
  else {
    uVar2 = ec->flow;
    if (uVar2 == 1) {
      ec->cnt = ec->cnt + 1;
      fVar3 = SgSinf(fVar3);
      in_f12 = fVar3 * (float)(uint)(ec->dat).uc8[3];
      if (ec->keep <= ec->cnt) {
        uVar2 = 3;
        ec->cnt = 0;
        if (ec->out != 0) {
          uVar2 = 2;
        }
        ec->flow = uVar2;
      }
    }
    else {
      if (uVar2 != 0) {
        if (uVar2 == 2) {
          uVar2 = ec->out;
          uVar1 = ec->cnt + 1;
          ec->cnt = uVar1;
          if (uVar2 == 0) {
            in_f12 = 0.0;
          }
          else {
            if ((int)uVar1 < 0) {
              fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
              fVar3 = fVar3 + fVar3;
            }
            else {
              fVar3 = (float)uVar1;
            }
            if ((int)uVar2 < 0) {
              fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
              fVar4 = fVar4 + fVar4;
            }
            else {
              fVar4 = (float)uVar2;
            }
            fVar3 = SgSinf((((fVar3 * 90.0) / fVar4 + 90.0) * DAT_0035523c) / 180.0);
            uVar2 = ec->out;
            in_f12 = fVar3 * (float)(uint)(ec->dat).uc8[3];
          }
          if (uVar2 <= ec->cnt) {
            ec->cnt = 0;
            ec->flow = 3;
            ResetEffects(ec);
            return;
          }
          uVar2 = (uint)(ec->dat).uc8[2];
        }
        else {
          uVar2 = (uint)(ec->dat).uc8[2];
        }
        goto LAB_0012918c;
      }
      uVar2 = ec->in;
      uVar1 = ec->cnt + 1;
      ec->cnt = uVar1;
      if (uVar2 == 0) {
        in_f12 = 0.0;
      }
      else {
        if ((int)uVar1 < 0) {
          fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar3 = fVar3 + fVar3;
        }
        else {
          fVar3 = (float)uVar1;
        }
        if ((int)uVar2 < 0) {
          fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar4 = fVar4 + fVar4;
        }
        else {
          fVar4 = (float)uVar2;
        }
        fVar3 = SgSinf((((fVar3 * 90.0) / fVar4) * DAT_00355234) / 180.0);
        uVar2 = ec->in;
        in_f12 = fVar3 * (float)(uint)(ec->dat).uc8[3];
      }
      if (ec->cnt < uVar2) {
        uVar2 = (uint)(ec->dat).uc8[2];
        goto LAB_0012918c;
      }
      if (ec->keep == 0) {
        uVar2 = 3;
        if (ec->out != 0) {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
      ec->flow = uVar2;
      ec->cnt = 0;
    }
  }
  uVar2 = (uint)(ec->dat).uc8[2];
LAB_0012918c:
  SubDeform(uVar2,in_f12,0x80);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void RunDeform(EFFECT_CONT *ec) {
	float phase;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_00355244;
  if (((ec->dat).uc8[1] & 4) != 0) {
    uVar2 = ec->flow;
    if (uVar2 == 1) {
      ec->cnt = ec->cnt + 1;
      fVar3 = SgSinf(fVar3);
      SubDeform((uint)(ec->dat).uc8[2],fVar3 * (float)(uint)(ec->dat).uc8[3],0x80);
      if (ec->keep <= ec->cnt) {
        uVar2 = 3;
        ec->cnt = 0;
        if (ec->out != 0) {
          uVar2 = 2;
        }
        ec->flow = uVar2;
      }
    }
    else if (uVar2 == 0) {
      uVar2 = ec->in;
      uVar1 = ec->cnt + 1;
      ec->cnt = uVar1;
      if (uVar2 != 0) {
        if ((int)uVar1 < 0) {
          fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar3 = fVar3 + fVar3;
        }
        else {
          fVar3 = (float)uVar1;
        }
        if ((int)uVar2 < 0) {
          fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar4 = fVar4 + fVar4;
        }
        else {
          fVar4 = (float)uVar2;
        }
        fVar3 = SgSinf((((fVar3 * 90.0) / fVar4) * DAT_00355240) / 180.0);
        SubDeform((uint)(ec->dat).uc8[2],fVar3 * (float)(uint)(ec->dat).uc8[3],0x80);
        uVar2 = ec->in;
      }
      if (uVar2 <= ec->cnt) {
        if (ec->keep == 0) {
          uVar2 = 3;
          if (ec->out != 0) {
            uVar2 = 2;
          }
        }
        else {
          uVar2 = 1;
        }
        ec->flow = uVar2;
        ec->cnt = 0;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = ec->out;
      uVar1 = ec->cnt + 1;
      ec->cnt = uVar1;
      if (uVar2 != 0) {
        if ((int)uVar1 < 0) {
          fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar3 = fVar3 + fVar3;
        }
        else {
          fVar3 = (float)uVar1;
        }
        if ((int)uVar2 < 0) {
          fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar4 = fVar4 + fVar4;
        }
        else {
          fVar4 = (float)uVar2;
        }
        fVar3 = SgSinf((((fVar3 * 90.0) / fVar4 + 90.0) * DAT_00355248) / 180.0);
        SubDeform((uint)(ec->dat).uc8[2],fVar3 * (float)(uint)(ec->dat).uc8[3],0x80);
        uVar2 = ec->out;
      }
      if (uVar2 <= ec->cnt) {
        ec->cnt = 0;
        ec->flow = 3;
        ResetEffects(ec);
        return;
      }
    }
  }
  return;
}

void CallDeform2(int in, int keep, int out, int type, int max) {
  SetEffects(6,4);
  return;
}

static void _SetScrData(Q_WORDDATA *dst, SCRDEF *src) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])src->stq);
  auVar2 = _lqc2(*(undefined (*) [16])src->vtw);
  auVar1 = _vftoi4(auVar1);
  auVar3 = _vftoi4(auVar2);
  auVar2 = _vmulbc(auVar1,in_vf0);
  auVar1 = _sqc2(auVar3);
  dst[1].ul128 = (uint16)auVar1;
  auVar1 = _sqc2(auVar2);
  dst->ul128 = (uint16)auVar1;
  return;
}

void MakeScrDeformPacket(int pnumw, int pnumh, u_long tex0, SCRDEF *scrdef[33], int alp) {
	int i;
	int j;
	int k;
	Q_WORDDATA *ppbuf;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *dst;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  Reserve2DPacket(0x1000);
  pQVar1 = Get2DPacketBufferAddress();
  iVar5 = pnumh * (pnumw + 1);
  pQVar1->ui32[0] = 0;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[0] = iVar5 * 4 + 0x70000009;
  pQVar1[1].ul64[0] = 0x1000000000008007;
  *(undefined8 *)((int)pQVar1 + 0x18) = 0xe;
  *(undefined8 *)((int)pQVar1 + 0x28) = 0x3f;
  pQVar1[2].ul64[0] = 0;
  pQVar1[3].ul64[0] = tex0;
  *(undefined8 *)((int)pQVar1 + 0x38) = 6;
  pQVar1[4].ul64[0] = 0x161;
  *(undefined8 *)((int)pQVar1 + 0x48) = 0x14;
  pQVar1[5].ul64[0] = 0x10100008c;
  *(undefined8 *)((int)pQVar1 + 0x58) = 0x4e;
  pQVar1[6].ul64[0] = 0x8000000044;
  *(undefined8 *)((int)pQVar1 + 0x68) = 0x42;
  pQVar1[7].ul64[0] = 0x30003;
  *(undefined8 *)((int)pQVar1 + 0x78) = 0x47;
  pQVar1[8].ul64[0] = (long)alp << 0x18 | 0x100808080;
  *(undefined8 *)((int)pQVar1 + 0x88) = 1;
  pQVar1[9].ul64[0] = (long)(iVar5 * 2) | 0x20ae400000008000;
  *(undefined8 *)((int)pQVar1 + 0x98) = 0x43;
  pQVar1 = pQVar1 + 10;
  if (0 < pnumh) {
    iVar5 = (pnumw + 1) * 2;
    do {
      iVar3 = 2;
      iVar4 = 1;
      _SetScrData(pQVar1,(SCRDEF *)scrdef[iVar2]);
      _SetScrData(pQVar1 + 2,(SCRDEF *)scrdef[iVar2 + 1]);
      *(undefined4 *)((int)pQVar1 + 0x1c) = 0x8000;
      *(undefined4 *)((int)pQVar1 + 0x3c) = 0x8000;
      pQVar1 = pQVar1 + 4;
      if (2 < iVar5) {
        do {
          iVar3 = iVar3 + 2;
          _SetScrData(pQVar1,scrdef[iVar2] + iVar4);
          dst = pQVar1 + 2;
          pQVar1 = pQVar1 + 4;
          _SetScrData(dst,scrdef[iVar2 + 1] + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar3 < iVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < pnumh);
  }
  Set2DPacketBufferAddress(pQVar1);
  return;
}

void SetDeform0(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	static int swch = 0;
	int i;
	int j;
	int c;
	int pnumw;
	float ll;
	float fw;
	float yoff;
	float tx[17][25];
	float ty[17][25];
	sceVu0FVECTOR vtw[17][25];
	SPRITE_DATA sd1;
	
  Q_WORDDATA *pQVar1;
  sceGsTex0 *psVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  SPRITE_DATA *pSVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  ulong uVar10;
  sceGsTex0 sVar11;
  Q_WORDDATA *pQVar12;
  sceGsTex0 sVar13;
  sceGsTex0 sVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float tx [17] [25];
  float ty [17] [25];
  float vtw [17] [25] [4];
  SPRITE_DATA sd1;
  int local_d0;
  uint local_cc;
  
  local_cc = (int)(char)alp & 0xff;
  psVar2 = (sceGsTex0 *)&DAT_0034a9d0;
  pSVar5 = &sd1;
  local_d0 = type;
  do {
    sVar11 = psVar2[1];
    sVar13 = psVar2[2];
    sVar14 = psVar2[3];
    pSVar5->g_GsTex0 = *psVar2;
    *(sceGsTex0 *)&pSVar5->g_nTexSizeW = sVar11;
    *(sceGsTex0 *)&pSVar5->g_bMipmapLv = sVar13;
    pSVar5->g_GsMiptbp1 = (ulong)sVar14;
    psVar2 = psVar2 + 4;
    pSVar5 = (SPRITE_DATA *)&pSVar5->g_GsMiptbp2;
  } while (psVar2 != (sceGsTex0 *)&DAT_0034aa30);
  LocalCopyLtoLDraw((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  fVar19 = GetYOffsetf();
  iVar16 = 0;
  do {
    iVar17 = 0;
    iVar18 = iVar16 + 1;
    iVar7 = 0;
    do {
      fVar20 = (float)(iVar16 * 0xe0) / (float)DAT_00356458;
      pfVar8 = ty[iVar16] + iVar17;
      vtw[iVar16][iVar17][3] = 1.0;
      pfVar6 = tx[iVar16] + iVar17;
      vtw[iVar16][iVar17][2] = 0.0;
      vtw[iVar16][iVar17][0] = (float)iVar7 / 24.0 + DAT_0035524c;
      vtw[iVar16][iVar17][1] = fVar20 + 1936.0;
      *pfVar6 = (float)iVar7 / 24.0;
      *pfVar8 = fVar20 + fVar19;
      if (iVar17 == 0) {
        tx[iVar16][0] = tx[iVar16][0] + 1.0;
      }
      if (iVar17 == 0x18) {
        *pfVar6 = *pfVar6 - 1.0;
      }
      if (iVar16 == 0) {
        ty[iVar17] = ty[iVar17] + 1.0;
      }
      iVar17 = iVar17 + 1;
      if (iVar16 == 0x10) {
        *pfVar8 = *pfVar8 - 1.0;
      }
      iVar7 = iVar17 * 0x280;
    } while (iVar17 < 0x19);
    iVar16 = iVar18;
  } while (iVar18 < 0x11);
  fVar19 = rate / 10.0;
  add_208 = 2.0;
  iVar16 = 0;
  do {
    iVar7 = 0;
    iVar17 = iVar16 + 1;
    do {
      fVar20 = DAT_00355250;
      if ((((iVar7 != 0) && (iVar7 != 0x18)) && (iVar16 != 0)) && (iVar16 != 0x10)) {
        fVar22 = 50.0;
        fVar21 = SgSinf(((r_207 + (float)iVar16 * 50.0) * DAT_00355250) / 180.0);
        fVar21 = fVar21 * fVar19;
        vtw[iVar16][iVar7][0] = vtw[iVar16][iVar7][0] + fVar21;
        if (local_d0 == 2) {
          fVar21 = SgSinf(((r_207 + (float)iVar7 * fVar22) * fVar20) / 180.0);
          fVar21 = fVar21 * fVar19;
          fVar20 = vtw[iVar16][iVar7][1];
        }
        else {
          fVar20 = vtw[iVar16][iVar7][1];
        }
        vtw[iVar16][iVar7][1] = fVar20 + fVar21;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x19);
    iVar16 = iVar17;
  } while (iVar17 < 0x11);
  if ((stop_effects == 0) && (r_207 = r_207 + add_208, 360.0 < r_207)) {
    r_207 = r_207 - 360.0;
  }
  Reserve2DPacket(0x1000);
  pQVar1 = pbuf;
  pQVar3 = pbuf + ndpkt;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = (uint)&DAT_70000968;
  pQVar1[ndpkt + 1].ul64[1] = 0xe;
  pQVar1[ndpkt + 1].ul64[0] = 0x1000000000008006;
  pQVar1[ndpkt + 2].ul64[1] = 0x3f;
  pQVar1[ndpkt + 2].ul64[0] = 0;
  pQVar1[ndpkt + 3].ul64[1] = 6;
  pQVar1[ndpkt + 3].ul64[0] = (ulong)sd1.g_GsTex0;
  pQVar1[ndpkt + 4].ul64[0] = 0x161;
  pQVar1[ndpkt + 4].ul64[1] = 0x14;
  pQVar1[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar1[ndpkt + 5].ul64[1] = 0x4e;
  iVar16 = ndpkt + 8;
  pQVar1[ndpkt + 6].ul64[1] = 0x42;
  pQVar1[ndpkt + 6].ul64[0] = 0x8000000044;
  pQVar1[ndpkt + 7].ul64[0] = 0x30003;
  pQVar1[ndpkt + 7].ul64[1] = 0x47;
  if (swch_209 == 0) {
    uVar10 = 0x30ae400000000000;
  }
  else {
    uVar10 = 0x30e2400000000000;
  }
  ndpkt = iVar16;
  pQVar1[iVar16].ul64[0] = uVar10 | 0x8320;
  pQVar1 = pbuf;
  iVar7 = ndpkt + 1;
  pbuf->ul64[ndpkt * 2 + 1] = 0x431;
  iVar16 = swch_209;
  iVar17 = 0;
  do {
    iVar18 = 0;
    do {
      uVar15 = iVar18 * 2;
      if (iVar16 == 0) {
        pQVar3 = pQVar1 + iVar7;
        pQVar3->ui32[3] = local_cc;
        pQVar3->ui32[0] = 0x80;
        pQVar3->ui32[1] = 0x80;
        pQVar3->ui32[2] = 0x80;
      }
      else {
        pQVar3 = pQVar1 + iVar7;
        pQVar3->ui32[3] = local_cc;
        pQVar3->ui32[2] = uVar15;
        pQVar3->ui32[0] = uVar15;
        pQVar3->ui32[1] = uVar15;
      }
      uVar15 = 0x8000;
      iVar9 = iVar18 / 2;
      if (1 < iVar18) {
        uVar15 = 0;
      }
      iVar4 = iVar18 % 2 + iVar17;
      pQVar12 = pQVar1 + iVar7 + 1;
      iVar18 = iVar18 + 1;
      pQVar3 = pQVar1 + iVar7 + 2;
      pQVar12->ui32[0] = (int)(tx[iVar4][iVar9] * 16.0);
      fVar19 = ty[iVar4][iVar9];
      pQVar12->ui32[3] = 0;
      pQVar12->ui32[2] = 0;
      pQVar12->ui32[1] = (int)(fVar19 * 16.0);
      pQVar3->ui32[0] = (int)(vtw[iVar4][iVar9][0] * 16.0);
      pQVar3->ui32[1] = (int)(vtw[iVar4][iVar9][1] * 16.0);
      fVar19 = vtw[iVar4][iVar9][2];
      pQVar3->ui32[3] = uVar15;
      pQVar3->ui32[2] = (int)(fVar19 * 16.0);
      iVar7 = iVar7 + 3;
    } while (iVar18 < 0x32);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0x10);
  ndpkt = iVar7;
  eff_deform.pass = 1;
  eff_deform.type = (byte)local_d0;
  eff_deform.init = 1;
  return;
}

void SetDeform2(int type, float rate, u_char alp) {
	static float rrr[825];
	static float lll[825];
	static float mm1[825];
	static float mm2[825];
	static float sss[825];
	static float ccc[825];
	static float r = 0.f;
	static float add = 6.f;
	static float ll = 0.f;
	static int swch = 0;
	int i;
	int k;
	int m;
	int bak;
	int vnumw;
	int wix;
	int pnumh;
	int wiy;
	float wfw;
	float wfh;
	float yoff;
	float l;
	float fw;
	float lm;
	float cntw;
	float cnth;
	float ts;
	float fx;
	float fy;
	float fz;
	float rot_x;
	float rot_y;
	float tx[825];
	float ty[825];
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR vt[825];
	sceVu0FVECTOR vtw[825];
	SPRITE_DATA sd1;
	
  int iVar1;
  Q_WORDDATA *pQVar2;
  SPRITE_DATA *pSVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  ulong uVar6;
  Q_WORDDATA *pQVar7;
  sceGsTex0 sVar8;
  sceGsTex0 sVar9;
  sceGsTex0 *psVar10;
  sceGsTex0 sVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  Vector4 *pVVar16;
  Vector4 *pVVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float tx [825];
  float ty [825];
  float slm [4] [4];
  float wlm [4] [4];
  float pos [4];
  float vt [825] [4];
  float vtw [825] [4];
  SPRITE_DATA sd1;
  float rot_x;
  float rot_y;
  int local_128;
  uint local_124;
  Vector4 *local_11c;
  Matrix4x4 *local_118;
  undefined4 local_114;
  float *local_110;
  Vector4 *local_10c;
  
  pfVar14 = tx;
  pfVar12 = tx;
  local_124 = (int)(char)alp & 0xff;
  psVar10 = (sceGsTex0 *)&DAT_0034a9d0;
  pos._0_8_ = DAT_0034aa30;
  pos._8_8_ = DAT_0034aa38;
  local_118 = (Matrix4x4 *)slm;
  local_10c = (Vector4 *)vt;
  local_11c = (Vector4 *)vtw;
  local_110 = ty;
  pSVar3 = &sd1;
  local_128 = type;
  do {
    sVar8 = psVar10[1];
    sVar9 = psVar10[2];
    sVar11 = psVar10[3];
    pSVar3->g_GsTex0 = *psVar10;
    *(sceGsTex0 *)&pSVar3->g_nTexSizeW = sVar8;
    *(sceGsTex0 *)&pSVar3->g_bMipmapLv = sVar9;
    pSVar3->g_GsMiptbp1 = (ulong)sVar11;
    pVVar17 = local_10c;
    pfVar21 = local_110;
    pVVar16 = local_11c;
    psVar10 = psVar10 + 4;
    pSVar3 = (SPRITE_DATA *)&pSVar3->g_GsMiptbp2;
  } while (psVar10 != (sceGsTex0 *)&DAT_0034aa30);
  fVar28 = camera.i.x - camera.p.x;
  fVar25 = camera.i.y - camera.p.y;
  fVar27 = camera.i.z - camera.p.z;
  iVar18 = 0;
  fVar24 = 2.0;
  fVar23 = 32.0;
  fVar26 = 2048.0;
  fVar29 = 32.0;
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  fVar22 = SgSqrtf(fVar28 * fVar28 + fVar25 * fVar25 + fVar27 * fVar27);
  pos._8_8_ = pos._8_8_ & 0xffffffff00000000 |
              (ulong)(uint)(camera.p.z + (fVar27 * 2000.0) / fVar22);
  pos._0_8_ = CONCAT44(camera.p.y + (fVar25 * 2000.0) / fVar22,
                       camera.p.x + (fVar28 * 2000.0) / fVar22);
  LocalCopyLtoLDraw((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)pos);
  sceVu0MulMatrix(local_118,&SgWSMtx,(Matrix4x4 *)wlm);
  fVar22 = GetYOffsetf();
  do {
    pVVar17->w = 1.0;
    pVVar17->z = 0.0;
    pVVar17->x = (float)(iVar18 % 0x21) * fVar24 - fVar23;
    pVVar17->y = (float)(iVar18 / 0x21) * fVar24 - 24.0;
    sceVu0ApplyMatrix(pVVar16,local_118,pVVar17);
    sceVu0DivVector(pVVar16->w,pVVar16,pVVar16);
    *pfVar14 = (pVVar16->x - fVar26) + 320.0;
    *pfVar21 = (pVVar16->y - fVar26) + 112.0 + fVar22;
    fVar25 = *pfVar14;
    if (fVar25 < 0.0) {
      *pfVar14 = 0.0;
    }
    else {
      fVar27 = DAT_00355254;
      if (fVar25 <= DAT_00355254) {
        fVar27 = fVar25;
      }
      *pfVar14 = fVar27;
    }
    fVar25 = *pfVar21;
    if (fVar25 < 0.0) {
      fVar25 = 0.0;
    }
    else if (223.0 < fVar25) {
      fVar25 = 223.0;
    }
    iVar18 = iVar18 + 1;
    *pfVar21 = fVar25;
    pfVar21 = pfVar21 + 1;
    pfVar14 = pfVar14 + 1;
    pVVar16 = pVVar16 + 1;
    pVVar17 = pVVar17 + 1;
  } while (iVar18 < 0x339);
  if (eff_deform.init != 0) {
    local_114 = 0;
    iVar18 = 0;
    do {
      fVar22 = (float)(iVar18 % 0x21) * fVar24 - fVar29;
      fVar26 = (float)(iVar18 / 0x21) * fVar24 - 24.0;
      fVar23 = SgSqrtf(fVar22 * fVar22 + fVar26 * fVar26);
      (&lll_214)[iVar18] = fVar23;
      fVar23 = lll_214;
      if ((iVar18 % 0x21 == 0x10) && (iVar18 / 0x21 == 0xc)) {
        (&rrr_213)[iVar18] = 0;
      }
      else {
        fVar26 = SgAtan2f(fVar22,fVar26);
        (&rrr_213)[iVar18] = fVar26;
      }
      fVar26 = (&lll_214)[iVar18] * DAT_00355258;
      iVar19 = iVar18 + 1;
      (&mm2_216)[iVar18] = (fVar23 - (&lll_214)[iVar18]) / fVar23;
      (&mm1_215)[iVar18] = (fVar26 * 12.0) / fVar23;
      fVar23 = SgSinf((float)(&rrr_213)[iVar18]);
      (&sss_217)[iVar18] = fVar23;
      fVar23 = SgCosf((float)(&rrr_213)[iVar18]);
      (&ccc_218)[iVar18] = fVar23;
      iVar18 = iVar19;
    } while (iVar19 < 0x339);
    eff_deform.init = 0;
  }
  iVar18 = 0;
  do {
    fVar22 = (&lll_214)[iVar18];
    fVar24 = SgSinf((float)(&mm1_215)[iVar18] - r_219);
    fVar26 = fVar24 * (rate / 25.0) * (float)(&mm2_216)[iVar18];
    fVar24 = (float)(&sss_217)[iVar18];
    fVar23 = (float)(&ccc_218)[iVar18];
    pVVar16 = local_10c + iVar18;
    iVar18 = iVar18 + 1;
    pVVar16->y = fVar23 * fVar22 + fVar24 * fVar26;
    pVVar16->x = fVar24 * fVar22 - fVar23 * fVar26;
  } while (iVar18 < 0x339);
  add_220 = DAT_0035525c;
  if ((stop_effects == 0) && (r_219 = r_219 + DAT_0035525c, DAT_00355260 < r_219)) {
    r_219 = r_219 - DAT_00355260;
  }
  iVar18 = 0;
  pVVar16 = local_11c;
  pVVar17 = local_10c;
  do {
    sceVu0ApplyMatrix(pVVar16,local_118,pVVar17);
    iVar18 = iVar18 + 1;
    pVVar17 = pVVar17 + 1;
    sceVu0DivVector(pVVar16->w,pVVar16,pVVar16);
    pVVar16 = pVVar16 + 1;
  } while (iVar18 < 0x339);
  Reserve2DPacket(0x1000);
  pQVar2 = pbuf;
  iVar18 = ndpkt;
  pQVar7 = pbuf + ndpkt;
  pQVar7->ui32[0] = 0;
  pQVar7->ui32[1] = 0;
  pQVar7->ui32[2] = 0;
  pQVar7->ui32[3] = 0;
  pQVar2[ndpkt + 1].ul64[0] = 0x1000000000008006;
  pQVar2[ndpkt + 1].ul64[1] = 0xe;
  pQVar2[ndpkt + 2].ul64[0] = 0;
  pQVar2[ndpkt + 2].ul64[1] = 0x3f;
  pQVar2[ndpkt + 3].ul64[0] = (ulong)sd1.g_GsTex0;
  pQVar2[ndpkt + 3].ul64[1] = 6;
  pQVar2[ndpkt + 4].ul64[1] = 0x14;
  pQVar2[ndpkt + 4].ul64[0] = 0x161;
  pQVar2[ndpkt + 5].ul64[1] = 0x4e;
  pQVar2[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar2[ndpkt + 6].ul64[1] = 0x42;
  pQVar2[ndpkt + 6].ul64[0] = 0x8000000044;
  pQVar2[ndpkt + 7].ul64[0] = 0x30003;
  pQVar2[ndpkt + 7].ul64[1] = 0x47;
  ndpkt = ndpkt + 8;
  if (swch_222 == 0) {
    uVar6 = 0x60ae0000;
  }
  else {
    uVar6 = 0x60e20000;
  }
  pQVar2[ndpkt].ul64[0] = (uVar6 | 0x4000) << 0x20 | 0x8318;
  pQVar2 = pbuf;
  iVar20 = 0;
  iVar5 = ndpkt + 1;
  pbuf->ul64[ndpkt * 2 + 1] = 0x413413;
  iVar19 = swch_222;
  local_11c = local_11c + 0x21;
  iVar15 = 0x21;
  do {
    pQVar7 = pQVar2 + iVar5;
    uVar13 = 0x8000;
    pQVar7->ui32[0] = (int)(*pfVar12 * 16.0);
    fVar24 = *local_110;
    pQVar7->ui32[3] = 0;
    pQVar7->ui32[2] = 0;
    pQVar7->ui32[1] = (int)(fVar24 * 16.0);
    if (iVar20 % 0x21 != 0) {
      uVar13 = 0;
    }
    if (iVar19 == 0) {
      pQVar7 = pQVar2 + iVar5 + 1;
      pQVar7->ui32[3] = 0x80;
      pQVar7->ui32[0] = 0x80;
      pQVar7->ui32[1] = 0x80;
      pQVar7->ui32[2] = 0x80;
    }
    else {
      iVar1 = iVar20 % 0xff;
      pQVar7 = pQVar2 + iVar5 + 1;
      pQVar7->iv[0] = iVar1;
      pQVar7->iv[1] = iVar1;
      pQVar7->iv[2] = iVar1;
      pQVar7->ui32[3] = 0x80;
    }
    pQVar7 = pQVar2 + iVar5 + 2;
    pQVar4 = pQVar2 + iVar5 + 3;
    pQVar7->ui32[0] = (int)(local_11c[-0x21].x * 16.0);
    pQVar7->ui32[1] = (int)(local_11c[-0x21].y * 16.0);
    fVar24 = local_11c[-0x21].z;
    pQVar7->ui32[3] = uVar13;
    pQVar7->ui32[2] = (int)(fVar24 * 16.0);
    pQVar4->ui32[0] = (int)(pfVar12[0x21] * 16.0);
    fVar24 = local_110[0x21];
    pQVar4->ui32[3] = 0;
    pQVar4->ui32[2] = 0;
    pQVar4->ui32[1] = (int)(fVar24 * 16.0);
    if (iVar19 == 0) {
      pQVar7 = pQVar2 + iVar5 + 4;
      pQVar7->ui32[0] = 0x80;
      pQVar7->ui32[3] = local_124;
      pQVar7->ui32[1] = 0x80;
      pQVar7->ui32[2] = 0x80;
    }
    else {
      iVar1 = iVar15 % 0xff;
      pQVar7 = pQVar2 + iVar5 + 4;
      pQVar7->iv[0] = iVar1;
      pQVar7->iv[1] = iVar1;
      pQVar7->iv[2] = iVar1;
      pQVar7->ui32[3] = local_124;
    }
    pQVar7 = pQVar2 + iVar5 + 5;
    iVar20 = iVar20 + 1;
    iVar5 = iVar5 + 6;
    local_110 = local_110 + 1;
    pfVar12 = pfVar12 + 1;
    iVar15 = iVar15 + 1;
    pQVar7->ui32[0] = (int)(local_11c->x * 16.0);
    pQVar7->ui32[1] = (int)(local_11c->y * 16.0);
    fVar24 = local_11c->z;
    pQVar7->ui32[3] = uVar13;
    pQVar7->ui32[2] = (int)(fVar24 * 16.0);
    local_11c = local_11c + 1;
  } while (iVar20 < 0x318);
  ndpkt = iVar5;
  pbuf[iVar18].ui32[0] = (iVar5 - (iVar18 + -0x70000000)) - 1;
  eff_deform.pass = 1;
  eff_deform.type = (byte)local_128;
  return;
}

void SetDeform3(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	static float ll = 0.f;
	static int swch = 0;
	int i;
	int j;
	int c;
	int pnumw;
	int vnumw;
	int wix;
	int wiy;
	float wfw;
	float wfh;
	float fw;
	float lm;
	float cntw;
	float cnth;
	float fx;
	float fy;
	float tx[25][33];
	float ty[25][33];
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR vt[25][33];
	sceVu0FVECTOR vtw[25][33];
	DEFWORK *pdef;
	SPRITE_DATA sd1;
	float pszw;
	float pszh;
	float yoff;
	
  Q_WORDDATA *pQVar1;
  SPRITE_DATA *pSVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  sceGsTex0 sVar9;
  sceGsTex0 sVar10;
  sceGsTex0 *psVar11;
  Q_WORDDATA *pQVar12;
  sceGsTex0 sVar13;
  uint uVar14;
  int iVar15;
  DEFWORK *pDVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float y;
  float fVar25;
  float tx [25] [33];
  float ty [25] [33];
  float slm [4] [4];
  float wlm [4] [4];
  float pos [4];
  float vt [25] [33] [4];
  float vtw [25] [33] [4];
  SPRITE_DATA sd1;
  int local_120;
  uint local_11c;
  int wix;
  int wiy;
  
  local_11c = (int)(char)alp & 0xff;
  psVar11 = (sceGsTex0 *)&DAT_0034a9d0;
  pSVar2 = &sd1;
  local_120 = type;
  do {
    sVar9 = psVar11[1];
    sVar10 = psVar11[2];
    sVar13 = psVar11[3];
    pSVar2->g_GsTex0 = *psVar11;
    *(sceGsTex0 *)&pSVar2->g_nTexSizeW = sVar9;
    *(sceGsTex0 *)&pSVar2->g_bMipmapLv = sVar10;
    pSVar2->g_GsMiptbp1 = (ulong)sVar13;
    psVar11 = psVar11 + 4;
    pSVar2 = (SPRITE_DATA *)&pSVar2->g_GsMiptbp2;
  } while (psVar11 != (sceGsTex0 *)&DAT_0034aa30);
  fVar22 = 224.0;
  fVar23 = 112.0;
  LocalCopyLtoLDraw((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  fVar20 = GetYOffsetf();
  iVar15 = 0;
  do {
    iVar17 = 0;
    iVar19 = iVar15 + 1;
    do {
      pfVar6 = ty[iVar15] + iVar17;
      vt[iVar15][iVar17][3] = 1.0;
      pfVar5 = tx[iVar15] + iVar17;
      vt[iVar15][iVar17][0] = 2048.0;
      vt[iVar15][iVar17][1] = 2048.0;
      vt[iVar15][iVar17][2] = 0.0;
      *pfVar5 = (float)(iVar17 * 0x280) / 32.0;
      *pfVar6 = (float)(iVar15 * 0xe0) / (float)DAT_0035647c + fVar20;
      if (iVar17 == 0) {
        tx[iVar15][0] = tx[iVar15][0] + 1.0;
      }
      if (iVar17 == 0x20) {
        *pfVar5 = *pfVar5 - 1.0;
      }
      if (iVar15 == 0) {
        ty[iVar17] = ty[iVar17] + 1.0;
      }
      iVar17 = iVar17 + 1;
      if (iVar15 == 0x18) {
        *pfVar6 = *pfVar6 - 1.0;
      }
    } while (iVar17 < 0x21);
    iVar15 = iVar19;
  } while (iVar19 < 0x19);
  if (eff_deform.init != 0) {
    iVar15 = 0;
    do {
      iVar17 = 0;
      fVar20 = (float)DAT_0035647c;
      fVar25 = (float)iVar15;
      iVar19 = iVar15 + 1;
      do {
        pDVar16 = dw[iVar15] + iVar17;
        y = (float)iVar17 * 20.0 - 320.0;
        fVar24 = fVar25 * (fVar22 / fVar20) - fVar23;
        fVar21 = SgSqrtf(y * y + fVar24 * fVar24);
        pDVar16->lll = fVar21;
        fVar21 = dw[0][0].lll;
        if ((wix == 0x10) && (wiy == 0xc)) {
          pDVar16->rrr = 0.0;
        }
        else {
          fVar24 = SgAtan2f(y,fVar24);
          pDVar16->rrr = fVar24;
        }
        iVar17 = iVar17 + 1;
        fVar24 = pDVar16->lll * DAT_00355264;
        pDVar16->mm2 = (fVar21 - pDVar16->lll) / fVar21;
        pDVar16->mm1 = (fVar24 + fVar24) / fVar21;
        fVar21 = SgSinf(pDVar16->rrr);
        pDVar16->sss = fVar21;
        fVar21 = SgCosf(pDVar16->rrr);
        pDVar16->ccc = fVar21;
      } while (iVar17 < 0x21);
      iVar15 = iVar19;
    } while (iVar19 < 0x19);
    eff_deform.init = 0;
  }
  iVar15 = 0;
  do {
    iVar19 = iVar15 + 1;
    iVar17 = 0;
    do {
      fVar25 = dw[iVar15][iVar17].lll;
      fVar22 = SgSinf(dw[iVar15][iVar17].mm1 - r_226);
      fVar23 = fVar22 * rate * 0.25 * dw[iVar15][iVar17].mm2;
      iVar18 = iVar17 + 1;
      vtw[iVar15][iVar17][0] = dw[iVar15][iVar17].sss * fVar25 - dw[iVar15][iVar17].ccc * fVar23;
      fVar20 = dw[iVar15][iVar17].sss;
      fVar22 = dw[iVar15][iVar17].ccc;
      vtw[iVar15][iVar17][2] = 0.0;
      vtw[iVar15][iVar17][1] = fVar22 * fVar25 + fVar20 * fVar23;
      iVar17 = iVar18;
    } while (iVar18 < 0x21);
    iVar15 = iVar19;
  } while (iVar19 < 0x19);
  add_227 = DAT_00355268;
  if ((stop_effects == 0) && (r_226 = r_226 + DAT_00355268, DAT_0035526c < r_226)) {
    r_226 = r_226 - DAT_0035526c;
  }
  Reserve2DPacket(0x1000);
  pQVar1 = pbuf;
  pQVar3 = pbuf + ndpkt;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = (uint)&DAT_70001298;
  pQVar1[ndpkt + 1].ul64[1] = 0xe;
  pQVar1[ndpkt + 1].ul64[0] = 0x1000000000008006;
  pQVar1[ndpkt + 2].ul64[1] = 0x3f;
  pQVar1[ndpkt + 2].ul64[0] = 0;
  pQVar1[ndpkt + 3].ul64[1] = 6;
  pQVar1[ndpkt + 3].ul64[0] = (ulong)sd1.g_GsTex0;
  pQVar1[ndpkt + 4].ul64[0] = 0x161;
  pQVar1[ndpkt + 4].ul64[1] = 0x14;
  pQVar1[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar1[ndpkt + 5].ul64[1] = 0x4e;
  iVar15 = ndpkt + 8;
  pQVar1[ndpkt + 6].ul64[1] = 0x42;
  pQVar1[ndpkt + 6].ul64[0] = 0x8000000044;
  pQVar1[ndpkt + 7].ul64[0] = 0x30003;
  pQVar1[ndpkt + 7].ul64[1] = 0x47;
  if (swch_229 == 0) {
    uVar8 = 0x30ae400000000000;
  }
  else {
    uVar8 = 0x30e2400000000000;
  }
  ndpkt = iVar15;
  pQVar1[iVar15].ul64[0] = uVar8 | 0x8630;
  pQVar1 = pbuf;
  iVar17 = ndpkt + 1;
  pbuf->ul64[ndpkt * 2 + 1] = 0x431;
  iVar15 = swch_229;
  iVar19 = 0;
  do {
    iVar18 = 0;
    do {
      if (iVar15 == 0) {
        pQVar3 = pQVar1 + iVar17;
        pQVar3->ui32[0] = 0x80;
        pQVar3->ui32[3] = local_11c;
        pQVar3->ui32[1] = 0x80;
        pQVar3->ui32[2] = 0x80;
      }
      else {
        pQVar3 = pQVar1 + iVar17;
        pQVar3->ui32[3] = local_11c;
        pQVar3->iv[2] = iVar18;
        pQVar3->iv[0] = iVar18;
        pQVar3->iv[1] = iVar18;
      }
      uVar14 = 0x8000;
      iVar7 = iVar18 / 2;
      if (1 < iVar18) {
        uVar14 = 0;
      }
      iVar4 = iVar18 % 2 + iVar19;
      pQVar3 = pQVar1 + iVar17 + 1;
      iVar18 = iVar18 + 1;
      pQVar12 = pQVar1 + iVar17 + 2;
      pQVar3->ui32[0] = (int)(tx[iVar4][iVar7] * 16.0);
      fVar22 = ty[iVar4][iVar7];
      pQVar3->ui32[3] = 0;
      pQVar3->ui32[2] = 0;
      pQVar3->ui32[1] = (int)(fVar22 * 16.0);
      pQVar12->ui32[0] = (int)((vt[iVar4][iVar7][0] + vtw[iVar4][iVar7][0]) * 16.0);
      pQVar12->ui32[1] = (int)((vt[iVar4][iVar7][1] + vtw[iVar4][iVar7][1]) * 16.0);
      fVar23 = vt[iVar4][iVar7][2];
      fVar22 = vtw[iVar4][iVar7][2];
      pQVar12->ui32[3] = uVar14;
      pQVar12->ui32[2] = (int)((fVar23 + fVar22) * 16.0);
      iVar17 = iVar17 + 3;
    } while (iVar18 < 0x42);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0x18);
  ndpkt = iVar17;
  eff_deform.pass = 1;
  eff_deform.type = (byte)local_120;
  return;
}

void SetDeform4(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	int pnumw;
	int vnumw;
	int wix;
	int pnumh;
	int wiy;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float lm;
	float fx;
	float fy;
	float fz;
	float yoff;
	SCRDEF scrdef[25][33];
	SCRDEF *pscr;
	DEFWORK *pdef;
	float r;
	
  SCRDEF *pSVar1;
  int unaff_s0_lo;
  DEFWORK *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_s8_lo;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined4 in_vuR;
  SCRDEF scrdef [25] [33];
  int local_f0;
  uint local_ec;
  int wix;
  int wiy;
  
  local_ec = (int)(char)alp & 0xff;
  LocalCopyLtoLDraw((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  fVar7 = GetYOffsetf();
  iVar4 = 0;
  local_f0 = type;
  do {
    iVar6 = iVar4 + 1;
    iVar5 = 0;
    do {
      iVar3 = iVar5 + 1;
      scrdef[iVar4][iVar5].stq[0] = (float)(iVar5 * 0x280) * 0.03125;
      scrdef[iVar4][iVar5].stq[1] = (float)(iVar4 * 0xe0) / 24.0 + fVar7;
      iVar5 = iVar3;
    } while (iVar3 < 0x21);
    scrdef[iVar4][0].stq[0] = scrdef[iVar4][0].stq[0] + 1.0;
    scrdef[iVar4][0x20].stq[0] = scrdef[iVar4][0x20].stq[0] - 1.0;
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  pSVar1 = (SCRDEF *)scrdef[0x18];
  iVar4 = 0x20;
  do {
    iVar4 = iVar4 + -1;
    fVar7 = ((SCRDEF *)pSVar1->stq)->stq[1];
    (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] =
         (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] + 1.0;
    ((SCRDEF *)pSVar1->stq)->stq[1] = fVar7 - 1.0;
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar4);
  fVar7 = SgSqrtf(152576.0);
  fVar11 = 1.0 / fVar7;
  if (eff_deform.init != 0) {
    iVar4 = 0;
    do {
      iVar5 = 0;
      iVar6 = iVar4 + 1;
      do {
        fVar9 = (float)iVar5 * 20.0 - 320.0;
        fVar10 = (float)iVar4 * DAT_00355270 - 224.0;
        pDVar2 = dw[iVar4] + iVar5;
        fVar8 = SgSqrtf(fVar9 * fVar9 + fVar10 * fVar10);
        pDVar2->lll = fVar8;
        if ((wix == (unaff_s8_lo / 2) % 0x21) && (wiy == (unaff_s0_lo / 2) % 0x21)) {
          pDVar2->rrr = 0.0;
        }
        else {
          fVar8 = SgAtan2f(fVar9,fVar10);
          pDVar2->rrr = fVar8;
        }
        iVar5 = iVar5 + 1;
        fVar8 = pDVar2->lll * DAT_00355274;
        pDVar2->mm2 = (fVar7 - pDVar2->lll) * fVar11;
        pDVar2->mm1 = fVar8 * 12.0 * fVar11;
        fVar8 = SgSinf(pDVar2->rrr);
        pDVar2->sss = fVar8;
        fVar8 = SgCosf(pDVar2->rrr);
        pDVar2->ccc = fVar8;
      } while (iVar5 < 0x21);
      iVar4 = iVar6;
    } while (iVar6 < 0x19);
    eff_deform.init = 0;
  }
  fVar11 = 1.0;
  fVar7 = r_233;
  iVar4 = 0;
  do {
    iVar6 = iVar4 + 1;
    iVar5 = 0;
    do {
                    /* inlined from effect.h */
      auVar13 = _vrnext(in_vuR);
      auVar13 = _vsubbc(auVar13,in_vf0);
      auVar13 = _qmfc2(SUB164(auVar13,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      fVar10 = SUB164(auVar13,0) + fVar11;
      pDVar2 = dw[iVar4] + iVar5;
      fVar12 = pDVar2->lll;
      fVar8 = SgSinf(pDVar2->mm1 - fVar7);
      fVar9 = SgSinf((fVar7 + pDVar2->rrr) * 18.0);
      iVar3 = iVar5 + 1;
      fVar10 = fVar8 * rate * 0.25 * pDVar2->mm2 * fVar9 * fVar10;
      scrdef[iVar4][iVar5].vtw[0] = (pDVar2->sss * fVar12 - pDVar2->ccc * fVar10) + 2048.0;
      fVar9 = pDVar2->sss;
      fVar8 = pDVar2->ccc;
      scrdef[iVar4][iVar5].vtw[3] = 0.0;
      scrdef[iVar4][iVar5].vtw[2] = 0.0;
      scrdef[iVar4][iVar5].vtw[1] = (fVar8 * fVar12 - fVar9 * fVar10) * 0.5 + 2048.0;
      iVar5 = iVar3;
    } while (iVar3 < 0x21);
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  add_234 = DAT_00355278;
  if ((stop_effects == 0) && (r_233 = r_233 + DAT_00355278, DAT_0035527c < r_233)) {
    r_233 = r_233 - DAT_0035527c;
  }
  MakeScrDeformPacket(0x20,0x18,0x2000000228029a40,scrdef,local_ec);
  eff_deform.type = (byte)local_f0;
  eff_deform.pass = 1;
  return;
}

void SetDeform5(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	int pnumw;
	int vnumw;
	int wix;
	int pnumh;
	int wiy;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float lm;
	float fx;
	float fy;
	float fz;
	SCRDEF scrdef[25][33];
	SCRDEF *pscr;
	float xx;
	float yy;
	DEFWORK *pdef;
	float r;
	
  SCRDEF *pSVar1;
  int unaff_s0_lo;
  DEFWORK *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_s7_lo;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined4 in_vuR;
  SCRDEF scrdef [25] [33];
  int local_e0;
  uint local_dc;
  int wix;
  int wiy;
  
  local_dc = (int)(char)alp & 0xff;
  LocalCopyLtoLDraw((int)((sys_wrk.count * 0x23 << 0x26) >> 0x20),0x1a40);
  fVar7 = GetYOffsetf();
  iVar4 = 0;
  local_e0 = type;
  do {
    fVar8 = 0.0;
    iVar3 = 0;
    iVar6 = iVar4 + 1;
    do {
      pSVar1 = scrdef[iVar4] + iVar3;
      iVar3 = iVar3 + 1;
      pSVar1->stq[0] = fVar8;
      pSVar1->stq[1] = fVar7;
      fVar8 = fVar8 + 20.0;
    } while (iVar3 < 0x21);
    scrdef[iVar4][0].stq[0] = scrdef[iVar4][0].stq[0] + 1.0;
    scrdef[iVar4][0x20].stq[0] = scrdef[iVar4][0x20].stq[0] - 1.0;
    fVar7 = fVar7 + DAT_00355280;
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  pSVar1 = (SCRDEF *)scrdef[0x18];
  iVar4 = 0x20;
  do {
    iVar4 = iVar4 + -1;
    fVar7 = ((SCRDEF *)pSVar1->stq)->stq[1];
    (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] =
         (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] + 1.0;
    ((SCRDEF *)pSVar1->stq)->stq[1] = fVar7 - 1.0;
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar4);
  fVar12 = rate * 0.25;
  fVar7 = SgSqrtf(152576.0);
  fVar8 = 1.0 / fVar7;
  if (eff_deform.init != 0) {
    iVar4 = 0;
    do {
      iVar3 = 0;
      iVar6 = iVar4 + 1;
      do {
        fVar10 = (float)iVar3 * 20.0 - 320.0;
        fVar11 = (float)iVar4 * DAT_00355284 - 224.0;
        pDVar2 = dw[iVar4] + iVar3;
        fVar9 = SgSqrtf(fVar10 * fVar10 + fVar11 * fVar11);
        pDVar2->lll = fVar9;
        if ((wix == (unaff_s7_lo / 2) % 0x21) && (wiy == (unaff_s0_lo / 2) % 0x21)) {
          pDVar2->rrr = 0.0;
        }
        else {
          fVar9 = SgAtan2f(fVar10,fVar11);
          pDVar2->rrr = fVar9;
        }
        iVar3 = iVar3 + 1;
        fVar9 = pDVar2->lll * DAT_00355288;
        pDVar2->mm2 = (fVar7 - pDVar2->lll) * fVar8;
        pDVar2->mm1 = (fVar9 + fVar9) * fVar8;
        fVar9 = SgSinf(pDVar2->rrr);
        pDVar2->sss = fVar9;
        fVar9 = SgCosf(pDVar2->rrr);
        pDVar2->ccc = fVar9;
      } while (iVar3 < 0x21);
      iVar4 = iVar6;
    } while (iVar6 < 0x19);
    eff_deform.init = 0;
  }
  fVar7 = r_238;
  iVar4 = 0;
  do {
    iVar6 = iVar4 + 1;
    iVar3 = 0;
    do {
      pDVar2 = dw[iVar4] + iVar3;
                    /* inlined from effect.h */
      auVar13 = _vrnext(in_vuR);
      auVar13 = _vsubbc(auVar13,in_vf0);
      auVar13 = _qmfc2(SUB164(auVar13,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      fVar11 = pDVar2->lll;
      fVar10 = SUB164(auVar13,0) + 1.0;
      fVar8 = SgSinf(pDVar2->mm1 - fVar7);
      fVar9 = SgSinf((fVar7 + pDVar2->rrr) * 18.0);
      iVar5 = iVar3 + 1;
      fVar10 = fVar8 * fVar12 * pDVar2->mm2 * fVar9 * fVar10;
      scrdef[iVar4][iVar3].vtw[0] = (pDVar2->sss * fVar11 - pDVar2->ccc * fVar10) + 2048.0;
      fVar9 = pDVar2->sss;
      fVar8 = pDVar2->ccc;
      scrdef[iVar4][iVar3].vtw[3] = 0.0;
      scrdef[iVar4][iVar3].vtw[2] = 0.0;
      scrdef[iVar4][iVar3].vtw[1] = (fVar8 * fVar11 - fVar9 * fVar10) * 0.5 + 2048.0;
      iVar3 = iVar5;
    } while (iVar5 < 0x21);
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  add_239 = DAT_0035528c;
  if ((stop_effects == 0) && (r_238 = r_238 + DAT_0035528c, DAT_00355290 < r_238)) {
    r_238 = r_238 - DAT_00355290;
  }
  MakeScrDeformPacket(0x20,0x18,0x2000000228029a40,scrdef,local_dc);
  eff_deform.type = (byte)local_e0;
  eff_deform.pass = 1;
  return;
}

void SetDeform6(int type, float rate, u_char alp) {
	static float r = 0.f;
	static float add = 6.f;
	int i;
	int j;
	int vnumw;
	int wix;
	int wiy;
	float wfw;
	float wfh;
	float f;
	float lw;
	float fw;
	float lm;
	float fx;
	float fy;
	float fz;
	float yoff;
	SCRDEF scrdef[25][33];
	SCRDEF *pscr;
	DEFWORK *pdef;
	float r;
	
  SCRDEF *pSVar1;
  DEFWORK *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long unaff_s7;
  long unaff_s8;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined4 in_vuR;
  SCRDEF scrdef [25] [33];
  int local_e0;
  uint local_dc;
  
  local_dc = (int)(char)alp & 0xff;
  LocalCopyLtoLDraw((int)((sys_wrk.count * 0x23 << 0x26) >> 0x20),0x1a40);
  fVar7 = GetYOffsetf();
  iVar4 = 0;
  local_e0 = type;
  do {
    iVar6 = iVar4 + 1;
    iVar5 = 0;
    do {
      iVar3 = iVar5 + 1;
      scrdef[iVar4][iVar5].stq[0] = (float)(iVar5 * 0x280) * 0.03125;
      scrdef[iVar4][iVar5].stq[1] = (float)(iVar4 * 0xe0) / 24.0 + fVar7;
      iVar5 = iVar3;
    } while (iVar3 < 0x21);
    scrdef[iVar4][0].stq[0] = scrdef[iVar4][0].stq[0] + 1.0;
    scrdef[iVar4][0x20].stq[0] = scrdef[iVar4][0x20].stq[0] - 1.0;
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  pSVar1 = (SCRDEF *)scrdef[0x18];
  iVar4 = 0x20;
  do {
    iVar4 = iVar4 + -1;
    fVar7 = ((SCRDEF *)pSVar1->stq)->stq[1];
    (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] =
         (*(SCRDEF (*) [33])(pSVar1 + -0x318))[0].stq[1] + 1.0;
    ((SCRDEF *)pSVar1->stq)->stq[1] = fVar7 - 1.0;
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar4);
  fVar12 = rate * 0.25;
  fVar7 = SgSqrtf(152576.0);
  iVar4 = 0;
  if (eff_deform.init != 0) {
    do {
      iVar5 = 0;
      iVar6 = iVar4 + 1;
      fVar11 = (float)iVar4;
      do {
        fVar9 = (float)iVar5 * 20.0 - 320.0;
        fVar10 = fVar11 * DAT_00355294 - 224.0;
        pDVar2 = dw[iVar4] + iVar5;
        fVar8 = SgSqrtf(fVar9 * fVar9 + fVar10 * fVar10);
        pDVar2->lll = fVar8;
        if ((unaff_s7 == 0x10) && (unaff_s8 == 0xc)) {
          pDVar2->rrr = 0.0;
        }
        else {
          fVar8 = SgAtan2f(fVar9,fVar10);
          pDVar2->rrr = fVar8;
        }
        iVar5 = iVar5 + 1;
        fVar8 = pDVar2->lll * DAT_00355298;
        pDVar2->mm2 = (fVar7 - pDVar2->lll) * (1.0 / fVar7);
        pDVar2->mm1 = (fVar8 + fVar8) * (1.0 / fVar7);
        fVar8 = SgSinf(pDVar2->rrr);
        pDVar2->sss = fVar8;
        fVar8 = SgCosf(pDVar2->rrr);
        pDVar2->ccc = fVar8;
      } while (iVar5 < 0x21);
      iVar4 = iVar6;
    } while (iVar6 < 0x19);
    eff_deform.init = 0;
  }
  fVar7 = r_243;
  iVar4 = 0;
  do {
    iVar6 = iVar4 + 1;
    iVar5 = 0;
    do {
      pDVar2 = dw[iVar4] + iVar5;
                    /* inlined from effect.h */
      auVar13 = _vrnext(in_vuR);
      auVar13 = _vsubbc(auVar13,in_vf0);
      auVar13 = _qmfc2(SUB164(auVar13,0));
                    /* end of inlined section */
      iVar3 = iVar5 + 1;
                    /* inlined from effect.h */
                    /* end of inlined section */
      fVar10 = pDVar2->lll;
      fVar9 = SUB164(auVar13,0) + 1.0;
      fVar11 = SgSinf(pDVar2->mm1 - fVar7);
      fVar8 = SgSinf((fVar7 + pDVar2->rrr) * 18.0);
      fVar9 = fVar11 * fVar12 * pDVar2->mm2 * fVar8 * fVar9;
      scrdef[iVar4][iVar5].vtw[0] = (pDVar2->sss * fVar10 - pDVar2->ccc * fVar9) + 2048.0;
      fVar8 = pDVar2->sss;
      fVar11 = pDVar2->ccc;
      scrdef[iVar4][iVar5].vtw[3] = 0.0;
      scrdef[iVar4][iVar5].vtw[2] = 0.0;
      scrdef[iVar4][iVar5].vtw[1] = (fVar11 * fVar10 + fVar8 * fVar9) * 0.5 + 2048.0;
      iVar5 = iVar3;
    } while (iVar3 < 0x21);
    iVar4 = iVar6;
  } while (iVar6 < 0x19);
  add_244 = DAT_0035529c;
  if ((stop_effects == 0) && (r_243 = r_243 + DAT_0035529c, DAT_003552a0 < r_243)) {
    r_243 = r_243 - DAT_003552a0;
  }
  MakeScrDeformPacket(0x20,0x18,0x2000000228029a40,scrdef,local_dc);
  eff_deform.type = (byte)local_e0;
  eff_deform.pass = 1;
  return;
}

void SubContrast2(u_char col, u_char alp) {
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar2 = &sd;
  puVar1 = &DAT_0034aa40;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    pSVar2->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar2 + 8) = uVar3;
    *(undefined8 *)((int)pSVar2 + 0x10) = uVar4;
    *(undefined8 *)((int)pSVar2 + 0x18) = uVar5;
    puVar1 = puVar1 + 4;
    pSVar2 = (SPRITE_DATA *)((int)pSVar2 + 0x20);
  } while (puVar1 != &DAT_0034aaa0);
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | (sys_wrk.count & 1) * 0x8c0);
  de.alpha = DAT_0034aaa8;
  de.zbuf = DAT_0034aab0;
  de.tex1 = DAT_0034aaa0;
  de.test = DAT_0034aab8;
  de.clamp = DAT_0034aac0;
  de.prim = DAT_0034aac8;
  sd.pos_x = DAT_003552a4;
  sd.pos_y = DAT_003552a8;
  sd.pos_z = 0xfffffdf;
  sd.size_w = 640.0;
  sd.size_h = 448.0;
  sd.r = col;
  sd.g = col;
  sd.b = col;
  sd.alpha = alp;
  SetTexDirectS2(0,&sd,&de,1);
  return;
}

void SetContrast2(EFFECT_CONT *ec) {
  SubContrast2((ec->dat).uc8[2],(ec->dat).uc8[3]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SubContrast3(u_char col, u_char alp) {
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar2 = &sd;
  puVar1 = &DAT_0034aa40;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    pSVar2->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar2 + 8) = uVar3;
    *(undefined8 *)((int)pSVar2 + 0x10) = uVar4;
    *(undefined8 *)((int)pSVar2 + 0x18) = uVar5;
    puVar1 = puVar1 + 4;
    pSVar2 = (SPRITE_DATA *)((int)pSVar2 + 0x20);
  } while (puVar1 != &DAT_0034aaa0);
  de.tex1 = DAT_0034aad0;
  de.alpha = DAT_0034aad8;
  de.zbuf = DAT_0034aae0;
  de.test = DAT_0034aae8;
  de.clamp = DAT_0034aaf0;
  de.prim = DAT_0034aaf8;
  sd.r = col;
  sd.g = col;
  sd.b = col;
  sd.alpha = alp;
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000);
  sd.pos_x = DAT_003552ac;
  sd.pos_y = DAT_003552b0;
  sd.pos_z = 0xffffcdf;
  sd.size_w = 640.0;
  sd.size_h = 448.0;
  SetTexDirectS2(800,&sd,&de,1);
  sd.pos_z = 0xffffcef;
  SetTexDirectS2(0x310,&sd,&de,1);
  return;
}

void SetContrast3(EFFECT_CONT *ec) {
  SubContrast3((ec->dat).uc8[2],(ec->dat).uc8[3]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SubNega(u_char r, u_char g, u_char b, u_char alp, u_char alp2) {
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar2 = &sd;
  puVar1 = &DAT_0034aa40;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    pSVar2->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar2 + 8) = uVar3;
    *(undefined8 *)((int)pSVar2 + 0x10) = uVar4;
    *(undefined8 *)((int)pSVar2 + 0x18) = uVar5;
    puVar1 = puVar1 + 4;
    pSVar2 = (SPRITE_DATA *)((int)pSVar2 + 0x20);
  } while (puVar1 != &DAT_0034aaa0);
  de.tex1 = DAT_0034aad0;
  de.alpha = DAT_0034aad8;
  de.zbuf = DAT_0034aae0;
  de.test = DAT_0034aae8;
  de.clamp = DAT_0034aaf0;
  de.prim = DAT_0034aaf8;
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000);
  sd.pos_x = DAT_003552b4;
  sd.pos_y = DAT_003552b8;
  sd.pos_z = 0xffffcdf;
  sd.size_w = 640.0;
  sd.size_h = 448.0;
  sd.r = r;
  sd.g = g;
  sd.b = b;
  sd.alpha = alp;
  SetTexDirectS2(800,&sd,&de,1);
  sd.b = 0x80;
  sd.r = 0x80;
  sd.g = 0x80;
  if ((int)((uint)alp2 << 0x18) < 0) {
    sd.alpha = '\0';
  }
  else {
    sd.alpha = 0x80 - alp2;
  }
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | 0x1a40);
  de.alpha = 0x44;
  de.prim = 0x50ab400000008001;
  sd.pos_z = 0xffffcef;
  SetTexDirectS2(0x310,&sd,&de,1);
  return;
}

void SetNega(EFFECT_CONT *ec) {
	u_char col;
	u_char alp;
	u_char alp2;
	
  uint uVar1;
  byte r;
  uint uVar2;
  byte alp;
  byte alp2;
  
  if (((ec->dat).uc8[1] & 4) == 0) {
    r = (ec->dat).uc8[2];
                    /* WARNING: Load size is inaccurate */
    alp2 = *ec->pnt[0];
    alp = (ec->dat).uc8[3];
  }
  else {
    uVar2 = ec->flow;
    r = (ec->dat).uc8[2];
    alp = (ec->dat).uc8[3];
    if (uVar2 == 1) {
      uVar2 = ec->cnt;
      alp2 = 0x80;
      ec->cnt = uVar2 + 1;
      if (ec->keep <= uVar2) {
        uVar2 = 3;
        ec->cnt = 0;
        if (ec->out != 0) {
          uVar2 = 2;
        }
        ec->flow = uVar2;
      }
    }
    else if (uVar2 == 0) {
      uVar2 = ec->cnt;
      uVar1 = ec->in;
      if (uVar1 == 0) {
        trap(7);
      }
      ec->cnt = uVar2 + 1;
      alp2 = (byte)((int)(uVar2 << 7) / (int)uVar1);
      if (uVar1 <= uVar2) {
        ec->cnt = 0;
        if (ec->keep == 0) {
          uVar2 = 3;
          if (ec->out != 0) {
            uVar2 = 2;
          }
        }
        else {
          uVar2 = 1;
        }
        ec->flow = uVar2;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = ec->out;
      uVar1 = ec->cnt;
      if (uVar2 == 0) {
        trap(7);
      }
      ec->cnt = uVar1 + 1;
      alp2 = (byte)((int)((uVar2 - uVar1) * 0x80) / (int)uVar2);
      if (uVar2 <= uVar1) {
        ec->cnt = 0;
        ec->flow = 3;
      }
    }
    else {
      alp2 = 0;
      if (uVar2 == 3) {
        ResetEffects(ec);
        alp2 = 0;
      }
    }
  }
  SubNega(r,r,r,alp,alp2);
  if (((ec->dat).uc8[1] & 1) == 0) {
    return;
  }
  ResetEffects(ec);
  return;
}

void* CallNega2(int in, int keep, int out) {
	static u_char alp = 128;
	
  void *pvVar1;
  
  pvVar1 = SetEffects(0xc,4);
  return pvVar1;
}

void* CallNega(int time) {
  void *pvVar1;
  
  pvVar1 = CallNega2(0,time,0);
  return pvVar1;
}

void SetOverRap(EFFECT_CONT *ec) {
	static float cx = 0.f;
	static float cy = 0.f;
	static float cz = 0.f;
	static float alp = 0.f;
	float x;
	float y;
	float z;
	float fn;
	int fl;
	int ret;
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  bool bVar1;
  undefined8 *puVar2;
  SPRITE_DATA *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar3 = &sd;
  iVar8 = (int)(cx_273 - camera.p.x);
  overlap_passflg[0] = 1;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  bVar1 = false;
  if ((float)iVar8 <= 128.0) {
    iVar8 = (int)(cy_274 - camera.p.y);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if ((float)iVar8 <= 128.0) {
      iVar8 = (int)(cz_275 - camera.p.z);
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if ((float)iVar8 <= 128.0) goto LAB_0012c87c;
    }
  }
  bVar1 = true;
LAB_0012c87c:
  cx_273 = camera.p.x;
  cy_274 = camera.p.y;
  cz_275 = camera.p.z;
  if (((bVar1) && (alp_276 <= 0.0)) || (overlap_passflg[1] != 1)) {
    LocalCopyLtoB2(1,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    alp_276 = 128.0;
  }
  if (0.0 < alp_276) {
    LocalCopyBtoL(1,0x1a40);
    puVar2 = &DAT_0034ab00;
    do {
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      pSVar3->g_GsTex0 = *puVar2;
      *(undefined8 *)((int)pSVar3 + 8) = uVar4;
      *(undefined8 *)((int)pSVar3 + 0x10) = uVar5;
      *(undefined8 *)((int)pSVar3 + 0x18) = uVar6;
      puVar2 = puVar2 + 4;
      pSVar3 = (SPRITE_DATA *)((int)pSVar3 + 0x20);
    } while (puVar2 != &DAT_0034ab60);
    sd.alpha = (uchar)(int)alp_276;
    de.tex1 = 0x161;
    de.alpha = ((long)(int)alp_276 & 0xffU) << 0x20 | 100;
    de.zbuf = 0x10100008c;
    de.test = 0x3000d;
    de.prim = 0x50ab400000008001;
    de.clamp = 0;
    SetTexDirectS2(0x200,&sd,&de,0);
  }
  if ((ec->dat).uc8[2] == 0) {
    fVar7 = 8.0;
  }
  else {
    fVar7 = 128.0 / (float)(uint)(ec->dat).uc8[2];
  }
  alp_276 = alp_276 - fVar7;
  if (alp_276 <= 0.0) {
    alp_276 = 0.0;
  }
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void SetForcusDepth(EFFECT_CONT *ec) {
	int i;
	int zi[2];
	float bai[2];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR vt;
	sceVu0FVECTOR vtw;
	sceVu0FVECTOR vtww;
	sceVu0IVECTOR ivec;
	
  uint uVar1;
  ulong *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int zi [2];
  float bai [2];
  float wlm [4] [4];
  float slm [4] [4];
  float vt [4];
  float vtw [4];
  float vtww [4];
  int ivec [4];
  EFFECT_CONT *local_c0;
  Vector4 *local_bc;
  
  piVar4 = zi;
  iVar5 = 1;
  uVar1 = (int)bai + 7U & 7;
  puVar2 = (ulong *)(((int)bai + 7U) - uVar1);
  local_c0 = ec;
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003564b0 >> (7 - uVar1) * 8;
  bai = DAT_003564b0;
  memset(vt,0,0x10);
  fVar7 = 1.0;
  local_bc = (Vector4 *)vtww;
  vt[3] = 1.0;
  pfVar3 = bai;
  do {
    iVar5 = iVar5 + -1;
    vtww[0] = (camera.i.x - camera.p.x) * *pfVar3 + camera.p.x;
    vtww[1] = (camera.i.y - camera.p.y) * *pfVar3 + camera.p.y;
    fVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    vtww[2] = (camera.i.z - camera.p.z) * fVar6 + camera.p.z;
    vtww[3] = fVar7;
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    wlm[2][2] = 25.0;
    wlm[1][1] = 25.0;
    wlm[0][0] = 25.0;
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_bc);
    sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
    sceVu0RotTransPers(ivec,(Matrix4x4 *)slm,vt,0);
    *piVar4 = ivec[2];
    piVar4 = piVar4 + 1;
  } while (-1 < iVar5);
  fVar7 = 0.0;
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  SetScreenDSlide(0x1a40,1,0x40,fVar7,1.0,zi[1]);
  SetScreenDSlide(0x1a40,1,0x28,fVar7,1.0,zi[0]);
  if (((local_c0->dat).uc8[1] & 1) != 0) {
    ResetEffects(local_c0);
  }
  return;
}

void SetForcusDepth2(EFFECT_CONT *ec) {
	int zi[4];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR vt;
	sceVu0FVECTOR vtw;
	sceVu0FVECTOR vtww;
	float bai[4];
	static float ff = 0.f;
	sceVu0IVECTOR ivec;
	
  byte bVar1;
  uint uVar2;
  ulong *puVar3;
  int zi [4];
  float wlm [4] [4];
  float slm [4] [4];
  float vt [4];
  float vtw [4];
  float vtww [4];
  float bai [4];
  int ivec [4];
  
  memset(vt,0,0x10);
  bVar1 = (ec->dat).uc8[1];
  vt[3] = 1.0;
  uVar2 = (int)bai + 7U & 7;
  puVar3 = (ulong *)(((int)bai + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ab60 >> (7 - uVar2) * 8;
  bai._0_8_ = DAT_0034ab60;
  uVar2 = (int)bai + 0xfU & 7;
  puVar3 = (ulong *)(((int)bai + 0xfU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ab68 >> (7 - uVar2) * 8;
  bai._8_8_ = DAT_0034ab68;
  if ((bVar1 & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void MakeRDither3() {
	u_char pat[16384];
	u_int pal[256];
	int i;
	float r;
	float r;
	static sceGsLoadImage gs_limage1;
	static sceGsLoadImage gs_limage2;
	
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined in_vf0 [16];
  undefined auVar6 [16];
  undefined4 in_vuR;
  uchar pat [16384];
  uint pal [256];
  
  iVar4 = 0;
  do {
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    puVar2 = pat + iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = (uchar)(int)(SUB164(auVar6,0) * 64.0);
  } while (iVar4 < 0x4000);
  iVar4 = 0;
  puVar5 = pal;
  do {
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar3 = iVar4 << 0x18;
    iVar4 = iVar4 + 1;
    uVar1 = (int)(SUB164(auVar6,0) * 128.0) & 0xff;
    *puVar5 = uVar3 | uVar1 | uVar1 << 8 | uVar1 << 0x10;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x100);
  sceGsSetDefLoadImage(0x36a380,0x37fc,2,0x13,0,0,0x80,0x80);
  sceGsSetDefLoadImage(0x36a3e0,0x383c,1,0,0,0,0x10,0x20);
  FlushCache(0);
  sceGsExecLoadImage(0x36a380,pat);
  sceGsExecLoadImage(0x36a3e0,pal);
  sceGsSyncPath(0,0);
  return;
}

void SubDither3(int type, float alp, float spd, u_char alpmx, u_char colmx) {
	static sceVu0FVECTOR old_cam_i = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static float cnf = 0.f;
	static float cx = 0.f;
	static float cy = 0.f;
	static int fl = 1;
	float tx;
	float ty;
	float otx;
	float oty;
	float mvx;
	float mvy;
	SPRITE_DATA sd;
	SPRITE_DATA sd2;
	DRAW_ENV de;
	DRAW_ENV de2;
	u_char pat[16384];
	u_int pal[256];
	int i;
	static u_char oalp = 0;
	static u_char ocol = 0;
	static int numf = 0;
	float r;
	float r;
	static sceGsLoadImage gs_limage1;
	static sceGsLoadImage gs_limage2;
	
  bool bVar1;
  float fVar2;
  undefined8 *puVar3;
  sceGsTex0 *psVar4;
  SPRITE_DATA *pSVar5;
  uint uVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  sceGsTex0 sVar12;
  undefined8 uVar13;
  sceGsTex0 sVar14;
  undefined8 uVar15;
  sceGsTex0 sVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined in_vf0 [16];
  undefined auVar21 [16];
  undefined4 in_vuR;
  SPRITE_DATA sd;
  SPRITE_DATA sd2;
  DRAW_ENV de;
  DRAW_ENV de2;
  uchar pat [16384];
  uint pal [256];
  float tx;
  float ty;
  float otx;
  float oty;
  uint local_100;
  uint local_fc;
  SPRITE_DATA *local_f8;
  
  iVar9 = eff_dith_off;
  pSVar5 = &sd;
  local_100 = (int)(char)alpmx & 0xff;
  local_fc = (int)(char)colmx & 0xff;
  local_f8 = &sd2;
  puVar3 = &DAT_0034ab70;
  do {
    uVar11 = puVar3[1];
    uVar13 = puVar3[2];
    uVar15 = puVar3[3];
    pSVar5->g_GsTex0 = *puVar3;
    *(undefined8 *)((int)pSVar5 + 8) = uVar11;
    *(undefined8 *)((int)pSVar5 + 0x10) = uVar13;
    *(undefined8 *)((int)pSVar5 + 0x18) = uVar15;
    puVar3 = puVar3 + 4;
    pSVar5 = (SPRITE_DATA *)((int)pSVar5 + 0x20);
  } while (puVar3 != &DAT_0034abd0);
  psVar4 = (sceGsTex0 *)&DAT_0034abd0;
  pSVar5 = local_f8;
  do {
    sVar12 = psVar4[1];
    sVar14 = psVar4[2];
    sVar16 = psVar4[3];
    pSVar5->g_GsTex0 = *psVar4;
    *(sceGsTex0 *)&pSVar5->g_nTexSizeW = sVar12;
    *(sceGsTex0 *)&pSVar5->g_bMipmapLv = sVar14;
    pSVar5->g_GsMiptbp1 = (ulong)sVar16;
    psVar4 = psVar4 + 4;
    pSVar5 = (SPRITE_DATA *)&pSVar5->g_GsMiptbp2;
  } while (psVar4 != (sceGsTex0 *)&DAT_0034ac30);
  de2.tex1 = DAT_0034ac60;
  de2.alpha = DAT_0034ac68;
  de2.zbuf = DAT_0034ac70;
  de2.test = DAT_0034ac78;
  de2.clamp = DAT_0034ac80;
  de2.prim = DAT_0034ac88;
  if (iVar9 != 0) {
    return;
  }
  if (plyr_wrk.mode == 1) {
    bVar1 = fl == 0;
    fl = 1;
    if (bVar1) {
      old_cam_i.x = (float)camera.i._0_8_;
      old_cam_i.y = (float)((ulong)camera.i._0_8_ >> 0x20);
                    /* inlined from ../../graphics/graph3d/libsg.h */
      old_cam_i.z = camera.i.z;
      old_cam_i.w = camera.i.w;
                    /* end of inlined section */
      fl = 1;
    }
  }
  else {
    if ((fl == 1) || (iVar9 = CamChangeCheck(), iVar9 != 0)) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      old_cam_i.x = (float)camera.i._0_8_;
      old_cam_i.y = (float)((ulong)camera.i._0_8_ >> 0x20);
      old_cam_i.z = camera.i.z;
      old_cam_i.w = camera.i.w;
    }
                    /* end of inlined section */
    fl = 0;
  }
  switch(type) {
  case 1:
    de2.alpha = 0x44;
    break;
  case 2:
    de2.alpha = 0x48;
    break;
  case 3:
    de2.alpha = 0x41;
    break;
  case 4:
    sd2.b = 0x80;
    de2.alpha = 0x41;
    sd2.r = 0x80;
    sd2.g = '\0';
    break;
  case 5:
    sd2.g = 0x80;
    de2.alpha = 0x41;
    sd2.r = 0x80;
    sd2.b = '\0';
    break;
  case 6:
    de2.alpha = 0x49;
    break;
  case 7:
    de2.alpha = 0x42;
  }
  uVar6 = (uint)oalp;
  if (uVar6 == local_100) {
    if ((ocol == local_fc) && (iVar9 = 0, numf_299 != 0)) {
      numf_299 = 0;
      do {
                    /* inlined from effect.h */
        auVar21 = _vrnext(in_vuR);
        auVar21 = _vsubbc(auVar21,in_vf0);
        auVar21 = _qmfc2(SUB164(auVar21,0));
                    /* end of inlined section */
        puVar7 = pat + iVar9;
        iVar9 = iVar9 + 1;
        *puVar7 = (uchar)(int)((float)local_100 * SUB164(auVar21,0));
      } while (iVar9 < 0x4000);
      iVar9 = 0;
      puVar10 = pal;
      do {
                    /* inlined from effect.h */
        auVar21 = _vrnext(in_vuR);
        auVar21 = _vsubbc(auVar21,in_vf0);
        auVar21 = _qmfc2(SUB164(auVar21,0));
                    /* end of inlined section */
        uVar8 = iVar9 << 0x18;
        iVar9 = iVar9 + 1;
        uVar6 = (int)((float)local_fc * SUB164(auVar21,0)) & 0xff;
        *puVar10 = uVar8 | uVar6 | uVar6 << 8 | uVar6 << 0x10;
        puVar10 = puVar10 + 1;
      } while (iVar9 < 0x100);
      sceGsSetDefLoadImage(0x36a440,0x37fc,2,0x13,0,0,0x80,0x80);
      sceGsSetDefLoadImage(0x36a4a0,0x383c,1,0,0,0,0x10,0x20);
      FlushCache(0);
      sceGsExecLoadImage(0x36a440,pat);
      sceGsExecLoadImage(0x36a4a0,pal);
      sceGsSyncPath(0,0);
      WaitFrameTop(0);
      uVar6 = (uint)oalp;
    }
    if (uVar6 == local_100) {
      if (ocol != local_fc) {
        numf_299 = 1;
      }
      goto LAB_0012d288;
    }
  }
  numf_299 = 1;
LAB_0012d288:
  oalp = (uchar)local_100;
  ocol = (uchar)local_fc;
  GetCamI2DPos(&camera.i.x,&tx,&ty);
  GetCamI2DPos(&old_cam_i.x,&otx,&oty);
  sceVu0CopyVector(&old_cam_i,&camera.i);
  iVar9 = isnan((double)tx);
  if ((((iVar9 == 0) && (iVar9 = isnan((double)ty), iVar9 == 0)) &&
      (iVar9 = isnan((double)otx), iVar9 == 0)) && (iVar9 = isnan((double)oty), iVar9 == 0)) {
    fVar17 = (tx - otx) * DAT_003552bc;
    fVar19 = (ty - oty) * DAT_003552c0;
  }
  else {
    fVar19 = 0.0;
    fVar17 = 0.0;
  }
  fVar2 = DAT_003552c4;
  if (stop_effects == 0) {
    cy = (cy + fVar19) - (float)((int)((cy + fVar19) * 0.0078125) << 7);
    for (cx = (cx + fVar17) - (float)((int)((cx + fVar17) * 0.0078125) << 7); 128.0 < cx;
        cx = cx - 128.0) {
    }
    for (; cx < 0.0; cx = cx + 128.0) {
    }
    for (; 128.0 < cy; cy = cy - 128.0) {
    }
    for (; cy < 0.0; cy = cy + 128.0) {
    }
  }
  fVar17 = 640.0;
  fVar19 = 512.0;
  fVar20 = 180.0;
  sd2.clamp_u = (int)((cx + 640.0) * 16.0) << 0x10 | (int)(cx * 16.0);
  sd2.clamp_v = (int)((cy + 512.0) * 16.0) << 0x10 | (int)(cy * 16.0);
  fVar18 = SgSinf((cnf * DAT_003552c4) / 180.0);
  sd2.alpha = (uchar)(int)((fVar18 + 1.0) * alp);
  SetTexDirectS2(-2,local_f8,&de2,0);
  sd2.clamp_u = (int)((cx + 704.0) * 16.0) << 0x10 | (int)((cx + 64.0) * 16.0);
  sd2.clamp_v = (int)((cy + fVar19) * 16.0) << 0x10 | (int)(cy * 16.0);
  fVar19 = SgSinf(((cnf + 120.0) * fVar2) / fVar20);
  sd2.alpha = (uchar)(int)((fVar19 + 1.0) * alp);
  SetTexDirectS2(-2,local_f8,&de2,0);
  sd2.clamp_u = (int)((cx + fVar17) * 16.0) << 0x10 | (int)(cx * 16.0);
  sd2.clamp_v = (int)((cy + 576.0) * 16.0) << 0x10 | (int)((cy + 64.0) * 16.0);
  fVar17 = SgSinf(((cnf + 240.0) * fVar2) / fVar20);
  sd2.alpha = (uchar)(int)((fVar17 + 1.0) * alp);
  SetTexDirectS2(-2,local_f8,&de2,0);
  if (stop_effects == 0) {
    cnf = cnf + spd;
  }
  return;
}

void SetDither3(EFFECT_CONT *ec) {
	u_char alpmx;
	u_char colmx;
	int type;
	float spd;
	float alp;
	
  byte bVar1;
  byte alpmx;
  byte colmx;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float spd;
  float fVar7;
  
  fVar7 = (ec->dat).fl32[2];
  bVar1 = (ec->dat).uc8[2];
  spd = (ec->dat).fl32[3];
  alpmx = (ec->dat).uc8[3];
  colmx = (ec->dat).uc8[4];
  fVar6 = fVar7;
  if (((ec->dat).uc8[1] & 4) != 0) {
    uVar4 = ec->flow;
    if (uVar4 == 1) {
      uVar4 = ec->cnt;
      ec->cnt = uVar4 + 1;
      if (ec->keep <= uVar4) {
        uVar4 = 3;
        ec->cnt = 0;
        if (ec->out != 0) {
          uVar4 = 2;
        }
        ec->flow = uVar4;
      }
    }
    else if (uVar4 == 0) {
      uVar4 = ec->cnt;
      if ((int)uVar4 < 0) {
        fVar5 = (float)(uVar4 & 1 | uVar4 >> 1);
        fVar5 = fVar5 + fVar5;
        uVar2 = ec->in;
      }
      else {
        fVar5 = (float)uVar4;
        uVar2 = ec->in;
      }
      if ((int)uVar2 < 0) {
        fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
        fVar6 = fVar6 + fVar6;
      }
      else {
        fVar6 = (float)uVar2;
      }
      fVar6 = (fVar7 * fVar5) / fVar6;
      ec->cnt = uVar4 + 1;
      if (uVar2 <= uVar4) {
        ec->cnt = 0;
        if (ec->keep == 0) {
          uVar4 = 3;
          if (ec->out != 0) {
            uVar4 = 2;
          }
        }
        else {
          uVar4 = 1;
        }
        ec->flow = uVar4;
      }
    }
    else {
      fVar6 = 0.0;
      if (uVar4 == 2) {
        uVar4 = ec->out;
        uVar2 = ec->cnt;
        uVar3 = uVar4 - uVar2;
        if ((int)uVar3 < 0) {
          fVar5 = (float)(uVar3 & 1 | uVar3 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar3;
        }
        if ((int)uVar4 < 0) {
          fVar6 = (float)(uVar4 & 1 | uVar4 >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)uVar4;
        }
        fVar6 = (fVar7 * fVar5) / fVar6;
        ec->cnt = uVar2 + 1;
        if (uVar4 <= uVar2) {
          ec->cnt = 0;
          ec->flow = 3;
          ResetEffects(ec);
        }
      }
    }
  }
  if (bVar1 < 8) {
    SubDither3((uint)bVar1,fVar6,spd,alpmx,colmx);
    bVar1 = (ec->dat).uc8[1];
  }
  else {
    SubDither4(fVar6,spd);
    bVar1 = (ec->dat).uc8[1];
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  ResetEffects(ec);
  return;
}

void SubDither4(float alp, float spd) {
	static sceVu0FVECTOR old_cam_i = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static float cnf = 0.f;
	static float cx = 0.f;
	static float cy = -9908638.f;
	static int fl = 1;
	float tx;
	float ty;
	float otx;
	float oty;
	float mvx;
	float mvy;
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  undefined8 *puVar1;
  int iVar2;
  SPRITE_DATA *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  SPRITE_DATA sd;
  DRAW_ENV de;
  float tx;
  float ty;
  float otx;
  float oty;
  
  pSVar3 = &sd;
  puVar1 = &DAT_0034acb0;
  do {
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    pSVar3->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar3 + 8) = uVar4;
    *(undefined8 *)((int)pSVar3 + 0x10) = uVar5;
    *(undefined8 *)((int)pSVar3 + 0x18) = uVar6;
    puVar1 = puVar1 + 4;
    pSVar3 = (SPRITE_DATA *)((int)pSVar3 + 0x20);
  } while (puVar1 != &DAT_0034ad10);
  fVar7 = cy - 1024.0;
  de.tex1 = DAT_0034ad10;
  de.alpha = DAT_0034ad18;
  de.zbuf = DAT_0034ad20;
  de.test = DAT_0034ad28;
  de.clamp = DAT_0034ad30;
  de.prim = DAT_0034ad38;
  if (fVar7 <= DAT_003552c8) {
    fVar7 = cy;
  }
  cy = fVar7;
  if (plyr_wrk.mode == 1) {
    if (fl == 0) {
      old_cam_i.x = (float)camera.i._0_8_;
      old_cam_i.y = (float)((ulong)camera.i._0_8_ >> 0x20);
                    /* inlined from ../../graphics/graph3d/libsg.h */
      old_cam_i.z = camera.i.z;
      old_cam_i.w = camera.i.w;
                    /* end of inlined section */
    }
    fl = 1;
  }
  else {
    if ((fl == 1) || (iVar2 = CamChangeCheck(), iVar2 != 0)) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      old_cam_i.x = (float)camera.i._0_8_;
      old_cam_i.y = (float)((ulong)camera.i._0_8_ >> 0x20);
      old_cam_i.z = camera.i.z;
      old_cam_i.w = camera.i.w;
    }
                    /* end of inlined section */
    fl = 0;
  }
  GetCamI2DPos(&camera.i.x,&tx,&ty);
  GetCamI2DPos(&old_cam_i.x,&otx,&oty);
  sceVu0CopyVector(&old_cam_i,&camera.i);
  iVar2 = isnan((double)tx);
  if ((((iVar2 == 0) && (iVar2 = isnan((double)ty), iVar2 == 0)) &&
      (iVar2 = isnan((double)otx), iVar2 == 0)) && (iVar2 = isnan((double)oty), iVar2 == 0)) {
    fVar7 = (tx - otx) * DAT_003552cc;
    fVar10 = (ty - oty) * DAT_003552d0;
  }
  else {
    fVar10 = 0.0;
    fVar7 = 0.0;
  }
  cx_310 = cx_310 + fVar7 + fVar7;
  if (128.0 < cx_310) {
    cx_310 = cx_310 - 128.0;
  }
  else if (cx_310 < 0.0) {
    cx_310 = cx_310 + 128.0;
  }
  cy = cy + fVar10 + fVar10;
  if (128.0 < cy) {
    cy = cy - 128.0;
  }
  else if (cy < 0.0) {
    cy = cy + 128.0;
  }
  fVar10 = 640.0;
  fVar9 = 512.0;
  sd.clamp_u = (int)((cx_310 + 640.0) * 16.0) << 0x10 | (int)(cx_310 * 16.0);
  sd.clamp_v = (int)((cy + 512.0) * 16.0) << 0x10 | (int)(cy * 16.0);
  fVar7 = DAT_003552d4;
  fVar8 = SgSinf((cnf_309 * DAT_003552d4) / 180.0);
  sd.alpha = (uchar)(int)((fVar8 + 1.0) * alp);
  SetTexDirectS2(-2,&sd,&de,0);
  sd.clamp_u = (int)((cx_310 + 704.0) * 16.0) << 0x10 | (int)((cx_310 + 64.0) * 16.0);
  sd.clamp_v = (int)((cy + fVar9) * 16.0) << 0x10 | (int)(cy * 16.0);
  fVar9 = SgSinf(((cnf_309 + 120.0) * fVar7) / 180.0);
  sd.alpha = (uchar)(int)((fVar9 + 1.0) * alp);
  SetTexDirectS2(-2,&sd,&de,0);
  sd.clamp_u = (int)((cx_310 + fVar10) * 16.0) << 0x10 | (int)(cx_310 * 16.0);
  sd.clamp_v = (int)((cy + 576.0) * 16.0) << 0x10 | (int)((cy + 64.0) * 16.0);
  fVar7 = SgSinf(((cnf_309 + 240.0) * fVar7) / 180.0);
  sd.alpha = (uchar)(int)((fVar7 + 1.0) * alp);
  SetTexDirectS2(-2,&sd,&de,0);
  if (stop_effects == 0) {
    cnf_309 = cnf_309 + spd;
  }
  return;
}

void SetDither4(EFFECT_CONT *ec) {
  SubDither4((ec->dat).fl32[2],(ec->dat).fl32[3]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SubFadeFrame(u_char alp, u_int pri) {
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  pSVar2 = &sd;
  puVar1 = &DAT_0034ad40;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    pSVar2->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar2 + 8) = uVar3;
    *(undefined8 *)((int)pSVar2 + 0x10) = uVar4;
    *(undefined8 *)((int)pSVar2 + 0x18) = uVar5;
    puVar1 = puVar1 + 4;
    pSVar2 = (SPRITE_DATA *)((int)pSVar2 + 0x20);
  } while (puVar1 != &DAT_0034ada0);
  sd.pos_z = 0xfffffff - pri;
  de.prim = DAT_0034adc8;
  sd.g_nTexSizeH = (uint)DAT_0026bfce;
  de.tex1 = DAT_0034ada0;
  de.alpha = DAT_0034ada8;
  de.zbuf = DAT_0034adb0;
  de.test = DAT_0034adb8;
  de.clamp = DAT_0034adc0;
  sd.g_GsTex0 = DAT_0026bfc0;
  sd.g_nTexSizeW = (uint)DAT_0026bfcc;
  sd.alpha = alp;
  SetTexDirectS2(pri,&sd,&de,0);
  return;
}

void SetFadeFrame(EFFECT_CONT *ec) {
  SubFadeFrame((ec->dat).uc8[2],(ec->dat).ui32[1]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void ChangeMAGATOKI2(int sw) {
  if (sw == 0) {
    magatoki_mode = 0;
    ChangeMonochrome(0);
    return;
  }
  magatoki_mode = 1;
  ChangeMonochrome(1);
  return;
}

void SetMAGATOKI2() {
	EFFECT_CONT *ecm;
	static u_char alpr = 57;
	
  EFFECT_CONT *pEVar1;
  
  if (change_efbank == 0) {
    pEVar1 = efcnt_cnt;
  }
  else {
    pEVar1 = efcnt;
  }
  if (magatoki_mode != 0) {
    ResetEffects(pEVar1 + 3);
    ResetEffects(pEVar1 + 4);
    ResetEffects(pEVar1 + 5);
    ResetEffects(pEVar1 + 6);
    ResetEffects(pEVar1 + 0xd);
    ResetEffects(pEVar1 + 0xf);
    ResetEffects(pEVar1 + 2);
    ResetEffects(pEVar1 + 9);
    if (plyr_wrk.mode != 1) {
      SetEffects(3,1);
      SetEffects(6,1);
      SetEffects(0xd,1);
      SetEffects(2,1);
      SetEffects(9,1);
      return;
    }
    SetEffects(6,1);
    SetEffects(0xd,1);
    SetEffects(2,1);
    SetEffects(9,1);
    return;
  }
  return;
}

void SetMAGATOKI(EFFECT_CONT *ec) {
	static int cnt1;
	u_char *flag;
	float per1;
	float mbalp;
	float mbscl;
	float mbrot;
	float mccol;
	float mcalp;
	float mdalp;
	float mdspd;
	float mdfrt;
	float mdfal;
	int sec1_1;
	int sec1_2;
	float balp[3];
	float bscl[3];
	float brot[3];
	float ccol[3];
	float calp[3];
	float dalp[3];
	float dspd[3];
	float dfrt[3];
	float dfal[3];
	
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float in_f21;
  float unaff_f20;
  float in_f23;
  float unaff_f22;
  float in_f25;
  float unaff_f24;
  float in_f27;
  float unaff_f26;
  float unaff_f28;
  float balp [3];
  float bscl [3];
  float brot [3];
  float ccol [3];
  float calp [3];
  float dalp [3];
  float dspd [3];
  float dfrt [3];
  float dfal [3];
  
  fVar22 = DAT_0034ae58;
  uVar21 = DAT_0034ae50;
  fVar20 = DAT_0034ae48;
  uVar19 = DAT_0034ae40;
  fVar18 = DAT_0034ae38;
  uVar17 = DAT_0034ae30;
  fVar16 = DAT_0034ae28;
  uVar15 = DAT_0034ae20;
  fVar14 = DAT_0034ae18;
  uVar13 = DAT_0034ae10;
  fVar12 = DAT_0034ae08;
  uVar11 = DAT_0034ae00;
  fVar10 = DAT_0034adf8;
  uVar9 = DAT_0034adf0;
  fVar8 = DAT_0034ade8;
  uVar7 = DAT_0034ade0;
  fVar25 = DAT_0034add8;
  uVar6 = DAT_0034add0;
  uVar3 = (int)balp + 7U & 7;
  puVar5 = (ulong *)(((int)balp + 7U) - uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034add0 >> (7 - uVar3) * 8;
  balp._0_8_ = DAT_0034add0;
  balp[2] = DAT_0034add8;
  uVar3 = (int)bscl + 7U & 7;
  puVar5 = (ulong *)(((int)bscl + 7U) - uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034ade0 >> (7 - uVar3) * 8;
  bscl._0_8_ = DAT_0034ade0;
  bscl[2] = DAT_0034ade8;
  uVar3 = (int)brot + 7U & 7;
  puVar5 = (ulong *)(((int)brot + 7U) - uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034adf0 >> (7 - uVar3) * 8;
  brot._0_8_ = DAT_0034adf0;
  brot[2] = DAT_0034adf8;
  uVar3 = (int)ccol + 7U & 7;
  puVar5 = (ulong *)(((int)ccol + 7U) - uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034ae00 >> (7 - uVar3) * 8;
  ccol._0_8_ = DAT_0034ae00;
  ccol[2] = DAT_0034ae08;
  uVar3 = (int)calp + 7U & 7;
  puVar5 = (ulong *)(((int)calp + 7U) - uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034ae10 >> (7 - uVar3) * 8;
  calp._0_8_ = DAT_0034ae10;
  calp[2] = DAT_0034ae18;
  uVar3 = ec->in;
  uVar1 = ec->out;
  pbVar2 = (byte *)ec->pnt[0];
  uVar23 = (int)dalp + 7U & 7;
  puVar5 = (ulong *)(((int)dalp + 7U) - uVar23);
  *puVar5 = *puVar5 & -1L << (uVar23 + 1) * 8 | DAT_0034ae20 >> (7 - uVar23) * 8;
  dalp._0_8_ = DAT_0034ae20;
  dalp[2] = DAT_0034ae28;
  uVar23 = ec->flow;
  uVar4 = (int)dspd + 7U & 7;
  puVar5 = (ulong *)(((int)dspd + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_0034ae30 >> (7 - uVar4) * 8;
  dspd._0_8_ = DAT_0034ae30;
  dspd[2] = DAT_0034ae38;
  uVar4 = (int)dfrt + 7U & 7;
  puVar5 = (ulong *)(((int)dfrt + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_0034ae40 >> (7 - uVar4) * 8;
  dfrt._0_8_ = DAT_0034ae40;
  dfrt[2] = DAT_0034ae48;
  uVar4 = (int)dfal + 7U & 7;
  puVar5 = (ulong *)(((int)dfal + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_0034ae50 >> (7 - uVar4) * 8;
  dfal._0_8_ = DAT_0034ae50;
  dfal[2] = DAT_0034ae58;
  if (0xc < uVar23) goto LAB_0012e910;
  balp[1] = (float)(DAT_0034add0 >> 0x20);
  bscl[1] = (float)(DAT_0034ade0 >> 0x20);
  brot[1] = (float)(DAT_0034adf0 >> 0x20);
  ccol[1] = (float)(DAT_0034ae00 >> 0x20);
  calp[1] = (float)(DAT_0034ae10 >> 0x20);
  dalp[1] = (float)(DAT_0034ae20 >> 0x20);
  dspd[1] = (float)(DAT_0034ae30 >> 0x20);
  dfrt[1] = (float)(DAT_0034ae40 >> 0x20);
  dfal[1] = (float)(DAT_0034ae50 >> 0x20);
  switch(uVar23) {
  case 0:
    cnt1_332 = 0;
    shibata_set_off = 1;
    ec->flow = 1;
  case 1:
    balp[0] = (float)uVar6;
    fVar25 = (float)cnt1_332;
    bscl[0] = (float)uVar7;
    brot[0] = (float)uVar9;
    cnt1_332 = cnt1_332 + 1;
    ccol[0] = (float)uVar11;
    fVar25 = fVar25 / (float)uVar3;
    calp[0] = (float)uVar13;
    dalp[0] = (float)uVar15;
    dspd[0] = (float)uVar17;
    dfrt[0] = (float)uVar19;
    dfal[0] = (float)uVar21;
    unaff_f28 = balp[0] + (balp[1] - balp[0]) * fVar25;
    in_f27 = bscl[0] + (bscl[1] - bscl[0]) * fVar25;
    unaff_f26 = brot[0] + (brot[1] - brot[0]) * fVar25;
    in_f25 = ccol[0] + (ccol[1] - ccol[0]) * fVar25;
    in_f23 = calp[0] + (calp[1] - calp[0]) * fVar25;
    unaff_f24 = dalp[0] + (dalp[1] - dalp[0]) * fVar25;
    unaff_f22 = dspd[0] + (dspd[1] - dspd[0]) * fVar25;
    in_f21 = dfrt[0] + (dfrt[1] - dfrt[0]) * fVar25;
    unaff_f20 = dfal[0] + (dfal[1] - dfal[0]) * fVar25;
    if (cnt1_332 < (int)uVar3) {
LAB_0012e90c:
      uVar23 = ec->flow;
    }
    else {
      uVar23 = 2;
      ec->flow = 2;
    }
    break;
  case 2:
    uVar23 = 2;
    if (*pbVar2 != 0) {
      uVar23 = 3;
    }
    ec->flow = uVar23;
    in_f21 = dfrt[1];
    unaff_f20 = dfal[1];
    in_f23 = calp[1];
    unaff_f22 = dspd[1];
    in_f25 = ccol[1];
    unaff_f24 = dalp[1];
    in_f27 = bscl[1];
    unaff_f26 = brot[1];
    unaff_f28 = balp[1];
    break;
  case 3:
    cnt1_332 = 0;
    ChangeMonochrome(1);
    ec->flow = 4;
  case 4:
    fVar25 = (float)cnt1_332;
    cnt1_332 = cnt1_332 + 1;
    fVar25 = fVar25 / (float)uVar1;
    unaff_f28 = balp[1] + (balp[2] - balp[1]) * fVar25;
    in_f27 = bscl[1] + (bscl[2] - bscl[1]) * fVar25;
    unaff_f26 = brot[1] + (brot[2] - brot[1]) * fVar25;
    in_f25 = ccol[1] + (ccol[2] - ccol[1]) * fVar25;
    in_f23 = calp[1] + (calp[2] - calp[1]) * fVar25;
    unaff_f24 = dalp[1] + (dalp[2] - dalp[1]) * fVar25;
    unaff_f22 = dspd[1] + (dspd[2] - dspd[1]) * fVar25;
    in_f21 = dfrt[1] + (dfrt[2] - dfrt[1]) * fVar25;
    unaff_f20 = dfal[1] + (dfal[2] - dfal[1]) * fVar25;
    if ((int)uVar1 <= cnt1_332) {
      *pbVar2 = 2;
      uVar23 = 5;
      ec->flow = 5;
      break;
    }
    goto LAB_0012e90c;
  case 5:
    uVar23 = 5;
    if (2 < *pbVar2) {
      uVar23 = 6;
    }
    ec->flow = uVar23;
    in_f21 = fVar20;
    unaff_f20 = fVar22;
    in_f23 = fVar14;
    unaff_f22 = fVar18;
    in_f25 = fVar12;
    unaff_f24 = fVar16;
    in_f27 = fVar8;
    unaff_f26 = fVar10;
    unaff_f28 = fVar25;
    break;
  case 6:
    cnt1_332 = 0;
    ec->flow = 7;
  case 7:
    fVar24 = (float)cnt1_332;
    cnt1_332 = cnt1_332 + 1;
    fVar24 = fVar24 / (float)uVar3;
    unaff_f28 = fVar25 + (balp[1] - fVar25) * fVar24;
    in_f27 = fVar8 + (bscl[1] - fVar8) * fVar24;
    unaff_f26 = fVar10 + (brot[1] - fVar10) * fVar24;
    in_f25 = fVar12 + (ccol[1] - fVar12) * fVar24;
    in_f23 = fVar14 + (calp[1] - fVar14) * fVar24;
    unaff_f24 = fVar16 + (dalp[1] - fVar16) * fVar24;
    unaff_f22 = fVar18 + (dspd[1] - fVar18) * fVar24;
    in_f21 = fVar20 + (dfrt[1] - fVar20) * fVar24;
    unaff_f20 = fVar22 + (dfal[1] - fVar22) * fVar24;
    if ((int)uVar3 <= cnt1_332) {
      uVar23 = 8;
      ec->flow = 8;
      break;
    }
    goto LAB_0012e90c;
  case 8:
    uVar23 = 8;
    if (3 < *pbVar2) {
      uVar23 = 9;
    }
    ec->flow = uVar23;
    in_f21 = dfrt[1];
    unaff_f20 = dfal[1];
    in_f23 = calp[1];
    unaff_f22 = dspd[1];
    in_f25 = ccol[1];
    unaff_f24 = dalp[1];
    in_f27 = bscl[1];
    unaff_f26 = brot[1];
    unaff_f28 = balp[1];
    break;
  case 9:
    cnt1_332 = 0;
    ChangeMonochrome(0);
    ec->flow = 10;
  case 10:
    fVar25 = (float)cnt1_332;
    cnt1_332 = cnt1_332 + 1;
    fVar25 = fVar25 / (float)uVar1;
    unaff_f28 = balp[1] + (balp[0] - balp[1]) * fVar25;
    in_f27 = bscl[1] + (bscl[0] - bscl[1]) * fVar25;
    unaff_f26 = brot[1] + (brot[0] - brot[1]) * fVar25;
    in_f25 = ccol[1] + (ccol[0] - ccol[1]) * fVar25;
    in_f23 = calp[1] + (calp[0] - calp[1]) * fVar25;
    unaff_f24 = dalp[1] + (dalp[0] - dalp[1]) * fVar25;
    unaff_f22 = dspd[1] + (dspd[0] - dspd[1]) * fVar25;
    in_f21 = dfrt[1] + (dfrt[0] - dfrt[1]) * fVar25;
    unaff_f20 = dfal[1] + (dfal[0] - dfal[1]) * fVar25;
    if ((int)uVar1 <= cnt1_332) {
      shibata_set_off = 0;
      ec->flow = 0xb;
      uVar23 = 0xb;
      break;
    }
    goto LAB_0012e90c;
  case 0xb:
    ec->flow = 0xc;
    in_f21 = dfrt[1];
    unaff_f20 = dfal[1];
    in_f23 = calp[1];
    unaff_f22 = dspd[1];
    in_f25 = ccol[1];
    unaff_f24 = dalp[1];
    in_f27 = bscl[1];
    unaff_f26 = brot[1];
    unaff_f28 = balp[1];
  case 0xc:
    *pbVar2 = 5;
    if (((ec->dat).uc8[1] & 8) == 0) {
      uVar23 = ec->flow;
      break;
    }
    ResetEffects(ec);
    goto LAB_0012e90c;
  }
LAB_0012e910:
  if (uVar23 < 0xc) {
    if (plyr_wrk.mode == 1) {
      SubDeform(2,in_f21,(byte)(int)unaff_f20);
      SubContrast2((uchar)(int)in_f25,(uchar)(int)in_f23);
      SubDither3(2,unaff_f24,unaff_f22,'j','e');
      SubFadeFrame('\x1e',0x80000);
    }
    else {
      SubBlur(1,(uchar)(int)unaff_f28,in_f27,unaff_f26,320.0,112.0);
      SubDeform(2,in_f21,(byte)(int)unaff_f20);
      SubContrast2((uchar)(int)in_f25,(uchar)(int)in_f23);
      SubDither3(2,unaff_f24,unaff_f22,'j','e');
      SubFadeFrame('\x1e',0x80000);
    }
  }
  return;
}

u_char SubNowLoading(int fl, int num, float sclx, float scly, float bx, float by, float spd, float rate, float trate) {
	u_char alpha1[289];
	u_char alpha2[289];
	int i;
	int j;
	int k;
	int m;
	int bak;
	int vnumw;
	int pnumh;
	int vnumh;
	int sy2;
	int tx[289];
	int ty[289];
	u_int clip[289];
	u_int clpz2;
	float f1;
	float f2;
	float f3;
	float f4;
	float bxf;
	float byf;
	float pr11;
	float pr12;
	float pr21;
	float pr22;
	sceVu0FVECTOR vt[289];
	sceVu0IVECTOR vtiw[289];
	sceVu0IVECTOR ivec;
	u_long tex0;
	EFFPOS *pefp;
	EFFINFO2 *pefi;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  ulong extraout_v0_udw;
  undefined8 uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  Q_WORDDATA *pQVar10;
  undefined8 in_v1;
  undefined4 *puVar11;
  undefined in_register_00000044 [12];
  uint uVar12;
  undefined *puVar13;
  Q_WORDDATA *pQVar14;
  undefined in_register_00000054 [12];
  ulong *puVar15;
  int *piVar16;
  Q_WORDDATA *pQVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  EFFPOS *pEVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined in_vf0 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined4 in_vuR;
  uchar alpha1 [289];
  uchar alpha2 [289];
  int tx [289];
  int ty [289];
  uint local_29d4;
  uint clip [289];
  float vt [289] [4];
  int vtiw [289] [4];
  int ivec [4];
  uint clpz2;
  
  uVar6 = SUB128(in_register_00000044 >> 0x20,0);
  auVar40 = CONCAT88(uVar6,(long)fl);
  uVar28 = (ulong)(int)alpha1;
  uVar19 = 0x34ae98;
  do {
    puVar18 = (ulong *)uVar19;
    uVar19 = *puVar18;
    uVar21 = puVar18[1];
    uVar20 = puVar18[2];
    uVar2 = puVar18[3];
    puVar15 = (ulong *)uVar28;
    uVar9 = (int)puVar15 + 7U & 7;
    puVar3 = (ulong *)(((int)puVar15 + 7U) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar19 >> (7 - uVar9) * 8;
    *puVar15 = uVar19;
    uVar9 = (int)puVar15 + 0xfU & 7;
    puVar3 = (ulong *)(((int)puVar15 + 0xfU) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar21 >> (7 - uVar9) * 8;
    puVar15[1] = uVar21;
    uVar9 = (int)puVar15 + 0x17U & 7;
    puVar3 = (ulong *)(((int)puVar15 + 0x17U) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar20 >> (7 - uVar9) * 8;
    puVar15[2] = uVar20;
    uVar9 = (int)puVar15 + 0x1fU & 7;
    puVar3 = (ulong *)(((int)puVar15 + 0x1fU) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar2 >> (7 - uVar9) * 8;
    puVar15[3] = uVar2;
    uVar19 = (ulong)(int)(puVar18 + 4);
    uVar28 = (ulong)(int)(puVar15 + 4);
  } while (uVar19 != 0x34afb8);
  auVar38 = CONCAT88(SUB128(in_register_00000054 >> 0x20,0),0x34afc0);
  auVar39 = CONCAT88(in_v1,(long)(int)alpha2);
  cVar1 = *(char *)(puVar18 + 4);
  uVar20 = (ulong)cVar1;
  *(char *)(puVar15 + 4) = cVar1;
  do {
    uVar12 = SUB164(auVar38,0);
    uVar9 = uVar12 + 7 & 7;
    uVar7 = uVar12 & 7;
    uVar28 = (*(long *)((uVar12 + 7) - uVar9) << (7 - uVar9) * 8 |
             uVar28 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)(uVar12 - uVar7) >> uVar7 * 8;
    uVar9 = uVar12 + 0xf & 7;
    uVar7 = uVar12 + 8 & 7;
    uVar19 = (*(long *)((uVar12 + 0xf) - uVar9) << (7 - uVar9) * 8 |
             uVar19 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((uVar12 + 8) - uVar7) >> uVar7 * 8;
    uVar9 = uVar12 + 0x17 & 7;
    uVar7 = uVar12 + 0x10 & 7;
    uVar20 = (*(long *)((uVar12 + 0x17) - uVar9) << (7 - uVar9) * 8 |
             uVar20 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((uVar12 + 0x10) - uVar7) >> uVar7 * 8;
    uVar9 = uVar12 + 0x1f & 7;
    uVar7 = uVar12 + 0x18 & 7;
    uVar21 = (*(long *)((uVar12 + 0x1f) - uVar9) << (7 - uVar9) * 8 |
             uVar21 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((uVar12 + 0x18) - uVar7) >> uVar7 * 8;
    uVar7 = SUB164(auVar39,0);
    uVar9 = uVar7 + 7 & 7;
    puVar3 = (ulong *)((uVar7 + 7) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar28 >> (7 - uVar9) * 8;
    uVar9 = uVar7 & 7;
    *(ulong *)(uVar7 - uVar9) =
         uVar28 << uVar9 * 8 | *(ulong *)(uVar7 - uVar9) & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    uVar9 = uVar7 + 0xf & 7;
    puVar3 = (ulong *)((uVar7 + 0xf) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar19 >> (7 - uVar9) * 8;
    uVar9 = uVar7 + 8 & 7;
    puVar3 = (ulong *)((uVar7 + 8) - uVar9);
    *puVar3 = uVar19 << uVar9 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    uVar9 = uVar7 + 0x17 & 7;
    puVar3 = (ulong *)((uVar7 + 0x17) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar20 >> (7 - uVar9) * 8;
    uVar9 = uVar7 + 0x10 & 7;
    puVar3 = (ulong *)((uVar7 + 0x10) - uVar9);
    *puVar3 = uVar20 << uVar9 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    uVar9 = uVar7 + 0x1f & 7;
    puVar3 = (ulong *)((uVar7 + 0x1f) - uVar9);
    *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | uVar21 >> (7 - uVar9) * 8;
    uVar9 = uVar7 + 0x18 & 7;
    puVar3 = (ulong *)((uVar7 + 0x18) - uVar9);
    *puVar3 = uVar21 << uVar9 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar13 = (undefined *)(uVar12 + 0x20);
    auVar38 = CONCAT88(SUB168(auVar38 >> 0x40,0),(long)(int)puVar13);
    auVar39 = CONCAT88(SUB168(auVar39 >> 0x40,0),(long)(int)(undefined *)(uVar7 + 0x20));
  } while ((long)(int)puVar13 != 0x34b0e0);
  *(undefined *)(uVar7 + 0x20) = *puVar13;
  fVar31 = DAT_003552e0;
  fVar30 = DAT_003552d8;
  clpz2 = 0xfffffff;
  fVar32 = DAT_003552e4;
  fVar35 = DAT_003552dc;
  if ((long)fl != 0) {
    iVar4 = rand();
    uVar28 = extraout_v0_udw;
    SetVURand((float)iVar4 * 4.656613e-10);
    auVar40 = CONCAT88(uVar6,0x28);
    iVar4 = 0;
    auVar37 = ZEXT816(uVar28) << 0x40;
    do {
      iVar24 = 0;
      iVar26 = (int)&efi[0].ep[0].r + SUB164(auVar37,0);
      iVar22 = SUB164(auVar37,0) + 0x280ac8;
      iVar25 = 0;
      iVar27 = 0;
      while( true ) {
        auVar38 = CONCAT88(SUB168(auVar38 >> 0x40,0),(long)iVar25);
        uVar6 = SUB168(auVar37 >> 0x40,0);
        if (iVar27 == 0) {
                    /* inlined from effect.h */
          auVar37 = _vrnext(in_vuR);
          auVar37 = _vsubbc(auVar37,in_vf0);
          auVar37 = _qmfc2(SUB164(auVar37,0));
                    /* end of inlined section */
          uVar6 = SUB168(auVar37 >> 0x40,0);
          *(float *)(iVar24 * 0x28 + iVar22) = fVar30 * SUB164(auVar37,0) + fVar35;
        }
        else {
                    /* inlined from effect.h */
          auVar37 = _vrnext(in_vuR);
          auVar37 = _vsubbc(auVar37,in_vf0);
          auVar37 = _qmfc2(SUB164(auVar37,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
          *(float *)(iVar24 * 0x28 + iVar22) =
               (*(float *)((iVar24 + -1) * 0x28 + iVar22) + fVar31 * SUB164(auVar37,0)) - fVar32;
        }
        if ((long)iVar25 == 0) {
                    /* inlined from effect.h */
          auVar37 = _vrnext(in_vuR);
          auVar37 = _vsubbc(auVar37,in_vf0);
          auVar37 = _qmfc2(SUB164(auVar37,0));
                    /* end of inlined section */
          pfVar8 = (float *)(iVar24 * 0x28);
          uVar6 = SUB168(auVar37 >> 0x40,0);
          *(float *)((int)pfVar8 + iVar26) = fVar30 * SUB164(auVar37,0) + fVar35;
        }
        else {
                    /* inlined from effect.h */
          auVar38 = _vrnext(in_vuR);
          auVar38 = _vsubbc(auVar38,in_vf0);
          auVar37 = _qmfc2(SUB164(auVar38,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
          auVar38 = CONCAT88(SUB168(auVar37 >> 0x40,0),(long)(iVar24 * 0x28));
          pfVar8 = (float *)(iVar24 * 0x28 + iVar26);
          *pfVar8 = (*(float *)((iVar24 + -0x11) * 0x28 + iVar26) + fVar31 * SUB164(auVar37,0)) -
                    fVar32;
        }
        auVar39 = CONCAT88(SUB168(auVar39 >> 0x40,0),(long)(int)pfVar8);
        iVar24 = iVar24 + 1;
        auVar37 = CONCAT88(uVar6,(ulong)(iVar24 < 0x121));
        if ((ulong)(iVar24 < 0x121) == 0) break;
        iVar25 = iVar24 / 0x11;
        iVar27 = iVar24 % 0x11;
      }
      iVar4 = iVar4 + 1;
      auVar37 = CONCAT88(uVar6,(long)(iVar4 * 0x2d30));
    } while (iVar4 < 2);
  }
  fVar36 = by + 2048.0;
  iVar4 = 0;
  do {
    piVar16 = tx + iVar4;
    uVar6 = SUB168(auVar38 >> 0x40,0);
    uVar28 = SUB168(auVar39 >> 0x40,0);
    uVar19 = SUB168(auVar40 >> 0x40,0);
    fVar34 = (float)(iVar4 % 0x11) * (sclx + sclx) - (sclx + sclx) * 8.0;
    fVar33 = (float)(iVar4 / 0x11) * scly - scly * 8.0;
    vt[iVar4][0] = fVar34 * trate;
    vt[iVar4][1] = fVar33 * trate;
    *piVar16 = (int)((fVar34 + bx + 320.0) * 16.0);
    ty[iVar4] = (int)((fVar33 + by + 112.0) * 16.0);
    lVar5 = (long)*piVar16;
    if (lVar5 < 0) {
      auVar39 = ZEXT816(uVar28) << 0x40;
    }
    else {
      if (0x27f0 < lVar5) {
        lVar5 = 0x27f0;
      }
      auVar39 = CONCAT88(uVar28,lVar5);
    }
    *piVar16 = SUB164(auVar39,0);
    piVar16 = ty + iVar4;
    auVar38 = CONCAT88(uVar6,(long)(int)piVar16);
    lVar5 = (long)*piVar16;
    if (lVar5 < 0) {
      auVar40 = ZEXT816(uVar19) << 0x40;
    }
    else {
      if (0xdf0 < lVar5) {
        lVar5 = 0xdf0;
      }
      auVar40 = CONCAT88(uVar19,lVar5);
    }
    auVar39 = CONCAT88(SUB168(auVar39 >> 0x40,0),(long)(int)vt[iVar4]);
    iVar25 = iVar4 + 1;
    *piVar16 = SUB164(auVar40,0);
    vt[iVar4][3] = 1.0;
    vt[iVar4][0] = fVar34;
    vt[iVar4][1] = fVar33;
    vt[iVar4][2] = 0.0;
    iVar4 = iVar25;
  } while (iVar25 < 0x121);
  auVar40 = CONCAT88(uVar6,(long)num);
  iVar4 = 0;
  do {
    fVar33 = DAT_003552e8;
    fVar34 = 180.0;
    pEVar23 = efi[num].ep + iVar4;
    fVar29 = SgSinf(((efi[num].r + (float)(iVar4 / 0x11) * 32.0) * DAT_003552e8) / 180.0);
    pEVar23->x = fVar29 * pEVar23->r * rate;
    fVar33 = SgSinf(((efi[num].r + (float)(iVar4 % 0x11) * 32.0) * fVar33) / fVar34);
    fVar33 = fVar33 * pEVar23->h * rate;
    pEVar23->y = fVar33;
    if (0.0 <= fVar33) {
      if (pEVar23->oy < 0.0) {
        if (iVar4 % 0x11 == 0) {
                    /* inlined from effect.h */
          auVar39 = _vrnext(in_vuR);
          auVar39 = _vsubbc(auVar39,in_vf0);
          auVar39 = _qmfc2(SUB164(auVar39,0));
                    /* end of inlined section */
          fVar33 = fVar30 * SUB164(auVar39,0) + fVar35;
        }
        else {
                    /* inlined from effect.h */
          auVar39 = _vrnext(in_vuR);
          auVar39 = _vsubbc(auVar39,in_vf0);
          auVar39 = _qmfc2(SUB164(auVar39,0));
                    /* end of inlined section */
          fVar33 = (efi[num].ep[iVar4 + -1].h + fVar31 * SUB164(auVar39,0)) - fVar32;
        }
        pEVar23->h = fVar33;
        goto LAB_0012f080;
      }
      fVar33 = pEVar23->x;
    }
    else {
LAB_0012f080:
      fVar33 = pEVar23->x;
    }
    if (0.0 <= fVar33) {
      if (pEVar23->ox < 0.0) {
        if (iVar4 / 0x11 == 0) {
                    /* inlined from effect.h */
          auVar40 = _vrnext(in_vuR);
          auVar40 = _vsubbc(auVar40,in_vf0);
          auVar40 = _qmfc2(SUB164(auVar40,0));
                    /* end of inlined section */
          fVar34 = fVar30 * SUB164(auVar40,0) + fVar35;
        }
        else {
                    /* inlined from effect.h */
          auVar40 = _vrnext(in_vuR);
          auVar40 = _vsubbc(auVar40,in_vf0);
          auVar40 = _qmfc2(SUB164(auVar40,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
          fVar34 = (*(float *)((int)efi + (iVar4 + -0x11) * 0x28 + num * 0x2d30) +
                   fVar31 * SUB164(auVar40,0)) - fVar32;
        }
        pEVar23->r = fVar34;
        fVar34 = pEVar23->y;
      }
      else {
        fVar34 = pEVar23->y;
      }
    }
    else {
      fVar34 = pEVar23->y;
    }
    pEVar23->ox = fVar33;
    pEVar23->oy = fVar34;
    fVar34 = vt[iVar4][1];
    uVar9 = (uint)(iVar4 + 1 < 0x121);
    vt[iVar4][0] = vt[iVar4][0] + fVar33;
    vt[iVar4][1] = fVar34 + pEVar23->y;
    iVar4 = iVar4 + 1;
    if (uVar9 == 0) {
      fVar30 = efi[num].r + spd + spd;
      if (360.0 < fVar30) {
        fVar30 = fVar30 - 360.0;
      }
      efi[num].r = fVar30;
      iVar4 = 0;
      do {
        fVar30 = *(float *)((int)vt + uVar9 + 8);
        auVar40 = CONCAT88(SUB168(auVar40 >> 0x40,0),0xfff0000) | (undefined  [16])0x5fff;
        fVar32 = *(float *)((int)vt + uVar9);
        fVar31 = *(float *)((int)vt + uVar9 + 4);
        iVar4 = iVar4 + 1;
        *(undefined4 *)((int)vtiw + uVar9 + 0xc) = 1;
        *(int *)((int)vtiw + uVar9 + 8) = (int)(fVar30 * 16.0) + SUB164(auVar40,0);
        *(int *)((int)vtiw + uVar9) = (int)((fVar32 + bx + 2048.0) * 16.0);
        *(int *)((int)vtiw + uVar9 + 4) = (int)((fVar31 + fVar36) * 16.0);
        uVar9 = iVar4 * 0x10;
      } while (iVar4 < 0x121);
      iVar25 = 0;
      iVar4 = 0;
      do {
        puVar11 = (undefined4 *)((int)clip + iVar4);
        *puVar11 = 1;
        if ((uint)vtiw[iVar25][0] < 0x300) {
          *puVar11 = 0;
        }
        else if (0xfd00 < (uint)vtiw[iVar25][0]) {
          *puVar11 = 0;
        }
        if (((uint)vtiw[iVar25][1] < 0x300) || (0xfd00 < (uint)vtiw[iVar25][1])) {
          *(undefined4 *)((int)clip + iVar4) = 0;
        }
        if ((vtiw[iVar25][2] == 0) || (clpz2 < (uint)vtiw[iVar25][2])) {
          *(undefined4 *)((int)clip + iVar4) = 0;
        }
        iVar25 = iVar25 + 1;
        iVar4 = iVar25 * 4;
      } while (iVar25 < 0x121);
      iVar25 = 0;
      Reserve2DPacket(0x1000);
      pQVar14 = pbuf;
      iVar4 = ndpkt;
      pQVar10 = pbuf + ndpkt;
      pQVar10->ui32[0] = 0;
      pQVar10->ui32[1] = 0;
      pQVar10->ui32[2] = 0;
      pQVar10->ui32[3] = 0;
      pQVar14[ndpkt + 1].ul64[0] = 0x1000000000008007;
      pQVar14[ndpkt + 1].ul64[1] = 0xe;
      pQVar14[ndpkt + 2].ul64[1] = 0x3f;
      pQVar14[ndpkt + 2].ul64[0] = 0;
      pQVar14[ndpkt + 3].ul64[1] = 6;
      pQVar14[ndpkt + 3].ul64[0] = 0x2000000228029a40;
      pQVar14[ndpkt + 4].ul64[1] = 0x14;
      pQVar14[ndpkt + 4].ul64[0] = 0x161;
      pQVar14[ndpkt + 5].ul64[0] = 0x10100008c;
      pQVar14[ndpkt + 5].ul64[1] = 0x4e;
      pQVar14[ndpkt + 6].ul64[0] = 0x44;
      pQVar14[ndpkt + 6].ul64[1] = 0x42;
      pQVar14[ndpkt + 7].ul64[0] = 0x3000d;
      pQVar14[ndpkt + 7].ul64[1] = 0x47;
      pQVar14[ndpkt + 8].ul64[1] = 8;
      pQVar14[ndpkt + 8].ul64[0] = 5;
      pQVar14[ndpkt + 9].ul64[0] = 0x60ae400000008110;
      pQVar14[ndpkt + 9].ul64[1] = 0x431431;
      ndpkt = ndpkt + 10;
      do {
        pQVar14 = pbuf;
        iVar27 = iVar25 + 0x11;
        if (iVar25 % 0x11 == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = clip[iVar25 + -1] + clip[iVar25 + 0x10] + clip[iVar25];
        }
        pQVar17 = pbuf + ndpkt;
        pQVar17->ui32[2] = 0x80;
        pQVar17->ui32[0] = 0x80;
        pQVar17->ui32[1] = 0x80;
        pQVar10 = pQVar14 + ndpkt + 1;
        pQVar14 = pQVar14 + ndpkt + 2;
        uVar9 = 0x8000;
        if (2 < iVar22) {
          uVar9 = 0;
        }
        ndpkt = ndpkt + 3;
        pQVar17->ui32[3] = (int)((float)(uint)alpha1[iVar25] * 1.0);
        pQVar10->ui32[0] = tx[iVar25];
        uVar7 = ty[iVar25];
        pQVar10->ui32[3] = 0;
        pQVar10->ui32[1] = uVar7;
        pQVar10->ui32[2] = 0;
        pQVar14->ui32[0] = vtiw[iVar25][0];
        pQVar14->ui32[1] = vtiw[iVar25][1];
        pQVar14->ui32[2] = vtiw[iVar25][2];
        pQVar14->ui32[3] = uVar9;
        pQVar14 = pbuf;
        if (iVar25 % 0x11 == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = clip[iVar25 + 0x10] + clip[iVar25] + clip[iVar27];
        }
        iVar24 = iVar25 + 0x11;
        pQVar10 = pbuf + ndpkt;
        pQVar10->ui32[2] = 0x80;
        pQVar10->ui32[0] = 0x80;
        pQVar17 = pQVar14 + ndpkt + 1;
        pQVar10->ui32[1] = 0x80;
        pQVar14 = pQVar14 + ndpkt + 2;
        uVar9 = 0x8000;
        if (2 < iVar22) {
          uVar9 = 0;
        }
        ndpkt = ndpkt + 3;
        iVar25 = iVar25 + 1;
        pQVar10->ui32[3] = (int)((float)(uint)alpha1[iVar24] * 1.0);
        pQVar17->ui32[0] = tx[iVar27];
        uVar7 = ty[iVar27];
        pQVar17->ui32[3] = 0;
        pQVar17->ui32[1] = uVar7;
        pQVar17->ui32[2] = 0;
        pQVar14->ui32[0] = vtiw[iVar27][0];
        pQVar14->ui32[1] = vtiw[iVar27][1];
        pQVar14->ui32[2] = vtiw[iVar27][2];
        pQVar14->ui32[3] = uVar9;
      } while (iVar25 < 0x110);
      uVar9 = (ndpkt - (iVar4 + -0x70000000)) - 1;
      pbuf[iVar4].ui32[0] = uVar9;
      return (uchar)uVar9;
    }
  } while( true );
}

void InitNowLoading() {
  now_loading_flow = 0xff;
  return;
}

void SetNowLoadingON() {
  now_loading_flow = 0;
  return;
}

void SetNowLoadingOFF() {
  now_loading_flow = 3;
  return;
}

int SetNowLoading() {
	SPRT_DAT test[2];
	DISP_SPRT ds;
	float out;
	float alp;
	static float bx[3] = {
		/* [0] = */ -200.f,
		/* [1] = */ 200.f,
		/* [2] = */ 450.f
	};
	static float by[3] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 300.f
	};
	static int cnt = 0;
	
  float scale;
  int iVar1;
  float rate;
  float rot;
  float by;
  float fVar2;
  SPRT_DAT test [2];
  DISP_SPRT ds;
  
  test[0].tex0 = DAT_0034b0e8;
  test[0]._8_8_ = DAT_0034b0f0;
  test[0]._16_8_ = DAT_0034b0f8;
  test[0]._24_8_ = DAT_0034b100;
  test[1].tex0 = DAT_0034b108;
  test[1]._8_8_ = DAT_0034b110;
  test[1]._16_8_ = DAT_0034b118;
  fVar2 = 0.0;
  test[1]._24_8_ = DAT_0034b120;
  if (now_loading_flow == 2) goto LAB_0012f8f4;
  if (now_loading_flow < 3) {
    if (now_loading_flow == 0) {
      SubNowLoading(1,0,1.0,1.0,0.0,0.0,1.0,1.0,1.0);
      now_loading_flow = now_loading_flow + 1;
      cnt_350 = 0;
    }
    else if (now_loading_flow != 1) goto LAB_0012f8f4;
    fVar2 = (float)cnt_350;
    cnt_350 = cnt_350 + 1;
    fVar2 = ((15.0 - fVar2) * 128.0) / 15.0;
    if ((float)cnt_350 <= 15.0) goto LAB_0012f8f4;
    now_loading_flow = now_loading_flow + 1;
  }
  else {
    if (now_loading_flow != 3) {
      if (now_loading_flow == 0xff) {
        return 0xff;
      }
      goto LAB_0012f8f4;
    }
    iVar1 = cnt_350 + 1;
    fVar2 = ((float)cnt_350 * 128.0) / 15.0;
    cnt_350 = iVar1;
    if ((float)iVar1 <= 15.0) goto LAB_0012f8f4;
    now_loading_flow = 0xff;
  }
  cnt_350 = 0;
LAB_0012f8f4:
  by = 0.0;
  SetPanel(0x80000,0.0,0.0,640.0,448.0,'\0','\0','\0',0x80);
  SetSprFile3(0x1f1c000,0);
  CopySprDToSpr(&ds,test);
  ds.x = (float)test[0].x;
  ds.y = (float)test[0].y;
  ds.z = 0xfffffff - test[0].pri;
  ds.tex1 = 0x161;
  ds.zbuf = 0x10100008c;
  ds.test = 0x5000d;
  ds.pri = test[0].pri;
  DispSprD(&ds);
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  bx_348._0_4_ = bx_348._0_4_ + DAT_003552ec;
  if (320.0 <= bx_348._0_4_) {
    bx_348._0_4_ = bx_348._0_4_ - 640.0;
  }
  bx_348._4_4_ = bx_348._4_4_ - DAT_003552ec;
  if (bx_348._4_4_ <= -320.0) {
    bx_348._4_4_ = bx_348._4_4_ + 640.0;
  }
  rate = 2.5;
  by_349._0_4_ = by;
  by_349._4_4_ = by;
  SubNowLoading(0,0,10.0,10.0,bx_348._0_4_,by,1.5,2.5,1.0);
  scale = DAT_003552f0;
  rot = 180.0;
  SubNowLoading(0,1,10.0,10.0,bx_348._4_4_,by_349._4_4_,1.5,rate,1.0);
  SubBlur(1,'2',scale,rot,220.0,112.0);
  SubBlur(1,'2',scale,rot,420.0,112.0);
  SetPanel(0x10,by,by,640.0,448.0,'\0','\0','\0',(uchar)(int)fVar2);
  return now_loading_flow;
}

void SubGameOver(u_char alp, float rate) {
	static float rrr[1813];
	static float lll[1813];
	static float mm1[1813];
	static float mm2[1813];
	static float sss[1813];
	static float ccc[1813];
	static int fl = 1;
	static float r = 0.f;
	int i;
	int k;
	int m;
	int bak;
	int pnumw;
	int vnumw;
	int wix;
	int pnumh;
	int vnumh;
	int wiy;
	int sx2;
	int sy2;
	float sclx;
	float scly;
	float add;
	float f1;
	float f2;
	float f3;
	float f4;
	float wfw;
	float wfh;
	float fw;
	float lm;
	float cntw;
	float cnth;
	float fx;
	float fy;
	float tx[1813];
	float ty[1813];
	u_long tex0;
	sceVu0FVECTOR vt[1813];
	sceVu0IVECTOR vtiw[1813];
	
  int iVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  int (*paiVar4) [4];
  Q_WORDDATA *pQVar5;
  uint uVar6;
  Q_WORDDATA *pQVar7;
  float *pfVar8;
  float (*pafVar9) [4];
  float (*pafVar10) [4];
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float y;
  float fVar21;
  float tx [1813];
  float ty [1813];
  float vt [1813] [4];
  int vtiw [1813] [4];
  int m;
  int bak;
  
  pfVar8 = tx;
  pfVar13 = tx;
  iVar14 = 0;
  fVar19 = 13.0;
  fVar21 = 408.0;
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  iVar15 = fl_360;
  pafVar10 = vt;
  pfVar16 = ty;
  pfVar11 = pfVar16;
  pafVar9 = pafVar10;
  do {
    (*pafVar9)[2] = 0.0;
    (*pafVar9)[3] = 1.0;
    fVar18 = (float)(iVar14 / 0x31) * fVar19 - 234.0;
    fVar17 = (float)(iVar14 % 0x31) * 17.0 - 408.0;
    (*pafVar9)[1] = fVar18;
    (*pafVar9)[0] = fVar17;
    *pfVar8 = (float)(int)((fVar17 + 320.0) * 16.0);
    *pfVar11 = (float)(int)((fVar18 * 0.5 + 112.0) * 16.0);
    fVar18 = *pfVar8;
    fVar17 = 8.0;
    if ((8.0 <= fVar18) && (fVar17 = fVar18, 10216.0 < fVar18)) {
      fVar17 = 10216.0;
    }
    *pfVar8 = fVar17;
    fVar17 = *pfVar11;
    if (fVar17 < 8.0) {
      fVar18 = 8.0;
    }
    else {
      fVar18 = 3560.0;
      if (fVar17 <= 3560.0) {
        fVar18 = fVar17;
      }
    }
    iVar14 = iVar14 + 1;
    *pfVar11 = fVar18;
    pfVar11 = pfVar11 + 1;
    pfVar8 = pfVar8 + 1;
    pafVar9 = pafVar9[1];
  } while (iVar14 < 0x715);
  fVar17 = rate / 25.0;
  if (iVar15 != 0) {
    iVar15 = 0;
    do {
      y = (float)(iVar15 % 0x31) * 17.0 - fVar21;
      fVar20 = (float)(iVar15 / 0x31) * fVar19 - 234.0;
      fVar18 = SgSqrtf(y * y + fVar20 * fVar20);
      (&lll_355)[iVar15] = fVar18;
      fVar18 = lll_355;
      if ((iVar15 % 0x31 == 0x18) && (iVar15 / 0x31 == 0x12)) {
        (&rrr_354)[iVar15] = 0;
      }
      else {
        fVar20 = SgAtan2f(y,fVar20);
        (&rrr_354)[iVar15] = fVar20;
      }
      fVar20 = (&lll_355)[iVar15] * DAT_003552f4;
      iVar14 = iVar15 + 1;
      (&mm2_357)[iVar15] = (fVar18 - (&lll_355)[iVar15]) / fVar18;
      (&mm1_356)[iVar15] = (fVar20 * 12.0) / fVar18;
      fVar18 = SgSinf((float)(&rrr_354)[iVar15]);
      (&sss_358)[iVar15] = fVar18;
      fVar18 = SgCosf((float)(&rrr_354)[iVar15]);
      (&ccc_359)[iVar15] = fVar18;
      iVar15 = iVar14;
    } while (iVar14 < 0x715);
  }
  iVar15 = 0;
  do {
    fVar20 = (&lll_355)[iVar15];
    fVar19 = SgSinf((float)(&mm1_356)[iVar15] - r_361);
    fVar21 = fVar19 * fVar17 * (float)(&mm2_357)[iVar15];
    fVar19 = (float)(&sss_358)[iVar15];
    fVar18 = (float)(&ccc_359)[iVar15];
    iVar14 = iVar15 + 1;
    vt[iVar15][1] = fVar18 * fVar20 + fVar19 * fVar21;
    pafVar10[iVar15][0] = fVar19 * fVar20 - fVar18 * fVar21;
    iVar15 = iVar14;
  } while (iVar14 < 0x715);
  r_361 = r_361 + DAT_003552f8;
  if (DAT_003552fc < r_361) {
    r_361 = r_361 - DAT_003552fc;
  }
  iVar15 = 0x715;
  paiVar4 = vtiw;
  do {
    fVar21 = (*pafVar10)[1];
    iVar15 = iVar15 + -1;
    fVar19 = (*pafVar10)[0];
    (*paiVar4)[2] = 0xfff5fff;
    (*paiVar4)[3] = 1;
    pafVar10 = pafVar10[1];
    (*paiVar4)[0] = (int)((fVar19 + 2048.0) * 16.0);
    (*paiVar4)[1] = (int)((fVar21 * 0.5 + 2048.0) * 16.0);
    paiVar4 = paiVar4[1];
  } while (iVar15 != 0);
  iVar14 = 0;
  Reserve2DPacket(0x1000);
  pQVar3 = pbuf;
  iVar15 = ndpkt;
  pQVar7 = pbuf + ndpkt;
  pQVar5 = pbuf + ndpkt + 1;
  pQVar7->ui32[0] = 0;
  pQVar7->ui32[1] = 0;
  pQVar7->ui32[2] = 0;
  pQVar7->ui32[3] = 0;
  pQVar5->ul64[1] = 0xe;
  pQVar5->ul64[0] = 0x1000000000008006;
  pQVar3[ndpkt + 2].ul64[1] = 0x3f;
  pQVar3[ndpkt + 2].ul64[0] = 0;
  pQVar3[ndpkt + 3].ul64[1] = 6;
  pQVar3[ndpkt + 3].ul64[0] = 0x2000000228029a40;
  pQVar3[ndpkt + 4].ul64[1] = 0x14;
  pQVar3[ndpkt + 4].ul64[0] = 0x161;
  pQVar3[ndpkt + 5].ul64[1] = 0x4e;
  pQVar3[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar3[ndpkt + 6].ul64[0] = 0x44;
  pQVar3[ndpkt + 6].ul64[1] = 0x42;
  pQVar3[ndpkt + 7].ul64[1] = 0x47;
  pQVar3[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar3[ndpkt + 8].ul64[0] = 0x60ae4000000086e4;
  pQVar3[ndpkt + 8].ul64[1] = 0x413413;
  ndpkt = ndpkt + 9;
  paiVar4 = vtiw[0x31];
  do {
    iVar2 = ndpkt;
    uVar12 = 0x8000;
    iVar1 = iVar14 % 0x31;
    iVar14 = iVar14 + 1;
    pQVar5 = pQVar3 + ndpkt;
    if (iVar1 != 0) {
      uVar12 = 0;
    }
    uVar6 = fptoui(*pfVar13);
    pQVar5->ui32[0] = uVar6;
    uVar6 = fptoui(*pfVar16);
    pQVar5->ui32[1] = uVar6;
    pQVar5->ui32[3] = 0;
    pQVar5->ui32[2] = 0;
    pQVar5 = pQVar3 + iVar2 + 1;
    pQVar5->ui32[0] = 0x80;
    ndpkt = iVar2 + 3;
    pQVar5->ui32[3] = (int)(char)alp & 0xffU;
    pQVar5->ui32[1] = 0x80;
    pQVar5->ui32[2] = 0x80;
    pQVar5 = pQVar3 + iVar2 + 2;
    pQVar7 = pQVar3 + ndpkt;
    pQVar5->ui32[0] = paiVar4[-0x31][0];
    pQVar5->ui32[1] = paiVar4[-0x31][1];
    uVar6 = paiVar4[-0x31][2];
    pQVar5->ui32[3] = uVar12;
    pQVar5->ui32[2] = uVar6;
    pfVar11 = pfVar13 + 0x31;
    pfVar13 = pfVar13 + 1;
    uVar6 = fptoui(*pfVar11);
    pQVar7->ui32[0] = uVar6;
    pfVar11 = pfVar16 + 0x31;
    pfVar16 = pfVar16 + 1;
    uVar6 = fptoui(*pfVar11);
    pQVar7->ui32[1] = uVar6;
    pQVar7->ui32[3] = 0;
    pQVar7->ui32[2] = 0;
    pQVar5 = pQVar3 + iVar2 + 4;
    pQVar5->ui32[0] = 0x80;
    pQVar5->ui32[3] = (int)(char)alp & 0xffU;
    pQVar5->ui32[1] = 0x80;
    pQVar5->ui32[2] = 0x80;
    pQVar5 = pQVar3 + iVar2 + 5;
    ndpkt = iVar2 + 6;
    pQVar5->ui32[0] = (*paiVar4)[0];
    pQVar5->ui32[1] = (*paiVar4)[1];
    uVar6 = (*paiVar4)[2];
    pQVar5->ui32[3] = uVar12;
    paiVar4 = paiVar4[1];
    pQVar5->ui32[2] = uVar6;
  } while (iVar14 < 0x6e4);
  pbuf[iVar15].ui32[0] = (ndpkt - (iVar15 + -0x70000000)) - 1;
  return;
}

void InitGameOver() {
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  gameover_flow = 9;
  return;
}

void SetGameOverON() {
  gameover_flow = 0;
  return;
}

int SetGameOver() {
	SPRT_DAT gameover_tbl[2];
	DISP_SPRT ds;
	int i;
	static int cnt = 0;
	int sec5;
	int sec0;
	int sec1;
	int sec2;
	int sec3;
	int sec4;
	int blr;
	int alp0;
	int alp1;
	int alp2;
	int alp3;
	int num;
	float scl;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uchar unaff_s1_lo;
  int iVar6;
  int unaff_s6_lo;
  byte unaff_s7_lo;
  byte unaff_s8_lo;
  float fVar7;
  float in_f21;
  SPRT_DAT gameover_tbl [2];
  DISP_SPRT ds;
  int blr;
  
  iVar6 = 1;
  gameover_tbl[0].tex0 = DAT_0034b128;
  gameover_tbl[0]._8_8_ = DAT_0034b130;
  gameover_tbl[0]._16_8_ = DAT_0034b138;
  gameover_tbl[0]._24_8_ = DAT_0034b140;
  gameover_tbl[1].tex0 = DAT_0034b148;
  gameover_tbl[1]._8_8_ = DAT_0034b150;
  gameover_tbl[1]._16_8_ = DAT_0034b158;
  gameover_tbl[1]._24_8_ = DAT_0034b160;
  switch(gameover_flow) {
  case 0:
    efcnt[12].dat._0_1_ = 0;
    cnt_371 = 0;
    blr = 300;
    unaff_s7_lo = 0;
    unaff_s8_lo = 0;
    unaff_s6_lo = 0;
    unaff_s1_lo = '\0';
    LocalCopyLtoL(0x1a40,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    in_f21 = 0.0;
    gameover_flow = 1;
    break;
  case 1:
    unaff_s1_lo = (uchar)((cnt_371 << 7) / 0x1e);
    blr = 300;
    unaff_s7_lo = 0;
    unaff_s8_lo = 0;
    unaff_s6_lo = 0;
    in_f21 = 0.0;
    LocalCopyLtoL(0x1a40,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    cnt_371 = cnt_371 + 1;
    if (cnt_371 < 0x1e) {
LAB_001309e4:
      unaff_s8_lo = 0;
      unaff_s7_lo = 0;
      unaff_s6_lo = 0;
    }
    else {
      cnt_371 = LoadReq(0x182,0x1e90000);
      gameover_flow = 2;
    }
    break;
  case 2:
    unaff_s7_lo = 0;
    unaff_s8_lo = 0;
    unaff_s6_lo = 0;
    unaff_s1_lo = 0x80;
    in_f21 = 0.0;
    blr = 300;
    iVar3 = IsLoadEnd(cnt_371);
    iVar5 = 3;
    if (iVar3 == 0) goto LAB_001309e4;
LAB_00130918:
    cnt_371 = 0;
    gameover_flow = iVar5;
    break;
  case 3:
    unaff_s7_lo = 0x80;
    iVar5 = 0x1e - cnt_371;
    cnt_371 = cnt_371 + 1;
    unaff_s8_lo = 0;
    unaff_s1_lo = (uchar)((iVar5 * 0x80) / 0x1e);
    unaff_s6_lo = 0x80;
    blr = 300;
    in_f21 = 0.0;
    if (0x1d < cnt_371) {
      iVar5 = 5;
      unaff_s8_lo = 0;
LAB_00130914:
      unaff_s7_lo = 0x80;
      goto LAB_00130918;
    }
    break;
  case 5:
    unaff_s7_lo = 0x80;
    if (cnt_371 < 0x78) {
      unaff_s8_lo = (byte)((cnt_371 << 7) / 0x78);
      blr = 300;
    }
    else {
      unaff_s8_lo = 0x80;
      blr = ((0xf0 - cnt_371) * 300) / 0x78;
    }
    cnt_371 = cnt_371 + 1;
    unaff_s6_lo = 0x80;
    unaff_s1_lo = '\0';
    in_f21 = 0.0;
    if (0xef < cnt_371) {
      iVar5 = 6;
      unaff_s1_lo = '\0';
      goto LAB_00130914;
    }
    break;
  case 6:
    unaff_s7_lo = 0x80;
    unaff_s8_lo = 0x80;
    iVar5 = 0x5a - cnt_371;
    cnt_371 = cnt_371 + 1;
    unaff_s6_lo = (iVar5 * 0x80) / 0x5a;
    unaff_s1_lo = '\0';
    blr = 0;
    if (0x59 < cnt_371) {
      iVar5 = 7;
      unaff_s8_lo = 0x80;
      unaff_s1_lo = '\0';
      goto LAB_00130914;
    }
    break;
  case 7:
    iVar6 = cnt_371 * 0x3c;
    unaff_s8_lo = (byte)(((0x1e - cnt_371) * 0x80) / 0x1e);
    unaff_s1_lo = (uchar)((cnt_371 << 7) / 0x1e);
    fVar7 = (float)cnt_371;
    cnt_371 = cnt_371 + 1;
    unaff_s7_lo = 0x80;
    unaff_s6_lo = 0;
    blr = 0;
    in_f21 = (fVar7 * 8.0) / 30.0;
    iVar6 = iVar6 / 0x1e + 1;
    if (0x1d < cnt_371) {
      iVar5 = 8;
      goto LAB_00130914;
    }
    break;
  case 8:
    in_f21 = 0.0;
    unaff_s1_lo = (uchar)(((0x1e - cnt_371) * 0x80) / 0x1e);
    blr = 0;
    unaff_s7_lo = 0;
    unaff_s8_lo = 0;
    unaff_s6_lo = 0;
    SetPanel2(0x80000,0.0,0.0,640.0,448.0,0,'\0','\0','\0',0x80);
    cnt_371 = cnt_371 + 1;
    if (cnt_371 < 0x1e) goto LAB_001309e4;
    gameover_flow = 9;
    break;
  case 9:
    SetPanel2(0x80000,0.0,0.0,640.0,448.0,0,'\0','\0','\0',0x80);
    return 0xff;
  }
  if ((2 < gameover_flow) && (SetSprFile3(0x1e90000,0), 2 < gameover_flow)) {
    CopySprDToSpr(&ds,gameover_tbl);
    ds.tex1 = 0x161;
    ds.zbuf = 0x10100008c;
    ds.test = 0x5000d;
    ds.alpha = unaff_s7_lo;
    DispSprD(&ds);
    if (2 < gameover_flow) {
      CopySprDToSpr(&ds,gameover_tbl + 1);
      ds.tex1 = 0x161;
      ds.zbuf = 0x10100008c;
      ds.test = 0x5000d;
      if ((gameover_flow == 7) && (iVar5 = iVar6 + -1, -1 < iVar5)) {
        do {
          fVar7 = (float)iVar5;
          ds.csx = 320.0;
          iVar5 = iVar5 + -1;
          ds.csy = 224.0;
          ds.sch = (in_f21 * fVar7) / (float)iVar6 + 1.0;
          ds.scw = (in_f21 * 1.5 * fVar7) / (float)iVar6 + 1.0;
          ds.alpha = unaff_s8_lo;
          DispSprD(&ds);
        } while (-1 < iVar5);
      }
      ds.x = (float)gameover_tbl[1].x;
      ds.y = (float)gameover_tbl[1].y;
      ds.sch = 1.0;
      ds.csx = 320.0;
      ds.csy = 224.0;
      ds.scw = 1.0;
      ds.alpha = unaff_s8_lo;
      DispSprD(&ds);
      bVar1 = gameover_flow < 8;
      if ((gameover_flow < 3) || (unaff_s6_lo == 0)) goto LAB_00130ba4;
      SubGameOver((uchar)unaff_s6_lo,(float)blr);
    }
  }
  bVar1 = gameover_flow < 8;
LAB_00130ba4:
  bVar2 = gameover_flow < 7;
  uVar4 = (uint)bVar2;
  if (bVar1) {
    uVar4 = (uint)bVar2;
    if (bVar2) {
      SubBlur(1,'X',DAT_00355304,180.0,320.0,112.0);
    }
    else {
      SubBlur(1,'d',DAT_00355300,180.0,320.0,112.0);
    }
  }
  SetPanel(0x10,0.0,0.0,640.0,448.0,0xff,0xff,0xff,unaff_s1_lo);
  return uVar4;
}

void ChangeMonochrome(int sw) {
  if (sw != 0) {
    monochrome_mode = 1;
    RequestBlackWhiteMode();
    return;
  }
  monochrome_mode = 0;
  CancelBlackWhiteMode();
  return;
}

void InitExFade1(int fl, int time1) {
  int iVar1;
  
  if (fl == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = 0xb;
    if (fl != 1) {
      ef_exfade1_time1 = time1;
      return;
    }
  }
  ef_exfade1_flow2 = iVar1;
  ef_exfade1_time1 = time1;
  return;
}

int SetExFade1() {
	static int cnt1;
	static int cnt2;
	int sec2_1;
	u_char dsp[2];
	u_char dal[2];
	u_char nal[2];
	u_char dalp;
	u_char dspd;
	static u_char nalp;
	float per2;
	
  byte bVar1;
  float fVar2;
  uchar dsp [2];
  uchar dal [2];
  uchar nal [2];
  
  if (ef_exfade1_flow2 == 0xb) {
    shibata_set_off = 0;
    return 1;
  }
  if (ef_exfade1_flow2 != 9) {
    if (9 < ef_exfade1_flow2) {
      bVar1 = DAT_00356511;
      if ((ef_exfade1_flow2 != 10) && (bVar1 = nalp_383, ef_exfade1_flow2 == 0xb)) {
        shibata_set_off = 0;
        bVar1 = DAT_00356511;
      }
      goto LAB_00130e44;
    }
    bVar1 = nalp_383;
    if (ef_exfade1_flow2 != 8) goto LAB_00130e44;
    ef_exfade1_flow2 = 9;
    shibata_set_off = 1;
    cnt2_382 = 0;
  }
  fVar2 = (float)cnt2_382;
  cnt2_382 = cnt2_382 + 1;
  bVar1 = DAT_00356510 +
          (char)(int)((float)((uint)DAT_00356511 - (uint)DAT_00356510) *
                     (fVar2 / (float)ef_exfade1_time1));
  if (ef_exfade1_time1 <= cnt2_382) {
    ef_exfade1_flow2 = 10;
  }
LAB_00130e44:
  nalp_383 = bVar1;
  SetEffects(2,1);
  SetEffects(0xc,1);
  SetEffects(9,1);
  return (uint)(ef_exfade1_flow2 == 0xb);
}

void InitExFade2(int fl, int time1, int time2, int time3) {
  ef_exfade2_flow1 = 3;
  ef_exfade2_time1 = time1;
  if (fl == 0) {
    ef_exfade2_flow1 = 0;
  }
  ef_exfade2_time2 = time2;
  ef_exfade2_time3 = time3;
  return;
}

int SetExFade2() {
	static int cnt1;
	int sec1_1;
	int sec1_2;
	int sec1_3;
	u_char bal[3];
	u_char dfr[2];
	u_char dal[2];
	u_char ccl[2];
	u_char cal[2];
	static u_char balp;
	u_char dfrt;
	u_char dalp;
	u_char ccol;
	u_char calp;
	float per1;
	
  float fVar1;
  uchar bal [3];
  uchar dfr [2];
  uchar dal [2];
  uchar ccl [2];
  uchar cal [2];
  
  switch(ef_exfade2_flow1) {
  case 0:
    shibata_set_off = 1;
    cnt1_390 = 0;
    ef_exfade2_flow1 = 1;
  case 1:
    fVar1 = (float)cnt1_390;
    cnt1_390 = cnt1_390 + 1;
    balp_391 = DAT_00356518 +
               (char)(int)((float)((uint)DAT_00356519 - (uint)DAT_00356518) *
                          (fVar1 / (float)ef_exfade2_time1));
    if (ef_exfade2_time1 <= cnt1_390) {
      ef_exfade2_flow1 = 2;
    }
    break;
  case 2:
    balp_391 = DAT_00356519;
    break;
  case 3:
    cnt1_390 = 0;
    ef_exfade2_flow1 = 4;
  case 4:
    fVar1 = (float)cnt1_390;
    cnt1_390 = cnt1_390 + 1;
    balp_391 = DAT_00356519 +
               (char)(int)((float)((uint)DAT_0035651a - (uint)DAT_00356519) *
                          (fVar1 / (float)ef_exfade2_time2));
    if (ef_exfade2_time2 <= cnt1_390) {
      ef_exfade2_flow1 = 5;
      cnt1_390 = 0;
    }
    break;
  case 5:
    fVar1 = (float)cnt1_390;
    cnt1_390 = cnt1_390 + 1;
    balp_391 = DAT_0035651a +
               (char)(int)((float)((uint)DAT_00356518 - (uint)DAT_0035651a) *
                          (fVar1 / (float)ef_exfade2_time3));
    if (ef_exfade2_time3 <= cnt1_390) {
      ef_exfade2_flow1 = 6;
      shibata_set_off = 0;
    }
    break;
  default:
    shibata_set_off = 0;
    return 1;
  case -0x452e541f:
    break;
  }
  if (ef_exfade2_flow1 < 6) {
    SetEffects(9,1);
    SetEffects(3,1);
    SetEffects(6,1);
    SetEffects(2,1);
    SetEffects(0xd,1);
  }
  return (uint)(ef_exfade2_flow1 == 6);
}

void InitScreenSaver() {
  memset(&hand_wrk,0,0xd0);
  return;
}

void SetScreenSaver() {
	int i;
	int r3;
	int l3;
	u_int pad_all;
	ONE_HAND *ohp;
	DISP_SPRT ds;
	SPRT_DAT hand_dat;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ONE_HAND *pOVar7;
  float fVar8;
  undefined in_vf0 [16];
  undefined auVar9 [16];
  undefined4 in_vuR;
  DISP_SPRT ds;
  SPRT_DAT hand_dat;
  
  uVar2 = hand_wrk.top;
  hand_dat.tex0 = DAT_0034b1c0;
  hand_dat._8_8_ = DAT_0034b1c8;
  hand_dat._16_8_ = DAT_0034b1d0;
  hand_dat._24_8_ = DAT_0034b1d8;
  if ((ingame_wrk.stts & 0x20) == 0) {
    iVar4 = pad[0].analog[1] - 0x80;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar5 = pad[0].analog[0] - 0x80;
    iVar6 = pad[0].analog[3] - 0x80;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar3 = pad[0].analog[2] - 0x80;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((uint)(ushort)*key_now[0] + (uint)(ushort)*key_now[7] +
        (uint)(ushort)*key_now[3] + (uint)(ushort)*key_now[5] +
        (uint)(ushort)*key_now[1] + (uint)(ushort)*key_now[2] +
        (uint)(ushort)*key_now[4] + (uint)(ushort)*key_now[6] + (uint)(ushort)*key_now[8] +
        (uint)(ushort)*key_now[9] + (uint)(ushort)*key_now[10] + (uint)(ushort)*key_now[11] +
        (uint)(ushort)*key_now[13] + (uint)(ushort)*key_now[12] +
        (iVar5 < 0x20 ^ 1) + (iVar4 < 0x20 ^ 1) + (iVar3 < 0x20 ^ 1) + (iVar6 < 0x20 ^ 1) == 0) {
      hand_wrk.count = hand_wrk.count + 1;
    }
    else {
      hand_wrk.count = 0;
    }
    if (17999 < hand_wrk.count) {
      iVar4 = hand_wrk.wait + -1;
      bVar1 = hand_wrk.wait < 1;
      hand_wrk.wait = iVar4;
      if (bVar1) {
        pOVar7 = hand_wrk.oh + hand_wrk.top;
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
        iVar4 = dptoli((long)((double)(SUB164(auVar9,0) * 1.5) + 2.0));
        pOVar7->scl = (float)(int)(short)iVar4;
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        hand_wrk.oh[uVar2].rot = (ushort)(int)(SUB164(auVar9,0) * 360.0 - 180.0);
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
        if ((int)hand_wrk.top < 0) {
          fVar8 = (float)hand_wrk.top + (float)hand_wrk.top;
        }
        else {
          fVar8 = (float)hand_wrk.top;
        }
        hand_wrk.oh[uVar2].bx = (ushort)(int)(SUB164(auVar9,0) * 370.0 + fVar8 * 220.0);
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
        hand_wrk.oh[uVar2].by =
             (ushort)(int)(SUB164(auVar9,0) * 274.0 + (float)(hand_wrk.top >> 1) * 124.0);
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
        hand_wrk.oh[uVar2].alp = 0xff;
        hand_wrk.oh[uVar2].flip = (uchar)(int)(SUB164(auVar9,0) + SUB164(auVar9,0));
                    /* inlined from effect.h */
        auVar9 = _vrnext(in_vuR);
        auVar9 = _vsubbc(auVar9,in_vf0);
        auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
        hand_wrk.top = hand_wrk.top + 1 & 0xf;
        hand_wrk.wait = (int)(SUB164(auVar9,0) * 70.0) + 0x14;
      }
      iVar4 = 0;
      SetSprFile2(0x1fc8000,0);
      do {
        if (hand_wrk.oh[iVar4].alp != '\0') {
          CopySprDToSpr(&ds,&hand_dat);
          ds.pri = 0x10;
          ds.z = 0xfffffef;
          ds.tex1 = 0x161;
          ds.alphar = 0x44;
          uVar2 = ds.att | 2;
          if (hand_wrk.oh[iVar4].flip == '\0') {
            uVar2 = ds.att;
          }
          ds.alpha = hand_wrk.oh[iVar4].alp >> 1;
          iVar6 = (int)(short)hand_wrk.oh[iVar4].bx;
          ds.crx = (float)iVar6;
          ds.x = (float)(iVar6 - (uint)((ushort)hand_dat.w >> 1));
          iVar6 = (int)(short)hand_wrk.oh[iVar4].by;
          ds.cry = (float)iVar6;
          ds.y = (float)(iVar6 - (uint)((ushort)hand_dat.h >> 1));
          ds.scw = hand_wrk.oh[iVar4].scl;
          ds.sch = hand_wrk.oh[iVar4].scl;
          ds.rot = (float)(int)(short)hand_wrk.oh[iVar4].rot;
          ds.att = uVar2;
          ds.csx = ds.crx;
          ds.csy = ds.cry;
          DispSprD(&ds);
          iVar6 = hand_wrk.oh[iVar4].alp - 1;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          hand_wrk.oh[iVar4].alp = (uchar)iVar6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
    }
  }
  else {
    hand_wrk.count = 0;
  }
  return;
}

void SetScreenEffect() {
	SBTSET screen_effect[7];
	int n;
	
  undefined4 uVar1;
  ulong *puVar2;
  SBTSET *pSVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  SBTSET screen_effect [7];
  
  pSVar3 = screen_effect;
  puVar2 = &DAT_0034b1e0;
  do {
    puVar4 = puVar2;
    puVar6 = (ulong *)pSVar3;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    uVar9 = puVar4[3];
    *puVar6 = *puVar4;
    puVar6[1] = uVar7;
    puVar6[2] = uVar8;
    puVar6[3] = uVar9;
    pSVar3 = (SBTSET *)(puVar6 + 4);
    puVar2 = puVar4 + 4;
  } while (puVar4 + 4 != (ulong *)&UNK_0034b340);
  uVar1 = *(undefined4 *)(puVar4 + 5);
  uVar5 = (int)puVar6 + 0x27U & 7;
  puVar2 = (ulong *)(((int)puVar6 + 0x27U) - uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | _UNK_0034b340 >> (7 - uVar5) * 8;
  puVar6[4] = _UNK_0034b340;
  *(undefined4 *)(puVar6 + 5) = uVar1;
  if (ingame_wrk.game == 1) {
    uVar5 = *(uint *)(&battle_scr_effct + (uint)btl_wrk.stage_no * 4);
    if (uVar5 == 0xffffffff) {
      return;
    }
  }
  else {
    uVar5 = (uint)(ingame_wrk.msn_no != 0);
  }
  msbtset.mn.sw = screen_effect[uVar5].mn.sw;
  msbtset.ng.alp2 = screen_effect[uVar5].ng.alp2;
  msbtset.ng.alp = screen_effect[uVar5].ng.alp;
  msbtset.ng.col = screen_effect[uVar5].ng.col;
  msbtset.ng.sw = screen_effect[uVar5].ng.sw;
  msbtset.df.rate = screen_effect[uVar5].df.rate;
  msbtset.df.type = screen_effect[uVar5].df.type;
  msbtset.df.sw = screen_effect[uVar5].df.sw;
  msbtset.dt.cmax = screen_effect[uVar5].dt.cmax;
  msbtset.dt.amax = screen_effect[uVar5].dt.amax;
  msbtset.dt.alp = screen_effect[uVar5].dt.alp;
  msbtset.dt.spd = screen_effect[uVar5].dt.spd;
  msbtset.dt.type = screen_effect[uVar5].dt.type;
  msbtset.dt.sw = screen_effect[uVar5].dt.sw;
  msbtset.ff.alp = screen_effect[uVar5].ff.alp;
  msbtset.ff.sw = screen_effect[uVar5].ff.sw;
  msbtset.cn.alp = screen_effect[uVar5].cn.alp;
  msbtset.cn.col = screen_effect[uVar5].cn.col;
  msbtset.cn.type = screen_effect[uVar5].cn.type;
  msbtset.cn.sw = screen_effect[uVar5].cn.sw;
  msbtset.bl.y = screen_effect[uVar5].bl.y;
  msbtset.bl.x = screen_effect[uVar5].bl.x;
  msbtset.bl.rot = screen_effect[uVar5].bl.rot;
  msbtset.bl.scl = screen_effect[uVar5].bl.scl;
  msbtset.bl.alp = screen_effect[uVar5].bl.alp;
  msbtset.bl.sw = screen_effect[uVar5].bl.sw;
  return;
}
