// STATUS: NOT STARTED

u_char floor_exist[5][4] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 1,
		/* [3] = */ 0
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 1,
		/* [3] = */ 0
	},
	/* [2] = */ {
		/* [0] = */ 1,
		/* [1] = */ 1,
		/* [2] = */ 1,
		/* [3] = */ 0
	},
	/* [3] = */ {
		/* [0] = */ 1,
		/* [1] = */ 1,
		/* [2] = */ 1,
		/* [3] = */ 1
	},
	/* [4] = */ {
		/* [0] = */ 1,
		/* [1] = */ 1,
		/* [2] = */ 1,
		/* [3] = */ 1
	}
};
u_char room_pass[42] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0,
	/* [7] = */ 0,
	/* [8] = */ 0,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 0,
	/* [16] = */ 0,
	/* [17] = */ 0,
	/* [18] = */ 0,
	/* [19] = */ 0,
	/* [20] = */ 0,
	/* [21] = */ 0,
	/* [22] = */ 0,
	/* [23] = */ 0,
	/* [24] = */ 0,
	/* [25] = */ 0,
	/* [26] = */ 0,
	/* [27] = */ 0,
	/* [28] = */ 0,
	/* [29] = */ 0,
	/* [30] = */ 0,
	/* [31] = */ 0,
	/* [32] = */ 0,
	/* [33] = */ 0,
	/* [34] = */ 0,
	/* [35] = */ 0,
	/* [36] = */ 0,
	/* [37] = */ 0,
	/* [38] = */ 0,
	/* [39] = */ 0,
	/* [40] = */ 0,
	/* [41] = */ 0
};
u_char gtmp_cam_type = 0;
u_char gtmp_room = 0;
u_short gtmp_cam_no = 0;

int MissonMapDataLoad(u_char msn_no) {
  int iVar1;
  
  iVar1 = LoadReq(0xb,0x7f8000);
  return iVar1;
}

void InitMapStatus(u_char msn_no) {
  if ((ingame_wrk.clear_count == 0) && (msn_no < 2)) {
    RoomPassInit();
  }
  ClearFurnAttrFlg();
  ClearDoorAttrFlg();
  InitFurnAttrFlg();
  InitDoorAttrFlg();
  InitFurnDatSave();
  NewMissionInitWanderSoul();
  return;
}

void MapDataInit() {
  PreGameInitFActWrk();
  memset(furn_wrk,0,0x7f80);
  memset(fefct_wrk,0,0x12c0);
  MapFloorChange(map_wrk.floor);
  return;
}

void MapMissionChange(u_char new_msn) {
  SeBackupInit();
  InitMapStatus(new_msn);
  return;
}

void RoomPassInit() {
  memset(room_pass,0,0x2a);
  return;
}

void RoomPass(u_char room_id) {
  if (((int)(char)room_id & 0xffU) < 0x2a) {
    room_pass[(int)(char)room_id & 0xffU] = room_pass[(int)(char)room_id & 0xffU] | 1;
  }
  return;
}

int IsRoomPass(u_char room_id) {
  uint uVar1;
  
  uVar1 = 0;
  if (((int)(char)room_id & 0xffU) < 0x2a) {
    uVar1 = room_pass[(int)(char)room_id & 0xffU] & 1;
  }
  return uVar1;
}

void MapFloorChange(u_char new_floor) {
  map_wrk.room_update_flg = '\0';
  map_wrk.floor = new_floor;
  map_wrk.dat_adr = GetFloorTopAddr(new_floor);
  InitMap();
  RoomWrkRenew();
  return;
}

int GetFloorTopAddr(u_char floor) {
	int *addr;
	
  return *(int *)(((int)(char)floor & 0xffU) * 4 + 0x7f8000) + 0x7f8000;
}

void InitMap() {
	int i;
	
  int no;
  FURN_WRK *fwp;
  
  no = 0;
  memset(&room_wrk,0,0x3f0);
  fwp = furn_wrk;
  do {
    FurnSetWrkNoUse(fwp,no);
    no = no + 1;
    fwp = fwp + 1;
  } while (no < 0x3c);
  room_wrk.disp_no[1] = 0xff;
  room_wrk.disp_no[0] = 0xff;
  mimChodoInitWork();
  acsInitRopeWork();
  acsInitChodoWork();
  DoorAcInit();
  DoorCtrlInit();
  room_wrk.room_num = GetRoomNum();
  GetNewRoomData();
  FurnDataInit();
  DoorDataInit();
  FurnSortFurnWrk('\0');
  map_wrk.next_room = room_wrk.disp_no[1];
  map_wrk.now_room = room_wrk.disp_no[0];
  return;
}

void MapCtrlMain() {
	int get_room;
	float get_y;
	
  uchar room_id;
  int num;
  float fVar1;
  float x;
  float x_00;
  float x_01;
  float y;
  float y_00;
  
  area_wrk.fg_max = GetRoomArea(plyr_wrk.dop._13_1_);
  RoomWrkRenew();
  CameraNoRenewEach('\x01');
  CameraNoRenewEach('\x02');
  CameraNoRenewEach('\x03');
  CameraNoRenewEach('\x04');
  PlayerHeightRenew();
  MapSetFloorSeNo();
  if (map_wrk.room_update_flg != '\0') {
    map_wrk.room_update_flg = '\0';
  }
  room_id = NextRoomRenew();
  if ((long)(char)room_id != 0xff) {
    DoorFreeFurnWrk(room_id);
    FurnFreeFurnWrk(room_id);
    FurnDataRenewNext(room_id);
    DoorDataRenewNext(room_id);
    FurnSortFurnWrk('\0');
    map_wrk.room_update_flg = '\x01';
  }
  DoorCtrlMain();
  FurnCtrlMain();
  FActWrkMain();
  GetNowOpenEvent();
  GetNowOpenFindAct();
  GetNowPlayerMoveMotion();
  SeEvMain();
  if (dbg_wrk.oth_info == 0) {
    return;
  }
  SetInteger2(0,20.0,30.0,1,0x80,0x80,0x80,(uint)room_wrk.room_no);
  SetInteger2(0,70.0,30.0,1,0x80,0x80,0x80,(uint)room_wrk.disp_no[0]);
  fVar1 = 180.0;
  SetInteger2(0,120.0,30.0,1,0x80,0x80,0x80,(uint)room_wrk.disp_no[1]);
  SetInteger2(0,fVar1,30.0,1,0x80,0x80,0x80,(uint)plyr_wrk.dop._13_1_);
  x_01 = 160.0;
  SetInteger2(0,20.0,50.0,1,0x80,0x80,0x80,(uint)plyr_wrk.dop.dov[0]._0_2_);
  SetInteger2(0,90.0,50.0,1,0x80,0x80,0x80,(uint)plyr_wrk.dop.dov[1]._0_2_);
  x = 100.0;
  SetInteger2(0,x_01,50.0,1,0x80,0x80,0x80,(uint)plyr_wrk.dop.dov[2]._0_2_);
  x_00 = 170.0;
  SetInteger2(0,230.0,50.0,1,0x80,0x80,0x80,(uint)plyr_wrk.dop.dov[3]._0_2_);
  SetInteger2(0,30.0,80.0,1,0x80,0x80,0x80,(int)plyr_wrk.move_box.spd.z);
  y = 350.0;
  SetInteger2(0,x,80.0,1,0x80,0x80,0x80,(int)plyr_wrk.move_box.rot.x);
  y_00 = 400.0;
  SetInteger2(0,x_00,80.0,1,0x80,0x80,0x80,(int)(short)room_wrk.room_height);
  SetInteger2(0,240.0,80.0,1,0x80,0x80,0x80,(int)plyr_wrk.move_box.spd.w);
  SetInteger2(0,30.0,x,1,0x80,0x80,0x80,(int)room_wrk.pos[0].x);
  SetInteger2(0,x,x,1,0x80,0x80,0x80,(int)room_wrk.pos[0].y);
  SetInteger2(0,x_00,x,1,0x80,0x80,0x80,(int)room_wrk.pos[0].z);
  SetInteger2(0,30.0,120.0,1,0x80,0x80,0x80,(int)camera.i.x);
  SetInteger2(0,x,120.0,1,0x80,0x80,0x80,(int)camera.i.y);
  SetInteger2(0,x_00,120.0,1,0x80,0x80,0x80,(int)camera.i.z);
  SetInteger2(0,30.0,140.0,1,0x80,0x80,0x80,(int)camera.p.x);
  SetInteger2(0,x,140.0,1,0x80,0x80,0x80,(int)camera.p.y);
  SetInteger2(0,x_00,140.0,1,0x80,0x80,0x80,(int)camera.p.z);
  SetInteger2(0,30.0,x_01,1,0x80,0x80,0x80,(int)item_dsp_wrk[0][0].pos[0]);
  SetInteger2(0,x,x_01,1,0x80,0x80,0x80,(int)item_dsp_wrk[0][0].pos[1]);
  SetInteger2(0,x_00,x_01,1,0x80,0x80,0x80,(int)item_dsp_wrk[0][0].pos[2]);
  SetInteger2(0,x,300.0,1,0x80,0x80,0x80,
              (int)((plyr_wrk.move_box.trot.w * fVar1) / DAT_00355d8c + 360.0) % 0x168);
  SetInteger2(0,30.0,y,1,0x80,0x80,0x80,(int)(plyr_wrk.move_box.spd.z - room_wrk.pos[0].x));
  SetInteger2(0,x,y,1,0x80,0x80,0x80,(int)(plyr_wrk.move_box.spd.w - room_wrk.pos[0].y));
  SetInteger2(0,x_00,y,1,0x80,0x80,0x80,(int)(plyr_wrk.move_box.rot.x - room_wrk.pos[0].z));
  SetInteger2(0,50.0,y_00,1,0x80,0x80,0x80,(uint)room_wrk.mot_num);
  SetInteger2(0,120.0,y_00,1,0x80,0x80,0x80,(uint)plyr_wrk.move_mot);
  num = GetPointRoom(25000,0x157c);
  fVar1 = GetPointHeight((short)(int)plyr_wrk.move_box.spd.z,(short)(int)plyr_wrk.move_box.rot.x);
  SetInteger2(0,x,190.0,1,0x80,0x80,0x80,num);
  SetInteger2(0,x_00,190.0,1,0x80,0x80,0x80,(int)fVar1);
  fVar1 = GetNowHeight();
  SetInteger2(0,x_00,220.0,1,0x80,0x80,0x80,(int)fVar1);
  SetInteger2(0,x,220.0,1,0x80,0x80,0x80,(int)plyr_wrk.move_box.spd.w);
  return;
}

