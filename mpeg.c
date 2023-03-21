// STATUS: NOT STARTED


sceMpegInit() {
  uint uVar1;
  
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  uVar1 = REG_DMAC_3_IPU_FROM_CHCR;
  REG_DMAC_3_IPU_FROM_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_4_IPU_TO_CHCR;
  REG_DMAC_4_IPU_TO_CHCR = uVar1 & 0xfffffeff;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  EIntr();
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  sceIpuInit();
  return;
}

sceMpegCreate() {
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar4 = param_2 + 3U & 0xfffffffc;
  uVar3 = param_3 - (uVar4 - param_2);
  if (0x117 < uVar3) {
    iVar6 = uVar4 + 0x108;
    puVar5 = (undefined4 *)param_1;
    puVar5[0x10] = uVar4;
    _alalcInit(iVar6,uVar4 + 0x118,uVar3 - 0x118);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)(uVar4 + 0xb4) = 0;
    *(undefined4 *)(uVar4 + 0xb8) = 0;
    *(undefined4 *)(uVar4 + 0xbc) = 0;
    *(undefined4 *)(uVar4 + 0xc0) = 0;
    *(undefined4 *)(uVar4 + 0xc4) = 0;
    *(undefined4 *)(uVar4 + 200) = 0;
    *(undefined4 *)(uVar4 + 0xcc) = 0;
    *(undefined4 *)(uVar4 + 0xd0) = 0;
    *(undefined4 *)(uVar4 + 0xd4) = 0;
    *(undefined4 *)(uVar4 + 0xd8) = 0;
    *(undefined4 *)(uVar4 + 0xdc) = 0;
    *(undefined4 *)(uVar4 + 0xe0) = 0;
    *(undefined4 *)(uVar4 + 0xe4) = 0;
    *(undefined4 *)(uVar4 + 0xe8) = 0;
    *(undefined4 *)(uVar4 + 0xf8) = 0;
    *(undefined4 *)(uVar4 + 0xc) = 0;
    *(undefined4 *)(uVar4 + 0x14) = 0;
    *(undefined4 *)(uVar4 + 0x2c) = 0;
    *(undefined4 *)(uVar4 + 0x34) = 0;
    *(undefined4 *)(uVar4 + 0x3c) = 0;
    *(undefined8 *)(uVar4 + 0xf0) = 0xffffffffffffffff;
    *(code **)(uVar4 + 0x1c) = _defStopDMA;
    *(code **)(uVar4 + 0x24) = _defRestartDMA;
    uVar1 = _alalcAlloc(iVar6,0x600,8);
    *(undefined4 *)(uVar4 + 0x48) = 0;
    *(undefined4 *)(uVar4 + 0xfc) = 0;
    *(undefined4 *)(uVar4 + 0x100) = 0;
    *(undefined4 *)(uVar4 + 0x104) = 0;
    *(undefined4 *)(uVar4 + 0x70) = 0;
    *(undefined8 *)(uVar4 + 0x78) = 0;
    *(undefined8 *)(uVar4 + 0x88) = 0;
    *(undefined4 *)(uVar4 + 0x90) = 0;
    *(undefined4 *)(uVar4 + 0xac) = 0;
    *(undefined4 *)(uVar4 + 0x9c) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x44) = uVar1;
    *(undefined4 *)(uVar4 + 0xb0) = 1;
    _theSceMpeg = puVar5;
    *(undefined4 *)(uVar4 + 0x80) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x94) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x98) = 0xffffffff;
    _clearOnce();
    sceMpegReset(param_1);
    sceMpegClearRefBuff(param_1);
    _forwFrame = _refFrame0;
    _zTop = _refTop2;
    _forwBot = _refBot0;
    _backBot = _refBot1;
    _zBot = _refBot2;
    _backFrame = _refFrame1;
    _zFrame = _refFrame2;
    _forwTop = _refTop0;
    _backTop = _refTop1;
    uVar2 = _alalcSetDynamic(iVar6);
    return uVar2;
  }
  _Error(0x353d80);
  return 0;
}

sceMpegDelete() {
  return 1;
}

sceMpegAddBs() {
  int iVar1;
  
  iVar1 = param_3 + 0x22;
  if (-1 < param_3 + 0x13) {
    iVar1 = param_3 + 0x13;
  }
  _bsDataSize = (iVar1 >> 4) << 4;
  _bsDatap = (undefined4)param_2;
  _sendDataToIPU(param_2,_bsDataSize);
  return;
}

