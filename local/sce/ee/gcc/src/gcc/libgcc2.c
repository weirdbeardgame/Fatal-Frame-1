// STATUS: NOT STARTED

func_ptr __CTOR_LIST__[2];
func_ptr __DTOR_LIST__[2];
static UQItype __clz_tab[0] = {
};
static UQItype __clz_tab[0] = {
};
static UQItype __clz_tab[0] = {
};
static UQItype __clz_tab[0] = {
};

void __do_global_dtors() {
  code *pcVar1;
  code **ppcVar2;
  
  pcVar1 = *p_3;
  ppcVar2 = p_3;
  while (pcVar1 != (code *)0x0) {
    p_3 = ppcVar2 + 1;
    (**ppcVar2)();
    ppcVar2 = p_3;
    pcVar1 = *p_3;
  }
  p_3 = ppcVar2;
  return;
}

void __do_global_ctors() {
  undefined1 *puVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined1 *puVar4;
  
  puVar4 = __CTOR_LIST__[0];
  if ((__CTOR_LIST__[0] == &_heap_size) &&
     (puVar4 = (undefined1 *)0x0, __CTOR_LIST__[1] != (undefined1 *)0x0)) {
    puVar1 = (undefined1 *)0x1;
    do {
      puVar4 = puVar1;
      puVar1 = puVar4 + 1;
    } while (__CTOR_LIST__[(int)(puVar4 + 1)] != (undefined1 *)0x0);
  }
  if (puVar4 != (undefined1 *)0x0) {
    ppcVar3 = (code **)(__CTOR_LIST__ + (int)puVar4);
    pcVar2 = *ppcVar3;
    while( true ) {
      puVar4 = puVar4 + -1;
      ppcVar3 = ppcVar3 + -1;
      (*pcVar2)();
      if (puVar4 == (undefined1 *)0x0) break;
      pcVar2 = *ppcVar3;
    }
  }
  return;
}

void __main() {
  if (initialized_10 == 0) {
    initialized_10 = 1;
    __do_global_ctors();
    return;
  }
  return;
}

