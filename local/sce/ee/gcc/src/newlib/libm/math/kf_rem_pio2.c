// STATUS: NOT STARTED

static int init_jk[0] = {
};
static float PIo2[0] = {
};
static float zero = 0.f;
static float one = 1.f;
static float two8 = 256.f;
static float twon8 = 0.00390625f;

int __kernel_rem_pio2f(float *x, float *y, int e0, int nx, int prec, __int32_t *ipio2) {
	__int32_t jz;
	__int32_t jx;
	__int32_t jv;
	__int32_t jp;
	__int32_t carry;
	__int32_t n;
	__int32_t iq[20];
	__int32_t i;
	__int32_t j;
	__int32_t k;
	__int32_t m;
	__int32_t q0;
	__int32_t ih;
	float z;
	float fw;
	float f[20];
	float fq[20];
	float q[20];
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  int iq [20];
  float f [20];
  float fq [20];
  float q [20];
  float *local_d0;
  int local_cc;
  int *local_c8;
  int ih;
  uint local_c0;
  uint local_bc;
  
  iVar15 = e0 + 4;
  if (-1 < e0 + -3) {
    iVar15 = e0 + -3;
  }
  iVar15 = iVar15 >> 3;
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  iVar13 = nx + -1;
  iVar14 = e0 + (iVar15 + 1) * -8;
  iVar9 = iVar15 - iVar13;
  iVar11 = 0;
  iVar12 = *(int *)(&init_jk + prec * 4);
  local_d0 = x;
  local_cc = prec;
  local_c8 = ipio2;
  if (iVar13 + iVar12 < 0) {
    local_bc = (uint)(iVar12 < 0);
    local_c0 = (uint)(prec < 3);
  }
  else {
    local_bc = (uint)(iVar12 < 0);
    local_c0 = (uint)(prec < 3);
    do {
      if (iVar9 < 0) {
        f[iVar11] = 0.0;
      }
      else {
        f[iVar11] = (float)local_c8[iVar9];
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar11 <= iVar13 + iVar12);
  }
  iVar11 = 0;
  iVar9 = iVar12;
  if (local_bc == 0) {
    do {
      fVar19 = 0.0;
      iVar10 = 0;
      if (-1 < iVar13) {
        do {
          iVar3 = (iVar13 + iVar11) - iVar10;
          pfVar7 = local_d0 + iVar10;
          iVar10 = iVar10 + 1;
          fVar19 = fVar19 + *pfVar7 * f[iVar3];
        } while (iVar10 <= iVar13);
      }
      pfVar7 = q + iVar11;
      iVar11 = iVar11 + 1;
      *pfVar7 = fVar19;
    } while (iVar11 <= iVar12);
  }
LAB_0023b134:
  fVar19 = q[iVar9];
  if (0 < iVar9) {
    pfVar7 = fq + iVar9 + 0x13;
    piVar5 = iq;
    iVar11 = iVar9;
    do {
      fVar16 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      iVar11 = iVar11 + -1;
      fVar17 = fVar19 - (float)(int)(fVar19 * 0.00390625) * 256.0;
      fVar19 = fVar16 + (float)(int)(fVar19 * 0.00390625);
      *piVar5 = (int)fVar17;
      piVar5 = piVar5 + 1;
    } while (0 < iVar11);
  }
  fVar19 = scalbnf(fVar19,iVar14);
  ih = 0;
  fVar16 = floorf(fVar19 * 0.125);
  fVar19 = fVar19 - fVar16 * 8.0;
  uVar18 = (uint)fVar19;
  fVar19 = fVar19 - (float)uVar18;
  if (iVar14 < 1) {
    if (iVar14 == 0) {
      ih = iq[iVar9 + -1] >> 8;
    }
    else if (0.5 <= fVar19) {
      ih = 2;
    }
  }
  else {
    iVar11 = iq[iVar9 + -1];
    iVar10 = iVar11 >> (8U - iVar14 & 0x1f);
    uVar18 = uVar18 + iVar10;
    iVar11 = iVar11 - (iVar10 << (8U - iVar14 & 0x1f));
    ih = iVar11 >> (7U - iVar14 & 0x1f);
    iq[iVar9 + -1] = iVar11;
  }
  if (0 < ih) {
    uVar18 = uVar18 + 1;
    bVar2 = false;
    piVar5 = iq;
    iVar11 = iVar9;
    if (0 < iVar9) {
      do {
        iVar10 = *piVar5;
        if (bVar2) {
          iVar3 = 0xff - iVar10;
LAB_0023b2b4:
          *piVar5 = iVar3;
        }
        else {
          iVar3 = 0x100 - iVar10;
          if (iVar10 != 0) {
            bVar2 = true;
            goto LAB_0023b2b4;
          }
        }
        iVar11 = iVar11 + -1;
        piVar5 = piVar5 + 1;
      } while (iVar11 != 0);
    }
    if (0 < iVar14) {
      if (iVar14 == 1) {
        puVar8 = (uint *)(iq + iVar9 + -1);
        uVar6 = *puVar8 & 0x7f;
      }
      else {
        if (iVar14 != 2) goto LAB_0023b31c;
        puVar8 = (uint *)(iq + iVar9 + -1);
        uVar6 = *puVar8 & 0x3f;
      }
      *puVar8 = uVar6;
    }
LAB_0023b31c:
    if ((ih == 2) && (fVar19 = 1.0 - fVar19, bVar2)) {
      fVar16 = scalbnf(1.0,iVar14);
      fVar19 = fVar19 - fVar16;
    }
  }
  iVar11 = iVar9 + -1;
  if (fVar19 == 0.0) {
    uVar6 = 0;
    if (iVar12 <= iVar11) {
      puVar8 = (uint *)(iq + iVar11);
      do {
        uVar1 = *puVar8;
        iVar11 = iVar11 + -1;
        puVar8 = puVar8 + -1;
        uVar6 = uVar6 | uVar1;
      } while (iVar12 <= iVar11);
    }
    if (uVar6 != 0) goto LAB_0023b49c;
    iVar11 = 1;
    if (iq[iVar12 + -1] == 0) {
      do {
        iVar11 = iVar11 + 1;
      } while (iq[iVar12 - iVar11] == 0);
      iVar11 = iVar9 + iVar11;
    }
    else {
      iVar11 = iVar9 + 1;
    }
    iVar10 = iVar9 + 1;
    iVar9 = iVar11;
    if (iVar10 <= iVar11) {
      do {
        iVar3 = 0;
        fVar19 = 0.0;
        f[iVar13 + iVar10] = (float)local_c8[iVar15 + iVar10];
        if (-1 < iVar13) {
          do {
            iVar4 = (iVar13 + iVar10) - iVar3;
            pfVar7 = local_d0 + iVar3;
            iVar3 = iVar3 + 1;
            fVar19 = fVar19 + *pfVar7 * f[iVar4];
          } while (iVar3 <= iVar13);
        }
        pfVar7 = q + iVar10;
        iVar10 = iVar10 + 1;
        *pfVar7 = fVar19;
      } while (iVar10 <= iVar11);
    }
    goto LAB_0023b134;
  }
LAB_0023b49c:
  if (fVar19 == 0.0) {
    iVar9 = iVar9 + -1;
    iVar15 = iq[iVar9];
    while (iVar14 = iVar14 + -8, iVar15 == 0) {
      iVar9 = iVar9 + -1;
      iVar15 = iq[iVar9];
    }
  }
  else {
    fVar19 = scalbnf(fVar19,-iVar14);
    piVar5 = iq + iVar9;
    if (256.0 <= fVar19) {
      iVar9 = iVar9 + 1;
      *piVar5 = (int)(fVar19 - (float)(int)(fVar19 * 0.00390625) * 256.0);
      iq[iVar9] = (int)(float)(int)(fVar19 * 0.00390625);
      iVar14 = iVar14 + 8;
    }
    else {
      iq[iVar9] = (int)fVar19;
    }
  }
  fVar19 = scalbnf(1.0,iVar14);
  iVar15 = iVar9;
  if (-1 < iVar9) {
    piVar5 = iq + iVar9;
    pfVar7 = q + iVar9;
    iVar14 = iVar9;
    do {
      iVar11 = *piVar5;
      iVar14 = iVar14 + -1;
      piVar5 = piVar5 + -1;
      fVar16 = fVar19 * (float)iVar11;
      fVar19 = fVar19 * 0.00390625;
      *pfVar7 = fVar16;
      pfVar7 = pfVar7 + -1;
    } while (-1 < iVar14);
  }
  do {
    if (iVar15 < 0) {
      if (local_c0 == 0) {
        iVar15 = iVar9;
        if (local_cc == 3) {
          while (iVar12 = iVar9, 0 < iVar15) {
            fVar19 = fq[iVar15];
            fVar16 = fq[iVar15 + -1];
            fVar17 = fVar16 + fVar19;
            fq[iVar15] = fVar19 + (fVar16 - fVar17);
            fq[iVar15 + -1] = fVar17;
            iVar15 = iVar15 + -1;
          }
          while (1 < iVar12) {
            fVar19 = fq[iVar12];
            fVar16 = fq[iVar12 + -1];
            fVar17 = fVar16 + fVar19;
            fq[iVar12] = fVar19 + (fVar16 - fVar17);
            fq[iVar12 + -1] = fVar17;
            iVar12 = iVar12 + -1;
          }
          fVar19 = 0.0;
          for (; 1 < iVar9; iVar9 = iVar9 + -1) {
            fVar19 = fVar19 + fq[iVar9];
          }
          if (ih == 0) {
            y[2] = fVar19;
            *y = fq[0];
            y[1] = fq[1];
          }
          else {
            *y = -fq[0];
            y[1] = -fq[1];
            y[2] = -fVar19;
          }
        }
      }
      else if (local_cc < 1) {
        if (local_cc == 0) {
          fVar19 = 0.0;
          if (iVar9 < 0) {
            *y = 0.0;
          }
          else {
            do {
              pfVar7 = fq + iVar9;
              iVar9 = iVar9 + -1;
              fVar19 = fVar19 + *pfVar7;
            } while (-1 < iVar9);
            *y = fVar19;
          }
          if (ih != 0) {
            *y = -fVar19;
          }
        }
      }
      else {
        fVar19 = 0.0;
        iVar15 = iVar9;
        if (iVar9 < 0) {
          *y = 0.0;
        }
        else {
          do {
            iVar12 = iVar15 + -1;
            fVar19 = fVar19 + fq[iVar15];
            iVar15 = iVar12;
          } while (-1 < iVar12);
          *y = fVar19;
        }
        if (ih != 0) {
          *y = -fVar19;
        }
        fVar19 = fq[0] - fVar19;
        iVar15 = 1;
        if (0 < iVar9) {
          do {
            pfVar7 = fq + iVar15;
            iVar15 = iVar15 + 1;
            fVar19 = fVar19 + *pfVar7;
          } while (iVar15 <= iVar9);
        }
        y[1] = fVar19;
        if (ih != 0) {
          y[1] = -fVar19;
        }
      }
      return uVar18 & 7;
    }
    fVar19 = 0.0;
    iVar14 = 0;
    if (local_bc == 0) {
      iVar11 = iVar9 - iVar15;
      if (iVar11 < 0) goto LAB_0023b650;
      do {
        iVar13 = iVar15 + iVar14;
        iVar10 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        fVar19 = fVar19 + *(float *)(&PIo2 + iVar10) * q[iVar13];
        if (iVar12 < iVar14) goto LAB_0023b650;
        iVar13 = iVar11 * 4;
      } while (iVar14 <= iVar11);
    }
    else {
      iVar11 = iVar9 - iVar15;
LAB_0023b650:
      iVar13 = iVar11 << 2;
    }
    *(float *)((int)fq + iVar13) = fVar19;
    iVar15 = iVar15 + -1;
  } while( true );
}
