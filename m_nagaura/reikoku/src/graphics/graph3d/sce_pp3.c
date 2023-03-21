// STATUS: NOT STARTED

static sceGsDBuff db;

void scePP13_Sync() {
	static int fr = 0;
	static int count = 0;
	static int odev = 0;
	
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = REG_RCNT1_COUNT;
  if (count_70 < uVar1) {
    count_70 = REG_RCNT1_COUNT;
  }
  if ((0xdc < (int)count_70) || ((char)fr_69 == '\0')) {
    printf("count=%3d\n");
    count_70 = 0;
  }
  sceGsSyncPath(0,0);
  fr_69 = fr_69 + 1;
  lVar2 = sceGsSyncV(0);
  odev_71 = (uint)(lVar2 == 0);
  REG_RCNT1_COUNT = 0;
  if ((fr_69 & 1) == 0) {
    uVar3 = 0x3fb450;
  }
  else {
    uVar3 = 0x3fb540;
  }
  sceGsSetHalfOffset(uVar3,0x800,0x800,lVar2 == 0);
  FlushCache(0);
  sceGsSwapDBuff(0x3fb3f0,fr_69);
  return;
}

void scePP1_Kick(void *addr) {
	sceDmaChan *chVif1;
	
  undefined8 uVar1;
  
  uVar1 = sceDmaGetChan(1);
  *(uint *)uVar1 = *(uint *)uVar1 | 0x40;
  sceDmaSend(uVar1,addr);
  return;
}

void scePP3_Kick(u_int *addr, int qwc) {
	static sceDmaTag tag[2][3];
	static int tid = 0;
	sceDmaTag *tp;
	sceDmaChan *chGif;
	void *addr;
	int qwc;
	void *addr;
	int qwc;
	void *addr;
	
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = sceDmaGetChan(2);
  tid_79 = 1 - tid_79;
  if (qwc < 0x10000) {
    iVar1 = tid_79 * 0x30;
                    /* inlined from /usr/local/sce/ee/include/libdma.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/include/libdma.h */
    (&DAT_003fb393)[iVar1] = 0x30;
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/include/libdma.h */
    *(uint **)(&DAT_003fb394 + iVar1) = addr;
    *(short *)(&tag_78 + iVar1) = (short)qwc;
    (&DAT_003fb3a3)[iVar1] = 0x70;
    *(undefined4 *)(&DAT_003fb3a4 + iVar1) = 0;
    *(undefined2 *)(&DAT_003fb3a0 + iVar1) = 0;
  }
  else {
    iVar1 = tid_79 * 0x30;
                    /* inlined from /usr/local/sce/ee/include/libdma.h */
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/include/libdma.h */
    (&DAT_003fb393)[iVar1] = 0x30;
    *(uint **)(&DAT_003fb394 + iVar1) = addr;
    *(undefined2 *)(&tag_78 + iVar1) = 0xffff;
    (&DAT_003fb3a3)[iVar1] = 0x30;
    *(uint **)(&DAT_003fb3a4 + iVar1) = addr + 0x3fffc;
    *(short *)(&DAT_003fb3a0 + iVar1) = (short)qwc + 1;
    (&DAT_003fb3b3)[iVar1] = 0x70;
    *(undefined2 *)(&DAT_003fb3b0 + iVar1) = 0;
                    /* end of inlined section */
    *(undefined4 *)(&DAT_003fb3b4 + iVar1) = 0;
  }
                    /* end of inlined section */
  FlushCache(0);
  sceDmaSync(uVar2,0,0);
  sceDmaSend(uVar2,&tag_78 + tid_79 * 0x30);
  return;
}

int scePP1_Disp(u_int mode) {
  return 0;
}

int scePP1_Init(u_int mode) {
  return 0;
}

int scePP1_End(u_int mode) {
  return 0;
}
