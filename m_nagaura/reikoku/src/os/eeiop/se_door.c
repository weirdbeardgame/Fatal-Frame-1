// STATUS: NOT STARTED


static void SDoorNoUse(u_char room_id0, u_char room_id1) {
	u_int *dp;
	u_int *sedp;
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
  
  puVar5 = se_ctrl.door_no;
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
          puVar2 = GetSdrDoorSeTblP(room_id_00);
          do {
            iVar4 = iVar4 + 1;
            if (*puVar5 == *puVar2) {
              bVar1 = true;
              goto LAB_001144e0;
            }
            puVar2 = puVar2 + 1;
          } while (iVar4 < 3);
        }
        puVar3 = puVar3 + 1;
        if ((int)auStack_ae <= (int)puVar3) break;
        room_id_00 = *puVar3;
      }
LAB_001144e0:
      if (!bVar1) {
        *puVar5 = 0xffffffff;
      }
    }
    puVar5 = puVar5 + 1;
    if (2 < iVar6) {
      return;
    }
  } while( true );
}

static void SDoorSetLoadTbl(u_int *ld_tbl, u_char room_id) {
	u_int *idp;
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
  iVar5 = 2;
  puVar3 = ld_tbl;
  do {
    *puVar3 = 0xffffffff;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  iVar5 = 0;
  puVar3 = GetSdrDoorSeTblP(room_id);
  do {
    uVar1 = *puVar3;
    bVar2 = false;
    if (uVar1 != 0xffffffff) {
      if (se_ctrl.door_no[0] == uVar1) {
LAB_00114600:
        bVar2 = true;
      }
      else {
        for (iVar4 = 1; iVar4 < 3; iVar4 = iVar4 + 1) {
          if (se_ctrl.door_no[iVar4] == uVar1) goto LAB_00114600;
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
    if (2 < iVar5) {
      return;
    }
  } while( true );
}

int SDoorLoadReqAndSetSub(int load_id, u_char room_from, u_char room_to) {
	u_int load_file_tbl[3];
	u_char empty_tbl[3];
	int i;
	int j;
	
  uchar *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint load_file_tbl [3];
  uchar empty_tbl [3];
  
  SDoorNoUse(room_from,room_to);
  SDoorSetLoadTbl(load_file_tbl,room_to);
  puVar4 = se_ctrl.door_no;
  iVar2 = 2;
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
      for (; puVar1 = empty_tbl + iVar3, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (*puVar1 == '\0') {
          load_id = SeFileLoadAndSet(*(uint *)((int)load_file_tbl + iVar5),iVar3 + 3);
          *puVar1 = '\x01';
          break;
        }
      }
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar2 * 4;
    if (2 < iVar2) {
      return load_id;
    }
  } while( true );
}

int SDoorLoadReqAndSet(int load_id, u_short door_id) {
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
      if ((int)(uint)*pbVar2 <= iVar4) goto LAB_001147ec;
      sVar1 = *psVar3;
    }
    room_to = *(byte *)(psVar3 + 1);
  }
LAB_001147ec:
  if ((room_to != 0xff) && (room_id != room_to)) {
    load_id = SDoorLoadReqAndSetSub(load_id,room_id,room_to);
  }
  return load_id;
}

static u_char SDoorGetSeNo(int file_no, u_char shut) {
	int i;
	
  int iVar1;
  uchar uVar2;
  uint *puVar3;
  
  uVar2 = (shut != '\0') + '&';
  puVar3 = se_ctrl.door_no;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*puVar3 == file_no) {
      return uVar2;
    }
    uVar2 = uVar2 + '\x02';
    puVar3 = puVar3 + 1;
  } while (iVar1 < 3);
  return 0xff;
}

void SeDoorOpen(int dwrk_no) {
  uchar uVar1;
  DOOR_TYPE_DAT *pDVar2;
  
  pDVar2 = GetDoorTypeDatP((uint)(ushort)door_wrk[dwrk_no].type);
  uVar1 = SDoorGetSeNo(pDVar2->se_file,'\0');
  if ((long)(char)uVar1 != 0xff) {
    SeStartPos((int)(char)uVar1,door_wrk[dwrk_no].pos,0,0x1000,0x1000,0xff);
    return;
  }
  return;
}

void SeDoorClose(int dwrk_no) {
  uchar uVar1;
  DOOR_TYPE_DAT *pDVar2;
  
  pDVar2 = GetDoorTypeDatP((uint)(ushort)door_wrk[dwrk_no].type);
  uVar1 = SDoorGetSeNo(pDVar2->se_file,'\x01');
  if ((long)(char)uVar1 != 0xff) {
    SeStartPos((int)(char)uVar1,door_wrk[dwrk_no].pos,0,0x1000,0x1000,0xff);
    return;
  }
  return;
}
