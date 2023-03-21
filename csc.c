// STATUS: NOT STARTED


static _doCSC() {
  int iVar1;
  uint uVar2;
  undefined4 local_30 [8];
  
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = (int)param_2 << 6;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  _sendIpuCommand(param_2 | 0x70000000);
  local_30[0] = 4;
  _dispatchMpegCallback(_theSceMpeg,local_30);
  do {
    uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  } while ((uVar2 >> 8 & 1) != 0);
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}

static _ch3dmaCSC() {
  uint uVar1;
  int iVar2;
  
  REG_DMAC_STAT = 8;
  _cscDma._0_4_ = _cscDma._0_4_ + 1;
  iVar2 = REG_DMAC_3_IPU_FROM_QWC;
  if ((iVar2 == 0) && (uVar1 = REG_DMAC_3_IPU_FROM_CHCR, (uVar1 & 0x100) == 0)) {
    if (_cscDma._0_4_ < _dma_num + -1) {
      REG_DMAC_3_IPU_FROM_MADR = local_addr;
      REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      REG_IPU_CMD = 0x700003ff;
      local_addr = local_addr + 0xffc00 & 0xfffffff;
    }
    else if (_cscDma._0_4_ == _dma_num + -1) {
      local_mb = local_mb + _cscDma._0_4_ * -0x3ff;
      REG_DMAC_3_IPU_FROM_MADR = local_addr;
      REG_DMAC_3_IPU_FROM_QWC = local_mb * 0x40;
      REG_DMAC_3_IPU_FROM_CHCR = 0x100;
      REG_IPU_CMD = local_mb | 0x70000000;
    }
    SYNC(0);
    EI();
    return 0;
  }
  _isCSCerror = 1;
  return 0;
}

static _doCSC2() {
  int iVar1;
  undefined8 uVar2;
  undefined4 local_60 [8];
  
  local_addr = param_1 + 0xffc00 & 0xfffffff;
  _cscDma._0_4_ = 0;
  _isCSCerror = 0;
  _dma_num = param_2 / 0x3ff + 1;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  local_mb = param_2;
  uVar2 = AddDmacHandler(3,0x2390d0,0);
  REG_DMAC_STAT = 8;
  EnableDmac(3);
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = 0xffc0;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  REG_IPU_CMD = 0x700003ff;
  local_60[0] = 4;
  _dispatchMpegCallback(_theSceMpeg,local_60);
  do {
  } while (_cscDma._0_4_ < _dma_num);
  if (_isCSCerror != 0) {
    _Error(0x354208);
  }
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  DisableDmac(3);
  RemoveDmacHandler(3,uVar2);
  return;
}

static _ch4dma() {
  REG_DMAC_STAT = 0x10;
  _ch4dmaFlg = _ch4dmaFlg + 1;
  if (_d4_qwc == 0) {
    return 1;
  }
  if (_d4_qwc < 0x10000) {
    REG_DMAC_4_IPU_TO_MADR = _d4_madr;
    REG_DMAC_4_IPU_TO_QWC = _d4_qwc;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    _d4_qwc = 0;
  }
  else {
    REG_DMAC_4_IPU_TO_MADR = _d4_madr;
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    _d4_madr = _d4_madr + 0xffff0 & 0xfffffff;
    _d4_qwc = _d4_qwc - 0xffff;
  }
  return 0;
}

_csc_storeRefImage() {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_c0 [8];
  
  iVar1 = *(int *)(_theSceMpeg + 0x40);
  local_c0[0] = 2;
  iVar2 = param_1[3] * param_1[4];
  _dispatchMpegCallback(_theSceMpeg,local_c0);
  uVar3 = REG_IPU_CTRL;
  if ((uVar3 & 0x4000) != 0) {
    REG_IPU_CTRL = 0x40000000;
  }
  do {
    iVar4 = REG_IPU_CTRL;
  } while (iVar4 < 0);
  _sendIpuCommand(0);
  do {
    iVar4 = REG_IPU_CTRL;
  } while (iVar4 < 0);
  _d4_qwc = iVar2 * 0x18;
  _d4_madr = *param_1 & 0xfffffff;
  if (_d4_qwc < 0x10000) {
    REG_DMAC_4_IPU_TO_MADR = _d4_madr;
    REG_DMAC_4_IPU_TO_QWC = _d4_qwc;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    _d4_qwc = 0;
    if (0x3ff < iVar2) {
      _doCSC2(*(undefined4 *)(iVar1 + 0xd8),iVar2);
    }
    else {
      _doCSC(*(undefined4 *)(iVar1 + 0xd8),iVar2);
    }
  }
  else {
    uVar5 = AddDmacHandler(4,0x2393d8,0);
    REG_DMAC_STAT = 0x10;
    EnableDmac(4);
    REG_DMAC_4_IPU_TO_MADR = _d4_madr;
    REG_DMAC_4_IPU_TO_QWC = 0xffff;
    REG_DMAC_4_IPU_TO_CHCR = 0x101;
    _d4_madr = _d4_madr + 0xffff0 & 0xfffffff;
    _d4_qwc = _d4_qwc - 0xffff;
    if (0x3ff < iVar2) {
      _doCSC2(*(undefined4 *)(iVar1 + 0xd8),iVar2);
    }
    else {
      _doCSC(*(undefined4 *)(iVar1 + 0xd8),iVar2);
    }
    DisableDmac(4);
    RemoveDmacHandler(4,uVar5);
  }
  local_c0[0] = 3;
  _dispatchMpegCallback(_theSceMpeg,local_c0);
  return;
}
