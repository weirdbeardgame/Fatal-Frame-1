// STATUS: NOT STARTED

typedef struct {
	int screen_flag;
	int time;
	int cnt;
	u_char col_r;
	u_char col_g;
	u_char col_b;
	u_char now_alpha;
} SCRCTRL;

static SCRCTRL sc_col = {
	/* .screen_flag = */ 0,
	/* .time = */ 0,
	/* .cnt = */ 0,
	/* .col_r = */ 0,
	/* .col_g = */ 0,
	/* .col_b = */ 0,
	/* .now_alpha = */ 0
};
static int old_ltol_addr1 = -1;
static int old_ltol_addr2 = -1;
static u_char old_cam_no;
static SPRITE_DATA commonsp;
static u_long128 *buf;
static u_long128 *buf2;
static u_long128 *bufz;
int vib1_time = 0;
int vib2_time = 0;
int vib2_pow = 0;
int tecmo_logo_flow = 0;

void InitEffectSub() {
  buf = (uint16 *)0x1e90000;
  buf2 = (uint16 *)0x1f1c000;
  bufz = (uint16 *)0x5000000;
  vib1_time = 0;
  vib2_time = 0;
  vib2_pow = 0;
  return;
}

void SetParam(int alp, int time, u_char r, u_char g, u_char b, int flag) {
  sc_col.screen_flag = flag;
  sc_col.now_alpha = (uchar)alp;
  sc_col.time = time;
  sc_col.col_r = r;
  sc_col.col_g = g;
  sc_col.col_b = b;
  sc_col.cnt = 0;
  return;
}

int ScreenCtrl() {
  uint uVar1;
  
  if (sc_col.now_alpha != '\0') {
    SetPanel2(0x10,0.0,0.0,640.0,448.0,0,sc_col.col_r,sc_col.col_g,sc_col.col_g,sc_col.now_alpha);
  }
  if (sc_col.screen_flag == 1) {
    if (sc_col.time == 0) {
      trap(7);
    }
    uVar1 = ((sc_col.time - sc_col.cnt) * 0x80) / sc_col.time;
    if (sc_col.time <= sc_col.cnt) {
      sc_col.screen_flag = 0;
    }
    sc_col.now_alpha = (uchar)uVar1;
    if ((uVar1 & 0xff) == 0) {
      sc_col.cnt = sc_col.cnt + 1;
      InitLoadStartLock();
      return sc_col.screen_flag;
    }
  }
  else {
    if (sc_col.screen_flag < 2) {
      return sc_col.screen_flag;
    }
    if (sc_col.screen_flag != 2) {
      return sc_col.screen_flag;
    }
    if (sc_col.time == 0) {
      trap(7);
    }
    if (sc_col.time <= sc_col.cnt) {
      sc_col.screen_flag = 0;
    }
    sc_col.now_alpha = (uchar)((sc_col.cnt << 7) / sc_col.time);
  }
  sc_col.cnt = sc_col.cnt + 1;
  return sc_col.screen_flag;
}

void SetSquareS(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  SetSquare(pri,x1,y1,x1,y4,x4,y1,x4,y4,r,g,b,a);
  return;
}

void SetSquare(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
	int x[4];
	int y[4];
	int z;
	int mpri;
	float div;
	
  Q_WORDDATA *pQVar1;
  uint uVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  float fVar7;
  int x [4];
  int y [4];
  
  fVar7 = 1.0;
  if (g_bInterlace != '\0') {
    fVar7 = 2.0;
  }
  uVar2 = 0x1000;
  if (0 < pri) {
    uVar2 = pri;
  }
  Reserve2DPacket(uVar2);
  pQVar6 = pbuf;
  pQVar3 = pbuf + ndpkt;
  pQVar5 = pbuf + ndpkt + 1;
  pQVar4 = pbuf + ndpkt + 2;
  pQVar1 = pbuf + ndpkt + 3;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = 0x7000000a;
  pQVar5->ul64[1] = 0xe;
  pQVar5->ul64[0] = 0x1000000000008003;
  pQVar4->ul64[1] = 0x42;
  pQVar4->ul64[0] = ((long)(char)a & 0xffU) << 0x20 | 100;
  pQVar1->ul64[1] = 0x47;
  pQVar1->ul64[0] = 0x5000d;
  pQVar1 = pQVar6 + ndpkt + 6;
  pQVar6[ndpkt + 4].ul64[0] = 0x100008c;
  pQVar6[ndpkt + 4].ul64[1] = 0x4e;
  pQVar3 = pQVar6 + ndpkt + 7;
  pQVar6[ndpkt + 5].ul64[1] = 0x44441;
  pQVar6[ndpkt + 5].ul64[0] = 0x5022400000008001;
  uVar2 = 0xfffffff - uVar2;
  pQVar1->ui32[0] = (int)(char)r & 0xff;
  pQVar1->ui32[3] = 0x80;
  pQVar4 = pQVar6 + ndpkt + 8;
  pQVar1->ui32[1] = (int)(char)g & 0xff;
  pQVar1->ui32[2] = (int)(char)b & 0xff;
  pQVar1 = pQVar6 + ndpkt + 9;
  pQVar3->ui32[0] = (int)((x1 + 2048.0) * 16.0);
  pQVar6 = pQVar6 + ndpkt + 10;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[1] = (int)((y1 / fVar7 + 2048.0) * 16.0);
  pQVar3->ui32[2] = uVar2;
  pQVar4->ui32[0] = (int)((x2 + 2048.0) * 16.0);
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[1] = (int)((y2 / fVar7 + 2048.0) * 16.0);
  pQVar4->ui32[2] = uVar2;
  pQVar1->ui32[0] = (int)((x3 + 2048.0) * 16.0);
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[1] = (int)((y3 / fVar7 + 2048.0) * 16.0);
  pQVar1->ui32[2] = uVar2;
  pQVar6->ui32[0] = (int)((x4 + 2048.0) * 16.0);
  pQVar6->ui32[2] = uVar2;
  pQVar6->ui32[1] = (int)((y4 / fVar7 + 2048.0) * 16.0);
  pQVar6->ui32[3] = 0;
  ndpkt = ndpkt + 0xb;
  return;
}

