// STATUS: NOT STARTED

SPRT_DAT number_tex[0][10] = {
};

void NumberDisp(int number, short int pos_x, short int pos_y, u_char font, u_char r, u_char g, u_char b, u_char alpha, int pri, int digit, int type) {
	int digit;
	int i;
	int multi10;
	int multi10_bak;
	int disp_number;
	int disp_digit;
	
  int in_t4_lo;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s5_lo;
  int iVar4;
  
  iVar1 = 1;
  iVar2 = digit;
  if (0 < digit) {
    do {
      iVar1 = iVar1 * 10;
      iVar2 = iVar2 + -1;
      in_t4_lo = iVar1;
    } while (iVar2 != 0);
  }
  iVar2 = number % iVar1;
  if (iVar1 == 0) {
    trap(7);
  }
  if (iVar2 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = unaff_s5_lo;
    if (0 < digit) {
      iVar1 = iVar1 / 10;
      iVar3 = 1;
      iVar4 = digit;
      if (iVar2 / iVar1 == 0) {
        for (; iVar4 = unaff_s5_lo, iVar3 < digit; iVar3 = iVar3 + 1) {
          iVar1 = iVar1 / 10;
          if (iVar2 / iVar1 != 0) {
            iVar4 = digit - iVar3;
            break;
          }
        }
      }
    }
  }
  iVar1 = 0;
  if (0 < digit) {
    do {
      in_t4_lo = in_t4_lo / 10;
      if (type == 1) {
        if (iVar1 < digit - iVar4) goto LAB_00159ac8;
        if (in_t4_lo == 0) {
          trap(7);
        }
        iVar3 = iVar1 - (digit - iVar4);
LAB_00159a9c:
        NumberFontDisp((uchar)(iVar2 / in_t4_lo),(uchar)iVar3,pos_x,pos_y,font,r,g,b,pri,
                       (int)(char)alpha & 0xff);
        if (in_t4_lo == 0) {
          trap(7);
        }
        iVar2 = iVar2 - (iVar2 / in_t4_lo) * in_t4_lo;
      }
      else if (type < 2) {
        if ((type == 0) && (digit - iVar4 <= iVar1)) {
LAB_00159a78:
          iVar3 = iVar1;
          if (in_t4_lo == 0) {
            trap(7);
          }
          goto LAB_00159a9c;
        }
      }
      else if (type == 2) goto LAB_00159a78;
LAB_00159ac8:
      iVar1 = iVar1 + 1;
    } while (iVar1 < digit);
  }
  return;
}

void NumberFontDisp(u_char number, u_char no, short int pos_x, short int pos_y, u_char font, u_char r, u_char g, u_char b, int pri, int alpha) {
	int pri;
	u_char alpha;
	u_short font_w[5];
	DISP_SPRT ds;
	
  ulong *puVar1;
  uint uVar2;
  uint in_hi;
  uint uVar3;
  float in_f13;
  float in_f12;
  short font_w [5];
  DISP_SPRT ds;
  uint local_b0;
  byte local_ac;
  
  local_b0 = (uint)(short)pos_x;
  uVar2 = (int)(char)font & 0xff;
  local_ac = (byte)alpha;
  uVar3 = (int)font_w + 7U & 7;
  puVar1 = (ulong *)(((int)font_w + 7U) - uVar3);
  *puVar1 = *puVar1 & -1L << (uVar3 + 1) * 8 | DAT_0034ccc8 >> (7 - uVar3) * 8;
  font_w._0_8_ = DAT_0034ccc8;
  font_w[4] = DAT_0034ccd0;
  if ((uVar2 == 0) || (uVar2 == 3)) {
    SetInteger3(pri,in_f12,in_f13,
                (local_b0 | in_hi) + (uint)(ushort)font_w[uVar2] * ((int)(char)no & 0xffU),
                (uchar)pos_y,'\0',r,g,(int)(char)b & 0xffU);
  }
  else {
    uVar3 = 0;
    CopySprDToSpr(&ds,(SPRT_DAT *)(&number_tex + uVar2 * 0x140 + ((int)(char)number & 0xffU) * 0x20)
                 );
    ds.y = (float)(int)(short)pos_y;
    ds.z = 0xfffffff - pri;
    ds.b = (byte)((int)(char)b & 0xffU);
    ds.pri = pri;
    ds.x = (float)((local_b0 | uVar3) + (uint)(ushort)font_w[uVar2] * ((int)(char)no & 0xffU));
    ds.alpha = local_ac;
    ds.r = r;
    ds.g = g;
    DispSprD(&ds);
  }
  return;
}