void GetNewRoomData() {
  uchar uVar1;
  FURN_WRK *pFVar2;
  float fVar3;
  
  room_wrk.room_no = GetNowRoom();
  GetPlayerRoom(room_wrk.room_no);
  GetRoomDispPos(room_wrk.room_no);
  room_wrk.camera_num = GetDataNum('\x01',plyr_wrk.dop._13_1_);
  room_wrk.camera_bnum = GetDataNum('\x02',plyr_wrk.dop._13_1_);
  room_wrk.camera_tnum = GetDataNum('\x04',plyr_wrk.dop._13_1_);
  room_wrk.height_num = GetDataNum('\x05',plyr_wrk.dop._13_1_);
  room_wrk.hit_num_next = room_wrk.hit_num;
  room_wrk.hit_num = GetDataNum('\x06',plyr_wrk.dop._13_1_);
  room_wrk.ev_num = GetDataNum('\a',plyr_wrk.dop._13_1_);
  room_wrk.find_num = GetDataNum('\t',plyr_wrk.dop._13_1_);
  room_wrk.mot_num = GetDataNum('\f',plyr_wrk.dop._13_1_);
  room_wrk.se_num = GetDataNum('\b',plyr_wrk.dop._13_1_);
  RoomPass(room_wrk.disp_no[0]);
  RoomPass(room_wrk.disp_no[1]);
  DoorPassRoom(room_wrk.disp_no[0]);
  DoorPassRoom(room_wrk.disp_no[1]);
  plyr_wrk.dop.dov[0]._0_2_ = GetNowCameraEach('\x01',room_wrk.camera_num,&room_wrk.camera_no);
  plyr_wrk.dop.dov[1]._0_2_ = GetNowCameraEach('\x02',room_wrk.camera_bnum,&room_wrk.camera_bno);
  plyr_wrk.dop.dov[2]._0_2_ = CameraGetDoramaCameraNo(plyr_wrk.dop.dov[2]._0_2_);
  fVar3 = GetNowHeight();
  plyr_wrk.padding = (uint)(fVar3 + (float)(int)(short)room_wrk.room_height);
  pFVar2 = furn_wrk;
  uVar1 = furn_wrk[0].use;
  while( true ) {
    if (uVar1 == '\x04') {
      pFVar2->room_id = room_wrk.disp_no[0];
    }
    if (0x3169ef < (int)(pFVar2 + 1)) break;
    uVar1 = pFVar2[1].use;
    pFVar2 = pFVar2 + 1;
  }
  FurnDataRenewNow();
  ItemDispDataRenew();
  SetRoomReverbVol(map_wrk.now_room);
  if (area_read_wrk.stat != '\0') {
    return;
  }
  DoorDataRenewNow();
  return;
}

u_char RoomWrkRenew() {
  uchar uVar1;
  
  room_wrk.disp_bak[0] = room_wrk.disp_no[0];
  room_wrk.disp_bak[1] = room_wrk.disp_no[1];
  uVar1 = RoomChangeJudge();
  if (uVar1 == '\0') {
    GetNewRoomData();
    FurnSortFurnWrk('\x01');
  }
  return uVar1 == '\0';
}

void CameraNoRenewEach(u_char cam_type) {
  uchar uVar1;
  
  if (dbg_wrk.cam_mode != 2) {
    if (cam_type == '\x02') {
      uVar1 = CameraChangeJudgeEach('\x02',(ushort)room_wrk.camera_bno);
      if (uVar1 == '\0') {
        plyr_wrk.dop.dov[1]._0_2_ =
             GetNowCameraEach('\x02',room_wrk.camera_bnum,&room_wrk.camera_bno);
      }
    }
    else if (cam_type < 3) {
      if ((cam_type == '\x01') &&
         (uVar1 = CameraChangeJudgeEach('\x01',(ushort)room_wrk.camera_no), uVar1 == '\0')) {
        plyr_wrk.dop.dov[0]._0_2_ = GetNowCameraEach('\x01',room_wrk.camera_num,&room_wrk.camera_no)
        ;
      }
    }
    else if (cam_type == '\x03') {
      plyr_wrk.dop.dov[2]._0_2_ = CameraGetDoramaCameraNo(plyr_wrk.dop.dov[2]._0_2_);
    }
    else if ((((cam_type == '\x04') && (plyr_wrk.dop.dov[3]._0_2_ != -1)) &&
             (plyr_wrk.dop.dov[3]._0_2_ =
                   CameraCheckDoorCameraNo((short)plyr_wrk.se_deadly,plyr_wrk.se_deadly._2_1_),
             plyr_wrk.dop.dov[3]._0_2_ == -1)) &&
            ((plyr_wrk.mode != 1 && (plyr_wrk.se_deadly._3_1_ == '\x03')))) {
      AllCloseConnectDoor();
    }
  }
  return;
}

static void CameraNoRenew() {
  uchar uVar1;
  
  uVar1 = CameraChangeJudge();
  if (uVar1 == '\0') {
    plyr_wrk.dop.dov[0]._0_2_ = GetNowCamera();
  }
  return;
}

