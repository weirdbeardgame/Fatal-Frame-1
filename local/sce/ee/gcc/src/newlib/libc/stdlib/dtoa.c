// STATUS: NOT STARTED


static int quorem(_Bigint *b, _Bigint *S) {
	int n;
	__int32_t borrow;
	__int32_t y;
	ULong carry;
	ULong q;
	ULong ys;
	ULong *bx;
	ULong *bxe;
	ULong *sx;
	ULong *sxe;
	__int32_t z;
	ULong si;
	ULong zs;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  
  iVar12 = 0;
  if (S->_wds <= b->_wds) {
    iVar10 = S->_wds + -1;
    puVar9 = S->_x;
    puVar11 = b->_x;
    puVar13 = puVar9 + iVar10;
    puVar7 = puVar11 + iVar10;
    uVar2 = *puVar7;
    iVar12 = (int)uVar2 / (int)(*puVar13 + 1);
    if (*puVar13 + 1 == 0) {
      trap(7);
    }
    if (iVar12 != 0) {
      iVar3 = 0;
      uVar1 = 0;
      puVar8 = puVar9;
      puVar6 = puVar11;
      do {
        uVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar1 = (uVar5 & 0xffff) * iVar12 + uVar1;
        uVar5 = (uVar5 >> 0x10) * iVar12 + (uVar1 >> 0x10);
        iVar3 = ((*puVar6 & 0xffff) - (uVar1 & 0xffff)) + iVar3;
        iVar4 = ((*puVar6 >> 0x10) - (uVar5 & 0xffff)) + (iVar3 >> 0x10);
        *(short *)puVar6 = (short)iVar3;
        *(short *)((int)puVar6 + 2) = (short)iVar4;
        uVar1 = uVar5 >> 0x10;
        iVar3 = iVar4 >> 0x10;
        puVar6 = puVar6 + 1;
      } while (puVar8 <= puVar13);
      if (uVar2 == 0) {
        while (puVar7 = puVar7 + -1, puVar11 < puVar7) {
          if (*puVar7 != 0) {
            b->_wds = iVar10;
            goto LAB_0024314c;
          }
          iVar10 = iVar10 + -1;
        }
        b->_wds = iVar10;
      }
    }
LAB_0024314c:
    iVar3 = __mcmp(b,S);
    if (-1 < iVar3) {
      iVar12 = iVar12 + 1;
      iVar3 = 0;
      uVar2 = 0;
      puVar7 = puVar11;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar2 = (uVar1 & 0xffff) + uVar2;
        uVar1 = (uVar1 >> 0x10) + (uVar2 >> 0x10);
        iVar3 = ((*puVar7 & 0xffff) - (uVar2 & 0xffff)) + iVar3;
        iVar4 = ((*puVar7 >> 0x10) - (uVar1 & 0xffff)) + (iVar3 >> 0x10);
        *(short *)puVar7 = (short)iVar3;
        *(short *)((int)puVar7 + 2) = (short)iVar4;
        uVar2 = uVar1 >> 0x10;
        iVar3 = iVar4 >> 0x10;
        puVar7 = puVar7 + 1;
      } while (puVar9 <= puVar13);
      puVar7 = puVar11 + iVar10;
      if (*puVar7 == 0) {
        while (puVar7 = puVar7 + -1, puVar11 < puVar7) {
          if (*puVar7 != 0) {
            b->_wds = iVar10;
            return iVar12;
          }
          iVar10 = iVar10 + -1;
        }
        b->_wds = iVar10;
      }
    }
  }
  return iVar12;
}

