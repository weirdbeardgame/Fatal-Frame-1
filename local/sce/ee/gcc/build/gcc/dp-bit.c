// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#278, type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (#278, type name not equal)
typedef USItype halffractype;
// warning: multiple differing types with the same name (#278, type name not equal)
typedef DFtype FLO_type;
// warning: multiple differing types with the same name (#278, type name not equal)
typedef DItype intfrac;

// warning: multiple differing types with the same name (#278, size not equal)
typedef struct {
	fp_class_type class;
	unsigned int sign;
	int normal_exp;
	union {
		fractype ll;
		halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (#278, size not equal)
typedef union {
	FLO_type value;
	fractype value_raw;
	halffractype words[2];
	struct {
		fractype fraction;
		unsigned int exp : 11;
		unsigned int sign : 1;
	} bits;
} FLO_union_type;


FLO_type __pack_d(fp_number_type *src) {
  fp_class_type fVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  fVar1 = src->class;
  uVar4 = 0;
  uVar3 = (src->fraction).ll;
  if (fVar1 < CLASS_ZERO) {
    uVar4 = 0x7ff;
    uVar3 = uVar3 | 0x8000000000000;
    goto LAB_0023dcf8;
  }
  if (fVar1 == CLASS_INFINITY) {
LAB_0023dcb4:
    uVar4 = 0x7ff;
    uVar3 = 0;
  }
  else {
    if (fVar1 == CLASS_ZERO) {
      uVar3 = 0;
      goto LAB_0023dcf8;
    }
    if (uVar3 == 0) goto LAB_0023dcf8;
    iVar2 = src->normal_exp;
    if (iVar2 < -0x3fe) {
      uVar3 = uVar3 >> (long)(-0x3fe - iVar2);
      if (0x38 < (long)(-0x3fe - iVar2)) {
        uVar3 = 0;
      }
    }
    else {
      uVar4 = (ulong)(iVar2 + 0x3ff);
      if (0x3ff < iVar2) goto LAB_0023dcb4;
      if ((uVar3 & 0xff) == 0x80) {
        if ((uVar3 & 0x100) != 0) {
          uVar3 = uVar3 + 0x80;
        }
      }
      else {
        uVar3 = uVar3 + 0x7f;
      }
      if (uVar3 < 0x2000000000000000) {
        uVar3 = uVar3 >> 8;
        goto LAB_0023dcf8;
      }
      uVar3 = uVar3 >> 1;
      uVar4 = (ulong)(iVar2 + 0x400);
    }
    uVar3 = uVar3 >> 8;
  }
LAB_0023dcf8:
  return uVar3 & 0xfffffffffffff | (uVar4 & 0x7ff) << 0x34 | (long)(int)src->sign << 0x3f;
}

void __unpack_d(FLO_union_type *src, fp_number_type *dst) {
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = src->value_raw;
  uVar2 = uVar1 & 0xfffffffffffff;
  dst->sign = (uint)(uVar1 >> 0x3f);
  uVar3 = uVar1 >> 0x34 & 0x7ff;
  if (uVar3 == 0) {
    dst->class = CLASS_ZERO;
    return;
  }
  if (uVar3 != 0x7ff) {
    (dst->fraction).ll = uVar2 << 8 | 0x1000000000000000;
    dst->normal_exp = (int)uVar3 + -0x3ff;
    dst->class = CLASS_NUMBER;
    return;
  }
  if (uVar2 == 0) {
    dst->class = CLASS_INFINITY;
    return;
  }
  if ((uVar1 & 0x8000000000000) == 0) {
    dst->class = CLASS_SNAN;
  }
  else {
    dst->class = CLASS_QNAN;
  }
  (dst->fraction).ll = uVar2;
  return;
}

static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp) {
  fp_class_type fVar1;
  fp_class_type fVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  fVar1 = a->class;
  if (fVar1 < CLASS_ZERO) {
    return a;
  }
  fVar2 = b->class;
  if (CLASS_QNAN < fVar2) {
    if (fVar1 == CLASS_INFINITY) {
      if ((fVar2 ^ CLASS_INFINITY) != CLASS_SNAN) {
        return a;
      }
      if (a->sign == b->sign) {
        return a;
      }
      return (fp_number_type__278_34 *)&thenan_3;
    }
    if ((fVar2 ^ CLASS_INFINITY) != CLASS_SNAN) {
      if (fVar2 == CLASS_ZERO) {
        if ((fVar1 ^ CLASS_ZERO) != CLASS_SNAN) {
          return a;
        }
        *(undefined8 *)tmp = *(undefined8 *)a;
        *(undefined8 *)&tmp->normal_exp = *(undefined8 *)&a->normal_exp;
        tmp->fraction = a->fraction;
        tmp->sign = a->sign & b->sign;
        return tmp;
      }
      if ((fVar1 ^ CLASS_ZERO) != CLASS_SNAN) {
        iVar6 = a->normal_exp;
        iVar8 = b->normal_exp;
        uVar10 = (a->fraction).ll;
        iVar4 = iVar6 - iVar8;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        uVar9 = (b->fraction).ll;
        if (iVar4 < 0x40) {
          uVar7 = a->sign;
          if (iVar8 < iVar6) {
            uVar5 = b->sign;
            do {
              iVar8 = iVar8 + 1;
              uVar9 = uVar9 & 1 | uVar9 >> 1;
            } while (iVar8 < iVar6);
          }
          else {
            uVar5 = b->sign;
          }
          if (iVar6 < iVar8) {
            iVar4 = iVar8 - iVar6;
            do {
              uVar10 = uVar10 & 1 | uVar10 >> 1;
              iVar4 = iVar4 + -1;
              iVar6 = iVar8;
            } while (iVar4 != 0);
          }
        }
        else {
          uVar7 = a->sign;
          if (iVar8 < iVar6) {
            uVar9 = 0;
            uVar5 = b->sign;
          }
          else {
            uVar5 = b->sign;
            uVar10 = 0;
            iVar6 = iVar8;
          }
        }
        uVar3 = uVar10 + uVar9;
        if (uVar7 == uVar5) {
          tmp->sign = uVar7;
          tmp->normal_exp = iVar6;
          (tmp->fraction).ll = uVar3;
        }
        else {
          uVar3 = uVar9 - uVar10;
          if (uVar7 == 0) {
            uVar3 = uVar10 - uVar9;
          }
          if ((long)uVar3 < 0) {
            tmp->normal_exp = iVar6;
            (tmp->fraction).ll = -uVar3;
            tmp->sign = 1;
          }
          else {
            tmp->normal_exp = iVar6;
            (tmp->fraction).ll = uVar3;
            tmp->sign = 0;
          }
          uVar3 = (tmp->fraction).ll;
          while (uVar3 - 1 < 0xfffffffffffffff) {
            uVar3 = uVar3 * 2;
            (tmp->fraction).ll = uVar3;
            tmp->normal_exp = tmp->normal_exp + -1;
          }
        }
        tmp->class = CLASS_NUMBER;
        if (0x1fffffffffffffff < uVar3) {
          (tmp->fraction).ll = uVar3 & 1 | uVar3 >> 1;
          tmp->normal_exp = tmp->normal_exp + 1;
        }
        return tmp;
      }
    }
  }
  return b;
}

FLO_type dpadd(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__278_34 *src;
  long lVar1;
  fp_number_type__278_34 fStack_90;
  fp_number_type__278_34 fStack_70;
  fp_number_type__278_34 fStack_50;
  FLO_union_type__278_38 local_30;
  FLO_union_type__278_38 local_28;
  
  local_30.value = arg_a;
  local_28.value = arg_b;
  __unpack_d(&local_30,&fStack_90);
  __unpack_d(&local_28,&fStack_70);
  src = _fpadd_parts(&fStack_90,&fStack_70,&fStack_50);
  lVar1 = __pack_d(src);
  return lVar1;
}

FLO_type dpsub(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__278_34 *src;
  long lVar1;
  fp_number_type__278_34 fStack_90;
  fp_number_type__278_34 fStack_70;
  fp_number_type__278_34 fStack_50;
  FLO_union_type__278_38 local_30;
  FLO_union_type__278_38 local_28;
  
  local_30.value = arg_a;
  local_28.value = arg_b;
  __unpack_d(&local_30,&fStack_90);
  __unpack_d(&local_28,&fStack_70);
  fStack_70.sign = fStack_70.sign ^ 1;
  src = _fpadd_parts(&fStack_90,&fStack_70,&fStack_50);
  lVar1 = __pack_d(src);
  return lVar1;
}

FLO_type dpmul(FLO_type arg_a, FLO_type arg_b) {
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  fp_number_type__278_34 *src;
  ulong uVar5;
  ulong uVar6;
  fp_number_type__278_34 local_100;
  fp_number_type__278_34 local_e0;
  fp_number_type__278_34 local_c0;
  FLO_union_type__278_38 local_a0;
  FLO_union_type__278_38 local_98;
  
  local_a0.value = arg_a;
  local_98.value = arg_b;
  __unpack_d(&local_a0,&local_100);
  __unpack_d(&local_98,&local_e0);
  src = &local_c0;
  if (local_100.class < CLASS_ZERO) {
LAB_0023e1b0:
    local_100.sign = (uint)(local_100.sign != local_e0.sign);
    src = &local_100;
  }
  else {
    if (CLASS_QNAN < local_e0.class) {
      if (local_100.class == CLASS_INFINITY) {
        if (local_e0.class == CLASS_ZERO) {
LAB_0023e194:
          src = (fp_number_type__278_34 *)&thenan_3;
          goto LAB_0023e36c;
        }
        goto LAB_0023e1b0;
      }
      if (local_e0.class == CLASS_INFINITY) {
        if ((local_100.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0023e194;
      }
      else {
        if ((local_100.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0023e1b0;
        if (local_e0.class != CLASS_ZERO) {
          uVar1 = __muldi3(local_e0.fraction.ll & 0xffffffff,local_100.fraction.ll & 0xffffffff);
          uVar2 = __muldi3(local_e0.fraction.ll >> 0x20,local_100.fraction.ll & 0xffffffff);
          lVar4 = __muldi3(local_e0.fraction.ll & 0xffffffff,local_100.fraction.ll >> 0x20);
          lVar3 = __muldi3(local_e0.fraction.ll >> 0x20,local_100.fraction.ll >> 0x20);
          uVar6 = uVar2 + lVar4;
          uVar5 = uVar1 + (uVar6 << 0x20);
          local_c0.normal_exp = local_100.normal_exp + local_e0.normal_exp + 4;
          local_c0.sign = (uint)(local_100.sign != local_e0.sign);
          for (local_c0.fraction.ll =
                    ((ulong)(uVar6 < uVar2) << 0x20 | (ulong)(uVar5 < uVar1)) +
                    (uVar6 >> 0x20) + lVar3; 0x1fffffffffffffff < local_c0.fraction.ll;
              local_c0.fraction.ll = local_c0.fraction.ll >> 1) {
            local_c0.normal_exp = local_c0.normal_exp + 1;
            if ((local_c0.fraction.ll & 1) != 0) {
              uVar5 = uVar5 >> 1 | 0x8000000000000000;
            }
          }
          while (local_c0.fraction.ll < 0x1000000000000000) {
            local_c0.fraction.ll = local_c0.fraction.ll << 1;
            local_c0.normal_exp = local_c0.normal_exp + -1;
            if ((uVar5 & 0x8000000000000000) != 0) {
              local_c0.fraction.ll = local_c0.fraction.ll | 1;
            }
            uVar5 = uVar5 << 1;
          }
          if ((local_c0.fraction.ll & 0xff) == 0x80) {
            if ((local_c0.fraction.ll & 0x100) == 0) {
              if (uVar5 != 0) {
                local_c0.fraction.ll = local_c0.fraction.ll + 0x80;
              }
            }
            else {
              local_c0.fraction.ll = local_c0.fraction.ll + 0x80;
            }
          }
          local_c0.class = CLASS_NUMBER;
          goto LAB_0023e36c;
        }
      }
    }
    local_e0.sign = (uint)(local_100.sign != local_e0.sign);
    src = &local_e0;
  }
LAB_0023e36c:
  lVar4 = __pack_d(src);
  return lVar4;
}

FLO_type dpdiv(FLO_type arg_a, FLO_type arg_b) {
  bool bVar1;
  ulong uVar2;
  long lVar3;
  fp_number_type__278_34 *src;
  fp_number_type__fraction fVar4;
  fp_number_type__278_34 local_70;
  fp_number_type__278_34 local_50;
  FLO_union_type__278_38 local_30;
  FLO_union_type__278_38 local_28;
  
  src = &local_70;
  local_30.value = arg_a;
  local_28.value = arg_b;
  __unpack_d(&local_30,&local_70);
  __unpack_d(&local_28,&local_50);
  fVar4 = local_70.fraction;
  if ((CLASS_QNAN < local_70.class) && (src = &local_50, CLASS_QNAN < local_50.class)) {
    local_70.sign = local_70.sign ^ local_50.sign;
    if ((local_70.class == CLASS_INFINITY) || (local_70.class == CLASS_ZERO)) {
      src = &local_70;
      if (local_70.class == local_50.class) {
        src = (fp_number_type__278_34 *)&thenan_3;
      }
    }
    else if (local_50.class == CLASS_INFINITY) {
      local_70.fraction.ll = 0;
      local_70.normal_exp = 0;
      src = &local_70;
      fVar4.ll = local_70.fraction.ll;
    }
    else if (local_50.class == CLASS_ZERO) {
      local_70.class = CLASS_INFINITY;
      src = &local_70;
    }
    else {
      local_70.normal_exp = local_70.normal_exp - local_50.normal_exp;
      bVar1 = local_70.fraction.ll < local_50.fraction.ll;
      if (bVar1) {
        local_70.normal_exp = local_70.normal_exp + -1;
        local_70.fraction.ll = local_70.fraction.ll << 1;
        bVar1 = local_70.fraction.ll < local_50.fraction.ll;
      }
      uVar2 = 0x1000000000000000;
      fVar4.ll = 0;
      while( true ) {
        if (!bVar1) {
          fVar4.ll = fVar4.ll | uVar2;
          local_70.fraction.ll = local_70.fraction.ll - local_50.fraction.ll;
        }
        uVar2 = uVar2 >> 1;
        local_70.fraction.ll = local_70.fraction.ll << 1;
        if (uVar2 == 0) break;
        bVar1 = local_70.fraction.ll < local_50.fraction.ll;
      }
      src = &local_70;
      if ((fVar4.ll & 0xff) == 0x80) {
        if ((fVar4.ll & 0x100) == 0) {
          src = &local_70;
          if (local_70.fraction.ll != 0) {
            src = &local_70;
            fVar4.ll = fVar4.ll + 0x80;
          }
        }
        else {
          src = &local_70;
          fVar4.ll = fVar4.ll + 0x80;
        }
      }
    }
  }
  local_70.fraction = fVar4;
  lVar3 = __pack_d(src);
  return lVar3;
}

int __fpcmp_parts_d(fp_number_type *a, fp_number_type *b) {
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
            if ((b->fraction).ll < (a->fraction).ll) goto LAB_0023e5c0;
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
LAB_0023e5c0:
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

SItype dpcmp(FLO_type arg_a, FLO_type arg_b) {
  int iVar1;
  fp_number_type__278_34 fStack_70;
  fp_number_type__278_34 fStack_50;
  FLO_union_type__278_38 local_30;
  FLO_union_type__278_38 local_28;
  
  local_30.value = arg_a;
  local_28.value = arg_b;
  __unpack_d(&local_30,&fStack_70);
  __unpack_d(&local_28,&fStack_50);
  iVar1 = __fpcmp_parts_d(&fStack_70,&fStack_50);
  return iVar1;
}

FLO_type litodp(SItype arg_a) {
  long lVar1;
  fp_number_type__fraction fVar2;
  fp_number_type__278_34 local_30;
  
  fVar2 = (fp_number_type__fraction)(long)arg_a;
  local_30.sign = -(arg_a >> 0x1f);
  local_30.class = CLASS_NUMBER;
  if (fVar2.ll == 0) {
    local_30.class = CLASS_ZERO;
  }
  else {
    local_30.fraction = fVar2;
    if ((local_30.sign != 0) &&
       (local_30.fraction = (fp_number_type__fraction)(long)-arg_a, fVar2.ll == 0xffffffff80000000))
    {
      return -0x3e20000000000000;
    }
    local_30.normal_exp = 0x3c;
    for (; local_30.fraction.ll < 0x1000000000000000;
        local_30.fraction.ll = local_30.fraction.ll << 1) {
      local_30.normal_exp = local_30.normal_exp + -1;
    }
  }
  lVar1 = __pack_d(&local_30);
  return lVar1;
}

SItype dptoli(FLO_type arg_a) {
  int iVar1;
  fp_number_type__278_34 local_40;
  FLO_union_type__278_38 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  if ((local_40.class == CLASS_ZERO) || (local_40.class < CLASS_ZERO)) {
LAB_0023e758:
    iVar1 = 0;
  }
  else {
    if (local_40.class != CLASS_INFINITY) {
      if (local_40.normal_exp < 0) goto LAB_0023e758;
      if (local_40.normal_exp < 0x1f) {
        iVar1 = (int)(local_40.fraction.ll >> (long)(0x3c - local_40.normal_exp));
        if (local_40.sign == 0) {
          return iVar1;
        }
        return -iVar1;
      }
    }
    iVar1 = 0x7fffffff;
    if (local_40.sign != 0) {
      iVar1 = -0x80000000;
    }
  }
  return iVar1;
}

USItype dptoul(FLO_type arg_a) {
  uint uVar1;
  fp_number_type__278_34 local_40;
  FLO_union_type__278_38 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  if ((local_40.class == CLASS_ZERO) || (local_40.class < CLASS_ZERO)) {
LAB_0023e7f0:
    uVar1 = 0;
  }
  else {
    if (local_40.sign != 0) {
      return 0;
    }
    if (local_40.class != CLASS_INFINITY) {
      if (local_40.normal_exp < 0) goto LAB_0023e7f0;
      if (local_40.normal_exp < 0x20) {
        if (0x3c < local_40.normal_exp) {
          return (uint)(local_40.fraction.ll << (long)(local_40.normal_exp + -0x3c));
        }
        return (uint)(local_40.fraction.ll >> (long)(0x3c - local_40.normal_exp));
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

FLO_type __negdf2(FLO_type arg_a) {
  long lVar1;
  fp_number_type__278_34 fStack_40;
  FLO_union_type__278_38 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&fStack_40);
  fStack_40.sign = (uint)(fStack_40.sign == 0);
  lVar1 = __pack_d(&fStack_40);
  return lVar1;
}

DFtype __make_dp(fp_class_type class, unsigned int sign, int exp, UDItype frac) {
  long lVar1;
  fp_number_type__278_34 local_30;
  
  local_30.class = class;
  local_30.sign = sign;
  local_30.normal_exp = exp;
  local_30.fraction.ll = frac;
  lVar1 = __pack_d(&local_30);
  return lVar1;
}

SFtype dptofp(DFtype arg_a) {
  uint uVar1;
  uint frac;
  float fVar2;
  fp_number_type__278_34 local_40;
  FLO_union_type__278_38 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  uVar1 = (uint)((local_40.fraction.ll << 2) >> 0x20);
  frac = uVar1 | 1;
  if ((local_40.fraction.ll & 0x3fffffff) == 0) {
    frac = uVar1;
  }
  fVar2 = __make_fp(local_40.class,local_40.sign,local_40.normal_exp,frac);
  return fVar2;
}
