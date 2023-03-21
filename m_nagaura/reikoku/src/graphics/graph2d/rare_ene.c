// STATUS: NOT STARTED

typedef struct {
	SPRT_DAT *spr;
	u_int num;
} RARE_ENE_1DAT;

typedef struct {
	RARE_ENE_1DAT *re1d;
	float sclw;
	float sclh;
	u_short attr;
	u_char attr_sub;
	u_char pat;
} RARE_ENE_DAT;

static SPRT_DAT rare_ene00101[0] = {
};
static SPRT_DAT rare_ene00102[0] = {
};
static RARE_ENE_1DAT rare_ene001[0] = {
};
static RARE_ENE_DAT rare_ene[0] = {
};
static u_int rare_textbl[0] = {
};
static SPRT_DAT pazz_ene00101[0] = {
};
static RARE_ENE_1DAT pazz_ene001[0] = {
};
static SPRT_DAT pazz_ene00201[0] = {
};
static RARE_ENE_1DAT pazz_ene002[0] = {
};
static SPRT_DAT pazz_ene00301[0] = {
};
static RARE_ENE_1DAT pazz_ene003[0] = {
};
static SPRT_DAT pazz_ene00401[0] = {
};
static RARE_ENE_1DAT pazz_ene004[0] = {
};
static SPRT_DAT pazz_ene00501[0] = {
};
static RARE_ENE_1DAT pazz_ene005[0] = {
};
static SPRT_DAT pazz_ene00601[0] = {
};
static RARE_ENE_1DAT pazz_ene006[0] = {
};
static SPRT_DAT pazz_ene00701[0] = {
};
static RARE_ENE_1DAT pazz_ene007[0] = {
};
static SPRT_DAT pazz_ene10301[0] = {
};
static RARE_ENE_1DAT pazz_ene103[0] = {
};
static RARE_ENE_DAT pazz_ene[0] = {
};
u_int pazz_textbl[0] = {
};

void LoadRareEneTex() {
  return;
}

