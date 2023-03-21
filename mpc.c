// STATUS: NOT STARTED


static _motionComp0() {
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong *puVar10;
  
  iVar2 = param_1 / _widthMB;
  param_1 = param_1 % _widthMB;
  if (_widthMB == 0) {
    trap(7);
  }
  if ((param_3 & 1) == 0) {
    if (2 < (int)param_4 - 1U) {
      _Error1(0x353f70,param_4);
      _isError = 1;
      return 0;
    }
    _getAllRefs(param_1 << 4,iVar2 << 4,param_3);
    do {
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar5 >> 8 & 1) != 0);
    iVar9 = 0;
    iVar3 = *(int *)(_mbcont + _mbcont._640_4_ * 0x140 + 300);
    puVar10 = (ulong *)((uint)_sprtag & 0xfffffff | 0x20000000);
    if (0 < iVar3) {
      do {
        iVar7 = iVar9 * 4;
        lVar8 = 3;
        if (iVar9 == iVar3 + -1) {
          lVar8 = 0;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + _mbcont._640_4_ * 0x140;
        iVar4 = *(int *)(_mbcont + iVar7 + 0x18);
        *puVar10 = ((long)*(int *)(_mbcont + iVar7 + 8) & 0xfffffffU) << 0x20 | 0x30000030;
        puVar10[2] = ((long)iVar4 & 0xfffffffU) << 0x20 | lVar8 << 0x1c | 0x30;
        puVar10 = puVar10 + 4;
      } while (iVar9 < iVar3);
    }
    SYNC(0);
    REG_DMAC_9_SPR_TO_SADR = *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140);
    REG_DMAC_9_SPR_TO_TADR = _sprtag;
    REG_DMAC_9_SPR_TO_QWC = 0;
    REG_DMAC_9_SPR_TO_CHCR = 0x105;
    *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x138) = 1;
  }
  else {
    do {
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar5 >> 8 & 1) != 0);
    *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x138) = 0;
  }
  if ((param_2 == 1) && ((param_3 & 2) != 0)) {
    *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x134) = 1;
  }
  else {
    *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x134) = 0;
  }
  iVar3 = _picture_structure;
  bVar1 = _picture_structure == 3;
  *(int *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x130) = (int)(param_3 & 1);
  if (bVar1) {
    *(int *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x128) =
         *_curFrame + (param_1 * _curFrame[4] + iVar2) * 0x180;
  }
  else {
    piVar6 = _curBot;
    if (iVar3 != 2) {
      piVar6 = _curTop;
    }
    *(int *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x128) =
         *piVar6 + (param_1 * piVar6[4] + iVar2) * 0x180;
  }
  return 1;
}

_getAllRefs() {
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined *local_c0 [4];
  uint local_b0;
  
  local_b0 = param_3;
  param_3 = param_3 & 8;
  *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 300) = 0;
  if ((param_3 == 0) && (_picture_coding_type != 2)) goto LAB_00234a64;
  if (_picture_structure == 3) {
    if ((param_4 == 2) || (param_3 == 0)) {
      local_d0[0] = *param_5;
      puVar6 = _forwFrame;
      goto LAB_00234a3c;
    }
    if (param_4 == 1) {
      _getRef0(_forwFrame,*param_6,0,0,8,param_1,param_2,*param_5);
      _getRef0(_forwFrame,param_6[2],1,0,8,param_1,param_2,param_5[4]);
      goto LAB_00234a64;
    }
    if (param_4 != 3) {
      _Error1(0x353f98,param_4);
      goto LAB_00234a64;
    }
    _dualPrimeVector(local_d0,param_7,*param_5,(int)param_5[1] >> 1);
    _getRef0(_forwFrame,0,0,0,8,param_1,param_2,*param_5);
    _getRef0(_forwFrame,1,0,0,8,param_1,param_2,local_d0[0]);
    _getRef0(_forwFrame,1,1,0,8,param_1,param_2,*param_5);
    uVar7 = 1;
    uVar8 = 0;
    uVar9 = 8;
    local_d0[0] = local_c8;
    puVar6 = _forwFrame;
  }
  else {
    uVar11 = (uint)(_picture_structure == 2);
    uVar10 = 0;
    local_c0[0] = _forwTop;
    local_c0[1] = _forwBot;
    local_c0[2] = _backTop;
    local_c0[3] = _backBot;
    if ((_picture_coding_type == 2) && (uVar10 = 0, _isSecondField != 0)) {
      uVar10 = (uint)(uVar11 != *param_6);
    }
    if (param_4 == 1) {
      uVar11 = *param_6;
    }
    else {
      if (param_3 != 0) {
        if (param_4 != 2) {
          if (param_4 != 3) {
            _Error1(0x353fb8,param_4);
            goto LAB_00234a64;
          }
          bVar2 = _isSecondField != 0;
          _dualPrimeVector(local_d0,param_7,*param_5,param_5[1]);
          _getRef0(local_c0[uVar11],0,0,0,0x10,param_1,param_2,*param_5);
          iVar5 = (uint)bVar2 * 8;
          iVar3 = iVar5 + 4;
          if (uVar11 != 0) {
            iVar3 = iVar5;
          }
          puVar6 = *(undefined **)((int)local_c0 + iVar3);
          goto LAB_00234a3c;
        }
        _getRef0(local_c0[uVar10 * 2 + *param_6],0,0,0,8,param_1,param_2,*param_5);
        uVar10 = 0;
        if (_picture_coding_type == 2) {
          uVar4 = param_6[2];
          if (_isSecondField != 0) {
            uVar10 = (uint)(uVar11 != uVar4);
          }
        }
        else {
          uVar4 = param_6[2];
        }
        local_d0[0] = param_5[4];
        uVar8 = 8;
        puVar6 = local_c0[uVar10 * 2 + uVar4];
        uVar9 = 8;
        uVar7 = 0;
        goto LAB_00234a40;
      }
      uVar11 = *param_6;
    }
    local_d0[0] = *param_5;
    puVar6 = local_c0[uVar10 * 2 + uVar11];
LAB_00234a3c:
    uVar9 = 0x10;
    uVar8 = 0;
    uVar7 = 0;
  }
LAB_00234a40:
  _getRef0(puVar6,0,uVar7,uVar8,uVar9,param_1,param_2,local_d0[0]);
LAB_00234a64:
  if ((local_b0 & 4) != 0) {
    if (_picture_structure == 3) {
      if (param_4 != 2) {
        _getRef0(_backFrame,param_6[1],0,0,8,param_1,param_2,param_5[2]);
        _getRef0(_backFrame,param_6[3],1,0,8,param_1,param_2,param_5[6]);
        return;
      }
      uVar1 = param_5[2];
      puVar6 = _backFrame;
    }
    else {
      if (param_4 != 1) {
        if (param_4 != 2) {
          _Error1(0x353fd8,param_4);
          return;
        }
        puVar6 = _backTop;
        if (param_6[1] != 0) {
          puVar6 = _backBot;
        }
        _getRef0(puVar6,0,0,0,8,param_1,param_2,param_5[2]);
        puVar6 = _backTop;
        if (param_6[3] != 0) {
          puVar6 = _backBot;
        }
        _getRef0(puVar6,0,0,8,8,param_1,param_2,param_5[6]);
        return;
      }
      puVar6 = _backTop;
      if (param_6[1] != 0) {
        puVar6 = _backBot;
      }
      uVar1 = param_5[2];
    }
    _getRef0(puVar6,0,0,0,0x10,param_1,param_2,uVar1);
  }
  return;
}

_getRef0() {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  puVar6 = _refBlockp;
  iVar7 = _mbcont._640_4_ * 0x140;
  iVar1 = *(int *)(_mbcont + iVar7 + 300);
  iVar16 = ((int)param_8 >> 1) + param_6;
  puVar15 = (undefined4 *)(iVar7 + iVar1 * 0x1c + 0x348ab0);
  puVar13 = (undefined4 *)(iVar7 + iVar1 * 0x1c + 0x348a40);
  iVar7 = (int)param_9 >> 1;
  if (param_10 != 0) {
    iVar7 = iVar7 << 1;
  }
  iVar10 = iVar7 + param_7 + param_4 + param_2;
  iVar7 = param_1[4];
  iVar12 = iVar16 >> 4;
  iVar14 = iVar10 >> 4;
  puVar8 = _refBlockp + (param_3 + param_4) * 0x20;
  puVar13[1] = iVar16 + iVar12 * -0x10;
  iVar7 = iVar12 * iVar7 + iVar14;
  iVar10 = iVar10 + iVar14 * -0x10;
  *puVar13 = puVar8;
  if ((param_9 & 1) == 0) {
    if (iVar10 + (param_5 << (param_10 & 0x1f)) < 0x11) {
      puVar13[2] = param_5;
      goto LAB_00234dec;
    }
    iVar16 = (0x10 >> (param_10 & 0x1f)) - (iVar10 >> (param_10 & 0x1f));
    puVar13[2] = iVar16;
    puVar13[3] = param_5 - iVar16;
  }
  else if (iVar10 + (param_5 << (param_10 & 0x1f)) < 0x10) {
    puVar13[2] = param_5;
LAB_00234dec:
    puVar13[3] = 0;
  }
  else {
    iVar16 = ((0x10 >> (param_10 & 0x1f)) - (iVar10 >> (param_10 & 0x1f))) + -1;
    puVar13[2] = iVar16;
    puVar13[3] = param_5 - iVar16;
  }
  iVar9 = *(int *)(_mbcont + _mbcont._640_4_ * 0x140) + iVar1 * 0x600;
  puVar13[4] = 0x10 << (param_10 & 0x1f);
  iVar17 = ((int)(param_8 - ((int)param_8 >> 0x1f)) >> 2) + (param_6 >> 1);
  puVar13[5] = iVar9 + iVar10 * 0x10;
  param_4 = param_4 >> 1;
  puVar13[6] = iVar9 + iVar10 * 0x10 + 0x300;
  param_5 = param_5 >> 1;
  iVar16 = (int)(param_9 - ((int)param_9 >> 0x1f)) >> 2;
  if (param_10 == 0) {
    iVar16 = iVar16 + (param_7 >> 1) + param_4 + param_2;
  }
  else {
    iVar16 = iVar16 * 2 + (param_7 >> 1) + param_4 + param_2;
  }
  iVar11 = iVar17 >> 3;
  iVar10 = iVar16 + (iVar16 >> 3) * -8;
  uVar18 = (int)param_9 / 2 & 1;
  puVar15[1] = iVar17 + iVar11 * -8;
  *puVar15 = puVar6 + (param_3 + param_4) * 0x10 + 0x200;
  if (uVar18 == 0) {
    if (8 < iVar10 + (param_5 << (param_10 & 0x1f))) {
      iVar17 = (8 >> (param_10 & 0x1f)) - (iVar10 >> (param_10 & 0x1f));
      puVar15[2] = iVar17;
      puVar15[3] = param_5 - iVar17;
      goto LAB_00234f6c;
    }
    puVar15[2] = param_5;
  }
  else {
    if (7 < iVar10 + (param_5 << (param_10 & 0x1f))) {
      iVar17 = ((8 >> (param_10 & 0x1f)) - (iVar10 >> (param_10 & 0x1f))) + -1;
      puVar15[2] = iVar17;
      puVar15[3] = param_5 - iVar17;
      goto LAB_00234f6c;
    }
    puVar15[2] = param_5;
  }
  puVar15[3] = 0;
LAB_00234f6c:
  puVar15[4] = 8 << (param_10 & 0x1f);
  iVar5 = _mbcont._640_4_ * 0x140;
  iVar17 = param_1[4];
  iVar2 = *param_1;
  iVar9 = ((iVar11 - iVar12) * 2 + ((iVar16 >> 3) - iVar14)) * 0x180 + iVar9;
  iVar16 = iVar1 * 4 + iVar5;
  puVar15[5] = iVar9 + iVar10 * 8 + 0x100;
  uVar3 = *(undefined4 *)(_rix + (param_11 << 2 | (param_8 & 1) << 1 | param_9 & 1) * 4);
  iVar1 = *(int *)(_mbcont + iVar5 + 300);
  puVar15[6] = iVar9 + iVar10 * 8 + 0x400;
  uVar4 = *(undefined4 *)(_ri0 + (param_11 << 2 | ((int)param_8 / 2 & 1U) << 1 | uVar18) * 4);
  *(int *)(_mbcont + iVar16 + 8) = iVar2 + iVar7 * 0x180;
  *(undefined4 *)(_mbcont + iVar16 + 0x28) = uVar3;
  *(int *)(_mbcont + iVar16 + 0x18) = (iVar7 + iVar17) * 0x180 + iVar2;
  *(undefined4 *)(_mbcont + iVar16 + 0x38) = uVar4;
  *(int *)(_mbcont + iVar5 + 300) = iVar1 + 1;
  return;
}

