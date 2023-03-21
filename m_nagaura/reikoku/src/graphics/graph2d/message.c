// STATUS: NOT STARTED

typedef struct {
	int pri;
	int bx;
	int by;
	u_char r;
	u_char g;
	u_char b;
	u_char alp;
	u_char *str;
	u_char *stp;
	int sta;
	int flg;
	int pass;
	int csr;
	int selnum;
	int seltype;
	int decide;
	int mes_is_end;
	int cnt;
	int retst;
	int disptype;
	int fntmcnt;
	int fntcnt;
	int fntwait;
	u_char usrgb[4];
	u_char vib;
} MES_DAT;

typedef struct {
	u_short dummy;
	u_char pass;
	u_char pass_flg;
	u_char *old_adr;
	int cnt;
	u_char mes_alps[16][48];
} MESV22;

u_char ascii_font_tbl[0] = {
};
u_char ascii_font_tbl2[0] = {
};
int wbyte_font_tbl0[0] = {
};
int wbyte_font_tbl1[0] = {
};
int wbyte_font_tbl2[0] = {
};
int wbyte_font_tbl3[0] = {
};
int wbyte_font_tbl4[0] = {
};
int wbyte_font_tbl5[0] = {
};
static int font_w_b0[0] = {
};
static int font_w_b1[0] = {
};
static int font_w_b2[0] = {
};
static int font_w_b3[0] = {
};
static int font_w_b4[0] = {
};
SPRT_DAT fntdat[0] = {
};
SPRT_DAT mesbox[0] = {
};
SPRT_DAT btntex[0] = {
};
static int *mes_ex_nums[0] = {
};
static MES_DAT msdat;
static MESV22 mesv22;
u_char *save_mes_addr = NULL;

void InitMessage() {
  FontInit();
  save_mes_addr = (uchar *)0x0;
  memset(&mesv22,0,0x30c);
  return;
}

void InitMessageEF() {
  if (mesv22.pass != '\0') {
    mesv22.pass = '\0';
    mesv22.pass_flg = '\x01';
    return;
  }
  mesv22.pass_flg = '\0';
  return;
}

void SetMessageDirect(int addr, int pri, int fn, int x, int y, u_char r, u_char g, u_char b) {
	static DISP_STR ds;
	STR_DAT sd;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  STR_DAT sd;
  
  puVar1 = (undefined *)((int)&sd.pos_x + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ca70 >> (7 - uVar2) * 8;
  sd._0_8_ = DAT_0034ca70;
  puVar1 = (undefined *)((int)&sd.type + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ca78 >> (7 - uVar2) * 8;
  sd._8_8_ = DAT_0034ca78;
  puVar1 = (undefined *)((int)&sd.g + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ca80 >> (7 - uVar2) * 8;
  sd._16_8_ = DAT_0034ca80;
  puVar1 = (undefined *)((int)&sd.alpha + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ca88 >> (7 - uVar2) * 8;
  sd._24_8_ = DAT_0034ca88;
  sd.pri = DAT_0034ca90;
  CopyStrDToStr((DISP_STR *)&ds_126,&sd);
  DAT_003bb1c0 = (pri & 0xffU) << 0xc;
  ds_126 = addr;
  DAT_003bb1a4 = x;
  DAT_003bb1a8 = y;
  DAT_003bb1b0 = (int)(char)r & 0xff;
  DAT_003bb1b4 = (int)(char)g & 0xff;
  DAT_003bb1b8 = (int)(char)b & 0xff;
  SetMessageV2((DISP_STR *)&ds_126);
  return;
}

void SetMessageAddr(int addr) {
  save_mes_addr = (uchar *)addr;
  SetMessageV3((uchar *)addr,0x64000);
  return;
}

int SetMessage() {
  int iVar1;
  
  SetMessageV3(save_mes_addr,0x64000);
  iVar1 = MesStatusCheck();
  return iVar1;
}

void MessageWaitOff() {
  return;
}

static void SetMesFrame2(int pri, float bx, float by, float sw, float sh) {
	float xx;
	float yy;
	
  float y1;
  float x1;
  float fVar1;
  float y4;
  float fVar2;
  float x4;
  float x4_00;
  float y1_00;
  float y4_00;
  
  y1 = by - 224.0;
  x1 = bx - 320.0;
  fVar2 = y1 + sh;
  fVar1 = x1 + sw;
  x4_00 = fVar1 + 14.0;
  y4 = fVar2 + 35.0;
  SetSquareS(pri,x1,y1,x4_00,y4,'\0','\0','\0',0x80);
  x4 = x1 + 4.0;
  y4_00 = y1 + 4.0;
  SetSquareS(pri,x1 + 1.0,y1 + 1.0,fVar1 + 13.0,fVar2 + 33.0,'@','@','@',0x80);
  y1_00 = y4 - 4.0;
  SetSquareS(pri,x1 + 3.0,y1 + 3.0,fVar1 + 11.0,fVar2 + 31.0,0x80,0x80,0x80,0x80);
  SetSquareS(pri,x1 + 5.0,y1 + 5.0,fVar1 + 9.0,fVar2 + 29.0,'@','@','@',0x80);
  SetSquareS(pri,x1 + 7.0,y1 + 7.0,fVar1 + 7.0,fVar2 + 27.0,'\0','\0','\0',0x80);
  SetSquareS(pri,x1,y1,x4,y4_00,'\0','\0','\0',0x80);
  SetSquareS(pri,x1,y1_00,x4,y4,'\0','\0','\0',0x80);
  SetSquareS(pri,x4_00 - 4.0,y1,x4_00,y4_00,'\0','\0','\0',0x80);
  SetSquareS(pri,x4_00 - 4.0,y1_00,x4_00,y4,'\0','\0','\0',0x80);
  return;
}

void SetMesFrame(int pri, int type, float bx, float by, float sw, float sh) {
  if ((type != 0) && (type == 1)) {
    SetMesFrame2(pri,bx,by,sw,sh);
    return;
  }
  return;
}

void SetInteger(float x, float y, int num) {
  SetInteger2(0,x,y,0,0x80,0x80,0x80,num);
  return;
}

void SetInteger2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, int num) {
	char cwo[16];
	
  char cwo [16];
  
  sprintf(cwo,&DAT_00356a88);
  SetASCIIString2(pri,x,y,type,r,g,b,cwo);
  return;
}

void SetInteger3(int pri, float x, float y, int type, u_char r, u_char g, u_char b, u_char a, int num) {
	char cwo[16];
	
  char cwo [16];
  
  sprintf(cwo,&DAT_00356a90);
  SetASCIIString3(pri,x,y,type,r,g,b,a,cwo);
  return;
}

void SetASCIIString(float x, float y, char *str) {
  SetASCIIString3(0,x,y,0,0x80,0x80,0x80,0x80,str);
  return;
}

void SetASCIIString2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, char *str) {
  SetASCIIString3(pri,x,y,type,r,g,b,0x80,str);
  return;
}

void SetASCIIString3(int pri, float x, float y, int type, u_char r, u_char g, u_char b, u_char a, char *str) {
	int i;
	int n;
	int code;
	u_char c1;
	u_char c2;
	int w[2];
	u_char *tbl;
	int ft;
	int offset;
	int xoff;
	
  char cVar1;
  byte bVar2;
  ulong *puVar3;
  uint uVar4;
  uchar_0_ *puVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int w [2];
  uchar local_c0;
  uchar local_bc;
  uchar local_b8;
  uint local_b4;
  
  iVar12 = nmdpkt;
  iVar13 = 0;
  iVar14 = 0x1000;
  if (0 < pri) {
    iVar14 = pri;
  }
  local_b4 = (int)(char)a & 0xff;
  uVar15 = type & 1;
  draw_mpri[nmdpri][0] = iVar14;
  draw_mpri[nmdpri][1] = iVar12;
  iVar14 = 0;
  cVar1 = *str;
  uVar10 = (int)w + 7U & 7;
  puVar3 = (ulong *)(((int)w + 7U) - uVar10);
  local_c0 = r;
  local_bc = g;
  local_b8 = b;
  *puVar3 = *puVar3 & -1L << (uVar10 + 1) * 8 | (ulong)DAT_00356a98 >> (7 - uVar10) * 8;
  w = DAT_00356a98;
  iVar12 = 0;
  pcVar8 = str;
  while (cVar1 != '\0') {
    if ((byte)(pcVar8[1] + 0x22U) < 2) {
      iVar13 = iVar13 + 1;
    }
    iVar13 = iVar13 + 1;
    pcVar8 = str + iVar13;
    iVar12 = iVar12 + 1;
    cVar1 = *pcVar8;
  }
  nmdpri = nmdpri + 1;
  SetFontPacketHeader(iVar12,uVar15 ^ 1,'\x7f');
  iVar13 = 0;
  if (*str == '\0') {
    return;
  }
  bVar2 = str[1];
  pbVar6 = (byte *)str;
  do {
    uVar10 = (uint)*pbVar6;
    if (bVar2 == 0xde) {
      uVar4 = uVar10 + 0x4d;
      uVar9 = uVar10 + 0xb;
      uVar7 = 0x1b;
LAB_0015579c:
      uVar11 = uVar10 - 0x20;
      if ((uVar4 & 0xff) <= uVar7) {
        uVar11 = uVar9;
      }
      iVar13 = iVar13 + 1;
    }
    else {
      if (bVar2 == 0xdf) {
        uVar4 = uVar10 + 0x36;
        uVar9 = uVar10 + 0x10;
        uVar7 = 4;
        goto LAB_0015579c;
      }
      uVar11 = 0;
      if ((uVar10 - 0x20 & 0xff) < 0xbe) {
        uVar11 = uVar10 - 0x20;
      }
    }
    if (uVar15 == 0) {
      puVar5 = &ascii_font_tbl;
    }
    else {
      puVar5 = &ascii_font_tbl2;
    }
    iVar12 = 10;
    if ((type & 2U) == 0) {
      iVar12 = 0;
    }
    SetFont(pri,type,(uint)(byte)puVar5[uVar11] + iVar12,(int)(x + (float)iVar14),(int)y,local_c0,
            local_bc,local_b8,local_b4);
    if (uVar15 == 0) {
      iVar14 = iVar14 + *(int *)(&font_w_b0 + ((uint)(byte)puVar5[uVar11] + iVar12) * 4);
    }
    else {
      iVar14 = iVar14 + 0xc;
    }
    iVar13 = iVar13 + 1;
    pbVar6 = (byte *)(str + iVar13);
    if (*pbVar6 == 0) {
      return;
    }
    bVar2 = pbVar6[1];
  } while( true );
}

void SetWString2(int pri, float x, float y, u_char r, u_char g, u_char b, char *str) {
	int i;
	int n;
	int code;
	int dc;
	int type;
	int font_code[2][16];
	
  char cVar1;
  int iVar2;
  size_t sVar3;
  double dVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int unaff_s1_lo;
  int font_code [2] [16];
  int i;
  int n;
  
  iVar2 = nmdpkt;
  puVar5 = &DAT_0034ca98;
  i = 0;
  n = 0;
  piVar7 = (int *)font_code;
  do {
    uVar10 = puVar5[1];
    uVar11 = puVar5[2];
    uVar12 = puVar5[3];
    *(undefined8 *)piVar7 = *puVar5;
    *(undefined8 *)(piVar7 + 2) = uVar10;
    *(undefined8 *)(piVar7 + 4) = uVar11;
    *(undefined8 *)(piVar7 + 6) = uVar12;
    puVar5 = puVar5 + 4;
    piVar7 = piVar7 + 8;
  } while (puVar5 != &DAT_0034cb18);
  draw_mpri[nmdpri][0] = pri;
  draw_mpri[nmdpri][1] = iVar2;
  nmdpri = nmdpri + 1;
  sVar3 = strlen(str);
  dVar4 = (double)sVar3;
  if ((long)sVar3 < 0) {
    dVar4 = dVar4 + 4294967296.0;
  }
  iVar2 = dptoli((long)(dVar4 * 0.5));
  SetFontPacketHeader(iVar2,1,'\x7f');
  if (*str != '\0') {
    cVar1 = *str;
    pcVar6 = str;
    while( true ) {
      uVar9 = (uint)CONCAT11(cVar1,pcVar6[1]);
      uVar8 = 0;
      if ((uVar9 & 0xf000) != 0x8000) {
        uVar8 = (uint)((uVar9 & 0xf000) == 0xa000);
      }
      iVar2 = *(int *)((int)font_code + uVar8 * 0x10 * 4);
      if ((iVar2 <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][1])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl0 + (uVar9 - iVar2) * 4);
      }
      if ((font_code[uVar8][2] <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][3])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl1 + (uVar9 - font_code[uVar8][2]) * 4);
      }
      if ((font_code[uVar8][4] <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][5])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl2 + (uVar9 - font_code[uVar8][4]) * 4);
      }
      if ((font_code[uVar8][6] <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][7])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl3 + (uVar9 - font_code[uVar8][6]) * 4);
      }
      if ((font_code[uVar8][8] <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][9])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl4 + (uVar9 - font_code[uVar8][8]) * 4);
      }
      if ((font_code[uVar8][10] <= (int)uVar9) && ((int)uVar9 <= font_code[uVar8][0xb])) {
        unaff_s1_lo = *(int *)(&wbyte_font_tbl5 + (uVar9 - font_code[uVar8][10]) * 4);
      }
      if (uVar9 == font_code[uVar8][0xc]) {
        unaff_s1_lo = 0xe2;
      }
      if (uVar9 == font_code[uVar8][0xd]) {
        unaff_s1_lo = 0xe4;
      }
      if (uVar9 == font_code[uVar8][0xe]) {
        unaff_s1_lo = 0xe0;
      }
      if (uVar9 == font_code[uVar8][0xf]) {
        unaff_s1_lo = 0xe1;
      }
      SetFont(pri,0,unaff_s1_lo,(int)(x + (float)(n * 0x18)),(int)y,r,g,b,0x80);
      n = n + 1;
      i = i + 2;
      pcVar6 = str + i;
      if (*pcVar6 == '\0') break;
      cVar1 = *pcVar6;
    }
  }
  return;
}