sceMpegGetPicture() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xb0) = 1;
  *(uint *)(iVar1 + 0xd8) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xe4) = param_3;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  _getpic();
  return;
}

sceMpegGetPictureRAW8() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xe4) = param_3;
  *(uint *)(iVar1 + 0xd8) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  _getpic();
  return;
}

sceMpegGetPictureRAW8xy() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xe0) = param_4 << 4;
  *(uint *)(iVar1 + 0xd8) = param_2 & 0xfffffff | 0x20000000;
  *(int *)(iVar1 + 0xe4) = param_3 * param_4;
  *(int *)(iVar1 + 0xdc) = param_3 << 4;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  _getpic();
  return;
}

sceMpegSetDecodeMode() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0x9c) = param_4;
  *(undefined4 *)(iVar1 + 0x94) = param_2;
  *(undefined4 *)(iVar1 + 0x98) = param_3;
  return;
}

sceMpegGetDecodeMode() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *param_2 = *(undefined4 *)(iVar1 + 0x94);
  *param_3 = *(undefined4 *)(iVar1 + 0x98);
  *param_4 = *(undefined4 *)(iVar1 + 0x9c);
  return;
}

sceMpegIsEnd() {
  return **(undefined4 **)(param_1 + 0x40);
}

sceMpegIsRefBuffEmpty() {
  return *(int *)(*(int *)(param_1 + 0x40) + 4) == 0;
}

sceMpegReset() {
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1[0x20] = 0xffffffff;
  puVar1[0x2b] = 0;
  _clearEach();
  _totalFrames = 0;
  _initSeqAgain();
  return;
}

sceMpegClearRefBuff() {
  if (_forwFrame != (undefined *)0x0) {
    *(undefined4 *)(_forwFrame + 0x28) = 0;
  }
  if (_forwTop != (undefined *)0x0) {
    *(undefined4 *)(_forwTop + 0x28) = 0;
  }
  if (_forwBot != (undefined *)0x0) {
    *(undefined4 *)(_forwBot + 0x28) = 0;
  }
  if (_backFrame != (undefined *)0x0) {
    *(undefined4 *)(_backFrame + 0x28) = 0;
  }
  if (_backTop != (undefined *)0x0) {
    *(undefined4 *)(_backTop + 0x28) = 0;
  }
  if (_backBot != (undefined *)0x0) {
    *(undefined4 *)(_backBot + 0x28) = 0;
  }
  return 1;
}

sceMpegAddCallback() {
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + 0xc + param_2 * 8);
  *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 8 + 0x10) = param_4;
  uVar1 = *puVar2;
  *puVar2 = param_3;
  return uVar1;
}

_dispatchMpegCallback() {
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) {
    pcVar2 = *(code **)(iVar1 + *param_2 * 8 + 0xc);
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)((int)param_1,param_2,*(undefined4 *)(iVar1 + *param_2 * 8 + 0x10));
    }
  }
  return uVar3;
}

_dispatchMpegCbNodata() {
  undefined4 local_30 [8];
  
  local_30[0] = 1;
  _dispatchMpegCallback(param_1,local_30);
  return;
}

sceMpegSetDefaultPtsGap() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(iVar1 + 0x78) = param_2;
  *(undefined4 *)(iVar1 + 0x70) = 1;
  return;
}

sceMpegResetDefaultPtsGap() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined8 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  return;
}

sceMpegSetImageBuff() {
  *(undefined4 *)(*(int *)(_theSceMpeg + 0x40) + 0xd8) = param_1;
  return;
}

sceMpegDispWidth() {
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xcc);
}

sceMpegDispHeight() {
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd0);
}

sceMpegDispCenterOffX() {
  return *(int *)(param_1 + 0x40) + 0xb4;
}

sceMpegDispCenterOffY() {
  return *(int *)(param_1 + 0x40) + 0xb4;
}

sceSetBrokenLink() {
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xe8);
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xe8) = param_2;
  return uVar1;
}

sceSetPtm() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xf8) = 1;
  *(undefined8 *)(iVar1 + 0xf0) = param_2;
  return;
}

_alalcInit() {
  param_1[3] = param_2;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_2;
  return;
}