void DbgGetDrmCamNo() {
	int j;
	
  int iVar1;
  
  iVar1 = 9;
  if (*key_now[5] == 1) {
    do {
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

static u_short CameraGetDoramaCameraNo(u_short now_cam_no) {
	u_int *addr_ui0;
	u_int *addr_ui1;
	u_short *dcamp;
	int i;
	int j;
	u_short cam_no[2];
	u_char room_no;
	u_char data_num;
	u_char get_flg;
	u_char now_camera_get_flg;
	u_char drm_cam_no_get_flg;
	static int count = 0;
	
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  uchar room;
  uchar uVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  short cam_no [2];
  uchar get_flg;
  
  bVar5 = false;
  uVar12 = (int)cam_no + 3U & 3;
  puVar4 = (uint *)(((int)cam_no + 3U) - uVar12);
  *puVar4 = *puVar4 & -1 << (uVar12 + 1) * 8 | (uint)PTR_003570e0 >> (3 - uVar12) * 8;
  cam_no = (short  [2])PTR_003570e0;
  bVar6 = false;
  room = GetDataRoom('\x03',plyr_wrk.dop._13_1_);
  bVar2 = false;
  if ((long)(char)room == 0xff) {
    now_cam_no = -1;
  }
  else {
    iVar11 = 0;
    iVar9 = *(int *)(*(int *)(map_wrk.dat_adr + 0xc) + (char)room * 4 + 0x7f8004);
    uVar12 = (uint)*(byte *)(*(int *)(iVar9 + 0x7f8000) + 0x7f8000);
    piVar10 = (int *)(iVar9 + 0x7f8004);
    if (uVar12 != 0) {
      do {
        uVar7 = PosInAreaJudge1('\x03',room,(uchar)iVar11,(short)(int)plyr_wrk.move_box.rot.x,
                                (short)(int)plyr_wrk.move_box.spd.z);
        if (uVar7 != '\0') {
          if (bVar6) {
            cam_no = (short  [2])
                     ((uint)cam_no & 0xffff |
                     (uint)*(ushort *)(*(int *)(*piVar10 + 0x7f8000) + 0x7f8000) << 0x10);
          }
          else {
            bVar6 = true;
            uVar1 = *(undefined2 *)(*(int *)(*piVar10 + 0x7f8000) + 0x7f8000);
            cam_no = (short  [2])CONCAT22(uVar1,uVar1);
          }
          iVar9 = 0;
          psVar8 = drm_cam_no;
          if ((drm_cam_no[0] == -1) || (drm_cam_no[0] != cam_no[1])) {
            do {
              iVar9 = iVar9 + 1;
              bVar3 = iVar9 < 10;
              psVar8 = psVar8 + 1;
              if (!bVar3) goto LAB_001baac8;
            } while ((*psVar8 == -1) || (*psVar8 != cam_no[1]));
            if (!bVar5) {
              cam_no = (short  [2])((uint)cam_no & 0xffff0000 | (uint)(ushort)cam_no[1]);
              goto LAB_001baac0;
            }
LAB_001baadc:
            if (!bVar3) goto LAB_001bab18;
          }
          else {
            if (bVar5) {
              bVar3 = true;
              goto LAB_001baadc;
            }
            cam_no = (short  [2])((uint)cam_no & 0xffff0000 | (uint)(ushort)cam_no[1]);
LAB_001baac0:
            bVar2 = false;
            bVar5 = true;
LAB_001baac8:
            bVar3 = iVar9 < 10;
            if (bVar5) goto LAB_001baadc;
          }
          if ((now_cam_no != -1) && (!bVar2)) {
            bVar2 = cam_no[1] == now_cam_no;
          }
        }
LAB_001bab18:
        iVar11 = iVar11 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar11 < (int)uVar12);
    }
    if (!bVar2) {
      now_cam_no = cam_no[0];
    }
  }
  return now_cam_no;
}

u_short CameraGetDoorCameraNo(u_short door_id0, u_short door_id1) {
	CAMERA4_DATA_POP *cdpp;
	u_int *addr_ui0;
	u_int *addr_ui1;
	int i;
	int j;
	u_short dr_id[2];
	u_char room_no;
	u_char data_num;
	
  byte bVar1;
  short sVar2;
  int iVar3;
  uchar room;
  uchar uVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short dr_id [2];
  uchar data_num;
  
  dr_id[0] = door_id0;
  dr_id[1] = door_id1;
  room = GetDataRoom('\x04',plyr_wrk.dop._13_1_);
  if ((long)(char)room != 0xff) {
    iVar8 = 0;
    iVar3 = *(int *)(*(int *)(map_wrk.dat_adr + 0x10) + (char)room * 4 + 0x7f8004);
    piVar6 = (int *)(iVar3 + 0x7f8004);
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x7f8000) + 0x7f8000);
    if (bVar1 != 0) {
      do {
        iVar3 = *(int *)(*piVar6 + 0x7f8000);
        if (*(uchar *)(iVar3 + 0x7f8002) == plyr_wrk.dop._13_1_) {
          iVar7 = 0;
          psVar5 = dr_id;
          do {
            sVar2 = *psVar5;
            if ((sVar2 != -1) &&
               (((sVar2 == *(short *)(iVar3 + 0x7f8004) || (sVar2 == *(short *)(iVar3 + 0x7f8006)))
                && (uVar4 = PosInAreaJudge1('\x04',room,(uchar)iVar8,
                                            (short)(int)plyr_wrk.move_box.rot.x,
                                            (short)(int)plyr_wrk.move_box.spd.z), uVar4 != '\0'))))
            {
              return *(short *)(iVar3 + 0x7f8000);
            }
            iVar7 = iVar7 + 1;
            psVar5 = psVar5 + 1;
          } while (iVar7 < 2);
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar8 < (int)(uint)bVar1);
    }
  }
  return -1;
}

static u_short CameraCheckDoorCameraNo(u_short door_id, u_char room_id) {
	CAMERA4_DATA_POP *cdpp;
	u_int *addr_ui0;
	u_int *addr_ui1;
	u_int *addr_ui2;
	int i;
	u_char room_no;
	u_char data_num;
	
  int iVar1;
  uchar room;
  uchar uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *addr_ui2;
  
  room = GetDataRoom('\x04',plyr_wrk.dop._13_1_);
  if ((long)(char)room != 0xff) {
    if (door_id == -1) {
      return -1;
    }
    iVar5 = *(int *)(*(int *)(map_wrk.dat_adr + 0x10) + (char)room * 4 + 0x7f8004);
    piVar3 = (int *)(iVar5 + 0x7f8004);
    uVar6 = (uint)*(byte *)(*(int *)(iVar5 + 0x7f8000) + 0x7f8000);
    iVar5 = 0;
    piVar4 = piVar3;
    if (uVar6 != 0) {
      do {
        iVar1 = *(int *)(*piVar4 + 0x7f8000);
        if ((*(uchar *)(iVar1 + 0x7f8002) == room_id) &&
           (((door_id == *(short *)(iVar1 + 0x7f8004) || (door_id == *(short *)(iVar1 + 0x7f8006)))
            && (uVar2 = PosInAreaJudge1('\x04',room,(uchar)iVar5,(short)(int)plyr_wrk.move_box.rot.x
                                        ,(short)(int)plyr_wrk.move_box.spd.z), uVar2 != '\0'))))
        goto LAB_001bad70;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < (int)uVar6);
    }
    iVar5 = 0;
    if (uVar6 != 0) {
      do {
        iVar1 = *(int *)(*piVar3 + 0x7f8000);
        if (((*(uchar *)(iVar1 + 0x7f8002) == room_id) &&
            ((door_id == *(short *)(iVar1 + 0x7f8004) || (door_id == *(short *)(iVar1 + 0x7f8006))))
            ) && (uVar2 = PosInAreaJudge1('\x04',room,(uchar)iVar5,
                                          (short)(int)plyr_wrk.move_box.rot.x,
                                          (short)(int)plyr_wrk.move_box.spd.z), uVar2 != '\0')) {
LAB_001bad70:
          return *(short *)(iVar1 + 0x7f8000);
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar5 < (int)uVar6);
    }
  }
  return -1;
}

static void PlayerHeightRenew() {
  uchar uVar1;
  float fVar2;
  
  uVar1 = HeightChangeJudge();
  if (uVar1 == '\0') {
    fVar2 = GetNowHeight();
    plyr_wrk.padding = (uint)(fVar2 + (float)(int)(short)room_wrk.room_height);
  }
  return;
}

static u_char GetRoomNum() {
	int *addr;
	
  return *(uchar *)(*(int *)(*(int *)map_wrk.dat_adr + 0x7f8000) + 0x7f8000);
}

static u_char GetRoomNumFloor(u_char floor) {
	int *addr;
	
  int *piVar1;
  
  piVar1 = (int *)GetFloorTopAddr(floor);
  return *(uchar *)(*(int *)(*piVar1 + 0x7f8000) + 0x7f8000);
}

static u_char GetDataNum(u_char map, u_char room) {
	int *addr;
	u_char data_room;
	
  uchar uVar1;
  
  uVar1 = GetDataRoom((uchar)((int)(char)map & 0xffU),room);
  if ((long)(char)uVar1 == 0xff) {
    uVar1 = '\0';
  }
  else {
    uVar1 = *(uchar *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + ((int)(char)map & 0xffU) * 4) +
                                         (char)uVar1 * 4 + 0x7f8004) + 0x7f8000) + 0x7f8000);
  }
  return uVar1;
}

