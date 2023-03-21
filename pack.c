// STATUS: NOT STARTED


_type2id() {
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = 0;
  lVar2 = 0;
  if (param_1 < 10) {
    iVar3 = (int)param_1 * 0x10;
    uVar1 = *(ulong *)(_strmap + iVar3 + 8);
    if (uVar1 == 0xffff000000) {
      lVar2 = 0x18;
    }
    else if (uVar1 < 0xffff000001) {
      if (uVar1 == 0xff00000000) {
        lVar2 = 0x20;
      }
    }
    else {
      lVar2 = 0;
    }
    uVar1 = *(ulong *)(_strmap + iVar3) | param_2 << lVar2;
  }
  return uVar1;
}

_id2type() {
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  uVar4 = _strmap._8_8_;
  puVar2 = (ulong *)_strmap;
  do {
    if (uVar4 == 0xffff000000) {
      uVar4 = *puVar2;
      if (uVar4 == 0xbd88000000) {
LAB_00231ec0:
        uVar3 = param_3 & 0xfff8000000;
        uVar1 = 7;
      }
      else if (uVar4 < 0xbd88000001) {
        uVar3 = param_3 & 0xffe0000000;
        if (uVar4 == 0xbd20000000) {
          uVar1 = 0x1f;
        }
        else {
          uVar3 = param_3 & 0xffff000000;
          if (uVar4 == 0xbd80000000) goto LAB_00231ec0;
          uVar1 = 0;
        }
      }
      else {
        if ((uVar4 == 0xbd90000000) || (uVar3 = param_3 & 0xffff000000, uVar4 == 0xbda0000000))
        goto LAB_00231ec0;
        uVar1 = 0;
      }
      if (uVar3 == uVar4) {
        uVar1 = (uint)(param_3 >> 0x18) & uVar1;
LAB_00231f14:
        *param_1 = uVar5;
        *param_2 = uVar1;
LAB_00231f28:
        iVar6 = 1;
      }
    }
    else if (uVar4 < 0xffff000001) {
      if (uVar4 == 0xff00000000) {
        uVar4 = *puVar2;
        if (uVar4 == 0xe000000000) {
          uVar3 = param_3 & 0xf000000000;
          uVar1 = 0xf;
        }
        else {
          uVar3 = param_3 & 0xff00000000;
          if (uVar4 == 0xc000000000) {
            uVar3 = param_3 & 0xe000000000;
            uVar1 = 0x1f;
          }
          else {
            uVar1 = 0;
          }
        }
        if (uVar3 == uVar4) {
          uVar1 = (uint)(param_3 >> 0x20) & uVar1;
          goto LAB_00231f14;
        }
      }
    }
    else if ((uVar4 == 0xffffffffff) && ((param_3 & 0xffffff0000) == *puVar2)) {
      *param_1 = uVar5;
      *param_2 = (uint)param_3 & 0xffff;
      goto LAB_00231f28;
    }
    uVar5 = uVar5 + 1;
    if ((9 < uVar5) || (iVar6 != 0)) {
      return iVar6;
    }
    uVar4 = puVar2[3];
    puVar2 = puVar2 + 2;
  } while( true );
}

