// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#93,  not equal)
enum {
	CT_RF_PF = 0,
	CT_RP_PF = 1,
	CT_RF_PM = 2,
	CT_RP_PM = 3,
	CT_RM_PM = 4,
	CT_RP_PC = 5
};

// warning: multiple differing types with the same name (#93,  not equal)
enum {
	CM_PLYR_X = 0,
	CM_PLYR_Z = 1
};

typedef struct {
	u_short no;
	u_short no_old;
	u_char kind;
	u_char type;
	u_char change;
	u_char pad;
	MAP_CAM_DAT *mcd;
} MAP_CAM_INFO;

typedef struct {
	sceVu0FVECTOR i;
	sceVu0FVECTOR p;
	sceVu0FVECTOR rot_y;
	sceVu0FVECTOR rot_x;
} CAM_ID_MOVE;

u_int ncam_000[0] = {
};
u_int ncam_001[0] = {
};
u_int ncam_002[0] = {
};
u_int ncam_003[0] = {
};
u_int ncam_006[0] = {
};
u_int ncam_007[0] = {
};
u_int ncam_008[0] = {
};
u_int ncam_009[0] = {
};
u_int ncam_010[0] = {
};
u_int ncam_011[0] = {
};
u_int ncam_012[0] = {
};
u_int ncam_013[0] = {
};
u_int ncam_014[0] = {
};
u_int ncam_015[0] = {
};
u_int ncam_016[0] = {
};
u_int ncam_021[0] = {
};
u_int ncam_022[0] = {
};
u_int ncam_023[0] = {
};
u_int ncam_024[0] = {
};
u_int ncam_025[0] = {
};
u_int ncam_026[0] = {
};
u_int *ncam_comple_dat1[0] = {
};
u_int *ncam_comple_dat2[0] = {
};
u_int *ncam_comple_dat3[0] = {
};
u_int *ncam_comple_dat4[0] = {
};
u_int bcam_000[0] = {
};
u_int *bcam_comple_dat1[0] = {
};
u_int *bcam_comple_dat2[0] = {
};
u_int *bcam_comple_dat3[0] = {
};
u_int *bcam_comple_dat4[0] = {
};
u_int dcam_000[0] = {
};
u_int *dcam_comple_dat1[0] = {
};
u_int *dcam_comple_dat2[0] = {
};
u_int *dcam_comple_dat3[0] = {
};
u_int *dcam_comple_dat4[0] = {
};
u_short dc0000[0] = {
};
u_short dc0010[0] = {
};
u_short dc0020[0] = {
};
u_short dc0030[0] = {
};
u_short dc0040[0] = {
};
u_short dc0050[0] = {
};
u_short dc0060[0] = {
};
u_short dc0070[0] = {
};
u_short dc0080[0] = {
};
u_short dc0090[0] = {
};
u_short dc0100[0] = {
};
u_short dc0110[0] = {
};
u_short dc0120[0] = {
};
u_short dc0130[0] = {
};
u_short dc0140[0] = {
};
u_short dc0150[0] = {
};
u_short dc0160[0] = {
};
u_short dc0170[0] = {
};
u_short dc0180[0] = {
};
u_short dc0190[0] = {
};
u_short dc0200[0] = {
};
u_short dc0210[0] = {
};
u_short dc0220[0] = {
};
u_short dc0230[0] = {
};
u_short dc0240[0] = {
};
u_short dc0250[0] = {
};
u_short dc0260[0] = {
};
u_short dc0270[0] = {
};
u_short dc0280[0] = {
};
u_short dc0290[0] = {
};
u_short dc0300[0] = {
};
u_short dc0310[0] = {
};
u_short dc0320[0] = {
};
u_short dc0330[0] = {
};
u_short dc0340[0] = {
};
u_short dc0350[0] = {
};
u_short dc0360[0] = {
};
u_short dc0370[0] = {
};
u_short dc0380[0] = {
};
u_short dc0390[0] = {
};
u_short dc0400[0] = {
};
u_short dc0410[0] = {
};
u_short dc0420[0] = {
};
u_short dc0430[0] = {
};
u_short dc0440[0] = {
};
u_short dc0450[0] = {
};
u_short dc0460[0] = {
};
u_short dc0470[0] = {
};
u_short dc0480[0] = {
};
u_short dc0490[0] = {
};
u_short dc0500[0] = {
};
u_short dc0510[0] = {
};
u_short *dc_no_tbl0[0] = {
};
u_short dc1000[0] = {
};
u_short dc1010[0] = {
};
u_short dc1020[0] = {
};
u_short dc1030[0] = {
};
u_short dc1040[0] = {
};
u_short dc1050[0] = {
};
u_short dc1060[0] = {
};
u_short dc1070[0] = {
};
u_short dc1080[0] = {
};
u_short dc1090[0] = {
};
u_short dc1100[0] = {
};
u_short dc1110[0] = {
};
u_short dc1120[0] = {
};
u_short dc1130[0] = {
};
u_short dc1140[0] = {
};
u_short dc1150[0] = {
};
u_short dc1160[0] = {
};
u_short dc1170[0] = {
};
u_short dc1180[0] = {
};
u_short dc1190[0] = {
};
u_short dc1200[0] = {
};
u_short dc1210[0] = {
};
u_short dc1220[0] = {
};
u_short dc1230[0] = {
};
u_short dc1240[0] = {
};
u_short dc1250[0] = {
};
u_short dc1260[0] = {
};
u_short dc1270[0] = {
};
u_short dc1280[0] = {
};
u_short dc1290[0] = {
};
u_short *dc_no_tbl1[0] = {
};
u_short dc2000[0] = {
};
u_short dc2010[0] = {
};
u_short dc2020[0] = {
};
u_short dc2030[0] = {
};
u_short dc2040[0] = {
};
u_short dc2050[0] = {
};
u_short dc2060[0] = {
};
u_short dc2070[0] = {
};
u_short dc2080[0] = {
};
u_short dc2090[0] = {
};
u_short dc2100[0] = {
};
u_short dc2110[0] = {
};
u_short dc2120[0] = {
};
u_short dc2130[0] = {
};
u_short dc2140[0] = {
};
u_short dc2150[0] = {
};
u_short dc2160[0] = {
};
u_short dc2170[0] = {
};
u_short dc2180[0] = {
};
u_short dc2190[0] = {
};
u_short dc2200[0] = {
};
u_short dc2210[0] = {
};
u_short dc2220[0] = {
};
u_short dc2230[0] = {
};
u_short dc2240[0] = {
};
u_short dc2250[0] = {
};
u_short dc2260[0] = {
};
u_short dc2270[0] = {
};
u_short dc2280[0] = {
};
u_short dc2290[0] = {
};
u_short *dc_no_tbl2[0] = {
};
u_short dc3000[0] = {
};
u_short dc3010[0] = {
};
u_short dc3020[0] = {
};
u_short dc3030[0] = {
};
u_short dc3040[0] = {
};
u_short dc3050[0] = {
};
u_short dc3060[0] = {
};
u_short dc3070[0] = {
};
u_short dc3080[0] = {
};
u_short dc3090[0] = {
};
u_short dc3100[0] = {
};
u_short dc3110[0] = {
};
u_short dc3120[0] = {
};
u_short dc3130[0] = {
};
u_short dc3140[0] = {
};
u_short dc3150[0] = {
};
u_short dc3160[0] = {
};
u_short dc3170[0] = {
};
u_short dc3180[0] = {
};
u_short dc3190[0] = {
};
u_short dc3200[0] = {
};
u_short dc3210[0] = {
};
u_short dc3220[0] = {
};
u_short dc3230[0] = {
};
u_short dc3240[0] = {
};
u_short dc3250[0] = {
};
u_short dc3260[0] = {
};
u_short dc3270[0] = {
};
u_short dc3280[0] = {
};
u_short dc3290[0] = {
};
u_short *dc_no_tbl3[0] = {
};
static u_short cam_no_save = 0;
static u_short compling = 65535;
static u_char cam_mode_old = 0;
static u_char req_rc_fade = 0;
static u_char drm_cam_req = 0;
static u_short drm_cam_tm = 0;
u_short drm_cam_no[12] = {
	/* [0] = */ 65535,
	/* [1] = */ 65535,
	/* [2] = */ 65535,
	/* [3] = */ 65535,
	/* [4] = */ 65535,
	/* [5] = */ 65535,
	/* [6] = */ 65535,
	/* [7] = */ 65535,
	/* [8] = */ 65535,
	/* [9] = */ 65535,
	/* [10] = */ 65535,
	/* [11] = */ 65535
};
u_char DBG_cam_id_move_chk = 0;
u_char cd_edit_end = 0;
int msn_no = 0;
int renewal_data_chk = 0;
int renewal_data_chk_cnt = 0;
u_short cdcopy[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};
u_char cam_info_disp = 1;
sceVu0FVECTOR adj_cam_pos = {
	/* [0] = */ 100.f,
	/* [1] = */ -1400.f,
	/* [2] = */ -1200.f,
	/* [3] = */ 0.f
};
u_short fior_tm = 0;
CAM_ID_MOVE cam_id_move = {
	/* .i = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .p = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .rot_y = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .rot_x = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
int cam_kind = 0;
int cam_type = 0;
int cd_step = 0;
int cam_id = 0;
short int plyr_adj[4] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0
};

void CameraMain() {
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (dbg_wrk.cam_mode == 1) {
    if (DBG_cam_id_move_chk == 0) {
      cam_id_move.i[0] = camera.i.x;
      cam_id_move.i[1] = camera.i.y;
      cam_id_move.i[2] = camera.i.z;
      cam_id_move.i[3] = camera.i.w;
      cam_id_move.p[0] = camera.p.x;
      cam_id_move.p[1] = camera.p.y;
      cam_id_move.p[2] = camera.p.z;
      cam_id_move.p[3] = camera.p.w;
      cam_id_move.rot_x[0] = 0.0;
      cam_id_move.rot_x[1] = 0.0;
      cam_id_move.rot_x[2] = 0.0;
      cam_id_move.rot_x[3] = 0.0;
      cam_id_move.rot_y[0] = 0.0;
      cam_id_move.rot_y[1] = 0.0;
      cam_id_move.rot_y[2] = 0.0;
      cam_id_move.rot_y[3] = 0.0;
      GetTrgtRot((float *)&camera,&camera.i.x,cam_id_move.rot_x,1);
      GetTrgtRot((float *)&camera,&camera.i.x,cam_id_move.rot_y,2);
      plyr_adj[3] = 0;
      plyr_adj[2] = 0;
      plyr_adj[1] = 0;
      plyr_adj[0] = 0;
      cam_type = 0;
      cd_step = 0;
      cam_id = 0;
      cd_edit_end = '\0';
    }
    if (dbg_wrk.cam_mode == 1) {
      DBG_cam_id_move_chk = 1;
      bVar1 = true;
      goto LAB_00188bf8;
    }
  }
  DBG_cam_id_move_chk = 0;
  bVar1 = false;
LAB_00188bf8:
  if (bVar1) {
    CameraIdMoveCtrl();
    return;
  }
  plyr_wrk.se_deadly._3_1_ = 0xff;
  if (((plyr_wrk.ap_timer == 0) && (cVar2 = SaveCamChk(), cVar2 == '\0')) &&
     (iVar3 = SoulTellingCameraInCtrl(), iVar3 == 0)) {
    switch(plyr_wrk.mode) {
    case 1:
      if (cam_mode_old != '\x01') {
        camera.fov = DAT_00355b38;
      }
      FinderModeCameraCtrl();
      cam_mode_old = '\x01';
      break;
    case 2:
    case 7:
      PlyrDmgCameraCtrl();
      cam_mode_old = '\x02';
      break;
    default:
      if (plyr_wrk.cond == 2) {
        KonwakuCamCtrl();
        cam_mode_old = '\0';
      }
      else {
        NormalCameraCtrl();
        cam_mode_old = '\0';
      }
      break;
    case 6:
      FinderInCameraCtrl();
      cam_mode_old = '\x06';
      break;
    case 9:
      iVar3 = (uint)plyr_wrk.rock_trgt * 0x430;
      if (((*(uint *)((int)ene_wrk + iVar3) & 1) != 0) &&
         (*(char *)((int)ene_wrk + iVar3 + 0x358) != '\0')) {
        camera.i.y = *(float *)((int)ene_wrk + iVar3 + 0xc4);
        camera.i.x = *(float *)((int)ene_wrk + iVar3 + 0xc0);
        camera.i.w = *(float *)((int)ene_wrk + (uint)plyr_wrk.rock_trgt * 0x430 + 0xcc);
        camera.i.z = *(float *)((int)ene_wrk + (uint)plyr_wrk.rock_trgt * 0x430 + 200);
      }
    }
    plyr_wrk.dop.dov[0]._2_2_ = plyr_wrk.dop.dov[0]._0_2_;
    plyr_wrk.dop.dov[2]._2_2_ = plyr_wrk.dop.dov[2]._0_2_;
    plyr_wrk.dop.dov[1]._2_2_ = plyr_wrk.dop.dov[1]._0_2_;
    FinderInOverRapCtrl();
    QuakeCamera();
    return;
  }
  return;
}

void KonwakuCamCtrl() {
	sceVu0FVECTOR rv;
	sceVu0FVECTOR tv;
	
  float rv [4];
  float tv [4];
  
  tv[1] = -500.0;
  tv[2] = 800.0;
  tv[0] = 0.0;
  tv[3] = 0.0;
  RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
  sceVu0AddVector(&camera.i,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  tv[1] = DAT_00355b3c;
  tv[2] = -400.0;
  tv[0] = 0.0;
  tv[3] = 0.0;
  RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
  sceVu0AddVector(&camera.p,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  camera.roll = DAT_00355b40;
  camera.fov = DAT_00355b44;
  return;
}

void FinderInCameraCtrl() {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	static sceVu0FVECTOR pv;
	static sceVu0FVECTOR iv;
	static u_char time = 0;
	
  float tv [4];
  float rv [4];
  
  if ((plyr_wrk.sta & 4) != 0) {
    plyr_wrk.sta = plyr_wrk.sta & 0xfffffffb;
    time_125 = '\x19';
    if (plyr_wrk.move_box.pos_mid.w != 0.0) {
      plyr_wrk.move_box.pos_mid.w = plyr_wrk.move_box.pos_mid.w / 25.0;
    }
  }
  if (time_125 == '\0') {
    plyr_wrk.mode = 1;
    plyr_wrk.move_box.comm_add.wrk._4_4_ = 0;
    plyr_wrk.move_box.pos_mid.z = 0.0;
    plyr_wrk.move_box.pos_mid.w = 0.0;
    plyr_wrk.move_box.comm_add.pu8 = (uchar *)0x0;
    SetDebugMenuSwitch(0);
  }
  else {
    time_125 = time_125 + -1;
    if (plyr_wrk.move_box.pos_mid.w != 0.0) {
      plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w + plyr_wrk.move_box.pos_mid.w;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
    }
    if (time_125 == '\x01') {
      ReqFinderInOverRap(0x1e);
    }
  }
  return;
}

void NormalCameraCtrl() {
	MAP_CAM_INFO mci;
	SgCAMERA tc;
	SgCAMERA tc2;
	static SgCAMERA oc;
	
  undefined8 *puVar1;
  int iVar2;
  SgCAMERA *pSVar3;
  SgCAMERA *pSVar4;
  SgCAMERA *pSVar5;
  SgCAMERA *pSVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  MAP_CAM_INFO mci;
  SgCAMERA tc;
  SgCAMERA tc2;
  
  if (dbg_wrk.cam_mode == 2) {
    tc.p.x = plyr_wrk.move_box.spd.z;
    tc.p.y = plyr_wrk.move_box.spd.w;
    tc.p.z = plyr_wrk.move_box.rot.x;
    tc.p.w = plyr_wrk.move_box.rot.y;
    tc.i.x = plyr_wrk.move_box.spd.z;
    tc.i.y = plyr_wrk.move_box.spd.w;
    tc.i.z = plyr_wrk.move_box.rot.x;
    tc.i.w = plyr_wrk.move_box.rot.y;
    sceVu0AddVector(&tc.p,&tc.p,(Vector4 *)adj_cam_pos);
    tc.roll = DAT_00355b48;
    tc.fov = DAT_00355b4c;
  }
  else {
    DramaCameraReqCtrl();
    iVar2 = GetCameraInfo(&mci);
    if (iVar2 != 0) {
      return;
    }
    if (mci.change != '\0') {
      plyr_wrk.spot_rot.y = camera.p.w;
      plyr_wrk.soulp.z = camera.p.x;
      plyr_wrk.soulp.w = camera.p.y;
      plyr_wrk.spot_rot.x = camera.p.z;
    }
    switch(mci.type) {
    case '\0':
      SetCamPos0(&tc,&mci);
      break;
    case '\x01':
      SetCamPos1(&tc,&mci);
      break;
    case '\x02':
      SetCamPos2(&tc,&mci);
      break;
    case '\x03':
      SetCamPos3(&tc,&mci);
      break;
    case '\x04':
      SetCamPos4(&tc,&mci);
      break;
    case '\x05':
      SetCamPos5(&tc,&mci);
    }
    pSVar4 = &tc;
    pSVar5 = &tc2;
    do {
      pSVar6 = pSVar5;
      pSVar3 = pSVar4;
      uVar7 = *(undefined8 *)&(pSVar3->p).z;
      uVar8 = *(undefined8 *)&pSVar3->i;
      uVar9 = *(undefined8 *)&(pSVar3->i).z;
      *(undefined8 *)&pSVar6->p = *(undefined8 *)&pSVar3->p;
      *(undefined8 *)&(pSVar6->p).z = uVar7;
      *(undefined8 *)&pSVar6->i = uVar8;
      *(undefined8 *)&(pSVar6->i).z = uVar9;
      pSVar4 = (SgCAMERA *)&pSVar3->roll;
      pSVar5 = (SgCAMERA *)&pSVar6->roll;
    } while (pSVar4 != (SgCAMERA *)&tc.yd);
    uVar7 = *(undefined8 *)&pSVar3->nearz;
    *(undefined8 *)&pSVar6->roll = *(undefined8 *)pSVar4;
    *(undefined8 *)&pSVar6->nearz = uVar7;
    CompleCameraPos(&tc,(SgCAMERA *)&oc_129,&mci);
    pSVar4 = &tc2;
    puVar1 = &oc_129;
    do {
      puVar10 = puVar1;
      pSVar5 = pSVar4;
      uVar9 = *(undefined8 *)&(pSVar5->p).z;
      uVar7 = *(undefined8 *)&pSVar5->i;
      uVar8 = *(undefined8 *)&(pSVar5->i).z;
      *puVar10 = *(undefined8 *)&pSVar5->p;
      puVar10[1] = uVar9;
      puVar10[2] = uVar7;
      puVar10[3] = uVar8;
      pSVar4 = (SgCAMERA *)&pSVar5->roll;
      puVar1 = puVar10 + 4;
    } while (pSVar4 != (SgCAMERA *)&tc2.yd);
    uVar7 = *(undefined8 *)&pSVar5->nearz;
    puVar10[4] = *(undefined8 *)pSVar4;
    puVar10[5] = uVar7;
  }
  camera.p.x = tc.p.x;
  camera.p.y = tc.p.y;
  camera.p.z = tc.p.z;
  camera.p.w = tc.p.w;
  camera.i.x = tc.i.x;
  camera.i.y = tc.i.y;
  camera.i.z = tc.i.z;
  camera.i.w = tc.i.w;
  camera.roll = tc.roll;
  camera.fov = tc.fov;
  plyr_wrk.prot = GetTrgtRotY((float *)&camera,&plyr_wrk.move_box.spd.z);
  return;
}

int GetCameraInfo(MAP_CAM_INFO *mci) {
	static u_char kind_old = 0;
	
  uchar uVar1;
  
  mci->change = '\0';
  GetCameraData(kind_old_133,mci);
  if (kind_old_133 == '\x02') {
    if (drm_cam_req != '\0') goto LAB_00189308;
  }
  else if (drm_cam_req == '\0') {
LAB_00189308:
    if ((plyr_wrk.dop.dov[3]._0_2_ == -1) && (mci->no == mci->no_old)) {
      mci->kind = kind_old_133;
      uVar1 = kind_old_133;
      goto LAB_001893e4;
    }
  }
  mci->change = '\x01';
  if (drm_cam_req == '\0') {
    if (plyr_wrk.dop.dov[3]._0_2_ == -1) {
      if ((plyr_wrk.sta & 1) == 0) {
        mci->kind = '\0';
      }
      else {
        mci->kind = '\x01';
      }
    }
    else {
      mci->change = '\0';
      mci->kind = '\x03';
    }
  }
  else {
    if (kind_old_133 == '\x02') {
      mci->change = '\0';
    }
    mci->kind = '\x02';
  }
  if (dbg_wrk.cam_mode == 0) {
    if ((dbg_wrk.cam_hold_mode == 1) || (dbg_wrk.cam_hold_mode == 2)) {
      mci->kind = (uchar)dbg_wrk.cam_hold_mode;
      uVar1 = mci->kind;
    }
    else {
      uVar1 = mci->kind;
    }
  }
  else {
    uVar1 = mci->kind;
  }
  if (uVar1 != kind_old_133) {
    compling = -1;
    GetCameraData(mci->kind,mci);
    uVar1 = mci->kind;
  }
LAB_001893e4:
  kind_old_133 = uVar1;
  plyr_wrk.se_deadly._3_1_ = mci->kind;
  return 0;
}

void GetCameraData(u_char kind, MAP_CAM_INFO *mci) {
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  MAP_CAM_DAT *pMVar6;
  short sVar7;
  
  uVar4 = plyr_wrk.dop.dov[3]._0_2_;
  uVar3 = plyr_wrk.dop.dov[2]._0_2_;
  uVar2 = plyr_wrk.dop.dov[1]._0_2_;
  uVar1 = plyr_wrk.dop.dov[0]._0_2_;
  if (kind == '\x01') {
    pMVar6 = map_cam_dat2;
    mci->no = plyr_wrk.dop.dov[1]._0_2_;
    uVar5 = (uint)uVar2;
    sVar7 = plyr_wrk.dop.dov[1]._2_2_;
  }
  else if (kind < 2) {
    if (kind != '\0') {
      return;
    }
    pMVar6 = map_cam_dat;
    mci->no = plyr_wrk.dop.dov[0]._0_2_;
    uVar5 = (uint)uVar1;
    sVar7 = plyr_wrk.dop.dov[0]._2_2_;
  }
  else if (kind == '\x02') {
    pMVar6 = map_cam_dat3;
    mci->no = plyr_wrk.dop.dov[2]._0_2_;
    uVar5 = (uint)uVar3;
    sVar7 = plyr_wrk.dop.dov[2]._2_2_;
  }
  else {
    if (kind != '\x03') {
      return;
    }
    pMVar6 = map_cam_dat4;
    mci->no = plyr_wrk.dop.dov[3]._0_2_;
    uVar5 = (uint)uVar4;
    sVar7 = plyr_wrk.dop.dov[3]._2_2_;
  }
  mci->no_old = sVar7;
  mci->mcd = pMVar6 + uVar5;
  mci->type = pMVar6[uVar5].type;
  return;
}

void SetCamPos0(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv;
	
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  MAP_CAM_DAT *pMVar5;
  float tv [4];
  
  GetMCLocalPosPer(0,'\0',0xff);
  pMVar5 = mci->mcd;
  uVar2 = pMVar5->p0[0];
  uVar3 = pMVar5->p0[2];
  uVar4 = pMVar5->p1[0];
  (tc->i).y = (float)(int)pMVar5->p0[1];
  (tc->i).z = (float)(uint)uVar3;
  (tc->i).x = (float)(uint)uVar2;
  (tc->i).w = 0.0;
  sVar1 = pMVar5->p1[1];
  uVar2 = pMVar5->p1[2];
  (tc->p).x = (float)(uint)uVar4;
  (tc->p).w = 0.0;
  (tc->p).y = (float)(int)sVar1;
  (tc->p).z = (float)(uint)uVar2;
  tc->roll = pMVar5->roll[0];
  tc->fov = pMVar5->fov[0];
  return;
}

void SetCamPos1(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv2;
	static sceVu0FVECTOR tv = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  MAP_CAM_DAT *pMVar4;
  float tv2 [4];
  
  GetMCLocalPosPer(0,'\0',0xff);
  if (mci->change != '\0') {
    pMVar4 = mci->mcd;
    tv_143._0_4_ = (float)(int)pMVar4->p1[0];
    tv_143._4_4_ = (float)(int)pMVar4->p1[1];
    tv_143._12_4_ = 0;
    tv_143._8_4_ = (float)(int)pMVar4->p1[2];
    RotFvector(&plyr_wrk.move_box.trot.z,(float *)tv_143);
  }
  sceVu0AddVector((Vector4 *)tv2,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv_143);
  pMVar4 = mci->mcd;
  uVar2 = pMVar4->p0[0];
  (tc->i).x = tv2[0];
  (tc->i).y = tv2[1] + -400.0;
  (tc->i).z = tv2[2];
  (tc->i).w = tv2[3];
  sVar1 = pMVar4->p0[1];
  uVar3 = pMVar4->p0[2];
  (tc->p).x = (float)(uint)uVar2;
  (tc->p).z = (float)(uint)uVar3;
  (tc->p).y = (float)(int)sVar1;
  (tc->p).w = 0.0;
  tc->roll = pMVar4->roll[0];
  tc->fov = pMVar4->fov[0];
  return;
}

void SetCamPos2(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR bv;
	float per;
	
  short sVar1;
  short cn;
  MAP_CAM_DAT *pMVar2;
  float fVar3;
  float tv [4];
  float bv [4];
  
  pMVar2 = mci->mcd;
  cn = mci->no;
  tv[0] = (float)(uint)(ushort)pMVar2->p0[0];
  tv[2] = (float)(uint)(ushort)pMVar2->p0[2];
  sVar1 = pMVar2->p0[1];
  tv[3] = 0.0;
  (tc->i).x = tv[0];
  tv[1] = (float)(int)sVar1;
  (tc->i).z = tv[2];
  (tc->i).y = tv[1];
  (tc->i).w = 0.0;
  fVar3 = GetMCLocalPosPer(cn,mci->kind,pMVar2->id);
  pMVar2 = mci->mcd;
  tv[0] = (float)((uint)(ushort)pMVar2->p2[0] - (uint)(ushort)pMVar2->p1[0]) * fVar3;
  bv[0] = (float)(uint)(ushort)pMVar2->p1[0];
  tv[2] = (float)((uint)(ushort)pMVar2->p2[2] - (uint)(ushort)pMVar2->p1[2]) * fVar3;
  bv[2] = (float)(uint)(ushort)pMVar2->p1[2];
  bv[1] = (float)(int)pMVar2->p1[1];
  tv[3] = 0.0;
  tv[1] = (float)((int)pMVar2->p2[1] - (int)pMVar2->p1[1]) * fVar3;
  bv[3] = 0.0;
  sceVu0AddVector(&tc->p,(Vector4 *)bv,(Vector4 *)tv);
  pMVar2 = mci->mcd;
  if (pMVar2->roll[1] == 0.0) {
    tc->roll = pMVar2->roll[0];
  }
  else {
    bv[0] = pMVar2->roll[1] - pMVar2->roll[0];
    RotLimitChk((float *)(Vector4 *)bv);
    bv[0] = bv[0] * fVar3;
    tc->roll = mci->mcd->roll[0] + bv[0];
    RotLimitChk(&tc->roll);
    pMVar2 = mci->mcd;
  }
  if (pMVar2->fov[1] == 0.0) {
    fVar3 = pMVar2->fov[0];
  }
  else {
    fVar3 = pMVar2->fov[0] + (pMVar2->fov[1] - pMVar2->fov[0]) * fVar3;
  }
  tc->fov = fVar3;
  return;
}

void SetCamPos3(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv2;
	sceVu0FVECTOR bv;
	float per;
	static sceVu0FVECTOR tv = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	
  MAP_CAM_DAT *pMVar1;
  float fVar2;
  float tv2 [4];
  float bv [4];
  
  if (mci->change != '\0') {
    pMVar1 = mci->mcd;
    tv_150._0_4_ = (float)(int)pMVar1->p2[0];
    tv_150._4_4_ = (float)(int)pMVar1->p2[1];
    tv_150._12_4_ = 0;
    tv_150._8_4_ = (float)(int)pMVar1->p2[2];
    RotFvector(&plyr_wrk.move_box.trot.z,(float *)tv_150);
  }
  sceVu0AddVector((Vector4 *)tv2,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv_150);
  tv2[1] = tv2[1] + -400.0;
  (tc->i).x = tv2[0];
  (tc->i).y = tv2[1];
  (tc->i).z = tv2[2];
  (tc->i).w = tv2[3];
  fVar2 = GetMCLocalPosPer(mci->no,mci->kind,mci->mcd->id);
  pMVar1 = mci->mcd;
  tv2[0] = (float)((uint)(ushort)pMVar1->p1[0] - (uint)(ushort)pMVar1->p0[0]) * fVar2;
  bv[0] = (float)(uint)(ushort)pMVar1->p0[0];
  tv2[2] = (float)((uint)(ushort)pMVar1->p1[2] - (uint)(ushort)pMVar1->p0[2]) * fVar2;
  bv[2] = (float)(uint)(ushort)pMVar1->p0[2];
  bv[1] = (float)(int)pMVar1->p0[1];
  tv2[3] = 0.0;
  tv2[1] = (float)((int)pMVar1->p1[1] - (int)pMVar1->p0[1]) * fVar2;
  bv[3] = 0.0;
  sceVu0AddVector(&tc->p,(Vector4 *)bv,(Vector4 *)tv2);
  pMVar1 = mci->mcd;
  if (pMVar1->roll[1] == 0.0) {
    tc->roll = pMVar1->roll[0];
  }
  else {
    bv[0] = pMVar1->roll[1] - pMVar1->roll[0];
    RotLimitChk((float *)(Vector4 *)bv);
    bv[0] = bv[0] * fVar2;
    tc->roll = mci->mcd->roll[0] + bv[0];
    RotLimitChk(&tc->roll);
    pMVar1 = mci->mcd;
  }
  if (pMVar1->fov[1] == 0.0) {
    fVar2 = pMVar1->fov[0];
  }
  else {
    tv_150._0_4_ = (pMVar1->fov[1] - pMVar1->fov[0]) * fVar2;
    fVar2 = pMVar1->fov[0] + tv_150._0_4_;
  }
  tc->fov = fVar2;
  return;
}

void SetCamPos4(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR bv;
	float per;
	
  MAP_CAM_DAT *pMVar1;
  float fVar2;
  float tv [4];
  float bv [4];
  
  fVar2 = GetMCLocalPosPer(mci->no,mci->kind,mci->mcd->id);
  pMVar1 = mci->mcd;
  tv[0] = (float)((uint)(ushort)pMVar1->p1[0] - (uint)(ushort)pMVar1->p0[0]) * fVar2;
  bv[0] = (float)(uint)(ushort)pMVar1->p0[0];
  tv[2] = (float)((uint)(ushort)pMVar1->p1[2] - (uint)(ushort)pMVar1->p0[2]) * fVar2;
  bv[2] = (float)(uint)(ushort)pMVar1->p0[2];
  bv[1] = (float)(int)pMVar1->p0[1];
  tv[3] = 0.0;
  tv[1] = (float)((int)pMVar1->p1[1] - (int)pMVar1->p0[1]) * fVar2;
  bv[3] = 0.0;
  sceVu0AddVector(&tc->i,(Vector4 *)bv,(Vector4 *)tv);
  pMVar1 = mci->mcd;
  tv[0] = (float)((uint)(ushort)pMVar1->p3[0] - (uint)(ushort)pMVar1->p2[0]) * fVar2;
  bv[0] = (float)(uint)(ushort)pMVar1->p2[0];
  tv[2] = (float)((uint)(ushort)pMVar1->p3[2] - (uint)(ushort)pMVar1->p2[2]) * fVar2;
  bv[2] = (float)(uint)(ushort)pMVar1->p2[2];
  bv[1] = (float)(int)pMVar1->p2[1];
  tv[3] = 0.0;
  tv[1] = (float)((int)pMVar1->p3[1] - (int)pMVar1->p2[1]) * fVar2;
  bv[3] = 0.0;
  sceVu0AddVector(&tc->p,(Vector4 *)bv,(Vector4 *)tv);
  pMVar1 = mci->mcd;
  if (pMVar1->roll[1] == 0.0) {
    tc->roll = pMVar1->roll[0];
  }
  else {
    bv[0] = pMVar1->roll[1] - pMVar1->roll[0];
    RotLimitChk((float *)(Vector4 *)bv);
    bv[0] = bv[0] * fVar2;
    tc->roll = mci->mcd->roll[0] + bv[0];
    RotLimitChk(&tc->roll);
    pMVar1 = mci->mcd;
  }
  if (pMVar1->fov[1] == 0.0) {
    fVar2 = pMVar1->fov[0];
  }
  else {
    fVar2 = pMVar1->fov[0] + (pMVar1->fov[1] - pMVar1->fov[0]) * fVar2;
  }
  tc->fov = fVar2;
  return;
}

void SetCamPos5(SgCAMERA *tc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tv2;
	static sceVu0FVECTOR tv = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	
  MAP_CAM_DAT *pMVar1;
  float tv2 [4];
  
  GetMCLocalPosPer(0,'\0',0xff);
  if (mci->change != '\0') {
    pMVar1 = mci->mcd;
    tv_157._0_4_ = (float)(int)pMVar1->p1[0];
    tv_157._4_4_ = (float)(int)pMVar1->p1[1];
    tv_157._12_4_ = 0;
    tv_157._8_4_ = (float)(int)pMVar1->p1[2];
    RotFvector(&plyr_wrk.move_box.trot.z,(float *)tv_157);
  }
  sceVu0AddVector((Vector4 *)tv2,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv_157);
  (tc->i).x = tv2[0];
  (tc->i).y = tv2[1] + -400.0;
  (tc->i).z = tv2[2];
  (tc->i).w = tv2[3];
  pMVar1 = mci->mcd;
  tv2[0] = (float)(int)pMVar1->p0[0];
  tv2[1] = (float)(int)pMVar1->p0[1];
  tv2[3] = 0.0;
  tv2[2] = (float)(int)pMVar1->p0[2];
  sceVu0AddVector(&tc->p,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv2);
  pMVar1 = mci->mcd;
  tc->roll = pMVar1->roll[0];
  tc->fov = pMVar1->fov[0];
  return;
}

float GetMCLocalPosPer(u_short cn, u_char kind, u_char id) {
	u_short xmin;
	u_short xmax;
	u_short zmin;
	u_short zmax;
	u_char kind_tbl[4];
	static float min;
	static float max;
	static u_short req_cam_no_save = 65535;
	static u_char req_cam_kind_save = 255;
	
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uchar kind_tbl [4];
  short xmin;
  short xmax;
  short zmin;
  short zmax;
  
  uVar3 = (int)(char)kind & 0xff;
  puVar1 = kind_tbl + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)DAT_00356f30 >> (3 - uVar2) * 8;
  kind_tbl = DAT_00356f30;
  if (id == 0xff) {
    req_cam_kind_save_164 = 0xff;
    fVar4 = 0.0;
    req_cam_no_save_163 = -1;
  }
  else {
    if ((cn != req_cam_no_save_163) || (uVar3 != req_cam_kind_save_164)) {
      req_cam_kind_save_164 = (byte)uVar3;
      req_cam_no_save_163 = cn;
      MapCameraCdivideAB(cn,&xmin,&xmax,&zmin,&zmax,kind_tbl[uVar3]);
      if (id == '\0') {
        zmax = xmax;
        zmin = xmin;
      }
      min_161 = (float)(uint)(ushort)zmin;
      max_162 = (float)(uint)(ushort)zmax;
    }
    fVar4 = plyr_wrk.soulp.x;
    if (id == '\0') {
      fVar4 = plyr_wrk.cp_old.z;
    }
    fVar4 = ABS((fVar4 - min_161) / (max_162 - min_161));
  }
  return fVar4;
}

void CompleCameraPos(SgCAMERA *tc, SgCAMERA *oc, MAP_CAM_INFO *mci) {
	sceVu0FVECTOR tc0;
	sceVu0FVECTOR tc1;
	float comple_div;
	float tca0;
	u_char i;
	u_char chk;
	u_int *tbl;
	static u_char rmax;
	static u_char pmax;
	static u_char comple_cnt;
	static u_char comple_spd_dwn;
	static u_char comple_dwn_tm;
	static sceVu0FVECTOR comple_adjr = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static sceVu0FVECTOR comple_adjp = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	static float comple_adjfov = 0.f;
	static float comple_adjroll = 0.f;
	
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uchar uVar4;
  uint___0_ *puVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  uint *unaff_s1_lo;
  float fVar10;
  float fVar11;
  float tc0 [4];
  float tc1 [4];
  
  uVar4 = CompleReqChk(mci);
  if (uVar4 == '\0') {
    if (mci->type - 2 < 3) {
      if (comple_spd_dwn_171 == 3) {
        sceVu0SubVector(0x320000,tc,oc);
        uVar4 = mci->type;
      }
      else {
        tc0[0] = 0.0;
        tc0[1] = 0.0;
        tc0[2] = 0.0;
        tc0[3] = 0.0;
        tc1[0] = comple_adjp_174._0_4_;
        tc1[1] = comple_adjp_174._4_4_;
        tc1[2] = comple_adjp_174._8_4_;
        tc1[3] = comple_adjp_174._12_4_;
        fVar10 = GetDistV(tc0,tc1);
        sceVu0SubVector(tc1,tc,0x252840);
        tc0[0] = 0.0;
        tc0[1] = 0.0;
        tc0[2] = 0.0;
        tc0[3] = 0.0;
        fVar11 = GetDistV(tc0,tc1);
        sceVu0DivVector(fVar11 / fVar10,0x320000,tc1);
        uVar4 = mci->type;
      }
      if (uVar4 == '\x04') {
        if (comple_spd_dwn_171 == 3) {
          sceVu0SubVector(0x31fff0,&tc->i,&oc->i);
        }
        else {
          tc0[0] = 0.0;
          tc0[1] = 0.0;
          tc0[2] = 0.0;
          tc0[3] = 0.0;
          tc1[0] = comple_adjr_173._0_4_;
          tc1[1] = comple_adjr_173._4_4_;
          tc1[2] = comple_adjr_173._8_4_;
          tc1[3] = comple_adjr_173._12_4_;
          fVar10 = GetDistV(tc0,tc1);
          sceVu0SubVector(tc1,&tc->i,0x252850);
          tc0[0] = 0.0;
          tc0[1] = 0.0;
          tc0[2] = 0.0;
          tc0[3] = 0.0;
          fVar11 = GetDistV(tc0,tc1);
          sceVu0DivVector(fVar11 / fVar10,0x31fff0,tc1);
        }
      }
    }
  }
  else {
    bVar1 = mci->kind;
    if (bVar1 == 1) {
      switch(ingame_wrk.msn_no) {
      case 0:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &bcam_comple_dat1;
        break;
      case 1:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &bcam_comple_dat1;
        break;
      case 2:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &bcam_comple_dat2;
        break;
      case 3:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &bcam_comple_dat3;
        break;
      case 4:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &bcam_comple_dat4;
        break;
      default:
        goto switchD_0018a0ac_caseD_5;
      }
      goto LAB_0018a178;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        switch(ingame_wrk.msn_no) {
        case 0:
          uVar6 = (uint)(ushort)mci->no_old;
          puVar5 = &ncam_comple_dat1;
          break;
        case 1:
          uVar6 = (uint)(ushort)mci->no_old;
          puVar5 = &ncam_comple_dat1;
          break;
        case 2:
          uVar6 = (uint)(ushort)mci->no_old;
          puVar5 = &ncam_comple_dat2;
          break;
        case 3:
          uVar6 = (uint)(ushort)mci->no_old;
          puVar5 = &ncam_comple_dat3;
          break;
        case 4:
          uVar6 = (uint)(ushort)mci->no_old;
          puVar5 = &ncam_comple_dat4;
          break;
        default:
          goto switchD_0018a0ac_caseD_5;
        }
LAB_0018a178:
        unaff_s1_lo = *(uint **)(puVar5 + uVar6 * 4);
      }
    }
    else if (bVar1 == 2) {
      switch(ingame_wrk.msn_no) {
      case 0:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &dcam_comple_dat1;
        break;
      case 1:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &dcam_comple_dat1;
        break;
      case 2:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &dcam_comple_dat2;
        break;
      case 3:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &dcam_comple_dat3;
        break;
      case 4:
        uVar6 = (uint)(ushort)mci->no_old;
        puVar5 = &dcam_comple_dat4;
        break;
      default:
        goto switchD_0018a0ac_caseD_5;
      }
      goto LAB_0018a178;
    }
switchD_0018a0ac_caseD_5:
    uVar6 = 0;
    if (*unaff_s1_lo != 0xffffffff) {
      iVar9 = 0;
      puVar7 = unaff_s1_lo;
      do {
        uVar2 = *puVar7;
        if ((uVar2 >> 8 & 0x1ff) == (uint)(ushort)mci->no) {
          if ((uVar2 & 0x60000000) == 0) {
LAB_0018a24c:
            uVar6 = *(uint *)(iVar9 + (int)unaff_s1_lo);
          }
          else {
            uVar6 = uVar2 >> 0x1c & 3;
            if (uVar6 == 2) {
              CallFocus(0,2,0x46);
              goto LAB_0018a24c;
            }
            if (uVar6 < 3) {
              if (uVar6 == 1) {
                CallFocus(0,1,0x32);
                goto LAB_0018a24c;
              }
              uVar6 = *(uint *)(iVar9 + (int)unaff_s1_lo);
            }
            else {
              if (uVar6 == 3) {
                CallFocus(0,3,100);
                goto LAB_0018a24c;
              }
              uVar6 = *(uint *)(iVar9 + (int)unaff_s1_lo);
            }
          }
          if ((uVar6 & 0xff) != 0) {
            compling = mci->no;
            fVar10 = (float)(uVar6 & 0xff);
            comple_cnt_170 = (byte)(int)fVar10;
            comple_spd_dwn_171 = (byte)(*(uint *)(iVar9 + (int)unaff_s1_lo) >> 0x1e);
            if (*(uint *)(iVar9 + (int)unaff_s1_lo) >> 0x1e != 0) {
              comple_dwn_tm_172 = (byte)(((int)fVar10 & 0xffU) >> 1);
            }
            sceVu0SubVector(0x31fff0,&tc->i,0x252850);
            sceVu0DivVector(fVar10,0x31fff0,0x31fff0);
            rmax_168 = ABS(comple_adjr_173._0_4_) <= ABS(comple_adjr_173._4_4_);
            if (ABS(*(float *)(comple_adjr_173 + (uint)rmax_168 * 4)) <= ABS(comple_adjr_173._8_4_))
            {
              rmax_168 = 2;
            }
            sceVu0SubVector(0x320000,tc,0x252840);
            sceVu0DivVector(fVar10,0x320000,0x320000);
            pmax_169 = ABS(comple_adjr_173._0_4_) <= ABS(comple_adjr_173._4_4_);
            if (ABS(*(float *)(comple_adjr_173 + (uint)pmax_169 * 4)) <= ABS(comple_adjr_173._8_4_))
            {
              pmax_169 = 2;
            }
            comple_adjroll_176 = tc->roll - camera.roll;
            comple_adjfov_175 = (tc->fov - camera.fov) / fVar10;
            RotLimitChk(&comple_adjroll_176);
            comple_adjroll_176 = comple_adjroll_176 / fVar10;
          }
          break;
        }
        uVar6 = uVar6 + 1 & 0xff;
        iVar9 = uVar6 * 4;
        puVar7 = unaff_s1_lo + uVar6;
      } while (unaff_s1_lo[uVar6] != 0xffffffff);
    }
  }
  fVar10 = DAT_00355b50;
  if (compling == -1) {
    return;
  }
  if (((((comple_spd_dwn_171 & 1) == 0) || ((plyr_wrk.mvsta & 0xf) != 0)) &&
      (comple_spd_dwn_171 != 2)) || (comple_dwn_tm_172 < comple_cnt_170)) {
    tc0[3] = (tc->i).w;
  }
  else {
    if (DAT_00355b50 < ABS(*(float *)(comple_adjr_173 + (uint)rmax_168 * 4))) {
      sceVu0ScaleVector(DAT_00355b54,(Vector4 *)comple_adjr_173,(Vector4 *)comple_adjr_173);
    }
    if (fVar10 < ABS(*(float *)(comple_adjp_174 + (uint)pmax_169 * 4))) {
      sceVu0ScaleVector(DAT_00355b58,(Vector4 *)comple_adjp_174,(Vector4 *)comple_adjp_174);
      tc0[3] = (tc->i).w;
    }
    else {
      tc0[3] = (tc->i).w;
    }
  }
  tc0[0] = (tc->i).x;
  tc0[1] = (tc->i).y;
  tc0[2] = (tc->i).z;
  bVar3 = false;
  uVar6 = 0;
  iVar9 = 0;
  do {
    if (0.0 < *(float *)(comple_adjr_173 + iVar9)) {
      pfVar8 = (float *)((int)tc->pad + iVar9 + -0x38);
      fVar10 = *(float *)((int)camera.pad + iVar9 + -0x38);
      if (*pfVar8 <= fVar10) goto LAB_0018a810;
      fVar10 = fVar10 + *(float *)(comple_adjr_173 + iVar9);
      fVar11 = *(float *)((int)tc0 + iVar9);
      *pfVar8 = fVar10;
      if (fVar11 <= fVar10) {
        (tc->i).x = tc0[0];
        (tc->i).y = tc0[1];
        (tc->i).z = tc0[2];
        (tc->i).w = tc0[3];
        comple_adjr_173._0_4_ = 0.0;
        comple_adjr_173._12_4_ = 0.0;
        comple_adjr_173._4_4_ = 0.0;
        comple_adjr_173._8_4_ = 0.0;
        break;
      }
      bVar3 = true;
    }
    else {
LAB_0018a810:
      pfVar8 = (float *)((int)tc->pad + iVar9 + -0x38);
      if (*(float *)(comple_adjr_173 + iVar9) < 0.0) {
        fVar10 = *(float *)((int)camera.pad + iVar9 + -0x38);
        if (*pfVar8 < fVar10) {
          fVar10 = fVar10 + *(float *)(comple_adjr_173 + iVar9);
          fVar11 = *(float *)((int)tc0 + iVar9);
          *pfVar8 = fVar10;
          if (fVar10 <= fVar11) {
            (tc->i).x = tc0[0];
            (tc->i).y = tc0[1];
            (tc->i).z = tc0[2];
            (tc->i).w = tc0[3];
            comple_adjr_173._0_4_ = 0.0;
            comple_adjr_173._12_4_ = 0.0;
            comple_adjr_173._4_4_ = 0.0;
            comple_adjr_173._8_4_ = 0.0;
            break;
          }
          bVar3 = true;
        }
      }
    }
    uVar6 = uVar6 + 1 & 0xff;
    iVar9 = uVar6 << 2;
  } while (uVar6 < 3);
  tc0[1] = (tc->p).y;
  tc0[0] = (tc->p).x;
  tc0[2] = (tc->p).z;
  tc0[3] = (tc->p).w;
  uVar6 = 0;
  iVar9 = 0;
LAB_0018a8b8:
  if (*(float *)(comple_adjp_174 + iVar9) <= 0.0) {
LAB_0018a910:
    pfVar8 = (float *)((int)tc->pad + iVar9 + -0x48);
    if (*(float *)(comple_adjp_174 + iVar9) < 0.0) {
      fVar10 = *(float *)((int)camera.pad + iVar9 + -0x48);
      if (*pfVar8 < fVar10) {
        fVar10 = fVar10 + *(float *)(comple_adjp_174 + iVar9);
        fVar11 = *(float *)((int)tc0 + iVar9);
        *pfVar8 = fVar10;
        if (fVar10 <= fVar11) {
          (tc->p).x = tc0[0];
          (tc->p).y = tc0[1];
          (tc->p).z = tc0[2];
          (tc->p).w = tc0[3];
          comple_adjp_174._0_4_ = 0.0;
          comple_adjp_174._12_4_ = 0.0;
          comple_adjp_174._4_4_ = 0.0;
          comple_adjp_174._8_4_ = 0.0;
          goto LAB_0018a978;
        }
        bVar3 = true;
      }
    }
LAB_0018a964:
    uVar6 = uVar6 + 1 & 0xff;
    if (2 < uVar6) goto LAB_0018a978;
    iVar9 = uVar6 << 2;
    goto LAB_0018a8b8;
  }
  pfVar8 = (float *)((int)tc->pad + iVar9 + -0x48);
  fVar10 = *(float *)((int)camera.pad + iVar9 + -0x48);
  if (*pfVar8 <= fVar10) goto LAB_0018a910;
  fVar10 = fVar10 + *(float *)(comple_adjp_174 + iVar9);
  fVar11 = *(float *)((int)tc0 + iVar9);
  *pfVar8 = fVar10;
  if (fVar10 < fVar11) {
    bVar3 = true;
    goto LAB_0018a964;
  }
  (tc->p).x = tc0[0];
  (tc->p).y = tc0[1];
  (tc->p).z = tc0[2];
  (tc->p).w = tc0[3];
  comple_adjp_174._0_4_ = 0.0;
  comple_adjp_174._12_4_ = 0.0;
  comple_adjp_174._4_4_ = 0.0;
  comple_adjp_174._8_4_ = 0.0;
LAB_0018a978:
  if ((comple_adjfov_175 <= 0.0) || (tc->fov <= camera.fov)) {
    if (comple_adjfov_175 < 0.0) {
      if (tc->fov < camera.fov) goto LAB_0018a9e0;
      comple_adjfov_175 = 0.0;
    }
    else {
      comple_adjfov_175 = 0.0;
    }
  }
  else {
LAB_0018a9e0:
    bVar3 = true;
    tc->fov = camera.fov + comple_adjfov_175;
  }
  if ((comple_adjroll_176 <= 0.0) || (tc->roll <= camera.roll)) {
    if (0.0 <= comple_adjroll_176) {
      comple_adjroll_176 = 0.0;
      goto LAB_0018aa70;
    }
    if (camera.roll <= tc->roll) {
      comple_adjroll_176 = 0.0;
      goto LAB_0018aa70;
    }
  }
  bVar3 = true;
  tc->roll = camera.roll + comple_adjroll_176;
LAB_0018aa70:
  if (bVar3) {
    if (comple_cnt_170 != 0) {
      comple_cnt_170 = comple_cnt_170 - 1;
    }
  }
  else {
    compling = -1;
  }
  return;
}

u_char CompleReqChk(MAP_CAM_INFO *mci) {
	u_char req;
	
  uchar uVar1;
  bool bVar2;
  
  bVar2 = false;
  if (mci->kind == '\x03') {
    return '\0';
  }
  if (compling == -1) {
    uVar1 = mci->change;
  }
  else {
    if (compling != mci->no) {
      compling = -1;
    }
    if (compling != -1) {
      return '\0';
    }
    uVar1 = mci->change;
  }
  if (uVar1 != '\0') {
    bVar2 = mci->no_old != -1;
  }
  return bVar2;
}

void FinderModeCameraCtrl() {
	MOVE_BOX *mb;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	
  int iVar1;
  float tv [4];
  float rv [4];
  
  tv[0] = 0.0;
  if (plyr_wrk.move_mot == '\v') {
    tv[1] = DAT_00355b5c;
  }
  else {
    tv[1] = DAT_00355b60;
  }
  tv[2] = 0.0;
  tv[3] = 0.0;
  RotFvector(&plyr_wrk.move_box.trot.z,tv);
  sceVu0AddVector(&camera.p,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  if ((plyr_wrk.sta & 0x1000) == 0) {
    if ((plyr_wrk.sta & 0x400) == 0) {
      if ((plyr_wrk.sta & 0x8000000) == 0) {
        PlyrCamCondChk();
        SetFinderRot();
      }
      else if (plyr_wrk.move_box.tpos.w._0_2_ == 0) {
        plyr_wrk.move_box.comm_add.wrk._4_4_ = 0;
        plyr_wrk.move_box.pos_mid.z = 0.0;
        plyr_wrk.sta = plyr_wrk.sta & 0xf7ffffff;
        plyr_wrk.move_box.pos_mid.w = 0.0;
        plyr_wrk.move_box.comm_add.pu8 = (uchar *)0x0;
      }
      else {
        plyr_wrk.move_box.tpos.w._0_2_ = plyr_wrk.move_box.tpos.w._0_2_ + -1;
        sceVu0AddVector((Vector4 *)&plyr_wrk.move_box.trot.z,(Vector4 *)&plyr_wrk.move_box.trot.z,
                        (Vector4 *)&plyr_wrk.move_box.pos_mid.z);
        RotLimitChk(&plyr_wrk.move_box.trot.w);
      }
    }
    else {
      plyr_wrk.frot_x = plyr_wrk.frot_x + plyr_wrk.move_box.pos_mid.z;
      RotLimitChk(&plyr_wrk.frot_x);
      plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w + plyr_wrk.move_box.pos_mid.w;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
      plyr_wrk.move_box.pos_mid.z = plyr_wrk.move_box.pos_mid.z * DAT_00355b68;
      plyr_wrk.move_box.pos_mid.w = plyr_wrk.move_box.pos_mid.w * DAT_00355b68;
      plyr_wrk.move_box.tpos.w._0_2_ = plyr_wrk.move_box.tpos.w._0_2_ + -1;
      if (plyr_wrk.move_box.tpos.w._0_2_ == 0) {
        plyr_wrk.move_box.comm_add.wrk._4_4_ = 0;
        plyr_wrk.sta = plyr_wrk.sta & 0xfffffbff;
        plyr_wrk.move_box.pos_mid.z = 0.0;
        plyr_wrk.move_box.pos_mid.w = 0.0;
        plyr_wrk.move_box.comm_add.pu8 = (uchar *)0x0;
      }
    }
    rv[0] = plyr_wrk.frot_x;
    tv[2] = 1000.0;
    rv[1] = plyr_wrk.move_box.trot.w;
    tv[0] = 0.0;
    tv[1] = 0.0;
    tv[3] = 0.0;
    rv[2] = 0.0;
    rv[3] = 0.0;
    RotFvector(rv,tv);
    sceVu0AddVector(&camera.i,&camera.p,(Vector4 *)tv);
    camera.roll = DAT_00355b6c;
  }
  else {
    iVar1 = (uint)plyr_wrk.rock_trgt * 0x430;
    if (((*(uint *)((int)ene_wrk + iVar1) & 1) != 0) &&
       (*(char *)((int)ene_wrk + iVar1 + 0x358) != '\0')) {
      camera.i.y = *(float *)((int)ene_wrk + iVar1 + 0xc4);
      camera.i.x = *(float *)((int)ene_wrk + iVar1 + 0xc0);
      camera.i.w = *(float *)((int)ene_wrk + (uint)plyr_wrk.rock_trgt * 0x430 + 0xcc);
      camera.i.z = *(float *)((int)ene_wrk + (uint)plyr_wrk.rock_trgt * 0x430 + 200);
    }
    camera.roll = DAT_00355b64;
  }
  compling = -1;
  return;
}

void PlyrCamCondChk() {
  if (plyr_wrk.cond != 3) {
    if (plyr_wrk.cond < 4) {
      if (plyr_wrk.cond != 1) {
        return;
      }
      PconMahiCameraCtrl();
      return;
    }
    if (plyr_wrk.cond != 5) {
      return;
    }
  }
  PconTebureCameraCtrl();
  return;
}

void PconMahiCameraCtrl() {
	MOVE_BOX *mb;
	static u_char time = 0;
	static u_char flag = 0;
	
  if (time_189 == '\0') {
    time_189 = '\x03';
    flag_190 = flag_190 ^ 1;
  }
  else {
    time_189 = time_189 + -1;
  }
  if (flag_190 == 0) {
    plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w + DAT_00355b70;
  }
  else {
    plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w - DAT_00355b74;
  }
  RotLimitChk(&plyr_wrk.move_box.trot.w);
  return;
}

void PconTebureCameraCtrl() {
	MOVE_BOX *mb;
	float ax;
	float ay;
	char pad_x;
	char pad_y;
	u_char jpad_on;
	static float rot;
	static float rot_adj = 0.f;
	static float spd;
	static u_char flag = 0;
	
  int iVar1;
  float fVar2;
  char pad_x;
  char pad_y;
  uchar jpad_on;
  float ax;
  float ay;
  
  iVar1 = FinderModePadChk(&pad_x,(char *)((uint)&pad_x | 1),(float *)((uint)&pad_x | 4),
                           (float *)((uint)&pad_x | 8),(uchar *)((uint)&pad_x | 2));
  if (iVar1 == 0) {
    if (flag_197 == '\0') {
      if (0.0 <= rot_194) {
        rot_adj_195 = rot_adj_195 + DAT_00355b7c;
      }
      else {
        rot_adj_195 = rot_adj_195 - DAT_00355b80;
      }
      rot_194 = rot_194 + rot_adj_195;
      spd_196 = rot_adj_195 * DAT_00355b84;
      RotLimitChk(&rot_194);
    }
  }
  else {
    fVar2 = GetDist(ax,ay);
    spd_196 = fVar2 * DAT_00355b78;
    rot_194 = SgAtan2f(ax,-ay);
    flag_197 = '\x01';
  }
  fVar2 = SgSinf(rot_194);
  ax = spd_196 * fVar2;
  fVar2 = SgCosf(rot_194);
  ay = spd_196 * fVar2;
  plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w + ax;
  RotLimitChk(&plyr_wrk.move_box.trot.w);
  plyr_wrk.frot_x = plyr_wrk.frot_x + ay;
  RotLimitChk(&plyr_wrk.frot_x);
  if (plyr_wrk.frot_x <= DAT_00355b88) {
    if (plyr_wrk.frot_x < DAT_00355b8c) {
      plyr_wrk.frot_x = DAT_00355b8c;
    }
  }
  else {
    plyr_wrk.frot_x = DAT_00355b88;
  }
  if ((flag_197 != '\0') && (spd_196 = spd_196 * DAT_00355b90, spd_196 <= DAT_00355b94)) {
    rot_adj_195 = 0.0;
    flag_197 = '\0';
  }
  return;
}

int FinderModePadChk(char *pad_x, char *pad_y, float *ax, float *ay, u_char *jpad_on) {
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  *pad_y = '\0';
  *pad_x = '\0';
  *jpad_on = '\0';
  psVar2 = key_now[0];
  *ay = 0.0;
  sVar1 = *psVar2;
  *ax = 0.0;
  if ((((sVar1 != 0) || (*key_now[1] != 0)) || (*key_now[3] != 0)) || (*key_now[2] != 0)) {
    *jpad_on = '\x01';
  }
  if ((pad[0].id != 'y') && (*jpad_on == '\0')) {
    cVar3 = *pad_x;
    goto LAB_0018b208;
  }
  if (*key_now[0] == 0) {
    if (*key_now[1] != 0) {
      *ay = 40.0;
    }
  }
  else {
    *ay = -40.0;
  }
  if (*key_now[3] == 0) {
    if (*key_now[2] != 0) {
      *ax = -40.0;
      goto LAB_0018b114;
    }
    fVar5 = *ax;
  }
  else {
    *ax = 40.0;
LAB_0018b114:
    fVar5 = *ax;
  }
  if ((fVar5 == 0.0) && (*ay == 0.0)) {
    *ax = (float)(uint)pad[0].analog[2] - 128.0;
    *ay = (float)(uint)pad[0].analog[3] - 128.0;
    fVar5 = *ax;
  }
  cVar3 = '\x01';
  if ((40.0 <= fVar5) || (cVar3 = -1, fVar5 <= -40.0)) {
    *pad_x = cVar3;
  }
  cVar3 = '\x01';
  if ((40.0 <= *ay) || (cVar3 = -1, *ay <= -40.0)) {
    *pad_y = cVar3;
  }
  if ((*pad_y != '\0') && (opt_wrk.key_type - 4 < 4)) {
    *pad_y = -*pad_y;
  }
  cVar3 = *pad_x;
LAB_0018b208:
  iVar4 = 0;
  if ((cVar3 != '\0') || (*pad_y != '\0')) {
    iVar4 = 1;
  }
  return iVar4;
}

void SetFinderRot() {
	MOVE_BOX *mb;
	float delta;
	float dist;
	float spd;
	float ax;
	float ay;
	float rot;
	char pad_x;
	char pad_y;
	u_char jpad_on;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float in_f21;
  float fVar6;
  float unaff_f22;
  char pad_x;
  char pad_y;
  uchar jpad_on;
  float ax;
  float ay;
  
  fVar6 = 10.0;
  if (plyr_wrk.cond == 1) {
    return;
  }
  iVar3 = FinderModePadChk(&pad_x,(char *)((uint)&pad_x | 1),(float *)((uint)&pad_x | 4),
                           (float *)((uint)&pad_x | 8),(uchar *)((uint)&pad_x | 2));
  if (iVar3 == 0) {
    if (plyr_wrk.move_box.pos.z != 1.919407e-38) {
      in_f21 = DAT_00355b98;
      fVar6 = SgAtan2f((float)(0x140 - plyr_wrk.move_box.pos.z._0_2_),
                       (float)(0xd1 - plyr_wrk.move_box.pos.z._2_2_));
    }
  }
  else {
    in_f21 = 2.0;
    fVar6 = SgAtan2f(ax,ay);
    unaff_f22 = GetDist(ax,ay);
  }
  if (fVar6 != 10.0) {
    fVar5 = SgSinf(fVar6);
    ax = in_f21 * fVar5;
    fVar6 = SgCosf(fVar6);
    ay = in_f21 * fVar6;
    uVar4 = ((uint)plyr_wrk.move_box.pos.z & 0xffff) + (int)ax;
    uVar2 = (uint)plyr_wrk.move_box.pos.z & 0xffff0000;
    plyr_wrk.move_box.pos.z = (float)(uVar2 | uVar4 & 0xffff);
    plyr_wrk.move_box.pos.z._2_2_ = (short)(uVar2 >> 0x10);
    if (in_f21 == 2.0) {
      iVar3 = (int)(uVar4 * 0x10000) >> 0x10;
      if (iVar3 < 300) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(plyr_wrk.move_box.pos.z._2_2_,300);
      }
      else if (0x154 < iVar3) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(plyr_wrk.move_box.pos.z._2_2_,0x154);
      }
    }
    else if ((ax <= 0.0) || ((int)(uVar4 * 0x10000) >> 0x10 < 0x141)) {
      if ((ax < 0.0) &&
         (plyr_wrk.move_box.pos.z._0_2_ = (short)(uVar4 & 0xffff),
         plyr_wrk.move_box.pos.z._0_2_ < 0x140)) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(plyr_wrk.move_box.pos.z._2_2_,0x140);
      }
    }
    else {
      plyr_wrk.move_box.pos.z = (float)CONCAT22(plyr_wrk.move_box.pos.z._2_2_,0x140);
    }
    iVar3 = ((uint)plyr_wrk.move_box.pos.z >> 0x10) + (int)ay;
    uVar2 = (uint)plyr_wrk.move_box.pos.z & 0xffff;
    plyr_wrk.move_box.pos.z = (float)(uVar2 | iVar3 * 0x10000);
    plyr_wrk.move_box.pos.z._0_2_ = (short)uVar2;
    if (in_f21 == 2.0) {
      iVar3 = iVar3 * 0x10000 >> 0x10;
      if (iVar3 < 0xc2) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(0xc2,plyr_wrk.move_box.pos.z._0_2_);
      }
      else if (0xe0 < iVar3) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(0xe0,plyr_wrk.move_box.pos.z._0_2_);
      }
    }
    else if ((ay <= 0.0) || (iVar3 * 0x10000 >> 0x10 < 0xd2)) {
      if ((ay < 0.0) &&
         (plyr_wrk.move_box.pos.z._2_2_ = (short)((uint)(iVar3 * 0x10000) >> 0x10),
         plyr_wrk.move_box.pos.z._2_2_ < 0xd1)) {
        plyr_wrk.move_box.pos.z = (float)CONCAT22(0xd1,plyr_wrk.move_box.pos.z._0_2_);
      }
    }
    else {
      plyr_wrk.move_box.pos.z = (float)CONCAT22(0xd1,plyr_wrk.move_box.pos.z._0_2_);
    }
  }
  fVar6 = camera.fov;
  if (cam_custom_wrk.set_spe == '\x02') {
    if (*key_now[9] == 0) {
      if (*key_now[11] == 0) goto LAB_0018b518;
      camera.fov = camera.fov + DAT_00355ba4;
      bVar1 = DAT_00355ba8 < camera.fov;
      fVar6 = DAT_00355ba8;
    }
    else {
      camera.fov = camera.fov - DAT_00355b9c;
      bVar1 = camera.fov < DAT_00355ba0;
      fVar6 = DAT_00355ba0;
    }
    if (!bVar1) {
      fVar6 = camera.fov;
    }
  }
LAB_0018b518:
  camera.fov = fVar6;
  fVar6 = DAT_00355bac;
  if ((*key_now[6] == 0) && ((125.0 < unaff_f22 || (fVar6 = DAT_00355bb4, jpad_on != '\0')))) {
    fVar6 = DAT_00355bb0;
  }
  if (pad_x < '\0') {
    plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w - fVar6;
  }
  else if ('\0' < pad_x) {
    plyr_wrk.move_box.trot.w = plyr_wrk.move_box.trot.w + fVar6;
  }
  RotLimitChk(&plyr_wrk.move_box.trot.w);
  if (pad_y < '\0') {
    plyr_wrk.frot_x = plyr_wrk.frot_x + fVar6;
    bVar1 = DAT_00355bb8 < plyr_wrk.frot_x;
    fVar6 = DAT_00355bb8;
  }
  else {
    if (pad_y < '\x01') goto LAB_0018b5f0;
    plyr_wrk.frot_x = plyr_wrk.frot_x - fVar6;
    bVar1 = plyr_wrk.frot_x < DAT_00355bbc;
    fVar6 = DAT_00355bbc;
  }
  if (bVar1) {
    plyr_wrk.frot_x = fVar6;
  }
LAB_0018b5f0:
  RotLimitChk(&plyr_wrk.frot_x);
  return;
}

void CameraIdMoveCtrl() {
	MAP_CAM_DAT *mcd;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rav;
	float delta;
	u_short cn;
	char *str;
	char *str5;
	char *str6;
	char *str7;
	char *str0;
	char *str1;
	char *str2;
	char *str4;
	char *str_save;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong *puVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uchar g;
  char *str;
  uchar b;
  MAP_CAM_DAT *unaff_s1_lo;
  float fVar14;
  float fVar15;
  float y;
  float tv [4];
  float rav [4];
  
  memset(tv,0,0x10);
  fVar14 = DAT_00355bc0;
  memset((Vector4 *)rav,0,0x10);
  uVar5 = plyr_wrk.dop.dov[1]._0_2_;
  uVar4 = plyr_wrk.dop.dov[0]._0_2_;
  uVar13 = 1;
  rav[2] = 1000.0;
  str = "DOOR         ";
  if (*key_now[15] == 1) {
    cam_info_disp = cam_info_disp ^ 1;
  }
  if (cam_kind == 1) {
    unaff_s1_lo = map_cam_dat2 + plyr_wrk.dop.dov[1]._0_2_;
    if (cam_info_disp != '\0') {
      SetASCIIString2(0,430.0,10.0,1,0xdc,'d','d',"BATTLE       ");
      iVar12 = 0xff;
      g = 'd';
      b = 'd';
      goto LAB_0018b8ec;
    }
  }
  else {
    if (cam_kind < 2) {
      if (cam_kind == 0) {
        unaff_s1_lo = map_cam_dat + plyr_wrk.dop.dov[0]._0_2_;
        if (cam_info_disp == '\0') goto LAB_0018ba98;
        SetASCIIString2(0,430.0,10.0,1,0xdc,0xdc,'2',"NORMAL       ");
        iVar12 = 0xff;
        goto LAB_0018b8e4;
      }
    }
    else {
      if (cam_kind == 2) {
        unaff_s1_lo = map_cam_dat3 + plyr_wrk.dop.dov[2]._0_2_;
        str = "DRAMA        ";
        uVar4 = plyr_wrk.dop.dov[2]._0_2_;
      }
      else {
        if (cam_kind != 3) goto LAB_0018b8f8;
        unaff_s1_lo = map_cam_dat4 + plyr_wrk.dop.dov[3]._0_2_;
        uVar4 = plyr_wrk.dop.dov[3]._0_2_;
      }
      if (cam_info_disp == '\0') goto LAB_0018ba98;
      SetASCIIString2(0,430.0,10.0,1,'2',0xdc,'2',str);
      iVar12 = 0x32;
LAB_0018b8e4:
      g = 0xff;
      b = '2';
      uVar5 = uVar4;
LAB_0018b8ec:
      uVar13 = (ulong)iVar12;
      SetInteger2(0,540.0,10.0,1,(uchar)iVar12,g,b,(uint)uVar5);
    }
LAB_0018b8f8:
    if (cam_info_disp != '\0') {
      if (cam_type < 6) {
        SetASCIIString2(0,430.0,30.0,1,'d','d',0xfa,"CAMERA TYPE  ");
        fVar15 = 540.0;
        y = 50.0;
        SetInteger2(0,540.0,30.0,1,0xff,0xff,0xff,cam_type);
        SetASCIIString2(0,430.0,y,1,'d','d',0xfa,"STEP         ");
        SetInteger2(0,fVar15,y,1,0xff,0xff,0xff,cd_step);
        SetASCIIString2(0,430.0,70.0,1,'d','d',0xfa,"MOVE ID      ");
        uVar13 = 0xff;
        SetInteger2(0,fVar15,70.0,1,0xff,0xff,0xff,cam_id);
      }
      else {
        fVar15 = 430.0;
        SetASCIIString2(0,430.0,70.0,1,'d','d',0xfa,"MISSION NO   ");
        SetInteger2(0,540.0,70.0,1,0xff,0xff,0xff,msn_no);
        uVar13 = 0xf5;
        SetASCIIString2(0,fVar15,50.0,1,0xf5,'g',0xcb,"FILE SAVE MODE");
      }
    }
  }
LAB_0018ba98:
  if (((*key_now[8] != 0) && (*key_now[10] != 0)) && (*key_now[11] == 1)) {
    if (cdcopy[0] == 1) {
      iVar12 = (uint)(ushort)cdcopy[1] * 0x2c;
      uVar8 = 0x259ae0;
LAB_0018bb5c:
      uVar9 = iVar12 + (int)uVar8;
      puVar1 = (undefined *)((int)unaff_s1_lo->p0 + 5);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)unaff_s1_lo & 7;
      uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)unaff_s1_lo - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)unaff_s1_lo->p2 + 1);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)unaff_s1_lo->p1 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               0xffffffffffffffffU >> (uVar2 + 1) * 8 & 0x2c) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)unaff_s1_lo->p1 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)unaff_s1_lo->p3 + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)(unaff_s1_lo->p2 + 1) & 7;
      uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               0xffffffffffffffffU >> (uVar2 + 1) * 8 & 0x252740) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)(unaff_s1_lo->p2 + 1) - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)unaff_s1_lo->roll + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)(unaff_s1_lo->p3 + 2) & 7;
      uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)(unaff_s1_lo->p3 + 2) - uVar3) >> uVar3 * 8;
      uVar2 = uVar9 + 7 & 7;
      puVar6 = (ulong *)((uVar9 + 7) - uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
      uVar2 = uVar9 & 7;
      *(ulong *)(uVar9 - uVar2) =
           uVar8 << uVar2 * 8 | *(ulong *)(uVar9 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = uVar9 + 0xf & 7;
      puVar6 = (ulong *)((uVar9 + 0xf) - uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
      uVar2 = uVar9 + 8 & 7;
      puVar6 = (ulong *)((uVar9 + 8) - uVar2);
      *puVar6 = uVar10 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = uVar9 + 0x17 & 7;
      puVar6 = (ulong *)((uVar9 + 0x17) - uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
      uVar2 = uVar9 + 0x10 & 7;
      puVar6 = (ulong *)((uVar9 + 0x10) - uVar2);
      *puVar6 = uVar11 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = uVar9 + 0x1f & 7;
      puVar6 = (ulong *)((uVar9 + 0x1f) - uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
      uVar2 = uVar9 + 0x18 & 7;
      puVar6 = (ulong *)((uVar9 + 0x18) - uVar2);
      *puVar6 = uVar13 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)unaff_s1_lo->fov + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)(unaff_s1_lo->roll + 1) & 7;
      uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)(unaff_s1_lo->roll + 1) - uVar3) >> uVar3 * 8;
      fVar15 = unaff_s1_lo->fov[1];
      uVar2 = uVar9 + 0x27 & 7;
      puVar6 = (ulong *)((uVar9 + 0x27) - uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
      uVar2 = uVar9 + 0x20 & 7;
      puVar6 = (ulong *)((uVar9 + 0x20) - uVar2);
      *puVar6 = uVar13 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      *(float *)(uVar9 + 0x28) = fVar15;
    }
    else {
      if (1 < (ushort)cdcopy[0]) {
        if (cdcopy[0] == 2) {
          iVar12 = (uint)(ushort)cdcopy[1] * 0x2c;
          uVar8 = 0x25f0d0;
        }
        else {
          if (cdcopy[0] != 3) goto LAB_0018bbc0;
          iVar12 = (uint)(ushort)cdcopy[1] * 0x2c;
          uVar8 = 0x262460;
        }
        goto LAB_0018bb5c;
      }
      if (cdcopy[0] == 0) {
        iVar12 = (uint)(ushort)cdcopy[1] * 0x2c;
        uVar8 = 0x2544f0;
        goto LAB_0018bb5c;
      }
    }
LAB_0018bbc0:
    renewal_data_chk = 1;
  }
  if ((*key_now[9] == 1) && (*key_now[8] != 0)) {
    cam_kind = cam_kind + 1;
    if (3 < cam_kind) {
      cam_kind = 0;
    }
    cd_step = 0;
    cam_id = 0;
LAB_0018bca8:
    if (*key_now[8] != 0) goto LAB_0018bcb8;
  }
  else {
    if (cd_step != 0) {
      if (*key_now[9] == 1) {
        if (*key_now[8] != 0) goto LAB_0018bcb8;
        cam_id = cam_id ^ 1;
      }
      goto LAB_0018bca8;
    }
    if (*key_now[9] != 1) goto LAB_0018bca8;
    if (*key_now[8] == 0) {
      if (5 < cam_type) {
        msn_no = msn_no + 1;
      }
      cam_type = cam_type + 1;
      if (8 < cam_type) {
        cam_type = 0;
        msn_no = 0;
      }
      cd_edit_end = '\0';
      goto LAB_0018bca8;
    }
LAB_0018bcb8:
    if (*key_now[14] == 1) {
      cd_step = 0;
    }
  }
  if (*key_now[13] == 1) {
    if ((uint)cam_type < 6) {
      switch(cam_type) {
      case 0:
        cd_edit_end = SetMapCamDat0(unaff_s1_lo);
        break;
      case 1:
        cd_edit_end = SetMapCamDat1(unaff_s1_lo);
        break;
      case 2:
        cd_edit_end = SetMapCamDat2(unaff_s1_lo,(uchar)cam_id);
        break;
      case 3:
        cd_edit_end = SetMapCamDat3(unaff_s1_lo,(uchar)cam_id);
        break;
      case 4:
        cd_edit_end = SetMapCamDat4(unaff_s1_lo,(uchar)cam_id);
        break;
      case 5:
        cd_edit_end = SetMapCamDat5(unaff_s1_lo);
      }
    }
    else {
      if (renewal_data_chk != 0) {
        SaveCamDat((uchar)cam_kind,(uchar)msn_no);
      }
      cd_edit_end = '\x01';
    }
  }
  if (cd_edit_end != '\0') {
    if (cam_type < 6) {
      SetASCIIString2(0,430.0,90.0,1,0xff,'2','2',"NEW DATA SET!!");
      renewal_data_chk_cnt = 0;
      renewal_data_chk = 1;
      GetMCLocalPosPer(0,'\0',0xff);
    }
    else if (renewal_data_chk == 0) {
      SetASCIIString2(0,430.0,90.0,1,0xdc,0xdc,'2',"NO RENEWAL DATA");
    }
    else {
      SetASCIIString2(0,430.0,90.0,1,0xf0,'2','2',"RENEWAL DATA!!");
      bVar7 = 0x28 < renewal_data_chk_cnt;
      renewal_data_chk_cnt = renewal_data_chk_cnt + 1;
      if (bVar7) {
        renewal_data_chk = 0;
        cd_edit_end = '\0';
      }
    }
    cd_step = 0;
    cam_id = 0;
  }
  if (dbg_wrk.mode_on != 0) goto LAB_0018c1bc;
  if (*key_now[10] == 0) {
    if (*key_now[11] != 0) {
      tv[2] = -20.0;
    }
  }
  else {
    tv[2] = 20.0;
  }
  fVar15 = camera.fov;
  if (*key_now[8] == 0) {
    if (*key_now[5] == 0) {
      if (*key_now[6] == 0) {
        if (*key_now[3] == 0) {
          if (*key_now[2] != 0) {
            cam_id_move.rot_y[1] = cam_id_move.rot_y[1] - fVar14;
            if (cam_id_move.rot_y[1] < DAT_00355bf4) {
              cam_id_move.rot_y[1] = cam_id_move.rot_y[1] + DAT_00355bf8;
            }
            goto LAB_0018c108;
          }
        }
        else {
          cam_id_move.rot_y[1] = cam_id_move.rot_y[1] + fVar14;
          if (DAT_00355bec < cam_id_move.rot_y[1]) {
            cam_id_move.rot_y[1] = cam_id_move.rot_y[1] - DAT_00355bf0;
          }
LAB_0018c108:
          cd_edit_end = '\0';
        }
        if (*key_now[0] == 0) {
          if (*key_now[1] == 0) goto LAB_0018c180;
          fVar14 = cam_id_move.rot_x[0] - fVar14;
          bVar7 = fVar14 < DAT_00355c00;
          cam_id_move.rot_x[0] = DAT_00355c00;
        }
        else {
          fVar14 = cam_id_move.rot_x[0] + fVar14;
          bVar7 = DAT_00355bfc < fVar14;
          cam_id_move.rot_x[0] = DAT_00355bfc;
        }
        if (!bVar7) {
          cam_id_move.rot_x[0] = fVar14;
        }
        cd_edit_end = '\0';
      }
      else {
        if (*key_now[0] == 0) {
          if (*key_now[1] == 0) {
            if (*key_now[4] != 0) {
              camera.fov = DAT_00355be8;
              fVar15 = camera.fov;
            }
            goto LAB_0018c180;
          }
          camera.fov = camera.fov + DAT_00355be0;
          bVar7 = DAT_00355be4 < camera.fov;
          fVar15 = DAT_00355be4;
        }
        else {
          camera.fov = camera.fov - DAT_00355bd8;
          bVar7 = camera.fov < DAT_00355bdc;
          fVar15 = DAT_00355bdc;
        }
        if (!bVar7) {
          fVar15 = camera.fov;
        }
      }
    }
    else if (*key_now[3] == 0) {
      if (*key_now[2] == 0) {
        if (*key_now[4] != 0) {
          camera.roll = DAT_00355bd4;
        }
      }
      else {
        camera.roll = camera.roll + fVar14;
        if (DAT_00355bcc < camera.roll) {
          camera.roll = camera.roll - DAT_00355bd0;
        }
      }
    }
    else {
      camera.roll = camera.roll - fVar14;
      if (camera.roll < DAT_00355bc4) {
        camera.roll = camera.roll + DAT_00355bc8;
      }
    }
  }
  else {
    if (*key_now[3] == 0) {
      if (*key_now[2] != 0) {
        tv[0] = -20.0;
      }
    }
    else {
      tv[0] = 20.0;
    }
    if (*key_now[0] == 0) {
      if (*key_now[1] != 0) {
        tv[1] = 20.0;
      }
    }
    else {
      tv[1] = -20.0;
    }
  }
LAB_0018c180:
  camera.fov = fVar15;
  if (((tv[0] != 0.0) || (tv[1] != 0.0)) || (tv[2] != 0.0)) {
    cd_edit_end = '\0';
  }
LAB_0018c1bc:
  RotFvector(cam_id_move.rot_x,tv);
  RotFvector(cam_id_move.rot_y,tv);
  RotFvector(cam_id_move.rot_x,(float *)(Vector4 *)rav);
  RotFvector(cam_id_move.rot_y,(float *)(Vector4 *)rav);
  sceVu0AddVector((Vector4 *)cam_id_move.p,(Vector4 *)cam_id_move.p,(Vector4 *)tv);
  sceVu0AddVector((Vector4 *)&cam_id_move,(Vector4 *)cam_id_move.p,(Vector4 *)rav);
  camera.p.x = cam_id_move.p[0];
  camera.p.w = cam_id_move.p[3];
  camera.i.x = cam_id_move.i[0];
  camera.i.y = cam_id_move.i[1];
  camera.i.z = cam_id_move.i[2];
  camera.i.w = cam_id_move.i[3];
  camera.p.y = cam_id_move.p[1];
  camera.p.z = cam_id_move.p[2];
  return;
}

u_char SetMapCamDat0(MAP_CAM_DAT *mcd) {
	u_char i;
	
  float fVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  mcd->type = '\0';
  mcd->id = '\0';
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p0[uVar3] = (short)(int)camera.pad[uVar3 - 0xe];
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p1[uVar3] = (short)(int)camera.pad[uVar3 - 0x12];
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p2 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
  } while (uVar3 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p3 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
    fVar1 = camera.roll;
  } while (uVar3 < 3);
  mcd->roll[1] = 0.0;
  mcd->roll[0] = fVar1;
  fVar1 = camera.fov;
  mcd->fov[1] = 0.0;
  mcd->fov[0] = fVar1;
  return '\x01';
}

u_char SetMapCamDat1(MAP_CAM_DAT *mcd) {
	u_char i;
	
  float fVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  mcd->type = '\x01';
  mcd->id = '\0';
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p0[uVar3] = (short)(int)camera.pad[uVar3 - 0x12];
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p1[uVar3] = plyr_adj[uVar3];
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p2 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
  } while (uVar3 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p3 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
    fVar1 = camera.roll;
  } while (uVar3 < 3);
  mcd->roll[1] = 0.0;
  mcd->roll[0] = fVar1;
  fVar1 = camera.fov;
  mcd->fov[1] = 0.0;
  mcd->fov[0] = fVar1;
  return '\x01';
}

u_char SetMapCamDat2(MAP_CAM_DAT *mcd, u_char id) {
	u_char i;
	u_char end;
	static MAP_CAM_DAT tmpd;
	
  uchar uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = '\0';
  if (cd_step == 1) {
    if (*key_now[8] == 0) {
      fVar5 = mcd->roll[0];
      fVar6 = mcd->fov[0];
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1 & 0xff;
        (&DAT_00401e9e)[uVar3] = (short)(int)camera.pad[uVar3 - 0x12];
        uVar3 = uVar4;
      } while (uVar4 < 3);
      if (fVar5 == camera.roll) {
        mcd->roll[1] = 0.0;
      }
      else {
        mcd->roll[1] = camera.roll;
      }
      if (fVar6 == camera.fov) {
        mcd->fov[1] = 0.0;
      }
      else {
        mcd->fov[1] = camera.fov;
      }
    }
    cd_step = 2;
  }
  else if (cd_step < 2) {
    if (cd_step == 0) {
      memset(&tmpd_216,0,0x2c);
      mcd->type = '\x02';
      if (*key_now[8] == 0) {
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1 & 0xff;
          (&DAT_00401e92)[uVar3] = (short)(int)camera.pad[uVar3 - 0xe];
          uVar3 = uVar4;
        } while (uVar4 < 3);
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1 & 0xff;
          (&DAT_00401e98)[uVar3] = (short)(int)camera.pad[uVar3 - 0x12];
          uVar3 = uVar4;
        } while (uVar4 < 3);
        mcd->roll[0] = camera.roll;
        mcd->fov[0] = camera.fov;
      }
      cd_step = cd_step + 1;
    }
    else {
      uVar1 = '\x01';
    }
  }
  else if (cd_step == 2) {
    mcd->id = id;
    if ((DAT_00401e92 != 0) || (_DAT_00401e94 != 0)) {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1 & 0xff;
        mcd->p0[uVar3] = (&DAT_00401e92)[uVar3];
        uVar3 = uVar4;
      } while (uVar4 < 3);
    }
    if ((_DAT_00401e98 != 0) || (DAT_00401e9c != 0)) {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1 & 0xff;
        mcd->p1[uVar3] = (&DAT_00401e98)[uVar3];
        uVar3 = uVar4;
      } while (uVar4 < 3);
    }
    if ((DAT_00401e9e != 0) || (DAT_00401ea0 != 0)) {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1 & 0xff;
        mcd->p2[uVar3] = (&DAT_00401e9e)[uVar3];
        uVar3 = uVar4;
      } while (uVar4 < 3);
    }
    uVar3 = 0;
    do {
      psVar2 = mcd->p3 + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      *psVar2 = 0;
    } while (uVar3 < 3);
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\x01';
  }
  return uVar1;
}

u_char SetMapCamDat3(MAP_CAM_DAT *mcd, u_char id) {
	u_char i;
	u_char end;
	static MAP_CAM_DAT tmpd;
	
  int iVar1;
  uchar uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = '\0';
  if (cd_step == 1) {
    if (*key_now[8] == 0) {
      fVar7 = mcd->roll[0];
      fVar8 = mcd->fov[0];
      uVar5 = 0;
      do {
        iVar1 = uVar5 - 0x12;
        iVar3 = uVar5 * 2;
        uVar5 = uVar5 + 1 & 0xff;
        *(short *)((int)&DAT_00401ec8 + iVar3) = (short)(int)camera.pad[iVar1];
      } while (uVar5 < 3);
      if (fVar7 == camera.roll) {
        mcd->roll[1] = 0.0;
      }
      else {
        mcd->roll[1] = camera.roll;
      }
      if (fVar8 == camera.fov) {
        mcd->fov[1] = 0.0;
      }
      else {
        mcd->fov[1] = camera.fov;
      }
    }
    cd_step = 2;
  }
  else if (cd_step < 2) {
    if (cd_step == 0) {
      memset(&tmpd_220,0,0x2c);
      mcd->type = '\x03';
      if (*key_now[8] == 0) {
        uVar5 = 0;
        do {
          uVar6 = uVar5 + 1 & 0xff;
          (&DAT_00401ec2)[uVar5] = (short)(int)camera.pad[uVar5 - 0x12];
          uVar5 = uVar6;
        } while (uVar6 < 3);
        mcd->roll[0] = camera.roll;
        mcd->fov[0] = camera.fov;
      }
      cd_step = cd_step + 1;
    }
    else {
      uVar2 = '\x01';
    }
  }
  else if (cd_step == 2) {
    mcd->id = id;
    if ((DAT_00401ec2 != 0) || (_DAT_00401ec4 != 0)) {
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1 & 0xff;
        mcd->p0[uVar5] = (&DAT_00401ec2)[uVar5];
        uVar5 = uVar6;
      } while (uVar6 < 3);
    }
    if ((DAT_00401ec8 != 0) || (DAT_00401ecc != 0)) {
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1 & 0xff;
        mcd->p1[uVar5] = *(short *)((int)&DAT_00401ec8 + uVar5 * 2);
        uVar5 = uVar6;
      } while (uVar6 < 3);
    }
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1 & 0xff;
      mcd->p2[uVar5] = plyr_adj[uVar5];
      uVar5 = uVar6;
    } while (uVar6 < 3);
    uVar5 = 0;
    do {
      psVar4 = mcd->p3 + uVar5;
      uVar5 = uVar5 + 1 & 0xff;
      *psVar4 = 0;
    } while (uVar5 < 3);
    uVar2 = '\x01';
  }
  else {
    uVar2 = '\x01';
  }
  return uVar2;
}

u_char SetMapCamDat4(MAP_CAM_DAT *mcd, u_char id) {
	u_char i;
	u_char end;
	static MAP_CAM_DAT tmpd;
	
  int iVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = '\0';
  if (cd_step == 1) {
    if (*key_now[8] == 0) {
      fVar6 = mcd->roll[0];
      fVar7 = mcd->fov[0];
      uVar4 = 0;
      do {
        iVar1 = uVar4 - 0xe;
        iVar3 = uVar4 * 2;
        uVar4 = uVar4 + 1 & 0xff;
        *(short *)((int)&DAT_00401ef8 + iVar3) = (short)(int)camera.pad[iVar1];
      } while (uVar4 < 3);
      uVar4 = 0;
      do {
        iVar1 = uVar4 - 0x12;
        iVar3 = uVar4 * 2;
        uVar4 = uVar4 + 1 & 0xff;
        *(short *)((int)&DAT_00401f04 + iVar3) = (short)(int)camera.pad[iVar1];
      } while (uVar4 < 3);
      if (fVar6 == camera.roll) {
        mcd->roll[1] = 0.0;
      }
      else {
        mcd->roll[1] = camera.roll;
      }
      if (fVar7 == camera.fov) {
        mcd->fov[1] = 0.0;
      }
      else {
        mcd->fov[1] = camera.fov;
      }
    }
    cd_step = 2;
  }
  else if (cd_step < 2) {
    if (cd_step == 0) {
      memset(&tmpd_224,0,0x2c);
      mcd->type = '\x04';
      if (*key_now[8] == 0) {
        uVar4 = 0;
        do {
          uVar5 = uVar4 + 1 & 0xff;
          (&DAT_00401ef2)[uVar4] = (short)(int)camera.pad[uVar4 - 0xe];
          uVar4 = uVar5;
        } while (uVar5 < 3);
        uVar4 = 0;
        do {
          uVar5 = uVar4 + 1 & 0xff;
          (&DAT_00401efe)[uVar4] = (short)(int)camera.pad[uVar4 - 0x12];
          uVar4 = uVar5;
        } while (uVar5 < 3);
        mcd->roll[0] = camera.roll;
        mcd->fov[0] = camera.fov;
      }
      cd_step = cd_step + 1;
    }
    else {
      uVar2 = '\x01';
    }
  }
  else if (cd_step == 2) {
    mcd->id = id;
    if ((DAT_00401ef2 != 0) || (_DAT_00401ef4 != 0)) {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1 & 0xff;
        mcd->p0[uVar4] = (&DAT_00401ef2)[uVar4];
        uVar4 = uVar5;
      } while (uVar5 < 3);
    }
    if ((DAT_00401ef8 != 0) || (DAT_00401efc != 0)) {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1 & 0xff;
        mcd->p1[uVar4] = *(short *)((int)&DAT_00401ef8 + uVar4 * 2);
        uVar4 = uVar5;
      } while (uVar5 < 3);
    }
    if ((DAT_00401efe != 0) || (_DAT_00401f00 != 0)) {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1 & 0xff;
        mcd->p2[uVar4] = (&DAT_00401efe)[uVar4];
        uVar4 = uVar5;
      } while (uVar5 < 3);
    }
    if ((DAT_00401f04 != 0) || (uVar2 = '\x01', DAT_00401f08 != 0)) {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1 & 0xff;
        mcd->p3[uVar4] = *(short *)((int)&DAT_00401f04 + uVar4 * 2);
        uVar4 = uVar5;
      } while (uVar5 < 3);
      uVar2 = '\x01';
    }
  }
  else {
    uVar2 = '\x01';
  }
  return uVar2;
}

u_char SetMapCamDat5(MAP_CAM_DAT *mcd) {
	u_char i;
	
  float fVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  mcd->type = '\x05';
  mcd->id = '\0';
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p0[uVar3] =
         (short)(int)(camera.pad[uVar3 - 0x12] - *(float *)(plyr_wrk.fp + uVar3 * 2 + 0x1c));
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    mcd->p1[uVar3] = plyr_adj[uVar3];
    uVar3 = uVar4;
  } while (uVar4 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p2 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
  } while (uVar3 < 3);
  uVar3 = 0;
  do {
    psVar2 = mcd->p3 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    *psVar2 = 0;
    fVar1 = camera.roll;
  } while (uVar3 < 3);
  mcd->roll[1] = 0.0;
  mcd->roll[0] = fVar1;
  fVar1 = camera.fov;
  mcd->fov[1] = 0.0;
  mcd->fov[0] = fVar1;
  return '\x01';
}

void SaveCamDat(u_char kind, u_char mn) {
	int fd;
	char fname[38];
	char fname2[39];
	char fname3[39];
	char fname4[39];
	
  char *pcVar1;
  uint uVar2;
  MAP_CAM_DAT *pMVar3;
  undefined8 unaff_s0;
  char fname [38];
  char fname2 [39];
  char fname3 [39];
  char fname4 [39];
  
  pcVar1 = fname + 7;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_map_cam_0034e5b8._0_8_ >> (7 - uVar2) * 8;
  fname._0_8_ = s_host0____bin_data_camera_map_cam_0034e5b8._0_8_;
  pcVar1 = fname + 0xf;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_map_cam_0034e5b8._8_8_ >> (7 - uVar2) * 8;
  fname._8_8_ = s_host0____bin_data_camera_map_cam_0034e5b8._8_8_;
  pcVar1 = fname + 0x17;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_map_cam_0034e5b8._16_8_ >> (7 - uVar2) * 8;
  fname._16_8_ = s_host0____bin_data_camera_map_cam_0034e5b8._16_8_;
  pcVar1 = fname + 0x1f;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_map_cam_0034e5b8._24_8_ >> (7 - uVar2) * 8;
  fname._24_8_ = s_host0____bin_data_camera_map_cam_0034e5b8._24_8_;
  pcVar1 = fname + 0x23;
  uVar2 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar2) =
       *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_map_cam_0034e5b8._32_4_ >> (3 - uVar2) * 8;
  fname._32_4_ = s_host0____bin_data_camera_map_cam_0034e5b8._32_4_;
  fname[36] = s_host0____bin_data_camera_map_cam_0034e5b8[36];
  fname[37] = s_host0____bin_data_camera_map_cam_0034e5b8[37];
  pcVar1 = fname2 + 7;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_bmap_ca_0034e5e0._0_8_ >> (7 - uVar2) * 8;
  fname2._0_8_ = s_host0____bin_data_camera_bmap_ca_0034e5e0._0_8_;
  pcVar1 = fname2 + 0xf;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_bmap_ca_0034e5e0._8_8_ >> (7 - uVar2) * 8;
  fname2._8_8_ = s_host0____bin_data_camera_bmap_ca_0034e5e0._8_8_;
  pcVar1 = fname2 + 0x17;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_bmap_ca_0034e5e0._16_8_ >> (7 - uVar2) * 8;
  fname2._16_8_ = s_host0____bin_data_camera_bmap_ca_0034e5e0._16_8_;
  pcVar1 = fname2 + 0x1f;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_bmap_ca_0034e5e0._24_8_ >> (7 - uVar2) * 8;
  fname2._24_8_ = s_host0____bin_data_camera_bmap_ca_0034e5e0._24_8_;
  pcVar1 = fname2 + 0x23;
  uVar2 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar2) =
       *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_bmap_ca_0034e5e0._32_4_ >> (3 - uVar2) * 8;
  fname2._32_4_ = s_host0____bin_data_camera_bmap_ca_0034e5e0._32_4_;
  fname2[36] = s_host0____bin_data_camera_bmap_ca_0034e5e0[36];
  fname2[37] = s_host0____bin_data_camera_bmap_ca_0034e5e0[37];
  fname2[38] = s_host0____bin_data_camera_bmap_ca_0034e5e0[38];
  pcVar1 = fname3 + 7;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_dmap_ca_0034e608._0_8_ >> (7 - uVar2) * 8;
  fname3._0_8_ = s_host0____bin_data_camera_dmap_ca_0034e608._0_8_;
  pcVar1 = fname3 + 0xf;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_dmap_ca_0034e608._8_8_ >> (7 - uVar2) * 8;
  fname3._8_8_ = s_host0____bin_data_camera_dmap_ca_0034e608._8_8_;
  pcVar1 = fname3 + 0x17;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_dmap_ca_0034e608._16_8_ >> (7 - uVar2) * 8;
  fname3._16_8_ = s_host0____bin_data_camera_dmap_ca_0034e608._16_8_;
  pcVar1 = fname3 + 0x1f;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_dmap_ca_0034e608._24_8_ >> (7 - uVar2) * 8;
  fname3._24_8_ = s_host0____bin_data_camera_dmap_ca_0034e608._24_8_;
  pcVar1 = fname3 + 0x23;
  uVar2 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar2) =
       *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_dmap_ca_0034e608._32_4_ >> (3 - uVar2) * 8;
  fname3._32_4_ = s_host0____bin_data_camera_dmap_ca_0034e608._32_4_;
  fname3[36] = s_host0____bin_data_camera_dmap_ca_0034e608[36];
  fname3[37] = s_host0____bin_data_camera_dmap_ca_0034e608[37];
  fname3[38] = s_host0____bin_data_camera_dmap_ca_0034e608[38];
  pcVar1 = fname4 + 7;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_tmap_ca_0034e630._0_8_ >> (7 - uVar2) * 8;
  fname4._0_8_ = s_host0____bin_data_camera_tmap_ca_0034e630._0_8_;
  pcVar1 = fname4 + 0xf;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_tmap_ca_0034e630._8_8_ >> (7 - uVar2) * 8;
  fname4._8_8_ = s_host0____bin_data_camera_tmap_ca_0034e630._8_8_;
  pcVar1 = fname4 + 0x17;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_tmap_ca_0034e630._16_8_ >> (7 - uVar2) * 8;
  fname4._16_8_ = s_host0____bin_data_camera_tmap_ca_0034e630._16_8_;
  pcVar1 = fname4 + 0x1f;
  uVar2 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar2) =
       *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_tmap_ca_0034e630._24_8_ >> (7 - uVar2) * 8;
  fname4._24_8_ = s_host0____bin_data_camera_tmap_ca_0034e630._24_8_;
  pcVar1 = fname4 + 0x23;
  uVar2 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar2) =
       *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       s_host0____bin_data_camera_tmap_ca_0034e630._32_4_ >> (3 - uVar2) * 8;
  fname4._32_4_ = s_host0____bin_data_camera_tmap_ca_0034e630._32_4_;
  fname4[36] = s_host0____bin_data_camera_tmap_ca_0034e630[36];
  fname4[37] = s_host0____bin_data_camera_tmap_ca_0034e630[37];
  fname4[38] = s_host0____bin_data_camera_tmap_ca_0034e630[38];
  if (kind == '\x01') {
    fname2._32_2_ = CONCAT11(mn + '1',(char)s_host0____bin_data_camera_bmap_ca_0034e5e0._32_4_);
    fname2._32_4_ =
         s_host0____bin_data_camera_bmap_ca_0034e5e0._32_4_ & 0xffff0000 | (uint)fname2._32_2_;
    unaff_s0 = sceOpen(fname2,0x202);
    sceLseek(unaff_s0,0,0);
    pMVar3 = map_cam_dat2;
  }
  else {
    if (1 < kind) {
      if (kind == '\x02') {
        fname3._32_2_ = CONCAT11(mn + '1',(char)s_host0____bin_data_camera_dmap_ca_0034e608._32_4_);
        fname3._32_4_ =
             s_host0____bin_data_camera_dmap_ca_0034e608._32_4_ & 0xffff0000 | (uint)fname3._32_2_;
        unaff_s0 = sceOpen(fname3,0x202);
        sceLseek(unaff_s0,0,0);
        sceWrite(unaff_s0,0x25f0d0,0x3390);
      }
      else if (kind == '\x03') {
        fname4._32_2_ = CONCAT11(mn + '1',(char)s_host0____bin_data_camera_tmap_ca_0034e630._32_4_);
        fname4._32_4_ =
             s_host0____bin_data_camera_tmap_ca_0034e630._32_4_ & 0xffff0000 | (uint)fname4._32_2_;
        unaff_s0 = sceOpen(fname4,0x202);
        sceLseek(unaff_s0,0,0);
        sceWrite(unaff_s0,0x262460,0x3390);
      }
      goto LAB_0018d250;
    }
    if (kind != '\0') goto LAB_0018d250;
    fname._32_4_ = s_host0____bin_data_camera_map_cam_0034e5b8._32_4_ & 0xffffff00 |
                   (uint)(byte)(mn + 0x31);
    unaff_s0 = sceOpen(fname,0x202);
    sceLseek(unaff_s0,0,0);
    pMVar3 = map_cam_dat;
  }
  sceWrite(unaff_s0,pMVar3,22000);
LAB_0018d250:
  sceClose(unaff_s0);
  return;
}

void ReqFinderInOverRap(u_short time) {
  fior_tm = time;
  return;
}

void FinderInOverRapCtrl() {
  if (fior_tm != 0) {
    fior_tm = fior_tm + -1;
    SetEffects(8,1);
    return;
  }
  return;
}

void PlyrDmgCameraCtrl() {
	sceVu0FVECTOR tr;
	sceVu0FVECTOR tv;
	static int cnt = 0;
	static sceVu0FVECTOR cv = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	
  float fVar1;
  float tr [4];
  float tv [4];
  
  if (plyr_wrk.dmg_cam_flag == '\x01') {
    if (cnt_240 == 0) {
      plyr_wrk.dmg_cam_flag = '\x02';
    }
    else {
      cnt_240 = cnt_240 + -1;
      sceVu0AddVector(&camera.p,&camera.p,(Vector4 *)cv_241);
    }
  }
  else if ((plyr_wrk.dmg_cam_flag < 2) && (plyr_wrk.dmg_cam_flag == '\0')) {
    NormalCameraCtrl();
    camera.i.y = plyr_wrk.move_box.spd.w - 500.0;
    camera.i.x = plyr_wrk.move_box.spd.z;
    camera.i.z = plyr_wrk.move_box.rot.x;
    camera.i.w = plyr_wrk.move_box.rot.y;
    GetTrgtRotFromPlyr((float *)&camera,tr,3);
    tv[0] = 0.0;
    tv[2] = 700.0;
    tv[1] = 0.0;
    tv[3] = 0.0;
    RotFvector(tr,(float *)(Vector4 *)tv);
    sceVu0AddVector((Vector4 *)tv,&camera.i,(Vector4 *)tv);
    fVar1 = GetDistV2((float *)(Vector4 *)tv,(float *)&camera);
    cnt_240 = (int)(fVar1 / 60.0);
    sceVu0SubVector(0x320010,(Vector4 *)tv,0x252840);
    sceVu0DivVector((float)cnt_240,0x320010,0x320010);
    plyr_wrk.dmg_cam_flag = '\x01';
  }
  return;
}

void ReqDramaCamera(u_char req, u_short no, u_short time) {
	u_short *tbl;
	u_char i;
	
  short___0_ *psVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short *in_t0_lo;
  
  if (req == '\0') {
    ClearDramaCamReq();
    return;
  }
  drm_cam_req = '\x01';
  switch(ingame_wrk.msn_no) {
  case 0:
    psVar1 = &dc_no_tbl0;
    break;
  case 1:
    psVar1 = &dc_no_tbl0;
    break;
  case 2:
    psVar1 = &dc_no_tbl1;
    break;
  case 3:
    psVar1 = &dc_no_tbl2;
    break;
  case 4:
    psVar1 = &dc_no_tbl3;
    break;
  default:
    goto switchD_0018d450_caseD_5;
  }
  in_t0_lo = *(short **)(psVar1 + ((int)no & 0xffffU) * 4);
switchD_0018d450_caseD_5:
  uVar4 = 0;
  drm_cam_tm = time;
  if (*in_t0_lo != -1) {
    iVar3 = 0;
    psVar2 = in_t0_lo;
    do {
      uVar4 = uVar4 + 1 & 0xff;
      *(short *)((int)drm_cam_no + iVar3) = *psVar2;
      if (0xb < uVar4) {
        return;
      }
      iVar3 = uVar4 * 2;
      psVar2 = in_t0_lo + uVar4;
    } while (in_t0_lo[uVar4] != -1);
  }
  return;
}

void DramaCameraReqCtrl() {
	u_char i;
	u_char chk;
	
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if (drm_cam_req != '\0') {
    sVar2 = drm_cam_tm + -1;
    if ((drm_cam_tm != 0) && (drm_cam_tm = sVar2, sVar2 == 0)) {
      ClearDramaCamReq();
    }
    if (drm_cam_req != '\0') {
      bVar1 = false;
      if (drm_cam_no[0] != -1) {
        if (plyr_wrk.dop.dov[2]._0_2_ == drm_cam_no[0]) {
          bVar1 = true;
        }
        else {
          uVar3 = 1;
          do {
            uVar4 = uVar3 & 0xff;
            if ((0xb < uVar4) || (drm_cam_no[uVar4] == -1)) goto LAB_0018d5b8;
            uVar3 = uVar4 + 1;
          } while (plyr_wrk.dop.dov[2]._0_2_ != drm_cam_no[uVar4]);
          bVar1 = true;
        }
      }
LAB_0018d5b8:
      if (!bVar1) {
        ClearDramaCamReq();
        return;
      }
    }
  }
  return;
}

void ClearDramaCamReq() {
	u_char i;
	
  short *psVar1;
  uint uVar2;
  
  drm_cam_req = '\0';
  drm_cam_tm = 0;
  uVar2 = 0;
  do {
    psVar1 = drm_cam_no + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *psVar1 = -1;
  } while (uVar2 < 0xc);
  return;
}
