// STATUS: NOT STARTED


_initSeqAgain() {
  _isMpeg2 = 0;
  _ipuSetMPEG1(1);
  return;
}

_lastFrame() {
  if (_isSecondField == 0) {
    if (_picture_structure == 3) {
      _dispRefImage(_backFrame,param_1 + -1);
    }
    else {
      _dispRefImageField(_backTop,_backBot,param_1 + -1);
    }
  }
  else {
    _Error(0x353e28);
  }
  _isSecondField = 0;
  return;
}

_clearOnce() {
  _ipuSetMPEG1(1);
  _mbcont._0_4_ = _buffbase;
  _mbcont._640_4_ = 0;
  _mbcont._4_4_ = _buffbase + 0x1800;
  _mbcont._320_4_ = _buffbase + 0x1b00;
  _mbcont._324_4_ = _buffbase + 0x3300;
  return;
}

_clearEach() {
  uint uVar1;
  
  _sp_dcr = 0;
  _isTop32dirty = 1;
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0;
  REG_DMAC_9_SPR_TO_CHCR = 0;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  EIntr();
  REG_DMAC_3_IPU_FROM_QWC = 0;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_9_SPR_TO_QWC = 0;
  REG_IPU_CTRL = 0x40000000;
  sceIpuSync(0,0);
  return;
}

_ErrMessage() {
  int iVar1;
  
  iVar1 = printf("[MPEG ERROR]%s\n");
  return iVar1;
}

_Error1() {
  char acStack_110 [256];
  
  sprintf(acStack_110,param_1);
  _Error(acStack_110);
  return;
}

_Error() {
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((_theSceMpeg == 0) || (*(int *)(_theSceMpeg + 0x40) == 0)) ||
     (param_2 = &local_20, *(int *)(*(int *)(_theSceMpeg + 0x40) + 0xc) == 0)) {
    _ErrMessage(param_1,param_2);
  }
  else {
    local_1c = (undefined4)param_1;
    local_20 = 0;
    _dispatchMpegCallback();
  }
  return;
}

_sendDataToIPU() {
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)0x20408d40;
  if (0 < param_2) {
    do {
      iVar4 = 0xfff40;
      if (param_2 < 0xfff41) {
        iVar4 = param_2;
      }
      param_2 = param_2 - iVar4;
      iVar1 = iVar4 + 0x1e;
      if (-1 < iVar4 + 0xf) {
        iVar1 = iVar4 + 0xf;
      }
      uVar3 = param_1 & 0xfffffff;
      lVar2 = 0;
      if (param_2 != 0) {
        lVar2 = 3;
      }
      param_1 = param_1 + iVar4;
      *puVar5 = (ulong)uVar3 << 0x20 | lVar2 << 0x1c | (long)(iVar1 >> 4) & 0xffffffffU;
      puVar5 = puVar5 + 2;
    } while (0 < param_2);
  }
  REG_DMAC_4_IPU_TO_TADR = 0x408d40;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0x105;
  return;
}

static _RefImageInit() {
  *(int *)(param_1 + 0xc) = param_2 >> 4;
  *(int *)(param_1 + 0x10) = param_3 >> 4;
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return 1;
}

_sequenceHeader() {
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(*(int *)(_theSceMpeg + 0x40) + 0xd4) = 0;
  uVar1 = _nextBit(0x20);
  _frame_rate_code = uVar1 & 0xf;
  _horizontal_size = uVar1 >> 0x14;
  _vertical_size = uVar1 >> 8 & 0xfff;
  _aspect_ratio_information = uVar1 >> 4 & 0xf;
  if (0xaf0 < _vertical_size) {
    _Error(0x353e58);
  }
  uVar1 = _nextBit(0x1e);
  _bit_rate_value = uVar1 >> 0xc;
  _constrained_parameters_flag = uVar1 & 1;
  _vbv_buffer_size_value = uVar1 >> 1 & 0x3ff;
  lVar2 = _nextBit(1);
  _load_intra_quantizer_matrix = (undefined4)lVar2;
  if (lVar2 == 0) {
    _setDefaultQM(0x50000000,0x348480);
  }
  else {
    _waitIpuIdle();
    _sendIpuCommand(0x50000000);
    _waitIpuIdle();
  }
  lVar2 = _nextBit(1);
  _load_non_intra_quantizer_matrix = (undefined4)lVar2;
  if (lVar2 == 0) {
    _setDefaultQM(0x58000000,0x3484c0);
  }
  else {
    _waitIpuIdle();
    _sendIpuCommand(0x58000000);
    _waitIpuIdle();
  }
  _extensionAndUserData();
  _initSeq(_theSceMpeg);
  return;
}