static _doMC() {
  int iVar1;
  code *pcVar2;
  int iVar3;
  code **ppcVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1 * 0x140;
  if (*(int *)(_mbcont + iVar1 + 0x138) != 0) {
    iVar6 = 0;
    if (0 < *(int *)(_mbcont + iVar1 + 300)) {
      iVar5 = iVar1 + 0x348a40;
      pcVar2 = *(code **)(_mbcont + iVar1 + 0x28);
      ppcVar4 = (code **)(_mbcont + iVar1 + 0x38);
      while( true ) {
        iVar6 = iVar6 + 1;
        (*pcVar2)(iVar5);
        iVar3 = iVar5 + 0x70;
        iVar5 = iVar5 + 0x1c;
        (**ppcVar4)(iVar3);
        if (*(int *)(_mbcont + iVar1 + 300) <= iVar6) break;
        pcVar2 = ppcVar4[-3];
        ppcVar4 = ppcVar4 + 1;
      }
    }
  }
  if ((*(int *)(_mbcont + param_1 * 0x140 + 0x130) != 0) &&
     (*(int *)(_mbcont + param_1 * 0x140 + 0x13c) != 0)) {
    _Error(0x353ff8);
  }
  param_1 = param_1 * 0x140;
  if (*(int *)(_mbcont + param_1 + 0x130) != 0) {
    _copyRefImage(*(undefined4 *)(_mbcont + param_1 + 0x128),*(undefined4 *)(_mbcont + param_1 + 4))
    ;
    return;
  }
  if (*(int *)(_mbcont + param_1 + 0x13c) != 0) {
    _copyRefImage(*(undefined4 *)(_mbcont + param_1 + 0x128),_refBlockp);
    return;
  }
  _copyAddRefImage(*(undefined4 *)(_mbcont + param_1 + 0x128),_refBlockp,
                   *(undefined4 *)(_mbcont + param_1 + 4));
  return;
}

_rix_000() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined4 *puVar8;
  uint uVar9;
  
  pauVar2 = (undefined (*) [16])param_1[5];
  pauVar3 = (undefined (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar8 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar9 = 0xffffffff;
  do {
    do {
      auVar5 = *pauVar2;
      uVar4 = uVar4 - 1;
      pauVar2 = (undefined (*) [16])(*pauVar2 + iVar1);
      auVar7 = _qfsrv(*pauVar3,auVar5);
      auVar5 = _pextlb(0,SUB168(auVar7,0));
      auVar7 = _pextub(in_zero_qw,auVar7);
      *puVar8 = SUB164(auVar5,0);
      puVar8[1] = SUB164(auVar5 >> 0x20,0);
      puVar8[2] = SUB164(auVar5 >> 0x40,0);
      puVar8[3] = SUB164(auVar5 >> 0x60,0);
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      puVar8[4] = SUB164(auVar7,0);
      puVar8[5] = SUB164(auVar7 >> 0x20,0);
      puVar8[6] = SUB164(auVar7 >> 0x40,0);
      puVar8[7] = SUB164(auVar7 >> 0x60,0);
      puVar8 = (undefined4 *)((int)puVar8 + iVar1 * 2);
    } while (0 < (int)uVar4);
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_000() {
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar8 = (undefined4 *)*param_1;
  iVar2 = param_1[4];
  iVar10 = -1;
  do {
    uVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
        in_t1_qw = _qfsrv(auVar6,auVar6);
        in_t0_qw = _pextlb(0,SUB168(in_t1_qw,0));
        *puVar8 = SUB164(in_t0_qw,0);
        puVar8[1] = SUB164(in_t0_qw >> 0x20,0);
        puVar8[2] = SUB164(in_t0_qw >> 0x40,0);
        puVar8[3] = SUB164(in_t0_qw >> 0x60,0);
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar8 = (undefined4 *)((int)puVar8 + iVar2 * 2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar7 = uVar9 & uVar5;
      uVar9 = 0;
    } while (uVar7 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar8 = (undefined4 *)(*param_1 + 0x80);
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_001() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  uint uVar5;
  undefined auVar6 [16];
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined4 *puVar11;
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = (undefined (*) [16])param_1[5];
  pauVar4 = (undefined (*) [16])param_1[6];
  uVar5 = param_1[2];
  puVar11 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,SUB168(auVar8,0));
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (uVar5 == 0) goto LAB_002353bc;
  do {
    do {
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      pauVar4 = (undefined (*) [16])(*pauVar4 + iVar1);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,SUB168(auVar2,0));
      uVar5 = uVar5 - 1;
      auVar2 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar2,auVar8);
      auVar6 = _paddh(auVar12,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      *puVar11 = SUB164(auVar6,0);
      puVar11[1] = SUB164(auVar6 >> 0x20,0);
      puVar11[2] = SUB164(auVar6 >> 0x40,0);
      puVar11[3] = SUB164(auVar6 >> 0x60,0);
      puVar11[4] = SUB164(auVar8,0);
      puVar11[5] = SUB164(auVar8 >> 0x20,0);
      puVar11[6] = SUB164(auVar8 >> 0x40,0);
      puVar11[7] = SUB164(auVar8 >> 0x60,0);
      puVar11 = (undefined4 *)((int)puVar11 + iVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar2;
    } while (0 < (int)uVar5);
LAB_002353bc:
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    uVar5 = param_1[3];
    uVar7 = uVar10 & uVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

_ri0_001() {
  int iVar1;
  uint uVar2;
  undefined in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined in_t1_qw [16];
  uint uVar8;
  undefined8 in_t3_udw;
  undefined4 *puVar9;
  undefined auVar10 [16];
  
  auVar10 = _psrlh(~in_zero_qw,0xf);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar9 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar8 = 1;
  do {
    uVar5 = (ulong)param_1[2];
    in_t1_qw = CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4);
    auVar6 = _pcpyld(in_t1_qw,CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
    in_t0_qw = _qfsrv(auVar6,auVar6);
    uVar8 = uVar8 | 0x8000;
    auVar6 = _pextlb(0,SUB168(in_t0_qw,0));
    if (uVar5 == 0) goto LAB_00235464;
    do {
      do {
        puVar3 = (undefined8 *)((int)puVar3 + iVar1);
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        auVar7 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
        in_t0_qw = _qfsrv(auVar7,auVar7);
        auVar7 = _pextlb(0,SUB168(in_t0_qw,0));
        uVar5 = (ulong)((int)uVar5 + -1);
        in_t1_qw = _paddh(auVar6,auVar7);
        auVar6 = _paddh(auVar10,in_t1_qw);
        auVar6 = _psrlh(auVar6,1);
        *puVar9 = SUB164(auVar6,0);
        puVar9[1] = SUB164(auVar6 >> 0x20,0);
        puVar9[2] = SUB164(auVar6 >> 0x40,0);
        puVar9[3] = SUB164(auVar6 >> 0x60,0);
        puVar9 = (undefined4 *)((int)puVar9 + iVar1 * 2);
        auVar6 = auVar7;
      } while (0 < (long)uVar5);
LAB_00235464:
      auVar7 = _psrah(CONCAT88(in_t3_udw,(ulong)uVar8),0xf);
      puVar3 = puVar3 + 0x28;
      uVar5 = (ulong)param_1[3];
      puVar4 = puVar4 + 0x28;
      uVar2 = uVar8 & 0x7fff;
      uVar8 = uVar8 & 0x7fff;
    } while ((SUB168(auVar7,0) & uVar5) != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar9 = (undefined4 *)(*param_1 + 0x80);
    uVar8 = 0;
  } while (uVar2 != 0);
  return;
}

_rix_010() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  uint uVar6;
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = (undefined (*) [16])param_1[5];
  pauVar5 = (undefined (*) [16])param_1[6];
  uVar6 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,SUB168(auVar2,0));
      uVar6 = uVar6 - 1;
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,SUB168(auVar3,0));
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      *puVar10 = SUB164(auVar2,0);
      puVar10[1] = SUB164(auVar2 >> 0x20,0);
      puVar10[2] = SUB164(auVar2 >> 0x40,0);
      puVar10[3] = SUB164(auVar2 >> 0x60,0);
      puVar10[4] = SUB164(auVar3,0);
      puVar10[5] = SUB164(auVar3 >> 0x20,0);
      puVar10[6] = SUB164(auVar3 >> 0x40,0);
      puVar10[7] = SUB164(auVar3 >> 0x60,0);
      pauVar4 = (undefined (*) [16])(*pauVar4 + iVar1);
      pauVar5 = (undefined (*) [16])(*pauVar5 + iVar1);
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
    } while (0 < (int)uVar6);
    pauVar4 = pauVar4[8];
    pauVar5 = pauVar5[8];
    uVar6 = param_1[3];
    uVar9 = uVar8 & uVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

_ri0_010() {
  bool bVar1;
  int iVar2;
  undefined in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  
  auVar11 = _psrlh(~in_zero_qw,0xf);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar10 = (undefined4 *)*param_1;
  iVar9 = -1;
  iVar2 = param_1[4];
  do {
    uVar5 = param_1[2];
    uVar8 = 0xffffffff;
    do {
      do {
        auVar6 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
        auVar6 = _qfsrv(auVar6,auVar6);
        in_t1_qw = _pextlb(0,SUB168(auVar6,0));
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((int)puVar3 + iVar2);
        puVar4 = (undefined8 *)((int)puVar4 + iVar2);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        in_t0_qw = _pextlb(0,SUB168(auVar6,0));
        auVar6 = _paddh(in_t0_qw,in_t1_qw);
        auVar6 = _paddh(auVar11,auVar6);
        auVar6 = _psrlh(auVar6,1);
        *puVar10 = SUB164(auVar6,0);
        puVar10[1] = SUB164(auVar6 >> 0x20,0);
        puVar10[2] = SUB164(auVar6 >> 0x40,0);
        puVar10[3] = SUB164(auVar6 >> 0x60,0);
        puVar10 = (undefined4 *)((int)puVar10 + iVar2 * 2);
      } while (0 < (int)uVar5);
      puVar3 = puVar3 + 0x28;
      puVar4 = puVar4 + 0x28;
      uVar5 = param_1[3];
      uVar7 = uVar8 & uVar5;
      uVar8 = 0;
    } while (uVar7 != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar10 = (undefined4 *)(*param_1 + 0x80);
    bVar1 = iVar9 != 0;
    iVar9 = 0;
  } while (bVar1);
  return;
}

_rix_011() {
  int iVar1;
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = (undefined (*) [16])param_1[5];
  pauVar3 = (undefined (*) [16])param_1[6];
  uVar4 = param_1[2];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,SUB168(auVar7,0));
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,SUB168(auVar11,0));
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (uVar4 == 0) goto LAB_002356f0;
  do {
    do {
      pauVar2 = (undefined (*) [16])(*pauVar2 + iVar1);
      pauVar3 = (undefined (*) [16])(*pauVar3 + iVar1);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,SUB168(auVar7,0));
      uVar4 = uVar4 - 1;
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,SUB168(auVar11,0));
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar11 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar11,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      *puVar10 = SUB164(auVar13,0);
      puVar10[1] = SUB164(auVar13 >> 0x20,0);
      puVar10[2] = SUB164(auVar13 >> 0x40,0);
      puVar10[3] = SUB164(auVar13 >> 0x60,0);
      puVar10[4] = SUB164(auVar5,0);
      puVar10[5] = SUB164(auVar5 >> 0x20,0);
      puVar10[6] = SUB164(auVar5 >> 0x40,0);
      puVar10[7] = SUB164(auVar5 >> 0x60,0);
      puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar11;
    } while (0 < (int)uVar4);
LAB_002356f0:
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    uVar4 = param_1[3];
    uVar6 = uVar9 & uVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_011() {
  int iVar1;
  uint uVar2;
  undefined in_zero_qw [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined in_t1_qw [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined8 in_t3_udw;
  undefined4 *puVar10;
  undefined auVar11 [16];
  
  auVar11 = _psrlh(~in_zero_qw,0xf);
  auVar11 = _psllh(auVar11,1);
  puVar3 = (undefined8 *)param_1[5];
  puVar4 = (undefined8 *)param_1[6];
  puVar10 = (undefined4 *)*param_1;
  iVar1 = param_1[4];
  uVar9 = 1;
  do {
    uVar5 = (ulong)param_1[2];
    auVar6 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4),
                     CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
    auVar6 = _qfsrv(auVar6,auVar6);
    in_t1_qw = _pextlb(0,SUB168(auVar6,0));
    puVar3 = (undefined8 *)((int)puVar3 + iVar1);
    uVar9 = uVar9 | 0x8000;
    auVar6 = _qfsrv(in_zero_qw,auVar6);
    in_t0_qw = _pextlb(0,SUB168(auVar6,0));
    auVar6 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar5 == 0) goto LAB_002357c4;
    do {
      do {
        puVar4 = (undefined8 *)((int)puVar4 + iVar1);
        auVar7 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*puVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar3));
        auVar7 = _qfsrv(auVar7,auVar7);
        auVar8 = _pextlb(0,SUB168(auVar7,0));
        uVar5 = (ulong)((int)uVar5 + -1);
        puVar3 = (undefined8 *)((int)puVar3 + iVar1);
        auVar7 = _qfsrv(in_zero_qw,auVar7);
        auVar7 = _pextlb(0,SUB168(auVar7,0));
        auVar8 = _paddh(auVar7,auVar8);
        in_t1_qw = _paddh(auVar6,auVar8);
        auVar6 = _paddh(auVar11,in_t1_qw);
        in_t0_qw = CONCAT88(SUB168(auVar7 >> 0x40,0),(long)(iVar1 * 2));
        auVar6 = _psrlh(auVar6,2);
        *puVar10 = SUB164(auVar6,0);
        puVar10[1] = SUB164(auVar6 >> 0x20,0);
        puVar10[2] = SUB164(auVar6 >> 0x40,0);
        puVar10[3] = SUB164(auVar6 >> 0x60,0);
        puVar10 = (undefined4 *)((int)puVar10 + iVar1 * 2);
        auVar6 = auVar8;
      } while (0 < (long)uVar5);
LAB_002357c4:
      auVar7 = _psrah(CONCAT88(in_t3_udw,(ulong)uVar9),0xf);
      puVar3 = puVar3 + 0x28;
      uVar5 = (ulong)param_1[3];
      puVar4 = puVar4 + 0x28;
      uVar2 = uVar9 & 0x7fff;
      uVar9 = uVar9 & 0x7fff;
    } while ((SUB168(auVar7,0) & uVar5) != 0);
    puVar3 = (undefined8 *)(param_1[5] + 0x40);
    puVar4 = (undefined8 *)(param_1[6] + 0x40);
    puVar10 = (undefined4 *)(*param_1 + 0x80);
    uVar9 = 0;
  } while (uVar2 != 0);
  return;
}

_rix_100() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  undefined auVar10 [16];
  
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar5 = param_1[2];
  pauVar9 = *param_1;
  pauVar1 = param_1[4];
  uVar7 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar6 = _pextlb(0,SUB168(auVar2,0));
      auVar10 = _pextub(in_zero_qw,auVar2);
      auVar2 = _paddh(auVar6,*pauVar9);
      auVar6 = _paddh(auVar10,pauVar9[1]);
      auVar10 = _pcgth(auVar2,in_zero_qw);
      auVar10 = _psrlh(auVar10,0xf);
      auVar2 = _paddh(auVar10,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar10 = _pcgth(auVar6,in_zero_qw);
      auVar10 = _psrlh(auVar10,0xf);
      auVar6 = _paddh(auVar10,auVar6);
      auVar6 = _psrlh(auVar6,1);
      *(int *)*pauVar9 = SUB164(auVar2,0);
      *(int *)(*pauVar9 + 4) = SUB164(auVar2 >> 0x20,0);
      *(int *)(*pauVar9 + 8) = SUB164(auVar2 >> 0x40,0);
      *(int *)(*pauVar9 + 0xc) = SUB164(auVar2 >> 0x60,0);
      *(int *)pauVar9[1] = SUB164(auVar6,0);
      *(int *)(pauVar9[1] + 4) = SUB164(auVar6 >> 0x20,0);
      *(int *)(pauVar9[1] + 8) = SUB164(auVar6 >> 0x40,0);
      *(int *)(pauVar9[1] + 0xc) = SUB164(auVar6 >> 0x60,0);
      pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      pauVar9 = (undefined (*) [16])(*pauVar9 + (int)pauVar1 * 2);
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
    } while (0 < (int)pauVar5);
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    pauVar5 = param_1[3];
    uVar8 = uVar7 & (uint)pauVar5;
    uVar7 = 0;
  } while (uVar8 != 0);
  return;
}