_alalcSetDynamic() {
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}

_alalcFree() {
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}

_alalcAlloc() {
  int iVar1;
  
  iVar1 = (int)param_3;
  if (param_3 == 0) {
    trap(7);
  }
  iVar1 = ((param_1[2] + iVar1 + -1) / iVar1) * iVar1;
  if ((uint)(*param_1 + param_1[1]) < (uint)(iVar1 + param_2)) {
    _Error(0x353da8);
    iVar1 = 0;
  }
  else {
    param_1[2] = iVar1 + param_2;
  }
  return iVar1;
}

_alalcRest() {
  return (*param_1 + param_1[1]) - param_1[2];
}

static _getpic() {
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = 0;
  if ((puVar1[0x36] & 0x3f) == 0) {
    _isOutputPicture = 0;
LAB_00233238:
    do {
      uVar3 = _nextHeader();
      if ((uVar3 != 0) && (_picture_structure != puVar1[0x35])) {
        if (_isMpeg2 != 0) goto LAB_00233238;
      }
      if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0023327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_00353e10)[(int)uVar3])();
        return uVar2;
      }
    } while (_isOutputPicture == 0);
    uVar2 = 1;
  }
  else {
    _Error1(0x353dc8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

static _decodeOrSkipFrame() {
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  bVar1 = false;
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar2 + 8) = 1;
    }
    lVar4 = _updateRefImage(0);
    uVar5 = 0;
    if (lVar4 != 0) {
      lVar4 = _decPicture(_totalFrames,*(undefined4 *)(iVar2 + 4));
      uVar5 = (ulong)(lVar4 != 0);
    }
  }
  else {
    bVar1 = true;
    uVar5 = _updateRefImage(0);
    _dispatchMpegCbNodata(param_1);
  }
  _outputFrame(_totalFrames,*(undefined4 *)(iVar2 + 4));
  iVar3 = _totalFrames;
  if ((_picture_structure != 3) && (!bVar1)) {
    _isSecondField = (uint)(_isSecondField == 0);
  }
  bVar1 = _isSecondField == 0;
  *(int *)(iVar6 + 8) = _totalFrames - *(int *)(iVar2 + 0xac);
  if (bVar1) {
    _totalFrames = iVar3 + 1;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return uVar5;
}

static _decodeOrSkip() {
  if (_picture_structure == 3) {
    _decodeOrSkipFrame();
  }
  else {
    _decodeOrSkipField();
  }
  return;
}

static _decodeOrSkipField() {
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  bVar2 = false;
  iVar6 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar6 + 0x40);
  _isSecondField = 0;
  if ((param_3 == -1) || (param_2 < param_3)) {
    bVar2 = true;
    iVar3 = puVar1[2];
  }
  else {
    iVar3 = puVar1[2];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 8) = 0;
    puVar1[2] = 1;
  }
  lVar5 = _updateRefImage(0);
  if ((lVar5 != 0) && (bVar2)) {
    _decPicture(_totalFrames,puVar1[1]);
  }
  _isSecondField = 1;
  lVar5 = _nextHeader();
  if (lVar5 == 0) {
    _sceMpegFlush(param_1);
    *puVar1 = 1;
    iVar3 = 0;
  }
  else {
    iVar4 = 2;
    if (puVar1[0x35] != 1) {
      iVar4 = 1;
    }
    iVar3 = -1;
    if (_picture_structure == iVar4) {
      iVar3 = 0;
      lVar5 = _updateRefImage(1);
      if (((lVar5 != 0) && (bVar2)) && (lVar5 = _decPicture(_totalFrames,puVar1[1]), lVar5 != 0)) {
        iVar3 = 1;
      }
      _outputFrame(_totalFrames,puVar1[1]);
      _isSecondField = 0;
      *(int *)(iVar6 + 8) = _totalFrames - puVar1[0x2b];
      _totalFrames = _totalFrames + 1;
      puVar1[1] = puVar1[1] + 1;
      if (!bVar2) {
        _dispatchMpegCbNodata(param_1);
      }
    }
  }
  return iVar3;
}

_sceMpegFlush() {
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    _lastFrame(_totalFrames);
    uVar2 = 1;
    *(int *)(param_1 + 8) = _totalFrames - *(int *)(iVar1 + 0xac);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return uVar2;
}
