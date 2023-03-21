// STATUS: NOT STARTED

u_short sce_pad[16] = {
	/* [0] = */ 4096,
	/* [1] = */ 16384,
	/* [2] = */ 32768,
	/* [3] = */ 8192,
	/* [4] = */ 16,
	/* [5] = */ 64,
	/* [6] = */ 128,
	/* [7] = */ 32,
	/* [8] = */ 4,
	/* [9] = */ 1,
	/* [10] = */ 8,
	/* [11] = */ 2,
	/* [12] = */ 2048,
	/* [13] = */ 256,
	/* [14] = */ 512,
	/* [15] = */ 1024
};

int InitPad() {
	PAD_STRUCT *psp;
	int i;
	int j;
	int loop;
	int port_slot[2][2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  PAD_STRUCT *pPVar4;
  undefined2 *puVar5;
  uchar *puVar6;
  float *pfVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int port_slot [2] [2];
  
  puVar1 = (undefined *)((int)port_slot + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003499b0 >> (7 - uVar2) * 8;
  port_slot[0] = DAT_003499b0;
  puVar1 = (undefined *)((int)port_slot[1] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003499b8 >> (7 - uVar2) * 8;
  port_slot[1] = DAT_003499b8;
  scePadInit(0);
  iVar10 = 0;
  pPVar4 = pad;
  do {
    iVar11 = iVar10 + 1;
    pPVar4->now = 0;
    iVar8 = port_slot[iVar10][0];
    pPVar4->old = 0;
    pPVar4->port = iVar8;
    pPVar4->one = 0;
    iVar8 = 5;
    iVar10 = port_slot[iVar10][1];
    pPVar4->rpt = 0;
    puVar6 = pPVar4->pad_direct + 5;
    pPVar4->slot = iVar10;
    pPVar4->rpt_time = 0;
    pPVar4->flags = '\x02';
    pPVar4->step = '\0';
    do {
      *puVar6 = '\0';
      iVar8 = iVar8 + -1;
      puVar6 = puVar6 + -1;
    } while (-1 < iVar8);
    scePadPortOpen(pPVar4->port,pPVar4->slot,pPVar4->pad_dma_buf);
    iVar10 = iVar11;
    pPVar4 = pPVar4 + 1;
  } while (iVar11 < 2);
  iVar10 = 0;
  iVar8 = 0;
  while( true ) {
    iVar12 = iVar8 + 1;
    iVar11 = 0xf;
    puVar5 = (undefined2 *)((int)pad[0].cnt_bak + iVar10);
    do {
      puVar5[-0x10] = 0;
      iVar11 = iVar11 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar11);
    iVar10 = 1;
    psVar9 = pad[iVar8].an_cnt;
    pfVar7 = pad[iVar8].an_rot;
    puVar6 = pad[iVar8].an_dir;
    do {
      psVar9[2] = 0;
      iVar10 = iVar10 + -1;
      *psVar9 = 0;
      puVar6[2] = 0xff;
      psVar9 = psVar9 + 1;
      *puVar6 = 0xff;
      pfVar7[2] = 0.0;
      puVar6 = puVar6 + 1;
      *pfVar7 = 0.0;
      pfVar7 = pfVar7 + 1;
    } while (-1 < iVar10);
    iVar10 = 3;
    puVar6 = pad[iVar8].analog + 3;
    do {
      *puVar6 = 0x80;
      iVar10 = iVar10 + -1;
      puVar6 = puVar6 + -1;
    } while (-1 < iVar10);
    if (1 < iVar12) break;
    iVar10 = iVar12 * 0x1c0;
    iVar8 = iVar12;
  }
  return 0;
}

int PadSyncCallback() {
	int id;
	int i;
	int state;
	int wrk;
	int exid;
	int p_id;
	int intr;
	PAD_STRUCT *psp;
	char act_align[6];
	
  char cVar1;
  uchar *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  PAD_STRUCT *psp;
  int p_id;
  char act_align [6];
  
  p_id = 0;
  lVar3 = EIntr();
  psp = pad;
  do {
    lVar4 = scePadGetState(psp->port,psp->slot);
    if (lVar4 == 0) {
      psp->step = '\0';
      psp->flags = psp->flags & 0xfe;
      PadClearCount(p_id);
    }
    else {
      psp->flags = psp->flags | 1;
    }
    if (lVar4 == 1) {
      psp->step = '\0';
    }
    cVar1 = psp->step;
    if (cVar1 == '\x03') {
      lVar4 = scePadInfoMode(psp->port,psp->slot,1,0);
      if (lVar4 != 0) {
        lVar5 = scePadInfoMode(psp->port,psp->slot,2,0);
        if (0 < lVar5) {
          lVar4 = lVar5;
        }
        if (lVar4 != 7) goto LAB_0010c3fc;
        psp->step = '\n';
      }
    }
    else if (cVar1 < '\x04') {
      if (cVar1 == '\x01') {
        lVar4 = scePadGetState(psp->port,psp->slot);
        if (lVar4 != 5) {
          lVar4 = scePadSetMainMode(psp->port,psp->slot,1,3);
          if (lVar4 != 1) goto LAB_0010c34c;
          psp->step = '\x02';
        }
      }
      else if (cVar1 < '\x02') {
        if (cVar1 == '\0') {
          if (lVar4 == 6) {
            iVar7 = psp->port;
          }
          else {
            if (lVar4 != 2) goto LAB_0010c490;
            iVar7 = psp->port;
          }
          lVar4 = scePadInfoMode(iVar7,psp->slot,1,0);
          if (lVar4 != 0) {
            lVar5 = scePadInfoMode(psp->port,psp->slot,2,0);
            if (0 < lVar5) {
              lVar4 = lVar5;
            }
            psp->id = '\0';
            if (((lVar4 != 4) && (lVar4 != 7)) ||
               (lVar4 = scePadInfoAct(psp->port,psp->slot,0xffffffffffffffff,0), lVar4 == 0))
            goto LAB_0010c3fc;
            act_align[0] = '\0';
            act_align[1] = '\x01';
            iVar7 = 2;
            do {
              pcVar6 = act_align + iVar7;
              iVar7 = iVar7 + 1;
              *pcVar6 = -1;
            } while (iVar7 < 6);
            puVar2 = psp->pad_direct + 5;
            iVar7 = 5;
            do {
              *puVar2 = '\0';
              iVar7 = iVar7 + -1;
              puVar2 = puVar2 + -1;
            } while (-1 < iVar7);
            lVar4 = scePadSetActAlign(psp->port,psp->slot,act_align);
            if (lVar4 == 1) {
              psp->step = '\x01';
            }
          }
        }
      }
      else {
        lVar4 = scePadGetReqState(psp->port,psp->slot);
        if (lVar4 == 1) {
LAB_0010c34c:
          psp->step = '\0';
        }
        else if ((lVar4 < 2) && (lVar4 == 0)) {
          psp->step = '\x03';
        }
      }
    }
    else if (cVar1 == '\v') {
      lVar4 = scePadGetReqState(psp->port,psp->slot);
      if (lVar4 == 1) {
        psp->step = '\n';
      }
      if (lVar4 == 0) {
LAB_0010c3fc:
        psp->step = 'c';
      }
    }
    else if (cVar1 < '\f') {
      if (cVar1 == '\n') {
        lVar4 = scePadInfoPressMode(psp->port,psp->slot);
        if (lVar4 != 1) goto LAB_0010c3fc;
        lVar4 = scePadEnterPressMode(psp->port,psp->slot);
        if (lVar4 == 1) {
          psp->step = '\v';
        }
      }
    }
    else if ((cVar1 == 'c') && ((lVar4 == 6 || (lVar4 == 2)))) {
      PadReadFunc(psp,p_id);
      if ((psp->pad_direct[0] & 0x80) != 0) {
        psp->pad_direct[0] = psp->pad_direct[0] & 1;
        scePadSetActDirect(psp->port,psp->slot,psp->pad_direct);
        if ((*(ulong *)&psp->rpt_time & 0xffff0000) == 0) {
          psp->pad_direct[0] = '\0';
          psp->pad_direct[1] = '\0';
        }
        else {
          VibrateRequest((short)p_id,0,0);
        }
      }
    }
LAB_0010c490:
    psp = psp + 1;
    p_id = p_id + 1;
    if (1 < p_id) {
      if (lVar3 == 0) {
        DIntr();
      }
      return 0;
    }
  } while( true );
}

int PadReadFunc(PAD_STRUCT *psp, int p_id) {
	char r_data[32];
	int i;
	int j;
	
  char cVar1;
  uchar uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  short *psVar7;
  uchar *puVar8;
  int iVar9;
  uchar *puVar10;
  short *psVar11;
  char r_data [32];
  
  psp->old = psp->now;
  lVar5 = scePadRead(psp->port,psp->slot,r_data);
  if (lVar5 == 0) {
    psp->now = 0;
  }
  else if (r_data[0] == '\0') {
    if (((long)psp->id == 0) || ((long)psp->id == (long)(int)r_data[1])) {
      psp->id = r_data[1];
      uVar6 = ~((int)((uint)(byte)r_data[2] << 0x18) >> 0x10 | (uint)(byte)r_data[3]);
      uVar3 = (ushort)uVar6;
      psp->now = uVar3;
      uVar4 = uVar3 & (uVar3 ^ psp->old);
      psp->rpt = uVar4;
      psp->one = uVar4;
      if ((uVar6 & 0xffff) == (uint)(ushort)psp->old) {
        uVar4 = psp->rpt_time + 1;
        psp->rpt_time = uVar4;
        if (9 < uVar4) {
          psp->rpt = uVar3;
          psp->rpt_time = 5;
        }
      }
      else {
        psp->rpt_time = 0;
      }
      psVar11 = sce_pad;
      iVar9 = 0xf;
      psVar7 = pad[p_id].cnt;
      do {
        uVar3 = *psVar11;
        psVar7[0x10] = *psVar7;
        if ((uVar3 & psp->now) == 0) {
          *psVar7 = 0;
        }
        else {
          *psVar7 = *psVar7 + 1;
        }
        psVar11 = (short *)((ushort *)psVar11 + 1);
        iVar9 = iVar9 + -1;
        psVar7 = psVar7 + 1;
      } while (-1 < iVar9);
      cVar1 = psp->id;
      if (((long)psp->id & 0xf0U) == 0x70) {
        iVar9 = 0;
        puVar10 = (uchar *)(r_data + 4);
        do {
          puVar8 = psp->analog + iVar9;
          uVar2 = *puVar10;
          iVar9 = iVar9 + 1;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar2;
        } while (iVar9 < 4);
        cVar1 = psp->id;
      }
      if (cVar1 == 'y') {
        iVar9 = 0;
        puVar10 = (uchar *)(r_data + 8);
        do {
          puVar8 = psp->push + iVar9;
          uVar2 = *puVar10;
          iVar9 = iVar9 + 1;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar2;
        } while (iVar9 < 0xc);
        SetAnlgInfo(psp,p_id);
      }
    }
    else {
      psp->step = '\0';
    }
  }
  else {
    psp->now = 0;
  }
  return 0;
}

void SetAnlgInfo(PAD_STRUCT *psp, int p_id) {
	float rot;
	short int pad_x;
	short int pad_y;
	u_char i;
	u_char dir_old;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  uchar *puVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  uVar11 = 0;
  iVar10 = 0;
  do {
    uVar1 = psp->an_dir[uVar11];
    *(undefined2 *)((int)psp->an_cnt_bak + iVar10) = *(undefined2 *)((int)psp->an_cnt + iVar10);
    psp->an_dir_bak[uVar11] = psp->an_dir[uVar11];
    psp->an_rot_bak[uVar11] = psp->an_rot[uVar11];
    if (uVar11 == 0) {
      bVar2 = pad[p_id].analog[2];
      bVar3 = pad[p_id].analog[3];
    }
    else {
      bVar2 = pad[p_id].analog[0];
      bVar3 = pad[p_id].analog[1];
    }
    iVar8 = bVar2 - 0x80;
    iVar4 = iVar8;
    if (iVar8 < 0) {
      iVar4 = -iVar8;
    }
    iVar5 = 0x80 - (uint)bVar3;
    if (iVar4 < 0x3c) {
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = -iVar5;
      }
      if (0x3b < iVar4) goto LAB_0010c7c0;
      psp->an_dir[uVar11] = 0xff;
      *(undefined2 *)((int)psp->an_cnt + iVar10) = 0;
    }
    else {
LAB_0010c7c0:
      fVar12 = SgAtan2f((float)iVar8,(float)iVar5);
      puVar9 = psp->an_dir + uVar11;
      iVar8 = (int)((fVar12 + DAT_00355124 + DAT_00355120) / DAT_00355128);
      iVar4 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      iVar8 = iVar8 + (iVar4 >> 3) * -8;
      uVar6 = iVar8 + 4;
      *puVar9 = (uchar)uVar6;
      if (7 < (uVar6 & 0xff)) {
        *puVar9 = (char)iVar8 + 0xfc;
      }
      psp->an_rot[uVar11] = fVar12;
      if (*puVar9 == uVar1) {
        psVar7 = (short *)((int)psp->an_cnt + iVar10);
        *psVar7 = *psVar7 + 1;
      }
      else {
        *(undefined2 *)((int)psp->an_cnt + iVar10) = 0;
      }
    }
    uVar11 = uVar11 + 1 & 0xff;
    iVar10 = uVar11 << 1;
    if (1 < uVar11) {
      return;
    }
  } while( true );
}

u_short VibrateRequest(u_short p_id, u_short act1, u_short act2) {
	PAD_STRUCT *psp;
	
  if (opt_wrk.pad_move == '\0') {
    pad[(int)p_id & 0xffffU].pad_direct[1] = (uchar)act2;
    pad[(int)p_id & 0xffffU].pad_direct[0] = (byte)act1 | 0x80;
  }
  return 0;
}

u_short VibrateRequest1(u_short p_id, u_short act_1) {
	PAD_STRUCT *psp;
	
  if (opt_wrk.pad_move == '\0') {
    pad[(int)p_id & 0xffff].pad_direct[0] = (byte)act_1 | 0x80;
  }
  return 0;
}

u_short VibrateRequest2(u_short p_id, u_short act_2) {
	PAD_STRUCT *psp;
	
  if (opt_wrk.pad_move == '\0') {
    pad[(int)p_id & 0xffffU].pad_direct[1] = (uchar)act_2;
    pad[(int)p_id & 0xffffU].pad_direct[0] = 0x80;
  }
  return 0;
}

void PadClearCount(int p_id) {
	u_int i;
	
  short *psVar1;
  uchar *puVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = 0;
  psVar1 = pad[p_id].cnt;
  do {
    psVar1[0x10] = 0;
    uVar4 = uVar4 + 1;
    *psVar1 = 0;
    psVar1 = psVar1 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  psVar1 = pad[p_id].an_cnt;
  pfVar3 = pad[p_id].an_rot;
  puVar2 = pad[p_id].an_dir;
  do {
    psVar1[2] = 0;
    uVar4 = uVar4 + 1;
    *psVar1 = 0;
    puVar2[2] = 0xff;
    psVar1 = psVar1 + 1;
    *puVar2 = 0xff;
    pfVar3[2] = 0.0;
    puVar2 = puVar2 + 1;
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  } while (uVar4 < 2);
  uVar4 = 0;
  puVar2 = pad[p_id].analog;
  do {
    *puVar2 = 0x80;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 4);
  return;
}