_ri0_100() {
  bool bVar1;
  undefined (*pauVar2) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  uint uVar7;
  undefined auVar8 [16];
  uint uVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar11 = *param_1;
  iVar10 = -1;
  pauVar2 = param_1[4];
  do {
    pauVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*(undefined8 *)*pauVar3));
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar6 = _pextlb(0,SUB168(auVar6,0));
        pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
        pauVar3 = (undefined (*) [16])(*pauVar2 + (int)*pauVar3);
        pauVar4 = (undefined (*) [16])(*pauVar2 + (int)*pauVar4);
        in_t0_qw = *pauVar11;
        auVar8 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar8,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar8);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = SUB164(auVar6,0);
        *(int *)(*pauVar11 + 4) = SUB164(auVar6 >> 0x20,0);
        *(int *)(*pauVar11 + 8) = SUB164(auVar6 >> 0x40,0);
        *(int *)(*pauVar11 + 0xc) = SUB164(auVar6 >> 0x60,0);
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar2 * 2);
      } while (0 < (int)pauVar5);
      pauVar3 = pauVar3[0x14];
      pauVar4 = pauVar4[0x14];
      pauVar5 = param_1[3];
      uVar7 = uVar9 & (uint)pauVar5;
      uVar9 = 0;
    } while (uVar7 != 0);
    pauVar3 = param_1[5][4];
    pauVar4 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_101() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar5 = param_1[2];
  pauVar11 = *param_1;
  pauVar1 = param_1[4];
  auVar8 = _qfsrv(*pauVar4,*pauVar3);
  auVar6 = _pextlb(0,SUB168(auVar8,0));
  uVar10 = 0xffffffff;
  auVar8 = _pextub(in_zero_qw,auVar8);
  if (pauVar5 == (undefined (*) [16])0x0) goto LAB_00235a2c;
  do {
    do {
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
      auVar2 = _qfsrv(*pauVar4,*pauVar3);
      auVar9 = _pextlb(0,SUB168(auVar2,0));
      pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
      auVar12 = _pextub(in_zero_qw,auVar2);
      auVar6 = _paddh(auVar9,auVar6);
      auVar8 = _paddh(auVar12,auVar8);
      auVar6 = _paddh(auVar13,auVar6);
      auVar8 = _paddh(auVar13,auVar8);
      auVar6 = _psrlh(auVar6,1);
      auVar8 = _psrlh(auVar8,1);
      auVar6 = _paddh(*pauVar11,auVar6);
      auVar8 = _paddh(pauVar11[1],auVar8);
      auVar2 = _pcgth(auVar6,in_zero_qw);
      auVar2 = _psrlh(auVar2,0xf);
      auVar6 = _paddh(auVar2,auVar6);
      auVar6 = _psrlh(auVar6,1);
      auVar2 = _pcgth(auVar8,in_zero_qw);
      auVar2 = _psrlh(auVar2,0xf);
      auVar8 = _paddh(auVar2,auVar8);
      auVar8 = _psrlh(auVar8,1);
      *(int *)*pauVar11 = SUB164(auVar6,0);
      *(int *)(*pauVar11 + 4) = SUB164(auVar6 >> 0x20,0);
      *(int *)(*pauVar11 + 8) = SUB164(auVar6 >> 0x40,0);
      *(int *)(*pauVar11 + 0xc) = SUB164(auVar6 >> 0x60,0);
      *(int *)pauVar11[1] = SUB164(auVar8,0);
      *(int *)(pauVar11[1] + 4) = SUB164(auVar8 >> 0x20,0);
      *(int *)(pauVar11[1] + 8) = SUB164(auVar8 >> 0x40,0);
      *(int *)(pauVar11[1] + 0xc) = SUB164(auVar8 >> 0x60,0);
      pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar1 * 2);
      auVar6 = auVar9;
      auVar8 = auVar12;
    } while (0 < (int)pauVar5);
LAB_00235a2c:
    pauVar3 = pauVar3[8];
    pauVar4 = pauVar4[8];
    pauVar5 = param_1[3];
    uVar7 = uVar10 & (uint)pauVar5;
    uVar10 = 0;
  } while (uVar7 != 0);
  return;
}

_ri0_101() {
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  ulong uVar5;
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined in_t1_qw [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined8 in_t3_udw;
  undefined (*pauVar10) [16];
  undefined auVar11 [16];
  
  auVar11 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar10 = *param_1;
  pauVar1 = param_1[4];
  uVar9 = 1;
  do {
    uVar5 = (ulong)(int)param_1[2];
    in_t1_qw = CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar4);
    auVar6 = _pcpyld(in_t1_qw,CONCAT88(SUB168(in_t0_qw >> 0x40,0),*(undefined8 *)*pauVar3));
    in_t0_qw = _qfsrv(auVar6,auVar6);
    uVar9 = uVar9 | 0x8000;
    auVar6 = _pextlb(0,SUB168(in_t0_qw,0));
    if (uVar5 == 0) goto LAB_00235aec;
    do {
      do {
        pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
        pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
        auVar7 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*(undefined8 *)*pauVar3));
        auVar7 = _qfsrv(auVar7,auVar7);
        auVar7 = _pextlb(0,SUB168(auVar7,0));
        uVar5 = (ulong)((int)uVar5 + -1);
        auVar6 = _paddh(auVar6,auVar7);
        auVar6 = _paddh(auVar11,auVar6);
        auVar6 = _psrlh(auVar6,1);
        in_t0_qw = *pauVar10;
        auVar8 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar8,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar8);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar10 = SUB164(auVar6,0);
        *(int *)(*pauVar10 + 4) = SUB164(auVar6 >> 0x20,0);
        *(int *)(*pauVar10 + 8) = SUB164(auVar6 >> 0x40,0);
        *(int *)(*pauVar10 + 0xc) = SUB164(auVar6 >> 0x60,0);
        pauVar10 = (undefined (*) [16])(*pauVar10 + (int)pauVar1 * 2);
        auVar6 = auVar7;
      } while (0 < (long)uVar5);