void SetSquare2s(int pri, float x1, float y1, float x4, float y4, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, u_char a) {
	int x[4];
	int y[4];
	int z;
	int mpri;
	float div;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int x [4];
  int y [4];
  
  fVar12 = 1.0;
  if (g_bInterlace != '\0') {
    fVar12 = 2.0;
  }
  uVar7 = 0x1000;
  if (0 < pri) {
    uVar7 = pri;
  }
  Reserve2DPacket(uVar7);
  pQVar2 = pbuf;
  pQVar1 = pbuf + ndpkt;
  pQVar5 = pbuf + ndpkt + 1;
  uVar8 = (uint)((x1 + 2048.0) * 16.0);
  uVar9 = (uint)((y4 / fVar12 + 2048.0) * 16.0);
  uVar10 = (uint)((x4 + 2048.0) * 16.0);
  uVar11 = (uint)((y1 / fVar12 + 2048.0) * 16.0);
  pQVar3 = pbuf + ndpkt + 2;
  pQVar1->ui32[0] = 0;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[0] = (uint)&DAT_7000000c;
  pQVar5->ul64[1] = 0xe;
  pQVar5->ul64[0] = 0x1000000000008002;
  pQVar3->ul64[1] = 0x42;
  pQVar3->ul64[0] = ((long)(char)a & 0xffU) << 0x20 | 100;
  pQVar2[ndpkt + 3].ul64[1] = 0x4e;
  pQVar2[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar1 = pQVar2 + ndpkt + 5;
  pQVar2[ndpkt + 4].ul64[1] = 0x41414141;
  pQVar2[ndpkt + 4].ul64[0] = 0x8026400000008001;
  pQVar1->ui32[3] = 0x80;
  pQVar3 = pQVar2 + ndpkt + 6;
  pQVar1->ui32[0] = (int)(char)r1 & 0xffU;
  pQVar1->ui32[1] = (int)(char)g1 & 0xffU;
  pQVar1->ui32[2] = (int)(char)b1 & 0xffU;
  uVar7 = 0xfffffff - uVar7;
  pQVar1 = pQVar2 + ndpkt + 7;
  pQVar3->ui32[0] = uVar8;
  pQVar5 = pQVar2 + ndpkt + 8;
  pQVar4 = pQVar2 + ndpkt + 9;
  pQVar3->ui32[1] = uVar11;
  pQVar3->ui32[2] = uVar7;
  pQVar6 = pQVar2 + ndpkt + 10;
  pQVar3->ui32[3] = 0;
  pQVar1->ui32[0] = (int)(char)r1 & 0xffU;
  pQVar3 = pQVar2 + ndpkt + 0xb;
  pQVar1->ui32[1] = (int)(char)g1 & 0xffU;
  pQVar1->ui32[2] = (int)(char)b1 & 0xffU;
  pQVar1->ui32[3] = 0x80;
  pQVar2 = pQVar2 + ndpkt + 0xc;
  pQVar5->ui32[0] = uVar10;
  pQVar5->ui32[3] = 0;
  pQVar5->ui32[1] = uVar11;
  pQVar5->ui32[2] = uVar7;
  pQVar4->ui32[0] = (int)(char)r2 & 0xffU;
  pQVar4->ui32[1] = (int)(char)g2 & 0xffU;
  pQVar4->ui32[3] = 0x80;
  pQVar4->ui32[2] = (int)(char)b2 & 0xffU;
  pQVar6->ui32[0] = uVar8;
  pQVar6->ui32[3] = 0;
  pQVar6->ui32[1] = uVar9;
  pQVar6->ui32[2] = uVar7;
  pQVar3->ui32[0] = (int)(char)r2 & 0xffU;
  pQVar3->ui32[1] = (int)(char)g2 & 0xffU;
  pQVar3->ui32[3] = 0x80;
  pQVar3->ui32[2] = (int)(char)b2 & 0xffU;
  pQVar2->ui32[0] = uVar10;
  pQVar2->ui32[2] = uVar7;
  pQVar2->ui32[1] = uVar9;
  pQVar2->ui32[3] = 0;
  ndpkt = ndpkt + 0xd;
  return;
}

void SetSquareZ(int pri, float x1, float y1, float x4, float y4, int z) {
	int x[4];
	int y[4];
	float div;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  float fVar5;
  int x [4];
  int y [4];
  
  fVar5 = 1.0;
  if (g_bInterlace != '\0') {
    fVar5 = 2.0;
  }
  Reserve2DPacket(0);
  pQVar2 = pbuf;
  pQVar3 = pbuf + ndpkt;
  pQVar4 = pbuf + ndpkt + 1;
  pQVar1 = pbuf + ndpkt + 2;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = (uint)&DAT_70000008;
  pQVar4->ul64[1] = 0xe;
  pQVar4->ul64[0] = 0x1000000000008003;
  pQVar1->ul64[1] = 0x42;
  pQVar1->ul64[0] = (long)pri << 0x20 | 100;
  pQVar2[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar2[ndpkt + 3].ul64[1] = 0x4e;
  pQVar2[ndpkt + 4].ul64[0] = 0x50003;
  pQVar2[ndpkt + 4].ul64[1] = 0x47;
  pQVar2[ndpkt + 5].ul64[0] = 0x3023400000008001;
  pQVar2[ndpkt + 5].ul64[1] = 0x441;
  pQVar1 = pQVar2 + ndpkt + 6;
  pQVar1->ui32[3] = 0x80;
  pQVar1->ui32[0] = 0x80;
  pQVar3 = pQVar2 + ndpkt + 7;
  pQVar1->ui32[1] = 0x80;
  pQVar1->ui32[2] = 0x80;
  pQVar2 = pQVar2 + ndpkt + 8;
  pQVar3->ui32[0] = (int)((x1 + 2048.0) * 16.0);
  pQVar3->ui32[1] = (int)((y1 / fVar5 + 2048.0) * 16.0);
  pQVar3->iv[2] = z;
  pQVar3->ui32[3] = 0;
  pQVar2->ui32[0] = (int)((x4 + 2048.0) * 16.0);
  pQVar2->iv[2] = z;
  pQVar2->ui32[1] = (int)((y4 / fVar5 + 2048.0) * 16.0);
  pQVar2->ui32[3] = 0;
  ndpkt = ndpkt + 9;
  return;
}

void SetPanel(u_int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
  SetPanel2(pri,x1,y1,x2,y2,1,r,g,b,a);
  return;
}

void SetPanel2(u_int pri, float x1, float y1, float x2, float y2, int z, u_char r, u_char g, u_char b, u_char a) {
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034a500 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_0034a500;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034a508 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_0034a508;
  uVar2 = (uint)&sq.alpha & 7;
  puVar4 = &sq.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034a510 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_0034a510;
  CopySqrDToSqr(&dq,&sq);
  dq.x[0] = (int)x1;
  dq.zbuf = (long)z << 0x20 | 0x100008c;
  dq.y[0] = (int)y1;
  dq.z = 0xfffffff - pri;
  dq.x[1] = dq.x[0] + (int)(x2 - x1);
  dq.y[2] = dq.y[0] + (int)(y2 - y1);
  iVar5 = 0;
  do {
    dq.r[iVar5] = r;
    puVar4 = dq.b + iVar5;
    dq.g[iVar5] = g;
    iVar5 = iVar5 + 1;
    *puVar4 = b;
  } while (iVar5 < 4);
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  dq.pri = pri;
  dq.alpha = a;
  DispSqrD(&dq);
  return;
}

void SetSquareSN(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  SetSquare(pri,x1,y1,x1,y4,x4,y1,x4,y4,r,g,b,a);
  return;
}

void SetSquareN(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  return;
}

void SetTriangle(int pri, float x1, float y1, float x2, float y2, float x3, float y3, u_char r, u_char g, u_char b, u_char a) {
	int x[3];
	int y[3];
	int z;
	int mpri;
	float div;
	
  Q_WORDDATA *pQVar1;
  uint uVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  float fVar6;
  int x [3];
  int y [3];
  
  fVar6 = 1.0;
  if (g_bInterlace != '\0') {
    fVar6 = 2.0;
  }
  uVar2 = 0x1000;
  if (0 < pri) {
    uVar2 = pri;
  }
  Reserve2DPacket(uVar2);
  pQVar3 = pbuf;
  pQVar5 = pbuf + ndpkt + 1;
  pQVar4 = pbuf + ndpkt;
  pQVar1 = pbuf + ndpkt + 2;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = (uint)&DAT_70000008;
  pQVar5->ul64[1] = 0xe;
  pQVar5->ul64[0] = 0x1000000000008002;
  pQVar1->ul64[1] = 0x42;
  pQVar1->ul64[0] = ((long)(char)a & 0xffU) << 0x20 | 100;
  pQVar3[ndpkt + 3].ul64[1] = 0x4e;
  pQVar3[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar3[ndpkt + 4].ul64[1] = 0x4441;
  pQVar1 = pQVar3 + ndpkt + 5;
  pQVar3[ndpkt + 4].ul64[0] = 0x4022400000008001;
  pQVar1->ui32[3] = 0x80;
  pQVar1->ui32[0] = (int)(char)r & 0xff;
  pQVar4 = pQVar3 + ndpkt + 6;
  pQVar1->ui32[1] = (int)(char)g & 0xff;
  pQVar1->ui32[2] = (int)(char)b & 0xff;
  uVar2 = 0xfffffff - uVar2;
  pQVar4->ui32[0] = (int)((x1 + 2048.0) * 16.0);
  pQVar1 = pQVar3 + ndpkt + 7;
  pQVar3 = pQVar3 + ndpkt + 8;
  pQVar4->ui32[2] = uVar2;
  pQVar4->ui32[1] = (int)((y1 / fVar6 + 2048.0) * 16.0);
  pQVar4->ui32[3] = 0;
  pQVar1->ui32[0] = (int)((x2 + 2048.0) * 16.0);
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[1] = (int)((y2 / fVar6 + 2048.0) * 16.0);
  pQVar1->ui32[2] = uVar2;
  pQVar3->ui32[0] = (int)((x3 + 2048.0) * 16.0);
  pQVar3->ui32[2] = uVar2;
  pQVar3->ui32[1] = (int)((y3 / fVar6 + 2048.0) * 16.0);
  pQVar3->ui32[3] = 0;
  ndpkt = ndpkt + 9;
  return;
}

void SetTriangleZ(int pri, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, u_char r, u_char g, u_char b, u_char a) {
	int x[3];
	int y[3];
	float div;
	
  uint uVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  float fVar6;
  int x [3];
  int y [3];
  
  fVar6 = 1.0;
  if (g_bInterlace != '\0') {
    fVar6 = 2.0;
  }
  uVar1 = 0x1000;
  if (0 < pri) {
    uVar1 = pri;
  }
  Reserve2DPacket(uVar1);
  pQVar5 = pbuf;
  pQVar4 = pbuf + ndpkt;
  pQVar3 = pbuf + ndpkt + 1;
  pQVar2 = pbuf + ndpkt + 2;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x70000009;
  pQVar3->ul64[1] = 0xe;
  pQVar3->ul64[0] = 0x1000000000008003;
  pQVar2->ul64[1] = 0x42;
  pQVar2->ul64[0] = ((long)(char)b & 0xffU) << 0x20 | 100;
  pQVar5[ndpkt + 3].ul64[1] = 0x47;
  pQVar5[ndpkt + 3].ul64[0] = 0x50000;
  pQVar5[ndpkt + 4].ul64[1] = 0x4e;
  pQVar5[ndpkt + 4].ul64[0] = 0x100008c;
  pQVar5[ndpkt + 5].ul64[0] = 0x4022400000008001;
  pQVar5[ndpkt + 5].ul64[1] = 0x4441;
  pQVar2 = pQVar5 + ndpkt + 6;
  pQVar2->ui32[0] = (uint)z3 & 0xff;
  pQVar2->ui32[1] = (int)(char)r & 0xff;
  ndpkt = ndpkt + 7;
  pQVar2->ui32[2] = (int)(char)g & 0xff;
  pQVar2->ui32[3] = 0x80;
  pQVar5 = pQVar5 + ndpkt;
  pQVar5->ui32[0] = (int)((x1 + 2048.0) * 16.0);
  pQVar5->ui32[1] = (int)((y1 / fVar6 + 2048.0) * 16.0);
  uVar1 = fptoui(z1);
  pQVar2 = pbuf;
  pQVar5->ui32[2] = uVar1;
  pQVar2->ui32[ndpkt * 4 + 3] = 0;
  pQVar2 = pQVar2 + ndpkt + 1;
  ndpkt = ndpkt + 1;
  pQVar2->ui32[0] = (int)((x2 + 2048.0) * 16.0);
  pQVar2->ui32[1] = (int)((y2 / fVar6 + 2048.0) * 16.0);
  uVar1 = fptoui(z2);
  pQVar5 = pbuf;
  pQVar2->ui32[2] = uVar1;
  pQVar5->ui32[ndpkt * 4 + 3] = 0;
  ndpkt = ndpkt + 1;
  pQVar5 = pQVar5 + ndpkt;
  pQVar5->ui32[0] = (int)((x3 + 2048.0) * 16.0);
  pQVar5->ui32[1] = (int)((y3 / fVar6 + 2048.0) * 16.0);
  uVar1 = fptoui(param_15);
  pQVar2 = pbuf;
  pQVar5->ui32[2] = uVar1;
  pQVar2->ui32[ndpkt * 4 + 3] = 0;
  ndpkt = ndpkt + 1;
  return;
}

void SetLine(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	int x[2];
	int y[2];
	int z;
	int mpri;
	float div;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  uint pri_00;
  float fVar5;
  int x [2];
  int y [2];
  
  fVar5 = 1.0;
  if (g_bInterlace != '\0') {
    fVar5 = 2.0;
  }
  pri_00 = 0x1000;
  if (0 < pri) {
    pri_00 = pri;
  }
  Reserve2DPacket(pri_00);
  pQVar1 = pbuf;
  pQVar4 = pbuf + ndpkt;
  pQVar3 = pbuf + ndpkt + 1;
  pQVar2 = pbuf + ndpkt + 2;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x70000007;
  pQVar3->ul64[1] = 0xe;
  pQVar3->ul64[0] = 0x1000000000008002;
  pQVar2->ul64[1] = 0x42;
  pQVar2->ul64[0] = ((long)(char)a & 0xffU) << 0x20 | 100;
  pQVar1[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar1[ndpkt + 3].ul64[1] = 0x4e;
  pQVar1[ndpkt + 4].ul64[0] = 0x3020c00000008001;
  pQVar1[ndpkt + 4].ul64[1] = 0x441;
  pQVar2 = pQVar1 + ndpkt + 5;
  pQVar2->ui32[0] = (int)(char)r & 0xff;
  pQVar2->ui32[3] = 0x80;
  pQVar2->ui32[1] = (int)(char)g & 0xff;
  pQVar3 = pQVar1 + ndpkt + 6;
  pQVar2->ui32[2] = (int)(char)b & 0xff;
  pQVar3->ui32[0] = (int)((x1 + 2048.0) * 16.0);
  pQVar1 = pQVar1 + ndpkt + 7;
  pQVar3->ui32[2] = 0xfffffff - pri_00;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[1] = (int)((y1 / fVar5 + 2048.0) * 16.0);
  pQVar1->ui32[0] = (int)((x2 + 2048.0) * 16.0);
  pQVar1->ui32[2] = 0xfffffff - pri_00;
  pQVar1->ui32[1] = (int)((y2 / fVar5 + 2048.0) * 16.0);
  pQVar1->ui32[3] = 0;
  ndpkt = ndpkt + 8;
  return;
}

void SetLine2(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	float d;
	float dw;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar2 = (int)(char)g & 0xff;
  uVar1 = (int)(char)r & 0xff;
  uVar3 = (int)(char)b & 0xff;
  fVar4 = SgAtanf((x1 - x2) / (y1 - y2));
  fVar4 = (fVar4 * 180.0) / DAT_00355178;
  if ((45.0 < fVar4) || (fVar4 < -45.0)) {
    uVar1 = (int)((float)uVar1 * 0.5) & 0xff;
    uVar2 = (int)((float)uVar2 * 0.5) & 0xff;
    uVar3 = (int)((float)uVar3 * 0.5) & 0xff;
  }
  else if ((30.0 < fVar4) || (fVar4 < -30.0)) {
    if (fVar4 < 0.0) {
      fVar4 = -fVar4;
    }
    fVar4 = ((45.0 - fVar4) * 0.5) / 15.0 + 0.5;
    uVar3 = (int)((float)uVar3 * fVar4) & 0xff;
    uVar1 = (int)((float)uVar1 * fVar4) & 0xff;
    uVar2 = (int)((float)uVar2 * fVar4) & 0xff;
  }
  SetLine(pri,x1,y1,x2,y2,(uchar)uVar1,(uchar)uVar2,(uchar)uVar3,a);
  return;
}

void DrawPoint(float *mpos, int no) {
	int n;
	int clip;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR fzero;
	sceVu0IVECTOR ivec;
	
  char cVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4];
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)mpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  sceVu0RotTransPers(ivec,(Matrix4x4 *)slm,fzero,0);
  cVar1 = 0x2800 < ivec[0] - 0x6c00U;
  if (0xe00 < ivec[1] - 0x7900U) {
    cVar1 = cVar1 + '\x01';
  }
  if ((char)(cVar1 + (0xffff00 < ivec[2] - 0xffU)) == '\0') {
    Reserve2DPacket(0x1000);
    pQVar2 = pbuf;
    pQVar5 = pbuf + ndpkt;
    pQVar5->ui32[0] = 0;
    pQVar5->ui32[1] = 0;
    pQVar5->ui32[2] = 0;
    pQVar5->ui32[3] = 0;
    pQVar5->ui32[0] = 0x70000000;
    pQVar2[ndpkt + 1].ul64[1] = 0xe;
    pQVar2[ndpkt + 1].ul64[0] = 0x1000000000008003;
    pQVar2[ndpkt + 2].ul64[0] = 0x10100008c;
    pQVar2[ndpkt + 2].ul64[1] = 0x4e;
    pQVar2[ndpkt + 3].ul64[0] = 0x30003;
    pQVar2[ndpkt + 3].ul64[1] = 0x47;
    pQVar2[ndpkt + 4].ul64[1] = 0x42;
    pQVar2[ndpkt + 4].ul64[0] = 0x44;
    pQVar2[ndpkt + 5].ul64[1] = 0x41;
    pQVar2[ndpkt + 5].ul64[0] = 0x2060400000008001;
    pQVar3 = pQVar2 + ndpkt + 6;
    pQVar3->ui32[0] = 0xff;
    pQVar3->ui32[2] = no * 0xff;
    pQVar3->ui32[3] = 0x80;
    pQVar3->ui32[1] = no * 0xff;
    pQVar2 = pQVar2 + ndpkt + 7;
    iVar4 = ndpkt + -0x70000000;
    ndpkt = ndpkt + 8;
    pQVar2->iv[0] = ivec[0];
    pQVar2->iv[1] = ivec[1];
    pQVar2->ui32[3] = 0;
    pQVar2->iv[2] = ivec[2];
    pQVar5->ui32[0] = (ndpkt - iVar4) - 1;
  }
  return;
}

void DrawPoint2(float *mpos, u_char r, u_char g, u_char b, u_char a) {
	int n;
	int clip;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR fzero;
	sceVu0IVECTOR ivec;
	
  char cVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4];
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)mpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  sceVu0RotTransPers(ivec,(Matrix4x4 *)slm,fzero,0);
  cVar1 = 0x2800 < ivec[0] - 0x6c00U;
  if (0xe00 < ivec[1] - 0x7900U) {
    cVar1 = cVar1 + '\x01';
  }
  if ((char)(cVar1 + (0xffff00 < ivec[2] - 0xffU)) == '\0') {
    Reserve2DPacket(0x1000);
    pQVar3 = pbuf;
    pQVar5 = pbuf + ndpkt;
    pQVar5->ui32[0] = 0;
    pQVar5->ui32[1] = 0;
    pQVar5->ui32[2] = 0;
    pQVar5->ui32[3] = 0;
    pQVar5->ui32[0] = 0x70000000;
    pQVar3[ndpkt + 1].ul64[1] = 0xe;
    pQVar3[ndpkt + 1].ul64[0] = 0x1000000000008003;
    pQVar3[ndpkt + 2].ul64[0] = 0x10100008c;
    pQVar3[ndpkt + 2].ul64[1] = 0x4e;
    pQVar3[ndpkt + 3].ul64[0] = 0x5000d;
    pQVar3[ndpkt + 3].ul64[1] = 0x47;
    pQVar3[ndpkt + 4].ul64[0] = 0x44;
    pQVar3[ndpkt + 4].ul64[1] = 0x42;
    pQVar3[ndpkt + 5].ul64[0] = 0x2020400000008001;
    pQVar3[ndpkt + 5].ul64[1] = 0x41;
    pQVar2 = pQVar3 + ndpkt + 6;
    pQVar2->ui32[3] = (int)(char)a & 0xff;
    pQVar2->ui32[0] = (int)(char)r & 0xff;
    pQVar2->ui32[1] = (int)(char)g & 0xff;
    pQVar3 = pQVar3 + ndpkt + 7;
    pQVar2->ui32[2] = (int)(char)b & 0xff;
    iVar4 = ndpkt + -0x70000000;
    ndpkt = ndpkt + 8;
    pQVar3->iv[0] = ivec[0];
    pQVar3->iv[1] = ivec[1];
    pQVar3->ui32[3] = 0;
    pQVar3->iv[2] = ivec[2];
    pQVar5->ui32[0] = (ndpkt - iVar4) - 1;
  }
  return;
}

