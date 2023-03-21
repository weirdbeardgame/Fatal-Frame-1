// STATUS: NOT STARTED

static DOOR_CONTE dorcon;

void DoorOpenConteInit() {
  memset(&dorcon,0,0x1c);
  dorcon.mtn_no = TargetDoorKindChk();
  if (dorcon.mtn_no == 0xff) {
    dorcon.state = DR_CNT_IDOL;
  }
  else {
    DoorConteInit();
    PlyrPosAdj(dorcon.mtn_no,'\0');
    SetPlyrAnime(*(uchar *)((uint)dorcon.mtn_no * 0x10 + 0x336a82),'\0');
    SetDoorOpenCameraNo();
    dorcon.state = DR_CNT_OPEN_STRT;
  }
  return;
}

u_char DoorOpenConte() {
	u_char anm;
	static int i = 0;
	static u_char one_flg = 0;
	
  uchar uVar1;
  
  if (dorcon.state == DR_CNT_IDOL) {
    uVar1 = 0xff;
  }
  else {
    switch(dorcon.state) {
    case DR_CNT_OPEN_STRT:
      if ((door_open_ctrl.open[0] == '\x01') || (door_open_ctrl.open[1] == '\x01')) {
        dorcon.state = DR_CNT_DOR_OPEN;
        one_flg_121 = '\x01';
      }
      break;
    case DR_CNT_DOR_OPEN:
      if (one_flg_121 != '\0') {
        DoorMoveStart(dorcon.mtn_no,'\0');
      }
      one_flg_121 = '\0';
      if ((plyr_wrk.sta & 0x20) != 0) {
        uVar1 = (&DAT_00336a86)[(uint)dorcon.mtn_no * 0x10];
        if (uVar1 == 200) {
          SetPlyrAnime(200,'\0');
          dorcon.state = DR_CNT_END;
          plyr_wrk.sta = plyr_wrk.sta ^ 8;
        }
        else {
          PlyrPosAdj(dorcon.mtn_no,'\0');
          SetPlyrAnime(uVar1,'\0');
          dorcon.state = DR_CNT_CLOSE_STRT;
        }
      }
      break;
    case DR_CNT_CLOSE_STRT:
      if ((door_open_ctrl.open[0] == '\x02') || (door_open_ctrl.open[1] == '\x02')) {
        one_flg_121 = '\x01';
        dorcon.state = DR_CNT_DOR_CLOSE;
      }
      break;
    case DR_CNT_DOR_CLOSE:
      if (one_flg_121 != '\0') {
        DoorMoveStart(dorcon.mtn_no,'\x01');
      }
      one_flg_121 = '\0';
      if ((plyr_wrk.sta & 0x20) != 0) {
        PlyrPosReSet();
        SetPlyrAnime('\0','\0');
        plyr_wrk.sta = plyr_wrk.sta ^ 8;
        dorcon.state = DR_CNT_END;
      }
      break;
    case DR_CNT_END:
      dorcon.state = DR_CNT_IDOL;
    }
    if (dorcon.timer != '\0') {
      dorcon.timer = dorcon.timer + 0xff;
    }
    uVar1 = (uchar)dorcon.state;
  }
  return uVar1;
}

static void DoorConteInit() {
  dorcon.timer = '\0';
  return;
}

static void PlayerPosAdjust(u_char *time, u_char max) {
	float per;
	
  float fVar1;
  
  if (((int)(char)max & 0xffU) == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 1.0 - (float)(uint)*time / (float)(((int)(char)max & 0xffU) - 1);
  }
  plyr_wrk.move_box.spd.z =
       (float)((uint)(ushort)dorcon.adj_x1 - (uint)(ushort)dorcon.adj_x0) * fVar1 +
       (float)(uint)(ushort)dorcon.adj_x0;
  plyr_wrk.move_box.trot.w =
       dorcon.adj_org + (dorcon.adj_r1 - dorcon.adj_r0) * fVar1 + dorcon.adj_r0;
  plyr_wrk.move_box.rot.x =
       (float)((uint)(ushort)dorcon.adj_z1 - (uint)(ushort)dorcon.adj_z0) * fVar1 +
       (float)(uint)(ushort)dorcon.adj_z0;
  return;
}

static void PlyrPosReSet() {
	PLYR_WRK *pwp;
	MOVE_BOX *mbp;
	
  int iVar1;
  
  plyr_wrk.move_box.spd.z = plyr_wrk.cp_old.z;
  plyr_wrk.move_box.rot.x = plyr_wrk.soulp.x;
  iVar1 = SUB84((double)plyr_wrk.soulp.x,0);
  GetPointHeight(SUB82((double)plyr_wrk.cp_old.z,0),SUB82((double)plyr_wrk.soulp.x,0));
  plyr_wrk.move_box.spd.w = (float)iVar1;
  return;
}
