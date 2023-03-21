// STATUS: NOT STARTED

double __mprec_tens[0] = {
};
double __mprec_bigtens[0] = {
};
double __mprec_tinytens[0] = {
};

_Bigint* _Balloc(_reent *ptr, int k) {
	int x;
	_Bigint *rv;
	
  _Bigint **pp_Var1;
  _Bigint *p_Var2;
  int iVar3;
  
  pp_Var1 = ptr->_freelist;
  if (pp_Var1 == (_Bigint **)0x0) {
    pp_Var1 = (_Bigint **)_calloc_r(ptr,4,0x10);
    ptr->_freelist = pp_Var1;
    if (pp_Var1 != (_Bigint **)0x0) goto LAB_00245170;
LAB_002451b4:
    p_Var2 = (_Bigint *)0x0;
  }
  else {
LAB_00245170:
    p_Var2 = pp_Var1[k];
    if (p_Var2 == (_Bigint *)0x0) {
      iVar3 = 1 << (k & 0x1fU);
      p_Var2 = (_Bigint *)_calloc_r(ptr,1,iVar3 * 4 + 0x14);
      if (p_Var2 == (_Bigint *)0x0) goto LAB_002451b4;
      p_Var2->_k = k;
      p_Var2->_maxwds = iVar3;
    }
    else {
      pp_Var1[k] = p_Var2->_next;
    }
    p_Var2->_wds = 0;
    p_Var2->_sign = 0;
  }
  return p_Var2;
}

void _Bfree(_reent *ptr, _Bigint *v) {
  _Bigint **pp_Var1;
  
  if (v != (_Bigint *)0x0) {
    pp_Var1 = ptr->_freelist;
    v->_next = pp_Var1[v->_k];
    pp_Var1[v->_k] = v;
  }
  return;
}

_Bigint* _multadd(_reent *ptr, _Bigint *b, int m, int a) {
	int i;
	int wds;
	ULong *x;
	ULong y;
	ULong xi;
	ULong z;
	_Bigint *b1;
	
  int iVar1;
  _Bigint *p_Var2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = 0;
  puVar7 = b->_x;
  iVar1 = b->_wds;
  puVar5 = puVar7;
  do {
    iVar6 = iVar6 + 1;
    uVar4 = (*puVar5 & 0xffff) * m + a;
    uVar3 = (*puVar5 >> 0x10) * m + (uVar4 >> 0x10);
    a = uVar3 >> 0x10;
    *puVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
    puVar5 = puVar5 + 1;
  } while (iVar6 < iVar1);
  p_Var2 = b;
  if (a != 0) {
    if (b->_maxwds <= iVar1) {
      p_Var2 = _Balloc(ptr,b->_k + 1);
      memcpy(&p_Var2->_sign,&b->_sign,(long)(b->_wds * 4 + 8));
      _Bfree(ptr,b);
      puVar7 = p_Var2->_x;
    }
    puVar7[iVar1] = a;
    p_Var2->_wds = iVar1 + 1;
  }
  return p_Var2;
}

_Bigint* _s2b(_reent *ptr, char *s, int nd0, int nd, ULong y9) {
	_Bigint *b;
	int i;
	int k;
	__int32_t y;
	
  char cVar1;
  _Bigint *b;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (nd + 8) / 9;
  iVar3 = 1;
  iVar2 = 0;
  if (1 < iVar5) {
    do {
      iVar3 = iVar3 << 1;
      iVar2 = iVar2 + 1;
    } while (iVar3 < iVar5);
  }
  iVar5 = 9;
  b = _Balloc(ptr,iVar2);
  b->_x[0] = y9;
  b->_wds = 1;
  if (nd0 < 10) {
    pcVar4 = s + 10;
  }
  else {
    cVar1 = s[9];
    pcVar4 = s + 9;
    while( true ) {
      iVar5 = iVar5 + 1;
      b = _multadd(ptr,b,10,cVar1 + -0x30);
      if (nd0 <= iVar5) break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    }
    pcVar4 = pcVar4 + 2;
  }
  iVar2 = nd - iVar5;
  if (iVar5 < nd) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + -1;
      b = _multadd(ptr,b,10,cVar1 + -0x30);
    } while (iVar2 != 0);
  }
  return b;
}