LAB_00235aec:
      auVar7 = _psrah(CONCAT88(in_t3_udw,(ulong)uVar9),0xf);
      pauVar3 = pauVar3[0x14];
      uVar5 = (ulong)(int)param_1[3];
      pauVar4 = pauVar4[0x14];
      uVar2 = uVar9 & 0x7fff;
      uVar9 = uVar9 & 0x7fff;
    } while ((SUB168(auVar7,0) & uVar5) != 0);
    pauVar3 = param_1[5][4];
    pauVar4 = param_1[6][4];
    pauVar10 = (*param_1)[8];
    uVar9 = 0;
  } while (uVar2 != 0);
  return;
}

_rix_110() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined (*pauVar10) [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar4 = param_1[5];
  pauVar5 = param_1[6];
  pauVar6 = param_1[2];
  pauVar10 = *param_1;
  pauVar1 = param_1[4];
  uVar8 = 0xffffffff;
  do {
    do {
      auVar2 = _qfsrv(*pauVar5,*pauVar4);
      auVar3 = _qfsrv(*pauVar4,*pauVar5);
      auVar7 = _pextlb(0,SUB168(auVar2,0));
      pauVar6 = (undefined (*) [16])(pauVar6[-1] + 0xf);
      auVar11 = _pextub(in_zero_qw,auVar2);
      auVar3 = _qfsrv(auVar3,auVar2);
      auVar2 = _pextlb(0,SUB168(auVar3,0));
      auVar3 = _pextub(in_zero_qw,auVar3);
      auVar2 = _paddh(auVar2,auVar7);
      auVar3 = _paddh(auVar3,auVar11);
      auVar2 = _paddh(auVar12,auVar2);
      auVar3 = _paddh(auVar12,auVar3);
      auVar2 = _psrlh(auVar2,1);
      auVar3 = _psrlh(auVar3,1);
      auVar2 = _paddh(*pauVar10,auVar2);
      auVar3 = _paddh(pauVar10[1],auVar3);
      auVar7 = _pcgth(auVar2,in_zero_qw);
      auVar7 = _psrlh(auVar7,0xf);
      auVar2 = _paddh(auVar7,auVar2);
      auVar2 = _psrlh(auVar2,1);
      auVar7 = _pcgth(auVar3,in_zero_qw);
      auVar7 = _psrlh(auVar7,0xf);
      auVar3 = _paddh(auVar7,auVar3);
      auVar3 = _psrlh(auVar3,1);
      *(int *)*pauVar10 = SUB164(auVar2,0);
      *(int *)(*pauVar10 + 4) = SUB164(auVar2 >> 0x20,0);
      *(int *)(*pauVar10 + 8) = SUB164(auVar2 >> 0x40,0);
      *(int *)(*pauVar10 + 0xc) = SUB164(auVar2 >> 0x60,0);
      *(int *)pauVar10[1] = SUB164(auVar3,0);
      *(int *)(pauVar10[1] + 4) = SUB164(auVar3 >> 0x20,0);
      *(int *)(pauVar10[1] + 8) = SUB164(auVar3 >> 0x40,0);
      *(int *)(pauVar10[1] + 0xc) = SUB164(auVar3 >> 0x60,0);
      pauVar4 = (undefined (*) [16])(*pauVar1 + (int)*pauVar4);
      pauVar5 = (undefined (*) [16])(*pauVar1 + (int)*pauVar5);
      pauVar10 = (undefined (*) [16])(*pauVar10 + (int)pauVar1 * 2);
    } while (0 < (int)pauVar6);
    pauVar4 = pauVar4[8];
    pauVar5 = pauVar5[8];
    pauVar6 = param_1[3];
    uVar9 = uVar8 & (uint)pauVar6;
    uVar8 = 0;
  } while (uVar9 != 0);
  return;
}

_ri0_110() {
  bool bVar1;
  undefined (*pauVar2) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined in_t0_qw [16];
  undefined auVar6 [16];
  undefined in_t1_qw [16];
  undefined auVar7 [16];
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  pauVar3 = param_1[5];
  pauVar4 = param_1[6];
  pauVar11 = *param_1;
  iVar10 = -1;
  pauVar2 = param_1[4];
  do {
    pauVar5 = param_1[2];
    uVar9 = 0xffffffff;
    do {
      do {
        auVar6 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar4),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*(undefined8 *)*pauVar3));
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar7 = _pextlb(0,SUB168(auVar6,0));
        pauVar5 = (undefined (*) [16])(pauVar5[-1] + 0xf);
        pauVar3 = (undefined (*) [16])(*pauVar2 + (int)*pauVar3);
        pauVar4 = (undefined (*) [16])(*pauVar2 + (int)*pauVar4);
        auVar6 = _qfsrv(in_zero_qw,auVar6);
        auVar6 = _pextlb(0,SUB168(auVar6,0));
        auVar6 = _paddh(auVar6,auVar7);
        auVar6 = _paddh(auVar12,auVar6);
        auVar6 = _psrlh(auVar6,1);
        in_t0_qw = *pauVar11;
        auVar7 = _paddh(in_t0_qw,auVar6);
        auVar6 = _pcgth(auVar7,in_zero_qw);
        in_t1_qw = _psrlh(auVar6,0xf);
        auVar6 = _paddh(in_t1_qw,auVar7);
        auVar6 = _psrlh(auVar6,1);
        *(int *)*pauVar11 = SUB164(auVar6,0);
        *(int *)(*pauVar11 + 4) = SUB164(auVar6 >> 0x20,0);
        *(int *)(*pauVar11 + 8) = SUB164(auVar6 >> 0x40,0);
        *(int *)(*pauVar11 + 0xc) = SUB164(auVar6 >> 0x60,0);
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar2 * 2);
      } while (0 < (int)pauVar5);
      pauVar3 = pauVar3[0x14];
      pauVar4 = pauVar4[0x14];
      pauVar5 = param_1[3];
      uVar8 = uVar9 & (uint)pauVar5;
      uVar9 = 0;
    } while (uVar8 != 0);
    pauVar3 = param_1[5][4];
    pauVar4 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    bVar1 = iVar10 != 0;
    iVar10 = 0;
  } while (bVar1);
  return;
}

