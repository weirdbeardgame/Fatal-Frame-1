// STATUS: NOT STARTED

int furn_disp_flg = 0;

void FurnCtrlMain() {
  FurnHintDeformCtrl();
  FurnAplyAmbient();
  return;
}

void InitFurnDispFlg() {
  furn_disp_flg = 0;
  return;
}

FURN_WRK* FurnGetFurnWrk(u_char fw_no) {
  if (((int)(char)fw_no & 0xffU) < 0x3c) {
    return furn_wrk + ((int)(char)fw_no & 0xffU);
  }
  return (FURN_WRK *)0x0;
}

u_char ChkFurnGetAlready(u_short furn_id) {
	FURN_WRK *fwp;
	int i;
	
  FURN_WRK *pFVar1;
  int iVar2;
  
  pFVar1 = furn_wrk;
  iVar2 = 0;
  while ((furn_id != pFVar1->id || ((pFVar1->use != '\0' && (pFVar1->use != '\x02'))))) {
    iVar2 = iVar2 + 1;
    pFVar1 = pFVar1 + 1;
    if (0x3b < iVar2) {
      return '\0';
    }
  }
  return '\x01';
}

void FurnSetWrkNoUse(FURN_WRK *fwp, int no) {
  if ((fwp != (FURN_WRK *)0x0) && (fwp->use != '\x05')) {
    FreeFActFwrkNo(no);
    FurnEfctFree(fwp);
    if ((fwp->use == '\0') || (fwp->use == '\x02')) {
      mimChodoReleaseWork((uint)(ushort)fwp->id,fwp->room_id);
      acsRopeReleaseWork((uint)(ushort)fwp->id);
      acsChodoReleaseWork((uint)(ushort)fwp->id);
    }
    fwp->id = -1;
    fwp->use = '\x05';
    fwp->furn_no = -1;
    fwp->fno_bk = -1;
    fwp->attr_id = -1;
  }
  return;
}

int FurnSetFurnWork(FURN_DATA_POP *fdpp, int fw_no, u_char msn_no, u_char use, u_char room_id) {
	FURN_WRK *fwp;
	F_ACT_WRK fbuf;
	int fact_type;
	float rot;
	
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  uchar uVar6;
  int iVar7;
  FURN_WRK *fwp;
  int iVar8;
  F_ACT_WRK fbuf;
  float rot;
  
  iVar7 = FurnIsUsable(fdpp->id,msn_no);
  iVar8 = 0;
  if (iVar7 != 0) {
    uVar6 = ChkFurnGetAlready(fdpp->id);
    iVar8 = 0;
    if (uVar6 == '\0') {
      fwp = FurnGetFurnWrk((uchar)fw_no);
      if (fwp == (FURN_WRK *)0x0) {
        iVar8 = 0;
      }
      else {
        fwp->id = fdpp->id;
        fwp->attr_id = fdpp->attr_id;
        iVar7 = FurnIsDisp(fdpp->id,msn_no);
        if (iVar7 == 0) {
          sVar2 = fdpp->model_no;
          fwp->furn_no = -1;
          fwp->fno_bk = sVar2;
        }
        else {
          sVar2 = fdpp->model_no;
          fwp->fno_bk = -1;
          fwp->furn_no = sVar2;
        }
        rot = fdpp->rot_x;
        RotLimitChk(&rot);
        fVar5 = fdpp->rot_y;
        fwp->rotate[0] = rot;
        rot = fVar5;
        RotLimitChk(&rot);
        rot = rot + DAT_00355e44;
        RotLimitChk(&rot);
        uVar3 = fdpp->pos_x;
        uVar4 = fdpp->pos_z;
        fwp->rotate[1] = rot;
        fwp->rotate[2] = 0.0;
        fwp->pos[0] = (float)(uint)uVar3;
        sVar2 = fwp->furn_no;
        uVar1 = fdpp->pos_y;
        fwp->pos[2] = (float)(uint)uVar4;
        fwp->pos[1] = (float)(int)(short)uVar1;
        if (sVar2 == 0x1b) {
          fwp->pos[0] = (float)(uint)uVar3 + 25.0;
        }
        fwp->use = use;
        fwp->room_id = room_id;
        fwp->fs_flg = '\x01';
        fwp->fewrk_no = 0xff;
        FurnEfctSet(fwp);
        mimChodoSetWork((uint)(ushort)fwp->id,fwp->room_id);
        acsRopeSetWork((uint)(ushort)fwp->id);
        acsChodoSetWork((uint)(ushort)fwp->id);
        if (*(short *)(&DAT_00337738 + (uint)(ushort)fwp->id * 0x12) != -1) {
          SearchRegisterFW2FAW
                    ((short)fw_no,*(short *)(&DAT_00337738 + (uint)(ushort)fwp->id * 0x12));
        }
        iVar8 = 1;
      }
    }
  }
  return iVar8;
}