int _hi0bits(ULong x) {
	int k;
	
  int iVar1;
  
  iVar1 = 0;
  if ((x & 0xffff0000) == 0) {
    iVar1 = 0x10;
    x = x << 0x10;
  }
  if ((x & 0xff000000) == 0) {
    iVar1 = iVar1 + 8;
    x = x << 8;
  }
  if ((x & 0xf0000000) == 0) {
    iVar1 = iVar1 + 4;
    x = x << 4;
  }
  if ((x & 0xc0000000) == 0) {
    iVar1 = iVar1 + 2;
    x = x << 2;
  }
  if ((-1 < (int)x) && (iVar1 = iVar1 + 1, (x & 0x40000000) == 0)) {
    return 0x20;
  }
  return iVar1;
}

int _lo0bits(ULong *y) {
	int k;
	ULong x;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = *y;
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0x10;
      uVar1 = uVar1 >> 0x10;
    }
    if ((uVar1 & 0xff) == 0) {
      iVar2 = iVar2 + 8;
      uVar1 = uVar1 >> 8;
    }
    if ((uVar1 & 0xf) == 0) {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 >> 4;
    }
    if ((uVar1 & 3) == 0) {
      iVar2 = iVar2 + 2;
      uVar1 = uVar1 >> 2;
    }
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar2 + 1;
      if (uVar1 >> 1 == 0) {
        return 0x20;
      }
      *y = uVar1 >> 1;
    }
    else {
      *y = uVar1;
    }
    return iVar2;
  }
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 2) == 0) {
    *y = uVar1 >> 2;
    return 2;
  }
  *y = uVar1 >> 1;
  return 1;
}

_Bigint* _i2b(_reent *ptr, int i) {
	_Bigint *b;
	
  _Bigint *p_Var1;
  
  p_Var1 = _Balloc(ptr,1);
  p_Var1->_x[0] = i;
  p_Var1->_wds = 1;
  return p_Var1;
}

_Bigint* _multiply(_reent *ptr, _Bigint *a, _Bigint *b) {
	_Bigint *c;
	int k;
	int wc;
	ULong carry;
	ULong y;
	ULong z;
	ULong *x;
	ULong *xa;
	ULong *xae;
	ULong *xb;
	ULong *xbe;
	ULong *xc;
	ULong *xc0;
	ULong z2;
	
  uint uVar1;
  _Bigint *p_Var2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  _Bigint *p_Var13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  
  iVar14 = a->_wds;
  iVar16 = b->_wds;
  p_Var13 = a;
  if (iVar14 < iVar16) {
    iVar14 = b->_wds;
    iVar16 = a->_wds;
    p_Var13 = b;
    b = a;
  }
  iVar17 = iVar14 + iVar16;
  p_Var2 = _Balloc(ptr,p_Var13->_k + (uint)(p_Var13->_maxwds < iVar17));
  puVar9 = p_Var2->_x;
  for (puVar10 = puVar9; puVar10 < puVar9 + iVar17; puVar10 = puVar10 + 1) {
    *puVar10 = 0;
  }
  puVar10 = b->_x;
  puVar12 = p_Var13->_x;
  puVar15 = puVar10 + iVar16;
  puVar7 = puVar9;
  while (puVar8 = puVar7, puVar10 < puVar15) {
    uVar3 = *puVar10;
    uVar6 = uVar3 & 0xffff;
    if (uVar6 != 0) {
      uVar3 = 0;
      puVar7 = puVar8;
      puVar11 = puVar12;
      do {
        uVar4 = *puVar11;
        uVar5 = *puVar7;
        puVar11 = puVar11 + 1;
        uVar3 = (uVar4 & 0xffff) * uVar6 + (uVar5 & 0xffff) + uVar3;
        *(short *)puVar7 = (short)uVar3;
        uVar3 = (uVar4 >> 0x10) * uVar6 + (uVar5 >> 0x10) + (uVar3 >> 0x10);
        *(short *)((int)puVar7 + 2) = (short)uVar3;
        uVar3 = uVar3 >> 0x10;
        puVar7 = puVar7 + 1;
      } while (puVar11 < puVar12 + iVar14);
      *puVar7 = uVar3;
      uVar3 = *puVar10;
    }
    puVar10 = puVar10 + 1;
    puVar7 = puVar8 + 1;
    uVar3 = uVar3 >> 0x10;
    if (uVar3 != 0) {
      uVar6 = *puVar8;
      uVar5 = 0;
      puVar11 = puVar12;
      uVar4 = uVar6;
      do {
        uVar1 = *puVar11;
        *(short *)puVar8 = (short)uVar6;
        puVar11 = puVar11 + 1;
        uVar5 = (uVar1 & 0xffff) * uVar3 + (uVar4 >> 0x10) + uVar5;
        *(short *)((int)puVar8 + 2) = (short)uVar5;
        puVar8 = puVar8 + 1;
        uVar4 = *puVar8;
        uVar6 = (uVar1 >> 0x10) * uVar3 + (uVar4 & 0xffff) + (uVar5 >> 0x10);
        uVar5 = uVar6 >> 0x10;
      } while (puVar11 < puVar12 + iVar14);
      *puVar8 = uVar6;
    }
  }
  puVar9 = puVar9 + iVar17;
  while( true ) {
    if (iVar17 < 1) {
      p_Var2->_wds = iVar17;
      return p_Var2;
    }
    puVar9 = puVar9 + -1;
    if (*puVar9 != 0) break;
    iVar17 = iVar17 + -1;
  }
  p_Var2->_wds = iVar17;
  return p_Var2;
}

