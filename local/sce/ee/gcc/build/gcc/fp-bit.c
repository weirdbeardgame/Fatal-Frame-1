// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#279, type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (#279, type name not equal)
typedef UHItype halffractype;
// warning: multiple differing types with the same name (#279, type name not equal)
typedef SFtype FLO_type;
// warning: multiple differing types with the same name (#279, type name not equal)
typedef SItype intfrac;

// warning: multiple differing types with the same name (#279, size not equal)
typedef struct {
	fp_class_type class;
	unsigned int sign;
	int normal_exp;
	union {
		fractype ll;
		halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (#279, size not equal)
typedef union {
	FLO_type value;
	fractype value_raw;
	struct {
		fractype fraction;
		unsigned int exp : 8;
		unsigned int sign : 1;
	} bits;
} FLO_union_type;


FLO_type __pack_f(fp_number_type *src) {
  fp_class_type fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  fVar1 = src->class;
  uVar4 = 0;
  uVar3 = (src->fraction).ll;
  if (fVar1 < CLASS_ZERO) {
    uVar4 = 0xff;
    uVar3 = uVar3 | 0x100000;
    goto LAB_0023e9e0;
  }
  if (fVar1 == CLASS_INFINITY) {
LAB_0023e9a0:
    uVar4 = 0xff;
    uVar3 = 0;
  }
  else {
    if (fVar1 == CLASS_ZERO) {
      uVar3 = 0;
      goto LAB_0023e9e0;
    }
    if (uVar3 == 0) goto LAB_0023e9e0;
    iVar2 = src->normal_exp;
    if (iVar2 < -0x7e) {
      uVar3 = uVar3 >> (-iVar2 - 0x7eU & 0x1f);
      if (0x19 < (int)(-iVar2 - 0x7eU)) {
        uVar3 = 0;
      }
    }
    else {
      uVar4 = iVar2 + 0x7f;
      if (0x7f < iVar2) goto LAB_0023e9a0;
      if ((uVar3 & 0x7f) == 0x40) {
        if ((uVar3 & 0x80) != 0) {
          uVar3 = uVar3 + 0x40;
        }
      }
      else {
        uVar3 = uVar3 + 0x3f;
      }
      if (-1 < (int)uVar3) {
        uVar3 = uVar3 >> 7;
        goto LAB_0023e9e0;
      }
      uVar3 = uVar3 >> 1;
      uVar4 = iVar2 + 0x80;
    }
    uVar3 = uVar3 >> 7;
  }
LAB_0023e9e0:
  return (float)(uVar3 & 0x7fffff | (uVar4 & 0xff) << 0x17 | src->sign << 0x1f);
}

void __unpack_f(FLO_union_type *src, fp_number_type *dst) {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = src->value_raw;
  uVar2 = uVar1 & 0x7fffff;
  uVar3 = uVar1 >> 0x17 & 0xff;
  dst->sign = uVar1 >> 0x1f;
  if (uVar3 == 0) {
    dst->class = CLASS_ZERO;
    return;
  }
  if (uVar3 == 0xff) {
    if (uVar2 == 0) {
      dst->class = CLASS_INFINITY;
      return;
    }
    if ((uVar1 & 0x100000) == 0) {
      dst->class = CLASS_SNAN;
    }
    else {
      dst->class = CLASS_QNAN;
    }
    (dst->fraction).ll = uVar2;
    return;
  }
  (dst->fraction).ll = uVar2 << 7 | 0x40000000;
  dst->normal_exp = uVar3 - 0x7f;
  dst->class = CLASS_NUMBER;
  return;
}

static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp) {
  undefined *puVar1;
  fp_class_type fVar2;
  fp_class_type fVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  fVar2 = a->class;
  if (fVar2 < CLASS_ZERO) {
    return a;
  }
  fVar3 = b->class;
  if (CLASS_QNAN < fVar3) {
    if (fVar2 == CLASS_INFINITY) {
      if ((fVar3 ^ CLASS_INFINITY) != CLASS_SNAN) {
        return a;
      }
      if (a->sign == b->sign) {
        return a;
      }
      return (fp_number_type__279_34 *)&thenan_3;
    }
    if ((fVar3 ^ CLASS_INFINITY) != CLASS_SNAN) {
      if (fVar3 == CLASS_ZERO) {
        if ((fVar2 ^ CLASS_ZERO) != CLASS_SNAN) {
          return a;
        }
        puVar1 = (undefined *)((int)&a->sign + 3);
        uVar14 = (uint)puVar1 & 7;
        uVar13 = (uint)a & 7;
        uVar7 = *(long *)(puVar1 + -uVar14) << (7 - uVar14) * 8 & -1L << (8 - uVar13) * 8 |
                *(ulong *)((int)a - uVar13) >> uVar13 * 8;
        puVar1 = (undefined *)((int)&a->fraction + 3);
        uVar14 = (uint)puVar1 & 7;
        uVar13 = (uint)&a->normal_exp & 7;
        uVar9 = (*(long *)(puVar1 + -uVar14) << (7 - uVar14) * 8 |
                0xffffffffffffffffU >> (uVar14 + 1) * 8 & 2) & -1L << (8 - uVar13) * 8 |
                *(ulong *)((int)&a->normal_exp - uVar13) >> uVar13 * 8;
        puVar1 = (undefined *)((int)&tmp->sign + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar14);
        *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 | uVar7 >> (7 - uVar14) * 8;
        uVar14 = (uint)tmp & 7;
        *(ulong *)((int)tmp - uVar14) =
             uVar7 << uVar14 * 8 |
             *(ulong *)((int)tmp - uVar14) & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        puVar1 = (undefined *)((int)&tmp->fraction + 3);
        uVar14 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar14);
        *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 | uVar9 >> (7 - uVar14) * 8;
        uVar14 = (uint)&tmp->normal_exp & 7;
        puVar4 = (ulong *)((int)&tmp->normal_exp - uVar14);
        *puVar4 = uVar9 << uVar14 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
        tmp->sign = a->sign & b->sign;
        return tmp;
      }
      if ((fVar2 ^ CLASS_ZERO) != CLASS_SNAN) {
        iVar10 = a->normal_exp;
        iVar11 = b->normal_exp;
        uVar14 = (a->fraction).ll;
        iVar8 = iVar10 - iVar11;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        uVar13 = (b->fraction).ll;
        if (iVar8 < 0x20) {
          uVar12 = a->sign;
          if (iVar11 < iVar10) {
            uVar6 = b->sign;
            do {
              iVar11 = iVar11 + 1;
              uVar13 = uVar13 & 1 | uVar13 >> 1;
            } while (iVar11 < iVar10);
          }
          else {
            uVar6 = b->sign;
          }
          if (iVar10 < iVar11) {
            iVar8 = iVar11 - iVar10;
            do {
              uVar14 = uVar14 & 1 | uVar14 >> 1;
              iVar8 = iVar8 + -1;
              iVar10 = iVar11;
            } while (iVar8 != 0);
          }
        }
        else {
          uVar12 = a->sign;
          if (iVar11 < iVar10) {
            uVar13 = 0;
            uVar6 = b->sign;
          }
          else {
            uVar6 = b->sign;
            uVar14 = 0;
            iVar10 = iVar11;
          }
        }
        uVar5 = uVar14 + uVar13;
        if (uVar12 == uVar6) {
          tmp->sign = uVar12;
          tmp->normal_exp = iVar10;
          (tmp->fraction).ll = uVar5;
        }
        else {
          uVar6 = uVar13 - uVar14;
          if (uVar12 == 0) {
            uVar6 = uVar14 - uVar13;
          }
          if ((int)uVar6 < 0) {
            tmp->normal_exp = iVar10;
            (tmp->fraction).ll = -uVar6;
            tmp->sign = 1;
          }
          else {
            tmp->normal_exp = iVar10;
            (tmp->fraction).ll = uVar6;
            tmp->sign = 0;
          }
          uVar5 = (tmp->fraction).ll;
          while (uVar5 - 1 < 0x3fffffff) {
            uVar5 = uVar5 * 2;
            (tmp->fraction).ll = uVar5;
            tmp->normal_exp = tmp->normal_exp + -1;
          }
        }
        tmp->class = CLASS_NUMBER;
        if ((int)uVar5 < 0) {
          (tmp->fraction).ll = uVar5 & 1 | uVar5 >> 1;
          tmp->normal_exp = tmp->normal_exp + 1;
        }
        return tmp;
      }
    }
  }
  return b;
}

FLO_type fpadd(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__279_34 *src;
  float fVar1;
  fp_number_type__279_34 fStack_60;
  fp_number_type__279_34 fStack_50;
  fp_number_type__279_34 fStack_40;
  FLO_union_type__279_38 local_30;
  FLO_union_type__279_38 local_2c [3];
  
  local_30.value = arg_a;
  local_2c[0].value = arg_b;
  __unpack_f(&local_30,&fStack_60);
  __unpack_f(local_2c,&fStack_50);
  src = _fpadd_parts(&fStack_60,&fStack_50,&fStack_40);
  fVar1 = __pack_f(src);
  return fVar1;
}

FLO_type fpsub(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__279_34 *src;
  float fVar1;
  fp_number_type__279_34 fStack_60;
  fp_number_type__279_34 fStack_50;
  fp_number_type__279_34 fStack_40;
  FLO_union_type__279_38 local_30;
  FLO_union_type__279_38 local_2c [3];
  
  local_30.value = arg_a;
  local_2c[0].value = arg_b;
  __unpack_f(&local_30,&fStack_60);
  __unpack_f(local_2c,&fStack_50);
  fStack_50.sign = fStack_50.sign ^ 1;
  src = _fpadd_parts(&fStack_60,&fStack_50,&fStack_40);
  fVar1 = __pack_f(src);
  return fVar1;
}

FLO_type fpmul(FLO_type arg_a, FLO_type arg_b) {
  uint uVar1;
  fp_number_type__279_34 *src;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  fp_number_type__279_34 local_60;
  fp_number_type__279_34 local_50;
  fp_number_type__279_34 local_40;
  FLO_union_type__279_38 local_30;
  FLO_union_type__279_38 local_2c [3];
  
  local_30.value = arg_a;
  local_2c[0].value = arg_b;
  __unpack_f(&local_30,&local_60);
  __unpack_f(local_2c,&local_50);
  src = &local_40;
  if (local_60.class < CLASS_ZERO) {
LAB_0023ee54:
    local_60.sign = (uint)(local_60.sign != local_50.sign);
    src = &local_60;
  }
  else {
    if (CLASS_QNAN < local_50.class) {
      if (local_60.class == CLASS_INFINITY) {
        if (local_50.class == CLASS_ZERO) {
LAB_0023ee38:
          src = (fp_number_type__279_34 *)&thenan_3;
          goto LAB_0023ef94;
        }
        goto LAB_0023ee54;
      }
      if (local_50.class == CLASS_INFINITY) {
        if ((local_60.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0023ee38;
      }
      else {
        if ((local_60.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0023ee54;
        if (local_50.class != CLASS_ZERO) {
          uVar1 = (uint)((ulong)local_60.fraction.ll * (ulong)local_50.fraction.ll >> 0x20);
          uVar3 = (long)(int)((ulong)local_60.fraction.ll * (ulong)local_50.fraction.ll) &
                  0xffffffff;
          local_40.sign = (uint)(local_60.sign != local_50.sign);
          local_40.normal_exp = local_60.normal_exp + local_50.normal_exp + 2;
          uVar2 = (uint)uVar3;
          uVar3 = (long)((ulong)uVar1 << 0x20 | uVar3) >> 0x20;
          if ((long)uVar3 < 0) {
            local_40.normal_exp = local_60.normal_exp + local_50.normal_exp + 3;
            if ((uVar3 & 1) != 0) {
              uVar2 = uVar2 >> 1 | 0x80000000;
            }
            uVar3 = (ulong)(int)(uVar1 >> 1);
          }
          while (local_40.fraction.ll = (uint)uVar3, uVar3 < 0x40000000) {
            local_40.normal_exp = local_40.normal_exp + -1;
            uVar3 = (long)(int)(local_40.fraction.ll << 1);
            if ((uVar2 & 0x80000000) != 0) {
              uVar3 = (long)(int)(local_40.fraction.ll << 1) | 1;
            }
            uVar2 = uVar2 << 1;
          }
          if ((uVar3 & 0x7f) == 0x40) {
            if ((uVar3 & 0x80) == 0) {
              if (uVar2 != 0) {
                local_40.fraction.ll = local_40.fraction.ll + 0x40;
              }
            }
            else {
              local_40.fraction.ll = local_40.fraction.ll + 0x40;
            }
          }
          local_40.class = CLASS_NUMBER;
          goto LAB_0023ef94;
        }
      }
    }
    local_50.sign = (uint)(local_60.sign != local_50.sign);
    src = &local_50;
  }
LAB_0023ef94:
  fVar4 = __pack_f(src);
  return fVar4;
}

FLO_type fpdiv(FLO_type arg_a, FLO_type arg_b) {
  bool bVar1;
  uint uVar2;
  fp_number_type__279_34 *src;
  fp_number_type__fraction_conflict fVar3;
  float fVar4;
  fp_number_type__279_34 local_50;
  fp_number_type__279_34 local_40;
  FLO_union_type__279_38 local_30;
  FLO_union_type__279_38 local_2c [3];
  
  src = &local_50;
  local_30.value = arg_a;
  local_2c[0].value = arg_b;
  __unpack_f(&local_30,&local_50);
  __unpack_f(local_2c,&local_40);
  fVar3 = local_50.fraction;
  if ((CLASS_QNAN < local_50.class) && (src = &local_40, CLASS_QNAN < local_40.class)) {
    local_50.sign = local_50.sign ^ local_40.sign;
    if ((local_50.class == CLASS_INFINITY) || (local_50.class == CLASS_ZERO)) {
      src = &local_50;
      if (local_50.class == local_40.class) {
        src = (fp_number_type__279_34 *)&thenan_3;
      }
    }
    else if (local_40.class == CLASS_INFINITY) {
      local_50.fraction.ll = 0;
      local_50.normal_exp = 0;
      src = &local_50;
      fVar3.ll = local_50.fraction.ll;
    }
    else if (local_40.class == CLASS_ZERO) {
      local_50.class = CLASS_INFINITY;
      src = &local_50;
    }
    else {
      local_50.normal_exp = local_50.normal_exp - local_40.normal_exp;
      bVar1 = local_50.fraction.ll < local_40.fraction.ll;
      if (bVar1) {
        local_50.normal_exp = local_50.normal_exp + -1;
        local_50.fraction.ll = local_50.fraction.ll << 1;
        bVar1 = local_50.fraction.ll < local_40.fraction.ll;
      }
      uVar2 = 0x40000000;
      fVar3.ll = 0;
      while( true ) {
        if (!bVar1) {
          fVar3.ll = fVar3.ll | uVar2;
          local_50.fraction.ll = local_50.fraction.ll - local_40.fraction.ll;
        }
        uVar2 = uVar2 >> 1;
        local_50.fraction.ll = local_50.fraction.ll << 1;
        if (uVar2 == 0) break;
        bVar1 = local_50.fraction.ll < local_40.fraction.ll;
      }
      src = &local_50;
      if ((fVar3.ll & 0x7f) == 0x40) {
        if ((fVar3.ll & 0x80) == 0) {
          src = &local_50;
          if (local_50.fraction.ll != 0) {
            src = &local_50;
            fVar3.ll = fVar3.ll + 0x40;
          }
        }
        else {
          src = &local_50;
          fVar3.ll = fVar3.ll + 0x40;
        }
      }
    }
  }
  local_50.fraction = fVar3;
  fVar4 = __pack_f(src);
  return fVar4;
}

int __fpcmp_parts_f(fp_number_type *a, fp_number_type *b) {
  fp_class_type fVar1;
  fp_class_type fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = a->class;
  if ((fVar1 < CLASS_ZERO) || (fVar2 = b->class, fVar2 < CLASS_ZERO)) {
    return 1;
  }
  if (fVar1 == CLASS_INFINITY) {
    if ((fVar2 ^ CLASS_INFINITY) == CLASS_SNAN) {
      return b->sign - a->sign;
    }
    uVar4 = a->sign;
  }
  else {
    if ((fVar2 ^ CLASS_INFINITY) == CLASS_SNAN) {
      iVar3 = 1;
      if (b->sign == 0) {
        iVar3 = -1;
      }
      return iVar3;
    }
    if (fVar1 == CLASS_ZERO) {
      if ((fVar2 ^ CLASS_ZERO) == CLASS_SNAN) {
        return 0;
      }
      iVar3 = -1;
      if (b->sign != 0) {
        iVar3 = 1;
      }
      return iVar3;
    }
    if ((fVar2 ^ CLASS_ZERO) != CLASS_SNAN) {
      uVar4 = a->sign;
      if (uVar4 == b->sign) {
        if (a->normal_exp <= b->normal_exp) {
          if (b->normal_exp <= a->normal_exp) {
            if ((b->fraction).ll < (a->fraction).ll) goto LAB_0023f1c8;
            if ((b->fraction).ll <= (a->fraction).ll) {
              return 0;
            }
          }
          iVar3 = 1;
          if (uVar4 == 0) {
            iVar3 = -1;
          }
          return iVar3;
        }
      }
LAB_0023f1c8:
      iVar3 = -1;
      if (uVar4 == 0) {
        iVar3 = 1;
      }
      return iVar3;
    }
    uVar4 = a->sign;
  }
  iVar3 = -1;
  if (uVar4 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}

SItype fpcmp(FLO_type arg_a, FLO_type arg_b) {
  int iVar1;
  fp_number_type__279_34 fStack_50;
  fp_number_type__279_34 fStack_40;
  FLO_union_type__279_38 local_30;
  FLO_union_type__279_38 local_2c [3];
  
  local_30.value = arg_a;
  local_2c[0].value = arg_b;
  __unpack_f(&local_30,&fStack_50);
  __unpack_f(local_2c,&fStack_40);
  iVar1 = __fpcmp_parts_f(&fStack_50,&fStack_40);
  return iVar1;
}

FLO_type sitofp(SItype arg_a) {
  float fVar1;
  fp_number_type__279_34 local_20;
  
  local_20.sign = -(arg_a >> 0x1f);
  local_20.class = CLASS_NUMBER;
  if (arg_a == 0) {
    local_20.class = CLASS_ZERO;
  }
  else {
    local_20.normal_exp = 0x1e;
    local_20.fraction = (fp_number_type__fraction_conflict)arg_a;
    if ((local_20.sign != 0) && (local_20.fraction.ll = -arg_a, arg_a == -0x80000000)) {
      return -2.147484e+09;
    }
    if (local_20.fraction.ll < 0x40000000) {
      local_20.normal_exp = 0x1e;
      do {
        local_20.fraction.ll = local_20.fraction.ll << 1;
        local_20.normal_exp = local_20.normal_exp + -1;
      } while (local_20.fraction.ll < 0x40000000);
    }
  }
  fVar1 = __pack_f(&local_20);
  return fVar1;
}

SItype fptosi(FLO_type arg_a) {
  uint uVar1;
  int iVar2;
  fp_number_type__279_34 local_30;
  FLO_union_type__279_38 local_20 [4];
  
  local_20[0].value = arg_a;
  __unpack_f(local_20,&local_30);
  if ((local_30.class == CLASS_ZERO) || (local_30.class < CLASS_ZERO)) {
LAB_0023f360:
    iVar2 = 0;
  }
  else {
    if (local_30.class != CLASS_INFINITY) {
      if (local_30.normal_exp < 0) goto LAB_0023f360;
      if (local_30.normal_exp < 0x1f) {
        uVar1 = local_30.fraction.ll >> (0x1eU - local_30.normal_exp & 0x1f);
        if (local_30.sign == 0) {
          return uVar1;
        }
        return -uVar1;
      }
    }
    iVar2 = 0x7fffffff;
    if (local_30.sign != 0) {
      iVar2 = -0x80000000;
    }
  }
  return iVar2;
}

USItype fptoui(FLO_type arg_a) {
  uint uVar1;
  fp_number_type__279_34 local_30;
  FLO_union_type__279_38 local_20 [4];
  
  local_20[0].value = arg_a;
  __unpack_f(local_20,&local_30);
  if ((local_30.class == CLASS_ZERO) || (local_30.class < CLASS_ZERO)) {
LAB_0023f3f0:
    uVar1 = 0;
  }
  else {
    if (local_30.sign != 0) {
      return 0;
    }
    if (local_30.class != CLASS_INFINITY) {
      if (local_30.normal_exp < 0) goto LAB_0023f3f0;
      if (local_30.normal_exp < 0x20) {
        if (local_30.normal_exp < 0x1f) {
          return local_30.fraction.ll >> (0x1eU - local_30.normal_exp & 0x1f);
        }
        return local_30.fraction.ll << (local_30.normal_exp - 0x1eU & 0x1f);
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

FLO_type __negsf2(FLO_type arg_a) {
  float fVar1;
  fp_number_type__279_34 fStack_30;
  FLO_union_type__279_38 local_20 [4];
  
  local_20[0].value = arg_a;
  __unpack_f(local_20,&fStack_30);
  fStack_30.sign = (uint)(fStack_30.sign == 0);
  fVar1 = __pack_f(&fStack_30);
  return fVar1;
}

SFtype __make_fp(fp_class_type class, unsigned int sign, int exp, USItype frac) {
  float fVar1;
  fp_number_type__279_34 local_20;
  
  local_20.class = class;
  local_20.sign = sign;
  local_20.normal_exp = exp;
  local_20.fraction.ll = frac;
  fVar1 = __pack_f(&local_20);
  return fVar1;
}

DFtype fptodp(SFtype arg_a) {
  long lVar1;
  fp_number_type__279_34 local_30;
  FLO_union_type__279_38 local_20 [4];
  
  local_20[0].value = arg_a;
  __unpack_f(local_20,&local_30);
  lVar1 = __make_dp(local_30.class,local_30.sign,local_30.normal_exp,
                    (ulong)((long)(int)local_30.fraction.ll << 0x20) >> 2);
  return lVar1;
}