void DrawRareEne_Sub(int mno, int dno, float *pos, int tblno, int ani, int al) {
	u_char alp;
	int a;
	int i;
	int j;
	int k;
	int m;
	int n;
	int tx[4];
	int ty[4];
	int offset;
	float fm;
	float rot_x;
	float rot_y;
	RARE_ENE_DAT *redp;
	RARE_ENE_1DAT *re1dp;
	SPRT_DAT *sdp;
	Q_WORDDATA qw[1024];
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR fvec[4];
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR fzero;
	int rx;
	int ry;
	int sp;
	int sub;
	float *v1;
	
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  RARE_ENE_DAT_0_ *pRVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  int iVar7;
  Q_WORDDATA *pQVar8;
  Q_WORDDATA *pQVar9;
  int (*paiVar10) [4];
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  Q_WORDDATA *pQVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  int tx [4];
  int ty [4];
  Q_WORDDATA qw [1024];
  float slm [4] [4];
  float wlm [4] [4];
  int ivec [4] [4];
  float fvec [4] [4];
  float bpos [4];
  float fzero [4];
  float rot_x;
  float rot_y;
  uchar alp;
  int n;
  int offset;
  RARE_ENE_DAT *redp;
  RARE_ENE_1DAT *re1dp;
  SPRT_DAT *sdp;
  int rx;
  int ry;
  int sp;
  int sub;
  Vector4 *local_c0;
  Matrix4x4 *local_bc;
  int local_b8;
  float (*local_b4) [4];
  uint local_b0;
  
  _alp = al & 0xff;
  bpos._0_8_ = DAT_0034cff0;
  bpos._8_8_ = _DAT_0034cff8;
  memset(fzero,0,0x10);
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
  fzero[3] = 1.0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  bpos._0_8_ = *(undefined8 *)pos;
  bpos._8_8_ = *(undefined8 *)(pos + 2);
                    /* end of inlined section */
  if (tblno < 0x80) {
    pRVar4 = &rare_ene;
  }
  else {
    pRVar4 = (RARE_ENE_DAT_0_ *)0x2f54c0;
  }
  redp = (RARE_ENE_DAT *)(pRVar4 + tblno * 0x10);
  re1dp = redp[ani].re1d;
  sp = (ushort)redp->attr >> 8 & 1;
  sdp = re1dp->spr;
  rx = (int)((*(uint *)&redp->attr & 0xc000) != 0);
  ry = (int)((*(uint *)&redp->attr & 0xa000) != 0);
  sub = (int)redp->attr_sub;
  if (((redp->attr & 0x1000U) == 0) || (plyr_wrk.mode != 1)) {
    offset = dno << 8;
    local_c0 = (Vector4 *)bpos;
    SetSprFile2(mno * 0x10000 + 0x1c90000,offset);
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    wlm[0][0] = 25.0;
    wlm[2][2] = 25.0;
    wlm[1][1] = 25.0;
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_c0);
    local_bc = (Matrix4x4 *)slm;
    sceVu0MulMatrix(local_bc,&SgWSMtx,(Matrix4x4 *)wlm);
    sceVu0RotTransPers(ivec,local_bc,fzero,0);
    if (ivec[0][2] - 0xffU < 0xffff01 &&
        (ivec[0][1] - 0x5800U < 0x5001 && ivec[0][0] - 0x4000U < 0x8001)) {
      uVar18 = 0;
      Reserve2DPacket(0x1000);
      n = ndpkt;
      local_b8 = ndpkt * 0x10;
      pQVar5 = pbuf + ndpkt;
      pQVar5->ui32[0] = 0;
      pQVar5->ui32[1] = 0;
      pQVar5->ui32[2] = 0;
      pQVar5->ui32[3] = 0;
      ndpkt = ndpkt + 1;
      Get2PosRot((float *)&camera,(float *)(Vector4 *)bpos,&rot_x,&rot_y);
      local_b4 = fvec;
      if (re1dp->num != 0) {
        do {
          sceVu0UnitMatrix((Matrix4x4 *)wlm);
          wlm[0][0] = redp->sclw * 25.0;
          wlm[2][2] = 25.0;
          wlm[1][1] = redp->sclh * 25.0;
          if (sp != 0) {
            if (sub == 1) {
              if (0.0 < rot_x) {
                fVar19 = rot_x - DAT_0035589c;
              }
              else {
                fVar19 = rot_x + DAT_003558a0;
              }
              sceVu0RotMatrixX(fVar19,(Matrix4x4 *)wlm,wlm);
              sceVu0RotMatrixY(DAT_003558a4,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
            }
            if ((sp != 0) && (sub == 3)) {
              sceVu0RotMatrixY(DAT_003558a8,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
            }
          }
          if (rx != 0) {
            sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
          }
          if (ry != 0) {
            sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
          }
          sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_c0);
          local_b0 = uVar18 + 1;
          sceVu0MulMatrix(local_bc,&SgWSMtx,(Matrix4x4 *)wlm);
          uVar11 = sdp[uVar18 * 2 + monochrome_mode].tex0;
          iVar17 = sdp[uVar18].x;
          iVar15 = sdp[uVar18].y;
          fvec[0][0] = (float)iVar17;
          fvec[0][1] = (float)iVar15;
          iVar6 = ((uint)uVar11 & 0x3fff) + offset;
          iVar7 = (((uint)(uVar11 >> 0x20) & 0x7ffe0) >> 5) + offset;
          fvec[2][1] = (float)(iVar15 + (uint)(ushort)sdp[uVar18].h);
          fvec[3][0] = (float)(iVar17 + (uint)(ushort)sdp[uVar18].w);
          fvec[1][0] = (float)(iVar17 + (uint)(ushort)sdp[uVar18].w);
          fvec[3][1] = (float)(iVar15 + (uint)(ushort)sdp[uVar18].h);
          fvec[3][3] = 1.0;
          fvec[0][2] = 0.0;
          fvec[0][3] = 1.0;
          fvec[1][2] = 0.0;
          fvec[1][3] = 1.0;
          fvec[2][2] = 0.0;
          fvec[2][3] = 1.0;
          fvec[3][2] = 0.0;
          fvec[1][1] = fvec[0][1];
          fvec[2][0] = fvec[0][0];
          sceVu0RotTransPersN(ivec,local_bc,local_b4,4,0);
          pQVar5 = pbuf;
          iVar17 = 0;
          iVar15 = 3;
          paiVar10 = ivec;
          do {
            iVar15 = iVar15 + -1;
            piVar3 = *paiVar10;
            if (0x8000 < (*paiVar10)[0] - 0x4000U) {
              iVar17 = 1;
            }
            if (0x5000 < (*paiVar10)[1] - 0x5800U) {
              iVar17 = 1;
            }
            paiVar10 = paiVar10[1];
            if (0xffff00 < piVar3[2] - 0xffU) {
              iVar17 = 1;
            }
          } while (-1 < iVar15);
          if (iVar17 == 0) {
            uVar1 = sdp[uVar18].v;
            tx[1] = ((uint)(ushort)sdp[uVar18].u + (uint)(ushort)sdp[uVar18].w) * 0x10;
            tx[0] = (uint)(ushort)sdp[uVar18].u << 4;
            ty[0] = (uint)uVar1 << 4;
            ty[1] = (uint)uVar1 << 4;
            tx[2] = (uint)(ushort)sdp[uVar18].u << 4;
            tx[3] = ((uint)(ushort)sdp[uVar18].u + (uint)(ushort)sdp[uVar18].w) * 0x10;
            ty[3] = ((uint)uVar1 + (uint)(ushort)sdp[uVar18].h) * 0x10;
            ty[2] = ((uint)(ushort)sdp[uVar18].v + (uint)(ushort)sdp[uVar18].h) * 0x10;
            pQVar16 = pbuf + ndpkt;
            pQVar9 = pbuf + ndpkt + 1;
            pQVar8 = pbuf + ndpkt + 2;
            pQVar16->ul64[1] = 0xe;
            pQVar16->ul64[0] = 0x1000000000000006;
            pQVar9->ul64[1] = 0x3f;
            pQVar9->ul64[0] = 0;
            pQVar8->ul64[1] = 6;
            pQVar8->ul64[0] =
                 uVar11 & 0xfff8001fffffc000 | (long)iVar6 & 0x3fffU |
                 ((long)iVar7 & 0x3fffU) << 0x25;
            pQVar5[ndpkt + 3].ul64[1] = 0x14;
            pQVar5[ndpkt + 3].ul64[0] = 0x121;
            pQVar5[ndpkt + 4].ul64[1] = 0x4e;
            pQVar5[ndpkt + 4].ul64[0] = 0x100008c;
            pQVar5[ndpkt + 5].ul64[1] = 0x42;
            pQVar5[ndpkt + 5].ul64[0] = 0x44;
            pQVar5[ndpkt + 6].ul64[0] = 0x5000d;
            pQVar5[ndpkt + 6].ul64[1] = 0x47;
            pQVar5[ndpkt + 7].ul64[0] = 0x30ae400000000004;
            pQVar5[ndpkt + 7].ul64[1] = 0x431;
            ndpkt = ndpkt + 8;
            do {
              iVar6 = iVar17 + 1;
              iVar15 = iVar6 / 2;
              if (iVar17 == 0) {
                fVar19 = 0.0;
              }
              else if (iVar6 % 2 == 0) {
                fVar19 = -(float)iVar15 * 3.0;
              }
              else {
                fVar19 = (float)iVar15 * 3.0;
              }
              iVar17 = sdp[uVar18].x;
              iVar7 = sdp[uVar18].y;
              fvec[0][0] = (float)iVar17 + fVar19;
              fvec[1][0] = (float)(iVar17 + (uint)(ushort)sdp[uVar18].w) + fVar19;
              fvec[3][0] = (float)(iVar17 + (uint)(ushort)sdp[uVar18].w) + fVar19;
              fvec[0][1] = (float)iVar7;
              fvec[3][1] = (float)(iVar7 + (uint)(ushort)sdp[uVar18].h);
              fvec[2][1] = (float)(iVar7 + (uint)(ushort)sdp[uVar18].h);
              fvec[3][3] = 1.0;
              fvec[0][2] = 0.0;
              fvec[0][3] = 1.0;
              fvec[1][2] = 0.0;
              fvec[1][3] = 1.0;
              fvec[2][2] = 0.0;
              fvec[2][3] = 1.0;
              fvec[3][2] = 0.0;
              fvec[1][1] = fvec[0][1];
              fvec[2][0] = fvec[0][0];
              sceVu0RotTransPersN(ivec,local_bc,local_b4,4,0);
              pQVar5 = pbuf;
              iVar15 = iVar15 * 2 + 1;
              iVar17 = 0;
              puVar14 = (uint *)ty;
              puVar13 = (uint *)tx;
              paiVar10 = ivec;
              do {
                uVar12 = 0x8000;
                if (1 < iVar17) {
                  uVar12 = 0;
                }
                pQVar8 = pQVar5 + ndpkt;
                pQVar8->ui32[0] = 0x80;
                pQVar9 = pQVar5 + ndpkt + 1;
                pQVar8->ui32[1] = 0x80;
                pQVar8->ui32[2] = 0x80;
                if (iVar15 == 0) {
                  trap(7);
                }
                pQVar16 = pQVar5 + ndpkt + 2;
                ndpkt = ndpkt + 3;
                iVar17 = iVar17 + 1;
                pQVar8->iv[3] = (int)_alp / iVar15;
                uVar2 = *puVar13;
                puVar13 = puVar13 + 1;
                pQVar9->ui32[0] = uVar2;
                uVar2 = *puVar14;
                pQVar9->ui32[3] = 0;
                puVar14 = puVar14 + 1;
                pQVar9->ui32[1] = uVar2;
                pQVar9->ui32[2] = 0;
                pQVar16->ui32[0] = (*paiVar10)[0];
                pQVar16->ui32[1] = (*paiVar10)[1];
                uVar2 = (*paiVar10)[2];
                pQVar16->ui32[3] = uVar12;
                paiVar10 = paiVar10[1];
                pQVar16->ui32[2] = uVar2;
              } while (iVar17 < 4);
              iVar17 = iVar6;
            } while (iVar6 < 1);
          }
          uVar18 = local_b0;
        } while (local_b0 < re1dp->num);
      }
      pQVar5 = pbuf;
      pQVar8 = pbuf + ndpkt;
      pQVar8->ul64[0] = 0x1000000000008001;
      pQVar9 = pQVar5 + ndpkt + 1;
      pQVar8->ul64[1] = 0xe;
      ndpkt = ndpkt + 2;
      pQVar9->ul64[0] = 0;
      pQVar9->ul64[1] = 0x3f;
      *(int *)(local_b8 + (int)pQVar5) = (ndpkt - (n + -0x70000000)) + -1;
    }
  }
  return;
}