void DrawLine(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2) {
	u_char b2;
	u_char a2;
	int i;
	int n;
	int clip;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR fzero;
	sceVu0IVECTOR ivec[2];
	
  uint uVar1;
  Q_WORDDATA *pQVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  Q_WORDDATA *pQVar7;
  int (*paiVar8) [4];
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [2] [4];
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  wlm[0][0] = 25.0;
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)mpos1);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar8 = ivec;
  sceVu0RotTransPers(paiVar8,(Matrix4x4 *)slm,fzero,0);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)mpos2);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  sceVu0RotTransPers(ivec[1],(Matrix4x4 *)slm,fzero,0);
  uVar1 = 0;
  uVar3 = 0;
  do {
    if (64000 < (*paiVar8)[0] - 0x300U) {
      uVar1 = uVar1 | 1 << ((uVar3 & 7) << 2);
    }
    if (64000 < (*paiVar8)[1] - 0x300U) {
      uVar1 = uVar1 | 2 << ((uVar3 & 7) << 2);
    }
    if (0xffffff0 < (*paiVar8)[2] - 0xfU) {
      uVar1 = uVar1 | 4 << ((uVar3 & 7) << 2);
    }
    uVar3 = uVar3 + 1;
    paiVar8 = paiVar8[1];
  } while ((int)uVar3 < 2);
  if (uVar1 == 0) {
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    pQVar7 = pbuf + ndpkt;
    pQVar7->ui32[0] = 0;
    pQVar7->ui32[1] = 0;
    pQVar7->ui32[2] = 0;
    pQVar7->ui32[3] = 0;
    pQVar7->ui32[0] = 0x70000000;
    pQVar5[ndpkt + 1].ul64[1] = 0xe;
    pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008003;
    pQVar5[ndpkt + 2].ul64[0] = 0x100008c;
    pQVar5[ndpkt + 2].ul64[1] = 0x4e;
    pQVar5[ndpkt + 3].ul64[0] = 0x5000d;
    pQVar5[ndpkt + 3].ul64[1] = 0x47;
    pQVar5[ndpkt + 4].ul64[0] = 0x44;
    pQVar5[ndpkt + 4].ul64[1] = 0x42;
    pQVar5[ndpkt + 5].ul64[0] = 0x4024c00000008001;
    pQVar5[ndpkt + 5].ul64[1] = 0x4141;
    pQVar2 = pQVar5 + ndpkt + 6;
    pQVar2->ui32[3] = (int)(char)a1 & 0xff;
    pQVar2->ui32[0] = (int)(char)r1 & 0xff;
    pQVar2->ui32[1] = (int)(char)g1 & 0xff;
    pQVar4 = pQVar5 + ndpkt + 7;
    pQVar2->ui32[2] = (int)(char)b1 & 0xff;
    pQVar2 = pQVar5 + ndpkt + 8;
    iVar6 = ndpkt + -0x70000000;
    pQVar4->iv[0] = ivec[0][0];
    pQVar5 = pQVar5 + ndpkt + 9;
    ndpkt = ndpkt + 10;
    pQVar4->iv[1] = ivec[0][1];
    pQVar4->ui32[3] = 0;
    pQVar4->iv[2] = ivec[0][2];
    pQVar2->ui32[0] = (int)(char)r2 & 0xff;
    pQVar2->ui32[3] = a2 & 0xff;
    pQVar2->ui32[1] = (int)(char)g2 & 0xff;
    pQVar2->ui32[2] = b2 & 0xff;
    pQVar5->iv[0] = ivec[1][0];
    pQVar5->iv[1] = ivec[1][1];
    pQVar5->ui32[3] = 0;
    pQVar5->iv[2] = ivec[1][2];
    pQVar7->ui32[0] = (ndpkt - iVar6) - 1;
  }
  return;
}