void SetString(float x, float y, char *fmt) {
	va_list ap;
	int i;
	int n;
	int flag;
	int len;
	char cw;
	char cwo[256];
	char str[256];
	char *buf;
	
  char cVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char cwo [256];
  char str [256];
  char *local_130;
  
  pcVar9 = str;
  str[0] = '\0';
  cVar3 = *fmt;
  cVar1 = *fmt;
  local_130 = pcVar9;
  do {
    if (cVar3 == '\0') {
      *pcVar9 = '\0';
      SetASCIIString(x,y,local_130);
      return;
    }
    if (cVar1 == '%') {
      uVar11 = 0xffffffffffffffff;
      lVar10 = (long)fmt[1];
      bVar2 = false;
      pcVar8 = fmt + 1;
      do {
        iVar5 = (int)uVar11;
        if (lVar10 == 100) {
          sprintf(cwo,&DAT_00356a90);
          sVar4 = strlen(cwo);
          iVar5 = iVar5 - (int)sVar4;
          if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
            do {
              *pcVar9 = '+';
              iVar7 = iVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (iVar7 < iVar5);
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
          }
          while( true ) {
            fmt = pcVar8 + 1;
            sVar4 = strlen(cwo);
            iVar5 = (int)uVar6;
            if (sVar4 <= uVar6) break;
            uVar6 = (ulong)(iVar5 + 1);
            *pcVar9 = cwo[iVar5];
            pcVar9 = pcVar9 + 1;
          }
          bVar2 = true;
        }
        else if (lVar10 < 0x65) {
          if (lVar10 == 0x25) {
            *pcVar9 = '%';
            fmt = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            bVar2 = true;
          }
          else {
            if (lVar10 != 99) goto LAB_00156014;
            sprintf(cwo,&DAT_00356aa8);
            sVar4 = strlen(cwo);
            iVar5 = iVar5 - (int)sVar4;
            if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
              do {
                *pcVar9 = '+';
                iVar7 = iVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar7 < iVar5);
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
            }
            while( true ) {
              fmt = pcVar8 + 1;
              sVar4 = strlen(cwo);
              iVar5 = (int)uVar6;
              if (sVar4 <= uVar6) break;
              uVar6 = (ulong)(iVar5 + 1);
              *pcVar9 = cwo[iVar5];
              pcVar9 = pcVar9 + 1;
            }
            bVar2 = true;
          }
        }
        else if (lVar10 == 0x73) {
          sprintf(cwo,&DAT_00356aa0);
          sVar4 = strlen(cwo);
          iVar5 = iVar5 - (int)sVar4;
          if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
            do {
              *pcVar9 = '+';
              iVar7 = iVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (iVar7 < iVar5);
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
          }
          while( true ) {
            fmt = pcVar8 + 1;
            sVar4 = strlen(cwo);
            iVar5 = (int)uVar6;
            if (sVar4 <= uVar6) break;
            uVar6 = (ulong)(iVar5 + 1);
            *pcVar9 = cwo[iVar5];
            pcVar9 = pcVar9 + 1;
          }
          bVar2 = true;
        }
        else {
LAB_00156014:
          uVar6 = (ulong)((int)lVar10 + -0x30);
          fmt = pcVar8 + 1;
          if ((uVar6 & 0xff) < 10) {
            cVar3 = *fmt;
            uVar11 = uVar6;
            while (lVar10 = (long)cVar3, (int)cVar3 - 0x30U < 10) {
              fmt = fmt + 1;
              uVar11 = (ulong)((int)uVar11 * 10 + (int)cVar3 + -0x30);
              cVar3 = *fmt;
            }
          }
        }
        pcVar8 = fmt;
      } while (!bVar2);
      cVar3 = *fmt;
    }
    else {
      *pcVar9 = cVar1;
      fmt = fmt + 1;
      pcVar9 = pcVar9 + 1;
      cVar3 = *fmt;
    }
    cVar1 = *fmt;
  } while( true );
}

void SetString2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, char *fmt) {
	va_list ap;
	int i;
	int n;
	int flag;
	int len;
	char cw;
	char cwo[256];
	char str[256];
	char *buf;
	
  char cVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char cwo [256];
  char str [256];
  
  str[0] = '\0';
  cVar3 = *fmt;
  cVar1 = *fmt;
  pcVar9 = str;
  do {
    if (cVar3 == '\0') {
      *pcVar9 = '\0';
      SetASCIIString2(pri,x,y,type,r,g,b,str);
      return;
    }
    if (cVar1 == '%') {
      uVar11 = 0xffffffffffffffff;
      lVar10 = (long)fmt[1];
      bVar2 = false;
      pcVar8 = fmt + 1;
      do {
        iVar5 = (int)uVar11;
        if (lVar10 == 100) {
          sprintf(cwo,&DAT_00356a90);
          sVar4 = strlen(cwo);
          iVar5 = iVar5 - (int)sVar4;
          if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
            do {
              *pcVar9 = ' ';
              iVar7 = iVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (iVar7 < iVar5);
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
          }
          while( true ) {
            fmt = pcVar8 + 1;
            sVar4 = strlen(cwo);
            iVar5 = (int)uVar6;
            if (sVar4 <= uVar6) break;
            uVar6 = (ulong)(iVar5 + 1);
            *pcVar9 = cwo[iVar5];
            pcVar9 = pcVar9 + 1;
          }
          bVar2 = true;
        }
        else if (lVar10 < 0x65) {
          if (lVar10 == 0x25) {
            *pcVar9 = '%';
            fmt = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            bVar2 = true;
          }
          else {
            if (lVar10 != 99) goto LAB_0015639c;
            sprintf(cwo,&DAT_00356aa8);
            sVar4 = strlen(cwo);
            iVar5 = iVar5 - (int)sVar4;
            if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
              do {
                *pcVar9 = ' ';
                iVar7 = iVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar7 < iVar5);
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
            }
            while( true ) {
              fmt = pcVar8 + 1;
              sVar4 = strlen(cwo);
              iVar5 = (int)uVar6;
              if (sVar4 <= uVar6) break;
              uVar6 = (ulong)(iVar5 + 1);
              *pcVar9 = cwo[iVar5];
              pcVar9 = pcVar9 + 1;
            }
            bVar2 = true;
          }
        }
        else if (lVar10 == 0x73) {
          sprintf(cwo,&DAT_00356aa0);
          sVar4 = strlen(cwo);
          iVar5 = iVar5 - (int)sVar4;
          if (((long)sVar4 < (long)uVar11) && (iVar7 = 0, 0 < iVar5)) {
            do {
              *pcVar9 = ' ';
              iVar7 = iVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (iVar7 < iVar5);
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
          }
          while( true ) {
            fmt = pcVar8 + 1;
            sVar4 = strlen(cwo);
            iVar5 = (int)uVar6;
            if (sVar4 <= uVar6) break;
            uVar6 = (ulong)(iVar5 + 1);
            *pcVar9 = cwo[iVar5];
            pcVar9 = pcVar9 + 1;
          }
          bVar2 = true;
        }
        else {
LAB_0015639c:
          uVar6 = (ulong)((int)lVar10 + -0x30);
          fmt = pcVar8 + 1;
          if ((uVar6 & 0xff) < 10) {
            cVar3 = *fmt;
            uVar11 = uVar6;
            while (lVar10 = (long)cVar3, (int)cVar3 - 0x30U < 10) {
              fmt = fmt + 1;
              uVar11 = (ulong)((int)uVar11 * 10 + (int)cVar3 + -0x30);
              cVar3 = *fmt;
            }
          }
        }
        pcVar8 = fmt;
      } while (!bVar2);
      cVar3 = *fmt;
    }
    else {
      *pcVar9 = cVar1;
      fmt = fmt + 1;
      pcVar9 = pcVar9 + 1;
      cVar3 = *fmt;
    }
    cVar1 = *fmt;
  } while( true );
}