int FurnIsPicDispOnly(u_short id, u_char msn_no) {
  int iVar1;
  uint uVar2;
  
  iVar1 = FurnIsDisp(id,msn_no);
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = FurnIsPicDisp(id,msn_no);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

void FurnAplyAmbient() {
	FURN_WRK *fwp;
	int i;
	
  float fVar1;
  float fVar2;
  float fVar3;
  FURN_WRK *pFVar4;
  int iVar5;
  
  fVar1 = room_ambient_light[0];
  pFVar4 = furn_wrk;
  iVar5 = 0;
  do {
    fVar3 = room_ambient_light[3];
    fVar2 = room_ambient_light[2];
    iVar5 = iVar5 + 1;
    if (pFVar4->furn_no == -1) {
      return;
    }
    (pFVar4->mylight).ambient[1] = room_ambient_light[1];
    (pFVar4->mylight).ambient[2] = fVar2;
    (pFVar4->mylight).ambient[3] = fVar3;
    (pFVar4->mylight).ambient[0] = fVar1;
    pFVar4 = pFVar4 + 1;
  } while (iVar5 < 0x3c);
  return;
}

int GetRoomFurnID(u_char room_id, u_short *furn_id, u_char msn_no) {
	FURN_DATA_POP *fdpp;
	int *addr_si0;
	int *addr_si1;
	int *addr_si2;
	u_char *addr_uc0;
	u_char *addr_uc1;
	int ret;
	int i;
	int j;
	int k;
	u_char room_num;
	
  short sVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  
  iVar9 = 0;
  if (room_id < 0x3c) {
    puVar11 = (uchar *)floor_exist[(int)(char)msn_no & 0xff];
    iVar10 = 0;
    do {
      if (*puVar11 != '\0') {
        iVar2 = GetFloorTopAddr((uchar)iVar10);
        iVar5 = 0;
        iVar8 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x7f8000);
        uVar6 = (uint)*(byte *)(iVar8 + 0x7f8000);
        puVar4 = (uchar *)(iVar8 + 0x7f8001);
        if (uVar6 != 0) {
          do {
            if (*puVar4 == room_id) {
              iVar8 = 0;
              iVar10 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x7f8004 + iVar5 * 4);
              pbVar7 = (byte *)(*(int *)(iVar10 + 0x7f8000) + 0x7f8000);
              uVar6 = (uint)*pbVar7;
              piVar3 = (int *)(iVar10 + 0x7f8004);
              if (uVar6 == 0) {
                return 0;
              }
              goto LAB_001c65e0;
            }
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar5 < (int)uVar6);
        }
      }
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar10 < 4);
  }
  return 0;
LAB_001c65e0:
  if (room_id == '\x03') {
    *furn_id = *(short *)(*(int *)(*piVar3 + 0x7f8000) + 0x7f8010);
LAB_001c6618:
    iVar9 = iVar9 + 1;
    furn_id = furn_id + 1;
    uVar6 = (uint)*pbVar7;
  }
  else {
    sVar1 = *(short *)(*(int *)(*piVar3 + 0x7f8000) + 0x7f8010);
    if (sVar1 != 0) {
      *furn_id = sVar1;
      goto LAB_001c6618;
    }
  }
  iVar8 = iVar8 + 1;
  piVar3 = piVar3 + 1;
  if ((int)uVar6 <= iVar8) {
    return iVar9;
  }
  goto LAB_001c65e0;
}

int FurnIsWrkUse(FURN_WRK *fw) {
  uint uVar1;
  
  uVar1 = 1;
  if (fw != (FURN_WRK *)0x0) {
    uVar1 = (uint)(fw->use != '\x05');
  }
  return uVar1;
}

int FurnIsSeUse(u_short id, u_char msn_no) {
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(&furn_attr_dat +
                ((int)(char)msn_no & 0xffU) * 4 +
                (uint)*(ushort *)(&furn_dat + ((int)id & 0xffffU) * 0x12) * 0x14) & 0x8000) == 0) {
    uVar1 = (uint)((*(uint *)(&furn_attr_dat +
                             ((int)(char)msn_no & 0xffU) * 4 +
                             (uint)*(ushort *)(&furn_dat + ((int)id & 0xffffU) * 0x12) * 0x14) &
                   0x800) != 0);
  }
  return uVar1;
}

int FurnIsUsable(u_short id, u_char msn_no) {
  uint uVar1;
  
  uVar1 = GetFurnAttr(id,msn_no);
  return (int)((uVar1 & 0x8000) == 0);
}