void Set3DPosTexure(float *wlm[4], DRAW_ENV *de, int texno, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	int i;
	int bak;
	float th;
	float tw;
	u_int clpz2;
	u_long tx0;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR ppos[4];
	float twoby[11];
	float stq[2];
	U32DATA ts[4];
	U32DATA tt[4];
	U32DATA tq[4];
	
  ushort uVar1;
  U32DATA UVar2;
  ulong *puVar3;
  int *piVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  uint uVar7;
  float (*pafVar8) [4];
  int iVar9;
  Q_WORDDATA *pQVar10;
  Q_WORDDATA *pQVar11;
  ulong uVar12;
  Q_WORDDATA *pQVar13;
  U32DATA *pUVar14;
  U32DATA *pUVar15;
  U32DATA *pUVar16;
  int iVar17;
  U32DATA *pUVar18;
  uint uVar19;
  int iVar20;
  int (*paiVar21) [4];
  U32DATA *pUVar22;
  U32DATA *pUVar23;
  float fVar24;
  float fVar25;
  float num;
  float slm [4] [4];
  int ivec [4] [4];
  float ppos [4] [4];
  float twoby [11];
  float stq [2];
  U32DATA ts [4];
  U32DATA tt [4];
  U32DATA tq [4];
  DRAW_ENV *local_f0;
  int local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  ulong tx0;
  int (*local_d0) [4];
  
  local_e8 = (int)(char)r & 0xff;
  local_e4 = (int)(char)g & 0xff;
  local_e0 = (int)(char)b & 0xff;
  local_dc = (int)(char)a & 0xff;
  uVar19 = 0;
  ppos[0]._8_8_ = DAT_0034a528;
  ppos[2]._0_8_ = DAT_0034a540;
  ppos[2]._8_8_ = DAT_0034a548;
  ppos[0]._0_8_ = DAT_0034a520;
  ppos[1]._0_8_ = DAT_0034a530;
  ppos[1]._8_8_ = DAT_0034a538;
  ppos[3]._0_8_ = DAT_0034a550;
  ppos[3]._8_8_ = DAT_0034a558;
  uVar7 = (int)twoby + 7U & 7;
  puVar3 = (ulong *)(((int)twoby + 7U) - uVar7);
  local_f0 = de;
  local_ec = texno;
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034a560 >> (7 - uVar7) * 8;
  twoby._0_8_ = DAT_0034a560;
  uVar7 = (int)twoby + 0xfU & 7;
  puVar3 = (ulong *)(((int)twoby + 0xfU) - uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034a568 >> (7 - uVar7) * 8;
  twoby._8_8_ = DAT_0034a568;
  uVar7 = (int)twoby + 0x17U & 7;
  puVar3 = (ulong *)(((int)twoby + 0x17U) - uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034a570 >> (7 - uVar7) * 8;
  twoby._16_8_ = DAT_0034a570;
  uVar7 = (int)twoby + 0x1fU & 7;
  puVar3 = (ulong *)(((int)twoby + 0x1fU) - uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034a578 >> (7 - uVar7) * 8;
  twoby._24_8_ = DAT_0034a578;
  uVar7 = (int)twoby + 0x27U & 7;
  puVar3 = (ulong *)(((int)twoby + 0x27U) - uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034a580 >> (7 - uVar7) * 8;
  twoby._32_8_ = DAT_0034a580;
  twoby[10] = DAT_0034a588;
  local_d0 = ivec;
  uVar7 = (int)stq + 7U & 7;
  puVar3 = (ulong *)(((int)stq + 7U) - uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | (ulong)DAT_003563c8 >> (7 - uVar7) * 8;
  stq = DAT_003563c8;
  pUVar16 = tq;
  pUVar14 = ts;
  pUVar15 = tt;
  pafVar8 = ppos;
  do {
    if ((uVar19 & 1) == 0) {
      fVar24 = -w * 0.5;
    }
    else {
      fVar24 = w * 0.5;
    }
    (*pafVar8)[0] = fVar24;
    if ((int)uVar19 / 2 == 0) {
      fVar24 = h * 0.5;
    }
    else {
      fVar24 = -h * 0.5;
    }
    (*pafVar8)[1] = fVar24;
    (*pafVar8)[2] = 0.0;
    uVar19 = uVar19 + 1;
    (*pafVar8)[3] = 1.0;
    pafVar8 = pafVar8[1];
  } while ((int)uVar19 < 4);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  fVar24 = 0.0;
  sceVu0RotTransPersN(local_d0,slm,ppos,4,1);
  iVar20 = 0;
  iVar6 = (local_ec + monochrome_mode) * 0x20;
  uVar12 = *(ulong *)(&effdat + iVar6);
  uVar1 = *(ushort *)(&DAT_0026be4e + iVar6);
  num = (float)(uint)*(ushort *)(&DAT_0026be4c + iVar6);
  pUVar23 = pUVar15;
  pUVar22 = pUVar14;
  pUVar18 = pUVar16;
  paiVar21 = local_d0;
  do {
    if (((uint)(*paiVar21)[0] < 0x4000) || (0xc000 < (uint)(*paiVar21)[0])) {
      fVar24 = 1.0;
      uVar7 = (*paiVar21)[1];
    }
    else {
      uVar7 = (*paiVar21)[1];
    }
    if ((uVar7 < 0x4000) || (0xc000 < uVar7)) {
      fVar24 = 1.0;
      uVar7 = (*paiVar21)[2];
    }
    else {
      uVar7 = (*paiVar21)[2];
    }
    if ((uVar7 == 0) || (0xffffff < uVar7)) {
      fVar24 = 1.0;
    }
    piVar4 = *paiVar21;
    paiVar21 = paiVar21[1];
    pUVar18->fl32 = 1.0 / (float)piVar4[3];
    iVar6 = log_2(num);
    iVar17 = iVar20 / 2;
    iVar9 = iVar20 % 2;
    iVar20 = iVar20 + 1;
    pUVar22->fl32 = (num * stq[iVar9] * pUVar18->fl32) / twoby[iVar6];
    iVar6 = log_2((float)(uint)uVar1);
    pUVar22 = pUVar22 + 1;
    fVar25 = pUVar18->fl32;
    pUVar18 = pUVar18 + 1;
    pUVar23->fl32 = ((float)(uint)uVar1 * stq[iVar17] * fVar25) / twoby[iVar6];
    pUVar23 = pUVar23 + 1;
  } while (iVar20 < 4);
  if (fVar24 == 0.0) {
    iVar9 = 0;
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    iVar6 = ndpkt;
    pQVar11 = pbuf + ndpkt;
    pQVar11->ui32[0] = 0;
    pQVar11->ui32[1] = 0;
    pQVar11->ui32[2] = 0;
    pQVar11->ui32[3] = 0;
    pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008006;
    pQVar5[ndpkt + 1].ul64[1] = 0xe;
    pQVar5[ndpkt + 2].ul64[0] = 0;
    pQVar5[ndpkt + 2].ul64[1] = 0x3f;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 3].ul64[0] = uVar12;
    uVar12 = local_f0->tex1;
    pQVar5[ndpkt + 4].ul64[1] = 0x14;
    pQVar5[ndpkt + 4].ul64[0] = uVar12;
    uVar12 = local_f0->zbuf;
    pQVar5[ndpkt + 5].ul64[1] = 0x4e;
    pQVar5[ndpkt + 5].ul64[0] = uVar12;
    uVar12 = local_f0->alpha;
    pQVar5[ndpkt + 6].ul64[1] = 0x42;
    pQVar5[ndpkt + 6].ul64[0] = uVar12;
    uVar12 = local_f0->test;
    iVar20 = ndpkt + 8;
    pQVar5[ndpkt + 7].ul64[1] = 0x47;
    pQVar5[ndpkt + 7].ul64[0] = uVar12;
    ndpkt = ndpkt + 9;
    uVar12 = local_f0->prim;
    pQVar5[iVar20].ul64[1] = 0x412;
    pQVar5[iVar20].ul64[0] = uVar12;
    do {
      uVar7 = 0x8000;
      pQVar11 = pQVar5 + ndpkt;
      pQVar11->fl32[0] = *(float *)pUVar14;
      pQVar10 = pQVar5 + ndpkt + 1;
      iVar20 = ndpkt + 3;
      if (1 < iVar9) {
        uVar7 = 0;
      }
      iVar9 = iVar9 + 1;
      ((U32DATA *)(pQVar11->ui32 + 1))->fl32 = *(float *)pUVar15;
      pQVar13 = pQVar5 + ndpkt + 2;
      pUVar15 = pUVar15 + 1;
      pUVar14 = pUVar14 + 1;
      UVar2.fl32 = *(float *)pUVar16;
      pQVar11->ui32[3] = 0;
      pUVar16 = pUVar16 + 1;
      ((U32DATA *)(pQVar11->ui32 + 2))->fl32 = (float)UVar2;
      pQVar10->ui32[3] = local_dc;
      pQVar10->ui32[0] = local_e8;
      pQVar10->ui32[1] = local_e4;
      pQVar10->ui32[2] = local_e0;
      pQVar13->ui32[0] = (*local_d0)[0];
      pQVar13->ui32[1] = (*local_d0)[1];
      piVar4 = *local_d0;
      local_d0 = local_d0[1];
      pQVar13->ui32[2] = piVar4[2] << 4;
      ndpkt = iVar20;
      pQVar13->ui32[3] = uVar7;
    } while (iVar9 < 4);
    pbuf[iVar6].ui32[0] = (iVar20 - (iVar6 + -0x70000000)) - 1;
  }
  return;
}

void _SetTexDirectS(int pri, SPRITE_DATA *sd, int atype) {
	int xx[4];
	int yy[4];
	int mz;
	u_int tw;
	u_int th;
	float div;
	float mx;
	float my;
	float mscw;
	float msch;
	float mszw;
	float mszh;
	float px;
	float py;
	float pw;
	float ph;
	u_char malp;
	sceGsTex0 Load;
	sceGsTex0 Change;
	
  byte bVar1;
  uint uVar2;
  int iVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  ulong uVar6;
  Q_WORDDATA *pQVar7;
  sceGsTex0 sVar8;
  ulong unaff_s1;
  ulong unaff_s2;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int xx [4];
  int yy [4];
  
  fVar15 = sd->size_w * sd->scale_w;
  fVar13 = sd->size_h * sd->scale_h;
  bVar1 = sd->alpha;
  uVar2 = sd->pos_z;
  fVar14 = 1.0;
  if (g_bInterlace != '\0') {
    fVar14 = 2.0;
  }
  uVar10 = sd->g_nTexSizeW;
  uVar9 = sd->g_nTexSizeH;
  sVar8 = sd->g_GsTex0;
  fVar11 = (sd->pos_x + (sd->size_w - fVar15) * 0.5 + 2048.0) * 16.0;
  if (0x3ff < uVar9) {
    uVar9 = 0x3ff;
  }
  if (0x3ff < uVar10) {
    uVar10 = 0x3ff;
  }
  fVar12 = ((sd->pos_y + (sd->size_h - fVar13) * 0.5) / fVar14 + 2048.0) * 16.0;
  if (((uint)((ulong)sVar8 >> 0x14) & 0x3f) == 0x14) {
    unaff_s1 = (ulong)sVar8 & 0xfffffffc0fffff | 0x2000000001300000;
    unaff_s2 = (ulong)sVar8 & 0xffffffffffffff;
  }
  Reserve2DPacket(pri);
  pQVar5 = pbuf;
  iVar3 = ndpkt;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x7000000f;
  pQVar5[ndpkt + 1].ul64[1] = 0xe;
  pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar5[ndpkt + 2].ul64[1] = 0x3f;
  pQVar5[ndpkt + 2].ul64[0] = 0;
  sVar8 = sd->g_GsTex0;
  if (((uint)((ulong)sVar8 >> 0x14) & 0x3f) == 0x14) {
    pQVar5[ndpkt + 3].ul64[0] = unaff_s1;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[0] = unaff_s2;
  }
  else {
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 3].ul64[0] = (ulong)sVar8;
    pQVar5[ndpkt + 4].ul64[1] = 0x7f;
    pQVar5[ndpkt + 4].ul64[0] = 0;
  }
  pQVar5 = pbuf;
  ndpkt = ndpkt + 5;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ul64[1] = 0x14;
  pQVar4->ul64[0] = 0x161;
  if (atype == 0) {
    uVar6 = 0x8000000044;
  }
  else {
    uVar6 = (ulong)bVar1 << 0x20 | 100;
  }
  ndpkt = iVar3 + 6;
  pQVar5[iVar3 + 6].ul64[0] = uVar6;
  pQVar5 = pbuf;
  pbuf->ul64[ndpkt * 2 + 1] = 0x42;
  pQVar5[ndpkt + 1].ul64[1] = 8;
  pQVar5[ndpkt + 1].ul64[0] = 0;
  pQVar5[ndpkt + 2].ul64[0] = 0x10100008c;
  pQVar5[ndpkt + 2].ul64[1] = 0x4e;
  pQVar5[ndpkt + 3].ul64[0] = 0x3000d;
  pQVar5[ndpkt + 3].ul64[1] = 0x47;
  pQVar5[ndpkt + 4].ul64[1] = 0x43431;
  pQVar5[ndpkt + 4].ul64[0] = 0x50ab400000008001;
  pQVar5 = pQVar5 + ndpkt + 5;
  pQVar5->ui32[0] = 0x80;
  pQVar5->ui32[1] = 0x80;
  pQVar5->ui32[2] = 0x80;
  if (atype == 0) {
    pQVar5->ui32[3] = (uint)bVar1;
  }
  else {
    pQVar5->ui32[3] = 0x80;
  }
  pQVar5 = pbuf;
  pQVar4 = pbuf + ndpkt + 6;
  pQVar4->ui32[3] = 0;
  pQVar7 = pQVar5 + ndpkt + 7;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4 = pQVar5 + ndpkt + 8;
  pQVar5 = pQVar5 + ndpkt + 9;
  pQVar7->ui32[0] = (int)fVar11;
  pQVar7->ui32[2] = uVar2;
  pQVar7->ui32[3] = 0;
  pQVar7->ui32[1] = (int)fVar12;
  pQVar4->ui32[0] = uVar10 << 4;
  pQVar4->ui32[1] = uVar9 << 4;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[2] = 0;
  pQVar5->ui32[0] = (int)(fVar15 * 16.0 + fVar11);
  pQVar5->ui32[2] = uVar2;
  pQVar5->ui32[1] = (int)((fVar13 * 16.0) / fVar14 + fVar12);
  pQVar5->ui32[3] = 0;
  ndpkt = ndpkt + 10;
  return;
}

void SetTexDirectS(int pri, SPRITE_DATA *sd, int atype) {
	int xx[4];
	int yy[4];
	int mz;
	u_int th;
	float div;
	int u[11];
	int v;
	int x[11];
	int i;
	int n;
	int mtw;
	float wx;
	float mx;
	float my;
	float mscw;
	float msch;
	float mszw;
	float mszh;
	float px;
	float py;
	float ph;
	u_char malp;
	sceGsTex0 Load;
	sceGsTex0 Change;
	
  byte bVar1;
  uint uVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  ulong uVar6;
  uint uVar7;
  Q_WORDDATA *pQVar8;
  sceGsTex0 sVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong unaff_s1;
  ulong uVar13;
  ulong unaff_s3;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int xx [4];
  int yy [4];
  int u [11];
  int x [11];
  
  fVar18 = sd->size_w * sd->scale_w;
  fVar19 = sd->size_h * sd->scale_h;
  bVar1 = sd->alpha;
  uVar2 = sd->pos_z;
  fVar17 = 1.0;
  if (g_bInterlace != '\0') {
    fVar17 = 2.0;
  }
  uVar3 = sd->g_nTexSizeH;
  fVar16 = sd->pos_x + (sd->size_w - fVar18) * 0.5 + 2048.0;
  uVar7 = sd->g_nTexSizeW;
  fVar15 = 0.0;
  if (0x3ff < uVar3) {
    uVar3 = 0x3ff;
  }
  if (0x3ff < uVar7) {
    uVar7 = 0x3ff;
  }
  fVar14 = ((sd->pos_y + (sd->size_h - fVar19) * 0.5) / fVar17 + 2048.0) * 16.0;
  u[0] = 0;
  x[0] = (int)(fVar16 * 16.0);
  uVar13 = 1;
  if (0.0 < fVar18) {
    sVar9 = sd->g_GsTex0;
    do {
      fVar15 = fVar15 + 64.0;
      if (fVar18 < fVar15) {
        fVar15 = fVar18;
      }
      iVar11 = (int)uVar13;
      x[iVar11] = (int)((fVar16 + fVar15) * 16.0);
      u[iVar11] = (int)(((fVar15 * (float)uVar7) / fVar18) * 16.0);
      uVar13 = (ulong)(iVar11 + 1);
    } while (fVar15 < fVar18);
  }
  else {
    sVar9 = sd->g_GsTex0;
  }
  if (((uint)((ulong)sVar9 >> 0x14) & 0x3f) == 0x14) {
    unaff_s1 = (ulong)sVar9 & 0xfffffffc0fffff | 0x2000000001300000;
    unaff_s3 = (ulong)sVar9 & 0xffffffffffffff;
  }
  Reserve2DPacket(pri);
  pQVar5 = pbuf;
  iVar11 = ndpkt;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = (int)uVar13 * 5 + 0x7000000a;
  pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar5[ndpkt + 1].ul64[1] = 0xe;
  pQVar5[ndpkt + 2].ul64[0] = 0;
  pQVar5[ndpkt + 2].ul64[1] = 0x3f;
  sVar9 = sd->g_GsTex0;
  if (((uint)((ulong)sVar9 >> 0x14) & 0x3f) == 0x14) {
    pQVar5[ndpkt + 3].ul64[0] = unaff_s1;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[0] = unaff_s3;
  }
  else {
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 3].ul64[0] = (ulong)sVar9;
    pQVar5[ndpkt + 4].ul64[1] = 0x7f;
    pQVar5[ndpkt + 4].ul64[0] = 0;
  }
  pQVar5 = pbuf;
  ndpkt = ndpkt + 5;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ul64[1] = 0x14;
  pQVar4->ul64[0] = 0x161;
  if (atype == 0) {
    uVar6 = 0x8000000044;
  }
  else {
    uVar6 = (ulong)bVar1 << 0x20 | 100;
  }
  ndpkt = iVar11 + 6;
  pQVar5[iVar11 + 6].ul64[0] = uVar6;
  pQVar5 = pbuf;
  pbuf->ul64[ndpkt * 2 + 1] = 0x42;
  pQVar5[ndpkt + 1].ul64[1] = 8;
  pQVar5[ndpkt + 1].ul64[0] = 0;
  pQVar5[ndpkt + 2].ul64[1] = 0x4e;
  pQVar5[ndpkt + 2].ul64[0] = 0x10100008c;
  pQVar5[ndpkt + 3].ul64[1] = 0x47;
  pQVar5[ndpkt + 3].ul64[0] = 0x3000d;
  pQVar5[ndpkt + 4].ul64[0] = uVar13 | 0x50aa400000008000;
  pQVar5[ndpkt + 4].ul64[1] = 0x43431;
  ndpkt = ndpkt + 5;
  lVar12 = 0;
  if (0 < (long)uVar13) {
    do {
      pQVar5 = pbuf + ndpkt;
      pQVar5->ui32[0] = 0x80;
      pQVar5->ui32[1] = 0x80;
      pQVar5->ui32[2] = 0x80;
      if (atype == 0) {
        pQVar5->ui32[3] = (uint)bVar1;
      }
      else {
        pQVar5->ui32[3] = 0x80;
      }
      pQVar5 = pbuf;
      iVar11 = (int)lVar12;
      pQVar4 = pbuf + ndpkt + 1;
      pQVar4->ui32[0] = u[iVar11];
      pQVar4->ui32[3] = 0;
      pQVar4->ui32[1] = 0;
      pQVar8 = pQVar5 + ndpkt + 2;
      pQVar4->ui32[2] = 0;
      uVar10 = 0x8000;
      uVar7 = 0x8000;
      pQVar8->ui32[0] = x[iVar11];
      if (0 < lVar12) {
        uVar7 = 0;
      }
      pQVar4 = pQVar5 + ndpkt + 3;
      pQVar8->ui32[2] = uVar2;
      pQVar5 = pQVar5 + ndpkt + 4;
      pQVar8->ui32[1] = (int)fVar14;
      ndpkt = ndpkt + 5;
      pQVar8->ui32[3] = uVar7;
      if (0 < lVar12) {
        uVar10 = 0;
      }
      lVar12 = (long)(iVar11 + 1);
      uVar7 = u[iVar11];
      pQVar4->ui32[3] = 0;
      pQVar4->ui32[0] = uVar7;
      pQVar4->ui32[1] = uVar3 << 4;
      pQVar4->ui32[2] = 0;
      pQVar5->ui32[0] = x[iVar11];
      pQVar5->ui32[2] = uVar2;
      pQVar5->ui32[1] = (int)(fVar14 + (fVar19 * 16.0) / fVar17);
      pQVar5->ui32[3] = uVar10;
    } while (lVar12 < (long)uVar13);
  }
  return;
}

void SetTexDirectS2(int pri, SPRITE_DATA *sd, DRAW_ENV *de, int type) {
	int n;
	int tw[2];
	int th[2];
	float mx;
	float my;
	u_int mz;
	float mscw;
	float msch;
	float mszw;
	float mszh;
	int mclu;
	int mclv;
	u_int r;
	u_int g;
	u_int b;
	u_int a;
	u_long tex1;
	u_long alpha;
	u_long zbuf;
	u_long test;
	u_long clmp;
	u_long prim;
	sceGsTex0 Load;
	sceGsTex0 Change;
	float div;
	float px;
	float py;
	float pw;
	float ph;
	float xx[2];
	float yy[2];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  Q_WORDDATA *pQVar9;
  Q_WORDDATA *pQVar10;
  ulong uVar11;
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  ulong uVar14;
  sceGsTex0 sVar15;
  ulong unaff_s1;
  ulong unaff_s2;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int tw [2];
  int th [2];
  float xx [2];
  float yy [2];
  uint r;
  uint g;
  uint b;
  uint a;
  ulong clmp;
  ulong prim;
  
  fVar23 = 1.0;
  if (g_bInterlace != '\0') {
    fVar23 = 2.0;
  }
  th[0] = 8;
  if (type != 0) {
    th[0] = 0;
  }
  uVar11 = de->clamp;
  fVar24 = sd->size_w * sd->scale_w;
  fVar22 = sd->size_h * sd->scale_h;
  uVar8 = sd->clamp_u;
  bVar1 = sd->r;
  uVar5 = sd->pos_z;
  uVar6 = sd->clamp_v;
  bVar2 = sd->g;
  bVar3 = sd->b;
  bVar4 = sd->alpha;
  uVar16 = de->tex1;
  uVar17 = de->alpha;
  uVar18 = de->zbuf;
  uVar19 = de->test;
  uVar14 = de->prim;
  if (uVar8 == 0) {
    uVar8 = sd->g_nTexSizeW;
    if (0x3ff < uVar8) {
      uVar8 = 0x3ff;
    }
    tw[1] = uVar8 * 0x10 - th[0];
    tw[0] = th[0];
  }
  else {
    tw[1] = uVar8 >> 0x10;
    tw[0] = uVar8 & 0xffff;
  }
  th[1] = uVar6 >> 0x10;
  if (uVar6 == 0) {
    uVar8 = sd->g_nTexSizeH;
    if (0x3ff < uVar8) {
      uVar8 = 0x3ff;
    }
    th[1] = uVar8 * 0x10 - th[0];
  }
  else {
    th[0] = uVar6 & 0xffff;
  }
  sVar15 = sd->g_GsTex0;
  fVar21 = (sd->pos_x + (sd->size_w - fVar24) * 0.5 + 2048.0) * 16.0;
  fVar20 = ((sd->pos_y + (sd->size_h - fVar22) * 0.5) / fVar23 + 2048.0) * 16.0;
  if (((uint)((ulong)sVar15 >> 0x14) & 0x3f) == 0x14) {
    unaff_s1 = (ulong)sVar15 & 0xfffffffc0fffff | 0x2000000001300000;
    unaff_s2 = (ulong)sVar15 & 0xffffffffffffff;
  }
  Reserve2DPacket(pri);
  pQVar13 = pbuf;
  iVar7 = ndpkt;
  pQVar9 = pbuf + ndpkt;
  pQVar9->ui32[0] = 0;
  pQVar9->ui32[1] = 0;
  pQVar9->ui32[2] = 0;
  pQVar9->ui32[3] = 0;
  pQVar9->ui32[0] = 0x7000000f;
  pQVar13[ndpkt + 1].ul64[1] = 0xe;
  pQVar13[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar13[ndpkt + 2].ul64[1] = 0x3f;
  pQVar13[ndpkt + 2].ul64[0] = 0;
  sVar15 = sd->g_GsTex0;
  if (((uint)((ulong)sVar15 >> 0x14) & 0x3f) == 0x14) {
    pQVar13[ndpkt + 3].ul64[0] = unaff_s1;
    pQVar13[ndpkt + 3].ul64[1] = 6;
    pQVar13[ndpkt + 4].ul64[1] = 6;
    pQVar13[ndpkt + 4].ul64[0] = unaff_s2;
  }
  else {
    pQVar13[ndpkt + 3].ul64[1] = 6;
    pQVar13[ndpkt + 3].ul64[0] = (ulong)sVar15;
    pQVar13[ndpkt + 4].ul64[1] = 0x7f;
    pQVar13[ndpkt + 4].ul64[0] = 0;
  }
  pQVar13 = pbuf;
  ndpkt = ndpkt + 5;
  pQVar9 = pbuf + ndpkt;
  pQVar9->ul64[1] = 0x14;
  pQVar9->ul64[0] = uVar16;
  pQVar13[iVar7 + 6].ul64[1] = 0x42;
  pQVar13[iVar7 + 6].ul64[0] = uVar17;
  pQVar13[iVar7 + 7].ul64[1] = 0x4e;
  pQVar13[iVar7 + 7].ul64[0] = uVar18;
  pQVar13[iVar7 + 8].ul64[0] = uVar19;
  pQVar13[iVar7 + 8].ul64[1] = 0x47;
  pQVar13[iVar7 + 9].ul64[1] = 8;
  pQVar13[iVar7 + 9].ul64[0] = uVar11;
  pQVar13[iVar7 + 10].ul64[1] = 0x43431;
  pQVar13[iVar7 + 10].ul64[0] = uVar14;
  pQVar9 = pQVar13 + iVar7 + 0xb;
  pQVar9->ui32[3] = (uint)bVar4;
  pQVar10 = pQVar13 + iVar7 + 0xc;
  *(uint *)pQVar9 = (uint)bVar1;
  pQVar9->ui32[1] = (uint)bVar2;
  *(uint *)(pQVar9->ul64 + 1) = (uint)bVar3;
  pQVar9 = pQVar13 + iVar7 + 0xd;
  pQVar10->iv[0] = tw[0];
  pQVar12 = pQVar13 + iVar7 + 0xe;
  pQVar13 = pQVar13 + iVar7 + 0xf;
  pQVar10->ui32[3] = 0;
  pQVar10->iv[1] = th[0];
  pQVar10->ui32[2] = 0;
  pQVar9->ui32[0] = (int)fVar21;
  pQVar9->ui32[2] = uVar5;
  pQVar9->ui32[1] = (int)fVar20;
  pQVar9->ui32[3] = 0;
  pQVar12->iv[0] = tw[1];
  pQVar12->ui32[3] = 0;
  pQVar12->iv[1] = th[1];
  pQVar12->ui32[2] = 0;
  pQVar13->ui32[0] = (int)(fVar24 * 16.0 + fVar21);
  pQVar13->ui32[2] = uVar5;
  pQVar13->ui32[1] = (int)((fVar22 * 16.0) / fVar23 + fVar20);
  pQVar13->ui32[3] = 0;
  ndpkt = iVar7 + 0x10;
  return;
}

void SetTexDirect2(int pri, SPRITE_DATA *sd, DRAW_ENV *de, sceVu0FVECTOR *v) {
	int tw[2];
	int th[2];
	float mx;
	float my;
	int mz;
	float mscw;
	float msch;
	float mszw;
	float mszh;
	int mclu;
	int mclv;
	u_int r;
	u_int g;
	u_int b;
	u_int a;
	u_long tex1;
	u_long alpha;
	u_long zbuf;
	u_long test;
	u_long clmp;
	u_long prim;
	sceGsTex0 Load;
	sceGsTex0 Change;
	float div;
	float px;
	float py;
	float pw;
	float ph;
	float xx[2];
	float yy[2];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  Q_WORDDATA *pQVar9;
  Q_WORDDATA *pQVar10;
  ulong uVar11;
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  ulong uVar14;
  sceGsTex0 sVar15;
  ulong unaff_s1;
  ulong unaff_s2;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int tw [2];
  int th [2];
  float xx [2];
  float yy [2];
  uint r;
  uint g;
  uint b;
  uint a;
  ulong clmp;
  ulong prim;
  
  fVar23 = 1.0;
  if (g_bInterlace != '\0') {
    fVar23 = 2.0;
  }
  uVar11 = de->clamp;
  fVar24 = sd->size_w * sd->scale_w;
  fVar22 = sd->size_h * sd->scale_h;
  uVar8 = sd->clamp_u;
  bVar1 = sd->r;
  uVar5 = sd->pos_z;
  uVar6 = sd->clamp_v;
  bVar2 = sd->g;
  bVar3 = sd->b;
  bVar4 = sd->alpha;
  uVar16 = de->tex1;
  uVar17 = de->alpha;
  uVar18 = de->zbuf;
  uVar19 = de->test;
  uVar14 = de->prim;
  if (uVar8 == 0) {
    uVar8 = sd->g_nTexSizeW;
    tw[0] = 8;
    if (0x3ff < uVar8) {
      uVar8 = 0x3ff;
    }
    tw[1] = uVar8 * 0x10 + -8;
  }
  else {
    tw[1] = uVar8 >> 0x10;
    tw[0] = uVar8 & 0xffff;
  }
  th[1] = uVar6 >> 0x10;
  if (uVar6 == 0) {
    uVar8 = sd->g_nTexSizeH;
    th[0] = 8;
    if (0x3ff < uVar8) {
      uVar8 = 0x3ff;
    }
    th[1] = uVar8 * 0x10 + -8;
  }
  else {
    th[0] = uVar6 & 0xffff;
  }
  sVar15 = sd->g_GsTex0;
  fVar21 = (sd->pos_x + (sd->size_w - fVar24) * 0.5 + 2048.0) * 16.0;
  fVar20 = ((sd->pos_y + (sd->size_h - fVar22) * 0.5) / fVar23 + 2048.0) * 16.0;
  if (((uint)((ulong)sVar15 >> 0x14) & 0x3f) == 0x14) {
    unaff_s1 = (ulong)sVar15 & 0xfffffffc0fffff | 0x2000000001300000;
    unaff_s2 = (ulong)sVar15 & 0xffffffffffffff;
  }
  Reserve2DPacket(pri);
  pQVar13 = pbuf;
  iVar7 = ndpkt;
  pQVar9 = pbuf + ndpkt;
  pQVar9->ui32[0] = 0;
  pQVar9->ui32[1] = 0;
  pQVar9->ui32[2] = 0;
  pQVar9->ui32[3] = 0;
  pQVar9->ui32[0] = 0x7000000f;
  pQVar13[ndpkt + 1].ul64[1] = 0xe;
  pQVar13[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar13[ndpkt + 2].ul64[1] = 0x3f;
  pQVar13[ndpkt + 2].ul64[0] = 0;
  sVar15 = sd->g_GsTex0;
  if (((uint)((ulong)sVar15 >> 0x14) & 0x3f) == 0x14) {
    pQVar13[ndpkt + 3].ul64[0] = unaff_s1;
    pQVar13[ndpkt + 3].ul64[1] = 6;
    pQVar13[ndpkt + 4].ul64[1] = 6;
    pQVar13[ndpkt + 4].ul64[0] = unaff_s2;
  }
  else {
    pQVar13[ndpkt + 3].ul64[1] = 6;
    pQVar13[ndpkt + 3].ul64[0] = (ulong)sVar15;
    pQVar13[ndpkt + 4].ul64[1] = 0x7f;
    pQVar13[ndpkt + 4].ul64[0] = 0;
  }
  pQVar13 = pbuf;
  ndpkt = ndpkt + 5;
  pQVar9 = pbuf + ndpkt;
  pQVar9->ul64[1] = 0x14;
  pQVar9->ul64[0] = uVar16;
  pQVar13[iVar7 + 6].ul64[1] = 0x42;
  pQVar13[iVar7 + 6].ul64[0] = uVar17;
  pQVar13[iVar7 + 7].ul64[1] = 0x4e;
  pQVar13[iVar7 + 7].ul64[0] = uVar18;
  pQVar13[iVar7 + 8].ul64[0] = uVar19;
  pQVar13[iVar7 + 8].ul64[1] = 0x47;
  pQVar13[iVar7 + 9].ul64[1] = 8;
  pQVar13[iVar7 + 9].ul64[0] = uVar11;
  pQVar13[iVar7 + 10].ul64[1] = 0x43431;
  pQVar13[iVar7 + 10].ul64[0] = uVar14;
  pQVar9 = pQVar13 + iVar7 + 0xb;
  pQVar9->ui32[3] = (uint)bVar4;
  pQVar10 = pQVar13 + iVar7 + 0xc;
  *(uint *)pQVar9 = (uint)bVar1;
  pQVar9->ui32[1] = (uint)bVar2;
  *(uint *)(pQVar9->ul64 + 1) = (uint)bVar3;
  pQVar9 = pQVar13 + iVar7 + 0xd;
  pQVar10->iv[0] = tw[0];
  pQVar12 = pQVar13 + iVar7 + 0xe;
  pQVar13 = pQVar13 + iVar7 + 0xf;
  pQVar10->ui32[3] = 0;
  pQVar10->iv[1] = th[0];
  pQVar10->ui32[2] = 0;
  pQVar9->ui32[0] = (int)fVar21;
  pQVar9->ui32[2] = uVar5;
  pQVar9->ui32[1] = (int)fVar20;
  pQVar9->ui32[3] = 0;
  pQVar12->iv[0] = tw[1];
  pQVar12->ui32[3] = 0;
  pQVar12->iv[1] = th[1];
  pQVar12->ui32[2] = 0;
  pQVar13->ui32[0] = (int)(fVar24 * 16.0 + fVar21);
  pQVar13->ui32[2] = uVar5;
  pQVar13->ui32[1] = (int)((fVar22 * 16.0) / fVar23 + fVar20);
  pQVar13->ui32[3] = 0;
  ndpkt = iVar7 + 0x10;
  return;
}

void SetTexDirect(SPRITE_DATA *sd, int atype) {
	int i;
	float xx[4];
	float yy[4];
	unsigned int tw;
	unsigned int th;
	float ss;
	float cc;
	float div;
	int mz;
	float mx;
	float my;
	float mscw;
	float msch;
	float mszw;
	float mszh;
	float mang;
	unsigned int mrc;
	unsigned char malp;
	sceGsTex0 Load;
	sceGsTex0 Change;
	u_int r;
	u_int g;
	u_int b;
	float px;
	float py;
	float pw;
	float ph;
	
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  Q_WORDDATA *pQVar4;
  float *pfVar5;
  Q_WORDDATA *pQVar6;
  ulong uVar7;
  int iVar8;
  Q_WORDDATA *pQVar9;
  sceGsTex0 sVar10;
  Q_WORDDATA *pQVar11;
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  ulong unaff_s1;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong unaff_s5;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float xx [4];
  float yy [4];
  uint r;
  uint g;
  uint b;
  
  pfVar3 = xx;
  fVar29 = 1.0;
  bVar1 = sd->alpha;
  uVar15 = sd->rot_center;
  uVar2 = sd->pos_z;
  r = (uint)sd->r;
  g = (uint)sd->g;
  b = (uint)sd->b;
  fVar17 = sd->size_w;
  fVar24 = fVar17 * sd->scale_w;
  fVar20 = sd->pos_x;
  fVar22 = sd->size_h * sd->scale_h;
  if (g_bInterlace != '\0') {
    fVar29 = 2.0;
  }
  uVar14 = sd->g_nTexSizeW;
  uVar16 = sd->g_nTexSizeH;
  if (0x3ff < uVar16) {
    uVar16 = 0x3ff;
  }
  if (0x3ff < uVar14) {
    uVar14 = 0x3ff;
  }
  fVar26 = fVar22 * 16.0;
  fVar28 = ((sd->pos_y + (sd->size_h - fVar22) * 0.5) / fVar29 + 2048.0) * 16.0;
  fVar22 = fVar24 * 16.0;
  if (sd->angle == 0.0) {
    yy[2] = 0.0;
    xx[3] = fVar22;
    xx[0] = 0.0;
    yy[0] = 0.0;
    xx[1] = 0.0;
    xx[2] = fVar22;
LAB_0011dd50:
    yy[2] = 0.0;
    yy[0] = 0.0;
    xx[1] = 0.0;
    xx[0] = 0.0;
    yy[3] = fVar26 / fVar29;
    yy[1] = fVar26 / fVar29;
    xx[2] = fVar22;
    xx[3] = fVar22;
  }
  else {
    fVar27 = (sd->angle * DAT_0035517c) / 180.0;
    fVar18 = SgSinf(fVar27);
    fVar27 = SgCosf(fVar27);
    switch(uVar15) {
    case 0:
      xx[3] = fVar22;
      xx[0] = 0.0;
      yy[0] = 0.0;
      xx[1] = 0.0;
      xx[2] = fVar22;
      yy[2] = 0.0;
      goto LAB_0011dd50;
    case 1:
      fVar25 = fVar22 * 0.5;
      fVar26 = fVar26 * 0.5;
      fVar19 = fVar26 * fVar27;
      fVar23 = -fVar22 * 0.5 * fVar18;
      fVar21 = -fVar22 * 0.5 * fVar27;
      fVar22 = fVar26 * fVar18;
      yy[3] = (fVar25 * fVar18 + fVar19 + fVar26) / fVar29;
      yy[0] = ((fVar23 - fVar19) + fVar26) / fVar29;
      yy[1] = (fVar23 + fVar19 + fVar26) / fVar29;
      yy[2] = ((fVar25 * fVar18 - fVar19) + fVar26) / fVar29;
      xx[0] = fVar21 + fVar22 + fVar25;
      xx[1] = (fVar21 - fVar22) + fVar25;
      xx[2] = fVar25 * fVar27 + fVar22 + fVar25;
      xx[3] = (fVar25 * fVar27 - fVar22) + fVar25;
      break;
    case 2:
      fVar23 = fVar22 * 0.5 * fVar18;
      fVar21 = -fVar22 * 0.5 * fVar18;
      fVar19 = fVar26 * 0.5 * fVar27;
      fVar18 = fVar26 * 0.5 * fVar18;
      fVar26 = fVar22 * 0.5 * fVar27;
      fVar27 = -fVar22 * 0.5 * fVar27;
      yy[3] = (fVar23 + fVar19) / fVar29;
      yy[0] = (fVar21 - fVar19) / fVar29;
      yy[1] = (fVar21 + fVar19) / fVar29;
      xx[2] = fVar26 + fVar18;
      xx[1] = fVar27 - fVar18;
      xx[0] = fVar27 + fVar18;
      yy[2] = (fVar23 - fVar19) / fVar29;
      xx[3] = fVar26 - fVar18;
      break;
    case 3:
      xx[0] = 0.0;
      yy[0] = 0.0;
      xx[2] = fVar22 * fVar27;
      yy[1] = (fVar26 * fVar27) / fVar29;
      xx[1] = -fVar26 * fVar18;
      yy[2] = (fVar22 * fVar18) / fVar29;
      xx[3] = fVar22 * fVar27 - fVar26 * fVar18;
      yy[3] = (fVar22 * fVar18 + fVar26 * fVar27) / fVar29;
      break;
    case 4:
      xx[1] = 0.0;
      yy[1] = 0.0;
      xx[0] = fVar26 * fVar18;
      yy[3] = (fVar22 * fVar18) / fVar29;
      xx[3] = fVar22 * fVar27;
      xx[2] = fVar22 * fVar27 + fVar26 * fVar18;
      yy[2] = (fVar22 * fVar18 - fVar26 * fVar27) / fVar29;
      yy[0] = (-fVar26 * fVar27) / fVar29;
      break;
    case 5:
      xx[2] = 0.0;
      yy[2] = 0.0;
      fVar19 = -fVar22 * fVar18;
      xx[0] = -fVar22 * fVar27;
      yy[3] = (fVar26 * fVar27) / fVar29;
      yy[0] = fVar19 / fVar29;
      xx[1] = xx[0] - fVar26 * fVar18;
      yy[1] = (fVar19 + fVar26 * fVar27) / fVar29;
      xx[3] = -fVar26 * fVar18;
      break;
    case 6:
      xx[3] = 0.0;
      yy[3] = 0.0;
      fVar19 = -fVar22 * fVar18;
      xx[1] = -fVar22 * fVar27;
      xx[2] = fVar26 * fVar18;
      yy[2] = (-fVar26 * fVar27) / fVar29;
      yy[1] = fVar19 / fVar29;
      yy[0] = (fVar19 - fVar26 * fVar27) / fVar29;
      xx[0] = xx[1] + fVar26 * fVar18;
    }
  }
  sVar10 = sd->g_GsTex0;
  uVar16 = uVar16 * 0x10 - 8;
  uVar15 = uVar14 * 0x10 - 8;
  pfVar5 = yy;
  iVar8 = 3;
  do {
    iVar8 = iVar8 + -1;
    *pfVar3 = *pfVar3 + (fVar20 + (fVar17 - fVar24) * 0.5 + 2048.0) * 16.0;
    pfVar3 = pfVar3 + 1;
    *pfVar5 = *pfVar5 + fVar28;
    pfVar5 = pfVar5 + 1;
  } while (-1 < iVar8);
  if (((uint)((ulong)sVar10 >> 0x14) & 0x3f) == 0x14) {
    unaff_s1 = (ulong)sVar10 & 0xfffffffc0fffff | 0x2000000001300000;
    unaff_s5 = (ulong)sVar10 & 0xffffffffffffff;
  }
  Reserve2DPacket(0xffffffff);
  pQVar12 = pbuf;
  iVar8 = ndpkt;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x70000013;
  pQVar12[ndpkt + 1].ul64[1] = 0xe;
  pQVar12[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar12[ndpkt + 2].ul64[1] = 0x3f;
  pQVar12[ndpkt + 2].ul64[0] = 0;
  sVar10 = sd->g_GsTex0;
  if (((uint)((ulong)sVar10 >> 0x14) & 0x3f) == 0x14) {
    pQVar12[ndpkt + 3].ul64[0] = unaff_s1;
    pQVar12[ndpkt + 3].ul64[1] = 6;
    pQVar12[ndpkt + 4].ul64[1] = 6;
    pQVar12[ndpkt + 4].ul64[0] = unaff_s5;
  }
  else {
    pQVar12[ndpkt + 3].ul64[1] = 6;
    pQVar12[ndpkt + 3].ul64[0] = (ulong)sVar10;
    pQVar12[ndpkt + 4].ul64[1] = 0x7f;
    pQVar12[ndpkt + 4].ul64[0] = 0;
  }
  pQVar12 = pbuf;
  ndpkt = ndpkt + 5;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ul64[1] = 0x14;
  pQVar4->ul64[0] = 0x161;
  if (atype == 0) {
    uVar7 = 0x44;
  }
  else {
    uVar7 = (ulong)bVar1 << 0x20 | 100;
  }
  ndpkt = iVar8 + 6;
  pQVar12[iVar8 + 6].ul64[0] = uVar7;
  pQVar12 = pbuf;
  pbuf->ul64[ndpkt * 2 + 1] = 0x42;
  pQVar12[ndpkt + 1].ul64[1] = 8;
  pQVar12[ndpkt + 1].ul64[0] = 0;
  pQVar12[ndpkt + 2].ul64[0] = 0x10100008c;
  pQVar12[ndpkt + 2].ul64[1] = 0x4e;
  pQVar12[ndpkt + 3].ul64[1] = 0x47;
  pQVar12[ndpkt + 3].ul64[0] = 0x50000;
  pQVar12[ndpkt + 4].ul64[0] = 0x90aa400000008001;
  pQVar12[ndpkt + 4].ul64[1] = 0x434343431;
  pQVar6 = pQVar12 + ndpkt + 5;
  pQVar6->ui32[0] = r;
  pQVar6->ui32[3] = 0x80;
  pQVar4 = pQVar12 + ndpkt + 6;
  pQVar6->ui32[1] = g;
  pQVar9 = pQVar12 + ndpkt + 8;
  pQVar6->ui32[2] = b;
  pQVar13 = pQVar12 + ndpkt + 0xb;
  pQVar4->ui32[0] = 8;
  pQVar4->ui32[1] = 8;
  pQVar6 = pQVar12 + ndpkt + 7;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4 = pQVar12 + ndpkt + 9;
  pQVar6->ui32[0] = (int)xx[0];
  pQVar11 = pQVar12 + ndpkt + 10;
  pQVar6->ui32[3] = 0;
  pQVar6->ui32[2] = uVar2;
  pQVar6->ui32[1] = (int)yy[0];
  pQVar9->ui32[0] = 8;
  pQVar6 = pQVar12 + ndpkt + 0xc;
  pQVar9->ui32[1] = uVar16;
  pQVar9->ui32[3] = 0;
  pQVar9->ui32[2] = 0;
  pQVar12 = pQVar12 + ndpkt + 0xd;
  pQVar4->ui32[0] = (int)xx[1];
  pQVar4->ui32[2] = uVar2;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[1] = (int)yy[1];
  pQVar11->ui32[0] = uVar15;
  pQVar11->ui32[1] = 8;
  pQVar11->ui32[3] = 0;
  pQVar11->ui32[2] = 0;
  pQVar13->ui32[0] = (int)xx[2];
  pQVar13->ui32[2] = uVar2;
  pQVar13->ui32[3] = 0;
  pQVar13->ui32[1] = (int)yy[2];
  pQVar6->ui32[0] = uVar15;
  pQVar6->ui32[1] = uVar16;
  pQVar6->ui32[3] = 0;
  pQVar6->ui32[2] = 0;
  pQVar12->ui32[0] = (int)xx[3];
  pQVar12->ui32[2] = uVar2;
  pQVar12->ui32[1] = (int)yy[3];
  pQVar12->ui32[3] = 0;
  ndpkt = ndpkt + 0xe;
  return;
}

void SetScreenDSlide(int addr, int type, int alpha, float ang, float scl, int z) {
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
  puVar1 = &DAT_0034a5b0;
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
  } while (puVar1 != &DAT_0034a610);
  de.tex1 = DAT_0034a610;
  de.alpha = DAT_0034a618;
  de.zbuf = DAT_0034a620;
  de.test = DAT_0034a628;
  de.clamp = DAT_0034a630;
  de.prim = DAT_0034a638;
  switch(type) {
  case 0:
    sd.pos_x = DAT_00355180;
    sd.pos_y = DAT_00355184;
    break;
  case 1:
    sd.pos_y = -224.0;
    sd.pos_x = DAT_00355188;
    break;
  case 2:
    sd.pos_y = -224.0;
    sd.pos_x = -320.0;
    break;
  case 3:
    sd.pos_x = -320.0;
    sd.pos_y = DAT_0035518c;
    break;
  case 4:
    sd.pos_x = DAT_00355190;
    sd.pos_y = DAT_00355194;
    break;
  case 5:
    sd.pos_y = -223.0;
    sd.pos_x = DAT_00355198;
  }
  sd.rot_center = 1;
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | (long)addr & 0x3fffU);
  sd.alpha = (uchar)alpha;
  sd.pos_z = z;
  sd.scale_w = scl;
  sd.scale_h = scl;
  sd.angle = ang;
  SetTexDirectS2(0,&sd,&de,0);
  return;
}

void SetScreenZ(int addr) {
	SPRITE_DATA sd;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SPRITE_DATA sd;
  
  pSVar2 = &sd;
  puVar1 = &DAT_0034a658;
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
  } while (puVar1 != &DAT_0034a6b8);
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffffffc000 | (long)addr & 0x3fffU);
  sd.pos_z = 0xfffffef;
  SetTexDirectS(0x10,&sd,1);
  return;
}

void CaptureScreen(u_int addr) {
  LocalCopyLtoB2(1,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
  return;
}

void DrawScreen(u_int pri, u_int addr, u_char r, u_char g, u_char b, u_char a) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = DAT_0034a6b8;
  sd._8_8_ = DAT_0034a6c0;
  sd._16_8_ = DAT_0034a6c8;
  sd._24_8_ = DAT_0034a6d0;
  LocalCopyBtoL(1,addr);
  CopySprDToSpr(&ds,&sd);
  ds.tex0 = (long)(int)addr & 0xffffffffU | 0x2000000228028000;
  ds.z = 0xfffffff - pri;
  ds.tex1 = 0x141;
  ds.zbuf = 0x100008c;
  ds.test = 0x5000d;
  ds.alphar = 0x44;
  ds.scw = 1.0;
  ds.sch = 2.0;
  ds.csy = -0.5;
  ds.texa = 0;
  ds.x = -0.5;
  ds.y = -0.5;
  ds.csx = -0.5;
  ds.pri = pri;
  ds.r = r;
  ds.g = g;
  ds.b = b;
  ds.alpha = a;
  DispSprD(&ds);
  return;
}

void ClearFBuffer() {
	int i;
	int x[2];
	int y[2];
	int div;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  int iVar6;
  int x [2];
  int y [2];
  
  uVar3 = 1;
  if (g_bInterlace != '\0') {
    uVar3 = 2;
  }
  if (uVar3 == 0) {
    trap(7);
  }
  Reserve2DPacket(0x1000);
  pQVar1 = pbuf;
  pQVar4 = pbuf + ndpkt;
  pQVar2 = pbuf + ndpkt + 1;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x70000022;
  pQVar2->ul64[1] = 0xe;
  pQVar2->ul64[0] = 0x1000000000008002;
  pQVar1[ndpkt + 2].ul64[1] = 0x47;
  pQVar1[ndpkt + 2].ul64[0] = 0x30003;
  pQVar1[ndpkt + 3].ul64[1] = 0x4e;
  pQVar1[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar1[ndpkt + 4].ul64[0] = 0x300340000000800a;
  pQVar1[ndpkt + 4].ul64[1] = 0x441;
  ndpkt = ndpkt + 5;
  iVar6 = 0;
  do {
    iVar5 = iVar6 * 0x400;
    iVar6 = iVar6 + 1;
    pQVar2 = pQVar1 + ndpkt;
    pQVar2->ui32[3] = 0;
    pQVar4 = pQVar1 + ndpkt + 1;
    pQVar2->ui32[0] = 0;
    pQVar2->ui32[1] = 0;
    pQVar2->ui32[2] = 0;
    pQVar2 = pQVar1 + ndpkt + 2;
    ndpkt = ndpkt + 3;
    pQVar4->ui32[0] = iVar5 + 0x6c00;
    pQVar4->ui32[3] = 0;
    pQVar4->ui32[1] = (0x800 - 0xe0 / uVar3) * 0x10;
    pQVar4->ui32[2] = 0;
    pQVar2->ui32[0] = iVar5 + 0x7000;
    pQVar2->ui32[3] = 0;
    pQVar2->ui32[1] = (0xe0 / uVar3 + 0x800) * 0x10;
    pQVar2->ui32[2] = 0;
  } while (iVar6 < 10);
  return;
}

void ClearZBuffer() {
	int i;
	int x[2];
	int y[2];
	int div;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  int iVar6;
  int x [2];
  int y [2];
  
  uVar3 = 1;
  if (g_bInterlace != '\0') {
    uVar3 = 2;
  }
  if (uVar3 == 0) {
    trap(7);
  }
  Reserve2DPacket(0x1000);
  pQVar1 = pbuf;
  pQVar4 = pbuf + ndpkt;
  pQVar2 = pbuf + ndpkt + 1;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = 0x70000022;
  pQVar2->ul64[1] = 0xe;
  pQVar2->ul64[0] = 0x1000000000008002;
  pQVar1[ndpkt + 2].ul64[1] = 0x47;
  pQVar1[ndpkt + 2].ul64[0] = 0x32001;
  pQVar1[ndpkt + 3].ul64[1] = 0x4e;
  pQVar1[ndpkt + 3].ul64[0] = 0x100008c;
  pQVar1[ndpkt + 4].ul64[0] = 0x300340000000800a;
  pQVar1[ndpkt + 4].ul64[1] = 0x441;
  ndpkt = ndpkt + 5;
  iVar6 = 0;
  do {
    iVar5 = iVar6 * 0x400;
    iVar6 = iVar6 + 1;
    pQVar2 = pQVar1 + ndpkt;
    pQVar2->ui32[3] = 0;
    pQVar4 = pQVar1 + ndpkt + 1;
    pQVar2->ui32[0] = 0;
    pQVar2->ui32[1] = 0;
    pQVar2->ui32[2] = 0;
    pQVar2 = pQVar1 + ndpkt + 2;
    ndpkt = ndpkt + 3;
    pQVar4->ui32[0] = iVar5 + 0x6c00;
    pQVar4->ui32[3] = 0;
    pQVar4->ui32[1] = (0x800 - 0xe0 / uVar3) * 0x10;
    pQVar4->ui32[2] = 0;
    pQVar2->ui32[0] = iVar5 + 0x7000;
    pQVar2->ui32[3] = 0;
    pQVar2->ui32[1] = (0xe0 / uVar3 + 0x800) * 0x10;
    pQVar2->ui32[2] = 0;
  } while (iVar6 < 10);
  return;
}

void CamSave() {
  old_cam_no = plyr_wrk.dop.dov[0]._0_1_;
  return;
}

int CamChangeCheck() {
  return (int)(old_cam_no != plyr_wrk.dop.dov[0]._0_2_);
}

void* GetEmptyBuffer(int no) {
  if (no == 1) {
    return buf2;
  }
  if ((1 < no) && (no == 2)) {
    return bufz;
  }
  return buf;
}

void CheckPointDepth(PP_JUDGE *ppj) {
	int i;
	int xx[32];
	int yy[32];
	int clip[32];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ivec[32];
	sceVu0FVECTOR bpos[32];
	sceVu0FVECTOR fzero;
	sceVu0FVECTOR ofst_pos[5];
	float fr_f;
	static sceGsStoreImage gs_simage1;
	Q_WORDDATA q;
	int n1;
	int n2;
	u_int ui;
	
  undefined8 *puVar1;
  float (*pafVar2) [4];
  undefined8 *puVar3;
  int iVar4;
  float (*pafVar5) [4];
  int iVar6;
  uchar *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  int (*paiVar12) [4];
  int iVar13;
  float fVar14;
  int xx [32];
  int yy [32];
  int clip [32];
  float wlm [4] [4];
  float slm [4] [4];
  int ivec [32] [4];
  float bpos [32] [4];
  float fzero [4];
  float ofst_pos [5] [4];
  Q_WORDDATA q;
  PP_JUDGE *local_c0;
  float *local_bc;
  int (*local_b8) [4];
  uchar *local_b4;
  Matrix4x4 *local_b0;
  int *local_ac;
  uint local_a8;
  
  local_bc = fzero;
  local_c0 = ppj;
  memset(local_bc,0,0x10);
  fzero[3] = 1.0;
  local_a8 = (uint)local_c0->num;
  puVar1 = &DAT_0034a6e0;
  pafVar2 = ofst_pos;
  do {
    pafVar5 = pafVar2;
    puVar3 = puVar1;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    *(undefined8 *)*pafVar5 = *puVar3;
    *(undefined8 *)(*pafVar5 + 2) = uVar8;
    *(undefined8 *)pafVar5[1] = uVar9;
    *(undefined8 *)(pafVar5[1] + 2) = uVar10;
    puVar1 = puVar3 + 4;
    pafVar2 = pafVar5[2];
  } while (puVar3 + 4 != (undefined8 *)&UNK_0034a720);
  uVar8 = puVar3[5];
  *(undefined8 *)pafVar5[2] = _UNK_0034a720;
  *(undefined8 *)(pafVar5[2] + 2) = uVar8;
  iVar13 = 0;
  if (local_a8 != 0) {
    local_b0 = (Matrix4x4 *)slm;
    local_b8 = ivec;
    local_ac = yy;
    local_b4 = local_c0->result;
    do {
      sceVu0UnitMatrix((Matrix4x4 *)wlm);
      paiVar12 = local_b8[iVar13];
      wlm[0][0] = 25.0;
      wlm[2][2] = 25.0;
      wlm[1][1] = 25.0;
      piVar11 = clip + iVar13;
      sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)local_c0->p[iVar13]);
      sceVu0MulMatrix(local_b0,&SgWSMtx,(Matrix4x4 *)wlm);
      sceVu0RotTransPers(paiVar12,local_b0,local_bc,0);
      *piVar11 = 0;
      if ((*paiVar12)[0] - 0x6c00U < 0x2801) {
        iVar4 = (*paiVar12)[1];
      }
      else {
        *piVar11 = 1;
        iVar4 = (*paiVar12)[1];
      }
      if (iVar4 - 0x7900U < 0xe01) {
        iVar4 = (*paiVar12)[2];
      }
      else {
        *piVar11 = *piVar11 + 1;
        iVar4 = (*paiVar12)[2];
      }
      if (iVar4 - 0xffU < 0xffff01) {
        iVar4 = (*paiVar12)[0];
      }
      else {
        *piVar11 = *piVar11 + 1;
        iVar4 = (*paiVar12)[0];
      }
      iVar6 = iVar4 + -0x6be9;
      if (-1 < iVar4 + -0x6bf8) {
        iVar6 = iVar4 + -0x6bf8;
      }
      fVar14 = 0.0;
      xx[iVar13] = iVar6 >> 4;
      if ((sys_wrk.count & 1) != 0) {
        fVar14 = 0.5;
      }
      iVar6 = (*paiVar12)[1] + (int)((fVar14 * 0.5 + DAT_0035519c) * 16.0);
      iVar4 = iVar6 + 0xf;
      if (-1 < iVar6) {
        iVar4 = iVar6;
      }
      local_ac[iVar13] = iVar4 >> 4;
      if (*piVar11 == 0) {
        iVar4 = xx[iVar13];
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        sceGsSetDefStoreImage
                  (0x359c30,0x1180,10,0x30,((iVar6 >> 2) << 0x12) >> 0x10,
                   *(undefined2 *)(local_ac + iVar13),4,1);
        CheckDMATrans();
        sceGsSyncPath(0,0);
        FlushCache(0);
        sceGsExecStoreImage(0x359c30,&q);
        sceGsSyncPath(0,0);
        if ((uint)((*paiVar12)[2] >> 4) <= (q.ui32[iVar4 + (iVar6 >> 2) * -4] & 0xffffff)) {
          *piVar11 = *piVar11 + 1;
        }
      }
      piVar11 = clip + iVar13;
      puVar7 = local_b4 + iVar13;
      iVar13 = iVar13 + 1;
      *puVar7 = *piVar11 == 0;
    } while (iVar13 < (int)local_a8);
  }
  return;
}

