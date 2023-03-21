// STATUS: NOT STARTED


static setD4_CHCR() {
  uint uVar1;
  
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = param_1;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  EIntr();
  return;
}

sceIpuInit() {
  int iVar1;
  
  setD4_CHCR(1);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)iqval._0_8_;
  DAT_10007014 = (int)((ulong)iqval._0_8_ >> 0x20);
  DAT_10007018 = iqval._8_4_;
  DAT_1000701c = iqval._12_4_;
  REG_IPU_IN_FIFO = iqval._16_4_;
  DAT_10007014 = iqval._20_4_;
  DAT_10007018 = iqval._24_4_;
  DAT_1000701c = iqval._28_4_;
  REG_IPU_IN_FIFO = iqval._32_4_;
  DAT_10007014 = iqval._36_4_;
  DAT_10007018 = iqval._40_4_;
  DAT_1000701c = iqval._44_4_;
  REG_IPU_IN_FIFO = iqval._48_4_;
  DAT_10007014 = iqval._52_4_;
  DAT_10007018 = iqval._56_4_;
  DAT_1000701c = iqval._60_4_;
  REG_IPU_IN_FIFO = iqval._64_4_;
  DAT_10007014 = iqval._68_4_;
  DAT_10007018 = iqval._72_4_;
  DAT_1000701c = iqval._76_4_;
  REG_IPU_IN_FIFO = iqval._64_4_;
  DAT_10007014 = iqval._68_4_;
  DAT_10007018 = iqval._72_4_;
  DAT_1000701c = iqval._76_4_;
  REG_IPU_IN_FIFO = iqval._64_4_;
  DAT_10007014 = iqval._68_4_;
  DAT_10007018 = iqval._72_4_;
  DAT_1000701c = iqval._76_4_;
  REG_IPU_IN_FIFO = iqval._64_4_;
  DAT_10007014 = iqval._68_4_;
  DAT_10007018 = iqval._72_4_;
  DAT_1000701c = iqval._76_4_;
  REG_IPU_CMD = 0x50000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x58000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)vqval._0_8_;
  DAT_10007014 = (int)((ulong)vqval._0_8_ >> 0x20);
  DAT_10007018 = vqval._8_4_;
  DAT_1000701c = vqval._12_4_;
  REG_IPU_IN_FIFO = vqval._16_4_;
  DAT_10007014 = vqval._20_4_;
  DAT_10007018 = vqval._24_4_;
  DAT_1000701c = vqval._28_4_;
  REG_IPU_CMD = 0x60000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x90000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}