static u_char RoomChangeJudge() {
  uchar uVar1;
  
  uVar1 = PosInAreaJudge0(room_wrk.room_no,(short)(int)plyr_wrk.move_box.rot.x,
                          (short)(int)plyr_wrk.move_box.spd.z);
  return uVar1;
}

static u_char CameraChangeJudgeEach(u_char cam_type, u_short cam_no) {
  uchar uVar1;
  
  gtmp_cam_type = cam_type;
  gtmp_cam_no = cam_no;
  gtmp_room = GetDataRoom(cam_type,plyr_wrk.dop._13_1_);
  uVar1 = PosInAreaJudge1(cam_type,gtmp_room,(uchar)cam_no,(short)(int)plyr_wrk.move_box.rot.x,
                          (short)(int)plyr_wrk.move_box.spd.z);
  return uVar1;
}

static u_char CameraChangeJudge() {
  uchar uVar1;
  
  uVar1 = GetDataRoom('\x01',plyr_wrk.dop._13_1_);
  uVar1 = PosInAreaJudge1('\x01',uVar1,room_wrk.camera_no,(short)(int)plyr_wrk.move_box.rot.x,
                          (short)(int)plyr_wrk.move_box.spd.z);
  return uVar1;
}

static u_char HeightChangeJudge() {
  uchar uVar1;
  
  uVar1 = GetDataRoom('\x05',plyr_wrk.dop._13_1_);
  uVar1 = PosInAreaJudge1('\x05',uVar1,room_wrk.height_no,(short)(int)plyr_wrk.move_box.rot.x,
                          (short)(int)plyr_wrk.move_box.spd.z);
  return uVar1;
}

static u_char GetNowRoom() {
	u_char i;
	
  uchar uVar1;
  byte room;
  
  room = 0;
  if (room_wrk.room_num != '\0') {
    do {
      uVar1 = PosInAreaJudge0(room,(short)(int)plyr_wrk.move_box.rot.x,
                              (short)(int)plyr_wrk.move_box.spd.z);
      if (uVar1 != '\0') {
        return room;
      }
      room = room + 1;
    } while (room < room_wrk.room_num);
  }
  return 0xff;
}