static void SetFontPacketHeader(int n, int type, u_char alp) {
	sceGsTex0 Load;
	sceGsTex0 Change;
	int psm;
	
  int iVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  ulong uVar4;
  ulong in_t1;
  ulong in_t3;
  uint uVar5;
  
  pQVar2 = mpbuf;
  iVar1 = nmdpkt;
  uVar4 = *(ulong *)(&fntdat + type * 0x20);
  uVar5 = (uint)(uVar4 >> 0x14) & 0x3f;
  if (uVar5 == 0x14) {
    in_t1 = uVar4 & 0xfffffffc0fffff | 0x2000000001300000;
    in_t3 = uVar4 & 0xffffffffffffff;
  }
  pQVar3 = mpbuf + nmdpkt;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = n * 5 + 0x7000000a;
  pQVar2[nmdpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar2[nmdpkt + 1].ul64[1] = 0xe;
  pQVar2[nmdpkt + 2].ul64[1] = 0x3f;
  pQVar2[nmdpkt + 2].ul64[0] = 0;
  if (uVar5 == 0x14) {
    pQVar2[nmdpkt + 3].ul64[0] = in_t1;
    pQVar2[nmdpkt + 3].ul64[1] = 6;
    pQVar2[nmdpkt + 4].ul64[1] = 6;
    pQVar2[nmdpkt + 4].ul64[0] = in_t3;
  }
  else {
    pQVar2[nmdpkt + 3].ul64[0] = *(ulong *)(&fntdat + type * 0x20);
    pQVar2[nmdpkt + 3].ul64[1] = 6;
    pQVar2[nmdpkt + 4].ul64[1] = 0x7f;
    pQVar2[nmdpkt + 4].ul64[0] = 0;
  }
  pQVar2 = mpbuf;
  nmdpkt = nmdpkt + 5;
  pQVar3 = mpbuf + nmdpkt;
  pQVar3->ul64[1] = 0x14;
  pQVar3->ul64[0] = 0x120;
  pQVar2[iVar1 + 6].ul64[0] = ((long)(char)alp & 0xffU) << 0x20 | 0x44;
  pQVar2[iVar1 + 6].ul64[1] = 0x42;
  pQVar2[iVar1 + 7].ul64[0] = 0;
  pQVar2[iVar1 + 7].ul64[1] = 8;
  pQVar2[iVar1 + 8].ul64[1] = 0x47;
  pQVar2[iVar1 + 8].ul64[0] = 0x5000d;
  pQVar2[iVar1 + 9].ul64[1] = 0x4e;
  pQVar2[iVar1 + 9].ul64[0] = 0x100008c;
  pQVar2[iVar1 + 10].ul64[0] = (long)n | 0x50ab400000008000;
  pQVar2[iVar1 + 10].ul64[1] = 0x43431;
  nmdpkt = iVar1 + 0xb;
  return;
}

static void SetFont(int pri, int type, int no, int x, int y, u_char r, u_char g, u_char b, int a) {
	u_char a;
	unsigned int tw1;
	unsigned int th1;
	unsigned int tw2;
	unsigned int th2;
	int px2;
	int py2;
	int Font_W;
	int Font_H;
	int Num_W;
	int div;
	int off_w;
	int off_ht;
	int off_hd;
	int dx;
	int dy;
	int dw;
	int dh;
	int z;
	
  bool bVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  int iVar5;
  Q_WORDDATA *pQVar6;
  Q_WORDDATA *pQVar7;
  Q_WORDDATA *pQVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  pQVar7 = mpbuf;
  bVar1 = (type & 1U) == 0;
  if (bVar1) {
    iVar11 = 0x18;
    uVar10 = 0x18;
    iVar5 = 0x15;
    iVar12 = 0;
    iVar15 = 0;
  }
  else {
    iVar11 = 0xc;
    uVar10 = 0xe;
    iVar5 = 0x2a;
    iVar12 = 8;
    iVar15 = -1;
  }
  uVar13 = 1;
  if (g_bInterlace != '\0') {
    uVar13 = 2;
  }
  if (pri < 1) {
    uVar14 = 0xfffefff;
  }
  else {
    uVar14 = 0xfffffff - pri;
  }
  if (uVar13 == 0) {
    trap(7);
  }
  uVar9 = (x + 0x6c0) * 0x10;
  pQVar3 = mpbuf + nmdpkt;
  pQVar3->ui32[3] = a & 0xff;
  pQVar3->ui32[0] = (int)(char)r & 0xff;
  pQVar3->ui32[1] = (int)(char)g & 0xff;
  pQVar3->ui32[2] = (int)(char)b & 0xff;
  pQVar3 = pQVar7 + nmdpkt + 1;
  pQVar8 = pQVar7 + nmdpkt + 2;
  pQVar6 = pQVar7 + nmdpkt + 3;
  pQVar7 = pQVar7 + nmdpkt + 4;
  iVar2 = (no / iVar5) * uVar10;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[1] = (iVar2 + (uint)!bVar1) * 0x10;
  iVar5 = (no % iVar5) * iVar11;
  uVar4 = ((y / (int)uVar13 + 0x800) - 0x1c0 / (uVar13 << 1)) * 0x10;
  pQVar3->ui32[0] = (iVar5 + iVar12) * 0x10;
  pQVar8->ui32[0] = uVar9;
  pQVar8->ui32[1] = uVar4;
  pQVar8->ui32[3] = 0;
  pQVar8->ui32[2] = uVar14;
  pQVar6->ui32[0] = (iVar5 + iVar11 + iVar12) * 0x10;
  pQVar6->ui32[1] = (iVar2 + uVar10 + iVar15) * 0x10;
  pQVar6->ui32[3] = 0;
  pQVar6->ui32[2] = 0;
  pQVar7->ui32[0] = uVar9 + iVar11 * 0x10;
  pQVar7->ui32[1] = uVar4 + (uVar10 / uVar13 + 1) * 0x10;
  pQVar7->ui32[2] = uVar14;
  pQVar7->ui32[3] = 0;
  nmdpkt = nmdpkt + 5;
  return;
}

static void FontInit() {
  msdat.pri = 0;
  msdat.sta = 0x40;
  msdat.flg = 1;
  msdat.mes_is_end = 2;
  msdat.b = 0xff;
  msdat.selnum = 0;
  msdat.pass = 0;
  msdat.bx = 0;
  msdat.by = 0;
  msdat.disptype = 0;
  msdat.stp = (uchar *)0x0;
  msdat.retst = 0;
  msdat.csr = 0;
  msdat.decide = 0;
  msdat.cnt = 0;
  msdat.r = 0xff;
  msdat.g = 0xff;
  msdat.alp = '\0';
  msdat.fntmcnt = 0;
  msdat.fntwait = 0;
  msdat.fntcnt = 0;
  return;
}

static void SetFontTex(int flg, int bank) {
	static int obank = -1;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  int iVar3;
  ulong uVar4;
  
  pQVar1 = mpbuf;
  if ((flg == 0) || ((undefined *)bank != obank_181)) {
    uVar4 = *(ulong *)(&fntdat + bank * 0x20);
    pQVar2 = mpbuf + nmdpkt;
    obank_181 = (undefined *)bank;
    pQVar2->ul64[0] = 0x1000000000008003;
    pQVar2->ul64[1] = 0xe;
    pQVar1[nmdpkt + 1].ul64[1] = 0x3f;
    pQVar1[nmdpkt + 1].ul64[0] = 0;
    if (((uint)(uVar4 >> 0x14) & 0x3f) == 0x14) {
      pQVar1[nmdpkt + 2].ul64[0] = uVar4 & 0xfffffffc0fffff | 0x2000000001300000;
      pQVar1[nmdpkt + 2].ul64[1] = 6;
      pQVar1[nmdpkt + 3].ul64[1] = 6;
      pQVar1[nmdpkt + 3].ul64[0] = uVar4 & 0xffffffffffffff;
      nmdpkt = nmdpkt + 4;
      return;
    }
    iVar3 = nmdpkt + 3;
    pQVar1[nmdpkt + 2].ul64[1] = 6;
    pQVar1[nmdpkt + 2].ul64[0] = uVar4;
    pQVar1[iVar3].ul64[1] = 0x7f;
    nmdpkt = nmdpkt + 4;
    pQVar1[iVar3].ul64[0] = 0;
  }
  return;
}

static void SetFontEnv() {
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  
  pQVar1 = mpbuf;
  pQVar2 = mpbuf + nmdpkt;
  pQVar2->ul64[1] = 0xe;
  pQVar2->ul64[0] = 0x1000000000008005;
  pQVar1[nmdpkt + 1].ul64[0] = 0x161;
  pQVar1[nmdpkt + 1].ul64[1] = 0x14;
  pQVar1[nmdpkt + 2].ul64[0] = 0x8000000044;
  pQVar1[nmdpkt + 2].ul64[1] = 0x42;
  pQVar1[nmdpkt + 3].ul64[0] = 0;
  pQVar1[nmdpkt + 3].ul64[1] = 8;
  pQVar1[nmdpkt + 4].ul64[1] = 0x47;
  pQVar1[nmdpkt + 4].ul64[0] = 0x5000d;
  pQVar1[nmdpkt + 5].ul64[0] = 0x100008c;
  pQVar1[nmdpkt + 5].ul64[1] = 0x4e;
  nmdpkt = nmdpkt + 6;
  return;
}

static void SetFontPat(int pri, int fn, int x, int y, int fw, u_char r, u_char g, u_char b, int a) {
	int px2;
	int py2;
	u_int tw1;
	u_int th1;
	u_int tw2;
	u_int th2;
	u_int Font_W;
	u_int Num_W;
	int div;
	int dx;
	int dy;
	int dw;
	int dh;
	u_int z;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Q_WORDDATA *pQVar6;
  uint uVar7;
  Q_WORDDATA *pQVar8;
  
  pQVar6 = mpbuf;
  uVar7 = 1;
  if (g_bInterlace != '\0') {
    uVar7 = 2;
  }
  if (uVar7 == 0) {
    trap(7);
  }
  iVar4 = (x + 0x6c0) * 0x10;
  pQVar1 = mpbuf + nmdpkt;
  pQVar1->ul64[1] = 0x43431;
  pQVar2 = pQVar6 + nmdpkt + 1;
  pQVar1->ul64[0] = 0x50ab400000008001;
  pQVar2->ui32[3] = a & 0xff;
  pQVar2->ui32[0] = (int)(char)r & 0xff;
  pQVar2->ui32[1] = (int)(char)g & 0xff;
  pQVar8 = pQVar6 + nmdpkt + 2;
  pQVar2->ui32[2] = (int)(char)b & 0xff;
  pQVar8->ui32[3] = 0;
  pQVar8->ui32[2] = 0;
  pQVar2 = pQVar6 + nmdpkt + 3;
  pQVar1 = pQVar6 + nmdpkt + 4;
  pQVar6 = pQVar6 + nmdpkt + 5;
  iVar5 = ((y + -0xe0) / (int)uVar7 + 0x800) * 0x10;
  iVar3 = (fn / 0x15) * 0x180;
  pQVar8->ui32[1] = iVar3 + 8;
  pQVar8->ui32[0] = (fn % 0x15) * 0x180 + 8;
  pQVar2->ui32[0] = iVar4 + 8;
  pQVar2->ui32[1] = iVar5 + 8;
  pQVar2->ui32[3] = 0;
  pQVar2->ui32[2] = 0xfffffffU - pri;
  pQVar1->ui32[0] = ((fn % 0x15) * 0x18 + fw) * 0x10 - 8;
  pQVar1->ui32[1] = iVar3 + 0x178;
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[2] = 0;
  pQVar6->ui32[0] = (iVar4 + fw * 0x10) - 8;
  pQVar6->ui32[2] = 0xfffffffU - pri;
  pQVar6->ui32[3] = 0;
  pQVar6->ui32[1] = (iVar5 + (0x18 / uVar7) * 0x10) - 8;
  nmdpkt = nmdpkt + 6;
  return;
}

static void SetUnderLine(int sw, int pri, int x, int y, int fw, u_char r, u_char g, u_char b, int a) {
	int px2;
	int py2;
	int div;
	int dx;
	int dw;
	int dh;
	u_int z;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  uint uVar5;
  
  pQVar2 = mpbuf;
  if (sw != 0) {
    uVar4 = 1;
    if (g_bInterlace != '\0') {
      uVar4 = 2;
    }
    if (uVar4 == 0) {
      trap(7);
    }
    pQVar1 = mpbuf + nmdpkt;
    pQVar1->ul64[1] = 0x441;
    pQVar3 = pQVar2 + nmdpkt + 1;
    pQVar1->ul64[0] = 0x3020c00000008001;
    pQVar3->ui32[3] = a & 0xff;
    pQVar3->ui32[0] = (int)(char)r & 0xff;
    pQVar1 = pQVar2 + nmdpkt + 2;
    pQVar3->ui32[1] = (int)(char)g & 0xff;
    pQVar3->ui32[2] = (int)(char)b & 0xff;
    uVar5 = (x + 0x6c0) * 0x10;
    pQVar1->ui32[0] = uVar5;
    pQVar1->ui32[3] = 0;
    pQVar1->ui32[2] = 0xfffffffU - pri;
    pQVar2 = pQVar2 + nmdpkt + 3;
    nmdpkt = nmdpkt + 4;
    uVar4 = (0x18 / uVar4 + (y + -0xe0) / (int)uVar4 + 0x800) * 0x10 - 8;
    pQVar1->ui32[1] = uVar4;
    pQVar2->ui32[0] = uVar5 + fw * 0x10;
    pQVar2->ui32[1] = uVar4;
    pQVar2->ui32[2] = 0xfffffffU - pri;
    pQVar2->ui32[3] = 0;
  }
  return;
}

static void PacketEnd() {
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  
  pQVar2 = mpbuf;
  pQVar1 = mpbuf + nmdpkt;
  pQVar1->ui32[0] = 0;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  pQVar1->ui32[3] = 0;
  pQVar1->ui32[0] = 0x70000002;
  pQVar1 = pQVar2 + nmdpkt + 1;
  pQVar1->ul64[0] = 0x1000000000008001;
  pQVar1->ul64[1] = 0xe;
  pQVar2 = pQVar2 + nmdpkt + 2;
  pQVar2->ul64[1] = 0x7f;
  pQVar2->ul64[0] = 0;
  nmdpkt = nmdpkt + 3;
  return;
}

void CopyStrDToStr(DISP_STR *s, STR_DAT *d) {
  uchar *puVar1;
  int iVar2;
  
  puVar1 = (uchar *)d->str;
  s->pos_x = d->pos_x;
  s->str = puVar1;
  s->pos_y = d->pos_y;
  s->type = d->type;
  s->r = d->r;
  s->g = d->g;
  s->b = d->b;
  s->alpha = d->alpha;
  iVar2 = d->pri;
  s->st = 0;
  s->pri = iVar2;
  s->x_wide = 0;
  s->y_wide = 0;
  s->brnch_num = 0;
  s->csr = 0;
  return;
}

int SetMessageV2_2(DISP_STR *s) {
	u_char *c;
	u_char *cp;
	int i;
	int n;
	int m;
	int loop;
	int sflg;
	int npri;
	int nx;
	int ny;
	int nxw;
	int nyw;
	int px[32];
	int py[32];
	int pw[32];
	int selnum;
	u_char nr;
	u_char ng;
	u_char nb;
	u_char na;
	u_char nfn;
	u_char nfw;
	char cwo[256];
	int line;
	int column;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  Q_WORDDATA *pQVar9;
  uchar *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int px [32];
  int py [32];
  int pw [32];
  char cwo [256];
  SQAR_DAT sq;
  DISP_SQAR dq;
  int m;
  int loop;
  int sflg;
  int npri;
  int nxw;
  int nyw;
  int selnum;
  uchar nr;
  uchar ng;
  uchar nb;
  uchar na;
  
  iVar19 = nmdpri;
  _na = (uint)*(byte *)&s->alpha;
  npri = s->pri;
  nxw = s->x_wide;
  nyw = s->y_wide;
  _nr = (uint)*(byte *)&s->r;
  _ng = (uint)*(byte *)&s->g;
  _nb = (uint)*(byte *)&s->b;
  uVar18 = s->pos_x;
  iVar8 = s->pos_y;
  selnum = 0;
  loop = 1;
  draw_mpri[nmdpri][0] = npri;
  sflg = 0;
  draw_mpri[iVar19][1] = nmdpkt;
  pbVar16 = s->str;
  nmdpkt = nmdpkt + 1;
  SetFontTex(0,1);
  SetFontEnv();
  if ((mesv22.pass_flg == '\0') || (mesv22.old_adr != pbVar16)) {
    mesv22.cnt = 0;
    memset(mesv22.mes_alps,0,0x300);
  }
  iVar20 = 0;
  iVar19 = 0;
  bVar3 = *pbVar16;
  mesv22.old_adr = pbVar16;
  do {
    iVar6 = selnum;
    uVar14 = (uint)bVar3;
    switch(bVar3) {
    case 0xf0:
      uVar14 = (uint)pbVar16[1];
      uVar17 = (uint)(byte)(&font_w_b1)[(uint)pbVar16[1] * 4];
      SetFontTex(1,2);
      goto LAB_001570cc;
    case 0xf1:
      uVar14 = (uint)pbVar16[1];
      uVar17 = (uint)(byte)(&font_w_b2)[(uint)pbVar16[1] * 4];
      SetFontTex(1,3);
      goto LAB_001570cc;
    case 0xf2:
      uVar14 = (uint)pbVar16[1];
      uVar17 = (uint)(byte)(&font_w_b3)[(uint)pbVar16[1] * 4];
      SetFontTex(1,4);
      goto LAB_001570cc;
    case 0xf3:
      uVar14 = (uint)pbVar16[1];
      uVar17 = (uint)(byte)(&font_w_b4)[(uint)pbVar16[1] * 4];
      SetFontTex(1,5);
LAB_001570cc:
      pbVar16 = pbVar16 + 2;
      iVar6 = mesv22.cnt - iVar20;
joined_r0x001574ac:
      if (iVar19 <= iVar6) {
        puVar10 = mesv22.mes_alps[iVar20] + iVar19;
        uVar7 = *puVar10 + 4;
        if (0x80 < uVar7) {
          uVar7 = 0x80;
        }
        *puVar10 = (byte)uVar7;
      }
      SetFontPat(npri,uVar14,uVar18,iVar8,uVar17,(uchar)_nr,(uchar)_ng,(uchar)_nb,
                 (int)(mesv22.mes_alps[iVar20][iVar19] * _na) >> 7 & 0xff);
      uVar18 = uVar18 + uVar17 + nxw;
      if (sflg != 0) {
        pw[selnum + -1] = pw[selnum + -1] + uVar17 + nxw;
      }
      iVar19 = iVar19 + 1;
      break;
    default:
      uVar17 = (uint)(byte)(&font_w_b0)[(uint)bVar3 * 4];
      pbVar16 = pbVar16 + 1;
      SetFontTex(1,1);
      iVar6 = mesv22.cnt - iVar20;
      goto joined_r0x001574ac;
    case 0xf7:
      pbVar15 = pbVar16 + 1;
      pbVar16 = pbVar16 + 2;
      nxw = (int)*pbVar15;
      break;
    case 0xf8:
      pbVar15 = pbVar16 + 1;
      pbVar16 = pbVar16 + 2;
      nyw = (int)*pbVar15;
      break;
    case 0xf9:
      s->st = s->st | 0x20;
      uVar18 = (uint)*(ushort *)(pbVar16 + 2);
      if (s->type == 0) {
        if ((s->str != pbVar16) && (sflg == 0)) goto LAB_00157218;
      }
      else if (s->str != pbVar16) {
LAB_00157218:
        iVar8 = iVar8 + nyw + 0x18;
      }
      sflg = 1;
      px[selnum] = uVar18;
      py[iVar6] = iVar8;
      selnum = selnum + 1;
      pw[iVar6] = 0;
      pbVar16 = pbVar16 + 4;
      break;
    case 0xfa:
      uVar18 = s->pos_x;
      goto LAB_00157448;
    case 0xfb:
      m = (int)pbVar16[1];
      pbVar16 = pbVar16 + 3;
      sprintf(cwo,&DAT_00356a90);
      iVar6 = 0;
      cVar2 = cwo[0];
      while ((cVar2 != '\0' && (loop != 2))) {
        if (m == 0) {
          uVar14 = (byte)cwo[iVar6] + 0xf;
        }
        else {
          uVar14 = (byte)cwo[iVar6] + 5;
        }
        bVar3 = (&font_w_b0)[(uVar14 & 0xff) * 4];
        SetFontTex(1,1);
        if (iVar19 <= mesv22.cnt - iVar20) {
          puVar10 = mesv22.mes_alps[iVar20] + iVar19;
          uVar17 = *puVar10 + 4;
          if (0x80 < uVar17) {
            uVar17 = 0x80;
          }
          *puVar10 = (byte)uVar17;
        }
        SetFontPat(npri,uVar14 & 0xff,uVar18,iVar8,(uint)bVar3,(uchar)_nr,(uchar)_ng,(uchar)_nb,
                   (int)(mesv22.mes_alps[iVar20][iVar19] * _na) >> 7 & 0xff);
        iVar13 = (uint)bVar3 + nxw;
        uVar18 = uVar18 + iVar13;
        if (sflg != 0) {
          pw[selnum + -1] = pw[selnum + -1] + iVar13;
        }
        cVar2 = cwo[iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      break;
    case 0xfc:
      break;
    case 0xfd:
      _nr = (uint)pbVar16[1];
      _ng = (uint)pbVar16[2];
      _nb = (uint)pbVar16[3];
      pbVar16 = pbVar16 + 4;
      break;
    case 0xfe:
      uVar18 = s->pos_x;
LAB_00157448:
      iVar19 = 0;
      iVar20 = iVar20 + 1;
      iVar8 = iVar8 + nyw + 0x18;
      pbVar16 = pbVar16 + 1;
      break;
    case 0xff:
      loop = 0;
      iVar19 = 0;
      iVar20 = 0;
      s->st = s->st | 0x40;
      pbVar16 = pbVar16 + 1;
    }
    if (loop == 0) {
      uVar18 = s->st;
      if ((uVar18 & 0x20) != 0) {
        puVar1 = (undefined *)((int)&sq.h + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | DAT_0034cb18 >> (7 - uVar14) * 8;
        sq._0_8_ = DAT_0034cb18;
        puVar1 = (undefined *)((int)&sq.y + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar14);
        *puVar5 = *puVar5 & -1L << (uVar14 + 1) * 8 | DAT_0034cb20 >> (7 - uVar14) * 8;
        sq._8_8_ = DAT_0034cb20;
        uVar14 = (uint)&sq.alpha & 7;
        puVar10 = &sq.alpha + -uVar14;
        *(ulong *)puVar10 =
             *(ulong *)puVar10 & -1L << (uVar14 + 1) * 8 | DAT_0034cb28 >> (7 - uVar14) * 8;
        sq._16_8_ = DAT_0034cb28;
        if ((uVar18 & 0x80) == 0) {
          if (s->type == 0) {
            if (*key_now[2] == 1) {
              iVar8 = selnum;
              if (0 < s->csr) {
                iVar8 = s->csr;
              }
              s->csr = iVar8 + -1;
            }
            sVar4 = *key_now[3];
          }
          else {
            if (*key_now[0] == 1) {
              iVar8 = selnum;
              if (0 < s->csr) {
                iVar8 = s->csr;
              }
              s->csr = iVar8 + -1;
            }
            sVar4 = *key_now[1];
          }
          if (sVar4 == 1) {
            iVar8 = s->csr + 1;
            if (selnum + -1 <= s->csr) {
              iVar8 = 0;
            }
            s->csr = iVar8;
          }
          if (*key_now[5] == 1) {
            s->st = uVar18 ^ 0x20 | 0x80;
          }
        }
        CopySqrDToSqr(&dq,&sq);
        iVar8 = s->csr;
        piVar11 = px + iVar8;
        dq.x[1] = (*piVar11 + dq.x[1]) - dq.x[0];
        dq.pri = npri - 0x10;
        piVar12 = py + iVar8;
        dq.x[0] = *piVar11;
        iVar19 = 0;
        dq.x[3] = (*piVar11 + dq.x[3]) - dq.x[2];
        dq.x[2] = *piVar11;
        dq.y[2] = (*piVar12 + dq.y[2]) - dq.y[0];
        dq.y[3] = (*piVar12 + dq.y[3]) - dq.y[1];
        dq.y[0] = *piVar12;
        dq.y[2] = *piVar12 + 0x18;
        dq.y[1] = *piVar12;
        dq.y[3] = *piVar12 + 0x18;
        dq.x[1] = *piVar11 + pw[iVar8];
        dq.x[3] = *piVar11 + pw[iVar8];
        dq.alpha = '@';
        do {
          dq.r[iVar19] = ' ';
          puVar10 = dq.b + iVar19;
          dq.g[iVar19] = '@';
          iVar19 = iVar19 + 1;
          *puVar10 = 0x80;
        } while (iVar19 < 4);
        dq.z = (int)&UNK_1000000f - npri;
        DispSqrD(&dq);
      }
      s->brnch_num = selnum;
      iVar8 = nmdpkt - (draw_mpri[nmdpri][1] + -0x70000000);
      pQVar9 = mpbuf + draw_mpri[nmdpri][1];
      pQVar9->ui32[0] = 0;
      pQVar9->ui32[1] = 0;
      pQVar9->ui32[2] = 0;
      pQVar9->ui32[3] = 0;
      pQVar9->ui32[0] = iVar8 - 1;
      mesv22.pass = '\x01';
      nmdpri = nmdpri + 1;
      mesv22.cnt = mesv22.cnt + 1;
      return s->csr + 1;
    }
    bVar3 = *pbVar16;
  } while( true );
}

int SetMessageV2(DISP_STR *s) {
	u_char *c;
	u_char *cp;
	int i;
	int n;
	int m;
	int loop;
	int sflg;
	int npri;
	int nx;
	int ny;
	int nxw;
	int nyw;
	int px[32];
	int py[32];
	int pw[32];
	int selnum;
	u_char nr;
	u_char ng;
	u_char nb;
	u_char na;
	u_char nfn;
	u_char nfw;
	char cwo[256];
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  Q_WORDDATA *pQVar8;
  int iVar9;
  int *piVar10;
  uchar *puVar11;
  int *piVar12;
  int iVar13;
  uchar r;
  uchar g;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte b;
  int px [32];
  int py [32];
  int pw [32];
  char cwo [256];
  SQAR_DAT sq;
  DISP_SQAR dq;
  int m;
  int loop;
  int sflg;
  int npri;
  int nxw;
  int nyw;
  int selnum;
  uchar nr;
  uchar ng;
  uchar na;
  
  iVar7 = nmdpri;
  _na = (uint)*(byte *)&s->alpha;
  npri = s->pri;
  nxw = s->x_wide;
  nyw = s->y_wide;
  _nr = (uint)*(byte *)&s->r;
  _ng = (uint)*(byte *)&s->g;
  b = *(byte *)&s->b;
  uVar16 = s->pos_x;
  selnum = 0;
  iVar9 = s->pos_y;
  loop = 1;
  sflg = 0;
  draw_mpri[nmdpri][0] = npri;
  draw_mpri[iVar7][1] = nmdpkt;
  pbVar15 = s->str;
  nmdpkt = nmdpkt + 1;
  SetFontTex(0,1);
  SetFontEnv();
  bVar3 = *pbVar15;
  do {
    iVar7 = selnum;
    r = (uchar)_nr;
    g = (uchar)_ng;
    switch(bVar3) {
    case 0xf0:
      bVar3 = pbVar15[1];
      pbVar15 = pbVar15 + 2;
      bVar4 = (&font_w_b1)[(uint)bVar3 * 4];
      SetFontTex(1,2);
      SetFontPat(npri,(uint)bVar3,uVar16,iVar9,(uint)bVar4,r,g,b,_na);
      goto joined_r0x00157e44;
    case 0xf1:
      bVar3 = pbVar15[1];
      bVar4 = (&font_w_b2)[(uint)bVar3 * 4];
      SetFontTex(1,3);
      SetFontPat(npri,(uint)bVar3,uVar16,iVar9,(uint)bVar4,r,g,b,_na);
      goto joined_r0x00157adc;
    case 0xf2:
      bVar3 = pbVar15[1];
      bVar4 = (&font_w_b3)[(uint)bVar3 * 4];
      SetFontTex(1,4);
      SetFontPat(npri,(uint)bVar3,uVar16,iVar9,(uint)bVar4,r,g,b,_na);
joined_r0x00157adc:
      iVar7 = (uint)bVar4 + nxw;
      uVar16 = uVar16 + iVar7;
      pbVar15 = pbVar15 + 2;
      if (sflg == 0) break;
      goto LAB_00157e58;
    case 0xf3:
      bVar3 = pbVar15[1];
      pbVar15 = pbVar15 + 2;
      bVar4 = (&font_w_b4)[(uint)bVar3 * 4];
      SetFontTex(1,5);
      SetFontPat(npri,(uint)bVar3,uVar16,iVar9,(uint)bVar4,r,g,b,_na);
      goto joined_r0x00157e44;
    default:
      bVar4 = (&font_w_b0)[(uint)bVar3 * 4];
      SetFontTex(1,1);
      pbVar15 = pbVar15 + 1;
      SetFontPat(npri,(uint)bVar3,uVar16,iVar9,(uint)bVar4,r,g,b,_na);
joined_r0x00157e44:
      iVar7 = (uint)bVar4 + nxw;
      uVar16 = uVar16 + iVar7;
      if (sflg != 0) {
LAB_00157e58:
        pw[selnum + -1] = pw[selnum + -1] + iVar7;
      }
      break;
    case 0xf7:
      pbVar14 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      nxw = (int)*pbVar14;
      break;
    case 0xf8:
      pbVar14 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      nyw = (int)*pbVar14;
      break;
    case 0xf9:
      s->st = s->st | 0x20;
      uVar16 = (uint)*(ushort *)(pbVar15 + 2);
      if (s->type == 0) {
        if ((s->str != pbVar15) && (sflg == 0)) goto LAB_00157bfc;
      }
      else if (s->str != pbVar15) {
LAB_00157bfc:
        iVar9 = iVar9 + nyw + 0x18;
      }
      sflg = 1;
      px[selnum] = uVar16;
      py[iVar7] = iVar9;
      selnum = selnum + 1;
      pw[iVar7] = 0;
      pbVar15 = pbVar15 + 4;
      break;
    case 0xfa:
      uVar16 = s->pos_x;
      iVar9 = iVar9 + nyw + 0x18;
      pbVar15 = pbVar15 + 1;
      break;
    case 0xfb:
      m = (int)pbVar15[1];
      pbVar15 = pbVar15 + 3;
      iVar7 = 0;
      sprintf(cwo,&DAT_00356a90);
      cVar2 = cwo[0];
      while ((cVar2 != '\0' && (loop != 2))) {
        if (m == 0) {
          uVar6 = (byte)cwo[iVar7] + 0xf;
        }
        else {
          uVar6 = (byte)cwo[iVar7] + 5;
        }
        bVar3 = (&font_w_b0)[(uVar6 & 0xff) * 4];
        SetFontTex(1,1);
        SetFontPat(npri,uVar6 & 0xff,uVar16,iVar9,(uint)bVar3,(uchar)_nr,(uchar)_ng,b,_na);
        iVar13 = (uint)bVar3 + nxw;
        uVar16 = uVar16 + iVar13;
        if (sflg != 0) {
          pw[selnum + -1] = pw[selnum + -1] + iVar13;
        }
        iVar7 = iVar7 + 1;
        cVar2 = cwo[iVar7];
      }
      break;
    case 0xfc:
      break;
    case 0xfd:
      _nr = (uint)pbVar15[1];
      _ng = (uint)pbVar15[2];
      b = pbVar15[3];
      pbVar15 = pbVar15 + 4;
      break;
    case 0xfe:
      uVar16 = s->pos_x;
      iVar9 = iVar9 + nyw + 0x18;
      pbVar15 = pbVar15 + 1;
      break;
    case 0xff:
      loop = 0;
      s->st = s->st | 0x40;
      pbVar15 = pbVar15 + 1;
    }
    if (loop == 0) break;
    bVar3 = *pbVar15;
  } while( true );
  uVar16 = s->st;
  if ((uVar16 & 0x20) == 0) goto LAB_001580f4;
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar6);
  *puVar5 = *puVar5 & -1L << (uVar6 + 1) * 8 | DAT_0034cb18 >> (7 - uVar6) * 8;
  sq._0_8_ = DAT_0034cb18;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar6);
  *puVar5 = *puVar5 & -1L << (uVar6 + 1) * 8 | DAT_0034cb20 >> (7 - uVar6) * 8;
  sq._8_8_ = DAT_0034cb20;
  uVar6 = (uint)&sq.alpha & 7;
  puVar11 = &sq.alpha + -uVar6;
  *(ulong *)puVar11 = *(ulong *)puVar11 & -1L << (uVar6 + 1) * 8 | DAT_0034cb28 >> (7 - uVar6) * 8;
  sq._16_8_ = DAT_0034cb28;
  if ((uVar16 & 0x80) == 0) {
    if (s->type == 0) {
      if (*key_now[2] == 1) {
        iVar9 = selnum;
        if (0 < s->csr) {
          iVar9 = s->csr;
        }
        s->csr = iVar9 + -1;
      }
      if (*key_now[3] == 1) {
        iVar9 = s->csr;
        goto LAB_00157f78;
      }
    }
    else {
      if (*key_now[0] == 1) {
        iVar9 = selnum;
        if (0 < s->csr) {
          iVar9 = s->csr;
        }
        s->csr = iVar9 + -1;
      }
      if (*key_now[1] == 1) {
        iVar9 = s->csr;
LAB_00157f78:
        iVar7 = iVar9 + 1;
        if (selnum + -1 <= iVar9) {
          iVar7 = 0;
        }
        s->csr = iVar7;
      }
    }
    if (*key_now[5] == 1) {
      s->st = uVar16 ^ 0x20 | 0x80;
    }
  }
  CopySqrDToSqr(&dq,&sq);
  iVar9 = s->csr;
  piVar10 = px + iVar9;
  dq.pri = npri - 0x10;
  piVar12 = py + iVar9;
  dq.x[1] = (*piVar10 + dq.x[1]) - dq.x[0];
  dq.x[0] = *piVar10;
  iVar7 = 0;
  dq.x[3] = (*piVar10 + dq.x[3]) - dq.x[2];
  dq.x[2] = *piVar10;
  dq.y[2] = (*piVar12 + dq.y[2]) - dq.y[0];
  dq.y[3] = (*piVar12 + dq.y[3]) - dq.y[1];
  dq.y[0] = *piVar12;
  dq.y[2] = *piVar12 + 0x18;
  dq.y[1] = *piVar12;
  dq.y[3] = *piVar12 + 0x18;
  dq.x[1] = *piVar10 + pw[iVar9];
  dq.x[3] = *piVar10 + pw[iVar9];
  dq.alpha = '@';
  do {
    dq.r[iVar7] = ' ';
    puVar11 = dq.b + iVar7;
    dq.g[iVar7] = '@';
    iVar7 = iVar7 + 1;
    *puVar11 = 0x80;
  } while (iVar7 < 4);
  dq.z = (int)&UNK_1000000f - npri;
  DispSqrD(&dq);
LAB_001580f4:
  s->brnch_num = selnum;
  pQVar8 = mpbuf + draw_mpri[nmdpri][1];
  iVar9 = nmdpkt - (draw_mpri[nmdpri][1] + -0x70000000);
  pQVar8->ui32[0] = 0;
  pQVar8->ui32[1] = 0;
  pQVar8->ui32[2] = 0;
  pQVar8->ui32[3] = 0;
  pQVar8->ui32[0] = iVar9 - 1;
  nmdpri = nmdpri + 1;
  return s->csr + 1;
}

int SubMessageV3(u_char *s, int pri, int delflg) {
	u_char *c;
	u_char *cp;
	int i;
	int j;
	int k;
	int n;
	int m;
	int loop;
	int sflg;
	int npri;
	int nx;
	int ny;
	int nxw;
	int nyw;
	int px[32];
	int py[32];
	int pw[32];
	u_char nr;
	u_char ng;
	u_char nb;
	u_char na;
	u_char nfn;
	u_char nfw;
	u_char nul;
	char cwo[256];
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  ulong *puVar7;
  int (*paiVar8) [2];
  int iVar9;
  uchar uVar10;
  uchar b;
  uint uVar11;
  uint uVar12;
  Q_WORDDATA *pQVar13;
  int *piVar14;
  uchar *puVar15;
  uchar r;
  int *piVar16;
  uchar g;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  int y;
  uint a;
  float fVar22;
  int px [32];
  int py [32];
  int pw [32];
  char cwo [256];
  SQAR_DAT sq;
  DISP_SQAR dq;
  int local_d0;
  int m;
  int loop;
  int sflg;
  int npri;
  int nxw;
  int nyw;
  uchar nr;
  uchar ng;
  uchar nb;
  uchar nul;
  
  if (msdat.pass != 0) {
    return (int)&msdat;
  }
  if ((delflg != 0) && (plyr_wrk.mode == 1)) {
    FinderEndSet();
  }
  if (msdat.flg == 0) {
    if (s == (uchar *)0x0) {
      return 0;
    }
    msdat.stp = s + 6;
    msdat.bx = (uint)s[1] * 0x100 + (uint)*s;
    msdat.by = (uint)s[3] * 0x100 + (uint)s[2];
    msdat.pri = (int)s[4];
    msdat.flg = 1;
    msdat.usrgb[3] = 0x80;
    msdat.disptype = (int)s[5];
    msdat.sta = 0;
    msdat.retst = 0;
    msdat.csr = 0;
    msdat.decide = 0;
    msdat.mes_is_end = 0;
    msdat.cnt = 0;
    msdat.r = 0x80;
    msdat.g = 0x80;
    msdat.b = 0x80;
    msdat.usrgb[0] = '\0';
    msdat.usrgb[1] = 0x80;
    msdat.usrgb[2] = 0x80;
    msdat.vib = '\0';
    msdat.alp = '\0';
    if (s[5] == 0) {
      msdat.fntmcnt = 0xffff;
    }
    else {
      msdat.fntmcnt = 0;
    }
    msdat.fntwait = 0;
  }
  pbVar20 = msdat.stp;
  uVar10 = msdat.alp;
  y = msdat.by;
  uVar12 = msdat.bx;
  iVar9 = msdat.pri;
  npri = msdat.pri;
  _nul = (uint)msdat.usrgb[0];
  nxw = 0;
  msdat.fntcnt = 0;
  nyw = 0;
  msdat.selnum = 0;
  loop = 0;
  sflg = 0;
  _nr = (uint)msdat.r;
  _ng = (uint)msdat.g;
  _nb = (uint)msdat.b;
  DrawMessageBox(pri,(float)(msdat.bx + -0x18),(float)(msdat.by + -0x10),528.0,106.0,msdat.alp);
  iVar21 = nmdpri;
  draw_mpri[nmdpri][0] = iVar9;
  draw_mpri[iVar21][1] = nmdpkt;
  nmdpkt = nmdpkt + 1;
  SetFontTex(0,1);
  SetFontEnv();
  local_d0 = pri;
  do {
    bVar4 = *pbVar20;
    a = (uint)uVar10;
    r = (uchar)_nr;
    g = (uchar)_ng;
    b = (uchar)_nb;
    switch(bVar4) {
    case 0xf0:
      bVar4 = pbVar20[1];
      bVar5 = (&font_w_b1)[(uint)bVar4 * 4];
      pbVar20 = pbVar20 + 2;
      SetFontTex(1,2);
      SetFontPat(npri,(uint)bVar4,uVar12,y,(uint)bVar5,r,g,b,(uint)uVar10);
      SetUnderLine(_nul,npri,uVar12,y,(uint)bVar5,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],
                   (uint)uVar10);
      goto joined_r0x00158af8;
    case 0xf1:
      bVar4 = pbVar20[1];
      bVar5 = (&font_w_b2)[(uint)bVar4 * 4];
      SetFontTex(1,3);
      SetFontPat(npri,(uint)bVar4,uVar12,y,(uint)bVar5,r,g,b,a);
      SetUnderLine(_nul,npri,uVar12,y,(uint)bVar5,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],a);
      goto joined_r0x00158598;
    case 0xf2:
      bVar4 = pbVar20[1];
      bVar5 = (&font_w_b3)[(uint)bVar4 * 4];
      SetFontTex(1,4);
      SetFontPat(npri,(uint)bVar4,uVar12,y,(uint)bVar5,r,g,b,a);
      SetUnderLine(_nul,npri,uVar12,y,(uint)bVar5,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],a);
joined_r0x00158598:
      iVar21 = (uint)bVar5 + nxw;
      uVar12 = uVar12 + iVar21;
      msdat.fntcnt = msdat.fntcnt + 1;
      pbVar20 = pbVar20 + 2;
      if (sflg == 0) break;
      goto LAB_00158b04;
    case 0xf3:
      bVar4 = pbVar20[1];
      bVar5 = (&font_w_b4)[(uint)bVar4 * 4];
      pbVar20 = pbVar20 + 2;
      SetFontTex(1,5);
      SetFontPat(npri,(uint)bVar4,uVar12,y,(uint)bVar5,r,g,b,a);
      SetUnderLine(_nul,npri,uVar12,y,(uint)bVar5,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],a);
      goto joined_r0x00158af8;
    default:
      bVar5 = (&font_w_b0)[(uint)bVar4 * 4];
      SetFontTex(1,1);
      pbVar20 = pbVar20 + 1;
      SetFontPat(npri,(uint)bVar4,uVar12,y,(uint)bVar5,r,g,b,a);
      SetUnderLine(_nul,npri,uVar12,y,(uint)bVar5,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],a);
