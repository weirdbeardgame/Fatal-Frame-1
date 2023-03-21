// STATUS: NOT STARTED


static void SFootNoUse(u_char room_id0, u_char room_id1) {
	u_int *fp;
	u_int *sefp;
	int i;
	int k;
	u_char room_id[2];
	u_char exist_flg;
	
  uchar room_id_00;
  bool bVar1;
  uint *puVar2;
  uchar *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uchar room_id [2];
  undefined auStack_ae [14];
  
  puVar5 = se_ctrl.foot_no;
  iVar6 = 0;
  room_id[1] = room_id1;
  room_id[0] = room_id0;
  do {
    iVar6 = iVar6 + 1;
    if (*puVar5 != 0xffffffff) {
      bVar1 = false;
      puVar3 = room_id;
      room_id_00 = room_id[0];
      while( true ) {
        if (room_id_00 != 0xff) {
          iVar4 = 0;
          puVar2 = GetSdrFootSeTblP(room_id_00);
          do {
            iVar4 = iVar4 + 1;
            if (*puVar5 == *puVar2) {
              bVar1 = true;
              goto LAB_00114a18;
            }
            puVar2 = puVar2 + 1;
          } while (iVar4 < 5);
        }
        puVar3 = puVar3 + 1;
        if ((int)auStack_ae <= (int)puVar3) break;
        room_id_00 = *puVar3;
      }
LAB_00114a18:
      if (!bVar1) {
        *puVar5 = 0xffffffff;
      }
    }
    puVar5 = puVar5 + 1;
    if (7 < iVar6) {
      return;
    }
  } while( true );
}

static void SFootSetLoadTbl(u_int *ld_tbl, u_char room_id) {
	u_int *ifp;
	int i;
	int j;
	u_char vflg;
	
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  puVar6 = ld_tbl + 1;
  iVar5 = 4;
  puVar3 = ld_tbl;
  do {
    *puVar3 = 0xffffffff;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  iVar5 = 0;
  puVar3 = GetSdrFootSeTblP(room_id);
  do {
    uVar1 = *puVar3;
    bVar2 = false;
    if (uVar1 != 0xffffffff) {
      if (se_ctrl.foot_no[0] == uVar1) {
LAB_00114b38:
        bVar2 = true;
      }
      else {
        for (iVar4 = 1; iVar4 < 8; iVar4 = iVar4 + 1) {
          if (se_ctrl.foot_no[iVar4] == uVar1) goto LAB_00114b38;
        }
      }
      if (!bVar2) {
        *ld_tbl = uVar1;
        ld_tbl = puVar6;
        puVar6 = puVar6 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    if (4 < iVar5) {
      return;
    }
  } while( true );
}

int SFootLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to) {
	u_int load_file_tbl[5];
	u_char empty_tbl[8];
	int i;
	int j;
	
  uchar *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint load_file_tbl [5];
  uchar empty_tbl [8];
  
  SFootNoUse(room_from,room_to);
  SFootSetLoadTbl(load_file_tbl,room_to);
  puVar4 = se_ctrl.foot_no;
  iVar2 = 7;
  puVar1 = empty_tbl;
  do {
    if (*puVar4 == 0xffffffff) {
      *puVar1 = '\0';
    }
    else {
      *puVar1 = '\x01';
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar2);
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar3 = 0;
    if (*(int *)((int)load_file_tbl + iVar5) != -1) {
      for (; puVar1 = empty_tbl + iVar3, iVar3 < 8; iVar3 = iVar3 + 1) {
        if (*puVar1 == '\0') {
          load_id = SeFileLoadAndSet(*(uint *)((int)load_file_tbl + iVar5),iVar3 + 6);
          *puVar1 = '\x01';
          break;
        }
      }
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar2 * 4;
    if (4 < iVar2) {
      return load_id;
    }
  } while( true );
}

int SFootLoadReqAndSet(int load_id, u_short door_id) {
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
      if ((int)(uint)*pbVar2 <= iVar4) goto LAB_00114d24;
      sVar1 = *psVar3;
    }
    room_to = *(byte *)(psVar3 + 1);
  }
LAB_00114d24:
  if ((room_to != 0xff) && (room_id != room_to)) {
    load_id = SFootLoadReqAndSetSub(load_id,room_id,room_to);
  }
  return load_id;
}

u_char SFootGetSeNo(int call_no) {
	int i;
	int file_no;
	
  uint *puVar1;
  int iVar2;
  
  if ((uint)call_no < 0x1c) {
    puVar1 = se_ctrl.foot_no;
    iVar2 = 0;
    do {
      if (*puVar1 == *(uint *)(&foot_se_index + call_no * 4)) {
        return (char)iVar2 + ',';
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 8);
  }
  return 0xff;
}

u_char SFootGetSeNoFromFileNo(int file_no) {
	int i;
	
  int iVar1;
  uint *puVar2;
  
  iVar1 = 0;
  puVar2 = se_ctrl.foot_no;
  while ((*puVar2 != file_no || (file_no == -1))) {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    if (7 < iVar1) {
      return 0xff;
    }
  }
  return (char)iVar1 + ',';
}
