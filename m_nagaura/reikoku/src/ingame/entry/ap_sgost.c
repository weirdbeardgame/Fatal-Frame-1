// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#104,  not equal)
enum {
	SGST_MODE_NO_REQ = 0,
	SGST_MODE_AP_IN = 1,
	SGST_MODE_AP_LOAD = 2,
	SGST_MODE_BATTLE = 3,
	SGST_MODE_DEAD_IN = 4,
	SGST_MODE_MOT_REL = 5,
	SGST_MODE_BHSE_WAIT = 6,
	SGST_MODE_DD_LOAD = 7,
	SGST_MODE_END = 8
};

// warning: multiple differing types with the same name (#104,  not equal)
enum {
	SGLOAD_MODE_REQ = 0,
	SGLOAD_MODE_START = 1,
	SGLOAD_MODE_MDL = 2,
	SGLOAD_MODE_MOT = 3,
	SGLOAD_MODE_SE = 4,
	SGLOAD_MODE_SE2 = 5,
	SGLOAD_MODE_END = 6
};

// warning: multiple differing types with the same name (#104,  not equal)
enum {
	SGDISP_MODE_REQ = 0,
	SGDISP_MODE_START = 1,
	SGDISP_MODE_BLACK_OUT0 = 2,
	SGDISP_MODE_BLACK_IN0 = 3,
	SGDISP_MODE_CMR_ZOOM = 4,
	SGDISP_MODE_BLACK_OUT1 = 5,
	SGDISP_MODE_BLACK_IN1 = 6,
	SGDISP_MODE_END = 7,
	SGDISP_MODE_WHITE_OUT0_1 = 8,
	SGDISP_MODE_WHITE_OUT0_2 = 9,
	SGDISP_MODE_WHITE_OUT1_1 = 10,
	SGDISP_MODE_WHITE_OUT1_2 = 11,
	SGDISP_MODE_WHITE_OUT1_3 = 12
};

typedef struct {
	u_char mode;
	u_char load_mode;
	u_char disp_mode;
	u_char dat_no;
	u_char sg_no;
	u_char bak_ene;
	short int time;
} SGST_WRK;

typedef struct {
	u_char sg_no;
} SGST_DAT;

typedef struct {
	u_short st_x0;
	short int st_y0;
	u_short st_z0;
	u_short st_x1;
	short int st_y1;
	u_short st_z1;
	u_short ed_x0;
	short int ed_y0;
	u_short ed_z0;
	u_short ed_x1;
	short int ed_y1;
	u_short ed_z1;
} SGEF_DAT;