int FurnIsPicDisp(u_short id, u_char msn_no) {
  uint uVar1;
  
  uVar1 = GetFurnAttr(id,msn_no);
  return (int)((uVar1 & 0x8040) == 0x40);
}

int FurnIsDisp(u_short id, u_char msn_no) {
  uint uVar1;
  
  uVar1 = GetFurnAttr(id,msn_no);
  return (int)((uVar1 & 0x4000) == 0);
}

int FurnIsHit(u_short id, u_char msn_no) {
  uint uVar1;
  
  uVar1 = GetFurnAttr(id,msn_no);
  return (int)((uVar1 & 0xa000) == 0);
}

void FurnPicExecStart() {
  furn_disp_flg = 1;
  FurnPicNoDspOff();
  FurnPicDispOn();
  FurnSortFurnWrk('\x01');
  return;
}

void FurnPicExecEnd() {
  furn_disp_flg = 0;
  FurnPicNoDspOn();
  FurnPicDispOff();
  FurnSortFurnWrk('\x01');
  return;
}

void FurnPicNoDspOff() {
	FURN_WRK *fwp;
	int i;
	u_int attr;
	
  short sVar1;
  uint uVar2;
  FURN_WRK *pFVar3;
  int iVar4;
  
  iVar4 = 0;
  pFVar3 = furn_wrk;
  if (furn_wrk[0].furn_no != -1) {
    do {
      uVar2 = GetFurnAttr(pFVar3->id,ingame_wrk.msn_no);
      if (((uVar2 & 8) == 0) && ((uVar2 & 0x10) != 0)) {
        sVar1 = pFVar3->furn_no;
        pFVar3->furn_no = -1;
        pFVar3->fno_bk = sVar1;
      }
      iVar4 = iVar4 + 1;
      pFVar3 = pFVar3 + 1;
    } while ((iVar4 < 0x3c) && (pFVar3->furn_no != -1));
  }
  return;
}

void FurnPicNoDspOn() {
	FURN_WRK *fwp;
	int i;
	u_int attr;
	
  short sVar1;
  bool bVar2;
  uint uVar3;
  FURN_WRK *pFVar4;
  int iVar5;
  
  iVar5 = 0;
  pFVar4 = furn_wrk;
  if (furn_wrk[0].furn_no == -1) {
    bVar2 = true;
LAB_001c6914:
    if (bVar2) {
      do {
        if (((pFVar4->furn_no == -1) &&
            (uVar3 = GetFurnAttr(pFVar4->id,ingame_wrk.msn_no), (uVar3 & 8) == 0)) &&
           ((uVar3 & 0x10) != 0)) {
          sVar1 = pFVar4->fno_bk;
          pFVar4->fno_bk = -1;
          pFVar4->furn_no = sVar1;
          pFVar4->fs_flg = '\x01';
        }
        iVar5 = iVar5 + 1;
        pFVar4 = pFVar4 + 1;
      } while (iVar5 < 0x3c);
    }
  }
  else {
    iVar5 = 1;
    while( true ) {
      bVar2 = iVar5 < 0x3c;
      pFVar4 = pFVar4 + 1;
      if (!bVar2) break;
      if (pFVar4->furn_no == -1) goto LAB_001c6914;
      iVar5 = iVar5 + 1;
    }
  }
  return;
}