char* _dtoa_r(_reent *ptr, double _d, int mode, int ndigits, int *decpt, int *sign, char **rve) {
	int bbits;
	int b2;
	int b5;
	int be;
	int dig;
	int i;
	int ieps;
	int ilim;
	int ilim0;
	int ilim1;
	int j;
	int j1;
	int k;
	int k0;
	int k_check;
	int leftright;
	int m2;
	int m5;
	int s2;
	int s5;
	int spec_case;
	int try_quick;
	double_union d;
	double_union d2;
	double_union eps;
	__int32_t L;
	int denorm;
	ULong x;
	_Bigint *b;
	_Bigint *b1;
	_Bigint *delta;
	_Bigint *mlo;
	_Bigint *mhi;
	_Bigint *S;
	double ds;
	char *s;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Bigint *p_Var6;
  _Bigint *p_Var7;
  uint uVar8;
  _Bigint *p_Var9;
  char cVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double *pdVar14;
  double dVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  double dVar21;
  int be;
  int bbits;
  uint local_f8;
  uint local_f4;
  int *local_f0;
  _Bigint **local_ec;
  int b2;
  int b5;
  int ilim;
  int ilim0;
  int ilim1;
  int k0;
  int k_check;
  int leftright;
  int s2;
  int s5;
  int spec_case;
  int denorm;
  _Bigint *b;
  _Bigint *mlo;
  _Bigint *mhi;
  _Bigint *S;
  _Bigint *local_a8;
  
  p_Var6 = ptr->_result;
  local_f8 = mode;
  local_f4 = ndigits;
  local_f0 = decpt;
  local_ec = (_Bigint **)rve;
  if (p_Var6 != (_Bigint *)0x0) {
    p_Var6->_k = ptr->_result_k;
    p_Var6->_maxwds = 1 << (ptr->_result_k & 0x1fU);
    _Bfree(ptr,p_Var6);
    ptr->_result = (_Bigint *)0x0;
  }
  uVar8 = (uint)((ulong)_d >> 0x20);
  if (_d >> 0x20 < 0) {
    uVar16 = _d >> 0x20 & 0x7fffffff;
    *sign = 1;
    _d = _d & 0xffffffffU | uVar16 << 0x20;
    uVar8 = (uint)uVar16;
  }
  else {
    *sign = 0;
  }
  if ((uVar8 & 0x7ff00000) == 0x7ff00000) {
    *local_f0 = 9999;
    if ((_d & 0xfffffffffffffU) == 0) {
      pcVar20 = "Infinity";
    }
    else {
      pcVar20 = "NaN";
    }
    if (local_ec == (_Bigint **)0x0) {
      return pcVar20;
    }
    p_Var6 = (_Bigint *)(pcVar20 + 3);
    if (pcVar20[3] != '\0') {
      p_Var6 = (_Bigint *)(pcVar20 + 8);
    }
    *local_ec = p_Var6;
    return pcVar20;
  }
  iVar3 = dpcmp(_d,0);
  if (iVar3 == 0) {
    *local_f0 = 1;
    if (local_ec == (_Bigint **)0x0) {
      return "0";
    }
    *local_ec = (_Bigint *)&DAT_00354e79;
    return "0";
  }
  b = _d2b(ptr,_d,&be,(int *)((uint)&be | 4));
  iVar3 = bbits;
  uVar12 = uVar8 >> 0x14 & 0x7ff;
  if (uVar12 == 0) {
    iVar17 = bbits + be;
    iVar4 = iVar17 + 0x432;
    if (iVar4 < 0x21) {
      uVar8 = (uint)_d << (-iVar4 & 0x1fU);
    }
    else {
      uVar8 = uVar8 << (-iVar4 & 0x1fU) | (uint)_d >> (iVar17 + 0x412U & 0x1f);
    }
    dVar21 = (double)(long)(int)uVar8;
    if ((long)(int)uVar8 < 0) {
      dVar21 = dVar21 + 4294967296.0;
    }
    denorm = 1;
    iVar17 = iVar17 + -1;
    dVar21 = (double)((ulong)dVar21 & 0xffffffff |
                     (long)((int)((ulong)dVar21 >> 0x20) + -0x1f00000) << 0x20);
  }
  else {
    iVar17 = uVar12 - 0x3ff;
    denorm = 0;
    dVar21 = (double)(_d & 0xffffffffU |
                     ((long)(_d & 0xffffffffU | (_d >> 0x20 & 0xfffffU) << 0x20) >> 0x20 |
                     0x3ff00000U) << 0x20);
  }
  dVar21 = (dVar21 - 1.5) * DAT_00354e80 + DAT_00354e88 + (double)(long)iVar17 * DAT_00354e90;
  iVar4 = dptoli((long)dVar21);
  uVar16 = (ulong)iVar4;
  iVar5 = dpcmp((long)dVar21,0);
  if (iVar5 < 0) {
    iVar5 = dpcmp((long)dVar21,(long)(double)uVar16);
    if (iVar5 != 0) {
      uVar16 = (long)(iVar4 + -1);
    }
  }
  k_check = 1;
  if (uVar16 < 0x17) {
    k_check = 0;
    iVar4 = dpcmp(_d,*(long *)(&__mprec_tens + (int)uVar16 * 8));
    if (iVar4 < 0) {
      uVar16 = (long)((int)uVar16 + -1);
    }
  }
  s2 = (iVar3 - iVar17) + -1;
  if (s2 < 0) {
    b2 = -s2;
    s2 = 0;
  }
  else {
    b2 = 0;
  }
  uVar8 = (uint)uVar16;
  if ((long)uVar16 < 0) {
    b5 = -uVar8;
    b2 = b2 - uVar8;
    s5 = 0;
  }
  else {
    b5 = 0;
    s2 = s2 + uVar8;
    s5 = uVar8;
  }
  if (9 < local_f8) {
    local_f8 = 0;
  }
  bVar1 = 5 < (int)local_f8;
  if (bVar1) {
    local_f8 = local_f8 - 4;
  }
  leftright = 1;
  uVar18 = (long)iVar17;
  switch(local_f8) {
  case 0:
  case 1:
    ilim1 = -1;
    uVar18 = 0x12;
    ilim = -1;
    local_f4 = 0;
    break;
  case 2:
    leftright = 0;
  case 4:
    uVar18 = 1;
    if (0 < (long)(int)local_f4) {
      uVar18 = (long)(int)local_f4;
    }
    local_f4 = (uint)uVar18;
    ilim = local_f4;
    ilim1 = local_f4;
    break;
  case 3:
    leftright = 0;
  case 5:
    ilim1 = local_f4 + uVar8;
    ilim = ilim1 + 1;
    uVar18 = (long)ilim;
    if ((long)ilim < 1) {
      uVar18 = 1;
    }
  }
  iVar3 = 4;
  ptr->_result_k = 0;
  if (uVar18 < 0x18) {
    iVar3 = ptr->_result_k;
  }
  else {
    do {
      iVar3 = iVar3 * 2;
      ptr->_result_k = ptr->_result_k + 1;
    } while ((ulong)(long)(iVar3 + 0x14) <= uVar18);
    iVar3 = ptr->_result_k;
  }
  bVar2 = 0xe < (uint)ilim;
  p_Var6 = _Balloc(ptr,iVar3);
  ptr->_result = p_Var6;
  local_a8 = p_Var6;
  if ((bVar2) || (bVar1)) {
LAB_00243af8:
    p_Var6 = local_a8;
    uVar8 = local_f8;
    iVar3 = (int)uVar16;
    if ((be < 0) || (0xe < (long)uVar16)) {
      mlo = (_Bigint *)0x0;
      mhi = (_Bigint *)0x0;
      iVar17 = b2;
      iVar4 = b5;
      if (leftright != 0) {
        if ((int)local_f8 < 2) {
          iVar5 = be + 0x433;
          if (denorm == 0) {
            iVar5 = 0x36 - bbits;
          }
        }
        else {
          iVar5 = ilim + -1;
          if (b5 < iVar5) {
            iVar4 = 0;
            iVar5 = iVar5 - b5;
            b5 = b5 + iVar5;
            s5 = s5 + iVar5;
          }
          else {
            iVar4 = b5 - iVar5;
          }
          iVar5 = ilim;
          if (ilim < 0) {
            iVar17 = b2 - ilim;
            iVar5 = 0;
          }
        }
        mhi = _i2b(ptr,1);
        s2 = s2 + iVar5;
        b2 = b2 + iVar5;
      }
      if ((0 < iVar17) && (0 < s2)) {
        iVar5 = s2;
        if (iVar17 < s2) {
          iVar5 = iVar17;
        }
        s2 = s2 - iVar5;
        iVar17 = iVar17 - iVar5;
        b2 = b2 - iVar5;
      }
      if (0 < b5) {
        if (leftright == 0) {
          b = _pow5mult(ptr,b,b5);
        }
        else {
          if (0 < iVar4) {
            mhi = _pow5mult(ptr,mhi,iVar4);
            p_Var7 = _multiply(ptr,mhi,b);
            p_Var9 = b;
            b = p_Var7;
            _Bfree(ptr,p_Var9);
          }
          if (b5 - iVar4 != 0) {
            b = _pow5mult(ptr,b,b5 - iVar4);
          }
        }
      }
      S = _i2b(ptr,1);
      if (0 < s5) {
        S = _pow5mult(ptr,S,s5);
      }
      if ((int)uVar8 < 2) {
        if ((_d & 0xfffffffffffffU) == 0) {
          if ((_d >> 0x20 & 0x7ff00000U) == 0) {
            spec_case = 0;
          }
          else {
            b2 = b2 + 1;
            spec_case = 1;
            s2 = s2 + 1;
          }
        }
        else {
          spec_case = 0;
        }
      }
      if (s5 == 0) {
        uVar8 = s2 + 1;
      }
      else {
        iVar4 = _hi0bits(S->_x[S->_wds + -1]);
        uVar8 = s2 - iVar4;
      }
      uVar8 = uVar8 & 0x1f;
      if (uVar8 != 0) {
        uVar8 = 0x20 - uVar8;
      }
      if ((int)uVar8 < 5) {
        if ((int)uVar8 < 4) {
          iVar4 = uVar8 + 0x1c;
          iVar17 = iVar17 + iVar4;
          s2 = s2 + iVar4;
          b2 = b2 + iVar4;
        }
      }
      else {
        iVar4 = uVar8 - 4;
        iVar17 = iVar17 + iVar4;
        s2 = s2 + iVar4;
        b2 = b2 + iVar4;
      }
      if (0 < b2) {
        b = _lshift(ptr,b,b2);
      }
      if (0 < s2) {
        S = _lshift(ptr,S,s2);
      }
      if ((k_check != 0) && (iVar4 = __mcmp(b,S), iVar4 < 0)) {
        b = _multadd(ptr,b,10,0);
        uVar16 = (ulong)(iVar3 + -1);
        if (leftright != 0) {
          mhi = _multadd(ptr,mhi,10,0);
        }
        ilim = ilim1;
      }
      if ((0 < ilim) || ((int)local_f8 < 3)) {
        iVar3 = 1;
        if (leftright != 0) {
          if (0 < iVar17) {
            mhi = _lshift(ptr,mhi,iVar17);
          }
          mlo = mhi;
          if (spec_case != 0) {
            mhi = _Balloc(ptr,mhi->_k);
            memcpy(&mhi->_sign,&mlo->_sign,(long)(mlo->_wds * 4 + 8));
            mhi = _lshift(ptr,mhi,1);
          }
          iVar3 = 1;
          do {
            iVar17 = quorem(b,S);
            uVar8 = iVar17 + 0x30;
            iVar4 = __mcmp(b,mlo);
            p_Var9 = __mdiff(ptr,S,mhi);
            iVar5 = 1;
            if (p_Var9->_sign == 0) {
              iVar5 = __mcmp(b,p_Var9);
            }
            _Bfree(ptr,p_Var9);
            cVar10 = (char)uVar8;
            if (((iVar5 == 0) && (local_f8 == 0)) && ((_d & 1U) == 0)) {
              if (uVar8 != 0x39) {
                *(char *)&p_Var6->_next = (0 < iVar4) + cVar10;
                goto LAB_00244364;
              }
LAB_00244240:
              *(undefined *)&p_Var6->_next = 0x39;
              p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
              goto LAB_00244314;
            }
            if ((iVar4 < 0) || (((iVar4 == 0 && (local_f8 == 0)) && ((_d & 1U) == 0)))) {
              if (0 < iVar5) {
                b = _lshift(ptr,b,1);
                iVar3 = __mcmp(b,S);
                if (iVar3 < 1) {
                  if (iVar3 != 0) {
                    *(char *)&p_Var6->_next = cVar10;
                    goto LAB_00244364;
                  }
                  if ((uVar8 & 1) == 0) {
                    *(char *)&p_Var6->_next = cVar10;
                    goto LAB_00244364;
                  }
                }
                uVar8 = iVar17 + 0x31;
                if (uVar8 == 0x3a) goto LAB_00244240;
              }
              *(char *)&p_Var6->_next = (char)uVar8;
              goto LAB_00244364;
            }
            if (0 < iVar5) {
              if (uVar8 == 0x39) goto LAB_00244240;
              *(char *)&p_Var6->_next = cVar10 + '\x01';
              goto LAB_00244364;
            }
            *(char *)&p_Var6->_next = cVar10;
            p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
            if (iVar3 == ilim) goto LAB_002442bc;
            b = _multadd(ptr,b,10,0);
            if (mlo == mhi) {
              mlo = _multadd(ptr,mhi,10,0);
              mhi = mlo;
            }
            else {
              mlo = _multadd(ptr,mlo,10,0);
              mhi = _multadd(ptr,mhi,10,0);
            }
            iVar3 = iVar3 + 1;
          } while( true );
        }
        while( true ) {
          iVar17 = quorem(b,S);
          uVar8 = iVar17 + 0x30;
          *(char *)&p_Var6->_next = (char)uVar8;
          p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
          if (ilim <= iVar3) break;
          b = _multadd(ptr,b,10,0);
          iVar3 = iVar3 + 1;
        }
LAB_002442bc:
        b = _lshift(ptr,b,1);
        iVar3 = __mcmp(b,S);
        if ((iVar3 < 1) && ((iVar3 != 0 || ((uVar8 & 1) == 0)))) {
          do {
            p_Var6 = (_Bigint *)((int)p_Var6[-1]._x + 3);
          } while (*(char *)&p_Var6->_next == '0');
LAB_00244364:
          iVar3 = (int)uVar16 + 1;
          p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
        }
        else {
LAB_00244314:
          do {
            p_Var6 = (_Bigint *)((int)p_Var6[-1]._x + 3);
            if (*(char *)&p_Var6->_next != '9') {
              *(char *)&p_Var6->_next = *(char *)&p_Var6->_next + '\x01';
              goto LAB_00244364;
            }
          } while (p_Var6 != local_a8);
          iVar3 = (int)uVar16 + 2;
          p_Var6 = (_Bigint *)((int)&local_a8->_next + 1);
          *(undefined *)&local_a8->_next = 0x31;
        }
        goto LAB_00244368;
      }
      if (-1 < ilim) {
        S = _multadd(ptr,S,5,0);
        iVar17 = __mcmp(b,S);
        goto joined_r0x00243fe8;
      }
    }
    else {
      dVar21 = *(double *)(&__mprec_tens + iVar3 * 8);
      if ((-1 < (int)local_f4) || (0 < ilim)) {
        iVar17 = 1;
        iVar3 = iVar3 + 1;
        do {
          iVar4 = dptoli((long)((double)_d / dVar21));
          dVar15 = (double)_d - (double)(long)iVar4 * dVar21;
          *(char *)&p_Var6->_next = (char)iVar4 + '0';
          p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
          if (iVar17 == ilim) {
            iVar17 = dpcmp((long)(dVar15 + dVar15),(long)dVar21);
            p_Var9 = p_Var6;
            if (0 < iVar17) goto LAB_00243c44;
            iVar17 = dpcmp((long)(dVar15 + dVar15),(long)dVar21);
            if ((iVar17 == 0) && (((long)iVar4 & 1U) != 0)) goto LAB_00243c44;
            break;
          }
          _d = (long)(dVar15 * 10.0);
          iVar4 = dpcmp(_d,0);
          iVar17 = iVar17 + 1;
        } while (iVar4 != 0);
        goto LAB_002443b0;
      }
      mhi = (_Bigint *)0x0;
      S = (_Bigint *)0x0;
      if (-1 < ilim) {
        iVar17 = dpcmp(_d,(long)(dVar21 * 5.0));
joined_r0x00243fe8:
        iVar3 = (int)uVar16;
        if (0 < iVar17) goto LAB_00244004;
      }
    }
LAB_00243ff0:
    iVar3 = ~local_f4 + 1;
  }
  else {
    lVar19 = 2;
    ilim0 = ilim;
    if ((long)uVar16 < 1) {
      uVar12 = -uVar8;
      dVar21 = (double)_d;
      if (uVar12 != 0) {
        uVar13 = (int)uVar12 >> 4;
        dVar21 = *(double *)(&__mprec_tens + (uVar12 & 0xf) * 8) * (double)_d;
        if (uVar13 != 0) {
          pdVar14 = (double *)&__mprec_bigtens;
          do {
            if ((uVar13 & 1) != 0) {
              lVar19 = (long)((int)lVar19 + 1);
              dVar21 = *pdVar14 * dVar21;
            }
            uVar13 = (int)uVar13 >> 1;
            pdVar14 = pdVar14 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    else {
      uVar12 = (int)uVar8 >> 4;
      dVar15 = *(double *)(&__mprec_tens + (uVar8 & 0xf) * 8);
      dVar21 = (double)_d;
      if ((uVar12 & 0x10) != 0) {
        uVar12 = uVar12 & 0xf;
        lVar19 = 3;
        dVar21 = (double)_d / DAT_00354ff8;
      }
      if (uVar12 != 0) {
        pdVar14 = (double *)&__mprec_bigtens;
        do {
          if ((uVar12 & 1) != 0) {
            lVar19 = (long)((int)lVar19 + 1);
            dVar15 = dVar15 * *pdVar14;
          }
          uVar12 = (int)uVar12 >> 1;
          pdVar14 = pdVar14 + 1;
        } while (uVar12 != 0);
      }
      dVar21 = dVar21 / dVar15;
    }
    k0 = uVar8;
    if (((k_check != 0) && (iVar3 = dpcmp((long)dVar21,0x3ff0000000000000), iVar3 < 0)) &&
       (0 < ilim)) {
      if (0 < ilim1) {
        uVar16 = (ulong)(int)(uVar8 - 1);
        ilim = ilim1;
        lVar19 = (long)((int)lVar19 + 1);
        dVar21 = dVar21 * 10.0;
        goto LAB_00243858;
      }
LAB_00243aec:
      uVar16 = (ulong)k0;
      ilim = ilim0;
      goto LAB_00243af8;
    }
LAB_00243858:
    iVar3 = (int)uVar16;
    dVar15 = (double)lVar19 * dVar21 + 7.0;
    dVar15 = (double)((ulong)dVar15 & 0xffffffff |
                     (long)((int)((ulong)dVar15 >> 0x20) + -0x3400000) << 0x20);
    if (ilim != 0) {
      if (leftright != 0) {
        iVar17 = 0;
        dVar15 = 0.5 / *(double *)(&__mprec_tens + (ilim + -1) * 8) - dVar15;
        while( true ) {
          iVar4 = dptoli((long)dVar21);
          dVar21 = dVar21 - (double)(long)iVar4;
          *(char *)&p_Var6->_next = (char)iVar4 + '0';
          p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
          iVar4 = dpcmp((long)dVar21,(long)dVar15);
          if (iVar4 < 0) break;
          iVar4 = dpcmp((long)(1.0 - dVar21),(long)dVar15);
          if (iVar4 < 0) goto LAB_00243c38;
          iVar17 = iVar17 + 1;
          if (ilim <= iVar17) goto LAB_00243aec;
          dVar15 = dVar15 * 10.0;
          dVar21 = dVar21 * 10.0;
        }
        iVar3 = iVar3 + 1;
        goto LAB_002443b0;
      }
      iVar17 = 1;
      dVar11 = *(double *)(&__mprec_tens + (ilim + -1) * 8);
      while( true ) {
        iVar4 = dptoli((long)dVar21);
        dVar21 = dVar21 - (double)(long)iVar4;
        *(char *)&p_Var6->_next = (char)iVar4 + '0';
        p_Var6 = (_Bigint *)((int)&p_Var6->_next + 1);
        if (iVar17 == ilim) break;
        iVar17 = iVar17 + 1;
        dVar21 = dVar21 * 10.0;
      }
      iVar17 = dpcmp((long)dVar21,(long)(dVar11 * dVar15 + 0.5));
      if (0 < iVar17) {
LAB_00243c38:
        iVar3 = iVar3 + 1;
        p_Var9 = p_Var6;
LAB_00243c44:
        do {
          p_Var6 = p_Var9;
          p_Var9 = (_Bigint *)((int)p_Var6[-1]._x + 3);
          cVar10 = *(char *)&p_Var9->_next;
          if (*(char *)&p_Var9->_next != '9') goto LAB_00243c68;
        } while (p_Var9 != local_a8);
        *(undefined *)&local_a8->_next = 0x30;
        cVar10 = '0';
        iVar3 = iVar3 + 1;
LAB_00243c68:
        *(char *)&p_Var9->_next = cVar10 + '\x01';
        goto LAB_002443b0;
      }
      iVar17 = dpcmp((long)dVar21,(long)(0.5 - dVar11 * dVar15));
      if (iVar17 < 0) {
        iVar3 = iVar3 + 1;
        p_Var9 = p_Var6;
        do {
          p_Var6 = p_Var9;
          p_Var9 = (_Bigint *)((int)p_Var6[-1]._x + 3);
        } while (*(char *)&p_Var9->_next == '0');
        goto LAB_002443b0;
      }
      goto LAB_00243aec;
    }
    mhi = (_Bigint *)0x0;
    S = (_Bigint *)0x0;
    iVar17 = dpcmp((long)(dVar21 - 5.0),(long)dVar15);
    if (iVar17 < 1) {
      iVar3 = dpcmp((long)(dVar21 - 5.0),(long)(0.0 - dVar15));
      if (-1 < iVar3) goto LAB_00243aec;
      goto LAB_00243ff0;
    }
LAB_00244004:
    iVar3 = iVar3 + 2;
    *(undefined *)&local_a8->_next = 0x31;
    p_Var6 = (_Bigint *)((int)&local_a8->_next + 1);
  }
LAB_00244368:
  _Bfree(ptr,S);
  if (mhi != (_Bigint *)0x0) {
    if ((mlo != (_Bigint *)0x0) && (mlo != mhi)) {
      _Bfree(ptr,mlo);
    }
    _Bfree(ptr,mhi);
  }
LAB_002443b0:
  _Bfree(ptr,b);
  *(undefined *)&p_Var6->_next = 0;
  *local_f0 = iVar3;
  if (local_ec != (_Bigint **)0x0) {
    *local_ec = p_Var6;
  }
  return (char *)local_a8;
}