void GetCamI2DPos(float *pos, float *tx, float *ty) {
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR vt;
	sceVu0FVECTOR vtw;
	float pl;
	
  float zero;
  Matrix4x4 wlm;
  Matrix4x4 slm;
  Vector4 vt;
  Vector4 vtw;
  
  memset(&vt,0,0x10);
  zero = 0.0;
  vt.w = 1.0;
  sceVu0UnitMatrix(&wlm);
  wlm.matrix[0].x = 25.0;
  wlm.matrix[2].z = 25.0;
  wlm.matrix[1].y = 25.0;
  sceVu0TransMatrix(&wlm,&wlm,(Vector4 *)pos);
  sceVu0MulMatrix(&slm,&SgWSMtx,&wlm);
  sceVu0ApplyMatrix(&vtw,&slm,&vt);
  sceVu0ScaleVector(1.0 / vtw.w,&vtw,&vtw);
  *tx = (vtw.x - 2048.0) + 320.0;
  *ty = (vtw.y - 2048.0) + 112.0 + zero;
  return;
}

void Get2PosRot(float *v1, float *v2, float *x, float *y) {
	float l;
	float fx;
	float fy;
	float fz;
	
  bool bVar1;
  float fVar2;
  float y_00;
  float fVar3;
  float y_01;
  float fVar4;
  
  fVar3 = v2[2] - v1[2];
  fVar4 = v2[1];
  y_01 = *v2 - *v1;
  fVar2 = v1[1];
  y_00 = SgSqrtf(y_01 * y_01 + fVar3 * fVar3);
  fVar3 = SgAtan2f(y_01,fVar3);
  *y = fVar3;
  fVar2 = SgAtan2f(y_00,fVar4 - fVar2);
  fVar2 = fVar2 + DAT_003551a0;
  bVar1 = DAT_003551a4 < fVar2;
  *x = fVar2;
  if (bVar1) {
    fVar2 = fVar2 - DAT_003551a8;
  }
  else {
    if (DAT_003551ac <= fVar2) {
      *x = fVar2;
      goto LAB_0011f20c;
    }
    fVar2 = fVar2 + DAT_003551b0;
  }
  *x = fVar2;
LAB_0011f20c:
  fVar2 = *y;
  if (DAT_003551b4 < fVar2) {
    fVar2 = fVar2 - DAT_003551b8;
  }
  else {
    if (DAT_003551bc <= fVar2) {
      *y = fVar2;
      return;
    }
    fVar2 = fVar2 + DAT_003551c0;
  }
  *y = fVar2;
  return;
}