void FurnSortFurnWrk(u_char mode) {
	FURN_WRK *fwp0;
	FURN_WRK *fwp1;
	FURN_WRK fw_tmp;
	DOOR_WRK *dwp;
	int i;
	int j;
	int k;
	int flg;
	
  bool bVar1;
  FURN_WRK *pFVar2;
  FURN_WRK *pFVar3;
  FURN_WRK *pFVar4;
  DOOR_WRK *pDVar5;
  FURN_WRK *pFVar6;
  uint fw_id2;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint fw_id1;
  int iVar10;
  FURN_WRK *pFVar11;
  FURN_WRK fw_tmp;
  
  pFVar11 = furn_wrk;
  fw_id1 = 0;
  do {
    if (pFVar11->furn_no == -1) {
      bVar1 = false;
      pFVar6 = pFVar11;
      fw_id2 = fw_id1;
      if ((int)fw_id1 < 0x3c) {
LAB_001c69e8:
        if (pFVar6->furn_no == -1) break;
        pFVar3 = &fw_tmp;
        pFVar4 = pFVar6;
        do {
          uVar7 = *(undefined8 *)&pFVar4->field_0x8;
          uVar8 = *(undefined8 *)pFVar4->pos;
          uVar9 = *(undefined8 *)(pFVar4->pos + 2);
          *(undefined8 *)pFVar3 = *(undefined8 *)pFVar4;
          *(undefined8 *)((int)pFVar3 + 8) = uVar7;
          *(undefined8 *)((int)pFVar3 + 0x10) = uVar8;
          *(undefined8 *)((int)pFVar3 + 0x18) = uVar9;
          pFVar4 = (FURN_WRK *)pFVar4->rotate;
          pFVar3 = (FURN_WRK *)((int)pFVar3 + 0x20);
          pFVar2 = pFVar11;
        } while (pFVar4 != pFVar6 + 1);
        do {
          uVar7 = *(undefined8 *)&pFVar2->field_0x8;
          uVar8 = *(undefined8 *)pFVar2->pos;
          uVar9 = *(undefined8 *)(pFVar2->pos + 2);
          *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
          *(undefined8 *)&pFVar6->field_0x8 = uVar7;
          *(undefined8 *)pFVar6->pos = uVar8;
          *(undefined8 *)(pFVar6->pos + 2) = uVar9;
          pFVar2 = (FURN_WRK *)pFVar2->rotate;
          pFVar6 = (FURN_WRK *)pFVar6->rotate;
          pFVar3 = &fw_tmp;
          pFVar4 = pFVar11;
        } while (pFVar2 != pFVar11 + 1);
        do {
          uVar9 = *(undefined8 *)((int)pFVar3 + 8);
          uVar7 = *(undefined8 *)((int)pFVar3 + 0x10);
          uVar8 = *(undefined8 *)((int)pFVar3 + 0x18);
          *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
          *(undefined8 *)&pFVar4->field_0x8 = uVar9;
          *(undefined8 *)pFVar4->pos = uVar7;
          *(undefined8 *)(pFVar4->pos + 2) = uVar8;
          pFVar3 = (FURN_WRK *)((int)pFVar3 + 0x20);
          pFVar4 = (FURN_WRK *)pFVar4->rotate;
        } while (pFVar3 != (FURN_WRK *)&stack0xffffffc0);
        pDVar5 = door_wrk;
        iVar10 = 0x13;
        do {
          if (pDVar5->fwrk_no == fw_id1) {
            pDVar5->fwrk_no = (uchar)fw_id2;
          }
          else if (pDVar5->fwrk_no == fw_id2) {
            pDVar5->fwrk_no = (uchar)fw_id1;
          }
          iVar10 = iVar10 + -1;
          pDVar5 = pDVar5 + 1;
        } while (-1 < iVar10);
        ExchangeFAWFWID(fw_id1,fw_id2);
        bVar1 = true;
      }
LAB_001c6b08:
      if (!bVar1) {
        pFVar11 = furn_wrk;
        iVar10 = 0x3b;
        do {
          pFVar11->fs_flg = '\0';
          iVar10 = iVar10 + -1;
          pFVar11 = pFVar11 + 1;
        } while (-1 < iVar10);
        return;
      }
    }
    fw_id1 = fw_id1 + 1;
    pFVar11 = pFVar11 + 1;
    if (0x3b < (int)fw_id1) {
      pFVar11 = furn_wrk;
      iVar10 = 0x3b;
      do {
        pFVar11->fs_flg = '\0';
        iVar10 = iVar10 + -1;
        pFVar11 = pFVar11 + 1;
      } while (-1 < iVar10);
      return;
    }
  } while( true );
  fw_id2 = fw_id2 + 1;
  pFVar6 = pFVar6 + 1;
  if (0x3b < (int)fw_id2) goto LAB_001c6b08;
  goto LAB_001c69e8;
}

void FurnDataRenewNow() {
  uchar uVar1;
  FURN_WRK *pFVar2;
  
  pFVar2 = furn_wrk;
  uVar1 = furn_wrk[0].use;
  while( true ) {
    if (uVar1 == '\x02') {
      pFVar2->use = '\0';
    }
    else if (uVar1 == '\0') {
      pFVar2->use = '\x02';
    }
    if (0x3169ef < (int)(pFVar2 + 1)) break;
    uVar1 = pFVar2[1].use;
    pFVar2 = pFVar2 + 1;
  }
  return;
}

void FurnFreeFurnWrk(u_char rm_id) {
	int i;
	
  FURN_WRK *fwp;
  int no;
  
  if (rm_id != 0xff) {
    no = 0;
    fwp = furn_wrk;
    do {
      if (fwp->use == '\x02') {
        FurnSetWrkNoUse(fwp,no);
      }
      no = no + 1;
      fwp = fwp + 1;
    } while (no < 0x3c);
  }
  return;
}