void DrawRareEne() {
	int i;
	int j;
	int n;
	int passflg[3];
	static int fl = 1;
	static float spd = 1.f;
	static float rate = 0.400000006f;
	static float trate = 1.f;
	static sceVu0FVECTOR cpos;
	static float alp[3];
	static void *efbuf[3];
	static int old_num[3];
	float fx;
	float fy;
	float fz;
	float l;
	int nene;
	RARE_ENE_DAT *redp;
	float *v1;
	
  byte bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void **ppvVar9;
  int iVar10;
  int mno;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int passflg [3];
  float *v1;
  int *local_c4;
  
  if (fl_126 != 0) {
    puVar5 = &old_num_133;
    puVar7 = &alp_131;
    puVar8 = &efbuf_132;
    iVar10 = 2;
    do {
      *puVar7 = 0x43000000;
      iVar10 = iVar10 + -1;
      *puVar8 = 0;
      puVar7 = puVar7 + 1;
      *puVar5 = 0xffffffff;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar10);
    fl_126 = 0;
  }
  local_c4 = passflg;
  iVar10 = 0;
  do {
    local_c4[iVar10] = 0;
    if ((rg_dsp_wrk[iVar10].mode != '\0') && (plyr_wrk.mode == 1)) {
      mno = 0;
      bVar2 = true;
      do {
        if (rg_dsp_wrk[iVar10].rg_no == (&DAT_00332698)[mno]) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
          DAT_003bd588 = rg_dsp_wrk[iVar10].pos[2];
          DAT_003bd58c = rg_dsp_wrk[iVar10].pos[3];
          cpos_130 = (float)*(undefined8 *)rg_dsp_wrk[iVar10].pos;
          DAT_003bd584 = (float)((ulong)*(undefined8 *)rg_dsp_wrk[iVar10].pos >> 0x20);
                    /* end of inlined section */
          fVar12 = SgSqrtf((cpos_130 - camera.p.x) * (cpos_130 - camera.p.x) +
                           (DAT_003bd584 - camera.p.y) * (DAT_003bd584 - camera.p.y) +
                           (DAT_003bd588 - camera.p.z) * (DAT_003bd588 - camera.p.z));
          fVar4 = camera.p.y;
          fVar3 = camera.p.x;
          fVar11 = fVar12 - 100.0;
          fVar14 = cpos_130 - camera.p.x;
          fVar13 = DAT_003bd584 - camera.p.y;
          bVar1 = rg_dsp_wrk[iVar10].rg_no;
          DAT_003bd588 = camera.p.z + ((DAT_003bd588 - camera.p.z) * fVar11) / fVar12;
          (&alp_131)[iVar10] = (float)(uint)rg_dsp_wrk[iVar10].alpha;
          cpos_130 = fVar3 + (fVar14 * fVar11) / fVar12;
          DAT_003bd584 = fVar4 + (fVar13 * fVar11) / fVar12;
          ppvVar9 = (void **)(&efbuf_132 + iVar10);
          if (*ppvVar9 == (void *)0x0) {
LAB_0015fa80:
            pvVar6 = SetEffects(0x1b,2);
            *ppvVar9 = pvVar6;
          }
          else if ((uint)bVar1 != (&old_num_133)[iVar10]) {
            ResetEffects(*ppvVar9);
            *ppvVar9 = (void *)0x0;
            goto LAB_0015fa80;
          }
          DrawRareEne_Sub(mno,iVar10,rg_dsp_wrk[iVar10].pos,(uint)rg_dsp_wrk[iVar10].rg_no,
                          (uint)rg_dsp_wrk[iVar10].dsp_no,(uint)rg_dsp_wrk[iVar10].alpha);
          bVar2 = false;
          (&old_num_133)[iVar10] = (uint)bVar1;
          local_c4[iVar10] = 1;
        }
        mno = mno + 1;
      } while ((mno < 5) && (bVar2));
    }
    iVar10 = iVar10 + 1;
    if (2 < iVar10) {
      ppvVar9 = (void **)&efbuf_132;
      iVar10 = 2;
      do {
        if ((*local_c4 == 0) && (*ppvVar9 != (void *)0x0)) {
          ResetEffects(*ppvVar9);
          *ppvVar9 = (void *)0x0;
        }
        ppvVar9 = ppvVar9 + 1;
        iVar10 = iVar10 + -1;
        local_c4 = local_c4 + 1;
      } while (-1 < iVar10);
      return;
    }
  } while( true );
}
