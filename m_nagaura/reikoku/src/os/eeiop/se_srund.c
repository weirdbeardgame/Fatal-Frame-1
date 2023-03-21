// STATUS: NOT STARTED


static void SSrundNoUse(u_char room_id0, u_char room_id1) {
	u_int *sesp;
	int i;
	int j;
	u_char room_id[2];
	u_char exist_flg;
	
  uchar room_id_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uchar room_id [2];
  
  iVar5 = 0;
  puVar7 = se_ctrl.srund_no;
  room_id[0] = room_id0;
  room_id[1] = room_id1;
  do {
    bVar1 = false;
    if (*puVar7 != 0xffffffff) {
      puVar4 = room_id;
      iVar2 = 0;
      do {
        do {
          iVar6 = iVar2;
          if (1 < iVar6) goto LAB_001151e8;
          room_id_00 = *puVar4;
          puVar4 = room_id + iVar6 + 1;
          iVar2 = iVar6 + 1;
        } while (room_id_00 == 0xff);
        uVar3 = GetSdrSrundSe(room_id_00);
        puVar4 = room_id + iVar6 + 1;
      } while (*puVar7 != uVar3);
      bVar1 = true;
LAB_001151e8:
      if (!bVar1) {
        *puVar7 = 0xffffffff;
      }
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
    if (1 < iVar5) {
      return;
    }
  } while( true );
}

static void SSrundSetLoadTbl(u_int *ld_tbl, u_char room_id) {
	u_int load_file_no;
	int j;
	u_char vflg;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  *ld_tbl = 0xffffffff;
  uVar2 = GetSdrSrundSe(room_id);
  bVar1 = false;
  if (uVar2 != 0xffffffff) {
    if (se_ctrl.srund_no[0] == uVar2) {
LAB_001152a8:
      bVar1 = true;
    }
    else {
      for (iVar3 = 1; iVar3 < 2; iVar3 = iVar3 + 1) {
        if (se_ctrl.srund_no[iVar3] == uVar2) goto LAB_001152a8;
      }
    }
    if (!bVar1) {
      *ld_tbl = uVar2;
    }
  }
  return;
}

int SSrundLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to) {
	u_int load_file_no;
	u_char empty_tbl[2];
	int i;
	int j;
	
  uchar *puVar1;
  int iVar2;
  uint *puVar3;
  uchar *puVar4;
  uchar empty_tbl [2];
  uint load_file_no;
  
  puVar1 = empty_tbl;
  puVar4 = empty_tbl;
  SSrundNoUse(room_from,room_to);
  SSrundSetLoadTbl(&load_file_no,room_to);
  puVar3 = se_ctrl.srund_no;
  iVar2 = 1;
  do {
    if (*puVar3 == 0xffffffff) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 1;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar2);
  if (load_file_no != 0xffffffff) {
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      if (*puVar4 == '\0') {
        iVar2 = SeFileLoadAndSet(load_file_no,iVar2 + 0xe);
        *puVar4 = '\x01';
        return iVar2;
      }
      puVar4 = (uchar *)((char *)puVar4 + 1);
    }
  }
  return load_id;
}

int SSrundLoadReqAndSet(int load_id, u_short door_id) {
	u_char *addr_uc;
	int i;
	u_char room_from;
	u_char room_to;
	u_char dr_num;
	
  short sVar1;
  byte room_id;
  byte *pbVar2;
  short *psVar3;
  int iVar4;
  byte room_to;
  
  room_id = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  pbVar2 = GetDoorRoomConectDataP(room_id);
  room_to = 0xff;
  iVar4 = 0;
  psVar3 = (short *)(pbVar2 + 2);
  if (*pbVar2 != 0) {
    sVar1 = *psVar3;
    while (sVar1 != door_id) {
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 2;
      if ((int)(uint)*pbVar2 <= iVar4) goto LAB_0011541c;
      sVar1 = *psVar3;
    }
    room_to = *(byte *)(psVar3 + 1);
  }
LAB_0011541c:
  if ((room_to != 0xff) && (room_id != room_to)) {
    load_id = SSrundLoadReqAndSetSub(load_id,room_id,room_to);
  }
  return load_id;
}

u_char SSrundGetSeNo(int file_no) {
	int i;
	
  int iVar1;
  uint *puVar2;
  
  iVar1 = 0;
  puVar2 = se_ctrl.srund_no;
  do {
    if (*puVar2 == file_no) {
      return (uchar)iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  return 0xff;
}