void Get2PosRot2(float *v1, float *v2, float *x, float *z) {
	float fy;
	float fz;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float x_00;
  float fVar4;
  
  fVar4 = v2[2];
  x_00 = v2[1] - v1[1];
  fVar2 = v1[2];
  fVar3 = SgAtan2f(*v2 - *v1,x_00);
  *z = fVar3;
  fVar2 = SgAtan2f(fVar4 - fVar2,x_00);
  bVar1 = DAT_003551c4 < fVar2;
  *x = fVar2;
  if (bVar1) {
    fVar2 = fVar2 - DAT_003551c8;
  }
  else {
    if (DAT_003551cc <= fVar2) {
      *x = fVar2;
      goto LAB_0011f310;
    }
    fVar2 = fVar2 + DAT_003551d0;
  }
  *x = fVar2;
LAB_0011f310:
  fVar2 = *z;
  if (DAT_003551d4 < fVar2) {
    fVar2 = fVar2 - DAT_003551d8;
  }
  else {
    if (DAT_003551dc <= fVar2) {
      *z = fVar2;
      return;
    }
    fVar2 = fVar2 + DAT_003551e0;
  }
  *z = fVar2;
  return;
}

void GetTrgtRotType2(float *p0, float *p1, float *rot, int id) {
	sceVu0FVECTOR dist;
	
  float fVar1;
  float dist [4];
  
  *rot = 0.0;
  rot[1] = 0.0;
  rot[2] = 0.0;
  rot[3] = 0.0;
  sceVu0SubVector(dist,p1,p0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV(p0,p1);
    fVar1 = SgAtan2f(dist[1],dist[3]);
    *rot = fVar1;
  }
  if ((id & 2U) != 0) {
    fVar1 = SgAtan2f(dist[0],dist[2]);
    rot[1] = fVar1;
  }
  return;
}

