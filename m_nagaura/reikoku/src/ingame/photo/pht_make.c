// STATUS: NOT STARTED

SPRT_DAT hintdat[0] = {
};
SPRT_DAT hintreadat[0] = {
};
int pazene_load_tbl[0] = {
};
int frm_type = 2;
int ers_type = 1;
int hint_2d = 0;
int hint_rea = 0;
int hint_3d = 0;
int hint_2d_num = 0;
int hint_3d_num = 0;
int pic_save_flag = 0;
int pht_finder_off = 0;

void InitPhotoMake() {
  hint_2d = 0;
  hint_rea = 0;
  hint_3d = 0;
  hint_2d_num = 0;
  hint_3d_num = 0;
  pic_save_flag = 0;
  pht_finder_off = 0;
  return;
}

void CopyScreenToBuffer(int addr, int szfl, int mx, int my, int mw, int mh) {
	int *data_i;
	short int *data_o;
	int x;
	int y;
	int oneli;
	int onelo;
	u_int un;
	int myy;
	int mhh;
	
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = mw + 0x3e;
  if (-1 < mw + -1) {
    iVar2 = mw + -1;
  }
  pvVar3 = GetEmptyBuffer(0);
  if (szfl != 0) {
    *(undefined4 *)addr = 0x18000;
    addr = addr + 0x10;
  }
  LocalCopyLtoB2(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
  iVar7 = 0;
  if (0 < mh / 2) {
    do {
      iVar6 = 0;
      if (0 < mw) {
        do {
          iVar5 = iVar6 * 4;
          iVar4 = iVar6 * 2;
          iVar6 = iVar6 + 1;
          uVar1 = *(uint *)((int)pvVar3 + mx * 4 + iVar5 + (my / 2 + iVar7) * 0xa00);
          *(ushort *)(iVar7 * ((iVar2 >> 6) + 1) * 0x40 * 2 + iVar4 + addr) =
               (ushort)(uVar1 >> 9) & 0x7c00 | (ushort)(uVar1 >> 3) & 0x1f | 0x8000 |
               (ushort)(uVar1 >> 6) & 0x3e0;
        } while (iVar6 < mw);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < mh / 2);
  }
  return;
}

void DrawPhotoBuffer(u_int pri, int addr, int szfl, int x, int y, int szw, int szh, int mszw, int mszh, int ftype, int alp, int ztype) {
	int mszh;
	int ftype;
	u_char alp;
	int ztype;
	u_long128 *data_i;
	int dbw;
	sceGsLoadImage gs_limage;
	float fh;
	float xx;
	float yy;
	SPRITE_DATA sd;
	DRAW_ENV de;
	
  sceGsTex0 *psVar1;
  int iVar2;
  SPRITE_DATA *pSVar3;
  ulong uVar4;
  sceGsTex0 sVar5;
  sceGsTex0 sVar6;
  sceGsTex0 sVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float y1;
  float y2;
  float x2;
  float fVar12;
  float fVar13;
  float fVar14;
  sceGsLoadImage gs_limage;
  SPRITE_DATA sd;
  DRAW_ENV de;
  
  psVar1 = (sceGsTex0 *)&DAT_00351420;
  fVar14 = (float)szh;
  fVar9 = (float)szw;
  pSVar3 = &sd;
  do {
    sVar5 = psVar1[1];
    sVar6 = psVar1[2];
    sVar7 = psVar1[3];
    pSVar3->g_GsTex0 = *psVar1;
    *(sceGsTex0 *)&pSVar3->g_nTexSizeW = sVar5;
    *(sceGsTex0 *)&pSVar3->g_bMipmapLv = sVar6;
    pSVar3->g_GsMiptbp1 = (ulong)sVar7;
    psVar1 = psVar1 + 4;
    pSVar3 = (SPRITE_DATA *)&pSVar3->g_GsMiptbp2;
  } while (psVar1 != (sceGsTex0 *)&DAT_00351480);
  de.tex1 = DAT_00351480;
  de.alpha = DAT_00351488;
  de.clamp = DAT_003514a0;
  de.prim = DAT_003514a8;
  if (ztype == 0) {
    uVar4 = 0x30000;
    de.zbuf = 0x10100008c;
  }
  else {
    uVar4 = 0x50000;
    de.zbuf = 0x100008c;
  }
  de.test = uVar4 | 3;
  fVar10 = 320.0;
  iVar2 = mszw + 0x3e;
  if (-1 < mszw + -1) {
    iVar2 = mszw + -1;
  }
  iVar8 = (iVar2 >> 6) + 1;
  iVar2 = addr + 0x10;
  if (szfl == 0) {
    iVar2 = addr;
  }
  fVar13 = ((float)x - 320.0) - 1.0;
  fVar11 = ((float)y - 224.0) - 1.0;
  sceGsSetDefLoadImage
            (&gs_limage,0x2780,iVar8 * 0x10000 >> 0x10,2,0,0,iVar8 * 0x400000 >> 0x10,(short)mszh);
  FlushCache(0);
  sceGsExecLoadImage(&gs_limage,iVar2);
  sceGsSyncPath(0,0);
  sd.g_GsTex0 = (sceGsTex0)
                ((ulong)sd.g_GsTex0 & 0xfffffffffff00000 | 0x2780 | ((long)iVar8 & 0x3fU) << 0xe);
  iVar2 = log_2((float)iVar8 * 64.0);
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xffffffffc3ffffff | ((long)iVar2 & 0xfU) << 0x1a);
  iVar2 = log_2((float)mszh);
  sd.pos_z = 0xfffffff - pri;
  sd.g_GsTex0 = (sceGsTex0)((ulong)sd.g_GsTex0 & 0xfffffffc3fffffff | ((long)iVar2 & 0xfU) << 0x1e);
  sd.g_nTexSizeH = mszh;
  sd.alpha = (uchar)alp;
  sd.g_nTexSizeW = mszw;
  sd.pos_x = fVar13;
  sd.pos_y = fVar11;
  sd.size_w = fVar9;
  sd.size_h = fVar14;
  SetTexDirectS2(pri,&sd,&de,1);
  if (ftype == 1) {
    fVar12 = (fVar9 - 48.0) / 84.0 + 2.0;
    if (fVar12 < 2.0) {
      fVar12 = 2.0;
    }
    fVar13 = fVar13 + fVar10;
    fVar11 = fVar11 + 224.0;
    fVar9 = fVar13 + fVar9;
    fVar10 = (fVar13 - fVar12) + 2.0;
    y2 = fVar11 + 1.0;
    x2 = (fVar9 + fVar12) - 2.0;
    SetPanel(pri,fVar10,(fVar11 - fVar12) + 1.0,x2,y2,0xcf,0xbd,0xa1,(uchar)alp);
    y1 = (fVar11 + fVar14) - 1.0;
    SetPanel(pri,fVar10,y1,x2,(fVar11 + fVar14 + fVar12) - 1.0,0xcf,0xbd,0xa1,(uchar)alp);
    SetPanel(pri,fVar10,y2,fVar13 + 2.0,y1,0xcf,0xbd,0xa1,(uchar)alp);
    SetPanel(pri,fVar9 - 2.0,y2,x2,y1,0xcf,0xbd,0xa1,(uchar)alp);
  }
  DrawAll2D();
  return;
}

void CompressData(int addri, int addro, int n) {
	int one_size;
	u_int quality;
	
  float fVar1;
  uchar *addrs;
  uint uVar2;
  float fVar3;
  
  addrs = (uchar *)(addri + 0x18010);
  fVar3 = SlideEncode((uchar *)addri,addrs,0x18010);
  fVar1 = DAT_00356014;
  if (DAT_00356014 < fVar3) {
    uVar2 = 1;
    do {
      memset(addrs,0xff,0x18010);
      fVar3 = CompressFile((short *)addri,(char *)addrs,0x18010,(char)uVar2);
      uVar2 = uVar2 + 1;
      if (fVar3 < fVar1) goto LAB_002011dc;
    } while (uVar2 < 5);
    *(undefined4 *)(addri + 0x18014) = 2;
  }
LAB_002011dc:
  memcpy((void *)(n * 0xd350 + addro),(void *)(addri + 0x18010),0xd350);
  return;
}

void UncompressData(int addri, int n, int addro) {
	int one_size;
	u_int type;
	
  int iVar1;
  uchar *base;
  
  base = (uchar *)(n * 0xd350 + addri);
  iVar1 = *(int *)(base + 4);
  if (iVar1 == 1) {
    ExpandFile((char *)base,(short *)addro);
    return;
  }
  if (iVar1 == 0) {
    SlideDecode(base,(uchar *)addro);
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    memset((void *)addro,0,0x18010);
  }
  photo_expand.cnt = 0;
  photo_expand.sta = 1;
  return;
}

void TakePhotoFromScreen() {
  CopyScreenToBuffer(0x1e90000,1,0x80,0x50,0x180,0x100);
  return;
}

void MakeSPhotoFromWorkArea(int n) {
	int addr;
	
  DrawPhotoBuffer(0x440,0x1e90000,1,0,0,0x42,0x2a,0x180,0x80,0,0x80,0);
  CopyScreenToBuffer(n * 0xa00 + 0x1a90000,0,1,1,0x40,0x28);
  return;
}

void MakeSPhotoFromCompress(int ni, int no) {
	int addr;
	
  UncompressData(0x1aa5400,ni,0x1e90000);
  DrawPhotoBuffer(0x440,0x1e90000,1,0,0,0x40,0x28,0x180,0x80,0,0x80,0);
  CopyScreenToBuffer(no * 0xa00 + 0x1a90000,0,0,0,0x40,0x28);
  return;
}

void DrawSPhotoFromSmallPhotoArea(int n, int pri, int ftype, int x, int y, u_char alp) {
  DrawPhotoBuffer(pri,n * 0xa00 + 0x1a90000,0,x,y,0x40,0x28,0x40,0x14,ftype,(int)(char)alp & 0xff,1)
  ;
  return;
}

void DrawSPhotoFromSmallPhotoAreaAD(int addr, int n, int pri, int ftype, int x, int y, u_char alp) {
	int addr2;
	
  DrawPhotoBuffer(pri,n * 0xa00 + addr,0,x,y,0x40,0x28,0x40,0x14,ftype,(int)(char)alp & 0xff,1);
  return;
}

void DrawSPhotoFromSmallPhotoArea2(int n, int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  DrawPhotoBuffer(pri,n * 0xa00 + 0x1a90000,0,x,y,szw,szh,0x40,0x14,ftype,(int)(char)alp & 0xff,1);
  return;
}

void DrawSPhotoFromSmallPhotoArea2AD(int addr, int n, int pri, int ftype, int x, int y, int szw, int szh, int alp) {
	int addr2;
	
  DrawPhotoBuffer(pri,n * 0xa00 + addr,0,x,y,szw,szh,0x40,0x14,ftype,alp & 0xff,1);
  return;
}

void CompPhotoFromWorkArea(int n) {
  CompressData(0x1e90000,0x1aa5400,n);
  return;
}

void DrawPhotoFromWorkArea(int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  DrawPhotoBuffer(pri,0x1e90000,1,x,y,szw,szh,0x180,0x80,ftype,(int)(char)alp & 0xff,1);
  return;
}

void DrawPhotoFromCompress(int n, u_int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  return;
}

void UncompressPhoto(int n) {
  UncompressData(0x1aa5400,n,0x1e90000);
  return;
}

void UncompressPhotoAD(int addr, int n) {
  int iVar1;
  uchar *base;
  
  base = (uchar *)(n * 0xd350 + addr);
  iVar1 = *(int *)(base + 4);
  if (iVar1 == 1) {
    ExpandFile((char *)base,(short *)0x1e90000);
    return;
  }
  if (iVar1 == 0) {
    SlideDecode(base,(uchar *)0x1e90000);
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    memset((void *)0x1e90000,0,0x18010);
  }
  photo_expand.cnt = 0;
  photo_expand.sta = 1;
  return;
}

void DrawPhotoFromPhotoWrk(int n, u_int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  DrawPhotoBuffer(pri,0x1e90000,1,x,y,szw,szh,0x180,0x80,ftype,(int)(char)alp & 0xff,1);
  return;
}

void CopyPhoto(int addri, int ni, int addro, int no) {
	int i;
	short int *data_o;
	int one_size;
	
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = 0x69a8;
  puVar3 = (undefined2 *)(no * 0xd350 + addro);
  puVar2 = (undefined2 *)(ni * 0xd350 + addri);
  do {
    uVar1 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return;
}

void CopySPhoto(int addri, int ni, int addro, int no) {
	int i;
	short int *data_o;
	int one_size;
	
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = 0x500;
  puVar3 = (undefined2 *)(no * 0xa00 + addro);
  puVar2 = (undefined2 *)(ni * 0xa00 + addri);
  do {
    uVar1 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return;
}

void DrawPhotoHinttex(u_int pri, int num) {
	DISP_SPRT ds;
	
  int iVar1;
  DISP_SPRT ds;
  
  iVar1 = num * 0x20;
  CopySprDToSpr(&ds,(SPRT_DAT *)(&hintdat + iVar1));
  ds.y = (float)((int)(0x100 - (uint)*(ushort *)(&DAT_0033fbe6 + iVar1)) / 2 + 0x50);
  ds.x = (float)((int)(0x180 - (uint)*(ushort *)(&DAT_0033fbe4 + iVar1)) / 2 + 0x80);
  ds.z = 0xfffffff - pri;
  ds.tex1 = 0x161;
  ds.zbuf = 0x10100008c;
  ds.test = 0x30003;
  ds.pri = pri;
  DispSprD(&ds);
  return;
}

void DrawPhotoHinttex2(u_int sw, u_int pri, int num) {
	DISP_SPRT ds;
	float f;
	float pos;
	u_char alp;
	u_char alp2;
	int time;
	int target;
	SPRT_DAT *sd;
	int max;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  byte bVar2;
  ulong *puVar3;
  int iVar4;
  SPRT_DAT_0_ *pSVar5;
  uchar *puVar6;
  uint uVar7;
  uint unaff_s0_lo;
  SPRT_DAT *d;
  uint unaff_s3_lo;
  float fVar8;
  DISP_SPRT ds;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  if (hint_rea == 0) {
    iVar4 = num * 2;
    uVar7 = 0x80;
    pSVar5 = &hintdat;
  }
  else {
    iVar4 = (num + -0x96) * 2;
    pSVar5 = &hintreadat;
    uVar7 = 0x30;
  }
  d = (SPRT_DAT *)(pSVar5 + (iVar4 + monochrome_mode) * 0x20);
  if (sw == 0) {
    if (100 < (ushort)plyr_wrk.ap_timer) goto LAB_00201924;
    if (0x13 < (ushort)plyr_wrk.ap_timer) {
      fVar8 = ((float)(uint)d->alpha * 0.25 * (float)(100 - (uint)(ushort)plyr_wrk.ap_timer)) / 80.0
      ;
      uVar7 = (int)((100 - (uint)(ushort)plyr_wrk.ap_timer) * uVar7) / 0x50;
      goto LAB_00201900;
    }
    bVar2 = d->alpha;
  }
  else {
    if ((ushort)plyr_wrk.ap_timer < 0x65) {
      uVar7 = ((ushort)plyr_wrk.ap_timer * uVar7) / 100;
      fVar8 = ((float)(uint)d->alpha * 0.25 * (float)(uint)(ushort)plyr_wrk.ap_timer) / 100.0;
LAB_00201900:
      unaff_s3_lo = (int)fVar8 & 0xff;
      unaff_s0_lo = uVar7 & 0xff;
      goto LAB_00201924;
    }
    bVar2 = d->alpha;
  }
  unaff_s3_lo = (uint)(bVar2 >> 2);
  unaff_s0_lo = uVar7;
LAB_00201924:
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003514b0 >> (7 - uVar7) * 8;
  sq._0_8_ = DAT_003514b0;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar7);
  *puVar3 = *puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003514b8 >> (7 - uVar7) * 8;
  sq._8_8_ = DAT_003514b8;
  uVar7 = (uint)&sq.alpha & 7;
  puVar6 = &sq.alpha + -uVar7;
  *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar7 + 1) * 8 | DAT_003514c0 >> (7 - uVar7) * 8;
  sq._16_8_ = DAT_003514c0;
  CopySqrDToSqr(&dq,&sq);
  dq.pri = 0x10;
  dq.z = 0xfffffef;
  dq.zbuf = 0x10100008c;
  dq.test = 0x30003;
  iVar4 = 0;
  dq.alphar = 0x44;
  dq.x[2] = 0x80;
  dq.y[1] = 0x50;
  dq.x[3] = 0x200;
  dq.y[3] = 0x150;
  dq.x[0] = 0x80;
  dq.y[0] = 0x50;
  dq.x[1] = 0x200;
  dq.y[2] = 0x150;
  do {
    dq.r[iVar4] = '\0';
    puVar6 = dq.b + iVar4;
    dq.g[iVar4] = '\0';
    iVar4 = iVar4 + 1;
    *puVar6 = '\0';
  } while (iVar4 < 4);
  dq.alpha = (uchar)unaff_s0_lo;
  DispSqrD(&dq);
  fVar8 = (float)(uint)d->alpha * 0.25;
  fVar8 = ((fVar8 - (float)unaff_s3_lo) * 4.0) / fVar8;
  MakeTim2ClutDirect4(0x1e90000,0,-1,-1,0);
  MakeTim2ClutDirect4(0x1e90000,1,-1,-1,0);
  CopySprDToSpr(&ds,d);
  ds.alpha = (byte)unaff_s3_lo;
  ds.z = 0xfffffff - pri;
  ds.tex1 = 0x161;
  ds.x = (float)((int)(0x180 - (uint)(ushort)d->w) / 2 + 0x80) - fVar8;
  ds.zbuf = 0x10100008c;
  ds.y = (float)((int)(0x100 - (uint)(ushort)d->h) / 2 + 0x50) - fVar8;
  ds.test = 0x30003;
  ds.pri = pri;
  DispSprD(&ds);
  ds.x = (float)((int)(0x180 - (uint)(ushort)d->w) / 2 + 0x80) - fVar8;
  ds.y = (float)((int)(0x100 - (uint)(ushort)d->h) / 2 + 0x50) + fVar8;
  DispSprD(&ds);
  ds.x = (float)((int)(0x180 - (uint)(ushort)d->w) / 2 + 0x80) + fVar8;
  ds.y = (float)((int)(0x100 - (uint)(ushort)d->h) / 2 + 0x50) - fVar8;
  DispSprD(&ds);
  ds.y = (float)((int)(0x100 - (uint)(ushort)d->h) / 2 + 0x50) + fVar8;
  ds.x = (float)((int)(0x180 - (uint)(ushort)d->w) / 2 + 0x80) + fVar8;
  DispSprD(&ds);
  return;
}

void DrawPhotoEffect(u_int pri, int type) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	float sc;
	float velx;
	float vely;
	
  float fVar1;
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = DAT_003514c8;
  sd._8_8_ = DAT_003514d0;
  sd._16_8_ = DAT_003514d8;
  sd._24_8_ = DAT_003514e0;
  LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  CopySprDToSpr(&ds,&sd);
  ds.z = 0xfffffff - pri;
  ds.tex0 = 0x2000000228029a40;
  ds.tex1 = 0x161;
  ds.zbuf = 0x10100008c;
  ds.test = 0x30003;
  ds.b = 0x80;
  ds.texa = 0;
  ds.r = 0x80;
  ds.g = 0x80;
  ds.pri = pri;
  if (type == 0) {
    ds.scw = 1.0;
    ds.sch = 2.0;
    ds.csx = -16.0;
    ds.csy = 16.0;
    ds.alpha = 0x40;
    ds.x = -16.0;
    ds.y = 16.0;
    DispSprD(&ds);
  }
  if (type == 1) {
    ds.y = 112.0;
    ds.scw = DAT_00356018;
    ds.sch = DAT_0035601c;
    ds.csx = 320.0;
    ds.csy = 224.0;
    ds.alpha = 0x40;
    ds.x = 0.0;
    DispSprD(&ds);
  }
  if (type == 2) {
    fVar1 = 2.0;
    ds.csy = 0.0;
    ds.alpha = 0x40;
    ds.x = 0.0;
    ds.y = 0.0;
    ds.scw = 1.0;
    ds.sch = 2.0;
    ds.csx = 0.0;
    DispSprD(&ds);
    ds.alpha = 0x30;
    ds.y = 4.0;
    ds.scw = 1.0;
    ds.csy = 4.0;
    ds.csx = fVar1;
    ds.x = fVar1;
    ds.sch = fVar1;
    DispSprD(&ds);
    ds.csx = 4.0;
    ds.csy = 8.0;
    ds.alpha = 0x20;
    ds.x = 4.0;
    ds.y = 8.0;
    ds.scw = 1.0;
    ds.sch = fVar1;
    DispSprD(&ds);
    ds.scw = 1.0;
    ds.csx = 6.0;
    ds.csy = 12.0;
    ds.alpha = 0x10;
    ds.x = 6.0;
    ds.y = 12.0;
    ds.sch = fVar1;
    DispSprD(&ds);
  }
  return;
}