_Bigint* _pow5mult(_reent *ptr, _Bigint *b, int k) {
	_Bigint *b1;
	_Bigint *p5;
	_Bigint *p51;
	int i;
	static int p05[3] = {
		/* [0] = */ 5,
		/* [1] = */ 25,
		/* [2] = */ 125
	};
	
  _Bigint *p_Var1;
  _Bigint *b_00;
  uint uVar2;
  
  if ((k & 3U) != 0) {
    b = _multadd(ptr,b,*(int *)(p05_27 + ((k & 3U) - 1) * 4),0);
  }
  uVar2 = k >> 2;
  if (uVar2 != 0) {
    p_Var1 = ptr->_p5s;
    if (ptr->_p5s == (_Bigint *)0x0) {
      p_Var1 = _i2b(ptr,0x271);
      ptr->_p5s = p_Var1;
      p_Var1->_next = (_Bigint *)0x0;
    }
    while( true ) {
      b_00 = p_Var1;
      if ((uVar2 & 1) != 0) {
        p_Var1 = _multiply(ptr,b,b_00);
        _Bfree(ptr,b);
        b = p_Var1;
      }
      uVar2 = (int)uVar2 >> 1;
      if (uVar2 == 0) break;
      p_Var1 = b_00->_next;
      if (b_00->_next == (_Bigint *)0x0) {
        p_Var1 = _multiply(ptr,b_00,b_00);
        b_00->_next = p_Var1;
        p_Var1->_next = (_Bigint *)0x0;
      }
    }
  }
  return b;
}

_Bigint* _lshift(_reent *ptr, _Bigint *b, int k) {
	int i;
	int k1;
	int n;
	int n1;
	_Bigint *b1;
	ULong *x;
	ULong *x1;
	ULong *xe;
	ULong z;
	
  _Bigint *p_Var1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int k_00;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = k >> 5;
  iVar2 = iVar9 + b->_wds;
  k_00 = b->_k;
  for (iVar6 = b->_maxwds; iVar6 < iVar2 + 1; iVar6 = iVar6 << 1) {
    k_00 = k_00 + 1;
  }
  puVar4 = b->_x;
  uVar8 = k & 0x1f;
  p_Var1 = _Balloc(ptr,k_00);
  puVar5 = p_Var1->_x;
  if (0 < iVar9) {
    do {
      *puVar5 = 0;
      iVar9 = iVar9 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar9 != 0);
  }
  puVar7 = puVar4 + b->_wds;
  if (uVar8 == 0) {
    do {
      uVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar8;
      puVar5 = puVar5 + 1;
    } while (puVar4 < puVar7);
  }
  else {
    uVar3 = 0;
    do {
      *puVar5 = *puVar4 << uVar8 | uVar3;
      puVar5 = puVar5 + 1;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 >> (0x20 - uVar8 & 0x1f);
    } while (puVar4 < puVar7);
    iVar6 = iVar2 + 1;
    if (uVar3 != 0) {
      iVar6 = iVar2 + 2;
    }
    *puVar5 = uVar3;
    iVar2 = iVar6 + -1;
  }
  p_Var1->_wds = iVar2;
  _Bfree(ptr,b);
  return p_Var1;
}