void CalcSimEquations(double *sq[3], float *x, float *y) {
	double d;
	int i;
	int j;
	int k;
	
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 1;
  iVar7 = 0;
  do {
    iVar4 = iVar5;
    if (iVar4 < 2) {
      iVar5 = iVar4;
      do {
        dVar2 = *(double *)(iVar7 * 0x20 + (int)sq);
        dVar1 = (double)sq[iVar5][iVar7];
        iVar6 = iVar5 + 1;
        for (iVar3 = iVar4; iVar3 < 3; iVar3 = iVar3 + 1) {
          sq[iVar5][iVar3] =
               (long)((double)sq[iVar5][iVar3] - (double)sq[iVar7][iVar3] * (dVar1 / dVar2));
        }
        iVar5 = iVar6;
      } while (iVar6 < 2);
    }
    iVar5 = iVar4 + 1;
    iVar7 = iVar4;
  } while (iVar4 < 1);
  iVar5 = 1;
  do {
    dVar1 = (double)sq[iVar5][2];
    iVar7 = iVar5;
    while (iVar7 = iVar7 + 1, iVar7 < 2) {
      dVar1 = dVar1 - (double)sq[iVar5][iVar7] * (double)sq[iVar7][2];
    }
    iVar7 = iVar5 + -1;
    sq[iVar5][2] = (long)(dVar1 / *(double *)(iVar5 * 0x20 + (int)sq));
    iVar5 = iVar7;
  } while (-1 < iVar7);
  dVar1 = (double)sq[1][2];
  *x = (float)(double)(*sq)[2];
  *y = (float)dVar1;
  return;
}

float Get2PLength(float *v1, float *v2) {
	float xx;
	float yy;
	float zz;
	
  float fVar1;
  
  fVar1 = SgSqrtf((*v2 - *v1) * (*v2 - *v1) + (v2[1] - v1[1]) * (v2[1] - v1[1]) +
                  (v2[2] - v1[2]) * (v2[2] - v1[2]));
  return fVar1;
}

int log_2(float num) {
	int n;
	
  int iVar1;
  
  iVar1 = 0;
  if (1.0 < num * 0.5) {
    iVar1 = log_2(num * 0.5);
  }
  return iVar1 + 1;
}

void LocalCopyLtoB_Sub(int no, int type, int addr) {
	u_long128 *pbuf;
	static sceGsStoreImage gs_simage1;
	static sceGsStoreImage gs_simage2;
	
  uint16 *puVar1;
  
  puVar1 = buf;
  if (no != 0) {
    puVar1 = buf2;
  }
  sceGsSetDefStoreImage(0x359ca0,(short)addr,10,0,0,0,0x280,200);
  sceGsSetDefStoreImage(0x359d10,(short)addr,10,0,0,200,0x280,0x18);
  CheckDMATrans();
  sceGsSyncPath(0,0);
  FlushCache(0);
  sceGsExecStoreImage(0x359ca0,puVar1);
  sceGsExecStoreImage(0x359d10,puVar1 + 32000);
  if (type == 0) {
    return;
  }
  sceGsSyncPath(0,0);
  return;
}

void LocalCopyLtoB_Sub2(int no, int type, int addr) {
  return;
}

void LocalCopyBtoL_Sub(int no, int type, int addr) {
	u_long128 *bbuf;
	int nloop;
	int bline;
	int rline;
	int oline;
	
  uint uVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint16 *puVar8;
  
  puVar8 = buf;
  if (no != 0) {
    puVar8 = buf2;
  }
  Reserve2DPacket(0x1000);
  pQVar3 = pbuf;
  lVar7 = 0xe0;
  iVar6 = ndpkt;
  do {
    ndpkt = iVar6;
    iVar5 = 0xe0 - (int)lVar7;
    pQVar2 = pQVar3 + ndpkt;
    pQVar2->ui32[3] = 0x50000006;
    pQVar2->ui32[0] = (uint)&DAT_10000006;
    pQVar2->ui32[1] = 0;
    pQVar2->ui32[2] = 0;
    pQVar3[ndpkt + 1].ul64[1] = 0xe;
    pQVar3[ndpkt + 1].ul64[0] = 0x1000000000008004;
    pQVar3[ndpkt + 2].ul64[1] = 0x50;
    pQVar3[ndpkt + 2].ul64[0] = (long)addr << 0x20 | 0xa000000000000;
    pQVar3[ndpkt + 3].ul64[0] = (long)iVar5 << 0x30;
    lVar4 = 100;
    if (lVar7 < 0x65) {
      lVar4 = lVar7;
    }
    uVar1 = (int)lVar4 * 0xa0;
    iVar6 = ndpkt + 8;
    lVar7 = (long)((int)lVar7 - (int)lVar4);
    pQVar3[ndpkt + 3].ul64[1] = 0x51;
    pQVar3[ndpkt + 4].ul64[0] = lVar4 << 0x20 | 0x280;
    pQVar3[ndpkt + 4].ul64[1] = 0x52;
    pQVar3[ndpkt + 5].ul64[1] = 0x53;
    pQVar3[ndpkt + 5].ul64[0] = 0;
    pQVar3[ndpkt + 6].ul64[0] = (long)(int)uVar1 | 0x1800000000008000;
    pQVar3[ndpkt + 6].ul64[1] = 0xe;
    pQVar2 = pQVar3 + ndpkt + 7;
    pQVar2->ui32[3] = uVar1 | 0x50000000;
    pQVar2->ui32[0] = uVar1 + 0x30000000;
    pQVar2->ui32[1] = (uint)(puVar8 + iVar5 * 0xa0);
    pQVar2->ui32[2] = 0;
    pQVar2 = pbuf;
  } while (0 < lVar7);
  ndpkt = ndpkt + 9;
  pQVar3 = pbuf + iVar6;
  pQVar3->ui32[3] = (uint)&DAT_11000000;
  pQVar3->ui32[0] = 0x10000000;
  pQVar2 = pQVar2 + ndpkt;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar2->ui32[0] = 0x70000000;
  pQVar2->ui32[3] = 0;
  pQVar2->ui32[1] = 0;
  pQVar2->ui32[2] = 0;
  return;
}

int GetYOffset() {
  return 0x7908 - (uint)*(ushort *)&(pdrawenv->xyoffset1).field_0x4;
}