joined_r0x00158af8:
      iVar21 = (uint)bVar5 + nxw;
      uVar12 = uVar12 + iVar21;
      msdat.fntcnt = msdat.fntcnt + 1;
      if (sflg != 0) {
LAB_00158b04:
        pw[msdat.selnum + -1] = pw[msdat.selnum + -1] + iVar21;
      }
      break;
    case 0xf5:
      pbVar19 = pbVar20 + 1;
      pbVar17 = pbVar20 + 2;
      pbVar18 = pbVar20 + 3;
      pbVar20 = pbVar20 + 4;
      if (msdat.vib == '\0') {
        SetVibrate((uint)*pbVar19,(uint)*pbVar17,(uint)*pbVar18);
        msdat.vib = '\x01';
      }
      break;
    case 0xf6:
      _nul = (uint)pbVar20[1];
      msdat.usrgb[1] = pbVar20[2];
      msdat.usrgb[2] = pbVar20[3];
      msdat.usrgb[3] = pbVar20[4];
      pbVar20 = pbVar20 + 5;
      break;
    case 0xf7:
      pbVar19 = pbVar20 + 1;
      pbVar20 = pbVar20 + 2;
      nxw = (int)*pbVar19;
      break;
    case 0xf8:
      pbVar19 = pbVar20 + 1;
      pbVar20 = pbVar20 + 2;
      nyw = (int)*pbVar19;
      break;
    case 0xf9:
      msdat.sta = msdat.sta | 0x20;
      msdat.seltype = (int)pbVar20[1];
      uVar12 = (uint)*(ushort *)(pbVar20 + 2);
      if (pbVar20[1] == 0) {
        if ((msdat.stp != pbVar20) && (sflg == 0)) goto LAB_00158770;
      }
      else if (msdat.stp != pbVar20) {
LAB_00158770:
        y = y + nyw + 0x18;
      }
      sflg = 1;
      px[msdat.selnum] = uVar12;
      py[msdat.selnum] = y;
      pw[msdat.selnum] = 0;
      pbVar20 = pbVar20 + 4;
      msdat.selnum = msdat.selnum + 1;
      break;
    case 0xfa:
      if ((msdat.sta & 1U) == 0) {
        msdat.sta = msdat.sta | 0x10;
      }
      else {
        msdat.sta = msdat.sta ^ 0x1f;
        if (msdat.disptype != 0) {
          msdat.fntmcnt = 0;
          msdat.fntwait = 0;
        }
        msdat.vib = '\0';
        msdat.usrgb[0] = (uchar)_nul;
        uVar12 = msdat.bx;
        y = msdat.by;
        msdat.r = r;
        msdat.g = g;
        msdat.b = b;
        msdat.stp = pbVar20 + 1;
      }
      loop = 1;
      pbVar20 = pbVar20 + 1;
      break;
    case 0xfb:
      m = (int)pbVar20[1];
      iVar21 = 0;
      pbVar20 = pbVar20 + 3;
      sprintf(cwo,&DAT_00356a90);
      cVar3 = cwo[0];
      while ((cVar3 != '\0' && (loop != 2))) {
        if (m == 0) {
          uVar11 = (byte)cwo[iVar21] + 0xf;
        }
        else {
          uVar11 = (byte)cwo[iVar21] + 5;
        }
        bVar4 = (&font_w_b0)[(uVar11 & 0xff) * 4];
        SetFontTex(1,1);
        SetFontPat(npri,uVar11 & 0xff,uVar12,y,(uint)bVar4,(uchar)_nr,(uchar)_ng,(uchar)_nb,a);
        SetUnderLine(_nul,npri,uVar12,y,(uint)bVar4,msdat.usrgb[1],msdat.usrgb[2],msdat.usrgb[3],a);
        msdat.fntcnt = msdat.fntcnt + 1;
        uVar12 = uVar12 + (uint)bVar4 + nxw;
        if (sflg != 0) {
          pw[msdat.selnum + -1] = pw[msdat.selnum + -1] + (uint)bVar4 + nxw;
        }
        iVar21 = iVar21 + 1;
        cVar3 = cwo[iVar21];
        if (msdat.fntmcnt <= msdat.fntcnt) {
          loop = 2;
        }
      }
      break;
    case 0xfc:
      break;
    case 0xfd:
      _nr = (uint)pbVar20[1];
      _ng = (uint)pbVar20[2];
      _nb = (uint)pbVar20[3];
      pbVar20 = pbVar20 + 4;
      break;
    case 0xfe:
      y = y + nyw + 0x18;
      uVar12 = msdat.bx;
      pbVar20 = pbVar20 + 1;
      break;
    case 0xff:
      if (msdat.mes_is_end == 0) {
        if ((msdat.sta & 1U) == 0) {
          msdat.sta = msdat.sta | 0x40;
        }
        else {
          msdat.mes_is_end = 1;
          SetVibrate(0,0,0);
          SetVibrate(1,0,0);
        }
      }
      loop = 1;
    }
    if (msdat.fntmcnt <= msdat.fntcnt) {
      loop = 2;
    }
  } while (loop == 0);
  if ((loop == 2) && (bVar2 = msdat.fntwait < 1, msdat.fntwait = msdat.fntwait + -1, bVar2)) {
    msdat.fntmcnt = msdat.fntmcnt + 1;
    msdat.fntwait = 4;
  }
  if ((msdat.sta & 0x10U) != 0) {
    fVar22 = SgCosf(((float)msdat.cnt * 6.0 * DAT_00355890) / 180.0);
    DrawButtonTex(local_d0 - 0x10,3,(float)(msdat.bx + (nxw + 0x18) * 0x13),
                  (float)(msdat.by + (nyw + 0x18) * 2),(uchar)(int)((fVar22 + 1.0) * 64.0));
    msdat.cnt = msdat.cnt + 1;
  }
  if ((msdat.sta & 0x20U) != 0) {
    puVar1 = (undefined *)((int)&sq.h + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | DAT_0034cb18 >> (7 - uVar12) * 8;
    sq._0_8_ = DAT_0034cb18;
    puVar1 = (undefined *)((int)&sq.y + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | DAT_0034cb20 >> (7 - uVar12) * 8;
    sq._8_8_ = DAT_0034cb20;
    uVar12 = (uint)&sq.alpha & 7;
    puVar15 = &sq.alpha + -uVar12;
    *(ulong *)puVar15 =
         *(ulong *)puVar15 & -1L << (uVar12 + 1) * 8 | DAT_0034cb28 >> (7 - uVar12) * 8;
    sq._16_8_ = DAT_0034cb28;
    if (msdat.decide == 0) {
      if (msdat.seltype == 0) {
        if (*key_now[2] == 1) {
          if (msdat.csr < 1) {
            msdat.csr = msdat.selnum;
          }
          msdat.csr = msdat.csr + -1;
        }
        sVar6 = *key_now[3];
      }
      else {
        if (*key_now[0] == 1) {
          if (msdat.csr < 1) {
            msdat.csr = msdat.selnum;
          }
          msdat.csr = msdat.csr + -1;
        }
        sVar6 = *key_now[1];
      }
      if ((sVar6 == 1) && (bVar2 = msdat.selnum + -1 <= msdat.csr, msdat.csr = msdat.csr + 1, bVar2)
         ) {
        msdat.csr = 0;
      }
      if ((ushort)*key_now[5] == 1) {
        msdat.sta = msdat.sta ^ 0x2f;
        msdat.decide = (uint)(ushort)*key_now[5];
      }
    }
    msdat.retst = msdat.csr + 1;
    CopySqrDToSqr(&dq,&sq);
    piVar14 = px + msdat.csr;
    dq.x[1] = (*piVar14 + dq.x[1]) - dq.x[0];
    dq.pri = npri - 0x10;
    piVar16 = py + msdat.csr;
    dq.x[0] = *piVar14;
    iVar21 = 0;
    dq.alpha = msdat.alp >> 1;
    dq.x[3] = (*piVar14 + dq.x[3]) - dq.x[2];
    dq.x[2] = *piVar14;
    dq.y[2] = (*piVar16 + dq.y[2]) - dq.y[0];
    dq.y[3] = (*piVar16 + dq.y[3]) - dq.y[1];
    dq.y[0] = *piVar16;
    dq.y[2] = *piVar16 + 0x18;
    dq.y[1] = *piVar16;
    dq.y[3] = *piVar16 + 0x18;
    dq.x[1] = *piVar14 + pw[msdat.csr];
    dq.x[3] = *piVar14 + pw[msdat.csr];
    do {
      dq.r[iVar21] = ' ';
      puVar15 = dq.b + iVar21;
      dq.g[iVar21] = '@';
      iVar21 = iVar21 + 1;
      *puVar15 = 0x80;
    } while (iVar21 < 4);
    dq.z = (int)&UNK_1000000f - npri;
    DispSqrD(&dq);
  }
  if (msdat.mes_is_end == 1) {
    if (msdat.alp == '\0') {
      msdat.mes_is_end = 2;
      goto LAB_00158f5c;
    }
    uVar12 = msdat.alp - 8;
    if ((int)uVar12 < 0) {
      uVar12 = 0;
    }
  }
  else {
    if (((1 < msdat.mes_is_end) || (msdat.mes_is_end != 0)) || ((char)msdat.alp < '\0'))
    goto LAB_00158f5c;
    uVar12 = msdat.alp + 8;
    if (0x80 < uVar12) {
      uVar12 = 0x80;
    }
  }
  msdat.alp = (uchar)uVar12;
LAB_00158f5c:
  paiVar8 = draw_mpri[nmdpri];
  nmdpri = nmdpri + 1;
  pQVar13 = mpbuf + (*paiVar8)[1];
  iVar21 = nmdpkt - ((*paiVar8)[1] + -0x70000000);
  pQVar13->ui32[0] = 0;
  pQVar13->ui32[1] = 0;
  pQVar13->ui32[2] = 0;
  pQVar13->ui32[3] = 0;
  pQVar13->ui32[0] = iVar21 - 1;
  MesKeyCheck();
  msdat.pass = 1;
  return msdat.retst;
}

int SetMessageV3(u_char *s, int pri) {
  int iVar1;
  
  iVar1 = SubMessageV3(s,pri,1);
  return iVar1;
}

int SetMessageV3_2(u_char *s, int pri) {
  int iVar1;
  
  iVar1 = SubMessageV3(s,pri,0);
  return iVar1;
}

void MesPassCheck() {
  if (msdat.pass == 0) {
    msdat.flg = 0;
  }
  msdat.pass = 0;
  return;
}

static void MesKeyCheck() {
  if (((msdat.sta & 0x10U) != 0) && (*key_now[5] == 1)) {
    msdat.sta = msdat.sta | 1;
  }
  if ((msdat.sta & 0x40U) != 0) {
    msdat.sta = msdat.sta | 1;
  }
  return;
}

int MesStatusCheck() {
	int ret;
	
  int iVar1;
  
  iVar1 = 0;
  if ((msdat.sta & 0x10U) == 0) {
    if ((((msdat.sta & 0x40U) == 0) || (msdat.mes_is_end != 2)) &&
       (iVar1 = 2, (msdat.sta & 0x20U) != 0)) {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

void DrawButtonTex(u_int pri, int type, float x, float y, u_char alp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&btntex + type * 0x20));
  ds.z = 0xfffffff - pri;
  ds.tex0 = _effdat;
  ds.tex1 = 0x161;
  ds.x = x;
  ds.y = y;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void DrawButtonTexNZ(u_int pri, int type, float x, float y, u_char alp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&btntex + type * 0x20));
  ds.z = 0xfffffff - pri;
  ds.tex0 = _effdat;
  ds.tex1 = 0x161;
  ds.zbuf = 0x10100008c;
  ds.x = x;
  ds.y = y;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void DrawMessageBox(u_int pri, float x, float y, float sizew, float sizeh, u_char alp) {
	int i;
	float ssw;
	float ssh;
	float px[8];
	float py[8];
	float sw[4];
	float sh[4];
	float p1w;
	float p1h;
	DISP_SPRT ds;
	float msx;
	float msy;
	u_char alp2;
	
  float *pfVar1;
  float *pfVar2;
  SPRT_DAT *pSVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float px [8];
  float py [8];
  float sw [4];
  float sh [4];
  DISP_SPRT ds;
  uchar alp2;
  
  pfVar1 = px;
  uVar7 = (int)(char)alp & 0xff;
  iVar6 = 3;
  ReqPlayerStop('\n');
  fVar8 = sizew - 60.0;
  py[5] = y + 14.0;
  fVar9 = sizeh - 28.0;
  px[4] = x + 30.0;
  sh[0] = 1.0;
  sw[0] = fVar8 / 30.0;
  sh[1] = fVar9 / 14.0;
  px[1] = (x + sizew) - 30.0;
  py[2] = (y + sizeh) - 14.0;
  sw[2] = 1.0;
  sw[1] = 1.0;
  sh[3] = 1.0;
  px[0] = x;
  px[2] = x;
  px[3] = px[1];
  px[5] = x;
  px[6] = px[1];
  px[7] = px[4];
  py[0] = y;
  py[1] = y;
  py[3] = py[2];
  py[4] = y;
  py[6] = py[5];
  py[7] = py[2];
  sw[3] = sw[0];
  sh[2] = sh[1];
  SetSquareSN(pri,(px[4] - 320.0) - 20.0,(py[5] - 224.0) - 10.0,((px[4] + fVar8) - 320.0) + 20.0,
              ((py[5] + fVar9) - 224.0) + 10.0,'\v','\b','\a',
              (uchar)(int)((float)(uVar7 * 0x50) * 0.0078125));
  pfVar2 = py;
  pfVar4 = sw;
  pfVar5 = sh;
  pSVar3 = (SPRT_DAT *)&mesbox;
  do {
    CopySprDToSpr(&ds,pSVar3);
    pSVar3 = pSVar3 + 1;
    ds.alpha = (byte)uVar7;
    ds.x = *pfVar1;
    iVar6 = iVar6 + -1;
    pfVar1 = pfVar1 + 1;
    ds.tex0 = DAT_0026c180;
    ds.y = *pfVar2;
    pfVar2 = pfVar2 + 1;
    ds.tex1 = 0x161;
    ds.z = 0xfffffff - pri;
    ds.pri = pri;
    DispSprD(&ds);
  } while (-1 < iVar6);
  pfVar1 = py + 4;
  pSVar3 = (SPRT_DAT *)&DAT_002ab280;
  pfVar2 = px + 4;
  iVar6 = 3;
  do {
    CopySprDToSpr(&ds,pSVar3);
    pSVar3 = pSVar3 + 1;
    ds.alpha = (byte)uVar7;
    iVar6 = iVar6 + -1;
    ds.tex0 = DAT_0026c180;
    ds.x = *pfVar2;
    ds.pri = pri;
    ds.z = 0xfffffff - pri;
    ds.y = *pfVar1;
    ds.tex1 = 0x161;
    ds.scw = *pfVar4;
    pfVar4 = pfVar4 + 1;
    ds.sch = *pfVar5;
    pfVar5 = pfVar5 + 1;
    ds.csx = *pfVar2;
    pfVar2 = pfVar2 + 1;
    ds.csy = *pfVar1;
    pfVar1 = pfVar1 + 1;
    DispSprD(&ds);
  } while (-1 < iVar6);
  SetSquareSN(pri,px[4] - 320.0,py[5] - 224.0,(px[4] + fVar8) - 320.0,(py[5] + fVar9) - 224.0,'\v',
              '\b','\a',(uchar)(int)((float)(uVar7 << 2) * 0.0078125));
  return;
}

int GetStrLength(u_char *str) {
	u_char *c;
	int num;
	int loop;
	
  uchar uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar2 = true;
  uVar1 = *str;
  do {
    switch(uVar1) {
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
      str = str + 2;
      goto LAB_00159670;
    default:
      str = str + 1;
LAB_00159670:
      iVar3 = iVar3 + 1;
      break;
    case 0xf5:
    case 0xfd:
      str = str + 4;
      break;
    case 0xf6:
      str = str + 5;
      break;
    case 0xf7:
    case 0xf8:
      str = str + 2;
      break;
    case 0xf9:
    case 0xfb:
    case 0xfc:
      break;
    case 0xfa:
    case 0xfe:
      str = str + 1;
      break;
    case 0xff:
      str = str + 1;
      bVar2 = false;
    }
    if (!bVar2) {
      return iVar3;
    }
    uVar1 = *str;
  } while( true );
}

int GetStrWidth(u_char *str) {
	u_char *c;
	u_char n;
	int loop;
	int w;
	
  byte bVar1;
  bool bVar2;
  int_0_ *piVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = true;
  iVar5 = 0;
  bVar1 = *str;
  do {
    switch((uint)bVar1) {
    case 0xf0:
      uVar4 = (uint)str[1];
      piVar3 = &font_w_b1;
      goto LAB_001596fc;
    case 0xf1:
      uVar4 = (uint)str[1];
      piVar3 = &font_w_b2;
      goto LAB_001596fc;
    case 0xf2:
      uVar4 = (uint)str[1];
      piVar3 = &font_w_b3;
      goto LAB_001596fc;
    case 0xf3:
      uVar4 = (uint)str[1];
      piVar3 = &font_w_b4;
LAB_001596fc:
      str = str + 2;
      iVar5 = iVar5 + *(int *)(piVar3 + uVar4 * 4);
      break;
    default:
      str = str + 1;
      iVar5 = iVar5 + *(int *)(&font_w_b0 + (uint)bVar1 * 4);
      break;
    case 0xf5:
    case 0xfd:
      str = str + 4;
      break;
    case 0xf6:
      str = str + 5;
      break;
    case 0xf7:
    case 0xf8:
      str = str + 2;
      break;
    case 0xf9:
    case 0xfb:
    case 0xfc:
      break;
    case 0xfa:
    case 0xfe:
      str = str + 1;
      break;
    case 0xff:
      str = str + 1;
      bVar2 = false;
    }
    if (!bVar2) {
      return iVar5;
    }
    bVar1 = *str;
  } while( true );
}

void FontDispSample() {
	static float w = 100.f;
	static float h = 100.f;
	static int fl = 0;
	u_char str3[14];
	u_char str2[11];
	u_char str1[11];
	DISP_STR ds;
	STR_DAT sd;
	
  uchar *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong *puVar4;
  uchar str3 [14];
  uchar str2 [11];
  uchar str1 [11];
  DISP_STR ds;
  STR_DAT sd;
  
  ds.str = str3;
  puVar1 = str3 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_0034cc70 >> (7 - uVar3) * 8;
  str3._0_8_ = DAT_0034cc70;
  puVar1 = str3 + 0xb;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_0034cc78 >> (3 - uVar3) * 8;
  str3._8_4_ = DAT_0034cc78;
  str3[12] = DAT_0034cc7c;
  str3[13] = DAT_0034cc7d;
  puVar1 = str2 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_0034cc80 >> (7 - uVar3) * 8;
  str2._0_8_ = DAT_0034cc80;
  str2[8] = DAT_0034cc88;
  str2[9] = DAT_0034cc89;
  str2[10] = DAT_0034cc8a;
  puVar1 = str1 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_0034cc90 >> (7 - uVar3) * 8;
  str1._0_8_ = DAT_0034cc90;
  str1[8] = DAT_0034cc98;
  str1[9] = DAT_0034cc99;
  str1[10] = DAT_0034cc9a;
  puVar2 = (undefined *)((int)&sd.pos_x + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar4 = (ulong *)(puVar2 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034cca0 >> (7 - uVar3) * 8;
  sd._0_8_ = DAT_0034cca0;
  puVar2 = (undefined *)((int)&sd.type + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar4 = (ulong *)(puVar2 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034cca8 >> (7 - uVar3) * 8;
  sd._8_8_ = DAT_0034cca8;
  puVar2 = (undefined *)((int)&sd.g + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar4 = (ulong *)(puVar2 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034ccb0 >> (7 - uVar3) * 8;
  sd._16_8_ = DAT_0034ccb0;
  puVar2 = (undefined *)((int)&sd.alpha + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar4 = (ulong *)(puVar2 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034ccb8 >> (7 - uVar3) * 8;
  sd._24_8_ = DAT_0034ccb8;
  sd.pri = DAT_0034ccc0;
  CopyStrDToStr(&ds,&sd);
  ds.pri = 0x2000;
  ds.pos_x = 0x28;
  ds.pos_y = 0x5a;
  SetMessageV2(&ds);
  return;
}
