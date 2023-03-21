// STATUS: NOT STARTED


int CheckRotDoorOpenStatus(int dwrk_no, u_char type) {
	DOOR_TYPE_DAT *dtdp;
	DOOR_STTS_KEEP *dkeepp;
	
  DOOR_TYPE_DAT *pDVar1;
  uint uVar2;
  
  pDVar1 = GetDoorTypeDatP((int)(char)type & 0xff);
  if (door_keep[(ushort)door_wrk[dwrk_no].door_id].room_id == 0xff) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (door_keep[(ushort)door_wrk[dwrk_no].door_id].room_id == plyr_wrk.dop._13_1_) {
      if ((pDVar1->attribute & 2U) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)((door_keep[(ushort)door_wrk[dwrk_no].door_id].attr & 0x2000U) == 0);
      }
    }
  }
  return uVar2;
}

void ChangeRotDoorFace(u_short door_id) {
	DOOR_STTS_KEEP *dkeepp;
	
  uchar uVar1;
  short door_id_00;
  
  uVar1 = GetDataRoom('\0',door_keep[(int)door_id & 0xffffU].room_id);
  door_id_00 = (short)((int)door_id & 0xffffU);
  uVar1 = GetNextRIdFromRNoDId(uVar1,door_id_00);
  if ((long)(char)uVar1 != 0xff) {
    ChangeRotDoorFace2Room(door_id_00,uVar1);
    return;
  }
  return;
}

void ChangeRotDoorFaceRoomId(u_short door_id, u_char room_id) {
	DOOR_STTS_KEEP *dkeepp;
	DOOR_WRK *dwp;
	int i;
	
  byte bVar1;
  short sVar2;
  float fVar3;
  uchar uVar4;
  DOOR_WRK *pDVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = (int)door_id & 0xffff;
  uVar6 = (long)(char)room_id & 0xff;
  if ((uVar6 != 0xff) && (uVar8 < 300)) {
    if (door_keep[uVar8].room_id != uVar6) {
      uVar4 = GetDataRoom('\0',door_keep[uVar8].room_id);
      uVar4 = GetNextRIdFromRNoDId(uVar4,(short)uVar8);
      if ((long)(char)uVar4 == uVar6) {
        door_keep[uVar8].room_id = uVar4;
        fVar3 = DAT_00355e30;
        pDVar5 = door_wrk;
        iVar7 = 0x13;
        do {
          if (((ushort)pDVar5->door_id == uVar8) && (pDVar5->fwrk_no < 0x3c)) {
            pDVar5->rot = pDVar5->rot + fVar3;
            RotLimitChk(&pDVar5->rot);
            bVar1 = pDVar5->fwrk_no;
            furn_wrk[bVar1].rot = furn_wrk[bVar1].rot + fVar3;
            RotLimitChk(&furn_wrk[bVar1].rot);
            bVar1 = pDVar5->fwrk_no;
            sVar2 = furn_wrk[bVar1].furn_no;
            furn_wrk[bVar1].rotate[1] = furn_wrk[bVar1].rot;
            if ((sVar2 != -1) && (sVar2 != 0)) {
              ChoudoPreRenderDual(furn_wrk + bVar1);
            }
          }
          iVar7 = iVar7 + -1;
          pDVar5 = pDVar5 + 1;
        } while (-1 < iVar7);
      }
    }
  }
  return;
}

void ChangeRotDoorFace2Room(u_short door_id, u_char room_id) {
	DOOR_WRK *dwp;
	DOOR_STTS_KEEP *dkeepp;
	
  ushort uVar1;
  
  uVar1 = SearchDoorWrk((int)door_id & 0xffffU);
  if (uVar1 != 0xffff) {
    door_wrk[(short)uVar1].rot = door_wrk[(short)uVar1].rot + DAT_00355e34;
    RotLimitChk(&door_wrk[(short)uVar1].rot);
    door_keep[(int)door_id & 0xffffU].room_id = room_id;
  }
  return;
}

int JudgePlyrRotForRotDoor(int dwrk_no) {
	DOOR_WRK *dwp;
	sceVu0FVECTOR dedge_left;
	sceVu0FVECTOR dedge_right;
	float rd_left;
	float rd_right;
	float p_rot;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float dedge_left [4];
  float dedge_right [4];
  float p_rot;
  
  fVar10 = 0.5;
  fVar3 = SgCosf(door_wrk[dwrk_no].rot);
  fVar2 = door_wrk[dwrk_no].pos[0];
  fVar4 = fVar3 * 450.0 * fVar10;
  fVar5 = SgSinf(door_wrk[dwrk_no].rot);
  fVar3 = door_wrk[dwrk_no].pos[2];
  fVar6 = fVar5 * 450.0 * fVar10;
  fVar7 = SgCosf(door_wrk[dwrk_no].rot);
  fVar5 = door_wrk[dwrk_no].pos[0];
  fVar8 = fVar7 * 450.0 * fVar10;
  fVar9 = SgSinf(door_wrk[dwrk_no].rot);
  fVar7 = door_wrk[dwrk_no].pos[2];
  fVar2 = SgAtan2f((fVar2 - fVar4) - plyr_wrk.move_box.spd.z,
                   (fVar3 + fVar6) - plyr_wrk.move_box.rot.x);
  fVar10 = SgAtan2f((fVar5 + fVar8) - plyr_wrk.move_box.spd.z,
                    (fVar7 - fVar9 * 450.0 * fVar10) - plyr_wrk.move_box.rot.x);
  p_rot = plyr_wrk.move_box.trot.w;
  RotLimitChk(&p_rot);
  if (fVar2 < fVar10) {
    iVar1 = 0;
    if ((p_rot <= fVar10) && (iVar1 = 1, p_rot < fVar2)) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
    if ((p_rot < fVar2) && (fVar10 < p_rot)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

u_char ChkRotDoorRot(int dwrk_no) {
	DOOR_WRK *dwp;
	sceVu0FVECTOR pvec;
	float drot;
	float prot;
	float dl_limit;
	float dr_limit;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float pvec [4];
  float dl_limit;
  float dr_limit;
  float prot;
  
  fVar3 = door_wrk[dwrk_no].rot;
  dl_limit = fVar3 - DAT_00355e38;
  fVar2 = DAT_00355e38;
  RotLimitChk(&dl_limit);
  dr_limit = fVar3 + fVar2;
  RotLimitChk(&dr_limit);
  prot = SgAtan2f(plyr_wrk.move_box.spd.z - door_wrk[dwrk_no].pos[0],
                  plyr_wrk.move_box.rot.x - door_wrk[dwrk_no].pos[2]);
  RotLimitChk(&prot);
  if (dl_limit < dr_limit) {
    if (prot <= dl_limit) {
      return '\x01';
    }
    bVar1 = prot <= dl_limit;
  }
  else {
    if (dl_limit < prot) {
      return '\0';
    }
    bVar1 = prot < dr_limit;
  }
  return !bVar1;
}