void FurnDataInit() {
	FURN_DATA_POP *fdpp;
	int i;
	int *addr_si;
	int *addr_fdt;
	u_char *r_id_p;
	u_char rm_num;
	u_char dt_num;
	u_char no_use_fw;
	
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FURN_WRK *fw;
  byte *pbVar5;
  int *piVar6;
  uint fw_no;
  uint uVar7;
  
  iVar4 = 0;
  InitFActWrk();
  pbVar5 = (byte *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x2c) + 0x7f8000) + 0x7f8000);
  bVar1 = *pbVar5;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    if ((int)(uint)bVar1 <= iVar4) {
      return;
    }
    if (*pbVar5 == map_wrk.now_room) break;
    iVar4 = iVar4 + 1;
  }
  if ((int)(uint)bVar1 <= iVar4) {
    return;
  }
  fw_no = 0;
  SetUpRoomCoordinate((uint)*pbVar5,&room_wrk.pos[0].x);
  piVar6 = (int *)(*(int *)(iVar4 * 4 + *(int *)(map_wrk.dat_adr + 0x2c) + 0x7f8004) + 0x7f8000);
  uVar7 = (uint)*(byte *)(*piVar6 + 0x7f8000);
  iVar4 = 0;
  if (uVar7 == 0) {
    return;
  }
  iVar3 = 0;
  while( true ) {
    iVar3 = *(int *)(*(int *)((int)piVar6 + iVar3 + 4) + 0x7f8000);
    iVar4 = iVar4 + 1;
    while( true ) {
      fw = furn_wrk + fw_no;
      iVar2 = FurnIsWrkUse(fw);
      if (iVar2 == 0) break;
      fw_no = fw_no + 1 & 0xff;
    }
    FurnSetFurnWork((FURN_DATA_POP *)(iVar3 + 0x7f8000),fw_no,ingame_wrk.msn_no,'\0',*pbVar5);
    if ((fw->furn_no == -1) || (fw->furn_no == 0)) {
      if ((furn_wrk[fw_no].furn_no == -1) &&
         ((furn_wrk[fw_no].fno_bk != -1 && (furn_wrk[fw_no].fno_bk != 0)))) {
        furn_wrk[fw_no].furn_no = -1;
      }
    }
    else {
      ChoudoPreRender(fw);
    }
    if ((int)uVar7 <= iVar4) break;
    iVar3 = iVar4 * 4;
  }
  return;
}

