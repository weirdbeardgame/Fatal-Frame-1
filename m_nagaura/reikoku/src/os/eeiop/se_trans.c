// STATUS: NOT STARTED

enum SE_TRANS_MODE {
	STMODE_READY = 0,
	STMODE_EE2IOP = 1,
	STMODE_IOP2SPU = 2,
	STMODE_USEOK = 3
};

typedef struct {
	u_int dma_id;
	u_int size;
	int file_no;
	u_char trans_pos;
	u_char fg_no;
	u_char mode;
} SE_TRANS_CTRL;

typedef struct {
	int file_no;
	u_char fg_no;
} FG_FILE_TBL;

FG_FILE_TBL fgf_tbl[0] = {
};
SE_TRANS_CTRL st_ctrl = {
	/* .dma_id = */ 0,
	/* .size = */ 0,
	/* .file_no = */ 0,
	/* .trans_pos = */ 0,
	/* .fg_no = */ 0,
	/* .mode = */ 0
};

void FGTransInit() {
  uchar uVar1;
  
  if ((ingame_wrk.msn_no != 0) && (ingame_wrk.msn_no != 4)) {
    uVar1 = ChkFGhostAlreadySet();
    if (uVar1 != '\0') {
      st_ctrl.mode = '\x03';
      ap_wrk.stts = ap_wrk.stts & 0xbf;
      return;
    }
    uVar1 = ChkLoadReqQueueFree();
    if ((uVar1 != '\0') && (uVar1 = ChkNeedsFGhostSe(), uVar1 != '\0')) {
      st_ctrl.mode = '\0';
      return;
    }
  }
  st_ctrl.mode = '\x03';
  return;
}

u_char IsEndFgTrans() {
  return st_ctrl.mode == '\x03';
}

static u_char ChkLoadReqQueueFree() {
  int iVar1;
  
  iVar1 = IsExistLoadReq();
  return iVar1 == 0;
}

static u_char ChkFGhostAlreadySet() {
	int i;
	
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  st_ctrl.file_no =
       *(uint *)((uint)ap_wrk.fgst_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) +
                0x20);
  puVar1 = se_ctrl.ghost_no;
  while ((*puVar1 != st_ctrl.file_no || (se_ctrl.ghost_type[iVar2] != '\x01'))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
    if (2 < iVar2) {
      return '\0';
    }
  }
  return '\x01';
}

static u_char ChkNeedsFGhostSe() {
	int i;
	u_char ret;
	
  int iVar1;
  uchar uVar2;
  
  uVar2 = '\0';
  if (ap_wrk.fg_se_empty[0] == 0) {
    uVar2 = '\x01';
    st_ctrl.trans_pos = '\0';
  }
  else {
    for (iVar1 = 1; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (ap_wrk.fg_se_empty[iVar1] == 0) {
        st_ctrl.trans_pos = (uchar)iVar1;
        return '\x01';
      }
    }
  }
  return uVar2;
}

void FloatGhostSENotEmpty() {
	int i;
	
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  pbVar1 = ap_wrk.fg_se_empty;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    if (*pbVar1 == 0) {
      return;
    }
    pbVar1 = ap_wrk.fg_se_empty + iVar2 + 1;
    iVar2 = iVar3;
  } while (iVar3 < 3);
  ap_wrk.stts = ap_wrk.stts | 0x40;
  return;
}

static void GetSeTransSize() {
  IMG_ARRANGEMENT *pIVar1;
  
  pIVar1 = GetImgArrangementP(st_ctrl.file_no);
  st_ctrl.size = pIVar1->size;
  if (0x64000 < st_ctrl.size) {
    st_ctrl.size = 0x64000;
  }
  return;
}

static void DmaTransReq() {
	sceSifDmaData dma;
	
  sceSifDmaData dma;
  
  dma.data = 0x1460000;
  dma.addr = rcv_stat.cdvd.ld_addr;
  dma.size = st_ctrl.size;
  dma.mode = 0;
  sceSifSetDma(&dma,1);
  return;
}

static u_char ChkDmaTransEndSe() {
  long lVar1;
  
  lVar1 = sceSifDmaStat(st_ctrl.dma_id);
  return lVar1 < 0;
}

static void TransReqIopCmd() {
  SetIopCmdSm(0x10,st_ctrl.size,st_ctrl.trans_pos + 0x10,st_ctrl.file_no);
  return;
}

static u_char TransWaitIopCmd() {
  return rcv_stat.cdvd.se_trans == 2;
}

static void UseOkFGhost() {
  uchar uVar1;
  
  uVar1 = st_ctrl.trans_pos;
  se_ctrl.ghost_no[st_ctrl.trans_pos] = st_ctrl.file_no;
  se_ctrl.ghost_type[uVar1] = '\x01';
  ap_wrk.stts = ap_wrk.stts & 0xbf;
  return;
}

int SeFGhostTransCtrl() {
	int ret;
	
  uchar uVar1;
  
  sys_wrk.sreset_count = 0;
  if (st_ctrl.mode != '\x01') {
    if (1 < st_ctrl.mode) {
      if (st_ctrl.mode == '\x02') {
        uVar1 = TransWaitIopCmd();
        if (uVar1 == '\0') {
          return 0;
        }
        SetIopCmdSm(0x11,0,0,0);
        UseOkFGhost();
        st_ctrl.mode = '\x03';
        return 0;
      }
      if (st_ctrl.mode != '\x03') {
        sys_wrk.sreset_count = 0;
        return 0;
      }
      sys_wrk.sreset_count = 0;
      return 1;
    }
    if (st_ctrl.mode != '\0') {
      sys_wrk.sreset_count = 0;
      return 0;
    }
    GetSeTransSize();
    DmaTransReq();
    st_ctrl.mode = '\x01';
  }
  uVar1 = ChkDmaTransEndSe();
  if (uVar1 != '\0') {
    TransReqIopCmd();
    st_ctrl.mode = '\x02';
  }
  return 0;
}