sceMpegDemuxPssRing() {
  int iVar1;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong in_hi;
  undefined auStack_150 [24];
  ulong local_138;
  undefined auStack_120 [24];
  ulong local_108 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  
  lVar8 = 1;
  iVar6 = 0;
  iVar1 = *(int *)((int)param_1 + 0x40);
  local_a8 = *(int *)(iVar1 + 0x44);
  local_b0 = (code *)0x0;
  _sysbitInit(auStack_150,param_2,param_4,param_5);
  local_ac = 0;
  local_a4 = 0;
  if (*(int *)(iVar1 + 0x48) < 1) {
    uVar9 = (ulong)(param_3 << 3);
  }
  else {
    uVar9 = (ulong)(param_3 << 3);
    do {
      lVar5 = ((long)local_a8 | in_hi) + (long)(iVar6 * 0x18);
      plVar3 = (long *)lVar5;
      in_hi = (ulong)(int)((ulong)lVar5 >> 0x20);
      if (*plVar3 == 0xbdff000000) {
        local_ac = *(undefined4 *)((int)plVar3 + 0x14);
        local_b0 = *(code **)(plVar3 + 2);
      }
      iVar6 = iVar6 + 1;
    } while ((local_b0 == (code *)0x0) && (iVar6 < *(int *)(iVar1 + 0x48)));
  }
  do {
    lVar5 = _sysbitNext(auStack_150,0x20);
    if (lVar5 == 0x1ba) {
      _pack_header(auStack_150,auStack_120);
    }
    while (((lVar5 = _sysbitNext(auStack_150,0x18), lVar5 == 1 &&
            (lVar5 = _sysbitNext(auStack_150,0x20), lVar5 != 0x1ba)) &&
           (lVar5 = _sysbitNext(auStack_150,0x20), lVar5 != 0x1b9))) {
      bVar2 = uVar9 < local_138;
      if ((uVar9 <= local_138) || (lVar8 == 0)) goto LAB_00232210;
      _PES_packet(auStack_150,local_108);
      if (local_138 <= uVar9) {
        iVar6 = *(int *)(iVar1 + 0x48);
        iVar7 = 0;
        if (0 < iVar6) {
          do {
            lVar5 = ((long)local_a8 | in_hi) + (long)(iVar7 * 0x18);
            puVar4 = (ulong *)lVar5;
            in_hi = (ulong)(int)((ulong)lVar5 >> 0x20);
            if (*puVar4 == (local_108[0] & puVar4[1])) {
              local_d0 = 6;
              local_cc = _sysbitPtr(auStack_150,local_e0);
              local_c8 = _sysbitPtr(auStack_150,local_e8);
              local_c0 = local_f8;
              local_c4 = local_e4;
              local_b8 = local_f0;
              lVar8 = (**(code **)(puVar4 + 2))
                                (param_1,&local_d0,*(undefined4 *)((int)puVar4 + 0x14));
              iVar6 = *(int *)(iVar1 + 0x48);
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        if ((iVar7 == iVar6) && (local_b0 != (code *)0x0)) {
          local_d0 = 6;
          local_cc = _sysbitPtr(auStack_150,local_e0);
          local_c8 = _sysbitPtr(auStack_150,local_e8);
          local_c0 = local_f8;
          local_c4 = local_e4;
          local_b8 = local_f0;
          lVar8 = (*local_b0)(param_1,&local_d0,local_ac);
        }
        if (lVar8 != 0) {
          local_a4 = (undefined4)((local_138 << 0x1d) >> 0x20);
        }
      }
    }
    bVar2 = uVar9 < local_138;
LAB_00232210:
    if ((bVar2) || (lVar5 = _sysbitNext(auStack_150,0x20), lVar5 != 0x1ba)) {
      return local_a4;
    }
  } while( true );
}

sceMpegDemuxPss() {
  sceMpegDemuxPssRing();
  return;
}

sceMpegAddStrCallback() {
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  plVar4 = *(long **)(iVar1 + 0x44);
  lVar3 = _type2id(param_2,param_3);
  iVar2 = *(int *)(iVar1 + 0x48);
  iVar5 = 0;
  if (0 < iVar2) {
    if (lVar3 == *plVar4) {
      uVar6 = *(undefined4 *)(plVar4 + 2);
    }
    else {
      for (iVar5 = 1; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        if (lVar3 == plVar4[iVar5 * 3]) {
          uVar6 = *(undefined4 *)(plVar4 + iVar5 * 3 + 2);
          break;
        }
      }
    }
  }
  if (iVar5 < 0x40) {
    *(int *)(iVar1 + 0x48) = iVar2 + 1;
    plVar4 = plVar4 + iVar5 * 3;
    *plVar4 = lVar3;
    *(undefined4 *)((int)plVar4 + 0x14) = param_5;
    lVar3 = *(long *)(_strmap + (int)param_2 * 0x10 + 8);
    *(undefined4 *)(plVar4 + 2) = param_4;
    plVar4[1] = lVar3;
  }
  return uVar6;
}

_pack_header() {
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar7 = 0;
  _sysbitGet(param_1,0x22);
  uVar1 = _sysbitGet(param_1,3);
  _sysbitMarker(param_1);
  iVar2 = _sysbitGet(param_1,0xf);
  _sysbitMarker(param_1);
  uVar3 = _sysbitGet(param_1,0xf);
  _sysbitMarker(param_1);
  uVar4 = _sysbitGet(param_1,9);
  puVar8 = (undefined4 *)param_2;
  *puVar8 = uVar4;
  _sysbitGet(param_1,0x1e);
  uVar5 = _sysbitGet(param_1,3);
  puVar8[2] = uVar1 >> 2 & 1;
  puVar8[1] = uVar1 << 0x1e | iVar2 << 0xf | uVar3;
  if (uVar5 != 0) {
    do {
      _sysbitGet(param_1,8);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  lVar6 = _sysbitNext(param_1,0x20);
  if (lVar6 == 0x1bb) {
    puVar8[3] = 1;
    _system_header(param_1,param_2);
  }
  else {
    puVar8[3] = 0;
  }
  return 1;
}

_system_header() {
  long lVar1;
  
  _sysbitGet(param_1,0x38);
  _sysbitGet(param_1,0x28);
  while (lVar1 = _sysbitNext(param_1,1), lVar1 == 1) {
    _sysbitGet(param_1,0x18);
  }
  return 1;
}

_PES_packet() {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  
  iVar15 = (int)param_1;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(iVar15 + 0x18);
  _sysbitGet(param_1,0x18);
  lVar6 = _sysbitGet(param_1,8);
  *param_2 = lVar6 << 0x20;
  uVar1 = _sysbitGet(param_1,0x10);
  uVar13 = *param_2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0xffffffffffffffff;
  param_2[3] = 0xffffffffffffffff;
  if (uVar13 == 0xbc00000000) {
LAB_00232a20:
    iVar15 = *(int *)(param_2 + 1);
    if (uVar13 == 0xbf00000000) {
      uVar13 = _sysbitGet(param_1,0x20);
      iVar15 = iVar15 + -4;
      *param_2 = *param_2 | uVar13 & 0xffffffff;
    }
    if (iVar15 != 0) {
      _sysbitJump(param_1,iVar15);
    }
    return 1;
  }
  if ((((uVar13 == 0xbe00000000) || (uVar13 == 0xbf00000000)) || (uVar13 == 0xf000000000)) ||
     (((uVar13 == 0xf100000000 || (uVar13 == 0xff00000000)) ||
      ((uVar13 == 0xf200000000 || (uVar13 == 0xf800000000)))))) {
    if ((((uVar13 != 0xbc00000000) && (uVar13 != 0xbf00000000)) &&
        ((uVar13 != 0xf000000000 &&
         (((uVar13 != 0xf100000000 && (uVar13 != 0xff00000000)) && (uVar13 != 0xf200000000)))))) &&
       (uVar13 != 0xf800000000)) {
      if (uVar13 != 0xbe00000000) {
        return 1;
      }
      if (*(int *)(param_2 + 1) == 0) {
        return 1;
      }
      _sysbitJump(param_1);
      return 1;
    }
    goto LAB_00232a20;
  }
  _sysbitGet(param_1,2);
  uVar1 = _sysbitGet(param_1,2);
  *(undefined4 *)((int)param_2 + 0xc) = uVar1;
  _sysbitGet(param_1,4);
  uVar13 = _sysbitGet(param_1,2);
  iVar2 = _sysbitGet(param_1,1);
  lVar6 = _sysbitGet(param_1,4);
  lVar7 = _sysbitGet(param_1,1);
  iVar3 = _sysbitGet(param_1,8);
  uVar8 = *(undefined8 *)(iVar15 + 0x18);
  if ((uVar13 & 2) != 0) {
    _sysbitGet(param_1,4);
    uVar4 = _sysbitGet(param_1,3);
    _sysbitMarker(param_1);
    iVar5 = _sysbitGet(param_1,0xf);
    _sysbitMarker(param_1);
    uVar9 = _sysbitGet(param_1,0xf);
    _sysbitMarker(param_1);
    param_2[2] = ((long)(int)(uVar4 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar4 << 0x1e | iVar5 << 0xf) | uVar9) & 0xffffffff;
  }
  if (uVar13 == 3) {
    _sysbitGet(param_1,4);
    uVar4 = _sysbitGet(param_1,3);
    _sysbitMarker(param_1);
    iVar5 = _sysbitGet(param_1,0xf);
    _sysbitMarker(param_1);
    uVar13 = _sysbitGet(param_1,0xf);
    _sysbitMarker(param_1);
    param_2[3] = ((long)(int)(uVar4 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar4 << 0x1e | iVar5 << 0xf) | uVar13) & 0xffffffff;
  }
  if (iVar2 == 1) {
    _sysbitGet(param_1,0x30);
  }
  if (lVar6 != 0) {
    _sysbitGet(param_1,(&ES_DSM_trick_mode_add_copy_CRC_39)[(int)lVar6]);
  }
  if (lVar7 == 1) {
    lVar6 = _sysbitGet(param_1,1);
    lVar7 = _sysbitGet(param_1,1);
    lVar10 = _sysbitGet(param_1,1);
    lVar11 = _sysbitGet(param_1,1);
    _sysbitGet(param_1,3);
    lVar12 = _sysbitGet(param_1,1);
    if (lVar6 == 1) {
      _sysbitGet(param_1,0x30);
      _sysbitGet(param_1,0x30);
      _sysbitGet(param_1,0x20);
    }
    if (lVar7 == 1) {
      _Error(0x353d48);
      return 0;
    }
    if (lVar10 == 1) {
      _sysbitGet(param_1,0x10);
    }
    if (lVar11 == 1) {
      _sysbitGet(param_1,0x10);
    }
    if (lVar12 == 1) {
      uVar14 = 0;
      _sysbitMarker(param_1);
      uVar4 = _sysbitGet(param_1,7);
      if (uVar4 != 0) {
        do {
          _sysbitGet(param_1,8);
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar4);
        lVar6 = *(long *)(iVar15 + 0x18);
        goto LAB_0023291c;
      }
    }
  }
  lVar6 = *(long *)(iVar15 + 0x18);
LAB_0023291c:
  if (iVar3 != (int)((ulong)((lVar6 - (int)uVar8) * 0x20000000) >> 0x20)) {
    _sysbitJump(param_1);
  }
  iVar2 = *(int *)(param_2 + 1);
  iVar5 = (iVar2 - iVar3) + -3;
  *(int *)((int)param_2 + 0x24) = iVar5;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar15 + 0x18);
  if (*param_2 == 0xbd00000000) {
    uVar13 = _sysbitGet(param_1,0x20);
    iVar5 = (iVar2 - iVar3) + -7;
    *param_2 = *param_2 | uVar13 & 0xffffffff;
  }
  if (iVar5 == 0) {
    return 1;
  }
  _sysbitJump(param_1);
  return 1;
}