int __mcmp(_Bigint *a, _Bigint *b) {
	ULong *xa;
	ULong *xa0;
	ULong *xb;
	ULong *xb0;
	int i;
	int j;
	
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = b->_wds;
  iVar1 = a->_wds - iVar2;
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar4 = a->_x + iVar2;
  puVar3 = b->_x + iVar2;
  do {
    puVar4 = puVar4 + -1;
    puVar3 = puVar3 + -1;
    if (*puVar4 != *puVar3) {
      iVar2 = -1;
      if (*puVar3 <= *puVar4) {
        iVar2 = 1;
      }
      return iVar2;
    }
  } while (a->_x < puVar4);
  return 0;
}

_Bigint* __mdiff(_reent *ptr, _Bigint *a, _Bigint *b) {
	_Bigint *c;
	int i;
	int wa;
	int wb;
	__int32_t borrow;
	__int32_t y;
	ULong *xa;
	ULong *xae;
	ULong *xb;
	ULong *xbe;
	ULong *xc;
	__int32_t z;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  _Bigint *p_Var5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  _Bigint *p_Var12;
  
  iVar4 = __mcmp(a,b);
  if (iVar4 == 0) {
    p_Var5 = _Balloc(ptr,0);
    p_Var5->_x[0] = 0;
    p_Var5->_wds = 1;
  }
  else {
    p_Var12 = a;
    if (iVar4 < 0) {
      p_Var12 = b;
      b = a;
    }
    p_Var5 = _Balloc(ptr,p_Var12->_k);
    puVar9 = p_Var12->_x;
    p_Var5->_sign = (uint)(iVar4 < 0);
    puVar10 = b->_x;
    iVar6 = 0;
    iVar4 = p_Var12->_wds;
    puVar11 = puVar9 + iVar4;
    puVar7 = puVar10 + b->_wds;
    puVar3 = p_Var5->_x;
    do {
      puVar8 = puVar3;
      uVar1 = *puVar9;
      uVar2 = *puVar10;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar6;
      *(short *)puVar8 = (short)iVar6;
      iVar6 = ((uVar1 >> 0x10) - (uVar2 >> 0x10)) + (iVar6 >> 0x10);
      *(short *)((int)puVar8 + 2) = (short)iVar6;
      iVar6 = iVar6 >> 0x10;
      puVar3 = puVar8 + 1;
    } while (puVar10 < puVar7);
    for (; puVar7 = puVar3, puVar9 < puVar11; puVar9 = puVar9 + 1) {
      uVar1 = *puVar9;
      iVar6 = (uVar1 & 0xffff) + iVar6;
      *(short *)puVar7 = (short)iVar6;
      iVar6 = (uVar1 >> 0x10) + (iVar6 >> 0x10);
      *(short *)((int)puVar7 + 2) = (short)iVar6;
      iVar6 = iVar6 >> 0x10;
      puVar3 = puVar7 + 1;
      puVar8 = puVar7;
    }
    if (*puVar8 == 0) {
      do {
        puVar8 = puVar8 + -1;
        iVar4 = iVar4 + -1;
      } while (*puVar8 == 0);
      p_Var5->_wds = iVar4;
    }
    else {
      p_Var5->_wds = iVar4;
    }
  }
  return p_Var5;
}

double _ulp(double _x) {
	double_union a;
	__int32_t L;
	
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = ((uint)((ulong)_x >> 0x20) & 0x7ff00000) + 0xfcc00000;
  if ((long)iVar1 < 1) {
    uVar2 = -iVar1 >> 0x14;
    if ((int)uVar2 < 0x14) {
      uVar3 = (long)(0x80000 >> (uVar2 & 0x1f)) << 0x20;
    }
    else {
      if ((int)(uVar2 - 0x14) < 0x1f) {
        iVar1 = 1 << (0x1f - (uVar2 - 0x14) & 0x1f);
      }
      else {
        iVar1 = 1;
      }
      uVar3 = (long)iVar1 & 0xffffffff;
    }
  }
  else {
    uVar3 = (long)iVar1 << 0x20;
  }
  return uVar3;
}