DItype __divdi3(DItype u, DItype v) {
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar1 = (uint)((ulong)u >> 0x20);
  uVar16 = 0;
  if (u < 0) {
    uVar16 = 0xffffffff;
    uVar1 = -(uint)(-(int)u != 0) - uVar1;
    u = CONCAT44(uVar1,-(int)u);
  }
  if (v >> 0x20 < 0) {
    uVar16 = ~uVar16;
    v = CONCAT44(-(uint)(-(int)v != 0) - (int)((ulong)v >> 0x20),-(int)v);
  }
  uVar14 = (uint)u;
  uVar15 = (ulong)(int)uVar14;
  uVar4 = v >> 0x20;
  uVar13 = (ulong)(int)uVar1;
  uVar8 = (uint)v;
  uVar11 = (ulong)(int)uVar8;
  uVar5 = (uint)((ulong)v >> 0x20);
  if (uVar4 == 0) {
    if (uVar11 <= uVar13) {
      if (uVar11 == 0) {
        trap(7);
        uVar11 = (ulong)(1 / (int)uVar5);
      }
      if (uVar11 < 0x10000) {
        iVar3 = 8;
        if (uVar11 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x18;
        if (uVar11 < 0x1000000) {
          iVar3 = 0x10;
        }
      }
      uVar8 = (uint)uVar11;
      uVar5 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar3] + iVar3);
      if (uVar5 == 0) {
        iVar12 = uVar1 - uVar8;
        uVar4 = 1;
        uVar5 = uVar8 >> 0x10;
        uVar8 = uVar8 & 0xffff;
      }
      else {
        uVar9 = uVar8 << (uVar5 & 0x1f);
        uVar11 = (ulong)(int)uVar9;
        uVar6 = uVar1 >> (0x20 - uVar5 & 0x1f);
        uVar15 = (ulong)(int)(uVar14 << (uVar5 & 0x1f));
        uVar1 = uVar1 << (uVar5 & 0x1f) | uVar14 >> (0x20 - uVar5 & 0x1f);
        uVar5 = uVar9 >> 0x10;
        iVar3 = (int)uVar6 / (int)uVar5;
        lVar17 = (long)iVar3;
        uVar8 = uVar9 & 0xffff;
        if (uVar5 == 0) {
          trap(7);
        }
        iVar12 = iVar3 * uVar8;
        uVar4 = ((long)((int)uVar6 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)(uVar1 >> 0x10);
        iVar2 = (int)uVar4;
        if (uVar4 < (ulong)(long)iVar12) {
          iVar2 = iVar2 + uVar9;
          lVar17 = (long)(iVar3 + -1);
          if (uVar11 <= (ulong)(long)iVar2) {
            if ((ulong)(long)iVar12 <= (ulong)(long)iVar2) {
              iVar2 = iVar2 - iVar12;
              goto LAB_0023c2fc;
            }
            lVar17 = (long)(iVar3 + -2);
            iVar2 = iVar2 + uVar9;
          }
          iVar2 = iVar2 - iVar12;
        }
        else {
          iVar2 = iVar2 - iVar12;
        }
LAB_0023c2fc:
        if (uVar5 == 0) {
          trap(7);
        }
        iVar3 = iVar2 / (int)uVar5;
        uVar4 = (ulong)iVar3;
        iVar12 = iVar3 * uVar8;
        uVar13 = ((long)(iVar2 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)uVar1 & 0xffffU;
        if (uVar13 < (ulong)(long)iVar12) {
          iVar2 = (int)uVar13 + uVar9;
          uVar13 = (ulong)iVar2;
          uVar4 = (ulong)(iVar3 + -1);
          if ((uVar11 <= uVar13) && (uVar13 < (ulong)(long)iVar12)) {
            uVar4 = (ulong)(iVar3 + -2);
            uVar13 = (ulong)(int)(iVar2 + uVar9);
          }
        }
        iVar12 = (int)uVar13 - iVar12;
        uVar4 = (lVar17 << 0x30) >> 0x20 | uVar4;
      }
      iVar3 = iVar12 / (int)uVar5;
      lVar17 = (long)iVar3;
      if (uVar5 == 0) {
        trap(7);
      }
      iVar2 = iVar3 * uVar8;
      uVar13 = ((long)(iVar12 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
      iVar12 = (int)uVar13;
      iVar10 = (int)uVar11;
      if (uVar13 < (ulong)(long)iVar2) {
        iVar12 = iVar12 + iVar10;
        lVar17 = (long)(iVar3 + -1);
        if (uVar11 <= (ulong)(long)iVar12) {
          if ((ulong)(long)iVar2 <= (ulong)(long)iVar12) {
            iVar12 = iVar12 - iVar2;
            goto LAB_0023c3dc;
          }
          lVar17 = (long)(iVar3 + -2);
          iVar12 = iVar12 + iVar10;
        }
        iVar12 = iVar12 - iVar2;
      }
      else {
        iVar12 = iVar12 - iVar2;
      }
LAB_0023c3dc:
      if (uVar5 == 0) {
        trap(7);
      }
      iVar3 = iVar12 / (int)uVar5;
      uVar18 = (ulong)iVar3;
      uVar13 = ((long)(iVar12 % (int)uVar5) << 0x30) >> 0x20 | uVar15 & 0xffff;
      uVar15 = (ulong)((int)uVar13 + iVar10);
      if (((uVar13 < (ulong)(long)(int)(iVar3 * uVar8)) &&
          (uVar18 = (ulong)(iVar3 + -1), uVar11 <= uVar15)) &&
         (uVar15 < (ulong)(long)(int)(iVar3 * uVar8))) {
        uVar18 = (ulong)(iVar3 + -2);
      }
      uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
      goto LAB_0023c614;
    }
    if (uVar11 < 0x10000) {
      iVar3 = 8;
      if (uVar11 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x18;
      if (uVar11 < 0x1000000) {
        iVar3 = 0x10;
      }
    }
    uVar5 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar3] + iVar3);
    if (uVar5 != 0) {
      uVar11 = (ulong)(int)(uVar8 << (uVar5 & 0x1f));
      uVar1 = uVar1 << (uVar5 & 0x1f) | uVar14 >> (0x20 - uVar5 & 0x1f);
      uVar15 = (ulong)(int)(uVar14 << (uVar5 & 0x1f));
    }
    uVar8 = (uint)uVar11;
    uVar5 = uVar8 >> 0x10;
    iVar3 = (int)uVar1 / (int)uVar5;
    lVar17 = (long)iVar3;
    if (uVar5 == 0) {
      trap(7);
    }
    iVar12 = iVar3 * (uVar8 & 0xffff);
    uVar4 = ((long)((int)uVar1 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
    iVar2 = (int)uVar4;
    if (uVar4 < (ulong)(long)iVar12) {
      iVar2 = iVar2 + uVar8;
      lVar17 = (long)(iVar3 + -1);
      if (uVar11 <= (ulong)(long)iVar2) {
        if ((ulong)(long)iVar12 <= (ulong)(long)iVar2) {
          iVar2 = iVar2 - iVar12;
          goto LAB_0023c16c;
        }
        lVar17 = (long)(iVar3 + -2);
        iVar2 = iVar2 + uVar8;
      }
      iVar2 = iVar2 - iVar12;
    }
    else {
      iVar2 = iVar2 - iVar12;
    }
LAB_0023c16c:
    if (uVar5 == 0) {
      trap(7);
    }
    iVar3 = iVar2 / (int)uVar5;
    uVar18 = (ulong)iVar3;
    uVar4 = (ulong)(int)(iVar3 * (uVar8 & 0xffff));
    uVar13 = ((long)(iVar2 % (int)uVar5) << 0x30) >> 0x20 | uVar15 & 0xffff;
    uVar15 = (ulong)(int)((int)uVar13 + uVar8);
    if (((uVar13 < uVar4) && (uVar18 = (ulong)(iVar3 + -1), uVar11 <= uVar15)) && (uVar15 < uVar4))
    {
      uVar18 = (ulong)(iVar3 + -2);
    }
    uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
  }
  else if (uVar13 < uVar4) {
    uVar18 = 0;
  }
  else {
    if (uVar4 < 0x10000) {
      iVar3 = 8;
      if (uVar4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x18;
      if (uVar4 < 0x1000000) {
        iVar3 = 0x10;
      }
    }
    uVar6 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar5 >> iVar3] + iVar3);
    if (uVar6 == 0) {
      uVar18 = 1;
      if ((uVar13 <= uVar4) && (uVar18 = 0, uVar11 <= uVar15)) {
        uVar18 = 1;
      }
    }
    else {
      uVar9 = 0x20 - uVar6;
      uVar7 = uVar1 >> (uVar9 & 0x1f);
      uVar1 = uVar1 << (uVar6 & 0x1f) | uVar14 >> (uVar9 & 0x1f);
      uVar5 = uVar5 << (uVar6 & 0x1f) | uVar8 >> (uVar9 & 0x1f);
      uVar9 = uVar5 >> 0x10;
      iVar3 = (int)uVar7 / (int)uVar9;
      lVar17 = (long)iVar3;
      if (uVar9 == 0) {
        trap(7);
      }
      iVar12 = iVar3 * (uVar5 & 0xffff);
      uVar4 = ((long)((int)uVar7 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)(uVar1 >> 0x10);
      iVar2 = (int)uVar4;
      if (uVar4 < (ulong)(long)iVar12) {
        iVar2 = iVar2 + uVar5;
        lVar17 = (long)(iVar3 + -1);
        if ((ulong)(long)(int)uVar5 <= (ulong)(long)iVar2) {
          if ((ulong)(long)iVar12 <= (ulong)(long)iVar2) {
            iVar2 = iVar2 - iVar12;
            goto LAB_0023c564;
          }
          lVar17 = (long)(iVar3 + -2);
          iVar2 = iVar2 + uVar5;
        }
        iVar2 = iVar2 - iVar12;
      }
      else {
        iVar2 = iVar2 - iVar12;
      }
LAB_0023c564:
      if (uVar9 == 0) {
        trap(7);
      }
      iVar3 = iVar2 / (int)uVar9;
      uVar18 = (ulong)iVar3;
      iVar12 = iVar3 * (uVar5 & 0xffff);
      uVar4 = ((long)(iVar2 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)uVar1 & 0xffffU;
      if (uVar4 < (ulong)(long)iVar12) {
        iVar2 = (int)uVar4 + uVar5;
        uVar4 = (ulong)iVar2;
        uVar18 = (ulong)(iVar3 + -1);
        if (((ulong)(long)(int)uVar5 <= uVar4) && (uVar4 < (ulong)(long)iVar12)) {
          uVar4 = (ulong)(int)(iVar2 + uVar5);
          uVar18 = (ulong)(iVar3 + -2);
        }
      }
      uVar5 = (int)uVar4 - iVar12;
      uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
      lVar17 = (uVar18 & 0xffffffff) * (ulong)(uVar8 << (uVar6 & 0x1f));
      uVar1 = (uint)((ulong)lVar17 >> 0x20);
      if (uVar5 < uVar1) {
        uVar18 = (ulong)((int)uVar18 + -1);
      }
      else {
        uVar4 = 0;
        if ((uVar1 != uVar5) || ((uint)lVar17 <= uVar14 << (uVar6 & 0x1f))) goto LAB_0023c614;
        uVar18 = (ulong)((int)uVar18 + -1);
      }
    }
  }
  uVar4 = 0;
LAB_0023c614:
  uVar11 = uVar18 & 0xffffffff | uVar4 << 0x20;
  if (uVar16 != 0) {
    iVar3 = -(int)(uVar18 & 0xffffffff);
    uVar11 = CONCAT44(-(uint)(iVar3 != 0) - (int)uVar4,iVar3);
  }
  return uVar11;
}

void exit(int status) {
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)status;
  __do_global_dtors();
  _cleanup(ctx);
                    /* WARNING: Subroutine does not return */
  _exit(status);
}

DItype __fixsfdi(SFtype a) {
  long lVar1;
  
  if (a < 0.0) {
    lVar1 = __fixunssfdi(-a);
    lVar1 = -lVar1;
  }
  else {
    lVar1 = __fixunssfdi(a);
  }
  return lVar1;
}

DItype __fixunsdfdi(DFtype a) {
  int iVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  ulong uVar5;
  ulong u;
  
  iVar1 = dpcmp(a,0);
  lVar3 = 0;
  if (-1 < iVar1) {
    uVar2 = dptoul((long)((double)a * 2.328306436538696e-10));
    u = (long)(int)uVar2 << 0x20;
    if ((long)u < 0) {
      dVar4 = (double)__floatdidf(u >> 1);
      dVar4 = dVar4 + dVar4;
    }
    else {
      dVar4 = (double)__floatdidf(u);
    }
    dVar4 = (double)a - dVar4;
    iVar1 = dpcmp((long)dVar4,0);
    if (iVar1 < 0) {
      uVar2 = dptoul((long)(0.0 - dVar4));
      uVar5 = -((long)(int)uVar2 & 0xffffffffU);
    }
    else {
      uVar2 = dptoul((long)dVar4);
      uVar5 = (long)(int)uVar2 & 0xffffffff;
    }
    lVar3 = u + uVar5;
  }
  return lVar3;
}

DItype __fixunssfdi(SFtype original_a) {
  int iVar1;
  uint uVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  ulong uVar6;
  ulong u;
  
  dVar3 = (double)original_a;
  iVar1 = dpcmp((long)dVar3,0);
  lVar4 = 0;
  if (-1 < iVar1) {
    uVar2 = dptoul((long)(dVar3 * 2.328306436538696e-10));
    u = (long)(int)uVar2 << 0x20;
    if ((long)u < 0) {
      dVar5 = (double)__floatdidf(u >> 1);
      dVar5 = dVar5 + dVar5;
    }
    else {
      dVar5 = (double)__floatdidf(u);
    }
    dVar3 = dVar3 - dVar5;
    iVar1 = dpcmp((long)dVar3,0);
    if (iVar1 < 0) {
      uVar2 = dptoul((long)(0.0 - dVar3));
      uVar6 = -((long)(int)uVar2 & 0xffffffffU);
    }
    else {
      uVar2 = dptoul((long)dVar3);
      uVar6 = (long)(int)uVar2 & 0xffffffff;
    }
    lVar4 = u + uVar6;
  }
  return lVar4;
}

DFtype __floatdidf(DItype u) {
  double dVar1;
  
  dVar1 = (double)(long)(int)u;
  if ((long)(int)u < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  return (long)((double)(u >> 0x20) * 65536.0 * 65536.0 + dVar1);
}

SFtype __floatdisf(DItype u) {
  float fVar1;
  
  if ((0x3ffffffffffffe < u + 0x1fffffffffffffU) && ((u & 0x7ffU) != 0)) {
    u = u | 0x800;
  }
  fVar1 = (float)(long)(int)u;
  if ((long)(int)u < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  return (float)(u >> 0x20) * 65536.0 * 65536.0 + fVar1;
}

DItype __moddi3(DItype u, DItype v) {
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong local_40;
  
  uVar1 = (uint)((ulong)u >> 0x20);
  iVar16 = 0;
  if (u < 0) {
    iVar16 = -1;
    uVar1 = -(uint)(-(int)u != 0) - uVar1;
    u = CONCAT44(uVar1,-(int)u);
  }
  if (v >> 0x20 < 0) {
    v = CONCAT44(-(uint)(-(int)v != 0) - (int)((ulong)v >> 0x20),-(int)v);
  }
  uVar13 = (uint)u;
  uVar14 = (ulong)(int)uVar13;
  uVar11 = v >> 0x20;
  uVar12 = (ulong)(int)uVar1;
  uVar8 = (uint)v;
  uVar10 = (ulong)(int)uVar8;
  uVar15 = (uint)((ulong)v >> 0x20);
  if (uVar11 == 0) {
    if (uVar12 < uVar10) {
      if (uVar10 < 0x10000) {
        iVar3 = 8;
        if (uVar10 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x18;
        if (uVar10 < 0x1000000) {
          iVar3 = 0x10;
        }
      }
      uVar15 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar3] + iVar3);
      if (uVar15 != 0) {
        uVar10 = (ulong)(int)(uVar8 << (uVar15 & 0x1f));
        uVar1 = uVar1 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
      }
      uVar13 = (uint)uVar10 >> 0x10;
      uVar8 = (uint)uVar10 & 0xffff;
      iVar2 = (int)uVar1 / (int)uVar13;
      iVar3 = (int)uVar1 % (int)uVar13;
    }
    else {
      if (uVar10 == 0) {
        trap(7);
        uVar10 = (ulong)(1 / (int)uVar15);
      }
      if (uVar10 < 0x10000) {
        iVar3 = 8;
        if (uVar10 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x18;
        if (uVar10 < 0x1000000) {
          iVar3 = 0x10;
        }
      }
      uVar8 = (uint)uVar10;
      uVar15 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar3] + iVar3);
      if (uVar15 == 0) {
        iVar3 = uVar1 - uVar8;
        uVar13 = uVar8 >> 0x10;
        uVar8 = uVar8 & 0xffff;
      }
      else {
        uVar6 = uVar1 >> (0x20 - uVar15 & 0x1f);
        uVar1 = uVar1 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar9 = uVar8 << (uVar15 & 0x1f);
        uVar10 = (ulong)(int)uVar9;
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
        uVar13 = uVar9 >> 0x10;
        uVar8 = uVar9 & 0xffff;
        if (uVar13 == 0) {
          trap(7);
        }
        iVar3 = ((int)uVar6 / (int)uVar13) * uVar8;
        uVar11 = ((long)((int)uVar6 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)(uVar1 >> 0x10);
        iVar2 = (int)uVar11;
        if (uVar11 < (ulong)(long)iVar3) {
          iVar2 = iVar2 + uVar9;
          if ((ulong)(long)iVar2 < uVar10) {
            iVar2 = iVar2 - iVar3;
          }
          else {
            if ((ulong)(long)iVar2 < (ulong)(long)iVar3) {
              iVar2 = iVar2 + uVar9;
            }
            iVar2 = iVar2 - iVar3;
          }
        }
        else {
          iVar2 = iVar2 - iVar3;
        }
        if (uVar13 == 0) {
          trap(7);
        }
        iVar4 = (iVar2 / (int)uVar13) * uVar8;
        uVar11 = ((long)(iVar2 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)uVar1 & 0xffffU;
        iVar3 = (int)uVar11;
        if (uVar11 < (ulong)(long)iVar4) {
          iVar2 = iVar3 + uVar9;
          iVar3 = iVar2 - iVar4;
          if (uVar10 <= (ulong)(long)iVar2) {
            if ((ulong)(long)iVar2 < (ulong)(long)iVar4) {
              iVar2 = iVar2 + uVar9;
            }
            iVar3 = iVar2 - iVar4;
          }
        }
        else {
          iVar3 = iVar3 - iVar4;
        }
      }
      iVar2 = iVar3 / (int)uVar13;
      iVar3 = iVar3 % (int)uVar13;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar2 = iVar2 * uVar8;
    uVar11 = ((long)iVar3 << 0x30) >> 0x20 | (long)(int)((uint)uVar14 >> 0x10);
    iVar3 = (int)uVar11;
    iVar4 = (int)uVar10;
    if (uVar11 < (ulong)(long)iVar2) {
      iVar3 = iVar3 + iVar4;
      if ((ulong)(long)iVar3 < uVar10) {
        iVar3 = iVar3 - iVar2;
      }
      else {
        if ((ulong)(long)iVar3 < (ulong)(long)iVar2) {
          iVar3 = iVar3 + iVar4;
        }
        iVar3 = iVar3 - iVar2;
      }
    }
    else {
      iVar3 = iVar3 - iVar2;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar2 = (iVar3 / (int)uVar13) * uVar8;
    uVar14 = ((long)(iVar3 % (int)uVar13) << 0x30) >> 0x20 | uVar14 & 0xffff;
    if (uVar14 < (ulong)(long)iVar2) {
      iVar3 = (int)uVar14 + iVar4;
      uVar14 = (ulong)iVar3;
      if ((uVar10 <= uVar14) && (uVar14 < (ulong)(long)iVar2)) {
        uVar14 = (ulong)(iVar3 + iVar4);
      }
    }
    if (&stack0x00000000 != (undefined *)0x40) {
      local_40 = (long)(int)((uint)((int)uVar14 - iVar2) >> (uVar15 & 0x1f)) & 0xffffffff;
    }
    goto LAB_0023d04c;
  }
  if (uVar12 < uVar11) {
    local_40 = uVar14 & 0xffffffff | uVar12 << 0x20;
    goto LAB_0023d04c;
  }
  if (uVar11 < 0x10000) {
    iVar3 = 8;
    if (uVar11 < 0x100) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x18;
    if (uVar11 < 0x1000000) {
      iVar3 = 0x10;
    }
  }
  uVar6 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar15 >> iVar3] + iVar3);
  uVar9 = 0x20 - uVar6;
  if (uVar6 == 0) {
    if ((uVar11 < uVar12) || (uVar10 <= uVar14)) {
      uVar12 = (ulong)(int)((uVar1 - uVar15) - (uint)(uVar14 < (ulong)(long)(int)(uVar13 - uVar8)));
      uVar14 = (long)(int)(uVar13 - uVar8);
    }
    if (&stack0x00000000 != (undefined *)0x40) {
      local_40 = uVar14 & 0xffffffff | uVar12 << 0x20;
    }
    goto LAB_0023d04c;
  }
  uVar7 = uVar1 >> (uVar9 & 0x1f);
  uVar1 = uVar1 << (uVar6 & 0x1f) | uVar13 >> (uVar9 & 0x1f);
  uVar15 = uVar15 << (uVar6 & 0x1f) | uVar8 >> (uVar9 & 0x1f);
  uVar8 = uVar8 << (uVar6 & 0x1f);
  uVar13 = uVar13 << (uVar6 & 0x1f);
  uVar5 = uVar15 >> 0x10;
  iVar3 = (int)uVar7 / (int)uVar5;
  lVar17 = (long)iVar3;
  if (uVar5 == 0) {
    trap(7);
  }
  iVar2 = iVar3 * (uVar15 & 0xffff);
  uVar14 = ((long)((int)uVar7 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)(uVar1 >> 0x10);
  iVar4 = (int)uVar14;
  if (uVar14 < (ulong)(long)iVar2) {
    iVar4 = iVar4 + uVar15;
    lVar17 = (long)(iVar3 + -1);
    if ((ulong)(long)(int)uVar15 <= (ulong)(long)iVar4) {
      if ((ulong)(long)iVar2 <= (ulong)(long)iVar4) {
        iVar4 = iVar4 - iVar2;
        goto LAB_0023cf5c;
      }
      lVar17 = (long)(iVar3 + -2);
      iVar4 = iVar4 + uVar15;
    }
    iVar4 = iVar4 - iVar2;
  }
  else {
    iVar4 = iVar4 - iVar2;
  }
LAB_0023cf5c:
  if (uVar5 == 0) {
    trap(7);
  }
  iVar3 = iVar4 / (int)uVar5;
  uVar10 = (ulong)iVar3;
  iVar2 = iVar3 * (uVar15 & 0xffff);
  uVar14 = ((long)(iVar4 % (int)uVar5) << 0x30) >> 0x20 | (long)(int)uVar1 & 0xffffU;
  if (uVar14 < (ulong)(long)iVar2) {
    iVar4 = (int)uVar14 + uVar15;
    uVar14 = (ulong)iVar4;
    uVar10 = (ulong)(iVar3 + -1);
    if (((ulong)(long)(int)uVar15 <= uVar14) && (uVar14 < (ulong)(long)iVar2)) {
      uVar10 = (ulong)(iVar3 + -2);
      uVar14 = (ulong)(int)(iVar4 + uVar15);
    }
  }
  uVar7 = (int)uVar14 - iVar2;
  lVar17 = (((lVar17 << 0x30) >> 0x20 | uVar10) & 0xffffffff) * (ulong)uVar8;
  uVar1 = (uint)lVar17;
  uVar5 = (uint)((ulong)lVar17 >> 0x20);
  uVar8 = uVar1 - uVar8;
  if ((uVar7 < uVar5) || ((uVar5 == uVar7 && (uVar13 < uVar1)))) {
    lVar17 = CONCAT44((uVar5 - uVar15) - (uint)(uVar1 < uVar8),uVar8);
  }
  uVar1 = uVar13 - (int)lVar17;
  if (&stack0x00000000 != (undefined *)0x40) {
    uVar8 = (uVar7 - (int)((ulong)lVar17 >> 0x20)) - (uint)(uVar13 < uVar1);
    local_40 = (long)(int)(uVar8 << (uVar9 & 0x1f) | uVar1 >> (uVar6 & 0x1f)) & 0xffffffffU |
               (long)(int)(uVar8 >> (uVar6 & 0x1f)) << 0x20;
  }
LAB_0023d04c:
  if (iVar16 != 0) {
    local_40 = CONCAT44(-(uint)(-(int)local_40 != 0) - (int)(local_40 >> 0x20),-(int)local_40);
  }
  return local_40;
}

DItype __muldi3(DItype u, DItype v) {
  return (long)(int)(u * v) & 0xffffffffU | (long)(int)((ulong)(u * v) >> 0x20) << 0x20;
}

UDItype __udivdi3(UDItype n, UDItype d) {
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar7 = (long)d >> 0x20;
  uVar13 = (long)n >> 0x20;
  uVar8 = (uint)d;
  uVar11 = (ulong)(int)uVar8;
  uVar14 = (uint)n;
  uVar15 = (ulong)(int)uVar14;
  uVar6 = (uint)(n >> 0x20);
  uVar3 = (uint)(d >> 0x20);
  if (uVar7 == 0) {
    if (uVar11 <= uVar13) {
      if (uVar11 == 0) {
        trap(7);
        uVar11 = (ulong)(1 / (int)uVar3);
      }
      if (uVar11 < 0x10000) {
        iVar2 = 8;
        if (uVar11 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar11 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar8 = (uint)uVar11;
      uVar3 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar2] + iVar2);
      if (uVar3 == 0) {
        iVar12 = uVar6 - uVar8;
        uVar7 = 1;
        uVar6 = uVar8 >> 0x10;
        uVar8 = uVar8 & 0xffff;
      }
      else {
        uVar9 = uVar8 << (uVar3 & 0x1f);
        uVar11 = (ulong)(int)uVar9;
        uVar4 = uVar6 >> (0x20 - uVar3 & 0x1f);
        uVar15 = (ulong)(int)(uVar14 << (uVar3 & 0x1f));
        uVar3 = uVar6 << (uVar3 & 0x1f) | uVar14 >> (0x20 - uVar3 & 0x1f);
        uVar6 = uVar9 >> 0x10;
        iVar2 = (int)uVar4 / (int)uVar6;
        lVar16 = (long)iVar2;
        uVar8 = uVar9 & 0xffff;
        if (uVar6 == 0) {
          trap(7);
        }
        iVar12 = iVar2 * uVar8;
        uVar7 = ((long)((int)uVar4 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)(uVar3 >> 0x10);
        iVar1 = (int)uVar7;
        if (uVar7 < (ulong)(long)iVar12) {
          iVar1 = iVar1 + uVar9;
          lVar16 = (long)(iVar2 + -1);
          if (uVar11 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
              iVar1 = iVar1 - iVar12;
              goto LAB_0023d3b4;
            }
            lVar16 = (long)(iVar2 + -2);
            iVar1 = iVar1 + uVar9;
          }
          iVar1 = iVar1 - iVar12;
        }
        else {
          iVar1 = iVar1 - iVar12;
        }
LAB_0023d3b4:
        if (uVar6 == 0) {
          trap(7);
        }
        iVar2 = iVar1 / (int)uVar6;
        uVar7 = (ulong)iVar2;
        iVar12 = iVar2 * uVar8;
        uVar13 = ((long)(iVar1 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)uVar3 & 0xffffU;
        if (uVar13 < (ulong)(long)iVar12) {
          iVar1 = (int)uVar13 + uVar9;
          uVar13 = (ulong)iVar1;
          uVar7 = (ulong)(iVar2 + -1);
          if ((uVar11 <= uVar13) && (uVar13 < (ulong)(long)iVar12)) {
            uVar7 = (ulong)(iVar2 + -2);
            uVar13 = (ulong)(int)(iVar1 + uVar9);
          }
        }
        iVar12 = (int)uVar13 - iVar12;
        uVar7 = (lVar16 << 0x30) >> 0x20 | uVar7;
      }
      iVar2 = iVar12 / (int)uVar6;
      lVar16 = (long)iVar2;
      if (uVar6 == 0) {
        trap(7);
      }
      iVar1 = iVar2 * uVar8;
      uVar13 = ((long)(iVar12 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
      iVar12 = (int)uVar13;
      iVar10 = (int)uVar11;
      if (uVar13 < (ulong)(long)iVar1) {
        iVar12 = iVar12 + iVar10;
        lVar16 = (long)(iVar2 + -1);
        if (uVar11 <= (ulong)(long)iVar12) {
          if ((ulong)(long)iVar1 <= (ulong)(long)iVar12) {
            iVar12 = iVar12 - iVar1;
            goto LAB_0023d494;
          }
          lVar16 = (long)(iVar2 + -2);
          iVar12 = iVar12 + iVar10;
        }
        iVar12 = iVar12 - iVar1;
      }
      else {
        iVar12 = iVar12 - iVar1;
      }
LAB_0023d494:
      if (uVar6 == 0) {
        trap(7);
      }
      iVar2 = iVar12 / (int)uVar6;
      uVar17 = (ulong)iVar2;
      uVar13 = ((long)(iVar12 % (int)uVar6) << 0x30) >> 0x20 | uVar15 & 0xffff;
      uVar15 = (ulong)((int)uVar13 + iVar10);
      if (((uVar13 < (ulong)(long)(int)(iVar2 * uVar8)) &&
          (uVar17 = (ulong)(iVar2 + -1), uVar11 <= uVar15)) &&
         (uVar15 < (ulong)(long)(int)(iVar2 * uVar8))) {
        uVar17 = (ulong)(iVar2 + -2);
      }
      uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
      goto LAB_0023d6d4;
    }
    if (uVar11 < 0x10000) {
      iVar2 = 8;
      if (uVar11 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar11 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar8 >> iVar2] + iVar2);
    if (uVar3 != 0) {
      uVar11 = (ulong)(int)(uVar8 << (uVar3 & 0x1f));
      uVar13 = (ulong)(int)(uVar6 << (uVar3 & 0x1f) | uVar14 >> (0x20 - uVar3 & 0x1f));
      uVar15 = (ulong)(int)(uVar14 << (uVar3 & 0x1f));
    }
    uVar8 = (uint)uVar11;
    uVar3 = uVar8 >> 0x10;
    iVar2 = (int)uVar13 / (int)uVar3;
    lVar16 = (long)iVar2;
    if (uVar3 == 0) {
      trap(7);
    }
    iVar12 = iVar2 * (uVar8 & 0xffff);
    uVar7 = ((long)((int)uVar13 % (int)uVar3) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
    iVar1 = (int)uVar7;
    if (uVar7 < (ulong)(long)iVar12) {
      iVar1 = iVar1 + uVar8;
      lVar16 = (long)(iVar2 + -1);
      if (uVar11 <= (ulong)(long)iVar1) {
        if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
          iVar1 = iVar1 - iVar12;
          goto LAB_0023d224;
        }
        lVar16 = (long)(iVar2 + -2);
        iVar1 = iVar1 + uVar8;
      }
      iVar1 = iVar1 - iVar12;
    }
    else {
      iVar1 = iVar1 - iVar12;
    }
LAB_0023d224:
    if (uVar3 == 0) {
      trap(7);
    }
    iVar2 = iVar1 / (int)uVar3;
    uVar17 = (ulong)iVar2;
    uVar7 = (ulong)(int)(iVar2 * (uVar8 & 0xffff));
    uVar13 = ((long)(iVar1 % (int)uVar3) << 0x30) >> 0x20 | uVar15 & 0xffff;
    uVar15 = (ulong)(int)((int)uVar13 + uVar8);
    if (((uVar13 < uVar7) && (uVar17 = (ulong)(iVar2 + -1), uVar11 <= uVar15)) && (uVar15 < uVar7))
    {
      uVar17 = (ulong)(iVar2 + -2);
    }
    uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
  }
  else if (uVar13 < uVar7) {
    uVar17 = 0;
  }
  else {
    if (uVar7 < 0x10000) {
      iVar2 = 8;
      if (uVar7 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar7 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar4 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar3 >> iVar2] + iVar2);
    if (uVar4 == 0) {
      uVar17 = 1;
      if ((uVar13 <= uVar7) && (uVar17 = 0, uVar11 <= uVar15)) {
        uVar17 = 1;
      }
    }
    else {
      uVar9 = 0x20 - uVar4;
      uVar5 = uVar6 >> (uVar9 & 0x1f);
      uVar6 = uVar6 << (uVar4 & 0x1f) | uVar14 >> (uVar9 & 0x1f);
      uVar3 = uVar3 << (uVar4 & 0x1f) | uVar8 >> (uVar9 & 0x1f);
      uVar9 = uVar3 >> 0x10;
      iVar2 = (int)uVar5 / (int)uVar9;
      lVar16 = (long)iVar2;
      if (uVar9 == 0) {
        trap(7);
      }
      iVar12 = iVar2 * (uVar3 & 0xffff);
      uVar7 = ((long)((int)uVar5 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)(uVar6 >> 0x10);
      iVar1 = (int)uVar7;
      if (uVar7 < (ulong)(long)iVar12) {
        iVar1 = iVar1 + uVar3;
        lVar16 = (long)(iVar2 + -1);
        if ((ulong)(long)(int)uVar3 <= (ulong)(long)iVar1) {
          if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
            iVar1 = iVar1 - iVar12;
            goto LAB_0023d624;
          }
          lVar16 = (long)(iVar2 + -2);
          iVar1 = iVar1 + uVar3;
        }
        iVar1 = iVar1 - iVar12;
      }
      else {
        iVar1 = iVar1 - iVar12;
      }
LAB_0023d624:
      if (uVar9 == 0) {
        trap(7);
      }
      iVar2 = iVar1 / (int)uVar9;
      uVar17 = (ulong)iVar2;
      iVar12 = iVar2 * (uVar3 & 0xffff);
      uVar7 = ((long)(iVar1 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)uVar6 & 0xffffU;
      if (uVar7 < (ulong)(long)iVar12) {
        iVar1 = (int)uVar7 + uVar3;
        uVar7 = (ulong)iVar1;
        uVar17 = (ulong)(iVar2 + -1);
        if (((ulong)(long)(int)uVar3 <= uVar7) && (uVar7 < (ulong)(long)iVar12)) {
          uVar7 = (ulong)(int)(iVar1 + uVar3);
          uVar17 = (ulong)(iVar2 + -2);
        }
      }
      uVar6 = (int)uVar7 - iVar12;
      uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
      lVar16 = (uVar17 & 0xffffffff) * (ulong)(uVar8 << (uVar4 & 0x1f));
      uVar3 = (uint)((ulong)lVar16 >> 0x20);
      if (uVar6 < uVar3) {
        uVar17 = (ulong)((int)uVar17 + -1);
      }
      else {
        uVar7 = 0;
        if ((uVar3 != uVar6) || ((uint)lVar16 <= uVar14 << (uVar4 & 0x1f))) goto LAB_0023d6d4;
        uVar17 = (ulong)((int)uVar17 + -1);
      }
    }
  }
  uVar7 = 0;
LAB_0023d6d4:
  return uVar17 & 0xffffffff | uVar7 << 0x20;
}

UDItype __umoddi3(UDItype u, UDItype v) {
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong local_30;
  
  uVar10 = (long)v >> 0x20;
  uVar12 = (long)u >> 0x20;
  uVar7 = (uint)v;
  uVar9 = (ulong)(int)uVar7;
  uVar13 = (uint)u;
  uVar14 = (ulong)(int)uVar13;
  uVar11 = (uint)(u >> 0x20);
  uVar15 = (uint)(v >> 0x20);
  if (uVar10 == 0) {
    if (uVar12 < uVar9) {
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar15 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar2] + iVar2);
      if (uVar15 != 0) {
        uVar9 = (ulong)(int)(uVar7 << (uVar15 & 0x1f));
        uVar12 = (ulong)(int)(uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f));
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
      }
      uVar13 = (uint)uVar9 >> 0x10;
      uVar7 = (uint)uVar9 & 0xffff;
      iVar1 = (int)uVar12 / (int)uVar13;
      iVar2 = (int)uVar12 % (int)uVar13;
    }
    else {
      if (uVar9 == 0) {
        trap(7);
        uVar9 = (ulong)(1 / (int)uVar15);
      }
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar7 = (uint)uVar9;
      uVar15 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar2] + iVar2);
      if (uVar15 == 0) {
        iVar2 = uVar11 - uVar7;
        uVar13 = uVar7 >> 0x10;
        uVar7 = uVar7 & 0xffff;
      }
      else {
        uVar5 = uVar11 >> (0x20 - uVar15 & 0x1f);
        uVar11 = uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar8 = uVar7 << (uVar15 & 0x1f);
        uVar9 = (ulong)(int)uVar8;
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
        uVar13 = uVar8 >> 0x10;
        uVar7 = uVar8 & 0xffff;
        if (uVar13 == 0) {
          trap(7);
        }
        iVar2 = ((int)uVar5 / (int)uVar13) * uVar7;
        uVar10 = ((long)((int)uVar5 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
        iVar1 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar2) {
          iVar1 = iVar1 + uVar8;
          if ((ulong)(long)iVar1 < uVar9) {
            iVar1 = iVar1 - iVar2;
          }
          else {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar2) {
              iVar1 = iVar1 + uVar8;
            }
            iVar1 = iVar1 - iVar2;
          }
        }
        else {
          iVar1 = iVar1 - iVar2;
        }
        if (uVar13 == 0) {
          trap(7);
        }
        iVar3 = (iVar1 / (int)uVar13) * uVar7;
        uVar10 = ((long)(iVar1 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
        iVar2 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar3) {
          iVar1 = iVar2 + uVar8;
          iVar2 = iVar1 - iVar3;
          if (uVar9 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar3) {
              iVar1 = iVar1 + uVar8;
            }
            iVar2 = iVar1 - iVar3;
          }
        }
        else {
          iVar2 = iVar2 - iVar3;
        }
      }
      iVar1 = iVar2 / (int)uVar13;
      iVar2 = iVar2 % (int)uVar13;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = iVar1 * uVar7;
    uVar10 = ((long)iVar2 << 0x30) >> 0x20 | (long)(int)((uint)uVar14 >> 0x10);
    iVar2 = (int)uVar10;
    iVar3 = (int)uVar9;
    if (uVar10 < (ulong)(long)iVar1) {
      iVar2 = iVar2 + iVar3;
      if ((ulong)(long)iVar2 < uVar9) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        if ((ulong)(long)iVar2 < (ulong)(long)iVar1) {
          iVar2 = iVar2 + iVar3;
        }
        iVar2 = iVar2 - iVar1;
      }
    }
    else {
      iVar2 = iVar2 - iVar1;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = (iVar2 / (int)uVar13) * uVar7;
    uVar14 = ((long)(iVar2 % (int)uVar13) << 0x30) >> 0x20 | uVar14 & 0xffff;
    if (uVar14 < (ulong)(long)iVar1) {
      iVar2 = (int)uVar14 + iVar3;
      uVar14 = (ulong)iVar2;
      if ((uVar9 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
        uVar14 = (ulong)(iVar2 + iVar3);
      }
    }
    if (&stack0x00000000 == (undefined *)0x30) {
      return local_30;
    }
    return (long)(int)((uint)((int)uVar14 - iVar1) >> (uVar15 & 0x1f)) & 0xffffffff;
  }
  if (uVar12 < uVar10) {
    return uVar14 & 0xffffffff | uVar12 << 0x20;
  }
  if (uVar10 < 0x10000) {
    iVar2 = 8;
    if (uVar10 < 0x100) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x18;
    if (uVar10 < 0x1000000) {
      iVar2 = 0x10;
    }
  }
  uVar5 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar15 >> iVar2] + iVar2);
  uVar8 = 0x20 - uVar5;
  if (uVar5 == 0) {
    if ((uVar10 < uVar12) || (uVar9 <= uVar14)) {
      uVar12 = (ulong)(int)((uVar11 - uVar15) - (uint)(uVar14 < (ulong)(long)(int)(uVar13 - uVar7)))
      ;
      uVar14 = (long)(int)(uVar13 - uVar7);
    }
    if (&stack0x00000000 == (undefined *)0x30) {
      return local_30;
    }
    return uVar14 & 0xffffffff | uVar12 << 0x20;
  }
  uVar6 = uVar11 >> (uVar8 & 0x1f);
  uVar11 = uVar11 << (uVar5 & 0x1f) | uVar13 >> (uVar8 & 0x1f);
  uVar15 = uVar15 << (uVar5 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
  uVar7 = uVar7 << (uVar5 & 0x1f);
  uVar13 = uVar13 << (uVar5 & 0x1f);
  uVar4 = uVar15 >> 0x10;
  iVar2 = (int)uVar6 / (int)uVar4;
  lVar16 = (long)iVar2;
  if (uVar4 == 0) {
    trap(7);
  }
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)((int)uVar6 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
  iVar3 = (int)uVar14;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = iVar3 + uVar15;
    lVar16 = (long)(iVar2 + -1);
    if ((ulong)(long)(int)uVar15 <= (ulong)(long)iVar3) {
      if ((ulong)(long)iVar1 <= (ulong)(long)iVar3) {
        iVar3 = iVar3 - iVar1;
        goto LAB_0023db2c;
      }
      lVar16 = (long)(iVar2 + -2);
      iVar3 = iVar3 + uVar15;
    }
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = iVar3 - iVar1;
  }
LAB_0023db2c:
  if (uVar4 == 0) {
    trap(7);
  }
  iVar2 = iVar3 / (int)uVar4;
  uVar9 = (ulong)iVar2;
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)(iVar3 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = (int)uVar14 + uVar15;
    uVar14 = (ulong)iVar3;
    uVar9 = (ulong)(iVar2 + -1);
    if (((ulong)(long)(int)uVar15 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
      uVar9 = (ulong)(iVar2 + -2);
      uVar14 = (ulong)(int)(iVar3 + uVar15);
    }
  }
  uVar6 = (int)uVar14 - iVar1;
  lVar16 = (((lVar16 << 0x30) >> 0x20 | uVar9) & 0xffffffff) * (ulong)uVar7;
  uVar11 = (uint)lVar16;
  uVar4 = (uint)((ulong)lVar16 >> 0x20);
  uVar7 = uVar11 - uVar7;
  if ((uVar6 < uVar4) || ((uVar4 == uVar6 && (uVar13 < uVar11)))) {
    lVar16 = CONCAT44((uVar4 - uVar15) - (uint)(uVar11 < uVar7),uVar7);
  }
  uVar7 = uVar13 - (int)lVar16;
  if (&stack0x00000000 != (undefined *)0x30) {
    uVar15 = (uVar6 - (int)((ulong)lVar16 >> 0x20)) - (uint)(uVar13 < uVar7);
    local_30 = (long)(int)(uVar15 << (uVar8 & 0x1f) | uVar7 >> (uVar5 & 0x1f)) & 0xffffffffU |
               (long)(int)(uVar15 >> (uVar5 & 0x1f)) << 0x20;
  }
  return local_30;
}