void DrawPhotoFilter(u_int pri, int type, u_char alp) {
	DISP_SPRT ds;
	static SPRT_DAT phtdat[10] = {
		/* [0] = */ {
			/* .tex0 = */ 2307096476581405440,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [1] = */ {
			/* .tex0 = */ 2307097026337219328,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [2] = */ {
			/* .tex0 = */ 2307097576093033248,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [3] = */ {
			/* .tex0 = */ 2307098125848847136,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [4] = */ {
			/* .tex0 = */ 2307098675604661056,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [5] = */ {
			/* .tex0 = */ 2307099225360474944,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [6] = */ {
			/* .tex0 = */ 2307099775116288864,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [7] = */ {
			/* .tex0 = */ 2307100324872102752,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [8] = */ {
			/* .tex0 = */ 2307100874627916672,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		},
		/* [9] = */ {
			/* .tex0 = */ 2307101424383730560,
			/* .u = */ 0,
			/* .v = */ 0,
			/* .w = */ 96,
			/* .h = */ 64,
			/* .x = */ 0,
			/* .y = */ 0,
			/* .pri = */ 0,
			/* .alpha = */ 128
		}
	};
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&phtdat_189 + (type * 2 + monochrome_mode) * 0x20));
  ds.z = 0xfffffff - pri;
  ds.x = 128.0;
  ds.y = 80.0;
  if (type == 0) {
    ds.r = 100;
    ds.g = 0x46;
    ds.b = 0x28;
  }
  else {
    ds.b = 0x80;
    ds.r = 0x80;
    ds.g = 0x80;
  }
  ds.zbuf = 0x10100008c;
  ds.test = 0x30003;
  ds.sch = 4.0;
  ds.csx = 128.0;
  ds.csy = 80.0;
  ds.tex1 = 0x161;
  ds.scw = 4.0;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void DispPhotoFrame0() {
	int i;
	int num1;
	int num2;
	
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  SetSprFile2(0x1e85000,0);
  do {
    bVar1 = photo_wrk.spcl_pht_no[iVar4][1];
    uVar3 = (uint)bVar1;
    switch(photo_wrk.spcl_pht_no[iVar4][0]) {
    case '\x01':
      if ((1 < bVar1) && (uVar3 == 2)) {
        SubContrast2(0xb4,0x80);
      }
      break;
    case '\x02':
      SubDeform(2,(float)(uVar3 * 10),0x80);
      break;
    case '\x03':
      SetPanel(0x460,0.0,0.0,640.0,448.0,'\0','\0','\0',bVar1 * '\f');
      break;
    case '\x04':
      switch(uVar3) {
      case 0:
        iVar2 = 1;
        break;
      case 1:
        iVar2 = 2;
        break;
      case 2:
        iVar2 = 3;
        goto LAB_00202174;
      case 3:
        iVar2 = 4;
LAB_00202174:
        DrawPhotoFilter(0x460,iVar2,' ');
      default:
        goto LAB_002021f0;
      }
      DrawPhotoFilter(0x460,iVar2,'@');
      break;
    case '\x05':
      if (uVar3 == 1) {
        DrawPhotoEffect(0x460,0);
      }
      else if (bVar1 < 2) {
        if (uVar3 == 0) {
          DrawPhotoEffect(0x460,2);
        }
      }
      else if (uVar3 == 2) {
        DrawPhotoEffect(0x460,1);
      }
    }
LAB_002021f0:
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}

void DispPhotoFrame00(int flag) {
	static u_char cnt;
	static int flow = -1;
	u_char a;
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  bool bVar1;
  float fVar2;
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = DAT_00351528;
  sd._8_8_ = DAT_00351530;
  sd._16_8_ = DAT_00351538;
  sd._24_8_ = DAT_00351540;
  if (flag != 0) {
    flow_197 = (undefined *)0x0;
  }
  if (flow_197 == (undefined *)0x0) {
    cnt_196 = 0;
    LocalCopyLtoB2(0,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    flow_197 = flow_197 + 1;
  }
  else {
    if ((int)flow_197 < 1) {
      return;
    }
    if (flow_197 != (undefined *)0x1) {
      return;
    }
  }
  ds.alpha = 0x80 - (char)(((uint)cnt_196 << 7) / 0x14);
  LocalCopyBtoL(0,0x1a40);
  CopySprDToSpr(&ds,&sd);
  ds.zbuf = 0x10100008c;
  ds.tex0 = 0x2000000228029a40;
  ds.test = 0x30003;
  ds.alphar = 0x44;
  ds.pri = 0x80000;
  ds.z = 0xff7ffff;
  ds.x = -0.5;
  fVar2 = __floatdisf(sys_wrk.count + 1 & 1);
  ds.y = fVar2 * 0.5 + -1.0;
  ds.scw = 1.0;
  ds.sch = 2.0;
  ds.csx = -0.5;
  fVar2 = __floatdisf(sys_wrk.count + 1 & 1);
  ds.b = 0x80;
  ds.r = 0x80;
  ds.csy = fVar2 * 0.5 + -1.0;
  ds.g = 0x80;
  DispSprD(&ds);
  bVar1 = 0x13 < cnt_196;
  cnt_196 = cnt_196 + 1;
  if (bVar1) {
    cnt_196 = '\x14';
  }
  return;
}

int DispPhotoFrame1(int fl) {
	static int time1 = 100;
	static int cnt = 0;
	static u_char alp1 = 0;
	static u_char alp2 = 0;
	static int flash_fr = 0;
	static int fl_cnt = 0;
	u_char a;
	int i;
	int j;
	int x;
	int y;
	int ret;
	DISP_SPRT ds;
	SPRT_DAT sd;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	DISP_SPRT ds;
	SPRT_DAT sd;
	DISP_SPRT ds;
	SPRT_DAT sd;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	float fh;
	float szw;
	float szh;
	float szhc;
	
  ulong *puVar1;
  uchar col;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float y1;
  float y2;
  float x2;
  float fVar8;
  DISP_SPRT DStack_320;
  SPRT_DAT local_290;
  undefined auStack_270 [7];
  undefined auStack_269 [8];
  undefined auStack_261 [8];
  undefined auStack_259 [9];
  undefined local_250 [104];
  uint local_1e8;
  undefined local_1e4 [4];
  undefined local_1e0 [4];
  undefined local_1dc [4];
  uchar local_1d8;
  SPRT_DAT local_1d0;
  DISP_SPRT ds;
  undefined auStack_124 [4];
  undefined local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int ret;
  undefined *local_fc;
  undefined *local_f8;
  
  if (fl == 0) {
    time1_201 = 0x78;
    cnt_202 = 0;
    flash_fr_205 = 0x75;
    if ((plyr_wrk.sta & 1) != 0) {
      time1_201 = 4;
      flash_fr_205 = 1;
    }
    alp1_203 = 0;
    alp2_204 = 0;
    fl_cnt_206 = flash_fr_205;
  }
  if (fl == 3) {
    local_290._16_8_ = DAT_00351538;
    local_290.tex0 = DAT_00351528;
    local_290._8_8_ = DAT_00351530;
    local_290._24_8_ = DAT_00351540;
    DStack_320.alpha = 0x80 - (char)(((uint)alp2_204 << 7) / 0x14);
    LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
    CopySprDToSpr(&DStack_320,&local_290);
    DStack_320.zbuf = 0x100008c;
    DStack_320.tex0 = 0x2000000228029a40;
    DStack_320.test = 0x50003;
    DStack_320.alphar = 0x44;
    DStack_320.pri = 0x80000;
    DStack_320.z = 0xff7ffff;
    DStack_320.x = -0.5;
    fVar5 = __floatdisf(sys_wrk.count + 1 & 1);
    DStack_320.y = fVar5 * 0.5 + -1.0;
    DStack_320.scw = 1.0;
    DStack_320.sch = 2.0;
    DStack_320.csx = -0.5;
    fVar5 = __floatdisf(sys_wrk.count + 1 & 1);
    DStack_320.b = 0x80;
    DStack_320.r = 0x80;
    DStack_320.csy = fVar5 * 0.5 + -1.0;
    DStack_320.g = 0x80;
    DispSprD(&DStack_320);
    if (alp2_204 < 0x14) {
      alp2_204 = alp2_204 + 1;
    }
    else {
      alp2_204 = 0x14;
    }
    ret = 3;
  }
  else {
    puVar3 = auStack_270 + 7;
    uVar2 = (uint)puVar3 & 7;
    *(ulong *)(puVar3 + -uVar2) =
         *(ulong *)(puVar3 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
    _auStack_270 = DAT_003514b0;
    uVar2 = (uint)auStack_261 & 7;
    puVar1 = (ulong *)(auStack_261 + -uVar2);
    *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
    stack0xfffffd98 = (undefined  [8])DAT_003514b8;
    uVar2 = (uint)auStack_259 & 7;
    puVar1 = (ulong *)(auStack_259 + -uVar2);
    *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
    stack0xfffffda0 = (undefined  [8])DAT_003514c0;
    CopySqrDToSqr((DISP_SQAR *)local_250,(SQAR_DAT *)(DISP_SPRT *)auStack_270);
    fVar5 = 128.0;
    local_f8 = auStack_124;
    local_fc = local_120 + 4;
    local_1e8 = 0x3c0;
    local_250._52_4_ = 0xffffc3f;
    local_250._88_8_ = 0x100008c;
    local_250._32_4_ = 0x200;
    local_250._48_4_ = 0x150;
    local_250._20_4_ = 1.793662e-43;
    local_250._28_4_ = 0x80;
    local_250._36_4_ = 0x50;
    iVar4 = 0;
    local_250._24_4_ = 7.174648e-43;
    local_250._40_8_ = 0x15000000050;
    do {
      local_1e4[iVar4] = 0;
      puVar3 = local_1dc + iVar4;
      local_1e0[iVar4] = 0;
      iVar4 = iVar4 + 1;
      *puVar3 = 0;
    } while (iVar4 < 4);
    local_1d8 = 0x80;
    DispSqrD((DISP_SQAR *)local_250);
    if (hint_3d == 0) {
      LocalCopyLtoL(0x2d00,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    }
    else {
      LocalCopyBtoL(0,(int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
    }
    if ((fl == 1) && (0 < fl_cnt_206)) {
      if (flash_fr_205 == 0) {
        trap(7);
      }
      fVar7 = DAT_00356020;
      fVar6 = SgSinf(((float)((fl_cnt_206 * 0x5a) / flash_fr_205) * DAT_00356020) / 180.0);
      if (flash_fr_205 == 0) {
        trap(7);
      }
      col = (uchar)(int)(fVar6 * 160.0);
      fVar7 = SgSinf(((float)((fl_cnt_206 * 0x5a) / flash_fr_205) * fVar7) / 180.0);
      SubBlur(1,(uchar)(int)(fVar7 * 56.0),1.0,180.0,320.0,112.0);
      SubContrast2(col,col);
      fl_cnt_206 = fl_cnt_206 + -1;
    }
    if ((fl == 2) && (hint_3d != 0)) {
      local_1d0.tex0 = DAT_00351548;
      local_1d0._8_8_ = DAT_00351550;
      local_1d0._16_8_ = DAT_00351558;
      local_1d0._24_8_ = DAT_00351560;
      CopySprDToSpr((DISP_SPRT *)auStack_270,&local_1d0);
      local_250._72_8_ = 0x10100008c;
      local_250._40_8_ = 0x200000022802ad00;
      local_250._80_8_ = 0x30003;
      local_250._64_8_ = 0x44;
      local_250._88_8_ = CONCAT44(local_250._92_4_,0x460);
      local_250._12_4_ = 2.524186e-29;
      local_250._4_4_ = -0.5;
      fVar7 = __floatdisf(sys_wrk.count + 1 & 1);
      local_250._8_4_ = fVar7 * 0.5 + -1.0;
      local_250._16_4_ = 1.0;
      local_250._20_4_ = 2.0;
      auStack_259._5_4_ = -0.5;
      fVar7 = __floatdisf(sys_wrk.count + 1 & 1);
      local_250._88_8_ = local_250._88_8_ & 0xffffffffffffff | (ulong)alp1_203 << 0x38;
      local_250._0_4_ = fVar7 * 0.5 + -1.0;
      DispSprD((DISP_SPRT *)auStack_270);
      uVar2 = alp1_203 + 4;
      if (0x80 < uVar2) {
        uVar2 = 0x80;
      }
      alp1_203 = (byte)uVar2;
    }
    local_118 = DAT_00351530;
    if ((char)alp1_203 < '\0') {
      ret = 2;
    }
    local_120 = (undefined  [8])DAT_00351528;
    local_110 = DAT_00351538;
    local_108 = DAT_00351540;
    CopySprDToSpr(&ds,(SPRT_DAT *)local_120);
    if (hint_3d == 0) {
      ds.tex0 = 0x200000022802ad00;
    }
    else {
      ds.tex0 = 0x2000000228029a40;
      LocalCopyBtoL(0,0x1a40);
    }
    ds.test = 0x5000d;
    ds.zbuf = 0x100008c;
    ds.alphar = 0x44;
    ds._120_8_ = CONCAT44(ds._124_4_,0x440);
    ds.z = 0xffffbbf;
    ds.x = -0.5;
    fVar7 = __floatdisf(sys_wrk.count + 1 & 1);
    ds.y = fVar7 * 0.5 + -1.0;
    ds.scw = 1.0;
    ds.sch = 2.0;
    ds.csx = -0.5;
    fVar7 = __floatdisf(sys_wrk.count + 1 & 1);
    ds._120_6_ = CONCAT15(0x40,CONCAT14(0x40,ds.pri));
    ds._120_8_ = ds._120_8_ & 0xff00000000000000 | 0x40000000000000 | (ulong)ds._120_6_;
    ds.csy = fVar7 * 0.5 + -1.0;
    DispSprD(&ds);
    puVar3 = (undefined *)((int)&ds.u + 3);
    uVar2 = (uint)puVar3 & 7;
    puVar1 = (ulong *)(puVar3 + -uVar2);
    *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
    ds._0_8_ = DAT_003514b0;
    puVar3 = (undefined *)((int)&ds.w + 3);
    uVar2 = (uint)puVar3 & 7;
    puVar1 = (ulong *)(puVar3 + -uVar2);
    *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
    ds._8_8_ = DAT_003514b8;
    puVar3 = (undefined *)((int)&ds.crx + 3);
    uVar2 = (uint)puVar3 & 7;
    puVar1 = (ulong *)(puVar3 + -uVar2);
    *puVar1 = *puVar1 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
    ds._16_8_ = DAT_003514c0;
    CopySqrDToSqr((DISP_SQAR *)&ds.csy,(SQAR_DAT *)&ds);
    ds._120_8_ = 0x100008c;
    iVar4 = 0;
    ds._128_8_ = 0x5000d;
    ds.test = 0x84;
    ds.tex1._4_4_ = 0xffffbdf;
    do {
      local_f8[iVar4] = 0x30;
      puVar3 = local_fc + iVar4;
      *(undefined *)((int)&((SPRT_DAT *)local_120)->tex0 + iVar4) = 0x30;
      iVar4 = iVar4 + 1;
      *puVar3 = 0x30;
    } while (iVar4 < 4);
    local_118 = CONCAT71(local_118._1_7_,200);
    DispSqrD((DISP_SQAR *)&ds.csy);
    SubFadeFrame('`',0x400);
    fVar7 = __floatdisf(sys_wrk.count & 1);
    fVar7 = fVar7 * 0.5;
    fVar8 = fVar5 + 384.0;
    fVar6 = (fVar5 - 6.0) + 0.0;
    x2 = (fVar8 + 6.0) - 0.0;
    y2 = fVar7 + 80.0;
    SetPanel(0x3c0,fVar6,fVar7 + 74.0,x2,y2,0xcf,0xbd,0xa1,0x80);
    y1 = 336.0 - fVar7;
    SetPanel(0x3c0,fVar6,y1,x2,342.0 - fVar7,0xcf,0xbd,0xa1,0x80);
    SetPanel(0x3c0,fVar6,y2,fVar5 + 0.0,y1,0xcf,0xbd,0xa1,0x80);
    SetPanel(0x3c0,fVar8 - 0.0,y2,x2,y1,0xcf,0xbd,0xa1,0x80);
  }
  return ret;
}

void DispPhotoFrame2() {
	float x;
	float y;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  float fVar6;
  float x1;
  float fVar7;
  float x2;
  float fVar8;
  float y2;
  float fVar9;
  float y1;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003514b0;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003514b8;
  uVar2 = (uint)&sq.alpha & 7;
  puVar4 = &sq.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003514c0;
  CopySqrDToSqr(&dq,&sq);
  dq.zbuf = 0x100008c;
  dq.test = 0x5000d;
  dq.alphar = 0x84;
  fVar9 = 80.0;
  iVar5 = 0;
  do {
    dq.r[iVar5] = '@';
    puVar4 = dq.b + iVar5;
    dq.g[iVar5] = '@';
    iVar5 = iVar5 + 1;
    *puVar4 = '@';
  } while (iVar5 < 4);
  dq.pri = 0x420;
  dq.z = 0xffffbdf;
  dq.x[1] = 0x280;
  dq.x[3] = 0x280;
  dq.alpha = 0x80;
  dq.x[0] = 0;
  dq.x[2] = 0;
  dq.y[3] = 0x50;
  dq.y[0] = 0;
  dq.y[1] = 0;
  dq.y[2] = 0x50;
  DispSqrD(&dq);
  fVar8 = 6.0;
  fVar6 = fVar9 + 256.0;
  dq.x[3] = 0x280;
  dq.x[1] = 0x280;
  dq.x[0] = 0;
  dq.y[0] = (int)fVar6;
  dq.x[2] = 0;
  y2 = fVar9 + 1.0;
  y1 = fVar6 - 1.0;
  dq.y[2] = (int)((float)dq.y[0] + (448.0 - fVar6));
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD(&dq);
  dq.y[0] = 0x50;
  dq.y[1] = 0x50;
  dq.y[2] = 0x150;
  dq.y[3] = 0x150;
  dq.x[0] = 0;
  dq.x[2] = 0;
  dq.x[3] = 0x80;
  dq.x[1] = 0x80;
  DispSqrD(&dq);
  fVar7 = 512.0;
  dq.y[1] = 0x50;
  dq.y[3] = 0x150;
  dq.y[0] = 0x50;
  dq.y[2] = 0x150;
  dq.x[0] = 0x200;
  dq.x[2] = 0x200;
  dq.x[3] = 0x280;
  dq.x[1] = 0x280;
  DispSqrD(&dq);
  SubFadeFrame('`',0x400);
  x1 = (128.0 - fVar8) + 2.0;
  x2 = (fVar7 + fVar8) - 2.0;
  SetPanel(0x3c0,x1,(fVar9 - fVar8) + 1.0,x2,y2,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,y1,x2,(fVar6 + fVar8) - 1.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,y2,130.0,y1,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,fVar7 - 2.0,y2,x2,y1,0xff,0xff,0xff,0x80);
  return;
}

void DispPhotoFrame2_2(int type) {
	float x;
	float y;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	float szw;
	float szh;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  float fVar6;
  float x2;
  float x1;
  float fVar7;
  float fVar8;
  float fVar9;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003514b0;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003514b8;
  uVar2 = (uint)&sq.alpha & 7;
  puVar4 = &sq.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003514c0;
  CopySqrDToSqr(&dq,&sq);
  fVar9 = 128.0;
  dq.zbuf = 0x100008c;
  dq.test = 0x5000d;
  dq.alphar = 0x44;
  iVar5 = 0;
  do {
    dq.r[iVar5] = '\0';
    puVar4 = dq.b + iVar5;
    dq.g[iVar5] = '\0';
    iVar5 = iVar5 + 1;
    *puVar4 = '\0';
  } while (iVar5 < 4);
  dq.pri = 0x420;
  dq.z = 0xffffbdf;
  dq.alpha = 0x80;
  dq.x[0] = 0;
  dq.x[2] = 0;
  dq.y[3] = 0x50;
  dq.y[0] = 0;
  dq.y[1] = 0;
  dq.x[1] = 0x280;
  dq.x[3] = 0x280;
  dq.y[2] = 0x50;
  DispSqrD(&dq);
  dq.x[3] = 0x280;
  dq.x[0] = 0;
  dq.x[2] = 0;
  dq.x[1] = 0x280;
  dq.y[0] = 0x150;
  dq.y[1] = 0x150;
  dq.y[3] = 0x1c0;
  dq.y[2] = 0x1c0;
  DispSqrD(&dq);
  dq.x[0] = 0;
  dq.x[2] = 0;
  dq.y[0] = 0x50;
  dq.x[1] = (int)(fVar9 + 0.0);
  dq.y[1] = 0x50;
  dq.y[2] = 0x150;
  dq.y[3] = 0x150;
  dq.x[3] = dq.x[1];
  DispSqrD(&dq);
  dq.y[1] = 0x50;
  dq.y[3] = 0x150;
  dq.y[0] = 0x50;
  dq.x[0] = (int)(fVar9 + 384.0);
  dq.y[2] = 0x150;
  dq.x[1] = (int)((float)dq.x[0] + (640.0 - (fVar9 + 384.0)));
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  DispSqrD(&dq);
  if (type == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 3;
    if (type != 1) {
      iVar5 = ers_type;
    }
  }
  SetNegaFilter(iVar5);
  fVar6 = 6.0;
  SubFadeFrame('`',0x400);
  fVar8 = 2.0;
  fVar7 = fVar9 + 384.0;
  x1 = (fVar9 - fVar6) + 2.0;
  x2 = (fVar7 + fVar6) - 2.0;
  SetPanel(0x3c0,x1,(80.0 - fVar6) + 1.0,x2,81.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,335.0,x2,(fVar6 + 336.0) - 1.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,81.0,fVar9 + fVar8,335.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,fVar7 - fVar8,81.0,x2,335.0,0xff,0xff,0xff,0x80);
  return;
}

void DispPhotoFrame2_3(int type) {
	float x;
	float y;
	DISP_SPRT ds;
	SPRT_DAT sd;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	float szw;
	float szh;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  float *s;
  float fVar6;
  float x2;
  float x1;
  float fVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT ds;
  undefined local_e4 [4];
  undefined local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  local_e0 = (undefined  [8])DAT_00351528;
  local_d8 = DAT_00351530;
  local_d0 = DAT_00351538;
  local_c8 = DAT_00351540;
  LocalCopyBtoL(0,0x1a40);
  ds.scw = 1.0;
  CopySprDToSpr(&ds,(SPRT_DAT *)local_e0);
  ds.tex0 = 0x2000000228029a40;
  ds.zbuf = 0x10100008c;
  ds.test = 0x30003;
  ds.alphar = 0x44;
  ds.z = 0xffffbcf;
  ds._120_8_ = 0x8080808000000430;
  ds.x = 0.0;
  ds.y = 0.0;
  ds._0_8_ = (ulong)ds.att;
  ds._8_8_ = 0x28000000000;
  ds.h = 0x28;
  ds.sch = 2.0;
  ds.csx = 0.0;
  ds.csy = 0.0;
  DispSprD(&ds);
  fVar9 = 128.0;
  ds._8_8_ = 0x280000000a8;
  ds.h = 0x38;
  ds.csy = 336.0;
  ds.x = 0.0;
  ds.y = 336.0;
  ds._0_8_ = ds._0_8_ & 0xffffffff;
  ds.sch = 2.0;
  ds.csx = 0.0;
  DispSprD(&ds);
  ds.x = 0.0;
  ds.y = 80.0;
  ds._0_8_ = ds._0_8_ & 0xffffffff;
  ds._8_8_ = 0x8000000028;
  ds.h = 0x80;
  ds.sch = 2.0;
  ds.csx = 0.0;
  ds.csy = 80.0;
  DispSprD(&ds);
  ds._0_8_ = CONCAT44(0x200,ds.att);
  ds._16_8_ = CONCAT44(ds.crx,0x80);
  ds.sch = 2.0;
  ds.csx = 512.0;
  ds.x = 512.0;
  ds.y = 80.0;
  ds._8_8_ = 0x8000000028;
  ds.csy = 80.0;
  DispSprD(&ds);
  s = &ds.csy;
  puVar1 = (undefined *)((int)&ds.u + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
  ds._0_8_ = DAT_003514b0;
  puVar1 = (undefined *)((int)&ds.w + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
  ds._8_8_ = DAT_003514b8;
  puVar1 = (undefined *)((int)&ds.crx + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
  ds._16_8_ = DAT_003514c0;
  CopySqrDToSqr((DISP_SQAR *)s,(SQAR_DAT *)&ds);
  ds._120_8_ = 0x100008c;
  ds._128_8_ = 0x5000d;
  ds.test = 0x84;
  iVar5 = 0;
  do {
    local_e4[iVar5] = 0x30;
    iVar4 = iVar5 + 4;
    *(undefined *)((int)&((SPRT_DAT *)local_e0)->tex0 + iVar5) = 0x30;
    iVar5 = iVar5 + 1;
    local_e0[iVar4] = 0x30;
  } while (iVar5 < 4);
  ds.tex1._4_4_ = 0xffffbdf;
  local_d8 = CONCAT71(local_d8._1_7_,0x80);
  ds.sch = 0.0;
  ds._60_4_ = 0.0;
  ds.tex1._0_4_ = 0x50;
  ds.gftg._4_4_ = 0;
  ds.rot = 8.96831e-43;
  ds.gftg._0_4_ = 8.96831e-43;
  ds.tex0 = 0x5000000000;
  DispSqrD((DISP_SQAR *)s);
  ds.gftg._0_4_ = 8.96831e-43;
  ds.sch = 0.0;
  ds._60_4_ = 0.0;
  ds.rot = 8.96831e-43;
  ds.gftg._4_4_ = 0x150;
  ds.tex1._0_4_ = 0x1c0;
  ds.tex0 = 0x1c000000150;
  DispSqrD((DISP_SQAR *)s);
  ds.sch = 0.0;
  ds._60_4_ = 0.0;
  ds.gftg._4_4_ = 0x50;
  ds.rot = (float)(int)(fVar9 + 0.0);
  ds.tex0 = 0x15000000050;
  ds.tex1._0_4_ = 0x150;
  ds.gftg._0_4_ = ds.rot;
  DispSqrD((DISP_SQAR *)s);
  ds.tex1._0_4_ = 0x150;
  ds.gftg._4_4_ = 0x50;
  ds.sch = (float)(int)(fVar9 + 384.0);
  ds.tex0 = 0x15000000050;
  ds.rot = (float)(int)((float)(int)ds.sch + (640.0 - (fVar9 + 384.0)));
  ds._60_4_ = ds.sch;
  ds.gftg._0_4_ = ds.rot;
  DispSqrD((DISP_SQAR *)s);
  if (type == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 3;
    if (type != 1) {
      iVar5 = ers_type;
    }
  }
  SetNegaFilter(iVar5);
  fVar6 = 6.0;
  SubFadeFrame('`',0x400);
  fVar8 = 2.0;
  fVar7 = fVar9 + 384.0;
  x1 = (fVar9 - fVar6) + 2.0;
  x2 = (fVar7 + fVar6) - 2.0;
  SetPanel(0x3c0,x1,(80.0 - fVar6) + 1.0,x2,81.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,335.0,x2,(fVar6 + 336.0) - 1.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,x1,81.0,fVar9 + fVar8,335.0,0xff,0xff,0xff,0x80);
  SetPanel(0x3c0,fVar7 - fVar8,81.0,x2,335.0,0xff,0xff,0xff,0x80);
  return;
}

void SetNegaFilter(int type) {
	float CHANGE_TIME;
	float x;
	float y;
	float y11;
	float y12;
	float y21;
	float y22;
	float f;
	int endf;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  float in_f21;
  float unaff_f20;
  float in_f23;
  float unaff_f22;
  float fVar6;
  SQAR_DAT sq;
  DISP_SQAR DStack_150;
  DISP_SQAR dq;
  
  fVar6 = 128.0;
  switch(type) {
  default:
    goto switchD_00203bf0_caseD_0;
  case 1:
  case 2:
    if (0x3b < (ushort)plyr_wrk.ap_timer) {
LAB_00203d44:
      unaff_f20 = 0.0;
      in_f21 = 80.0;
      in_f23 = 336.0;
      unaff_f22 = 0.0;
      goto switchD_00203bf0_caseD_0;
    }
    if (0x3a < (ushort)plyr_wrk.ap_timer) {
      if (type != 1) {
        in_f21 = 80.0;
        in_f23 = 336.0;
        unaff_f20 = 128.0 - (float)(((ushort)plyr_wrk.ap_timer - 0x3a) * 0x80) / 1.0;
        unaff_f22 = -unaff_f20;
        goto switchD_00203bf0_caseD_0;
      }
      unaff_f22 = 128.0 - (float)(((ushort)plyr_wrk.ap_timer - 0x3a) * 0x80) / 1.0;
LAB_00203d08:
      in_f21 = 208.0;
      unaff_f20 = -unaff_f22;
      in_f23 = in_f21;
      goto switchD_00203bf0_caseD_0;
    }
    break;
  case 4:
  case 5:
    if ((ushort)plyr_wrk.ap_timer < 0x3c) {
      if (0x3a < (ushort)plyr_wrk.ap_timer) {
        if (type != 4) {
          in_f21 = 80.0;
          in_f23 = 336.0;
          unaff_f20 = (float)(((ushort)plyr_wrk.ap_timer - 0x3a) * 0x80) / 1.0;
          unaff_f22 = -unaff_f20;
          goto switchD_00203bf0_caseD_0;
        }
        unaff_f22 = (float)(((ushort)plyr_wrk.ap_timer - 0x3a) * 0x80) / 1.0;
        goto LAB_00203d08;
      }
      goto LAB_00203d44;
    }
  }
  unaff_f20 = 128.0;
  in_f21 = 80.0;
  in_f23 = 336.0;
  unaff_f22 = -128.0;
switchD_00203bf0_caseD_0:
  switch(type) {
  case 1:
  case 2:
  case 4:
  case 5:
    puVar1 = (undefined *)((int)&sq.h + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
    sq._0_8_ = DAT_003514b0;
    puVar1 = (undefined *)((int)&sq.y + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
    sq._8_8_ = DAT_003514b8;
    uVar2 = (uint)&sq.alpha & 7;
    puVar4 = &sq.alpha + -uVar2;
    *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
    sq._16_8_ = DAT_003514c0;
    CopySqrDToSqr(&dq,&sq);
    dq.alphar = 0x84;
    iVar5 = 0;
    do {
      dq.r[iVar5] = '`';
      puVar4 = dq.b + iVar5;
      dq.g[iVar5] = '`';
      iVar5 = iVar5 + 1;
      *puVar4 = '`';
    } while (iVar5 < 4);
    dq.pri = 0x420;
    dq.z = 0xffffbdf;
    if (unaff_f20 != 0.0) {
      dq.y[0] = (int)in_f21;
      dq.x[0] = (int)fVar6;
      dq.x[1] = dq.x[0] + 0x180;
      dq.y[2] = (int)((float)dq.y[0] + unaff_f20);
      dq.x[2] = dq.x[0];
      dq.x[3] = dq.x[1];
      dq.y[1] = dq.y[0];
      dq.y[3] = dq.y[2];
      DispSqrD(&dq);
    }
    if (unaff_f22 != 0.0) {
      dq.y[0] = (int)in_f23;
      dq.x[0] = (int)fVar6;
      dq.x[1] = dq.x[0] + 0x180;
      dq.y[2] = (int)((float)dq.y[0] + unaff_f22);
      dq.x[2] = dq.x[0];
      dq.x[3] = dq.x[1];
      dq.y[1] = dq.y[0];
      dq.y[3] = dq.y[2];
      DispSqrD(&dq);
    }
    break;
  case 3:
    puVar1 = (undefined *)((int)&sq.h + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b0 >> (7 - uVar2) * 8;
    sq._0_8_ = DAT_003514b0;
    puVar1 = (undefined *)((int)&sq.y + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003514b8 >> (7 - uVar2) * 8;
    sq._8_8_ = DAT_003514b8;
    uVar2 = (uint)&sq.alpha & 7;
    puVar4 = &sq.alpha + -uVar2;
    *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003514c0 >> (7 - uVar2) * 8;
    sq._16_8_ = DAT_003514c0;
    CopySqrDToSqr(&DStack_150,&sq);
    DStack_150.alphar = 0x84;
    iVar5 = 0;
    do {
      DStack_150.r[iVar5] = '`';
      puVar4 = DStack_150.b + iVar5;
      DStack_150.g[iVar5] = '`';
      iVar5 = iVar5 + 1;
      *puVar4 = '`';
    } while (iVar5 < 4);
    DStack_150.x[0] = (int)fVar6;
    DStack_150.pri = 0x430;
    DStack_150.x[1] = DStack_150.x[0] + 0x180;
    DStack_150.z = 0xffffbcf;
    DStack_150.y[3] = 0x150;
    DStack_150.y[0] = 0x50;
    DStack_150.y[1] = 0x50;
    DStack_150.y[2] = 0x150;
    DStack_150.x[2] = DStack_150.x[0];
    DStack_150.x[3] = DStack_150.x[1];
    DispSqrD(&DStack_150);
  }
  return;
}

void PhotoMake() {
	int num2;
	STR_DAT sd;
	DISP_STR ds;
	int num;
	STR_DAT sd;
	DISP_STR ds;
	int num;
	u_char *strp;
	static int fl = 0;
	
  short sVar1;
  uint uVar2;
  int iVar3;
  uchar *s;
  uchar type;
  uint uVar4;
  STR_DAT sd;
  DISP_STR DStack_d0;
  DISP_STR ds;
  
  if (plyr_wrk.mode != 1) {
    return;
  }
  switch(photo_wrk.mode) {
  case 4:
    iVar3 = GetSavePhotoNo();
    photo_wrk.adr_no = (byte)iVar3;
    break;
  case 5:
    if (hint_3d == 0) {
      if (pic_save_flag != 1) {
        DispPhotoFrame1(1);
        if (hint_2d != 0) {
          return;
        }
        if ((plyr_wrk._0_8_ & 0x101) != 0) {
          return;
        }
        uVar2 = (uint)pfile_wrk.pic_num;
        sVar1 = pfile_wrk.pic[uVar2 - 1].subject[0];
        if (sVar1 == 0) {
          return;
        }
        sd.str = GetSubjectNameAddr(sVar1,pfile_wrk.pic[uVar2 - 1].subject[1],
                                    (ushort)pfile_wrk.pic[uVar2 - 1].msn_no);
        iVar3 = GetStrWidth((uchar *)sd.str);
        CopyStrDToStr(&DStack_d0,&sd);
        DStack_d0.pos_x = 0x140 - iVar3 / 2;
        DStack_d0.pos_y = 0x168;
        DStack_d0.alpha = 0x80;
        DStack_d0.pri = 0xa0;
        DStack_d0.r = 0x80;
        DStack_d0.g = 0x80;
        DStack_d0.b = 0x80;
        SetMessageV2(&DStack_d0);
        return;
      }
      DispPhotoFrame0();
      LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x2d00);
      DispPhotoFrame1(0);
      DispPhotoFrame1(1);
    }
    else {
      if (pic_save_flag == 0) {
        DispPhotoFrame1(1);
        return;
      }
      DispPhotoFrame0();
      if (pic_save_flag == 1) {
        stop_effects = pic_save_flag;
        LocalCopyLtoB2(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
        LocalCopyLtoL((int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20),
                      (int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
        FModeScreenEffect();
        furn_disp_flg = 0;
        pic_save_flag = 2;
        return;
      }
      if (pic_save_flag != 2) {
        return;
      }
      LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x2d00);
      DispPhotoFrame1(0);
      stop_effects = 0;
    }
    pic_save_flag = 0;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    break;
  case 6:
    DispPhotoFrame1(2);
    uVar2 = hint_2d_num;
    if ((hint_2d == 0) && (uVar2 = 0, hint_3d != 0)) {
      uVar2 = hint_3d_num;
    }
    if (hint_2d != 0) {
      DrawPhotoHinttex2(0,0x470,hint_2d_num);
    }
    if ((hint_rea != 0) && ((plyr_wrk._0_8_ & 0x101) == 0)) {
      uVar4 = (uint)pfile_wrk.pic_num;
      sVar1 = pfile_wrk.pic[uVar4 - 1].subject[0];
      if (sVar1 != 0) {
        sd.str = GetSubjectNameAddr(sVar1,pfile_wrk.pic[uVar4 - 1].subject[1],
                                    (ushort)pfile_wrk.pic[uVar4 - 1].msn_no);
        iVar3 = GetStrWidth((uchar *)sd.str);
        CopyStrDToStr(&ds,&sd);
        ds.pos_x = 0x140 - iVar3 / 2;
        ds.pos_y = 0x168;
        ds.alpha = 0x80;
        ds.pri = 0xa0;
        ds.r = 0x80;
        ds.g = 0x80;
        ds.b = 0x80;
        SetMessageV2(&ds);
      }
    }
    if (plyr_wrk.ap_timer != 1) {
      return;
    }
    if (hint_rea != 0) {
      return;
    }
    if (hint_2d != 0) {
      poss_file[1][uVar2] = '\x02';
    }
    if ((int)uVar2 < 100) {
      type = ')';
      uVar4 = uVar2;
LAB_002043f8:
      s = (uchar *)GetIngameMSGAddr(type,uVar4);
    }
    else {
      uVar4 = uVar2 - 100;
      type = '*';
      if (uVar4 < 0x32) goto LAB_002043f8;
      s = (uchar *)GetIngameMSGAddr('+',uVar2 - 200);
    }
    if (fl_222 == 0) {
      fl_222 = 1;
      SetMessageV3_2(s,0x50);
      if (fl_222 == 0) {
        return;
      }
    }
    SetMessageV3_2(s,0x50);
    iVar3 = MesStatusCheck();
    if (iVar3 == 0) {
      fl_222 = 0;
    }
    break;
  case 7:
    DispPhotoFrame1(2);
    DrawPhotoHinttex2(1,0x470,hint_2d_num);
    break;
  case 8:
    LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
    TakePhotoFromScreen();
    CompPhotoFromWorkArea((uint)photo_wrk.adr_no);
    WaitFrameTop(1);
    MakeSPhotoFromWorkArea((uint)photo_wrk.adr_no);
    WaitFrameTop(0);
    LocalCopyLtoL(0x1a40,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
    DrawAll2D();
    DispPhotoFrame1(2);
    SetBlurOff();
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    DispPhotoFrame00(1);
    if (hint_rea != 0) {
      SetFurnAttrEve((short)hint_2d_num + 0xe3,0x20,0);
      SetFurnAttrEve((short)hint_2d_num + 0xe3,0x80,0);
      FurnActOffEve((short)hint_2d_num + 0xe3);
    }
  }
  return;
}

void PhotoMake_EneDead() {
	int i;
	int num1;
	int num2;
	
  uchar *puVar1;
  int iVar2;
  
  if (plyr_wrk.mode != 1) {
    return;
  }
  switch(photo_wrk.mode) {
  case 4:
    iVar2 = GetSavePhotoNo();
    photo_wrk.adr_no = (byte)iVar2;
    stop_effects = 1;
    FModeScreenEffect();
    break;
  case 5:
    if (pic_save_flag != 0) {
      LocalCopyLtoB2(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
      SetWhiteIn2(1);
      pic_save_flag = 0;
    }
    FModeScreenEffect();
    DispPhotoFrame0();
    if (frm_type == 1) {
      DispPhotoFrame2_2(-1);
      return;
    }
    if (1 < frm_type) {
      if (frm_type != 2) {
        return;
      }
      DispPhotoFrame2_3(-1);
      return;
    }
    goto LAB_00204720;
  case 6:
    FModeScreenEffect();
    DispPhotoFrame0();
    if (hint_2d != 0) {
      iVar2 = 3;
      puVar1 = photo_wrk.spcl_pht_no + 1;
      do {
        if ((*puVar1 < 100) && ((*(uchar (*) [2])(puVar1 + -1))[0] == 6)) {
          DrawPhotoHinttex2(0,0x470,(uint)*puVar1);
        }
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + 2;
      } while (-1 < iVar2);
    }
    if (frm_type == 1) {
      DispPhotoFrame2_2(1);
      return;
    }
    if (1 < frm_type) {
      if (frm_type != 2) {
        return;
      }
      DispPhotoFrame2_3(1);
      return;
    }
LAB_00204720:
    if (frm_type == 0) {
      DispPhotoFrame2();
    }
    break;
  case 8:
    FModeScreenEffect();
    LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
    TakePhotoFromScreen();
    CompPhotoFromWorkArea((uint)photo_wrk.adr_no);
    MakeSPhotoFromWorkArea((uint)photo_wrk.adr_no);
    LocalCopyLtoL(0x1a40,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
    DrawAll2D();
    FModeScreenEffect();
    DispPhotoFrame0();
    if (frm_type == 1) {
      DispPhotoFrame2_2(1);
    }
    else if (frm_type < 2) {
      if (frm_type == 0) {
        DispPhotoFrame2();
      }
    }
    else if (frm_type == 2) {
      DispPhotoFrame2_3(1);
    }
    SetBlurOff();
    break;
  case 9:
    stop_effects = 0;
  }
  return;
}

void PhotoMakeSaveInit() {
  pic_save_flag = 0;
  return;
}

void DrawPicture(int pri, int addr, int n, float x, float y, float szw, float szh, u_char alp) {
  DrawPhotoFromCompress(n,pri,1,(int)x,(int)y,(int)szw,(int)szh,0x80);
  return;
}

void CopyPicture(int addri, int ni, int addro, int no) {
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = 0x69a8;
  puVar3 = (undefined2 *)(no * 0xd350 + addro);
  puVar2 = (undefined2 *)(ni * 0xd350 + addri);
  do {
    uVar1 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return;
}

void ReqSavePicture() {
  pic_save_flag = 1;
  return;
}

void PhotoMakeSave() {
  short sVar1;
  uint uVar2;
  int iVar3;
  uchar *s;
  uchar type;
  uint uVar4;
  STR_DAT SStack_100;
  DISP_STR DStack_d0;
  DISP_STR DStack_90;
  
  if (plyr_wrk.mode != 1) {
    return;
  }
  switch(photo_wrk.mode) {
  case 4:
    iVar3 = GetSavePhotoNo();
    photo_wrk.adr_no = (byte)iVar3;
    break;
  case 5:
    if (hint_3d == 0) {
      if (pic_save_flag != 1) {
        DispPhotoFrame1(1);
        if (hint_2d != 0) {
          return;
        }
        if ((plyr_wrk._0_8_ & 0x101) != 0) {
          return;
        }
        uVar2 = (uint)pfile_wrk.pic_num;
        sVar1 = pfile_wrk.pic[uVar2 - 1].subject[0];
        if (sVar1 == 0) {
          return;
        }
        SStack_100.str =
             GetSubjectNameAddr(sVar1,pfile_wrk.pic[uVar2 - 1].subject[1],
                                (ushort)pfile_wrk.pic[uVar2 - 1].msn_no);
        iVar3 = GetStrWidth((uchar *)SStack_100.str);
        CopyStrDToStr(&DStack_d0,&SStack_100);
        DStack_d0.pos_x = 0x140 - iVar3 / 2;
        DStack_d0.pos_y = 0x168;
        DStack_d0.alpha = 0x80;
        DStack_d0.pri = 0xa0;
        DStack_d0.r = 0x80;
        DStack_d0.g = 0x80;
        DStack_d0.b = 0x80;
        SetMessageV2(&DStack_d0);
        return;
      }
      DispPhotoFrame0();
      LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x2d00);
      DispPhotoFrame1(0);
      DispPhotoFrame1(1);
    }
    else {
      if (pic_save_flag == 0) {
        DispPhotoFrame1(1);
        return;
      }
      DispPhotoFrame0();
      if (pic_save_flag == 1) {
        stop_effects = pic_save_flag;
        LocalCopyLtoB2(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
        LocalCopyLtoL((int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20),
                      (int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20));
        FModeScreenEffect();
        furn_disp_flg = 0;
        pic_save_flag = 2;
        return;
      }
      if (pic_save_flag != 2) {
        return;
      }
      LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x2d00);
      DispPhotoFrame1(0);
      stop_effects = 0;
    }
    pic_save_flag = 0;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    break;
  case 6:
    DispPhotoFrame1(2);
    uVar2 = hint_2d_num;
    if ((hint_2d == 0) && (uVar2 = 0, hint_3d != 0)) {
      uVar2 = hint_3d_num;
    }
    if (hint_2d != 0) {
      DrawPhotoHinttex2(0,0x470,hint_2d_num);
    }
    if ((hint_rea != 0) && ((plyr_wrk._0_8_ & 0x101) == 0)) {
      uVar4 = (uint)pfile_wrk.pic_num;
      sVar1 = pfile_wrk.pic[uVar4 - 1].subject[0];
      if (sVar1 != 0) {
        SStack_100.str =
             GetSubjectNameAddr(sVar1,pfile_wrk.pic[uVar4 - 1].subject[1],
                                (ushort)pfile_wrk.pic[uVar4 - 1].msn_no);
        iVar3 = GetStrWidth((uchar *)SStack_100.str);
        CopyStrDToStr(&DStack_90,&SStack_100);
        DStack_90.pos_x = 0x140 - iVar3 / 2;
        DStack_90.pos_y = 0x168;
        DStack_90.alpha = 0x80;
        DStack_90.pri = 0xa0;
        DStack_90.r = 0x80;
        DStack_90.g = 0x80;
        DStack_90.b = 0x80;
        SetMessageV2(&DStack_90);
      }
    }
    if (plyr_wrk.ap_timer != 1) {
      return;
    }
    if (hint_rea != 0) {
      return;
    }
    if (hint_2d != 0) {
      poss_file[1][uVar2] = '\x02';
    }
    if ((int)uVar2 < 100) {
      type = ')';
      uVar4 = uVar2;
LAB_002043f8:
      s = (uchar *)GetIngameMSGAddr(type,uVar4);
    }
    else {
      uVar4 = uVar2 - 100;
      type = '*';
      if (uVar4 < 0x32) goto LAB_002043f8;
      s = (uchar *)GetIngameMSGAddr('+',uVar2 - 200);
    }
    if (fl_222 == 0) {
      fl_222 = 1;
      SetMessageV3_2(s,0x50);
      if (fl_222 == 0) {
        return;
      }
    }
    SetMessageV3_2(s,0x50);
    iVar3 = MesStatusCheck();
    if (iVar3 == 0) {
      fl_222 = 0;
    }
    break;
  case 7:
    DispPhotoFrame1(2);
    DrawPhotoHinttex2(1,0x470,hint_2d_num);
    break;
  case 8:
    LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
    TakePhotoFromScreen();
    CompPhotoFromWorkArea((uint)photo_wrk.adr_no);
    WaitFrameTop(1);
    MakeSPhotoFromWorkArea((uint)photo_wrk.adr_no);
    WaitFrameTop(0);
    LocalCopyLtoL(0x1a40,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x26) >> 0x20));
    DrawAll2D();
    DispPhotoFrame1(2);
    SetBlurOff();
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    DispPhotoFrame00(1);
    if (hint_rea != 0) {
      SetFurnAttrEve((short)hint_2d_num + 0xe3,0x20,0);
      SetFurnAttrEve((short)hint_2d_num + 0xe3,0x80,0);
      FurnActOffEve((short)hint_2d_num + 0xe3);
    }
  }
  return;
}

void PhotoMakeSave2() {
  if (plyr_wrk.mode == 1) {
    if (photo_wrk.mode == 8) {
      RankingChkMem(pfile_wrk.pic + (pfile_wrk.pic_num - 1));
      ReSetGhostList(pfile_wrk.pic + (pfile_wrk.pic_num - 1));
    }
    else if (photo_wrk.mode == 9) {
      FModeScreenEffect();
      DispPhotoFrame00(0);
    }
  }
  return;
}