_rix_111() {
  undefined (*pauVar1) [16];
  undefined in_zero_qw [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  undefined (*pauVar10) [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  auVar13 = _psrlh(~in_zero_qw,0xf);
  auVar14 = _psllh(auVar13,1);
  pauVar2 = param_1[5];
  pauVar3 = param_1[6];
  pauVar4 = param_1[2];
  pauVar10 = *param_1;
  pauVar1 = param_1[4];
  auVar7 = _qfsrv(*pauVar3,*pauVar2);
  auVar11 = _qfsrv(*pauVar2,*pauVar3);
  auVar13 = _pextlb(0,SUB168(auVar7,0));
  auVar5 = _pextub(in_zero_qw,auVar7);
  uVar9 = 0xffffffff;
  auVar11 = _qfsrv(auVar11,auVar7);
  auVar7 = _pextlb(0,SUB168(auVar11,0));
  auVar11 = _pextub(in_zero_qw,auVar11);
  auVar13 = _paddh(auVar7,auVar13);
  auVar5 = _paddh(auVar11,auVar5);
  if (pauVar4 == (undefined (*) [16])0x0) goto LAB_00235df0;
  do {
    do {
      pauVar2 = (undefined (*) [16])(*pauVar1 + (int)*pauVar2);
      pauVar3 = (undefined (*) [16])(*pauVar1 + (int)*pauVar3);
      auVar7 = _qfsrv(*pauVar3,*pauVar2);
      auVar11 = _qfsrv(*pauVar2,*pauVar3);
      auVar8 = _pextlb(0,SUB168(auVar7,0));
      pauVar4 = (undefined (*) [16])(pauVar4[-1] + 0xf);
      auVar12 = _pextub(in_zero_qw,auVar7);
      auVar11 = _qfsrv(auVar11,auVar7);
      auVar7 = _pextlb(0,SUB168(auVar11,0));
      auVar11 = _pextub(in_zero_qw,auVar11);
      auVar7 = _paddh(auVar7,auVar8);
      auVar8 = _paddh(auVar11,auVar12);
      auVar13 = _paddh(auVar7,auVar13);
      auVar5 = _paddh(auVar8,auVar5);
      auVar13 = _paddh(auVar14,auVar13);
      auVar5 = _paddh(auVar14,auVar5);
      auVar13 = _psrlh(auVar13,2);
      auVar5 = _psrlh(auVar5,2);
      auVar13 = _paddh(*pauVar10,auVar13);
      auVar5 = _paddh(pauVar10[1],auVar5);
      auVar11 = _pcgth(auVar13,in_zero_qw);
      auVar11 = _psrlh(auVar11,0xf);
      auVar13 = _paddh(auVar11,auVar13);
      auVar13 = _psrlh(auVar13,1);
      auVar11 = _pcgth(auVar5,in_zero_qw);
      auVar11 = _psrlh(auVar11,0xf);
      auVar5 = _paddh(auVar11,auVar5);
      auVar5 = _psrlh(auVar5,1);
      *(int *)*pauVar10 = SUB164(auVar13,0);
      *(int *)(*pauVar10 + 4) = SUB164(auVar13 >> 0x20,0);
      *(int *)(*pauVar10 + 8) = SUB164(auVar13 >> 0x40,0);
      *(int *)(*pauVar10 + 0xc) = SUB164(auVar13 >> 0x60,0);
      *(int *)pauVar10[1] = SUB164(auVar5,0);
      *(int *)(pauVar10[1] + 4) = SUB164(auVar5 >> 0x20,0);
      *(int *)(pauVar10[1] + 8) = SUB164(auVar5 >> 0x40,0);
      *(int *)(pauVar10[1] + 0xc) = SUB164(auVar5 >> 0x60,0);
      pauVar10 = (undefined (*) [16])(*pauVar10 + (int)pauVar1 * 2);
      auVar13 = auVar7;
      auVar5 = auVar8;
    } while (0 < (int)pauVar4);
LAB_00235df0:
    pauVar2 = pauVar2[8];
    pauVar3 = pauVar3[8];
    pauVar4 = param_1[3];
    uVar6 = uVar9 & (uint)pauVar4;
    uVar9 = 0;
  } while (uVar6 != 0);
  return;
}

_ri0_111() {
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined in_zero_qw [16];
  undefined (*pauVar3) [16];
  undefined8 *puVar4;
  undefined (*pauVar5) [16];
  ulong uVar6;
  undefined in_t0_qw [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined in_t1_qw [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined8 in_t3_udw;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  
  auVar12 = _psrlh(~in_zero_qw,0xf);
  auVar12 = _psllh(auVar12,1);
  pauVar3 = param_1[5];
  pauVar5 = param_1[6];
  pauVar11 = *param_1;
  pauVar1 = param_1[4];
  uVar10 = 1;
  do {
    uVar6 = (ulong)(int)param_1[2];
    auVar7 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar5),
                     CONCAT88(SUB168(in_t0_qw >> 0x40,0),*(undefined8 *)*pauVar3));
    auVar7 = _qfsrv(auVar7,auVar7);
    in_t1_qw = _pextlb(0,SUB168(auVar7,0));
    puVar4 = (undefined8 *)(*pauVar1 + (int)*pauVar3);
    uVar10 = uVar10 | 0x8000;
    auVar7 = _qfsrv(in_zero_qw,auVar7);
    in_t0_qw = _pextlb(0,SUB168(auVar7,0));
    auVar7 = _paddh(in_t0_qw,in_t1_qw);
    if (uVar6 == 0) goto LAB_00235edc;
    do {
      do {
        pauVar5 = (undefined (*) [16])(*pauVar1 + (int)*pauVar5);
        auVar8 = _pcpyld(CONCAT88(SUB168(in_t1_qw >> 0x40,0),*(undefined8 *)*pauVar5),
                         CONCAT88(SUB168(in_t0_qw >> 0x40,0),*puVar4));
        auVar8 = _qfsrv(auVar8,auVar8);
        auVar9 = _pextlb(0,SUB168(auVar8,0));
        uVar6 = (ulong)((int)uVar6 + -1);
        puVar4 = (undefined8 *)((int)puVar4 + (int)pauVar1);
        auVar8 = _qfsrv(in_zero_qw,auVar8);
        auVar8 = _pextlb(0,SUB168(auVar8,0));
        auVar8 = _paddh(auVar8,auVar9);
        auVar7 = _paddh(auVar7,auVar8);
        auVar7 = _paddh(auVar12,auVar7);
        auVar7 = _psrlh(auVar7,2);
        auVar9 = _paddh(*pauVar11,auVar7);
        auVar7 = _pcgth(auVar9,in_zero_qw);
        in_t1_qw = _psrlh(auVar7,0xf);
        auVar7 = _paddh(in_t1_qw,auVar9);
        in_t0_qw = CONCAT88(SUB168(*pauVar11 >> 0x40,0),(long)((int)pauVar1 * 2));
        auVar7 = _psrlh(auVar7,1);
        *(int *)*pauVar11 = SUB164(auVar7,0);
        *(int *)(*pauVar11 + 4) = SUB164(auVar7 >> 0x20,0);
        *(int *)(*pauVar11 + 8) = SUB164(auVar7 >> 0x40,0);
        *(int *)(*pauVar11 + 0xc) = SUB164(auVar7 >> 0x60,0);
        pauVar11 = (undefined (*) [16])(*pauVar11 + (int)pauVar1 * 2);
        auVar7 = auVar8;
      } while (0 < (long)uVar6);
LAB_00235edc:
      auVar8 = _psrah(CONCAT88(in_t3_udw,(ulong)uVar10),0xf);
      puVar4 = puVar4 + 0x28;
      uVar6 = (ulong)(int)param_1[3];
      pauVar5 = pauVar5[0x14];
      uVar2 = uVar10 & 0x7fff;
      uVar10 = uVar10 & 0x7fff;
    } while ((SUB168(auVar8,0) & uVar6) != 0);
    pauVar3 = param_1[5][4];
    pauVar5 = param_1[6][4];
    pauVar11 = (*param_1)[8];
    uVar10 = 0;
  } while (uVar2 != 0);
  return;
}

_copyAddRefImage() {
  undefined auVar1 [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  
  auVar1 = auRam00235fd0;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _paddh(*param_3,*param_2);
    auVar2 = _pminh(auVar2,auVar1);
    auVar3 = _paddh(param_3[1],param_2[1]);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(auVar3,auVar1);
    param_2 = param_2[2];
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    param_3 = param_3[2];
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = SUB164(auVar2,0);
    param_1[1] = SUB164(auVar2 >> 0x20,0);
    param_1[2] = SUB164(auVar2 >> 0x40,0);
    param_1[3] = SUB164(auVar2 >> 0x60,0);
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

_copyRefImage() {
  undefined auVar1 [16];
  undefined in_zero_qw [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  
  auVar1 = auRam00235fd0;
  iVar4 = 0x18;
  do {
    iVar4 = iVar4 + -1;
    auVar2 = _pminh(*param_2,auVar1);
    auVar2 = _pmaxh(auVar2,in_zero_qw);
    auVar3 = _pminh(param_2[1],auVar1);
    param_2 = param_2[2];
    auVar3 = _pmaxh(auVar3,in_zero_qw);
    auVar2 = _ppacb(auVar3,auVar2);
    *param_1 = SUB164(auVar2,0);
    param_1[1] = SUB164(auVar2 >> 0x20,0);
    param_1[2] = SUB164(auVar2 >> 0x40,0);
    param_1[3] = SUB164(auVar2 >> 0x60,0);
    param_1 = param_1 + 4;
  } while (iVar4 != 0);
  return;
}

_ipuSetMPEG1() {
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff | param_1 << 0x17;
  return;
}

_waitBdecOut() {
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 local_80 [8];
  undefined4 local_60 [8];
  
  _waitIpuIdle();
  iVar4 = REG_DMAC_3_IPU_FROM_QWC;
  if (iVar4 != 0) {
    uVar2 = REG_IPU_CTRL;
    while ((uVar2 & 0x4000) == 0) {
      iVar4 = REG_DMAC_4_IPU_TO_QWC;
      if ((iVar4 == 0) && (uVar2 = REG_DMAC_4_IPU_TO_CHCR, (uVar2 & 0x100) == 0)) {
        local_80[0] = 1;
        _dispatchMpegCallback(_theSceMpeg,local_80);
      }
      iVar4 = REG_DMAC_3_IPU_FROM_QWC;
      if (iVar4 == 0) break;
      uVar2 = REG_IPU_CTRL;
    }
  }
  lVar3 = REG_IPU_TOP;
  uVar2 = REG_IPU_BP;
  _top32 = (undefined4)lVar3;
  if (lVar3 < 0) {
    if ((uVar2 & 0x1f) == 0) {
      _top32len = 0;
    }
    else {
      _top32len = 0x20 - (uVar2 & 0x1f);
    }
  }
  else {
    _top32len = 0x20;
  }
  uVar2 = REG_IPU_CTRL;
  bVar1 = (uVar2 & 0x4000) == 0;
  if (!bVar1) {
    _Error(0x354010);
    local_60[0] = 2;
    _dispatchMpegCallback(_theSceMpeg,local_60);
    REG_IPU_CTRL = 0x40000000;
    local_60[0] = 3;
    _dispatchMpegCallback(_theSceMpeg,local_60);
    DIntr();
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
    REG_DMAC_3_IPU_FROM_CHCR = 0;
    uVar2 = REG_DMAC_ENABLER;
    REG_DMAC_ENABLEW = uVar2 & 0xfffeffff;
    EIntr();
    REG_DMAC_3_IPU_FROM_QWC = 0;
  }
  return bVar1;
}

_dmVector() {
  _ipuVdec(3);
  return;
}

_dualPrimeVector() {
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_4;
  iVar2 = (int)param_3;
  iVar5 = iVar2 >> 1;
  iVar3 = iVar6 >> 1;
  if (_picture_structure != 3) {
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    *param_1 = iVar5 + *param_2;
    if (0 < param_4) {
      iVar3 = iVar6 + 1 >> 1;
    }
    iVar3 = iVar3 + param_2[1];
    bVar1 = _picture_structure != 1;
    param_1[1] = iVar3;
    if (bVar1) {
      param_1[1] = iVar3 + 1;
      return;
    }
    param_1[1] = iVar3 + -1;
    return;
  }
  if (_top_field_first == 0) {
    iVar4 = iVar2 * 3;
    if (0 < param_3) {
      iVar4 = iVar4 + 1;
    }
    *param_1 = (iVar4 >> 1) + *param_2;
    iVar4 = iVar6 * 3;
    if (0 < param_4) {
      iVar4 = iVar4 + 1;
    }
    param_1[1] = (iVar4 >> 1) + param_2[1] + -1;
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    param_1[2] = iVar5 + *param_2;
    iVar2 = param_2[1];
    if (param_4 < 1) goto LAB_002362b4;
    iVar6 = iVar6 + 1;
  }
  else {
    if (0 < param_3) {
      iVar5 = iVar2 + 1 >> 1;
    }
    *param_1 = iVar5 + *param_2;
    if (0 < param_4) {
      iVar3 = iVar6 + 1 >> 1;
    }
    param_1[1] = iVar3 + param_2[1] + -1;
    iVar2 = iVar2 * 3;
    if (0 < param_3) {
      iVar2 = iVar2 + 1;
    }
    param_1[2] = (iVar2 >> 1) + *param_2;
    iVar6 = iVar6 * 3;
    iVar2 = param_2[1];
    if (0 < param_4) {
      iVar6 = iVar6 + 1;
    }
  }
  iVar3 = iVar6 >> 1;
LAB_002362b4:
  param_1[3] = iVar3 + iVar2 + 1;
  return;
}

_mbAddressIncrement() {
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar2 = _ipuVdec(0);
    if (uVar2 == 0x22) {
LAB_00236458:
      bVar1 = true;
    }
    else {
      if (uVar2 < 0x23) {
        if (uVar2 == 0) {
          lVar3 = _peepBit(0xb);
          if ((_isMpeg2 == 0) || (lVar3 != 0xf)) {
            _Error1(0x354030,0);
            _isError = 1;
            return 1;
          }
          _flushBuf(0xb);
          goto LAB_00236458;
        }
      }
      else if (uVar2 == 0x23) {
        bVar1 = true;
        iVar4 = iVar4 + 0x21;
        goto LAB_00236478;
      }
      iVar4 = iVar4 + (int)uVar2;
      bVar1 = false;
    }
LAB_00236478:
    if (!bVar1) {
      return iVar4;
    }
  } while( true );
}

_pictureData0() {
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  _mbcont._644_4_ = 0;
  _mbcont._640_4_ = 0;
  iVar4 = _widthMB * _heightMB;
  if (_picture_structure != 3) {
    iVar4 = _widthMB * _heightMB >> 1;
  }
  do {
    do {
      lVar2 = _slice0(param_1,iVar4);
    } while (lVar2 == 1);
  } while (lVar2 == 3);
  _waitIpuIdle();
  lVar3 = _waitBdecOut();
  if (lVar3 == 0) {
    lVar2 = 2;
  }
  do {
    uVar1 = REG_DMAC_9_SPR_TO_CHCR;
  } while ((uVar1 >> 8 & 1) != 0);
  if (lVar2 == 0) {
    _doMC(_mbcont._640_4_ == 0);
  }
  if ((int)lVar2 - 1U < 2) {
    _Error(0x354068);
  }
  return lVar2 == 0;
}

static _sliceA0() {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  _isError = 0;
  _nextStartCode();
  uVar4 = _peepBit(0x20);
  if ((uint)uVar4 - 0x101 < 0xaf) {
    _flushBuf(0x20);
    iVar2 = _sliceB();
    iVar3 = _mbAddressIncrement();
    *param_3 = iVar3;
    if (_isError == 0) {
      uVar1 = 0;
      *param_2 = (iVar2 * 0x80 + ((uint)uVar4 & 0xff) + -1) * _widthMB + iVar3 + -1;
      *param_3 = 1;
      _sp_dcr = 1;
      param_4[2] = 0;
      param_4[5] = 0;
      param_4[4] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[7] = 0;
      param_4[6] = 0;
      param_4[3] = 0;
    }
    else {
      _Error(0x3540b0);
      uVar1 = 1;
    }
  }
  else {
    _Error1(0x354088,uVar4);
    uVar1 = 2;
  }
  return uVar1;
}

static _slice0() {
  long lVar1;
  undefined auStack_d0 [32];
  undefined auStack_b0 [16];
  undefined auStack_a0 [16];
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [16];
  
  local_90 = 0;
  local_8c = 0;
  lVar1 = _sliceA0(param_2,&local_90,&local_8c,auStack_d0);
  if (lVar1 == 0) {
    _isError = 0;
    for (; local_90 < param_2; local_90 = local_90 + 1) {
      *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x13c) = 0;
      lVar1 = _waitBdecOut();
      if (lVar1 == 0) {
        return 2;
      }
      if (local_8c == 0) {
        lVar1 = _peepBit(0x17);
        if ((lVar1 == 0) || (_isError != 0)) {
          _isError = 0;
          return 3;
        }
        local_8c = _mbAddressIncrement();
        if (_isError != 0) {
          _isError = 0;
          return 1;
        }
      }
      if (param_2 <= local_90) {
        _Error(0x3540d0);
        return 2;
      }
      if (local_8c == 1) {
        lVar1 = _decMB0(&local_88,&local_84,auStack_80,auStack_d0,auStack_b0,auStack_a0);
        if (lVar1 == 0) {
          _isError = 0;
          return 1;
        }
      }
      else {
        lVar1 = _skipMB0(auStack_d0,&local_84,auStack_b0,&local_88);
        if (lVar1 == 0) {
          _isError = 0;
          return 2;
        }
      }
      lVar1 = _motionComp0(local_90,local_8c,local_88,local_84,auStack_d0,auStack_b0,auStack_a0);
      if (lVar1 == 0) {
        _isError = 0;
        return 2;
      }
      if (local_90 != 0) {
        _doMC(_mbcont._640_4_ ^ 1);
      }
      local_8c = local_8c + -1;
      _mbcont._640_4_ = _mbcont._640_4_ ^ 1;
    }
    lVar1 = 0;
  }
  return lVar1;
}

static _skipMB0() {
  bool bVar1;
  uint uVar2;
  
  _sp_dcr = 1;
  bVar1 = _picture_coding_type == 2;
  *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x13c) = 1;
  if (bVar1) {
    *param_1 = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
  }
  if (_picture_structure == 3) {
    *param_2 = 2;
  }
  else {
    *param_2 = 1;
    bVar1 = _picture_structure == 2;
    *param_3 = (uint)bVar1;
    param_3[1] = (uint)bVar1;
  }
  bVar1 = _picture_coding_type == 1;
  if (bVar1) {
    _Error(0x3540f0);
    uVar2 = *param_4;
  }
  else {
    uVar2 = *param_4;
  }
  *param_4 = uVar2 & 0xfffffffe;
  return !bVar1;
}

static _decMB0() {
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar3 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar3 & 0xf8ffffff | _picture_coding_type << 0x18;
  uVar2 = _ipuVdec(1);
  *param_1 = (uint)uVar2;
  if (uVar2 == 0) {
    _Error(0x354120);
    _isError = 1;
    return 0;
  }
  if ((uVar2 & 0xc) == 0) {
    if (((uVar2 & 1) == 0) || (_concealment_motion_vectors == 0)) goto LAB_00236adc;
    iVar1 = 1;
    if (_picture_structure == 3) {
      iVar1 = 2;
    }
  }
  else if ((_picture_structure != 3) || (iVar1 = 2, _frame_pred_frame_dct == 0)) {
    iVar1 = _nextBit(2);
    *param_2 = iVar1;
    goto LAB_00236adc;
  }
  *param_2 = iVar1;
LAB_00236adc:
  iVar1 = *param_2;
  if (_picture_structure == 3) {
    uVar5 = 1;
    if (iVar1 == 1) {
      uVar5 = 2;
    }
    bVar6 = iVar1 == 2;
  }
  else {
    bVar6 = false;
    uVar5 = 1;
    if (iVar1 == 2) {
      uVar5 = 2;
    }
  }
  if (((_picture_structure == 3) && (_frame_pred_frame_dct == 0)) && ((*param_1 & 3) != 0)) {
    iVar1 = _nextBit(1);
  }
  else {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  uVar3 = *param_1;
  if ((uVar3 & 0x10) != 0) {
    _qscqsc = _nextBit(5);
    uVar3 = *param_1;
  }
  if (((uVar3 & 8) != 0) || (((uVar3 & 1) != 0 && (_concealment_motion_vectors != 0)))) {
    if (_isMpeg2 == 0) {
      _motionVector(param_4,param_6,_forward_f_code + -1,_forward_f_code + -1,0,0,
                    _full_pel_forward_vector);
    }
    else {
      _motionVectors(param_4,param_6,param_5,0,uVar5,bVar6,_f_code._0_4_ + -1,_f_code._4_4_ + -1);
    }
  }
  if (_isError != 0) {
    return 0;
  }
  puVar4 = (undefined4 *)param_4;
  if ((*param_1 & 4) != 0) {
    if (_isMpeg2 == 0) {
      _motionVector(puVar4 + 2,param_6,_backward_f_code + -1,_backward_f_code + -1,0,0,
                    _full_pel_backward_vector);
    }
    else {
      _motionVectors(param_4,param_6,param_5,1,uVar5,bVar6,_f_code._8_4_ + -1,_f_code._12_4_ + -1);
    }
  }
  if (_isError != 0) {
    return 0;
  }
  uVar3 = *param_1;
  if (((uVar3 & 1) != 0) && (_concealment_motion_vectors != 0)) {
    _flushBuf(1);
    uVar3 = *param_1;
  }
  if ((uVar3 & 3) == 0) {
    *(undefined4 *)(_mbcont + _mbcont._640_4_ * 0x140 + 0x13c) = 1;
  }
  else {
    REG_DMAC_3_IPU_FROM_MADR =
         *(uint *)(_mbcont + _mbcont._640_4_ * 0x140 + 4) & 0xfffffff | 0x80000000;
    REG_DMAC_3_IPU_FROM_QWC = 0x30;
    REG_DMAC_3_IPU_FROM_CHCR = 0x100;
    _waitIpuIdle();
    _sendIpuCommand((*param_1 & 1) << 0x1b | _qscqsc << 0x10 | _sp_dcr << 0x1a | 0x20000000U |
                    *param_3 << 0x19);
  }
  _sp_dcr = 0;
  if (_isError != 0) {
    _sp_dcr = 0;
    return 0;
  }
  if ((((*param_1 & 1) != 0) || (_sp_dcr = 1, (*param_1 & 1) != 0)) &&
     (_concealment_motion_vectors == 0)) {
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  if (_picture_coding_type == 2) {
    if ((*param_1 & 9) == 0) {
      *puVar4 = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      bVar6 = _picture_structure == 3;
      puVar4[1] = 0;
      if (bVar6) {
        *param_2 = 2;
      }
      else {
        *param_2 = 1;
        *param_5 = (uint)(_picture_structure == 2);
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

static _decode_motion_vector() {
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10 << (param_2 & 0x1f);
  iVar2 = *param_1;
  if (param_5 != 0) {
    iVar2 = *param_1 >> 1;
  }
  if (param_3 < 1) {
    iVar1 = iVar2 << 1;
    if (-1 < param_3) goto LAB_00236f74;
    iVar2 = (iVar2 + -1) - ((~(uint)param_3 << (param_2 & 0x1f)) + param_4);
    if (iVar2 < -iVar3) {
      iVar2 = iVar2 + iVar3 * 2;
    }
  }
  else {
    iVar2 = iVar2 + 1 + ((uint)param_3 - 1 << (param_2 & 0x1f)) + param_4;
    iVar1 = iVar2 * 2;
    if (iVar2 < iVar3) goto LAB_00236f74;
    iVar2 = iVar2 + iVar3 * -2;
  }
  iVar1 = iVar2 << 1;
LAB_00236f74:
  if (param_5 == 0) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return;
}

_motionVectors() {
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_5 != 1) {
    uVar1 = _nextBit(1);
    puVar2 = (undefined4 *)(param_4 * 4 + param_3);
    *puVar2 = uVar1;
    _motionVector(param_1 + param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
    uVar1 = _nextBit(1);
    puVar2[2] = uVar1;
    _motionVector(param_1 + param_4 * 8 + 0x10,param_2,param_7,param_8,param_9,param_10,0);
    return;
  }
  if ((param_6 == 0) && (param_9 == 0)) {
    uVar1 = _nextBit(1);
    puVar2 = (undefined4 *)(param_4 * 4 + param_3);
    puVar2[2] = uVar1;
    *puVar2 = uVar1;
  }
  puVar2 = (undefined4 *)(param_1 + param_4 * 8);
  _motionVector(puVar2,param_2,param_7,param_8,param_9,param_10,0);
  puVar2[4] = *puVar2;
  puVar2[5] = puVar2[1];
  return;
}

_motionVector() {
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = _ipuVdec(2);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = _nextBit(param_3);
    }
  }
  _decode_motion_vector(param_1,param_3,lVar2,uVar3,param_7);
  if (param_5 != 0) {
    uVar1 = _dmVector();
    *param_2 = uVar1;
  }
  lVar2 = _ipuVdec(2);
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = _nextBit(param_4);
    }
  }
  iVar4 = (int)param_1;
  if (param_6 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) >> 1;
  }
  _decode_motion_vector(iVar4 + 4,param_4,lVar2,uVar3,param_7);
  if (param_6 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) << 1;
  }
  if (param_5 != 0) {
    uVar1 = _dmVector();
    param_2[1] = uVar1;
  }
  return;
}

_sendIpuCommand() {
  REG_IPU_CMD = param_1;
  _isTop32dirty = *(undefined4 *)(_isDirty + (param_1 >> 0x1c) * 4);
  return;
}

_waitIpuIdle() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = REG_IPU_CTRL;
  while ((uVar2 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar3;
    iVar3 = iVar3 + 1;
    if (bVar1) {
      _dispatchMpegCbNodata(_theSceMpeg);
      iVar3 = 0;
    }
    uVar2 = REG_IPU_CTRL;
  }
  return;
}

_waitIpuIdle64() {
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar3 = REG_IPU_CMD;
  if (lVar3 < 0) {
    uVar2 = REG_IPU_CTRL;
    while ((uVar2 & 0x4000) == 0) {
      bVar1 = 5000 < iVar4;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        _dispatchMpegCbNodata(_theSceMpeg);
        iVar4 = 0;
      }
      lVar3 = REG_IPU_CMD;
      if (-1 < lVar3) {
        return lVar3;
      }
      uVar2 = REG_IPU_CTRL;
    }
  }
  return lVar3;
}

_ipuVdec() {
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  uVar4 = REG_IPU_CTRL;
  while ((uVar4 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar5;
    iVar5 = iVar5 + 1;
    if (bVar1) {
      _dispatchMpegCbNodata(_theSceMpeg);
      iVar5 = 0;
    }
    uVar4 = REG_IPU_CTRL;
  }
  uVar4 = param_1 << 0x1a | 0x30000000;
  REG_IPU_CMD = uVar4;
  lVar2 = REG_IPU_CMD;
  _isTop32dirty = *(undefined4 *)(_isDirty + ((int)uVar4 >> 0x1c) * 4);
  while (lVar2 < 0) {
    bVar1 = 5000 < iVar6;
    iVar6 = iVar6 + 1;
    if (bVar1) {
      iVar6 = 0;
      _dispatchMpegCbNodata(_theSceMpeg);
    }
    lVar2 = REG_IPU_CMD;
  }
  lVar3 = REG_IPU_TOP;
  uVar4 = REG_IPU_BP;
  _top32 = (int)lVar3;
  if (lVar3 < 0) {
    _top32len = -(uVar4 & 0x1f) & 0x1f;
  }
  else {
    _top32len = 0x20;
  }
  _isError = (uint)((int)lVar2 == 0);
  return (short)lVar2;
}

_peepBit() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if ((_isTop32dirty != 0) || (_top32len < param_1)) {
    uVar2 = REG_IPU_CTRL;
    iVar3 = 0;
    while ((uVar2 & 0x80004000) == 0x80000000) {
      bVar1 = 5000 < iVar3;
      iVar3 = iVar3 + 1;
      if (bVar1) {
        _dispatchMpegCbNodata(_theSceMpeg);
        iVar3 = 0;
      }
      uVar2 = REG_IPU_CTRL;
    }
    REG_IPU_CMD = 0x40000000;
    _isTop32dirty = _isDirty._16_4_;
    _top32 = _waitIpuIdle64();
    _top32len = 0x20;
  }
  return _top32 >> (-param_1 & 0x1fU);
}

_flushBuf() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = REG_IPU_CTRL;
  while ((uVar2 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar3;
    iVar3 = iVar3 + 1;
    if (bVar1) {
      _dispatchMpegCbNodata(_theSceMpeg);
      iVar3 = 0;
    }
    uVar2 = REG_IPU_CTRL;
  }
  REG_IPU_CMD = param_1 | 0x40000000;
  _isTop32dirty = *(undefined4 *)(_isDirty + ((param_1 | 0x40000000) >> 0x1c) * 4);
  _top32 = _waitIpuIdle64();
  _top32len = 0x20;
  return;
}

_nextBit() {
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = REG_IPU_CTRL;
  while ((uVar3 & 0x80004000) == 0x80000000) {
    bVar1 = 5000 < iVar2;
    iVar2 = iVar2 + 1;
    if (bVar1) {
      _dispatchMpegCbNodata(_theSceMpeg);
      iVar2 = 0;
    }
    uVar3 = REG_IPU_CTRL;
  }
  if ((_isTop32dirty != 0) || (_top32len < (int)param_1)) {
    REG_IPU_CMD = 0x40000000;
    _isTop32dirty = _isDirty._16_4_;
    _top32 = _waitIpuIdle64();
  }
  _top32len = 0x20;
  REG_IPU_CMD = param_1 | 0x40000000;
  uVar3 = _top32 >> (0x20 - param_1 & 0x1f);
  _isTop32dirty = *(int *)(_isDirty + ((param_1 | 0x40000000) >> 0x1c) * 4);
  _top32 = _waitIpuIdle64();
  return uVar3;
}

_nextStartCode() {
  uint uVar1;
  long lVar2;
  
  _waitIpuIdle();
  uVar1 = REG_IPU_BP;
  if ((-(uVar1 & 7) & 7) != 0) {
    _flushBuf();
  }
  while (lVar2 = _peepBit(0x18), lVar2 != 1) {
    _flushBuf(8);
  }
  return;
}

_sliceB() {
  long lVar1;
  
  _qscqsc = _nextBit(5);
  lVar1 = _nextBit(1);
  if (lVar1 == 0) {
    _intra_slice = 0;
  }
  else {
    _intra_slice = _nextBit(1);
    _flushBuf(7);
    _extrainfo();
  }
  return 0;
}

_nextHeader() {
  ulong uVar1;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  
  while( true ) {
    while( true ) {
      while( true ) {
        _nextStartCode();
        uVar1 = _nextBit(0x20);
        if (uVar1 != 0x1b3) break;
        _sequenceHeader();
      }
      if (0x1b3 < uVar1) break;
      if (uVar1 == 0x100) {
        _pictureHeader();
        local_c0[0] = 5;
        local_b0 = 0xffffffffffffffff;
        local_b8 = 0xffffffffffffffff;
        _dispatchMpegCallback(_theSceMpeg,local_c0);
        _headerDts = local_b0;
        _headerPts = local_b8;
        return _picture_coding_type;
      }
    }
    if (uVar1 == 0x1b7) break;
    if (uVar1 == 0x1b8) {
      _groupOfPicturesHeader();
    }
  }
  return 0;
}

_pictureHeader() {
  _temporal_reference = _nextBit(10);
  _picture_coding_type = _nextBit(3);
  _vbv_delay = _nextBit(0x10);
  if (_picture_coding_type - 2U < 2) {
    _full_pel_forward_vector = _nextBit(1);
    _forward_f_code = _nextBit(3);
  }
  if (_picture_coding_type == 3) {
    _full_pel_backward_vector = _nextBit(1);
    _backward_f_code = _nextBit(3);
  }
  _extrainfo();
  _extensionAndUserData();
  _updateTempTackData();
  return;
}

_extensionAndUserData() {
  ulong uVar1;
  long lVar2;
  
  _nextStartCode();
  while( true ) {
    while (lVar2 = _peepBit(0x20), lVar2 == 0x1b5) {
      _flushBuf(0x20);
      uVar1 = _nextBit(4);
      if (10 < uVar1) {
        uVar1 = 0;
      }
      (**(code **)(ext_func_183 + (int)uVar1 * 4))();
      _nextStartCode();
    }
    if (lVar2 != 0x1b2) break;
    _flushBuf(0x20);
    _nextStartCode();
  }
  return;
}

_pictureCodingExtension() {
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  _f_code._0_4_ = _nextBit(4);
  _f_code._4_4_ = _nextBit(4);
  _f_code._8_4_ = _nextBit(4);
  _f_code._12_4_ = _nextBit(4);
  _intra_dc_precision = _nextBit(2);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xfffcffff | _intra_dc_precision << 0x10;
  _picture_structure = _nextBit(2);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    *(undefined4 *)(iVar1 + 0xd4) = _picture_structure;
  }
  _top_field_first = _nextBit(1);
  _frame_pred_frame_dct = _nextBit(1);
  _concealment_motion_vectors = _nextBit(1);
  _q_scale_type = _nextBit(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffbfffff | _q_scale_type << 0x16;
  _intra_vlc_format = _nextBit(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffdfffff | _intra_vlc_format << 0x15;
  _alternate_scan = _nextBit(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffefffff | _alternate_scan << 0x14;
  _repeat_first_field = _nextBit(1);
  _chroma_420_type = _nextBit(1);
  _progressive_frame = _nextBit(1);
  lVar3 = _nextBit(1);
  _composite_display_flag = (undefined4)lVar3;
  if (lVar3 != 0) {
    _v_axis = _nextBit(1);
    _field_sequence = _nextBit(3);
    _sub_carrier = _nextBit(1);
    _burst_amplitude = _nextBit(7);
    _sub_carrier_phase = _nextBit(8);
  }
  return;
}

_extrainfo() {
  long lVar1;
  
  while (lVar1 = _nextBit(1), lVar1 != 0) {
    _flushBuf(8);
  }
  return;
}

static _updateTempTackData() {
  if ((_picture_coding_type != 3) && (_temporal_reference != tempRefOld_194)) {
    if (tempRefWrap_193 != 0) {
      tempRefWrap_193 = 0;
      _tmpRefBase = _tmpRefBase + 0x400;
    }
    if ((_temporal_reference < tempRefOld_194) && (_tmpRefGOPreset == 0)) {
      tempRefWrap_193 = 1;
    }
    _tmpRefGOPreset = 0;
    tempRefOld_194 = _temporal_reference;
  }
  _trFrameNumber = (undefined *)(_tmpRefBase + _temporal_reference);
  if ((tempRefWrap_193 != 0) && (_temporal_reference <= tempRefOld_194)) {
    _trFrameNumber = _trFrameNumber + 0x400;
  }
  if ((int)_trFrameNumberA < (int)_trFrameNumber) {
    _trFrameNumberA = _trFrameNumber;
  }
  return;
}

_groupOfPicturesHeader() {
  _tmpRefBase = _trFrameNumberA + 1;
  *(undefined4 *)(*(int *)(_theSceMpeg + 0x40) + 0xe8) = 0;
  _tmpRefGOPreset = 1;
  _drop_frame_flag = _nextBit(1);
  _time_code_hours = _nextBit(5);
  _time_code_minutes = _nextBit(6);
  _nextBit(1);
  _time_code_seconds = _nextBit(6);
  _time_code_pictures = _nextBit(6);
  _closed_gop = _nextBit(1);
  _broken_link = _nextBit(1);
  _extensionAndUserData();
  return;
}

_quantMatrixExtension() {
  long lVar1;
  
  lVar1 = _nextBit(1);
  _load_intra_quantizer_matrix = (undefined4)lVar1;
  if (lVar1 != 0) {
    _waitIpuIdle();
    _sendIpuCommand(0x50000000);
    _waitIpuIdle();
  }
  lVar1 = _nextBit(1);
  _load_non_intra_quantizer_matrix = (undefined4)lVar1;
  if (lVar1 != 0) {
    _waitIpuIdle();
    _sendIpuCommand(0x58000000);
    _waitIpuIdle();
  }
  lVar1 = _nextBit(1);
  if (lVar1 != 0) {
    _Error(0x354140);
  }
  lVar1 = _nextBit(1);
  if (lVar1 != 0) {
    _Error(0x354168);
    return;
  }
  return;
}

_pictureDisplayExtension() {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (_progressive_sequence == 0) {
    if (_picture_structure == 3) {
      iVar4 = 2;
      if (_repeat_first_field != 0) {
        iVar4 = _picture_structure;
      }
      goto LAB_0023820c;
    }
  }
  else if (_repeat_first_field != 0) {
    iVar4 = 2;
    if (_top_field_first != 0) {
      iVar4 = 3;
    }
    goto LAB_0023820c;
  }
  iVar4 = 1;
LAB_0023820c:
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = iVar3 * 4;
      uVar1 = _nextBit(0x10);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(_frame_center_horizontal_offset + iVar2) = uVar1;
      _nextBit(1);
      uVar1 = _nextBit(0x10);
      *(undefined4 *)(_frame_center_vertical_offset + iVar2) = uVar1;
      _nextBit(1);
    } while (iVar3 < iVar4);
  }
  return;
}

_copyrightExtension() {
  _copyright_flag = _nextBit(1);
  _copyright_identifier = _nextBit(8);
  _original_or_copy = _nextBit(1);
  _nextBit(7);
  _nextBit(1);
  _copyright_number_1 = _nextBit(0x14);
  _nextBit(1);
  _copyright_number_2 = _nextBit(0x16);
  _nextBit(1);
  _copyright_number_3 = _nextBit(0x16);
  return;
}

_decPicture() {
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((_picture_structure == 3) && (_isSecondField != 0)) {
    _Error(0x354198);
    _isSecondField = 0;
  }
  iVar1 = _curFrame;
  iVar3 = _curBot;
  if (_picture_structure != 2) {
    if (_picture_structure < 3) {
      iVar3 = _curTop;
      if (_picture_structure == 1) goto LAB_002383e4;
    }
    else {
      iVar3 = iVar1;
      if (_picture_structure == 3) goto LAB_002383e4;
    }
    _Error(0x3541b8);
    iVar3 = iVar1;
  }
LAB_002383e4:
  lVar2 = _pictureData0(param_1);
  if (lVar2 != 0) {
    *(undefined4 *)(iVar3 + 0x28) = 1;
  }
  return lVar2;
}

_outputFrame() {
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  if (param_2 != 0) {
    if (_picture_structure == 3) {
      puVar2 = _forwFrame;
      if (_picture_coding_type == 3) {
        puVar2 = _zFrame;
      }
      _dispRefImage(puVar2,param_1 + -1);
      iVar4 = *(int *)(iVar1 + 0xf8);
      goto LAB_002384b0;
    }
    puVar2 = _forwTop;
    puVar3 = _forwBot;
    if (_picture_coding_type == 3) {
      puVar2 = _zTop;
      puVar3 = _zBot;
    }
    _dispRefImageField(puVar2,puVar3,param_1 + -1);
  }
  iVar4 = *(int *)(iVar1 + 0xf8);
LAB_002384b0:
  if (iVar4 == 1) {
    *(undefined4 *)(iVar1 + 0xf8) = 2;
  }
  return;
}

_updateRefImage() {
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  
  puVar3 = _forwBot;
  puVar2 = _backTop;
  puVar10 = _backFrame;
  iVar11 = 4;
  if (_picture_structure == 3) {
    iVar11 = 2;
  }
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  puVar12 = (undefined *)0x0;
  uVar13 = 0;
  if (_picture_coding_type == 3) {
    _curFrame = _zFrame;
    _curTop = _zTop;
    _curBot = _zBot;
    if (iVar11 <= *(int *)(iVar1 + 0xa0) + *(int *)(iVar1 + 0xa4)) {
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      _broken_link = 0;
      _closed_gop = 0;
    }
    puVar10 = _forwTop;
    if ((*(int *)(iVar1 + 0xe8) == 0) && (_broken_link == 0)) {
LAB_002385d4:
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    else {
      if (_closed_gop == 0) {
        *(undefined4 *)(_forwFrame + 0x28) = 0;
        puVar2 = _forwBot;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        goto LAB_002385d4;
      }
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    _broken_link = 0;
    if (_picture_structure == 3) {
      if ((*(int *)(_forwFrame + 0x28) == 1) || (_closed_gop != 0)) {
        uVar13 = (uint)(*(int *)(_backFrame + 0x28) == 1);
      }
    }
    else if ((((*(int *)(_forwTop + 0x28) == 1) && (*(int *)(_forwBot + 0x28) == 1)) ||
             (_closed_gop != 0)) &&
            ((*(uint *)(_backTop + 0x28) == 1 &&
             (uVar13 = *(uint *)(_backTop + 0x28), *(int *)(_backBot + 0x28) != 1)))) {
      uVar13 = 0;
    }
  }
  else {
    if (param_1 == 0) {
      _backFrame = _forwFrame;
      _backTop = _forwTop;
      _forwFrame = puVar10;
      _forwTop = puVar2;
      _forwBot = _backBot;
      _backBot = puVar3;
    }
    _curFrame = _backFrame;
    _curTop = _backTop;
    _curBot = _backBot;
    if (_picture_structure == 3) {
      if (_picture_coding_type == 2) {
        if (*(int *)(_forwFrame + 0x28) == 1) {
          uVar13 = 1;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      puVar10 = _backBot;
      if (_picture_structure != 1) {
        puVar10 = _backTop;
      }
      if (((_picture_coding_type != 2) || ((param_1 != 0 && (*(int *)(puVar10 + 0x28) == 1)))) ||
         ((*(int *)(_forwTop + 0x28) == 1 && (*(int *)(_forwBot + 0x28) == 1)))) {
        uVar13 = 1;
      }
    }
  }
  uVar9 = _headerDts;
  uVar8 = _headerPts;
  uVar7 = _progressive_frame;
  uVar6 = _repeat_first_field;
  uVar5 = _top_field_first;
  iVar11 = _picture_structure;
  uVar4 = _progressive_sequence;
  puVar10 = _curBot;
  if (_picture_structure != 2) {
    if (_picture_structure < 3) {
      puVar10 = _curTop;
      if (_picture_structure != 1) goto LAB_002387e0;
    }
    else {
      puVar10 = _curFrame;
      if (_picture_structure != 3) {
        puVar10 = puVar12;
      }
    }
  }
  puVar12 = puVar10;
LAB_002387e0:
  *(int *)(puVar12 + 0x2c) = _picture_coding_type;
  *(int *)(puVar12 + 0x30) = iVar11;
  *(undefined4 *)(puVar12 + 0x34) = uVar4;
  *(undefined4 *)(puVar12 + 0x38) = uVar7;
  *(undefined4 *)(puVar12 + 0x3c) = uVar5;
  *(undefined4 *)(puVar12 + 0x40) = uVar6;
  *(undefined4 *)(puVar12 + 0x28) = 0;
  uVar5 = _display_vertical_size;
  uVar4 = _display_horizontal_size;
  *(undefined4 *)(puVar12 + 0x44) = _frame_center_horizontal_offset._0_4_;
  *(undefined4 *)(puVar12 + 0x48) = _frame_center_horizontal_offset._4_4_;
  *(undefined8 *)(puVar12 + 0x18) = uVar8;
  *(undefined4 *)(puVar12 + 0x4c) = _frame_center_horizontal_offset._8_4_;
  *(undefined8 *)(puVar12 + 0x20) = uVar9;
  *(undefined4 *)(puVar12 + 0x50) = _frame_center_vertical_offset._0_4_;
  *(undefined4 *)(puVar12 + 0x54) = _frame_center_vertical_offset._4_4_;
  uVar6 = _frame_center_vertical_offset._8_4_;
  *(undefined4 *)(puVar12 + 0x60) = uVar5;
  *(undefined4 *)(puVar12 + 0x58) = uVar6;
  *(undefined4 *)(puVar12 + 0x5c) = uVar4;
  return uVar13;
}

static _isOutSizeOK() {
  int iVar1;
  bool bVar2;
  char acStack_120 [256];
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  if (*(int *)(iVar1 + 0xe0) == 0) {
    bVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10) <= *(int *)(iVar1 + 0xe4);
  }
  else {
    bVar2 = false;
    if (*(int *)(param_1 + 4) <= *(int *)(iVar1 + 0xdc)) {
      bVar2 = *(int *)(param_1 + 8) <= *(int *)(iVar1 + 0xe0);
    }
  }
  if (bVar2 == false) {
    sprintf(acStack_120,"Too small buffer size for %dx%d picture\n");
    _Error(acStack_120);
  }
  return bVar2;
}

_cpr8() {
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  uVar6 = *param_1 & 0xfffffff;
  uVar12 = *(uint *)(iVar1 + 0xd8) & 0xfffffff;
  if (_picture_structure == 3) {
    iVar5 = *(int *)(iVar1 + 0xe0);
    uVar4 = param_1[4];
  }
  else {
    iVar5 = *(int *)(iVar1 + 0xe0);
    if (iVar5 != 0) {
      iVar11 = (iVar5 >> 4) * 0xc0;
      iVar9 = ((int)param_1[4] >> 1) * 0x180;
      iVar5 = 2;
      goto LAB_002389f0;
    }
    uVar4 = param_1[4];
  }
  iVar9 = uVar4 * 0x180;
  iVar11 = iVar9;
  if (iVar5 != 0) {
    iVar11 = (iVar5 >> 4) * 0x180;
  }
  iVar5 = 1;
LAB_002389f0:
  iVar10 = 0;
  if (iVar5 != 0) {
    uVar4 = param_1[3];
    do {
      iVar7 = 0;
      uVar8 = uVar12;
      if ((int)uVar4 < 1) {
        iVar7 = *(int *)(iVar1 + 0xe4);
      }
      else {
        do {
          REG_DMAC_9_SPR_TO_SADR = 0;
          REG_DMAC_9_SPR_TO_MADR = uVar6;
          REG_DMAC_9_SPR_TO_QWC = iVar9 >> 4;
          uVar6 = uVar6 + iVar9;
          REG_DMAC_9_SPR_TO_CHCR = 0x101;
          iVar7 = iVar7 + 1;
          do {
            uVar4 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar4 & 0x100) != 0);
          REG_DMAC_8_SPR_FROM_SADR = 0;
          REG_DMAC_8_SPR_FROM_MADR = uVar8;
          REG_DMAC_8_SPR_FROM_QWC = iVar9 >> 4;
          REG_DMAC_8_SPR_FROM_CHCR = 0x100;
          uVar4 = param_1[3];
          do {
            uVar2 = REG_DMAC_8_SPR_FROM_CHCR;
          } while ((uVar2 & 0x100) != 0);
          do {
            iVar3 = REG_DMAC_8_SPR_FROM_QWC;
          } while (iVar3 != 0);
          uVar8 = uVar8 + iVar11;
        } while (iVar7 < (int)uVar4);
        iVar7 = *(int *)(iVar1 + 0xe4);
      }
      iVar10 = iVar10 + 1;
      uVar12 = iVar7 * 0xc0 + uVar12;
    } while (iVar10 < iVar5);
  }
  return;
}

static _markOutput() {
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = _totalFrames;
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  if (*(int *)(iVar1 + 8) != 2) {
    *(undefined4 *)(iVar1 + 8) = 2;
    *(undefined4 *)(iVar1 + 0xac) = uVar2;
  }
  _isOutputPicture = 1;
  return;
}

static _getPtsDtsFlags() {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong v;
  ulong u;
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  if (*(int *)(iVar1 + 0x70) == 0) {
    *param_2 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 < 0) {
      iVar2 = *(int *)(iVar1 + 0x80);
      if (iVar2 < 0) {
        *param_2 = lVar6;
      }
      else {
        v = (ulong)(int)*(undefined8 *)(iVar1 + 0x88);
        u = v & 1;
        lVar6 = __muldi3(u,*(ulong *)(iVar1 + 0x78) & 1);
        iVar3 = *(int *)(iVar1 + 0x90);
        lVar6 = __muldi3(lVar6,(long)iVar3 & 1);
        lVar7 = __muldi3(*(long *)(iVar1 + 0x78),v);
        *param_2 = (long)(iVar2 + (int)((ulong)(lVar7 << 0x1f) >> 0x20) + (int)lVar6);
        lVar6 = __muldi3(u,*(ulong *)(iVar1 + 0x78) & 1);
        if (lVar6 != 0) {
          *(int *)(iVar1 + 0x90) = iVar3 + 1;
        }
      }
    }
    else {
      *param_2 = lVar6;
    }
  }
  if (*(int *)(iVar1 + 0xf8) == 2) {
    if (*(long *)(iVar1 + 0xf0) < 0) {
      lVar6 = (long)*(int *)(param_1 + 0x40);
    }
    else {
      *param_2 = *(long *)(iVar1 + 0xf0);
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(undefined8 *)(iVar1 + 0xf0) = 0xffffffffffffffff;
      lVar6 = (long)*(int *)(param_1 + 0x40);
    }
  }
  else {
    lVar6 = (long)*(int *)(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x38);
  *param_3 = *(undefined8 *)(param_1 + 0x20);
  *param_4 = (long)iVar2 << 8 | (long)iVar4 | lVar6 << 5 | (long)iVar1 << 6 |
             (long)iVar5 << 7 | (long)iVar3 << 3;
  return;
}

_dispRefImage() {
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  _getPtsDtsFlags(param_1,_theSceMpeg + 0x10,_theSceMpeg + 0x18,_theSceMpeg + 0x20);
  lVar3 = *(long *)(_theSceMpeg + 0x20);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(_theSceMpeg + 0x10);
  iVar4 = (int)param_1;
  uVar2 = *(uint *)(_showCount + ((uint)((ulong)(lVar3 << 0x1b) >> 0x20) & 0xf) * 4);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar4 + 0x5c);
  *(ulong *)(iVar1 + 0x88) = (ulong)uVar2;
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar4 + 0x60);
  *(undefined4 *)(iVar1 + 0xb4) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar4 + 0x58);
  lVar3 = _isOutSizeOK(param_1);
  if ((lVar3 != 0) && (*(int *)(iVar4 + 0x28) == 1)) {
    if (*(int *)(iVar1 + 0xb0) == 0) {
      _cpr8(param_1);
    }
    else {
      _csc_storeRefImage(param_1);
    }
    _markOutput();
    return;
  }
  return;
}