u_char GetRoomIdFromRoomNo(u_char map, u_char room_no) {
	int *addr0;
	u_char *addr1;
	int i;
	u_char room_id;
	u_char room_num;
	
  uchar uVar1;
  uchar *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = (long)(char)room_no & 0xff;
  if (((int)(char)map & 0xffU) == 10) {
    uVar1 = GetDoorRoomIdFromRoomNo((uchar)uVar5);
  }
  else {
    iVar4 = *(int *)(*(int *)(map_wrk.dat_adr + ((int)(char)map & 0xffU) * 4) + 0x7f8000);
    uVar3 = (ulong)*(byte *)(iVar4 + 0x7f8000);
    puVar2 = (uchar *)(iVar4 + 0x7f8001);
    uVar1 = 0xff;
    if (uVar3 != 0) {
      if (uVar5 == 0) {
        uVar1 = *puVar2;
      }
      else {
        iVar4 = 1;
        while( true ) {
          puVar2 = puVar2 + 1;
          uVar1 = 0xff;
          if ((long)uVar3 <= (long)iVar4) break;
          if ((long)iVar4 == uVar5) {
            return *puVar2;
          }
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  return uVar1;
}

u_char GetRoomIdFromRoomNoFloor(u_char map, u_char room_no, u_char floor) {
	int *addr0;
	u_char *addr1;
	int i;
	u_char room_id;
	u_char room_num;
	
  uchar uVar1;
  int iVar2;
  ulong uVar3;
  uchar *puVar4;
  ulong uVar5;
  
  uVar5 = (long)(char)room_no & 0xff;
  if (((int)(char)map & 0xffU) == 10) {
    uVar1 = GetDoorRoomIdFromRoomNoFloor((uchar)uVar5,floor);
  }
  else {
    iVar2 = GetFloorTopAddr(floor);
    iVar2 = *(int *)(*(int *)(iVar2 + ((int)(char)map & 0xffU) * 4) + 0x7f8000);
    uVar3 = (ulong)*(byte *)(iVar2 + 0x7f8000);
    puVar4 = (uchar *)(iVar2 + 0x7f8001);
    uVar1 = 0xff;
    if (uVar3 != 0) {
      if (uVar5 == 0) {
        uVar1 = *puVar4;
      }
      else {
        iVar2 = 1;
        while( true ) {
          puVar4 = puVar4 + 1;
          uVar1 = 0xff;
          if ((long)uVar3 <= (long)iVar2) break;
          if ((long)iVar2 == uVar5) {
            return *puVar4;
          }
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return uVar1;
}

static u_char GetDoorRoomIdFromRoomNo(u_char room_no) {
	u_char *addr1;
	int i;
	u_char room_num;
	u_char room_id;
	
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar1 = GetDoorRoomNumP();
  bVar4 = 0xff;
  pbVar3 = pbVar1 + 1;
  if ((ulong)*pbVar1 != 0) {
    if (((long)(char)room_no & 0xffU) == 0) {
      bVar4 = *pbVar3;
    }
    else {
      iVar2 = 1;
      while( true ) {
        pbVar3 = pbVar3 + 1;
        if ((long)(ulong)*pbVar1 <= (long)iVar2) break;
        if (((long)(char)room_no & 0xffU) == (long)iVar2) {
          return *pbVar3;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return bVar4;
}

static u_char GetDoorRoomIdFromRoomNoFloor(u_char room_no, u_char floor) {
	u_char *addr1;
	int i;
	u_char room_num;
	u_char room_id;
	
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar1 = GetDoorRoomNumPFloor(floor);
  bVar4 = 0xff;
  pbVar3 = pbVar1 + 1;
  if ((ulong)*pbVar1 != 0) {
    if (((long)(char)room_no & 0xffU) == 0) {
      bVar4 = *pbVar3;
    }
    else {
      iVar2 = 1;
      while( true ) {
        pbVar3 = pbVar3 + 1;
        if ((long)(ulong)*pbVar1 <= (long)iVar2) break;
        if (((long)(char)room_no & 0xffU) == (long)iVar2) {
          return *pbVar3;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return bVar4;
}

u_char GetDataRoom(u_char map, u_char room_id) {
	int *addr0;
	u_char *addr1;
	u_char i;
	u_char room_num;
	
  byte bVar1;
  int iVar2;
  uchar uVar3;
  byte bVar4;
  uchar *puVar5;
  byte bVar6;
  
  if (((int)(char)map & 0xffU) == 10) {
    uVar3 = GetDoorDataRoom(room_id);
  }
  else {
    iVar2 = *(int *)(*(int *)(map_wrk.dat_adr + ((int)(char)map & 0xffU) * 4) + 0x7f8000);
    bVar1 = *(byte *)(iVar2 + 0x7f8000);
    puVar5 = (uchar *)(iVar2 + 0x7f8001);
    bVar6 = 0;
    if (bVar1 != 0) {
      do {
        bVar4 = bVar6 + 1;
        if (room_id == *puVar5) {
          return bVar6;
        }
        puVar5 = puVar5 + 1;
        bVar6 = bVar4;
      } while (bVar4 < bVar1);
    }
    uVar3 = 0xff;
  }
  return uVar3;
}

static u_char GetDoorDataRoom(u_char room_id) {
	u_char *addr1;
	u_char i;
	u_char room_num;
	
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = GetDoorRoomNumP();
  bVar3 = 0;
  bVar1 = *pbVar2;
  if (bVar1 != 0) {
    do {
      pbVar2 = pbVar2 + 1;
      if (room_id == *pbVar2) {
        return bVar3;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < bVar1);
  }
  return 0xff;
}

static u_short GetNowCameraEach(u_char cam_type, u_char cam_num, u_char *rm_cam_no) {
	u_char i;
	u_char room;
	int *addr;
	
  uchar room;
  uchar uVar1;
  uchar map;
  uint uVar2;
  
  uVar2 = 0;
  map = (uchar)((int)(char)cam_type & 0xffU);
  room = GetDataRoom(map,plyr_wrk.dop._13_1_);
  if (((int)(char)cam_num & 0xffU) != 0) {
    do {
      uVar1 = PosInAreaJudge1(map,room,(uchar)uVar2,(short)(int)plyr_wrk.move_box.rot.x,
                              (short)(int)plyr_wrk.move_box.spd.z);
      if (uVar1 != '\0') {
        *rm_cam_no = (uchar)uVar2;
        return *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr +
                                                             ((int)(char)cam_type & 0xffU) * 4) +
                                                     (char)room * 4 + 0x7f8004) + uVar2 * 4 +
                                           0x7f8004) + 0x7f8000) + 0x7f8000);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < ((int)(char)cam_num & 0xffU));
  }
  *rm_cam_no = 0xff;
  return -1;
}

static u_short GetNowCamera() {
	u_char i;
	u_char room;
	int *addr;
	
  uchar room;
  uchar uVar1;
  uint uVar2;
  
  uVar2 = 0;
  room = GetDataRoom('\x01',plyr_wrk.dop._13_1_);
  if (room_wrk.camera_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\x01',room,(uchar)uVar2,(short)(int)plyr_wrk.move_box.rot.x,
                              (short)(int)plyr_wrk.move_box.spd.z);
      if (uVar1 != '\0') {
        room_wrk.camera_no = (uchar)uVar2;
        return *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 4) + (char)room * 4
                                                    + 0x7f8004) + uVar2 * 4 + 0x7f8004) + 0x7f8000)
                         + 0x7f8000);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < room_wrk.camera_num);
  }
  return -1;
}

static float GetNowHeight() {
	u_char i;
	u_char room;
	int *addr;
	
  uchar room;
  uchar uVar1;
  uint uVar2;
  
  uVar2 = 0;
  room = GetDataRoom('\x05',plyr_wrk.dop._13_1_);
  if (room_wrk.height_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\x05',room,(uchar)uVar2,(short)(int)plyr_wrk.move_box.rot.x,
                              (short)(int)plyr_wrk.move_box.spd.z);
      if (uVar1 != '\0') {
        room_wrk.height_no = (uchar)uVar2;
        return (float)(int)*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x14) +
                                                                 (char)room * 4 + 0x7f8004) +
                                                        uVar2 * 4 + 0x7f8004) + 0x7f8000) + 0x7f8000
                                     );
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < room_wrk.height_num);
  }
  return 0.0;
}

int GetPointRoomNo(u_short pos_x, u_short pos_z) {
	int i;
	
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (room_wrk.room_num != '\0') {
    uVar2 = 0;
    do {
      uVar1 = PosInAreaJudge0((uchar)uVar2,pos_z,pos_x);
      if (uVar1 != '\0') {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xff;
    } while ((int)uVar3 < (int)(uint)room_wrk.room_num);
  }
  return 0xff;
}

int GetPointRoomNoFloor(u_short pos_x, u_short pos_z, u_char floor) {
	int i;
	u_char room_num;
	
  uchar uVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar1 = GetRoomNumFloor(floor);
  if (0 < (long)(char)uVar1) {
    uVar3 = 0;
    do {
      uVar2 = PosInAreaJudge0Floor((uchar)uVar3,pos_z,pos_x,floor);
      if (uVar2 != '\0') {
        GetFloorTopAddr(floor);
        return (int)uVar4;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = uVar4 & 0xff;
    } while ((long)uVar4 < (long)(char)uVar1);
  }
  return 0xff;
}

int GetPointRoom(u_short pos_x, u_short pos_z) {
	int *addr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)map_wrk.dat_adr;
  iVar2 = GetPointRoomNo(pos_x,pos_z);
  return (int)*(byte *)(*(int *)(iVar1 + 0x7f8000) + iVar2 + 0x7f8001);
}

float GetPointHeight(u_short pos_x, u_short pos_z) {
	u_char i;
	u_char room;
	int *addr;
	
  uchar room;
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  GetPointRoom(pos_x,pos_z);
  uVar2 = GetPointRoomNo(pos_x,pos_z);
  room = GetDataRoom('\x05',*(uchar *)(*(int *)(*(int *)map_wrk.dat_adr + 0x7f8000) + (uVar2 & 0xff)
                                      + 0x7f8001));
  if (room_wrk.height_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\x05',room,(uchar)uVar3,pos_z,pos_x);
      if (uVar1 != '\0') {
        room_wrk.height_no = (uchar)uVar3;
        return (float)((int)*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x14) +
                                                                  (char)room * 4 + 0x7f8004) +
                                                         uVar3 * 4 + 0x7f8004) + 0x7f8000) +
                                      0x7f8000) +
                      (int)*(short *)(*(int *)(*(int *)(*(int *)map_wrk.dat_adr + (char)room * 4 +
                                                       0x7f8004) + 0x7f8000) + 0x7f8006));
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < room_wrk.height_num);
  }
  return 0.0;
}

static void GetPlayerRoom(u_char room) {
	int *addr;
	
  if (((int)(char)room & 0xffU) != 0xff) {
    plyr_wrk.dop._14_1_ = plyr_wrk.dop._13_1_;
    plyr_wrk.dop._13_1_ =
         *(undefined *)
          (*(int *)(*(int *)map_wrk.dat_adr + 0x7f8000) + ((int)(char)room & 0xffU) + 0x7f8001);
  }
  return;
}

static void GetRoomDispPos(u_char room) {
	int *addr;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)(char)room & 0xff;
  if (uVar2 != 0xff) {
    room_wrk.disp_no[1] = room_wrk.disp_no[0];
    room_wrk.pos[1].y = room_wrk.pos[0].y;
    room_wrk.pos[1].z = room_wrk.pos[0].z;
    room_wrk.pos[1].x = room_wrk.pos[0].x;
    map_wrk.now_room = *(uchar *)(*(int *)(*(int *)map_wrk.dat_adr + 0x7f8000) + uVar2 + 0x7f8001);
    map_wrk.next_room = room_wrk.disp_no[0];
    iVar1 = *(int *)(((int *)(*(int *)map_wrk.dat_adr + 0x7f8000))[uVar2 + 1] + 0x7f8000);
    room_wrk.pos[0].x = (float)(uint)*(ushort *)(iVar1 + 0x7f8000);
    room_wrk.room_height = *(ushort *)(iVar1 + 0x7f8006);
    room_wrk.pos[0].z = (float)(uint)*(ushort *)(iVar1 + 0x7f8004);
    room_wrk.pos[0].y = (float)(int)*(short *)(iVar1 + 0x7f8002);
    room_wrk.disp_no[0] = map_wrk.now_room;
  }
  return;
}