SGEF_DAT sgef_dat[0] = {
};
u_short sgef_adpcm_dat[0] = {
};
SGST_WRK sgst_wrk = {
	/* .mode = */ 0,
	/* .load_mode = */ 0,
	/* .disp_mode = */ 0,
	/* .dat_no = */ 0,
	/* .sg_no = */ 0,
	/* .bak_ene = */ 0,
	/* .time = */ 0
};
SgCAMERA sg_cmr_bak = {
	/* .p = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .i = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .roll = */ 0.f,
	/* .fov = */ 0.f,
	/* .nearz = */ 0.f,
	/* .farz = */ 0.f,
	/* .ax = */ 0.f,
	/* .ay = */ 0.f,
	/* .cx = */ 0.f,
	/* .cy = */ 0.f,
	/* .zmin = */ 0.f,
	/* .zmax = */ 0.f,
	/* .pad = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	},
	/* .vs = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .vc = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .vcv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .ws = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wc = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wcv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .zd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .yd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};

void SettleGhostInit() {
  memset(&sgst_wrk,0,8);
  return;
}

int SettleGhostAppearReq(int sg_no) {
  int iVar1;
  
  sgst_wrk.sg_no = (byte)sg_no;
  iVar1 = 0x13;
  ingame_wrk.mode = 0x13;
  sgst_wrk.dat_no = ingame_wrk.msn_no - 3;
  sgst_wrk.mode = '\x01';
  ReqPlayerStop('\x01');
  return iVar1;
}

void SettleGhostMain() {
	int end;
	static int sg_load_id;
	
  int iVar1;
  int iVar2;
  
  switch(sgst_wrk.mode) {
  case '\x01':
    sgst_wrk.load_mode = '\0';
    sgst_wrk.mode = '\x02';
    sgst_wrk.disp_mode = '\0';
    break;
  case '\x02':
    if (sgst_wrk.sg_no == 5) {
      iVar2 = SettleGhostLoadTwoSize();
    }
    else {
      iVar2 = SettleGhostLoadOneSize();
    }
    iVar1 = SettleGhostStartDisp();
    if (iVar1 != 0 && iVar2 != 0) {
      sgst_wrk.mode = '\x03';
      ingame_wrk.mode = 6;
      SettleGhostBattleSet();
      return;
    }
    break;
  case '\x04':
    sgst_wrk.mode = '\x05';
  case '\x05':
    if (sgst_wrk.sg_no == 5) {
      DeadGhostLoadReq();
      sg_load_id_123 = SeFileLoadAndSet(0x547,1);
      sgst_wrk.mode = '\x06';
    }
    else {
      iVar2 = GuardGhostReloadReq();
      if (iVar2 == 0) {
LAB_0019bf14:
        sgst_wrk.mode = '\b';
      }
      else {
        motReleaseAniMdlBuf((uint)*(ushort *)
                                   ((uint)sgst_wrk.sg_no * 0x40 +
                                    *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1c),
                            (uint *)0xb90000);
        sgst_wrk.mode = '\a';
      }
    }
    break;
  case '\x06':
    iVar2 = IsLoadEnd(sg_load_id_123);
    if (iVar2 == 0) {
      return;
    }
    sgst_wrk.mode = '\a';
  case '\a':
    if (sgst_wrk.sg_no == 5) {
      iVar2 = DeadGhostLoad();
      if (iVar2 == 0) {
        return;
      }
      ene_dead_load = 0;
      sgst_wrk.mode = '\b';
      return;
    }
    iVar2 = GuardGhostLoad();
    if (iVar2 == 0) {
      return;
    }
    goto LAB_0019bf14;
  case '\b':
    ingame_wrk.mode = 6;
    sgst_wrk.mode = '\0';
  }
  return;
}

int SettleGhostLoadOneSize() {
  int iVar1;
  
  switch(sgst_wrk.load_mode) {
  case '\0':
    sgst_wrk.load_mode = '\x01';
    return 0;
  case '\x01':
    if (ap_wrk.ggst_no != 0xff) {
      motReleaseAniMdlBuf((uint)*(ushort *)
                                 ((uint)ap_wrk.ggst_no * 0x40 +
                                  *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1c),
                          (uint *)0xb90000);
    }
    LoadReq(*(ushort *)
             ((uint)sgst_wrk.sg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a
             ) + 799,0xd80000);
    sgst_wrk.load_mode = '\x02';
    return 0;
  case '\x02':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      motInitEnemyMdl((uint *)0xd80000,
                      (uint)*(ushort *)
                             ((uint)sgst_wrk.sg_no * 0x40 +
                              *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a));
      LoadEneDmgTex((uint)*(ushort *)
                           ((uint)sgst_wrk.sg_no * 0x40 +
                            *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a),
                    (uint *)0xc28000);
      LoadReq(*(ushort *)
               ((uint)sgst_wrk.sg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) +
               0x1c) + 0x363,0xb90000);
      sgst_wrk.load_mode = '\x03';
      return 0;
    }
    break;
  case '\x03':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      iVar1 = (uint)sgst_wrk.sg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4);
      motInitEnemyAnm((uint *)0xb90000,(uint)*(ushort *)(iVar1 + 0x1a),
                      (uint)*(ushort *)(iVar1 + 0x1c));
      SeFileLoadAndSet(*(uint *)((uint)sgst_wrk.sg_no * 0x40 +
                                 *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x20),0x12);
      sgst_wrk.load_mode = '\x04';
      return 0;
    }
    break;
  case '\x04':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      sgst_wrk.load_mode = '\x06';
      return 0;
    }
    break;
  case '\x06':
    return 1;
  }
  return 0;
}

int SettleGhostLoadTwoSize() {
	static int sg_load_id;
	
  int iVar1;
  
  switch(sgst_wrk.load_mode) {
  case '\0':
    sgst_wrk.load_mode = '\x01';
    return 0;
  case '\x01':
    DeadGhostLoadDel();
    motReleaseAniMdlBuf(0x1e,(uint *)0xa30000);
    LoadReq(0x344,0xc80000);
    LoadReq(0x362,0xd00000);
    sgst_wrk.load_mode = '\x02';
    return 0;
  case '\x02':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      motInitEnemyMdl((uint *)0xc80000,0x25);
      motInitEnemyMdl((uint *)0xd00000,0x43);
      LoadEneDmgTex(0x25,(uint *)0xac8000);
      LoadReq(0x37c,0xa30000);
      sgst_wrk.load_mode = '\x03';
      return 0;
    }
    break;
  case '\x03':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      motInitEnemyAnm((uint *)0xa30000,0x25,0x19);
      SeFileLoadAndSet(0x561,0x10);
      sgst_wrk.load_mode = '\x04';
      return 0;
    }
    break;
  case '\x04':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      sg_load_id_130 = SeFileLoadAndSet(0x548,1);
      sgst_wrk.load_mode = '\x05';
      return 0;
    }
    break;
  case '\x05':
    iVar1 = IsLoadEnd(sg_load_id_130);
    if (iVar1 != 0) {
      sgst_wrk.load_mode = '\x06';
      return 1;
    }
    break;
  case '\x06':
    return 1;
  }
  return 0;
}

void SettleGhostBattleSet() {
	sceVu0FVECTOR pos;
	
  float pos [4];
  
  ene_wrk[0].dat_no = sgst_wrk.sg_no;
  ene_wrk[0].type = 0;
  ene_wrk[0].sta = 2;
  ene_wrk[0].move_box.tpos.x =
       (float)(uint)*(ushort *)
                     ((uint)sgst_wrk.sg_no * 0x40 +
                      *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x38);
  ene_wrk[0].move_box.tpos.y =
       (float)(int)*(short *)((uint)sgst_wrk.sg_no * 0x40 +
                              *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x3a);
  ene_wrk[0].move_box.tpos.z =
       (float)(uint)*(ushort *)
                     ((uint)sgst_wrk.sg_no * 0x40 +
                      *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x3c);
  ene_wrk[0].move_box.tpos.w = pos[3];
  return;
}

int SettleGhostStartDisp() {
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  fVar7 = camera.i.z;
  fVar6 = camera.i.y;
  fVar5 = camera.i.x;
  fVar4 = camera.p.z;
  fVar3 = camera.p.y;
  fVar2 = camera.p.x;
  switch(sgst_wrk.disp_mode) {
  case '\0':
    if (sgst_wrk.sg_no == 5) {
      sgst_wrk.disp_mode = '\b';
      return 0;
    }
    SetBlackOut2(0x10);
    sgst_wrk.time = 0x10;
    sgst_wrk.disp_mode = '\x02';
    break;
  default:
    return 0;
  case '\x02':
    if (sgst_wrk.time != 0) goto LAB_0019ca74;
    ingame_wrk.stts = ingame_wrk.stts | 8;
    sg_cmr_bak.p.x = camera.p.x;
    sg_cmr_bak.p.z = camera.p.z;
    sg_cmr_bak.i.x = camera.i.x;
    plyr_wrk.sta = plyr_wrk.sta | 0x10;
    sg_cmr_bak.i.y = camera.i.y;
    sg_cmr_bak.i.z = camera.i.z;
    sg_cmr_bak.p.y = camera.p.y;
    camera.p.x = (float)(uint)*(ushort *)(&DAT_00322c66 + (uint)sgst_wrk.sg_no * 0x18);
    camera.p.y = (float)(int)*(short *)(&DAT_00322c68 + (uint)sgst_wrk.sg_no * 0x18);
    camera.p.z = (float)(uint)*(ushort *)(&DAT_00322c6a + (uint)sgst_wrk.sg_no * 0x18);
    camera.i.x = (float)(uint)*(ushort *)(&sgef_dat + (uint)sgst_wrk.sg_no * 0x18);
    camera.i.y = (float)(int)*(short *)(&DAT_00322c62 + (uint)sgst_wrk.sg_no * 0x18);
    camera.i.z = (float)(uint)*(ushort *)(&DAT_00322c64 + (uint)sgst_wrk.sg_no * 0x18);
    AdpcmPlayShinkan((uint)*(ushort *)(&sgef_adpcm_dat + (uint)sgst_wrk.sg_no * 2),0);
    SetBlackIn2(0x10);
    sgst_wrk.time = 0x10;
    sgst_wrk.disp_mode = '\x03';
    break;
  case '\x03':
    if (sgst_wrk.time != 0) goto LAB_0019ca74;
    sgst_wrk.time = 0x100;
    sgst_wrk.disp_mode = '\x04';
    break;
  case '\x04':
    if (sgst_wrk.time != 0) {
      iVar9 = (int)(short)(sgst_wrk.time - 1);
      iVar13 = ((uint)*(ushort *)(&DAT_00322c6c + (uint)sgst_wrk.sg_no * 0x18) -
               (uint)*(ushort *)(&sgef_dat + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar12 = ((int)*(short *)(&DAT_00322c6e + (uint)sgst_wrk.sg_no * 0x18) -
               (int)*(short *)(&DAT_00322c62 + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar11 = ((uint)*(ushort *)(&DAT_00322c70 + (uint)sgst_wrk.sg_no * 0x18) -
               (uint)*(ushort *)(&DAT_00322c64 + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar10 = ((uint)*(ushort *)(&DAT_00322c72 + (uint)sgst_wrk.sg_no * 0x18) -
               (uint)*(ushort *)(&DAT_00322c66 + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar1 = ((uint)*(ushort *)(&DAT_00322c76 + (uint)sgst_wrk.sg_no * 0x18) -
              (uint)*(ushort *)(&DAT_00322c6a + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar9 = ((int)*(short *)(&DAT_00322c74 + (uint)sgst_wrk.sg_no * 0x18) -
              (int)*(short *)(&DAT_00322c68 + (uint)sgst_wrk.sg_no * 0x18)) * iVar9;
      iVar14 = iVar13 + 0xff;
      if (-1 < iVar13) {
        iVar14 = iVar13;
      }
      iVar13 = iVar12 + 0xff;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      iVar12 = iVar11 + 0xff;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      iVar11 = iVar10 + 0xff;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      iVar10 = iVar9 + 0xff;
      if (-1 < iVar9) {
        iVar10 = iVar9;
      }
      iVar9 = iVar1 + 0xff;
      if (-1 < iVar1) {
        iVar9 = iVar1;
      }
      camera.p.x = (float)((uint)*(ushort *)(&DAT_00322c72 + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar11 >> 8));
      camera.p.y = (float)((int)*(short *)(&DAT_00322c74 + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar10 >> 8));
      camera.p.z = (float)((uint)*(ushort *)(&DAT_00322c76 + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar9 >> 8));
      camera.i.x = (float)((uint)*(ushort *)(&DAT_00322c6c + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar14 >> 8));
      camera.i.y = (float)((int)*(short *)(&DAT_00322c6e + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar13 >> 8));
      camera.i.z = (float)((uint)*(ushort *)(&DAT_00322c70 + (uint)sgst_wrk.sg_no * 0x18) -
                          (iVar12 >> 8));
      sgst_wrk.time = sgst_wrk.time - 1;
      return 0;
    }
    bVar8 = IsEndAdpcmShinkan();
    if (bVar8 == 0) {
      return 0;
    }
    if (sgst_wrk.sg_no != 5) {
      SetBlackOut2(0x10);
      sgst_wrk.disp_mode = '\x05';
      sgst_wrk.time = 0x10;
      return 0;
    }
    sgst_wrk.disp_mode = '\n';
    return 0;
  case '\x05':
    if (sgst_wrk.time == 0) {
      plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
      camera.p.x = sg_cmr_bak.p.x;
      camera.p.z = sg_cmr_bak.p.z;
      camera.i.x = sg_cmr_bak.i.x;
      camera.i.y = sg_cmr_bak.i.y;
      camera.i.z = sg_cmr_bak.i.z;
      camera.p.y = sg_cmr_bak.p.y;
      sgst_wrk.time = 0x10;
      SetBlackIn2(0x10);
      sgst_wrk.disp_mode = '\x06';
      return 0;
    }
    goto LAB_0019ca74;
  case '\x06':
    goto joined_r0x0019c9cc;
  case '\a':
    ingame_wrk.stts = ingame_wrk.stts & 0xf7;
    return 1;
  case '\b':
    sgst_wrk.disp_mode = '\t';
    AdpcmPlayShinkan((uint)*(ushort *)(&sgef_adpcm_dat + (uint)sgst_wrk.sg_no * 2),0);
    return 0;
  case '\t':
    if (sgst_wrk.time == 0) {
      camera.p.x = (float)(uint)*(ushort *)(&DAT_00322c66 + (uint)sgst_wrk.sg_no * 0x18);
      camera.p.y = (float)(int)*(short *)(&DAT_00322c68 + (uint)sgst_wrk.sg_no * 0x18);
      camera.p.z = (float)(uint)*(ushort *)(&DAT_00322c6a + (uint)sgst_wrk.sg_no * 0x18);
      camera.i.x = (float)(uint)*(ushort *)(&sgef_dat + (uint)sgst_wrk.sg_no * 0x18);
      camera.i.y = (float)(int)*(short *)(&DAT_00322c62 + (uint)sgst_wrk.sg_no * 0x18);
      camera.i.z = (float)(uint)*(ushort *)(&DAT_00322c64 + (uint)sgst_wrk.sg_no * 0x18);
      ingame_wrk.stts = ingame_wrk.stts | 8;
      plyr_wrk.sta = plyr_wrk.sta | 0x10;
      sg_cmr_bak.p.x = fVar2;
      sg_cmr_bak.p.y = fVar3;
      sg_cmr_bak.p.z = fVar4;
      sg_cmr_bak.i.x = fVar5;
      sg_cmr_bak.i.y = fVar6;
      sg_cmr_bak.i.z = fVar7;
      sgst_wrk.disp_mode = '\x04';
      sgst_wrk.time = 0x100;
      return 0;
    }
    goto LAB_0019ca74;
  case '\n':
    sgst_wrk.time = 0x55;
    sgst_wrk.disp_mode = '\v';
    break;
  case '\v':
    if (sgst_wrk.time == 0) {
      camera.p.x = sg_cmr_bak.p.x;
      camera.p.y = sg_cmr_bak.p.y;
      camera.p.z = sg_cmr_bak.p.z;
      camera.i.x = sg_cmr_bak.i.x;
      camera.i.y = sg_cmr_bak.i.y;
      camera.i.z = sg_cmr_bak.i.z;
      plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
      sgst_wrk.disp_mode = '\f';
      sgst_wrk.time = 0x55;
      return 0;
    }
    goto LAB_0019ca74;
  case '\f':
joined_r0x0019c9cc:
    if (sgst_wrk.time == 0) {
      sgst_wrk.disp_mode = '\a';
      return 0;
    }
LAB_0019ca74:
    sgst_wrk.time = sgst_wrk.time - 1;
    return 0;
  }
  return 0;
}

int SettleGhostBattleEnd() {
  if (sgst_wrk.mode != '\0') {
    sgst_wrk.mode = '\x04';
    ingame_wrk.mode = 0x13;
    return 1;
  }
  return 0;
}

void SettleGhostDispEffect() {
  switch(sgst_wrk.disp_mode) {
  case '\x02':
    if (sgst_wrk.time == 0) {
      InitExFade1(0,0x100);
      return;
    }
    break;
  case '\x03':
    SetExFade1();
    return;
  case '\x04':
    if (sgst_wrk.sg_no == 5) {
      SetExFade2();
      return;
    }
    SetExFade1();
    return;
  case '\x05':
    if (sgst_wrk.time == 0) {
      InitExFade1(1,0x100);
    }
    SetExFade1();
    return;
  case '\b':
    InitExFade2(0,0x55,0x55,0x55);
    return;
  case '\t':
    SetExFade2();
    return;
  case '\n':
    InitExFade2(1,0x55,0x55,0x55);
    SetExFade2();
    return;
  case '\v':
    SetExFade2();
    return;
  case '\f':
    SetExFade2();
    return;
  }
  return;
}