_dispRefImageField() {
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar11 = 0;
  iVar2 = *(int *)(_theSceMpeg + 0x40);
  uVar9 = param_2;
  uVar10 = param_1;
  if (_picture_structure == 2) {
    uVar11 = 0x40;
    uVar9 = param_1;
    uVar10 = param_2;
  }
  _getPtsDtsFlags(uVar9,_theSceMpeg + 0x10,_theSceMpeg + 0x18,_theSceMpeg + 0x20);
  iVar8 = _theSceMpeg;
  uVar1 = *(undefined4 *)(_theSceMpeg + 0x10);
  iVar7 = _theSceMpeg + 0x38;
  iVar6 = _theSceMpeg + 0x28;
  *(undefined8 *)(iVar2 + 0x88) = 1;
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  _getPtsDtsFlags(uVar10,iVar6,iVar8 + 0x30,iVar7);
  iVar8 = _theSceMpeg;
  uVar1 = *(undefined4 *)(_theSceMpeg + 0x28);
  *(undefined8 *)(iVar2 + 0x88) = 1;
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  uVar3 = *(ulong *)(iVar8 + 0x20);
  iVar6 = (int)uVar9;
  uVar5 = *(ulong *)(iVar8 + 0x38);
  *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar6 + 0x5c);
  *(ulong *)(iVar8 + 0x20) = uVar3 | uVar11;
  uVar1 = *(undefined4 *)(iVar6 + 0x60);
  *(ulong *)(iVar8 + 0x38) = uVar5 | uVar11;
  *(undefined4 *)(iVar2 + 0xd0) = uVar1;
  *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar2 + 0xb8) = *(undefined4 *)((int)uVar10 + 0x48);
  *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)((int)uVar10 + 0x54);
  lVar4 = _isOutSizeOK(param_1);
  if (((lVar4 != 0) && (iVar8 = (int)param_1, *(int *)(iVar8 + 0x28) == 1)) &&
     (*(int *)((int)param_2 + 0x28) == 1)) {
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) << 1;
    if (*(int *)(iVar2 + 0xb0) == 0) {
      _cpr8(param_1);
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    else {
      _csc_storeRefImage(param_1);
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    *(int *)(iVar8 + 0x10) = iVar2 >> 1;
    _markOutput();
    return;
  }
  return;
}