u_char PosInAreaJudge0(u_char room, u_short pos_x, u_short pos_y) {
	int i;
	int *addr;
	int *addr_bak;
	u_char sq_num;
	
  byte bVar1;
  uchar uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (((int)(char)room & 0xffU) == 0xff) {
    uVar2 = '\0';
  }
  else {
    iVar5 = 0;
    piVar4 = (int *)(*(int *)(*(int *)map_wrk.dat_adr + ((int)(char)room & 0xffU) * 4 + 0x7f8004) +
                    0x7f8000);
    iVar3 = *piVar4;
    bVar1 = *(byte *)(iVar3 + 0x7f8008);
    if (bVar1 == 0) {
LAB_001bbe08:
      uVar2 = '\0';
    }
    else {
      while( true ) {
        uVar2 = PosInAreaJudgeSub((int *)(piVar4[iVar5 + 1] + 0x7f8000),pos_x,pos_y,
                                  *(uchar *)(iVar3 + iVar5 + 0x7f8009));
        iVar5 = iVar5 + 1;
        if (uVar2 != '\0') break;
        if ((int)(uint)bVar1 <= iVar5) goto LAB_001bbe08;
        iVar3 = *piVar4;
      }
      uVar2 = '\x01';
    }
  }
  return uVar2;
}

static u_char PosInAreaJudge0Floor(u_char room, u_short pos_x, u_short pos_y, u_char floor) {
	int i;
	int *addr;
	int *addr_bak;
	u_char sq_num;
	
  byte bVar1;
  uchar uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = '\0';
  if (floor_exist[ingame_wrk.msn_no][(int)(char)floor & 0xffU] != '\0') {
    if (((int)(char)room & 0xffU) == 0xff) {
      uVar2 = '\0';
    }
    else {
      iVar5 = 0;
      piVar3 = (int *)GetFloorTopAddr((uchar)((int)(char)floor & 0xffU));
      piVar3 = (int *)(*(int *)(*piVar3 + ((int)(char)room & 0xffU) * 4 + 0x7f8004) + 0x7f8000);
      iVar4 = *piVar3;
      bVar1 = *(byte *)(iVar4 + 0x7f8008);
      if (bVar1 == 0) {
LAB_001bbf40:
        uVar2 = '\0';
      }
      else {
        while( true ) {
          uVar2 = PosInAreaJudgeSub((int *)(piVar3[iVar5 + 1] + 0x7f8000),pos_x,pos_y,
                                    *(uchar *)(iVar4 + iVar5 + 0x7f8009));
          iVar5 = iVar5 + 1;
          if (uVar2 != '\0') break;
          if ((int)(uint)bVar1 <= iVar5) goto LAB_001bbf40;
          iVar4 = *piVar3;
        }
        uVar2 = '\x01';
      }
    }
  }
  return uVar2;
}

u_char PosInAreaJudge1(u_char map, u_char room, u_char data, u_short pos_x, u_short pos_y) {
	int i;
	int *addr;
	int *addr_bak;
	u_char sq_num;
	u_char ofs[13];
	
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uchar ofs [13];
  
  puVar1 = ofs + 7;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | DAT_0034f570 >> (7 - uVar6) * 8;
  ofs._0_8_ = DAT_0034f570;
  puVar1 = ofs + 0xb;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | DAT_0034f578 >> (3 - uVar6) * 8;
  ofs._8_4_ = DAT_0034f578;
  ofs[12] = DAT_0034f57c;
  if (((int)(char)room & 0xffU) == 0xff) {
    uVar2 = '\0';
  }
  else {
    iVar5 = 0;
    piVar4 = (int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + ((int)(char)map & 0xffU) * 4) +
                                       ((int)(char)room & 0xffU) * 4 + 0x7f8004) +
                              ((int)(char)data & 0xffU) * 4 + 0x7f8004) + 0x7f8000);
    iVar3 = *piVar4;
    uVar6 = (uint)*(byte *)((uint)ofs[(int)(char)map & 0xffU] + iVar3 + 0x7f8000);
    if (uVar6 == 0) {
LAB_001bc0b8:
      uVar2 = '\0';
    }
    else {
      while( true ) {
        uVar2 = PosInAreaJudgeSub((int *)(piVar4[iVar5 + 1] + 0x7f8000),pos_x,pos_y,
                                  *(uchar *)(iVar3 + iVar5 + (uint)ofs[(int)(char)map & 0xffU] +
                                            0x7f8001));
        iVar5 = iVar5 + 1;
        if (uVar2 != '\0') break;
        if ((int)uVar6 <= iVar5) goto LAB_001bc0b8;
        iVar3 = *piVar4;
      }
      uVar2 = '\x01';
    }
  }
  return uVar2;
}

u_char MapHitCheck(u_short pos_x, u_short pos_y, u_char room_id) {
	int i;
	u_char room_no;
	
  uchar room;
  uchar uVar1;
  int iVar2;
  
  iVar2 = 0;
  room = GetDataRoom('\x06',room_id);
  if (room_wrk.hit_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\x06',room,(uchar)iVar2,pos_x,pos_y);
      if (uVar1 != '\0') {
        return '\x01';
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)room_wrk.hit_num);
  }
  return '\0';
}

u_char MapHitCheckAll(u_short pos_x, u_short pos_y, u_char room_id) {
	u_char hit_flg;
	
  uchar uVar1;
  bool bVar2;
  
  uVar1 = MapHitCheck(pos_x,pos_y,room_id);
  bVar2 = uVar1 != '\0';
  if (!bVar2) {
    uVar1 = FurnHitCheck2(pos_x,pos_y,room_id);
    bVar2 = uVar1 != '\0';
    if (!bVar2) {
      uVar1 = DoorHitCheck2(pos_x,pos_y,room_id);
      bVar2 = uVar1 != '\0';
    }
  }
  return bVar2;
}

void PlyrHitRot(float *pos, float *dst, float *go_rot, float *no_rot, u_char div, u_char room_id) {
	sceVu0FVECTOR rpos;
	float chk_rot;
	
  uchar uVar1;
  int iVar2;
  double arg_a;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float rad;
  float rpos [4];
  
  rad = (*go_rot + *no_rot) * 0.5;
  arg_a = (double)(*go_rot - *no_rot);
  iVar2 = dpcmp((long)arg_a,0);
  if (iVar2 < 0) {
    arg_a = 0.0 - arg_a;
  }
  iVar2 = dpcmp((long)arg_a,_DAT_0034f580);
  if (-1 < iVar2) {
    fVar4 = SgCosf(rad);
    fVar5 = SgCosf(rad);
    fVar6 = SgSinf(rad);
    fVar10 = *dst;
    fVar3 = dst[2];
    fVar7 = SgCosf(rad);
    fVar8 = SgSinf(rad);
    fVar9 = SgCosf(rad);
    uVar1 = MapHitCheckAll((short)(int)(fVar7 * (-*dst * fVar8 + dst[2] * fVar9) + pos[2]),
                           (short)(int)(fVar4 * (fVar10 * fVar5 + fVar3 * fVar6) + *pos),room_id);
    if (uVar1 == '\0') {
      *go_rot = rad;
    }
    else {
      *no_rot = rad;
    }
    PlyrHitRot(pos,dst,go_rot,no_rot,div,room_id);
  }
  return;
}