float GetYOffsetf() {
  return (float)(0x7908 - (uint)*(ushort *)&(pdrawenv->xyoffset1).field_0x4) * 0.0625;
}

void LocalCopyLtoB2(int no, int addr) {
  LocalCopyLtoB_Sub(no,1,addr);
  return;
}

void LocalCopyLtoB(int no, int addr) {
  LocalCopyLtoB_Sub2(no,1,addr);
  return;
}

void LocalCopyBtoL(int no, int addr) {
  LocalCopyBtoL_Sub(no,1,addr);
  return;
}

void LocalCopyLtoB_NB(int no, int addr) {
  LocalCopyLtoB_Sub(no,0,addr);
  return;
}

void LocalCopyBtoL_NB(int no, int addr) {
  LocalCopyBtoL_Sub(no,0,addr);
  return;
}

void ClearLocalCopyLtoLCache() {
  old_ltol_addr1 = -1;
  old_ltol_addr2 = -1;
  return;
}

int LocalCopyLtoLDraw(int addr1, int addr2) {
	int i;
	int old_ndpkt;
	int xyoff;
	Q_WORDDATA *ppbuf;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  ushort uVar1;
  sceGsFrame sVar2;
  sceGsXyoffset sVar3;
  sceGsDrawEnv1 *psVar4;
  Q_WORDDATA *pQVar5;
  sceGsZbuf sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  Q_WORDDATA *pQVar11;
  
  uVar1 = *(ushort *)&(pdrawenv->xyoffset1).field_0x4;
  Reserve2DPacket(0x1000);
  pQVar5 = Get2DPacketBufferAddress();
  pQVar5[1].ul64[0] = 0x1000000000008007;
  psVar4 = pdrawenv;
  iVar10 = addr2 + 0x1f;
  if (-1 < addr2) {
    iVar10 = addr2;
  }
  *(undefined8 *)((int)pQVar5 + 0x28) = 0x3f;
  pQVar5[3].ul64[0] = (long)(iVar10 >> 5) | 0xa0000;
  *(undefined8 *)((int)pQVar5 + 0x38) = 0x4c;
  pQVar5[4].ul64[0] = 0x790800006c00;
  *(undefined8 *)((int)pQVar5 + 0x48) = 0x18;
  pQVar5[5].ul64[0] = 0x21002;
  *(undefined8 *)((int)pQVar5 + 0x58) = 0x47;
  *(undefined8 *)((int)pQVar5 + 0x18) = 0xe;
  pQVar5[2].ul64[0] = 0;
  sVar6 = psVar4->zbuf1;
  *(undefined8 *)((int)pQVar5 + 0x68) = 0x4e;
  iVar10 = 0;
  pQVar5[7].ul64[0] = 0x100000001;
  *(undefined8 *)((int)pQVar5 + 0x78) = 0x14;
  pQVar5[8].ul64[0] = (long)addr1 | 0xe28028000;
  *(long *)(pQVar5 + 6) =
       (long)(int)(((uint)((ulong)sVar6 >> 0x18) & 0xf) << 0x18 | SUB84(sVar6,0) & 0x1ff);
  uVar9 = 0x6c00;
  *(undefined8 *)((int)pQVar5 + 0x88) = 6;
  pQVar5 = pQVar5 + 9;
  do {
    pQVar11 = pQVar5;
    pQVar11[1].ui32[0] = iVar10 << 4;
    pQVar11[2].ui32[0] = uVar9;
    iVar10 = iVar10 + 0x40;
    pQVar11[3].ui32[0] = uVar9 - 0x6810;
    pQVar11[4].ui32[0] = uVar9 + 0x3f8;
    uVar9 = uVar9 + 0x400;
    pQVar11->ul64[0] = 0x408b400000008001;
    pQVar11->ul64[1] = 0x4343;
    *(undefined4 *)((int)pQVar11 + 0x14) = 0;
    *(undefined4 *)((int)pQVar11 + 0x24) = 0x7900;
    *(undefined8 *)((int)pQVar11 + 0x28) = 0;
    *(undefined4 *)((int)pQVar11 + 0x34) = 0xe00;
    *(undefined4 *)((int)pQVar11 + 0x44) = 0x8708;
    *(undefined8 *)((int)pQVar11 + 0x48) = 0;
    pQVar5 = pQVar11 + 5;
  } while (iVar10 < 0x280);
  pQVar11[5].ul64[0] = 0x1000000000008003;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
  *(undefined8 *)((int)pQVar11 + 0x58) = 0xe;
  psVar4 = pdrawenv;
  sVar2 = pdrawenv->frame1;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  uVar7 = *(undefined4 *)&pdrawenv->frame1addr;
  uVar8 = *(undefined4 *)((int)&pdrawenv->frame1addr + 4);
  pQVar11[6].ui32[0] = SUB84(sVar2,0);
  *(int *)((int)pQVar11 + 100) = (int)((ulong)sVar2 >> 0x20);
  *(undefined4 *)((int)pQVar11 + 0x68) = uVar7;
  *(undefined4 *)((int)pQVar11 + 0x6c) = uVar8;
  sVar6 = psVar4->zbuf1;
  uVar7 = *(undefined4 *)&psVar4->zbuf1addr;
  uVar8 = *(undefined4 *)((int)&psVar4->zbuf1addr + 4);
  pQVar11[7].ui32[0] = SUB84(sVar6,0);
  *(int *)((int)pQVar11 + 0x74) = (int)((ulong)sVar6 >> 0x20);
  *(undefined4 *)((int)pQVar11 + 0x78) = uVar7;
  *(undefined4 *)((int)pQVar11 + 0x7c) = uVar8;
  sVar3 = psVar4->xyoffset1;
  uVar7 = *(undefined4 *)&psVar4->xyoffset1addr;
  uVar8 = *(undefined4 *)((int)&psVar4->xyoffset1addr + 4);
  pQVar11[8].ui32[0] = SUB84(sVar3,0);
  *(int *)((int)pQVar11 + 0x84) = (int)((ulong)sVar3 >> 0x20);
  *(undefined4 *)((int)pQVar11 + 0x88) = uVar7;
  *(undefined4 *)((int)pQVar11 + 0x8c) = uVar8;
  iVar10 = ndpkt;
                    /* end of inlined section */
  Set2DPacketBufferAddress(pQVar11 + 9);
  uVar9 = (ndpkt - iVar10) - 1;
  pQVar5 = pbuf + iVar10;
  pQVar5->ui32[3] = uVar9 | 0x50000000;
  pQVar5->ui32[0] = uVar9 | 0x10000000;
  pQVar5->ui32[2] = (uint)&DAT_11000000;
  pQVar5->ui32[1] = 0;
  return -(0x7908 - (uint)uVar1);
}

void LocalCopyLtoL(int addr1, int addr2) {
	int i;
	Q_WORDDATA *ppbuf;
	
  Q_WORDDATA *pQVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  
  Reserve2DPacket(0x1000);
  pQVar1 = Get2DPacketBufferAddress();
  pQVar1->ui32[0] = (uint)&DAT_10000002;
  pQVar1->ui32[2] = 0x50000002;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[1] = 0;
  pQVar1[1].ul64[0] = 0x1000000000008001;
  *(undefined8 *)((int)pQVar1 + 0x18) = 0xe;
  *(undefined8 *)((int)pQVar1 + 0x28) = 0x3f;
  pQVar1[2].ul64[0] = 0;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0x50000020;
  pQVar1[3].ui32[0] = 0x10000020;
  *(undefined4 *)((int)pQVar1 + 0x34) = 0;
  *(undefined4 *)((int)pQVar1 + 0x38) = 0;
  pQVar1[4].ul64[0] = 0x100000000000801f;
  *(undefined8 *)((int)pQVar1 + 0x48) = 0xe;
  pQVar1[5].ul64[0] = (long)addr1 | 0xa0000U | (long)addr2 << 0x20 | 0xa000000000000;
  *(undefined8 *)((int)pQVar1 + 0x58) = 0x50;
  iVar2 = 0;
  pQVar1 = pQVar1 + 6;
  do {
    pQVar3 = pQVar1;
    pQVar3->ul64[1] = 0x51;
    pQVar3[1].ul64[0] = 0xe000000040;
    *(undefined8 *)((int)pQVar3 + 0x18) = 0x52;
    pQVar3[2].ul64[0] = 2;
    pQVar3->ul64[0] = (long)(iVar2 << 6) | (long)(iVar2 << 6) << 0x20;
    iVar2 = iVar2 + 1;
    *(undefined8 *)((int)pQVar3 + 0x28) = 0x53;
    pQVar1 = pQVar3 + 3;
  } while (iVar2 < 10);
  pQVar3[3].ui32[0] = 0x10000000;
  *(undefined **)((int)pQVar3 + 0x3c) = &DAT_11000000;
  *(undefined4 *)((int)pQVar3 + 0x34) = 0;
  *(undefined4 *)((int)pQVar3 + 0x38) = 0;
  Set2DPacketBufferAddress(pQVar3 + 4);
  return;
}

void LocalCopyZtoBZ() {
	static sceGsStoreImage gs_simage1;
	
  sceGsSetDefStoreImage(0x359d80,0x1180,10,0x31,0,0,0x280,0xe0);
  sceGsSyncPath(0,0);
  CheckDMATrans();
  FlushCache(0);
  sceGsExecStoreImage(0x359d80,bufz);
  sceGsSyncPath(0,0);
  return;
}

void LocalCopyBZtoZ() {
	static sceGsLoadImage gs_limage1;
	
  sceGsSetDefLoadImage(0x359df0,0x1180,10,0x31,0,0,0x280,0xe0);
  FlushCache(0);
  sceGsExecLoadImage(0x359df0,bufz);
  sceGsSyncPath(0,0);
  return;
}

void LocalCopyLtoBD(int addr, void *outbuf) {
	static sceGsStoreImage gs_simage1;
	static sceGsStoreImage gs_simage2;
	
  sceGsSetDefStoreImage(0x359e50,(short)addr,10,0,0,0,0x280,200);
  sceGsSetDefStoreImage(0x359ec0,(short)addr,10,0,0,200,0x280,0x18);
  CheckDMATrans();
  sceGsSyncPath(0,0);
  FlushCache(0);
  sceGsExecStoreImage(0x359e50,outbuf);
  sceGsExecStoreImage(0x359ec0,(int)outbuf + 0x7d000);
  sceGsSyncPath(0,0);
  return;
}

void SetVibrate(int type, int time, int pow) {
  if (type != 0) {
    vib2_time = time;
    vib2_pow = pow;
    return;
  }
  vib1_time = time;
  return;
}

void CallVibrate() {
  bool bVar1;
  int iVar2;
  
  iVar2 = vib1_time + -1;
  bVar1 = 0 < vib1_time;
  vib1_time = iVar2;
  if (bVar1) {
    VibrateRequest1(0,1);
  }
  iVar2 = vib2_time + -1;
  bVar1 = 0 < vib2_time;
  vib2_time = iVar2;
  if (bVar1) {
    VibrateRequest2(0,(short)vib2_pow);
    return;
  }
  return;
}

void InitTecmotLogo() {
  tecmo_logo_flow = 0;
  return;
}

int SetTecmoLogo() {
	SPRT_DAT logotex[1];
	DISP_SPRT ds;
	static int cnt;
	u_char alp;
	int sec1;
	int sec3;
	
  int iVar1;
  byte unaff_s1_lo;
  SPRT_DAT logotex [1];
  DISP_SPRT ds;
  
  logotex[0].tex0 = DAT_0034a730;
  logotex[0]._8_8_ = DAT_0034a738;
  logotex[0]._16_8_ = DAT_0034a740;
  logotex[0]._24_8_ = DAT_0034a748;
  if (tecmo_logo_flow == 2) {
    ds.alpha = 0x80;
    cnt_325 = cnt_325 + 1;
    if (cnt_325 < 0x3c) goto LAB_00120214;
    tecmo_logo_flow = 3;
    ds.alpha = 0x80;
  }
  else {
    ds.alpha = unaff_s1_lo;
    if (tecmo_logo_flow < 3) {
      if (tecmo_logo_flow == 0) {
        cnt_325 = 0;
        tecmo_logo_flow = 1;
      }
      else if (tecmo_logo_flow != 1) goto LAB_00120214;
      iVar1 = cnt_325 << 7;
      cnt_325 = cnt_325 + 1;
      ds.alpha = (byte)(iVar1 / 0x5a);
      if (cnt_325 < 0x5a) goto LAB_00120214;
      tecmo_logo_flow = tecmo_logo_flow + 1;
    }
    else {
      if (tecmo_logo_flow != 3) {
        if (tecmo_logo_flow == 0xff) {
          return 1;
        }
        goto LAB_00120214;
      }
      iVar1 = 0x5a - cnt_325;
      cnt_325 = cnt_325 + 1;
      ds.alpha = (byte)((iVar1 * 0x80) / 0x5a);
      if (cnt_325 < 0x5a) goto LAB_00120214;
      tecmo_logo_flow = 0xff;
    }
  }
  cnt_325 = 0;
LAB_00120214:
  SetSprFile3(0x1e90000,0);
  CopySprDToSpr(&ds,logotex);
  ds.x = (float)logotex[0].x;
  ds.y = (float)logotex[0].y;
  ds.z = 0xfffffff - logotex[0].pri;
  ds.test = 0x5000d;
  ds.zbuf = 0x10100008c;
  ds.b = 0x60;
  ds.pri = logotex[0].pri;
  ds.r = 0x60;
  ds.g = 0x60;
  DispSprD(&ds);
  return 0;
}

void set_vect(float *v, float x, float y, float z, float w) {
  v[3] = w;
  *v = x;
  v[1] = y;
  v[2] = z;
  return;
}

void Vu0SubOuterProduct(float *v0, float *v1, float *v2, float *v3) {
	u_int reg0;
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _lqc2(*(undefined (*) [16])v2);
  auVar3 = _lqc2(*(undefined (*) [16])v3);
  auVar2 = _vsub(auVar2,auVar1);
  auVar1 = _vsub(auVar3,auVar1);
  _vopmula(auVar2,auVar1);
  auVar1 = _vopmsub(auVar1,auVar2);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0Normalize(float *v0, float *v1) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vsqrt(auVar2);
  uVar3 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar3);
  _vdiv(in_vf0,0,auVar2,0);
  _vsub(in_vf0,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0ApplyMatrix(float *v0, float *m0[4], float *v1) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  auVar5 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0MulVector(float *v0, float *v1, float *v2) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _lqc2(*(undefined (*) [16])v2);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0FTOI0Vector(int *v0, float *v1) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}