void FurnDataRenewNext(u_char room_id) {
	FURN_DATA_POP *fdpp;
	int *addr_si;
	int *addr_fdt;
	u_char *r_id_p;
	int i;
	u_char rm_num;
	u_char dt_num;
	u_char no_use_fw;
	
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FURN_WRK *fw;
  byte *pbVar5;
  int *piVar6;
  uint fw_no;
  uint uVar7;
  
  if (room_id != 0xff) {
    iVar4 = 0;
    pbVar5 = (byte *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x2c) + 0x7f8000) + 0x7f8000);
    bVar1 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      if ((int)(uint)bVar1 <= iVar4) break;
      if (*pbVar5 == room_id) {
        if ((int)(uint)bVar1 <= iVar4) {
          return;
        }
        fw_no = 0;
        SetUpRoomCoordinate((uint)*pbVar5,&room_wrk.pos[1].x);
        piVar6 = (int *)(*(int *)(iVar4 * 4 + *(int *)(map_wrk.dat_adr + 0x2c) + 0x7f8004) +
                        0x7f8000);
        uVar7 = (uint)*(byte *)(*piVar6 + 0x7f8000);
        iVar4 = 0;
        if (uVar7 == 0) {
          return;
        }
        iVar3 = 0;
        while( true ) {
          iVar3 = *(int *)(*(int *)((int)piVar6 + iVar3 + 4) + 0x7f8000);
          iVar4 = iVar4 + 1;
          while( true ) {
            fw = furn_wrk + fw_no;
            iVar2 = FurnIsWrkUse(fw);
            if (iVar2 == 0) break;
            fw_no = fw_no + 1 & 0xff;
          }
          FurnSetFurnWork((FURN_DATA_POP *)(iVar3 + 0x7f8000),fw_no,ingame_wrk.msn_no,'\x02',*pbVar5
                         );
          if ((fw->furn_no == -1) || (fw->furn_no == 0)) {
            if ((furn_wrk[fw_no].furn_no == -1) &&
               ((furn_wrk[fw_no].fno_bk != -1 && (furn_wrk[fw_no].fno_bk != 0)))) {
              furn_wrk[fw_no].furn_no = -1;
            }
          }
          else {
            ChoudoPreRender(fw);
          }
          if ((int)uVar7 <= iVar4) break;
          iVar3 = iVar4 * 4;
        }
        return;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

void FurnPicDispOn() {
	FURN_WRK *fwp0;
	int i;
	u_int attr;
	
  uint uVar1;
  FURN_WRK *furn;
  int iVar2;
  
  iVar2 = 0x3b;
  furn = furn_wrk;
  do {
    iVar2 = iVar2 + -1;
    if ((furn->use == '\x02') || (furn->use == '\0')) {
      uVar1 = GetFurnAttr(furn->id,ingame_wrk.msn_no);
      if (((uVar1 & 8) == 0) &&
         ((((uVar1 & 0x40) != 0 && (furn->furn_no == -1)) && (furn->fno_bk != -1)))) {
        furn->furn_no = furn->fno_bk;
        furn->fs_flg = '\x01';
        ChoudoPreRender(furn);
      }
    }
    furn = furn + 1;
  } while (-1 < iVar2);
  return;
}

void FurnPicDispOff() {
	FURN_WRK *fwp0;
	int i;
	u_int attr;
	
  uint uVar1;
  FURN_WRK *pFVar2;
  int iVar3;
  
  iVar3 = 0x3b;
  pFVar2 = furn_wrk;
  do {
    iVar3 = iVar3 + -1;
    if ((pFVar2->use == '\x02') || (pFVar2->use == '\0')) {
      uVar1 = GetFurnAttr(pFVar2->id,ingame_wrk.msn_no);
      if (((uVar1 & 8) == 0) &&
         ((((uVar1 & 0x40) != 0 && (pFVar2->furn_no != -1)) && (pFVar2->fno_bk != -1)))) {
        pFVar2->furn_no = -1;
      }
    }
    pFVar2 = pFVar2 + 1;
  } while (-1 < iVar3);
  return;
}

void ClearFurnAttrFlg() {
  memset(furn_attr_flg,0,4000);
  return;
}

void InitFurnAttrFlg() {
	int addr_map;
	int *addr_si0;
	int *addr_si1;
	int *addr_si2;
	int i;
	int j;
	u_char room_num;
	u_char dat_num;
	int k;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  
  memset(furn_attr_flg,0,4000);
  uVar4 = (uint)ingame_wrk.msn_no;
  iVar5 = 0;
  iVar2 = uVar4 * 4;
  while( true ) {
    if (floor_exist[iVar2] != '\0') {
      piVar9 = (int *)(*(int *)(*(int *)(iVar5 * 4 + 0x7f8000) + 0x7f802c) + 0x7f8000);
      uVar10 = (uint)*(byte *)(*piVar9 + 0x7f8000);
      iVar2 = 0;
      if (uVar10 != 0) {
        iVar1 = 0;
        do {
          piVar7 = (int *)(*(int *)((int)piVar9 + iVar1 + 4) + 0x7f8000);
          uVar8 = (uint)*(byte *)(*piVar7 + 0x7f8000);
          iVar1 = 0;
          if (uVar8 != 0) {
            do {
              iVar6 = iVar1 + 1;
              uVar3 = (uint)*(ushort *)(*(int *)(piVar7[iVar1 + 1] + 0x7f8000) + 0x7f8012);
              furn_attr_flg[uVar3].flg =
                   *(uint *)(&furn_attr_dat +
                            (uint)ingame_wrk.msn_no * 4 +
                            (uint)*(ushort *)(&furn_dat + uVar3 * 0x12) * 0x14);
              iVar1 = iVar6;
            } while (iVar6 < (int)uVar8);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar2 * 4;
        } while (iVar2 < (int)uVar10);
      }
    }
    iVar5 = iVar5 + 1;
    if (3 < iVar5) break;
    iVar2 = iVar5 + uVar4 * 4;
  }
  return;
}

void SetFurnAttrEve(u_short id, u_short flg, int on_flg) {
	FURN_WRK *fwp;
	int i;
	int j;
	int on;
	u_int mask;
	u_int checker;
	u_int furn_flg_bk;
	
  ushort uVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  FURN_ATTR_FLG *pFVar7;
  FURN_WRK *fwp;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int no;
  
  uVar8 = (int)id & 0xffff;
  uVar9 = (long)flg & 0xffff;
  if (499 < uVar8) {
    return;
  }
  pFVar7 = furn_attr_flg + uVar8;
  uVar3 = pFVar7->flg;
  if (on_flg == 0) {
    uVar10 = ~uVar9 & 0xffff;
    pFVar7->flg = uVar3 & (uint)uVar10;
  }
  else {
    pFVar7->flg = uVar3 | (uint)uVar9;
    uVar10 = uVar9;
  }
  no = 0;
  fwp = furn_wrk;
  do {
    if (fwp->use == '\x02') {
      uVar1 = fwp->id;
LAB_001c739c:
      if (uVar8 == uVar1) {
        uVar8 = 0;
        do {
          uVar5 = 0x80000000 >> (uVar8 & 0x1f);
          if (((uVar9 & (long)(int)uVar5) != 0) &&
             (uVar6 = uVar10 & (long)(int)uVar5, (long)(int)(uVar3 & uVar5) != uVar6)) {
            bVar4 = uVar6 == 0;
            switch(uVar8) {
            case 0x10:
              if (bVar4) {
                return;
              }
              FurnSetWrkNoUse(fwp,no);
              FurnSortFurnWrk('\x01');
              return;
            case 0x11:
              if (bVar4) {
                sVar2 = fwp->fno_bk;
                if (sVar2 != -1) {
                  fwp->furn_no = sVar2;
                  fwp->fno_bk = -1;
                  fwp->fs_flg = '\x01';
                  if (sVar2 != 0) {
                    ChoudoPreRender(fwp);
                  }
                  FurnSortFurnWrk('\x01');
                }
              }
              else if (fwp->furn_no != -1) {
                fwp->fno_bk = fwp->furn_no;
                fwp->furn_no = -1;
                FurnSortFurnWrk('\x01');
              }
              break;
            case 0x1d:
              if (bVar4) {
                FurnEfctSet(fwp);
              }
              else {
                FurnEfctFree(fwp);
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0x20);
        return;
      }
    }
    else if (fwp->use == '\0') {
      uVar1 = fwp->id;
      goto LAB_001c739c;
    }
    no = no + 1;
    fwp = fwp + 1;
    if (0x3b < no) {
      return;
    }
  } while( true );
}

u_int GetFurnAttrF(FURN_WRK *fwp, u_char msn_no) {
  uint uVar1;
  
  uVar1 = _furn_attr_dat;
  if (fwp != (FURN_WRK *)0x0) {
    uVar1 = GetFurnAttr(fwp->id,msn_no);
  }
  return uVar1;
}

u_int GetFurnAttr(u_short id, u_char msn_no) {
  if (((int)id & 0xffffU) < 500) {
    return furn_attr_flg[(int)id & 0xffffU].flg;
  }
  return 0;
}

u_char FurnHitCheck(u_char *dx_max, u_char *dz_max, float *pos, float *dst, u_char div, u_char room) {
	int *addr;
	int *addr_bak;
	int *addr_bak2;
	FURN_DATA_POP *fedp;
	u_char *sq_typep;
	int i;
	int j;
	int k;
	u_char dt_num;
	u_char sq_num;
	u_char rm_no;
	u_char div_x;
	u_char div_z;
	
  byte bVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uchar *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int *addr_bak;
  int *addr_bak2;
  uchar dt_num;
  uchar sq_num;
  uchar div_z;
  
  uVar6 = (int)(char)div & 0xff;
  iVar15 = *(int *)(map_wrk.dat_adr + 0x2c);
  uVar13 = (uint)*dx_max;
  _div_z = (uint)*dz_max;
  uVar3 = GetDataRoom('\v',room);
  if ((long)(char)uVar3 != 0xff) {
    iVar14 = 0;
    piVar8 = (int *)(*(int *)(iVar15 + (char)uVar3 * 4 + 0x7f8004) + 0x7f8000);
    uVar4 = (uint)*(byte *)(*piVar8 + 0x7f8000);
    if (*(byte *)(*piVar8 + 0x7f8000) != 0) {
      do {
        iVar15 = piVar8[iVar14 + 1];
        iVar2 = *(int *)(iVar15 + 0x7f8000);
        iVar5 = FurnIsHit(*(short *)(iVar2 + 0x7f8012),ingame_wrk.msn_no);
        iVar11 = 1;
        if (iVar5 != 0) {
          bVar1 = *(byte *)(iVar2 + 0x7f8018);
          puVar12 = (uchar *)(iVar2 + 0x7f801a);
          if (1 < bVar1) {
            do {
              piVar9 = (int *)(*(int *)(iVar15 + 0x7f8004 + iVar11 * 4) + 0x7f8000);
              iVar11 = iVar11 + 1;
              uVar10 = 0;
              do {
                uVar7 = uVar10;
                if ((int)uVar13 <= (int)uVar7) goto LAB_001c7700;
                uVar3 = PosInAreaJudgeSub(piVar9,(short)(int)pos[2],
                                          (short)(int)(*pos + (*dst * (float)(uVar7 + 1)) /
                                                              (float)uVar6),*puVar12);
                uVar10 = uVar7 + 1;
              } while (uVar3 == '\0');
              uVar13 = uVar7 & 0xff;
LAB_001c7700:
              uVar10 = 0;
              do {
                uVar7 = _div_z;
                if ((int)_div_z <= (int)uVar10) break;
                uVar3 = PosInAreaJudgeSub(piVar9,(short)(int)(pos[2] + (dst[2] * (float)(uVar10 + 1)
                                                                       ) / (float)uVar6),
                                          (short)(int)*pos,*puVar12);
                uVar7 = uVar10 & 0xff;
                uVar10 = uVar10 + 1;
              } while (uVar3 == '\0');
              _div_z = uVar7;
              puVar12 = puVar12 + 1;
            } while (iVar11 < (int)(uint)bVar1);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar4);
    }
    iVar15 = 0;
    if (uVar4 != 0) {
      do {
        iVar14 = piVar8[iVar15 + 1];
        iVar2 = *(int *)(iVar14 + 0x7f8000);
        iVar5 = FurnIsHit(*(short *)(iVar2 + 0x7f8012),ingame_wrk.msn_no);
        iVar11 = 1;
        if (iVar5 != 0) {
          bVar1 = *(byte *)(iVar2 + 0x7f8018);
          puVar12 = (uchar *)(iVar2 + 0x7f801a);
          if (1 < bVar1) {
            fVar16 = (float)uVar6;
            do {
              piVar9 = (int *)(*(int *)(iVar14 + 0x7f8004 + iVar11 * 4) + 0x7f8000);
              uVar3 = PosInAreaJudgeSub(piVar9,(short)(int)(pos[2] + (dst[2] * (float)_div_z) /
                                                                     fVar16),
                                        (short)(int)(*pos + (*dst * (float)uVar13) / fVar16),
                                        *puVar12);
              if (uVar3 != '\0') {
                if (_div_z < uVar13) {
                  uVar13 = _div_z;
                }
                uVar10 = 0;
                if (uVar13 != 0) {
                  do {
                    uVar7 = uVar10 + 1;
                    uVar3 = PosInAreaJudgeSub(piVar9,(short)(int)(pos[2] + (dst[2] * (float)uVar7) /
                                                                           fVar16),
                                              (short)(int)(*pos + (*dst * (float)uVar7) / fVar16),
                                              *puVar12);
                    if (uVar3 != '\0') {
                      uVar13 = uVar10 & 0xff;
                      _div_z = uVar13;
                      break;
                    }
                    uVar10 = uVar7;
                  } while ((int)uVar7 < (int)uVar13);
                }
              }
              puVar12 = puVar12 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)(uint)bVar1);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar4);
    }
    if ((*dx_max != uVar13) || (*dz_max != _div_z)) {
      *dx_max = (uchar)uVar13;
      *dz_max = (uchar)_div_z;
      return '\x01';
    }
  }
  return '\0';
}

u_char FurnHitCheck2(u_short pos_x, u_short pos_y, u_char room_id) {
	FURN_DATA_POP *fedp;
	int *addr_si;
	int *addr_bak_si;
	int *addr_bak2_si;
	u_char *sq_typep;
	int i;
	int j;
	u_char room_no;
	u_char dt_num;
	u_char sq_num;
	
  byte bVar1;
  int iVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uchar *puVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(map_wrk.dat_adr + 0x2c);
  uVar3 = GetDataRoom('\v',room_id);
  if ((long)(char)uVar3 != 0xff) {
    piVar6 = (int *)(*(int *)(iVar8 + (char)uVar3 * 4 + 0x7f8004) + 0x7f8000);
    uVar9 = (uint)*(byte *)(*piVar6 + 0x7f8000);
    iVar8 = 0;
    if (uVar9 != 0) {
      iVar5 = 0;
      do {
        iVar5 = *(int *)((int)piVar6 + iVar5 + 4);
        iVar2 = *(int *)(iVar5 + 0x7f8000);
        iVar4 = FurnIsHit(*(short *)(iVar2 + 0x7f8012),ingame_wrk.msn_no);
        if (iVar4 != 0) {
          bVar1 = *(byte *)(iVar2 + 0x7f8018);
          if (bVar1 != 0) {
            iVar4 = 1;
            puVar7 = (uchar *)(iVar2 + 0x7f801a);
            if (1 < bVar1) {
              do {
                uVar3 = PosInAreaJudgeSub((int *)(*(int *)(iVar5 + 0x7f8004 + iVar4 * 4) + 0x7f8000)
                                          ,pos_x,pos_y,*puVar7);
                iVar4 = iVar4 + 1;
                if (uVar3 != '\0') {
                  return '\x01';
                }
                puVar7 = puVar7 + 1;
              } while (iVar4 < (int)(uint)bVar1);
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar5 = iVar8 * 4;
      } while (iVar8 < (int)uVar9);
    }
  }
  return '\0';
}