u_char PlyrMapHitCheck(float *dst, float *pos, u_char div, u_char room_id) {
	sceVu0FVECTOR rpos;
	float chk_rot;
	float chk_rotbk[2];
	float ok_rot[2];
	int i;
	int j;
	u_char div_bk;
	u_char ng_flg[2];
	
  uint uVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float rpos [4];
  float chk_rotbk [2];
  float ok_rot [2];
  uchar ng_flg [2];
  
  uVar9 = (int)(char)div & 0xff;
  uVar2 = MapHitCheckAll((short)(int)(pos[2] + dst[2]),(short)(int)(*pos + *dst),room_id);
  uVar8 = 0;
  if (uVar2 == '\0') {
    uVar2 = '\0';
  }
  else {
    if (0 < (int)(uVar9 - 1)) {
      uVar1 = 1;
      uVar3 = 0;
      do {
        uVar5 = uVar1;
        uVar2 = MapHitCheckAll((short)(int)((pos[2] + dst[2] * (float)uVar5) / (float)uVar9),
                               (short)(int)((*pos + *dst * (float)uVar5) / (float)uVar9),room_id);
        if (uVar2 != '\0') {
          uVar8 = uVar3 & 0xff;
          break;
        }
        uVar1 = uVar5 + 1;
        uVar3 = uVar5;
      } while ((int)uVar5 < (int)(uVar9 - 1));
    }
    uVar2 = '\x01';
    if (uVar8 == 0) {
      iVar7 = 0;
      puVar6 = ng_flg;
      do {
        *puVar6 = '\0';
        chk_rotbk[1] = DAT_00355d90;
        if (iVar7 != 0) {
          chk_rotbk[1] = DAT_00355d94;
        }
        chk_rotbk[0] = 0.0;
        fVar14 = chk_rotbk[1];
        fVar11 = SgCosf(chk_rotbk[1]);
        fVar12 = SgSinf(fVar14);
        fVar15 = *dst;
        fVar10 = dst[2];
        fVar13 = SgSinf(fVar14);
        fVar14 = SgCosf(fVar14);
        uVar2 = MapHitCheckAll((short)(int)(-*dst * fVar13 + dst[2] * fVar14 + pos[2]),
                               (short)(int)(fVar15 * fVar11 + fVar10 * fVar12 + *pos),room_id);
        if (uVar2 == '\0') {
          iVar4 = 6;
          do {
            fVar14 = (chk_rotbk[0] + chk_rotbk[1]) * 0.5;
            fVar11 = SgCosf(fVar14);
            fVar12 = SgSinf(fVar14);
            fVar10 = *dst;
            fVar16 = dst[2];
            fVar13 = SgSinf(fVar14);
            fVar15 = SgCosf(fVar14);
            uVar2 = MapHitCheckAll((short)(int)(-*dst * fVar13 + dst[2] * fVar15 + pos[2]),
                                   (short)(int)(fVar10 * fVar11 + fVar16 * fVar12 + *pos),room_id);
            if (uVar2 != '\0') {
              chk_rotbk[0] = fVar14;
              fVar14 = chk_rotbk[1];
            }
            chk_rotbk[1] = fVar14;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
          ok_rot[iVar7] = chk_rotbk[1];
        }
        else {
          ok_rot[iVar7] = DAT_00355d98;
          *puVar6 = '\x01';
        }
        iVar7 = iVar7 + 1;
        puVar6 = ng_flg + iVar7;
      } while (iVar7 < 2);
      if (ABS(ok_rot[0]) <= ABS(ok_rot[1])) {
        if ((ng_flg[0] == ng_flg[1]) && (ng_flg[0] == '\x01')) {
          dst[2] = 0.0;
          *dst = 0.0;
          return '\x01';
        }
      }
      else {
        ok_rot[0] = ok_rot[1];
      }
      fVar14 = SgCosf(ok_rot[0]);
      fVar10 = SgCosf(ok_rot[0]);
      fVar11 = SgSinf(ok_rot[0]);
      fVar14 = fVar14 * (*dst * fVar10 + dst[2] * fVar11);
      fVar10 = SgCosf(ok_rot[0]);
      fVar11 = SgSinf(ok_rot[0]);
      fVar12 = SgCosf(ok_rot[0]);
      fVar10 = fVar10 * (-*dst * fVar11 + dst[2] * fVar12);
      uVar2 = MapHitCheckAll((short)(int)(fVar10 + pos[2]),(short)(int)(fVar14 + *pos),room_id);
      if (uVar2 == '\0') {
        *dst = fVar14;
        dst[2] = fVar10;
      }
      else {
        dst[2] = 0.0;
        *dst = 0.0;
      }
      uVar2 = '\x01';
    }
    else {
      dst[2] = (dst[2] * (float)uVar8) / (float)uVar9;
      *dst = (*dst * (float)uVar8) / (float)uVar9;
    }
  }
  return uVar2;
}

int PlyrMapHitMoveOfs(float *dst, float *pos, u_char room, u_char flr_room) {
	int i;
	int j;
	int k;
	int x_ofs;
	int z_ofs;
	float lng_cmp;
	sceVu0FVECTOR cpos;
	sceVu0FVECTOR dpos;
	
  int iVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float cpos [4];
  float dpos [4];
  int x_ofs;
  int z_ofs;
  
  dpos[0] = *pos + *dst;
  dpos[1] = pos[1] + dst[1];
  dpos[2] = pos[2] + dst[2];
  x_ofs = 0;
  z_ofs = 0;
  fVar10 = GetDistV(dpos,pos);
  iVar8 = 0;
  do {
    iVar9 = iVar8 + 1;
    iVar6 = 0;
    do {
      cpos[1] = pos[1];
      cpos[0] = (*pos + (float)iVar8) - 5.0;
      cpos[2] = (pos[2] + (float)iVar6) - 5.0;
      iVar7 = iVar6 + 1;
      for (uVar5 = 0; uVar4 = (uint)room_wrk.hit_num, (int)uVar5 < (int)uVar4; uVar5 = uVar5 + 1) {
        uVar3 = PosInAreaJudge1('\x06',flr_room,(uchar)uVar5,(short)(int)cpos[2],(short)(int)cpos[0]
                               );
        if (uVar3 != '\0') {
          uVar4 = (uint)room_wrk.hit_num;
          break;
        }
      }
      iVar1 = x_ofs;
      iVar2 = z_ofs;
      if (uVar5 == uVar4) {
        fVar11 = GetDistV(dpos,cpos);
        iVar1 = iVar8 + -5;
        iVar2 = iVar6 + -5;
        if (fVar10 <= fVar11) {
          iVar1 = x_ofs;
          iVar2 = z_ofs;
        }
      }
      z_ofs = iVar2;
      x_ofs = iVar1;
      iVar6 = iVar7;
    } while (iVar7 < 0xb);
    iVar8 = iVar9;
    if (10 < iVar9) {
      *dst = (float)x_ofs;
      dst[2] = (float)z_ofs;
      printf("x_ofs = %d   z_ofs = %d \n");
      return 0;
    }
  } while( true );
}

static void GetNowOpenEvent() {
	u_char i;
	u_char room;
	u_char cnt;
	int *addr;
	
  uchar room;
  uchar uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  if (ev_wrk.mode == 0) {
    uVar3 = 0;
    do {
      pbVar2 = ev_wrk.pos_req + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      *pbVar2 = 0xff;
    } while (uVar3 < 0x10);
    uVar4 = 0;
    uVar3 = 0;
    room = GetDataRoom('\a',plyr_wrk.dop._13_1_);
    if (room_wrk.ev_num != '\0') {
      do {
        uVar1 = PosInAreaJudge1('\a',room,(uchar)uVar3,(short)(int)plyr_wrk.move_box.rot.x,
                                (short)(int)plyr_wrk.move_box.spd.z);
        if (uVar1 != '\0') {
          pbVar2 = ev_wrk.pos_req + uVar4;
          uVar4 = uVar4 + 1 & 0xff;
          *pbVar2 = *(byte *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x1c) +
                                                         (char)room * 4 + 0x7f8004) + uVar3 * 4 +
                                               0x7f8004) + 0x7f8000) + 0x7f8000);
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < room_wrk.ev_num);
    }
  }
  return;
}

static void GetNowOpenFindAct() {
	u_char i;
	u_char room;
	u_char cnt;
	int *addr;
	
  uchar room;
  uchar uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  if (find_wrk.mode == '\0') {
    uVar3 = 0;
    do {
      psVar2 = find_wrk.pos_req + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      *psVar2 = -1;
    } while (uVar3 < 10);
    uVar3 = 0;
    uVar4 = 0;
    room = GetDataRoom('\t',plyr_wrk.dop._13_1_);
    if (room_wrk.find_num != '\0') {
      do {
        uVar1 = PosInAreaJudge1('\t',room,(uchar)uVar4,(short)(int)plyr_wrk.move_box.rot.x,
                                (short)(int)plyr_wrk.move_box.spd.z);
        if (uVar1 != '\0') {
          find_wrk.pos_req[uVar3] =
               *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x24) +
                                                     (char)room * 4 + 0x7f8004) + uVar4 * 4 +
                                           0x7f8004) + 0x7f8000) + 0x7f8000);
          uVar3 = uVar3 + 1 & 0xff;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < room_wrk.find_num);
    }
  }
  return;
}