double _b2d(_Bigint *a, int *e) {
	ULong *xa;
	ULong *xa0;
	ULong w;
	ULong y;
	ULong z;
	int k;
	double_union d;
	
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = a->_x;
  iVar1 = a->_wds;
  puVar6 = puVar8 + iVar1 + -1;
  uVar7 = *puVar6;
  iVar2 = _hi0bits(uVar7);
  *e = 0x20 - iVar2;
  if (iVar2 < 0xb) {
    uVar3 = (long)(int)(uVar7 >> (0xbU - iVar2 & 0x1f)) | 0x3ff00000;
    uVar4 = 0;
    if (puVar8 < puVar6) {
      uVar4 = puVar8[iVar1 + -2];
    }
    uVar7 = uVar7 << (iVar2 + 0x15U & 0x1f) | uVar4 >> (0xbU - iVar2 & 0x1f);
  }
  else {
    uVar4 = 0;
    if (puVar8 < puVar6) {
      puVar6 = puVar8 + iVar1 + -2;
      uVar4 = *puVar6;
    }
    uVar5 = iVar2 - 0xb;
    if (uVar5 == 0) {
      return ((long)(int)uVar7 | 0x3ff00000U) << 0x20 | (ulong)uVar4;
    }
    uVar3 = (long)(int)(uVar7 << (uVar5 & 0x1f)) |
            (long)(int)(uVar4 >> (-uVar5 & 0x1f)) | 0x3ff00000U;
    uVar7 = 0;
    if (puVar8 < puVar6) {
      uVar7 = puVar6[-1];
    }
    uVar7 = uVar4 << (uVar5 & 0x1f) | uVar7 >> (-uVar5 & 0x1f);
  }
  return uVar3 << 0x20 | (long)(int)uVar7 & 0xffffffffU;
}

_Bigint* _d2b(_reent *ptr, double _d, int *e, int *bits) {
	double_union d;
	_Bigint *b;
	int de;
	int i;
	int k;
	ULong *x;
	ULong y;
	ULong z;
	
  _Bigint *p_Var1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint y;
  uint z;
  
  p_Var1 = _Balloc(ptr,1);
  uVar3 = _d >> 0x20 & 0x7fffffff;
  y = (uint)(_d & 0xfffffffffffffU);
  z = (uint)((_d & 0xfffffffffffffU) >> 0x20);
  uVar6 = (uVar3 << 0x20) >> 0x34;
  if (uVar6 != 0) {
    z = z | 0x100000;
  }
  if (y == 0) {
    iVar4 = 1;
    iVar5 = _lo0bits((uint *)((uint)&y | 4));
    p_Var1->_wds = 1;
    uVar2 = iVar5 + 0x20;
    p_Var1->_x[0] = z;
  }
  else {
    uVar2 = _lo0bits(&y);
    if (uVar2 == 0) {
      p_Var1->_x[0] = y;
    }
    else {
      p_Var1->_x[0] = y | z << (-uVar2 & 0x1f);
      z = z >> (uVar2 & 0x1f);
    }
    iVar4 = 1;
    if (z != 0) {
      iVar4 = 2;
    }
    p_Var1[1]._next = (_Bigint *)z;
    p_Var1->_wds = iVar4;
  }
  if (uVar6 == 0) {
    *e = uVar2 - 0x432;
    iVar5 = _hi0bits(p_Var1->_x[iVar4 + -1]);
    iVar5 = iVar4 * 0x20 - iVar5;
  }
  else {
    iVar5 = 0x35 - uVar2;
    *e = ((uint)uVar3 >> 0x14) + (uVar2 - 0x433);
  }
  *bits = iVar5;
  return p_Var1;
}

double _ratio(_Bigint *a, _Bigint *b) {
	double_union da;
	double_union db;
	int k;
	int ka;
	int kb;
	
  int iVar1;
  double dVar2;
  double dVar3;
  int ka;
  int kb;
  
  dVar2 = (double)_b2d(a,&ka);
  dVar3 = (double)_b2d(b,(int *)((uint)&ka | 4));
  iVar1 = (ka - kb) + (a->_wds - b->_wds) * 0x20;
  if (iVar1 < 1) {
    dVar3 = (double)((ulong)dVar3 & 0xffffffff |
                    (long)((int)((ulong)dVar3 >> 0x20) + iVar1 * -0x100000) << 0x20);
  }
  else {
    dVar2 = (double)((ulong)dVar2 & 0xffffffff |
                    (long)((int)((ulong)dVar2 >> 0x20) + iVar1 * 0x100000) << 0x20);
  }
  return (long)(dVar2 / dVar3);
}

double _mprec_log10(int dig) {
	double v;
	
  double dVar1;
  
  dVar1 = 1.0;
  if (dig < 0x18) {
    dVar1 = *(double *)(&__mprec_tens + dig * 8);
  }
  else if (0 < dig) {
    do {
      dig = dig + -1;
      dVar1 = dVar1 * 10.0;
    } while (0 < dig);
  }
  return (long)dVar1;
}