_initSeq() {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = param_1[0x10];
  if (_isMpeg2 == 0) {
    _picture_structure = 3;
    _frame_pred_frame_dct = 1;
    _matrix_coefficients = 5;
    _progressive_sequence = 1;
    _chroma_format = 1;
    _progressive_frame = 1;
  }
  _widthMB = _horizontal_size + 0xf >> 4;
  if ((_isMpeg2 == 0) || (_progressive_sequence != 0)) {
    iVar2 = _vertical_size + 0xf >> 4;
  }
  else {
    iVar2 = (_vertical_size + 0x1f >> 5) << 1;
  }
  _heightMB = iVar2;
  iVar5 = _widthMB * 0x10;
  iVar4 = iVar2 * 0x10;
  _picWidth = iVar5;
  _picHeight = iVar4;
  if ((iVar5 == *param_1) && (iVar4 == param_1[1])) {
    return;
  }
  param_1[1] = iVar4;
  *param_1 = iVar5;
  _cWidth = iVar5 >> 1;
  _cHeight = iVar4 >> 1;
  iVar4 = iVar1 + 0x108;
  uVar6 = (uint)(iVar5 * iVar2 * 0x1800) >> 8;
  _alalcFree(iVar4);
  uVar3 = _alalcAlloc(iVar4,uVar6,0x40);
  *(undefined4 *)(iVar1 + 0xfc) = uVar3;
  uVar3 = _alalcAlloc(iVar4,uVar6,0x40);
  *(undefined4 *)(iVar1 + 0x100) = uVar3;
  uVar3 = _alalcAlloc(iVar4,uVar6,0x40);
  *(undefined4 *)(iVar1 + 0x104) = uVar3;
  _initRefImages(0x348650,0x3486b8,0x348720,0x348788,0x3487f0,0x348858,0x3488c0,0x348928);
  _RefImageInit(0x348650,_picWidth,_picHeight);
  _RefImageInit(0x3486b8,_picWidth,_picHeight);
  _RefImageInit(0x348720,_picWidth,_picHeight);
  _RefImageInit(0x348788,_picWidth,_picHeight / 2);
  _RefImageInit(0x3487f0,_picWidth,_picHeight / 2);
  _RefImageInit(0x348858,_picWidth,_picHeight / 2);
  _RefImageInit(0x3488c0,_picWidth,_picHeight / 2);
  _RefImageInit(0x348928,_picWidth,_picHeight / 2);
  _RefImageInit(0x348990,_picWidth,_picHeight / 2);
  return;
}

static _initRefImages() {
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = _picWidth * _picHeight;
  iVar2 = iVar1 + 0x1ff;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 >> 9;
  uVar5 = param_10 & 0xfffffff | 0x20000000;
  *param_1 = uVar5;
  uVar4 = param_11 & 0xfffffff | 0x20000000;
  *param_2 = uVar4;
  uVar3 = param_12 & 0xfffffff | 0x20000000;
  *param_3 = uVar3;
  *param_4 = uVar5;
  *param_5 = uVar4;
  *param_6 = uVar3;
  *param_7 = iVar2 * 0x180 + param_10 & 0xfffffff | 0x20000000;
  *param_8 = iVar2 * 0x180 + param_11 & 0xfffffff | 0x20000000;
  *param_9 = iVar2 * 0x180 + param_12 & 0xfffffff | 0x20000000;
  return;
}

static _setDefaultQM() {
  undefined4 local_60 [8];
  
  local_60[0] = 2;
  _dispatchMpegCallback(_theSceMpeg,local_60);
  _waitIpuIdle();
  REG_IPU_CMD = 0;
  _waitIpuIdle();
  REG_DMAC_4_IPU_TO_MADR = param_2 & 0xfffffff;
  REG_DMAC_4_IPU_TO_QWC = 4;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  _sendIpuCommand(param_1);
  _waitIpuIdle();
  local_60[0] = 3;
  _dispatchMpegCallback(_theSceMpeg,local_60);
  return;
}

_sequenceExtension() {
  uint uVar1;
  uint uVar2;
  
  _isMpeg2 = 1;
  _ipuSetMPEG1(0);
  uVar1 = _nextBit(0x1c);
  _chroma_format = uVar1 >> 0x11 & 3;
  if (_chroma_format != 1) {
    _Error(0x353e70);
  }
  _profile_and_level_indication = uVar1 >> 0x14;
  _progressive_sequence = uVar1 >> 0x13 & 1;
  uVar2 = _nextBit(0x10);
  _frame_rate_extension_d = uVar2 & 0x1f;
  _frame_rate_extension_n = uVar2 >> 5 & 3;
  _low_delay = uVar2 >> 7 & 1;
  if ((_profile_and_level_indication != 0x48) && (_profile_and_level_indication != 0x58)) {
    _Error(0x353e98);
  }
  _horizontal_size = (uVar1 >> 0xf & 3) << 0xc | _horizontal_size & 0xfff;
  _vertical_size = (uVar1 >> 0xd & 3) << 0xc | _vertical_size & 0xfff;
  _bit_rate_value = _bit_rate_value + (uVar1 >> 1 & 0xfff) * 0x40000;
  _vbv_buffer_size_value = _vbv_buffer_size_value + (uVar2 >> 8) * 0x400;
  return;
}

_sequenceDisplayExtension() {
  long lVar1;
  
  _video_format = _nextBit(3);
  lVar1 = _nextBit(1);
  _color_description = (undefined4)lVar1;
  if (lVar1 != 0) {
    _color_primaries = _nextBit(8);
    _transfer_characteristics = _nextBit(8);
    _matrix_coefficients = _nextBit(8);
  }
  _display_horizontal_size = _nextBit(0xe);
  _nextBit(1);
  _display_vertical_size = _nextBit(0xe);
  return;
}

_sequenceScalableExtension() {
  _Error(0x353eb8);
  return;
}

_unknown_extension() {
  _Error(0x353ee8);
  return;
}

_pictureSpatialScalableExtension() {
  _Error(0x353f00);
  return;
}

_pictureTemporalScalableExtension() {
  _Error(0x353f38);
  return;
}