static void GetNowPlayerMoveMotion() {
  plyr_wrk.move_mot = GetPointMoveMotion(&plyr_wrk.move_box.spd.z,plyr_wrk.dop._13_1_);
  return;
}

u_char GetPointMoveMotion(float *p, u_char no) {
	int *addr;
	u_char i;
	u_char room;
	u_char mot;
	
  uchar room;
  uchar uVar1;
  uint uVar2;
  uchar uVar3;
  float fVar4;
  
  uVar3 = 0xff;
  uVar2 = 0;
  room = GetDataRoom('\f',no);
  if (room_wrk.mot_num != '\0') {
    fVar4 = p[2];
    while( true ) {
      uVar1 = PosInAreaJudge1('\f',room,(uchar)uVar2,(short)(int)fVar4,(short)(int)*p);
      if (uVar1 != '\0') {
        uVar3 = *(uchar *)(*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x30) +
                                                      (char)room * 4 + 0x7f8004) + uVar2 * 4 +
                                            0x7f8004) + 0x7f8000) + 0x7f8000);
      }
      uVar2 = uVar2 + 1 & 0xff;
      if (room_wrk.mot_num <= uVar2) break;
      fVar4 = p[2];
    }
  }
  return uVar3;
}

u_char MapCameraCdivideAB(u_short data_no, u_short *xmin, u_short *xmax, u_short *ymin, u_short *ymax, u_char cam_type) {
	int i;
	int x_cnt;
	int *addr;
	int *dat_addr;
	int cmpx[2];
	int cmpy[2];
	
  short sVar1;
  uchar uVar2;
  uchar uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int cmpx [2];
  int cmpy [2];
  
  piVar9 = cmpx;
  uVar2 = GetDataRoom((uchar)((int)(char)cam_type & 0xffU),plyr_wrk.dop._13_1_);
  uVar3 = 0xff;
  if ((long)(char)uVar2 != 0xff) {
    iVar7 = *(int *)(*(int *)(map_wrk.dat_adr + ((int)(char)cam_type & 0xffU) * 4) + (char)uVar2 * 4
                    + 0x7f8004);
    iVar5 = iVar7 + 0x7f8000;
    if (((long)data_no & 0xffffU) !=
        (long)*(short *)(*(int *)(*(int *)(iVar7 + 0x7f8004) + 0x7f8000) + 0x7f8000)) {
      iVar6 = 0;
      iVar7 = iVar5;
      do {
        iVar6 = iVar6 + 4;
        piVar8 = (int *)(iVar7 + 8);
        iVar7 = iVar7 + 4;
      } while (((long)data_no & 0xffffU) !=
               (long)*(short *)(*(int *)(*piVar8 + 0x7f8000) + 0x7f8000));
      iVar5 = iVar5 + iVar6;
    }
    iVar6 = 0;
    iVar7 = 0;
    piVar8 = cmpy;
    psVar4 = (short *)(*(int *)(*(int *)(iVar5 + 4) + 0x7f8004) + 0x7f8000);
    do {
      sVar1 = psVar4[1];
      if (sVar1 == 0) {
        sVar1 = *psVar4;
        if (sVar1 == 0) {
          *piVar8 = 0;
        }
        else {
          if (sVar1 == 0) {
            trap(7);
          }
          iVar5 = *(int *)(psVar4 + 2) / (int)sVar1;
          *piVar8 = iVar5;
          if (iVar5 < 0) {
            *piVar8 = -iVar5;
          }
        }
        piVar8 = piVar8 + 1;
      }
      else {
        if (1 < iVar6) {
          return '\0';
        }
        if (sVar1 == 0) {
          trap(7);
        }
        iVar5 = *(int *)(psVar4 + 2) / (int)sVar1;
        *piVar9 = iVar5;
        if (iVar5 < 0) {
          *piVar9 = -iVar5;
        }
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      psVar4 = psVar4 + 4;
    } while (iVar7 < 4);
    if (cmpx[1] < cmpx[0]) {
      *xmax = (short)cmpx[0];
      *xmin = (short)cmpx[1];
    }
    else {
      *xmin = (short)cmpx[0];
      *xmax = (short)cmpx[1];
    }
    if (cmpy[1] < cmpy[0]) {
      *ymax = (short)cmpy[0];
      *ymin = (short)cmpy[1];
    }
    else {
      *ymin = (short)cmpy[0];
      *ymax = (short)cmpy[1];
    }
    uVar3 = '\x01';
  }
  return uVar3;
}

void NakasuHazeSet() {
	int i;
	u_char on_flg;
	
  bool bVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  
  bVar1 = false;
  uVar2 = '\x16';
  iVar4 = 0;
  uVar3 = room_wrk.disp_no[0];
  while (uVar2 != uVar3) {
    if (1 < iVar4 + 1) goto LAB_001bd11c;
    uVar3 = '\x16';
    uVar2 = room_wrk.disp_no[iVar4 + 1];
    iVar4 = iVar4 + 1;
  }
  bVar1 = true;
LAB_001bd11c:
  if (bVar1) {
    SetHaze_Pond_SW(1);
    return;
  }
  SetHaze_Pond_SW(0);
  return;
}

void DebugMemoryCheck(u_char *addr, int size) {
	int i;
	
  if (0 < size) {
    do {
      size = size + -1;
    } while (size != 0);
  }
  return;
}

static void MapSetFloorSeNo() {
	int *addr_si;
	int i;
	u_char room;
	u_char data_no;
	
  ushort uVar1;
  uchar room;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  
  room = GetDataRoom('\b',plyr_wrk.dop._13_1_);
  for (uVar3 = 0; uVar4 = 0xff, (int)uVar3 < (int)(uint)room_wrk.se_num; uVar3 = uVar3 + 1) {
    uVar4 = uVar3 & 0xff;
    uVar2 = PosInAreaJudge1('\b',room,(uchar)uVar4,(short)(int)plyr_wrk.move_box.rot.x,
                            (short)(int)plyr_wrk.move_box.spd.z);
    if (uVar2 != '\0') break;
  }
  if (uVar4 != 0xff) {
    uVar1 = *(ushort *)
             (*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x20) +
                                        (char)room * 4 + 0x7f8004) + uVar4 * 4 + 0x7f8004) +
                      0x7f8000) + 0x7f8000);
    if (uVar1 == 1) {
      plyr_wrk.dop._12_1_ = 0x2d;
    }
    else if (uVar1 < 2) {
      if (uVar1 == 0) {
        plyr_wrk.dop._12_1_ = 0x2c;
      }
    }
    else if (uVar1 == 2) {
      plyr_wrk.dop._12_1_ = 0x2e;
    }
  }
  return;
}

int GetRoomPos(u_char room_no, float *room_pos) {
	u_char dat_room;
	int *addr;
	
  short sVar1;
  ushort uVar2;
  int iVar3;
  uchar room_no_00;
  uchar uVar4;
  ulong uVar5;
  
  uVar5 = (long)(char)room_no & 0xff;
  room_no_00 = GetDataRoom('\0',(uchar)uVar5);
  uVar4 = GetRoomIdFromRoomNo('\0',room_no_00);
  if ((long)(char)uVar4 == uVar5) {
    iVar3 = *(int *)(*(int *)(*(int *)map_wrk.dat_adr + (char)room_no_00 * 4 + 0x7f8004) + 0x7f8000)
    ;
    uVar2 = *(ushort *)(iVar3 + 0x7f8004);
    *room_pos = (float)(uint)*(ushort *)(iVar3 + 0x7f8000);
    sVar1 = *(short *)(iVar3 + 0x7f8002);
    room_pos[2] = (float)(uint)uVar2;
    room_pos[1] = (float)(int)sVar1;
  }
  return (uint)((long)(char)uVar4 != uVar5);
}
