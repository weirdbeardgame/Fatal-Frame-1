// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#141,  not equal)
enum {
	HIMURO_B1 = 1,
	HIMURO_1F = 2,
	HIMURO_2F = 4,
	HIMURO_3F = 8
};

typedef struct {
	float alp;
	short int mvx;
	short int mvy;
	u_char flr;
	u_char scl_now;
	u_char scl_mod;
	u_char plyr_id;
	u_char here_no;
	u_char here_id;
	u_char here_bak;
	u_char line_alp;
	u_char movable;
	u_char visit_flr;
} MAP_CTRL;

typedef struct {
	float x;
	float y;
	float a;
	int rgb;
} LINE_PRT;

u_char rm_in_flr0[8] = {
	/* [0] = */ 28,
	/* [1] = */ 29,
	/* [2] = */ 30,
	/* [3] = */ 31,
	/* [4] = */ 32,
	/* [5] = */ 33,
	/* [6] = */ 34,
	/* [7] = */ 255
};
u_char rm_in_flr1[29] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 2,
	/* [3] = */ 3,
	/* [4] = */ 4,
	/* [5] = */ 5,
	/* [6] = */ 6,
	/* [7] = */ 7,
	/* [8] = */ 8,
	/* [9] = */ 9,
	/* [10] = */ 10,
	/* [11] = */ 11,
	/* [12] = */ 12,
	/* [13] = */ 13,
	/* [14] = */ 14,
	/* [15] = */ 15,
	/* [16] = */ 16,
	/* [17] = */ 17,
	/* [18] = */ 19,
	/* [19] = */ 21,
	/* [20] = */ 22,
	/* [21] = */ 23,
	/* [22] = */ 25,
	/* [23] = */ 26,
	/* [24] = */ 27,
	/* [25] = */ 29,
	/* [26] = */ 36,
	/* [27] = */ 40,
	/* [28] = */ 255
};
u_char rm_in_flr2[12] = {
	/* [0] = */ 3,
	/* [1] = */ 8,
	/* [2] = */ 9,
	/* [3] = */ 14,
	/* [4] = */ 17,
	/* [5] = */ 18,
	/* [6] = */ 20,
	/* [7] = */ 24,
	/* [8] = */ 35,
	/* [9] = */ 38,
	/* [10] = */ 41,
	/* [11] = */ 255
};
u_char rm_in_flr3[2] = {
	/* [0] = */ 20,
	/* [1] = */ 255
};
MAP_DOOR_POS map_door_pos[0] = {
};
MAP_SVP_POS map_svp_pos[0] = {
};
static MAP_CTRL map;
static FLSH_CORE flsh[3];

void NewgameMenuMapInit() {
  return;
}

void LoadgameMenuMapInit() {
  return;
}

void StartMapModeInit() {
  map.here_bak = 0xff;
  map.scl_now = '\x0f';
  map.flr = map_wrk.floor;
  map.scl_mod = '\0';
  map.mvy = 0;
  map.mvx = 0;
  map.line_alp = '\0';
  yw2d.map_flg = 0;
  MapExistCHK();
  yw2d.pad_lock = 1;
  ig_menu_wrk.csr[1] = '\0';
  return;
}

void IngameMenuMap() {
  bool bVar1;
  uchar uVar2;
  
  IngameMenuMapDisp(spd_mnu.smap);
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[4] == 1) {
    SeStartFix(3,0,0x1000,0x1000,1);
    if (spd_mnu.smap == '\0') {
      yw2d.out_mode_cnt = 0x15;
      return;
    }
  }
  else {
    if (*key_now[13] != 1) {
      if (*key_now[5] == 1) {
        map.scl_mod = '\x01' - map.scl_mod;
        SeStartFix(1,0,0x1000,0x1000,1);
        return;
      }
      if (*key_now[10] == 1) {
        if (map.visit_flr < 2) {
          return;
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        bVar1 = 2 < map.flr;
        map.flr = map.flr + '\x01';
        if (bVar1) {
          map.flr = '\0';
        }
        while (uVar2 = MapMovableCHK(), uVar2 != '\0') {
          bVar1 = 2 < map.flr;
          map.flr = map.flr + '\x01';
          if (bVar1) {
            map.flr = '\0';
          }
        }
        return;
      }
      if (*key_now[8] != 1) {
        return;
      }
      if (map.visit_flr < 2) {
        return;
      }
      SeStartFix(0,0,0x1000,0x1000,1);
      bVar1 = map.flr == '\0';
      map.flr = map.flr + 0xff;
      if (bVar1) {
        map.flr = '\x03';
      }
      while (uVar2 = MapMovableCHK(), uVar2 != '\0') {
        bVar1 = map.flr == '\0';
        map.flr = map.flr + 0xff;
        if (bVar1) {
          map.flr = '\x03';
        }
      }
      return;
    }
    if (spd_mnu.smap == '\0') {
      return;
    }
    SeStartFix(3,0,0x1000,0x1000,1);
  }
  yw2d.menu_io_flg = 2;
  yw2d.menu_io_cnt = 0x14;
  return;
}

void IngameMenuMapDisp(u_char mod) {
  MapCntInit();
  if (mod == '\0') {
    MapModeInOut();
  }
  if (yw2d.map_flg != 0) {
    DspPlyrInMap((uchar)(int)yw2d.io_a[5]);
  }
  DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'\0','\x01');
  DspLayOut(0,0,(uchar)(int)yw2d.io_a[4]);
  if (mod == '\0') {
    MapModeInOut2();
  }
  MapCntRenew();
  return;
}

static void MapCntInit() {
  return;
}

static void MapCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void MapModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    yw2d.io_a[5] = 0.0;
    yw2d.io_a[6] = 128.0;
    yw2d.io_a[1] = ((float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    yw2d.io_a[0] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    yw2d.io_a[2] = yw2d.io_a[0];
    yw2d.io_a[3] = yw2d.io_a[0];
    yw2d.io_a[4] = yw2d.io_a[1];
    PlayerStatusYW((uchar)(int)yw2d.io_a[0]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.map_flg = 1;
    }
  }
  else if ((ushort)yw2d.inn_mode_cnt < 0x15) {
    yw2d.io_a[4] = 128.0;
    yw2d.io_a[1] = 128.0;
    yw2d.io_a[0] = 0.0;
    yw2d.io_a[2] = 0.0;
    yw2d.io_a[5] = (float)(((ushort)yw2d.inn_mode_cnt - 10) * 0x80) / 10.0;
    yw2d.io_a[3] = 0.0;
    yw2d.io_a[6] = yw2d.io_a[5];
    if (yw2d.inn_mode_cnt == 0x14) {
      yw2d.pad_lock = 0;
    }
  }
  else if ((ushort)yw2d.out_mode_cnt < 0xb) {
    if (yw2d.out_mode_cnt == 0) {
      iVar1 = 0;
      do {
        XYAdefaultYW((uchar)iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 7);
    }
    else {
      yw2d.io_a[5] = 0.0;
      yw2d.io_a[6] = 128.0;
      yw2d.io_a[1] = (float)(((ushort)yw2d.out_mode_cnt - 1) * 0x80) / 10.0;
      yw2d.io_a[0] = (1.0 - (float)((ushort)yw2d.out_mode_cnt - 1) / 10.0) * 128.0;
      yw2d.io_a[2] = yw2d.io_a[0];
      yw2d.io_a[3] = yw2d.io_a[0];
      yw2d.io_a[4] = yw2d.io_a[1];
      PlayerStatusYW((uchar)(int)yw2d.io_a[0]);
      DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
      DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
      if (yw2d.out_mode_cnt == 1) {
        ig_menu_wrk.mode = '\a';
        IngameMenuModeSlctDispInit();
        yw2d.pad_lock = 0;
        yw2d.menu_io_flg = 0;
      }
    }
  }
  else {
    yw2d.pad_lock = 1;
    yw2d.io_a[4] = 128.0;
    yw2d.io_a[5] = (float)(((ushort)yw2d.out_mode_cnt - 0xb) * 0x80) / 10.0;
    yw2d.io_a[0] = 0.0;
    yw2d.io_a[1] = 128.0;
    yw2d.io_a[2] = 0.0;
    yw2d.io_a[3] = 0.0;
    yw2d.io_a[6] = yw2d.io_a[5];
    if (yw2d.out_mode_cnt == 0xb) {
      yw2d.map_flg = 0;
    }
  }
  return;
}

static void MapModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  if ((ushort)yw2d.out_mode_cnt - 1 < 10) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  return;
}

static void DspPlyrInMap(u_char alp) {
  MapScoop();
  MapInfo1(alp);
  MapMove(alp);
  MapPrint((ushort)(int)((float)((int)(short)map.mvx * (uint)map.scl_now) / 10.0),
           (ushort)(int)((float)((int)(short)map.mvy * (uint)map.scl_now) / 10.0),alp);
  MapInfo2(alp);
  return;
}

static void MapScoop() {
	short int scl_cmp;
	short int scl_obj;
	
  int iVar1;
  
  iVar1 = (uint)map.scl_now + (map.scl_mod + 1) * -0xf;
  if (map.scl_mod == '\0') {
    if (0 < iVar1 + -1) {
      map.scl_now = map.scl_now + 0xff;
      return;
    }
  }
  else if (iVar1 + 1 < 0) {
    map.scl_now = map.scl_now + '\x01';
    return;
  }
  map.scl_now = (char)(map.scl_mod + 1) * '\x0f';
  return;
}

static void MapMove(u_char alp) {
	short int mvx;
	short int mvy;
	u_char anacon;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  uchar uVar5;
  ulong uVar6;
  
  uVar6 = (long)(char)alp & 0xff;
  uVar4 = 0xff;
  if (pad[0].id == 'y') {
    uVar4 = pad[0].an_dir[0];
  }
  uVar5 = (uchar)uVar6;
  if (yw2d.pad_lock != 0) goto LAB_001f3870;
  if (*key_now[0] != 0) {
LAB_001f36a0:
    map.mvy = map.mvy + 1;
LAB_001f36b4:
    if (*key_now[1] != 0) {
      map.mvy = map.mvy - 1;
    }
    if (*key_now[2] != 0) {
      map.mvx = map.mvx + 1;
    }
    if (*key_now[3] != 0) {
      map.mvx = map.mvx - 1;
    }
    uVar1 = (uint)map.line_alp;
    map.line_alp = uVar5;
    if ((ulong)(long)(int)(uVar1 + 4) < uVar6) {
      map.line_alp = (uchar)(uVar1 + 4);
    }
    goto LAB_001f3870;
  }
  if (((*key_now[1] != 0) || (*key_now[2] != 0)) || (*key_now[3] != 0)) {
    if (*key_now[0] != 0) goto LAB_001f36a0;
    goto LAB_001f36b4;
  }
  switch(uVar4) {
  case '\0':
    map.mvy = map.mvy + 1;
    break;
  case '\x01':
    map.mvy = map.mvy + 1;
    map.mvx = map.mvx - 1;
    break;
  case '\x02':
    map.mvx = map.mvx - 1;
    break;
  case '\x03':
    map.mvy = map.mvy - 1;
    map.mvx = map.mvx - 1;
    break;
  case '\x04':
    map.mvy = map.mvy - 1;
    break;
  case '\x05':
    map.mvy = map.mvy - 1;
    goto LAB_001f381c;
  case '\x06':
    map.mvx = map.mvx + 1;
    break;
  case '\a':
    map.mvy = map.mvy + 1;
LAB_001f381c:
    map.mvx = map.mvx + 1;
    break;
  default:
    if ((int)(map.line_alp - 4) < 1) {
      map.line_alp = '\0';
    }
    else {
      map.line_alp = (uchar)(map.line_alp - 4);
    }
    goto LAB_001f3870;
  case 0xbad1abe1:
    break;
  }
  uVar1 = (uint)map.line_alp;
  map.line_alp = uVar5;
  if ((ulong)(long)(int)(uVar1 + 4) < uVar6) {
    map.line_alp = (uchar)(uVar1 + 4);
  }
LAB_001f3870:
  if (uVar6 < map.line_alp) {
    map.line_alp = uVar5;
  }
  iVar3 = (int)(((int)(short)(int)(plyr_wrk.move_box.rot.x / 100.0) + (uint)map.mvy) * 0x10000) >>
          0x10;
  iVar2 = (int)(((int)(short)(int)(plyr_wrk.move_box.spd.z / 100.0) - (uint)map.mvx) * 0x10000) >>
          0x10;
  if (500 < iVar3) {
    map.mvy = map.mvy - 1;
  }
  if (iVar3 < 0) {
    map.mvy = map.mvy + 1;
  }
  if (500 < iVar2) {
    map.mvx = map.mvx + 1;
  }
  if (iVar2 < 0) {
    map.mvx = map.mvx - 1;
  }
  return;
}

static void MapInfo1(u_char alp) {
	float px;
	float py;
	
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = plyr_wrk.move_box.spd.z;
  fVar3 = plyr_wrk.move_box.rot.x;
  iVar2 = GetPointRoomNoFloor((short)(int)(plyr_wrk.move_box.spd.z + 0.0),
                              (short)(int)(plyr_wrk.move_box.rot.x + 0.0),map.flr);
  map.plyr_id = GetRoomIdFromRoomNoFloor('\0',(uchar)iVar2,map.flr);
  iVar2 = GetPointRoomNoFloor((short)(int)(fVar1 - (float)((short)map.mvx * 100)),
                              (short)(int)(fVar3 + (float)((short)map.mvy * 100)),map.flr);
  map.here_no = (uchar)iVar2;
  map.here_id = GetRoomIdFromRoomNoFloor('\0',map.here_no,map.flr);
  return;
}

static void MapInfo2(u_char alp) {
  uchar uVar1;
  int iVar2;
  
  PutStringYW(0x1a,map.flr,0x145,0x25,0x808080,alp,0x5000,1);
  if (((map.here_id < 0x2a) && (iVar2 = IsRoomPass(map.here_id), iVar2 != 0)) &&
     (uVar1 = MapExstFlr(map.here_id,map.flr), uVar1 != '\0')) {
    PutStringYW(0x1e,map.here_id,0x140,0x186,0x808080,alp,0x5000,1);
    return;
  }
  return;
}

static void MapPrint(short int mov_px, short int mov_py, u_char alp) {
	int i;
	int j;
	int id;
	short int map_ox;
	short int map_oy;
	short int door_mx;
	short int door_my;
	u_char door_stts;
	DOOR_STTS_MAP dsmp;
	float bg_scl;
	u_char num_i;
	u_char num_j;
	short int start_x;
	short int start_y;
	
  int iVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort pos_x;
  int iVar7;
  ushort pos_y;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  DOOR_STTS_MAP dsmp;
  ushort map_oy;
  
  fVar14 = (float)(uint)map.scl_now / 10.0;
  fVar15 = (float)(uint)map.scl_now / 15.0;
  iVar7 = (int)(short)(int)(fVar15 * 160.0);
  iVar5 = (int)(short)mov_px - ((int)((fVar14 * plyr_wrk.move_box.spd.z) / 100.0) + -0x141);
  iVar6 = iVar5 * 0x10000;
  iVar3 = ((int)(short)mov_py -
          ((int)(fVar14 * (512.0 - (plyr_wrk.move_box.rot.x * DAT_00355f68) / 100.0)) + -0xd6)) *
          0x10000;
  iVar4 = iVar3 >> 0x10;
  iVar13 = iVar6 >> 0x10;
  if (iVar7 == 0) {
    trap(7);
  }
  iVar11 = -1;
  do {
    iVar10 = -1;
    iVar8 = iVar11 + 1;
    do {
      iVar1 = iVar10 * 0xa0;
      iVar10 = iVar10 + 1;
      PutChrForMap(0x1cf,(short)(iVar13 % iVar7) + (short)(int)((float)iVar1 * fVar15),
                   (ushort)((uint)(((int)(short)(iVar4 % (int)(short)(int)(fVar15 * 112.0)) +
                                   (int)((float)(iVar11 * 0x70) * fVar15)) * 0x10000) >> 0x10),
                   0x808080,alp,fVar15,0x64000);
    } while (iVar10 < (int)(((int)(640.0 / (fVar15 * 160.0)) + 1U & 0xff) + 1));
    iVar11 = iVar8;
  } while (iVar8 < (int)(((int)(448.0 / (fVar15 * 112.0)) + 1U & 0xff) + 1));
  uVar12 = 0;
  MapChrCtrl((ushort)iVar5,(ushort)((uint)iVar3 >> 0x10),alp);
  do {
    uVar2 = MapExstFlr((uchar)uVar12,map.flr);
    if ((uVar2 != '\0') && (iVar3 = IsRoomPass((uchar)uVar12), iVar3 != 0)) {
      puVar9 = (ushort *)&map_svp_pos;
      fVar14 = 512.0;
      iVar3 = 6;
      do {
        if ((*(byte *)((int)puVar9 + 7) == uVar12) && (*(uchar *)(puVar9 + 3) == map.flr)) {
          fVar15 = (float)(uint)map.scl_now / 10.0;
          PutIcnForMap2('c',(short)((uint)iVar6 >> 0x10) +
                            (short)(int)(fVar15 * ((float)(uint)*puVar9 / 100.0)),
                        (ushort)((uint)((iVar4 + (short)(int)(fVar15 * (fVar14 - (float)(uint)puVar9
                                                  [1] / 100.0))) * 0x10000) >> 0x10),0,alp,fVar15,
                        '\0');
        }
        iVar3 = iVar3 + -1;
        puVar9 = puVar9 + 4;
      } while (-1 < iVar3);
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x2a);
  iVar3 = 0;
  do {
    iVar6 = iVar3 * 8;
    iVar5 = GetDoorSttsForMap(&dsmp,(ushort)(byte)(&DAT_0033f816)[iVar6],(&DAT_0033f815)[iVar6]);
    if (iVar5 != 0) {
      switch(dsmp.stts) {
      default:
        uVar2 = 0xff;
        break;
      case '\x01':
        uVar2 = '\0';
        break;
      case '\x02':
        uVar2 = '\x01';
        break;
      case '\x03':
        uVar2 = '\x02';
        break;
      case '\x04':
        uVar2 = '\x03';
      }
      fVar14 = (float)(uint)map.scl_now / 10.0;
      if ((uVar2 != 0xff) && ((&DAT_0033f815)[iVar6] == map.flr)) {
        pos_y = (ushort)((uint)((iVar4 + (short)(int)(fVar14 * (float)(0x200 - (short)(&DAT_0033f812
                                                                                      )[iVar3 * 4]))
                                ) * 0x10000) >> 0x10);
        pos_x = (ushort)((uint)((iVar13 + (short)(int)(fVar14 * (float)(int)*(short *)(&map_door_pos
                                                                                      + iVar6))) *
                               0x10000) >> 0x10);
        if (iVar3 - 5U < 6) {
          PutIcnForMap2(uVar2,pos_x,pos_y,-(ushort)(byte)(&DAT_0033f814)[iVar6],alp,fVar14,'\x01');
        }
        else {
          PutIcnForMap2(uVar2,pos_x,pos_y,-(ushort)(byte)(&DAT_0033f814)[iVar6],alp,fVar14,'\0');
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x4d);
  if (map.flr == map_wrk.floor) {
    MapPlayer(mov_px,mov_py,alp);
  }
  fVar14 = 128.0;
  PolySquareYW(0.0,0.0,0x280,0x1c2,0,128.0 - yw2d.io_a[6],1.0,1.0,0x4b000,0,0,0);
  PutSpriteYW(0x1cb,0x1ce,0.0,0.0,0.0,0x808080,fVar14,DAT_00355f6c,DAT_00355f70,1,0xff,1,0,0);
  return;
}

static void MapPlayer(short int mov_px, short int mov_py, u_char alp) {
	int i;
	float now_rd;
	short int x[3];
	short int y[3];
	
  float fVar1;
  int iVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort x [3];
  ushort y [3];
  
  fVar1 = DAT_00355f74;
  puVar3 = x;
  fVar7 = (float)(int)(short)mov_px;
  iVar2 = 0;
  fVar5 = 10.0;
  fVar9 = 7.0;
  fVar8 = -10.0;
  do {
    fVar6 = plyr_wrk.move_box.trot.w - (float)iVar2 * DAT_00355f78;
    if (DAT_00355f7c < fVar6) {
      fVar6 = fVar6 - fVar1;
    }
    if (fVar6 < DAT_00355f80) {
      fVar6 = fVar6 + fVar1;
    }
    if (iVar2 == 0) {
      fVar4 = SgSinf(fVar6);
      x[0] = (ushort)(int)(((float)(uint)map.scl_now / fVar5) * fVar9 * fVar4 + fVar7 + 1.0);
      fVar6 = SgCosf(fVar6);
      y[0] = (ushort)(int)(-((float)(uint)map.scl_now / fVar5) * fVar9 * fVar6 +
                           (float)(int)(short)mov_py + fVar8);
    }
    else {
      fVar4 = SgSinf(fVar6);
      *puVar3 = (short)(int)(((float)(uint)map.scl_now / fVar5) * 4.0 * fVar4 + fVar7 + 1.0);
      fVar6 = SgCosf(fVar6);
      y[iVar2] = (ushort)(int)(-((float)(uint)map.scl_now / fVar5) * 4.0 * fVar6 +
                               (float)(int)(short)mov_py + fVar8);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 3);
  SetTriangle(0x55000,(float)(int)(short)x[0],(float)(int)(short)y[0],(float)(int)(short)x[1],
              (float)(int)(short)y[1],(float)(int)(short)x[2],(float)(int)(short)y[2],0xff,'\v','\0'
              ,alp);
  return;
}

static void MapChrCtrl(short int pos_x, short int pos_y, u_char alp) {
	int id;
	int rgb;
	int red;
	
  uchar uVar1;
  int iVar2;
  uchar id;
  uint uVar3;
  uint uVar4;
  int rgb;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    id = (uchar)uVar3;
    uVar1 = MapExstFlr(id,map.flr);
    if ((uVar1 != '\0') && (iVar2 = IsRoomPass(id), iVar2 != 0)) {
      if (map.here_id == uVar4) {
        MapChrSet(id,pos_x,pos_y,0x808080,alp,(float)(uint)map.scl_now / 10.0,0x5f000);
        if (map.here_id == map.here_bak) {
          FlashStarYW(flsh,'\0',0x80,'Z','\0');
          CLRtoRGB(&rgb,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
        }
        else {
          FlashStarYW(flsh,'\0',0x80,'Z',0xff);
          CLRtoRGB(&rgb,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
          map.here_bak = map.here_id;
        }
        if (map.here_id != 0xff) {
          MapChrSet(map.here_id,pos_x,pos_y,(0xe0 - (rgb & 0xffU)) * 0x10000 + (rgb & 0xffffU),alp,
                    (float)(uint)map.scl_now / 10.0,0x5a000);
        }
      }
      else {
        MapChrSet(id,pos_x,pos_y,0x808080,alp,(float)(uint)map.scl_now / 10.0,0x5f000);
      }
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar4 & 0xff;
  } while ((int)uVar4 < 0x2a);
  return;
}

static void MapChrSet(u_char id, short int pos_x, short int pos_y, int rgb, u_char alp, float scl, int pri) {
  switch((short)(char)id & 0xffU) {
  case 3:
    if (map.flr == '\x01') {
      PutChrForMap(0x1e7,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x02') {
      PutChrForMap(0x212,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  default:
    PutChrForMap(((short)(char)id & 0xffU) + 0x1e4,pos_x,pos_y,rgb,alp,scl,pri);
    return;
  case 8:
    if (map.flr == '\x01') {
      PutChrForMap(0x1ec,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x02') {
      PutChrForMap(0x20e,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  case 9:
    if (map.flr == '\x01') {
      PutChrForMap(0x1ed,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x02') {
      PutChrForMap(0x213,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  case 0xe:
    if (map.flr == '\x01') {
      PutChrForMap(0x1f2,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x02') {
      PutChrForMap(0x211,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  case 0x11:
    if (map.flr == '\x01') {
      PutChrForMap(0x1f5,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x02') {
      PutChrForMap(0x210,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  case 0x14:
    if (map.flr == '\x02') {
      PutChrForMap(0x214,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x03') {
      PutChrForMap(0x1f8,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    break;
  case 0x1d:
    if (map.flr == '\0') {
      PutChrForMap(0x20f,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
    if (map.flr == '\x01') {
      PutChrForMap(0x201,pos_x,pos_y,rgb,alp,scl,pri);
      return;
    }
  }
  return;
}

static void PutChrForMap(u_short chr_lbl, short int pos_x, short int pos_y, int rgb, u_char alp, float scl, int pri) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr_lbl & 0xffffU) * 0x20));
  ds.csx = (float)(int)(short)pos_x;
  ds.csy = (float)(int)(short)pos_y;
  ds.x = ds.x + ds.csx;
  ds.y = ds.y + ds.csy;
  ds.z = 0xfffffff - pri;
  ds.b = (byte)rgb;
  ds.r = (byte)((uint)rgb >> 0x10);
  ds.g = (byte)((uint)rgb >> 8);
  ds.tex1 = 0x161;
  ds.scw = scl;
  ds.sch = scl;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void PutIcnForMap(u_short chr_lbl, short int pos_x, short int pos_y, short int rot, u_char alp, float scl) {
	DISP_SPRT ds;
	
  uint uVar1;
  float fVar2;
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr_lbl & 0xffffU) * 0x20));
  uVar1 = (int)(short)pos_x - (ds.w >> 1);
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
    ds.x = fVar2 + fVar2;
  }
  else {
    ds.x = (float)uVar1;
  }
  uVar1 = (int)(short)pos_y - (ds.h >> 1);
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
    ds.y = fVar2 + fVar2;
  }
  else {
    ds.y = (float)uVar1;
  }
  ds.crx = (float)(int)(short)pos_x;
  ds.cry = (float)(int)(short)pos_y;
  ds.scw = scl / 3.0;
  ds.rot = (float)(int)(short)rot;
  ds.pri = 0x55000;
  ds.z = 0xffaafff;
  ds.tex1 = 0x161;
  ds.csx = ds.crx;
  ds.csy = ds.cry;
  ds.sch = ds.scw;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void PutIcnForMap2(u_char type, short int pos_x, short int pos_y, short int rot, u_char alp, float scl, u_char sz_ptn) {
	SQAR_DAT base;
	DISP_SQAR ds;
	
  int iVar1;
  int iVar2;
  float fVar3;
  SQAR_DAT base;
  DISP_SQAR ds;
  
  iVar2 = (int)(short)pos_x;
  iVar1 = (int)(short)pos_y;
  if (type != 0xff) {
    if (type == 'c') {
      base.w = fptoui((scl / 3.0) * 7.0);
      base.y = iVar1 - (base.w >> 1);
      base.x = iVar2 - (base.w >> 1);
      base.h = base.w;
      SetCircle(0x55000,(short)base.x - 0x140,(short)base.y - 0xe0,(ushort)(byte)base.w,'\x12','-',
                0xdf,0xdf,(int)(char)alp & 0xffU);
    }
    else {
      if (sz_ptn == '\0') {
        fVar3 = 22.0;
      }
      else {
        fVar3 = 33.0;
      }
      base.w = fptoui((scl / 3.0) * fVar3);
      base.h = fptoui((scl / 3.0) * 8.0);
      if (type == '\x01') {
        base.g = 0xff;
        base.b = '`';
        base.r = 0xff;
      }
      else if (type < 2) {
        if (type == '\0') {
          base.r = 0xff;
          base.b = '`';
          base.g = '`';
        }
      }
      else if (type == '\x02') {
        base.r = 0x91;
        base.g = 0xff;
        base.b = 0x84;
      }
      else if (type == '\x03') {
        base.b = 0x80;
        base.r = 0x80;
        base.g = 0x80;
      }
      base.x = iVar2 - (base.w >> 1);
      base.y = iVar1 - (base.h >> 1);
      base.pri = 0x55000;
      base.alpha = (uchar)((int)(char)alp & 0xffU);
      CopySqrDToSqr(&ds,&base);
      ds.rot = (float)(int)(short)rot;
      ds.crx = (float)iVar2;
      ds.cry = (float)iVar1;
      DispSqrD(&ds);
    }
  }
  return;
}

static void DspLayOut(short int pos_x, short int pos_y, u_char alpha) {
	int i;
	LINE_PRT prot[20];
	SPRT_DAT ssd;
	DISP_SPRT ds;
	
  byte alp;
  LINE_PRT *pLVar1;
  LINE_PRT *pLVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  LINE_PRT prot [20];
  SPRT_DAT ssd;
  DISP_SPRT ds;
  int local_e0;
  float *local_dc;
  float *local_d8;
  int *local_d4;
  
  pLVar1 = prot;
  pLVar2 = prot;
  local_e0 = (int)(short)pos_x;
  iVar8 = (int)(short)pos_y;
  uVar7 = (int)(char)alpha & 0xff;
  fVar9 = (float)local_e0;
  fVar12 = (float)uVar7;
  alp = (byte)uVar7;
  CmnWindow(0,pos_x,pos_y,alp,0x80);
  fVar10 = 1.0;
  fVar13 = 0.0;
  CmnWindow(2,pos_x,pos_y,alp,0x80);
  CmnWindow(1,pos_x,pos_y,alp,0x80);
  PutSpriteYW(0x1d6,0x1d6,fVar9,(float)iVar8,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
  DrawButtonTex(0x1e000,3,(float)(local_e0 + 0x1db),(float)(iVar8 + 0x37),alp);
  fVar14 = (float)(iVar8 + 0x1e);
  PutSpriteYW(0x1dc,0x1dc,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
  PutSpriteYW(0x1d0,0x1d1,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
  PutSpriteYW(0x1d3,0x1d4,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
  DrawButtonTex(0x1e000,1,(float)(local_e0 + 0x1db),(float)(iVar8 + 0x19),alp);
  ssd.tex0 = DAT_0032d270;
  ssd._8_8_ = DAT_0032d278;
  ssd._16_8_ = DAT_0032d280;
  ssd._24_8_ = DAT_0032d288;
  CopySprDToSpr(&ds,&ssd);
  ds.x = DAT_00355f84;
  ds.y = 35.0;
  ds.pri = 0xa000;
  ds.z = 0xfff5fff;
  ds.alpha = alp;
  DispSprD(&ds);
  ssd.tex0 = DAT_0032b1d0;
  ssd._8_8_ = DAT_0032b1d8;
  ssd._16_8_ = DAT_0032b1e0;
  ssd._24_8_ = DAT_0032b1e8;
  CopySprDToSpr(&ds,&ssd);
  ds.pri = 0xa000;
  ds.z = 0xfff5fff;
  ds.scw = DAT_00355f88;
  ds.x = 548.0;
  ds.y = 22.0;
  ds.csx = 548.0;
  ds.csy = 22.0;
  ds.sch = fVar10;
  ds.alpha = alp;
  DispSprD(&ds);
  if (1 < map.visit_flr) {
    PutSpriteYW(0x1d7,0x1d7,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
    PutSpriteYW(0x1d2,0x1d2,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
    PutSpriteYW(0x1d5,0x1d5,fVar9,fVar14,fVar13,0x808080,fVar12,fVar10,fVar10,0,0xff,1,0,0);
  }
  piVar3 = &prot[0].rgb;
  pfVar5 = &prot[0].y;
  pfVar6 = &prot[0].a;
  iVar8 = 0;
  iVar4 = 0;
  fVar10 = DAT_00355f90;
  uVar11 = DAT_00355f8c;
  local_dc = pfVar5;
  local_d8 = pfVar6;
  local_d4 = piVar3;
  do {
    fVar9 = (float)iVar4;
    pLVar1->x = uVar11;
    fVar12 = (float)iVar8;
    *piVar3 = 0xc2a830;
    iVar8 = iVar8 + 1;
    iVar4 = iVar4 + 0xf6;
    pLVar1 = (LINE_PRT *)((int)pLVar1 + 0x10);
    piVar3 = piVar3 + 4;
    *pfVar5 = fVar9 / 19.0 + 92.0;
    fVar9 = SgSinf((fVar12 * fVar10) / 19.0);
    pfVar5 = pfVar5 + 4;
    *pfVar6 = (float)(uint)map.line_alp * fVar9;
    pfVar6 = pfVar6 + 4;
  } while (iVar8 < 0x14);
  SetLineStrip(0x1000,'\x14',prot,(short)uVar7);
  fVar10 = DAT_00355f94;
  iVar8 = 0;
  fVar9 = 214.0;
  iVar4 = 0;
  fVar12 = 0.5;
  do {
    fVar13 = (float)iVar4;
    *local_d4 = 0xc2a830;
    fVar14 = (float)iVar8;
    iVar4 = iVar4 + 0x132;
    iVar8 = iVar8 + 1;
    local_d4 = local_d4 + 4;
    pLVar2->x = fVar13 / 19.0 + 167.0;
    *local_dc = fVar9;
    pLVar2 = (LINE_PRT *)((int)pLVar2 + 0x10);
    fVar13 = SgSinf((fVar14 * fVar10) / 19.0);
    local_dc = local_dc + 4;
    *local_d8 = (float)(uint)map.line_alp * fVar12 * fVar13;
    local_d8 = local_d8 + 4;
  } while (iVar8 < 0x14);
  SetLineStrip(0x1000,'\x14',prot,(short)uVar7);
  MapTri((ushort)local_e0,pos_y,alp);
  return;
}

static void MapTri(short int pos_x, short int pos_y, u_char alpha) {
	int i;
	int rgb1[4];
	int rgb2[2];
	int flsh1;
	int flsh2;
	
  int *piVar1;
  int iVar2;
  float pos_y_00;
  float pos_x_00;
  float alp;
  int rgb1 [4];
  int rgb2 [2];
  int flsh1;
  
  piVar1 = rgb1;
  if (yw2d.pad_lock == 0) {
    FlashStarYW(flsh + 1,'@',0xc0,'<','\0');
    CLRtoRGB(&flsh1,flsh[1].alpha,flsh[1].alpha,flsh[1].alpha);
  }
  else {
    FlashStarYW(flsh + 1,'@',0xc0,'<',0xff);
    CLRtoRGB(&flsh1,flsh[1].alpha,flsh[1].alpha,flsh[1].alpha);
  }
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  alp = (float)((int)(char)alpha & 0xff);
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = flsh1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  piVar1 = rgb2 + 1;
  iVar2 = 1;
  do {
    *piVar1 = 0x808080;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  PutSpriteYW(0x1d8,0x1d8,pos_x_00,pos_y_00,0.0,rgb1[0],alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x1d9,0x1d9,pos_x_00,pos_y_00,0.0,rgb1[1],alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x1da,0x1da,pos_x_00,pos_y_00,-90.0,rgb1[2],alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x1db,0x1db,pos_x_00,pos_y_00,90.0,rgb1[3],alp,1.0,1.0,0,0xff,1,0,0);
  if (1 < map.visit_flr) {
    PutSpriteYW(0x1dd,0x1dd,pos_x_00,pos_y_00,0.0,rgb2[0],alp,1.0,1.0,0,0xff,1,0,0);
    PutSpriteYW(0x1de,0x1de,pos_x_00,pos_y_00,0.0,rgb2[1],alp,1.0,1.0,0,0xff,1,0,0);
  }
  return;
}

static u_char MapExstFlr(u_char id, u_char flr) {
	u_char rtrn;
	int i;
	
  uchar *puVar1;
  int iVar2;
  
  if (flr == '\x01') {
    if (rm_in_flr1[0] == 0xff) {
      return '\0';
    }
    if (rm_in_flr1[0] != id) {
      iVar2 = 1;
      do {
        puVar1 = rm_in_flr1 + iVar2;
        if (*puVar1 == 0xff) {
          return '\0';
        }
        iVar2 = iVar2 + 1;
      } while (*puVar1 != id);
    }
  }
  else if (flr < 2) {
    if (flr != '\0') {
      return '\0';
    }
    if (rm_in_flr0[0] == 0xff) {
      return '\0';
    }
    if (rm_in_flr0[0] != id) {
      iVar2 = 1;
      do {
        puVar1 = rm_in_flr0 + iVar2;
        if (*puVar1 == 0xff) {
          return '\0';
        }
        iVar2 = iVar2 + 1;
      } while (*puVar1 != id);
    }
  }
  else if (flr == '\x02') {
    if (rm_in_flr2[0] == 0xff) {
      return '\0';
    }
    if (rm_in_flr2[0] != id) {
      iVar2 = 1;
      do {
        puVar1 = rm_in_flr2 + iVar2;
        if (*puVar1 == 0xff) {
          return '\0';
        }
        iVar2 = iVar2 + 1;
      } while (*puVar1 != id);
    }
  }
  else {
    if (flr != '\x03') {
      return '\0';
    }
    if (rm_in_flr3[0] == 0xff) {
      return '\0';
    }
    if (rm_in_flr3[0] != id) {
      iVar2 = 1;
      do {
        puVar1 = rm_in_flr3 + iVar2;
        if (*puVar1 == 0xff) {
          return '\0';
        }
        iVar2 = iVar2 + 1;
      } while (*puVar1 != id);
    }
  }
  return '\x01';
}

static void MapExistCHK() {
	int i;
	int id;
	u_char room_exist;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  map.movable = '\0';
  map.visit_flr = '\0';
  do {
    uVar5 = 0;
    if (floor_exist[ingame_wrk.msn_no][uVar6] != '\0') {
      uVar4 = 0;
      uVar3 = 0;
      while( true ) {
        uVar4 = uVar4 + 1;
        uVar1 = MapExstFlr((uchar)uVar3,(uchar)uVar6);
        if (uVar1 != '\0') {
          iVar2 = IsRoomPass((uchar)uVar3);
          uVar5 = uVar5 + iVar2 & 0xff;
        }
        if (0x29 < (int)uVar4) break;
        uVar3 = uVar4 & 0xff;
      }
      if (uVar5 != 0) {
        map.movable = map.movable | (byte)(1 << (uVar6 & 0x1f));
        map.visit_flr = map.visit_flr + '\x01';
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 5);
  return;
}

static u_char MapMovableCHK() {
  if (floor_exist[ingame_wrk.msn_no][map.flr] != '\0') {
    return (byte)((int)(uint)map.movable >> (map.flr & 0x1f)) & 1 ^ 1;
  }
  return '\x01';
}

static void SetLineStrip(int pri, u_char num, LINE_PRT *prot, u_short alp) {
	int i;
	float div;
	int z;
	LINE_PRT tmp;
	
  float *pfVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float arg_a;
  float fVar9;
  float fVar10;
  float fVar11;
  LINE_PRT tmp;
  
  uVar6 = (long)(char)num & 0xff;
  fVar11 = 1.0;
  if (g_bInterlace != '\0') {
    fVar11 = 2.0;
  }
  Reserve2DPacket(pri);
  pQVar2 = pbuf;
  pQVar3 = pbuf + ndpkt;
  pQVar3->ui32[0] = 0;
  pQVar3->ui32[1] = 0;
  pQVar3->ui32[2] = 0;
  pQVar3->ui32[3] = 0;
  pQVar3->ui32[0] = (int)&DAT_70000004 + (int)uVar6 * 2;
  pQVar2[ndpkt + 1].ul64[1] = 0xe;
  pQVar2[ndpkt + 1].ul64[0] = 0x1000000000000002;
  pQVar2[ndpkt + 2].ul64[0] = 0x8000000044;
  pQVar2[ndpkt + 2].ul64[1] = 0x42;
  pQVar2[ndpkt + 3].ul64[1] = 0x4e;
  iVar5 = ndpkt + 4;
  pQVar2[ndpkt + 3].ul64[0] = 0x10100008c;
  ndpkt = ndpkt + 5;
  pQVar2[iVar5].ul64[1] = 0x41;
  pQVar2[iVar5].ul64[0] = uVar6 | 0x2021400000008000;
  if (uVar6 != 0) {
    fVar9 = 2048.0;
    fVar10 = 224.0;
    do {
      iVar5 = ndpkt;
      pfVar1 = &prot->y;
      uVar6 = (ulong)((int)uVar6 + -1);
      uVar4 = prot->rgb;
      arg_a = prot->a;
      fVar7 = (prot->x - 320.0) + fVar9;
      pQVar3 = pQVar2 + ndpkt;
      prot = prot + 1;
      fVar8 = (*pfVar1 - fVar10) / fVar11 + fVar9;
      pQVar3->ui32[0] = (uVar4 & 0xff0000) >> 0x10;
      pQVar3->ui32[1] = (uVar4 & 0xff00) >> 8;
      pQVar3->ui32[2] = uVar4 & 0xff;
      uVar4 = fptoui(arg_a);
      pQVar3->ui32[3] = uVar4;
      ndpkt = iVar5 + 1;
      pQVar3 = pQVar2 + ndpkt;
      uVar4 = fptoui(fVar7 * 16.0);
      pQVar3->ui32[0] = uVar4;
      uVar4 = fptoui(fVar8 * 16.0);
      pQVar3->ui32[1] = uVar4;
      ndpkt = iVar5 + 2;
      pQVar3->ui32[3] = 0;
      pQVar3->ui32[2] = 0xfffffff - pri;
    } while (uVar6 != 0);
  }
  return;
}

static void SetCircle(int pri, short int xo, short int yo, short int r, u_char dtl, u_char cr, u_char cg, u_char cb, int a) {
	u_char a;
	float rad;
	float div;
	int i;
	int x[20];
	int y[20];
	int z;
	int mpri;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  long lVar6;
  int iVar7;
  float fVar9;
  float fVar10;
  float rad;
  float fVar11;
  float fVar12;
  float fVar13;
  int x [20];
  int y [20];
  uint local_f0;
  uint local_ec;
  ulong uVar8;
  
  local_f0 = (int)(char)cr & 0xff;
  local_ec = (int)(char)cg & 0xff;
  fVar13 = 1.0;
  if (g_bInterlace != '\0') {
    fVar13 = 2.0;
  }
  if (pri < 1) {
    pri = 0x1000;
  }
  fVar12 = (float)(int)(short)xo;
  iVar7 = ((int)(char)dtl & 0xffU) + 2;
  uVar8 = (ulong)iVar7;
  Reserve2DPacket(pri);
  lVar6 = 1;
  x[0] = (int)((fVar12 + 2048.0) * 16.0);
  y[0] = (int)(((float)(int)(short)yo / fVar13 + 2048.0) * 16.0);
  if (1 < uVar8) {
    fVar11 = (float)(int)(short)r;
    iVar2 = 0;
    do {
      iVar3 = iVar2 << 1;
      fVar10 = 16.0;
      iVar2 = (int)lVar6;
      lVar6 = (long)(iVar2 + 1);
      rad = ((float)iVar3 * DAT_00355f98) / (float)((int)(char)dtl & 0xffU);
      fVar9 = SgSinf(rad);
      x[iVar2] = (int)((fVar11 * fVar9 + fVar12 + 2048.0) * fVar10);
      fVar9 = SgCosf(rad);
      y[iVar2] = (int)(((fVar11 * fVar9 + (float)(int)(short)yo) / fVar13 + 2048.0) * fVar10);
    } while (lVar6 < (long)uVar8);
  }
  pQVar5 = pbuf;
  pQVar4 = pbuf + ndpkt;
  pQVar4->ui32[0] = 0;
  pQVar4->ui32[1] = 0;
  pQVar4->ui32[2] = 0;
  pQVar4->ui32[3] = 0;
  pQVar4->ui32[0] = (int)&DAT_70000004 + iVar7 * 2;
  pQVar5[ndpkt + 1].ul64[0] = 0x1000000000000002;
  pQVar5[ndpkt + 1].ul64[1] = 0xe;
  pQVar5[ndpkt + 2].ul64[0] = (ulong)(byte)a << 0x20 | 100;
  pQVar5[ndpkt + 2].ul64[1] = 0x42;
  pQVar5[ndpkt + 3].ul64[0] = 0x10100008c;
  pQVar5[ndpkt + 3].ul64[1] = 0x4e;
  iVar7 = ndpkt + 4;
  pQVar5[iVar7].ul64[0] = uVar8 | 0x2022c00000008000;
  ndpkt = ndpkt + 5;
  pQVar5[iVar7].ul64[1] = 0x41;
  lVar6 = 0;
  if (uVar8 != 0) {
    do {
      pQVar5 = pbuf;
      iVar7 = (int)lVar6;
      pQVar4 = pbuf + ndpkt;
      pQVar4->ui32[3] = 0x80;
      pQVar5 = pQVar5 + ndpkt + 1;
      ndpkt = ndpkt + 2;
      pQVar4->ui32[0] = local_f0;
      lVar6 = (long)(iVar7 + 1);
      pQVar4->ui32[2] = (int)(char)cb & 0xff;
      pQVar4->ui32[1] = local_ec;
      pQVar5->ui32[0] = x[iVar7];
      uVar1 = y[iVar7];
      pQVar5->ui32[3] = 0;
      pQVar5->ui32[1] = uVar1;
      pQVar5->ui32[2] = 0xfffffff - pri;
    } while (lVar6 < (long)uVar8);
  }
  return;
}

void AngleForWin(int pri, short int xo, short int yo, short int r, u_char ptn) {
	float px;
	float py;
	float rad;
	float div;
	int i;
	int x[20];
	int y[20];
	int z;
	int mpri;
	
  uint uVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  uint *puVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float unaff_f20;
  float fVar16;
  float unaff_f22;
  float fVar17;
  int x [20];
  int y [20];
  int mpri;
  uint *local_dc;
  
  puVar4 = (uint *)x;
  iVar7 = (int)(short)xo;
  iVar10 = (int)(short)yo;
  iVar6 = (int)(short)r;
  fVar17 = 1.0;
  if (g_bInterlace != '\0') {
    fVar17 = 2.0;
  }
  iVar9 = 0;
  if (pri < 1) {
    pri = 0x1000;
  }
  Reserve2DPacket(pri);
  fVar16 = 16.0;
  local_dc = (uint *)y;
  iVar13 = (iVar7 - iVar6) + 1;
  iVar12 = iVar7 + iVar6 + -1;
  x[0] = (int)(((float)iVar7 + 2048.0) * 16.0);
  piVar11 = y;
  piVar8 = x;
  y[0] = (int)(((float)iVar10 / fVar17 + 2048.0) * 16.0);
  mpri = pri;
  do {
    piVar8 = piVar8 + 1;
    piVar11 = piVar11 + 1;
    fVar15 = ((float)iVar9 * DAT_00355f9c) / (float)DAT_003571d4;
    if (ptn == '\x01') {
      fVar14 = SgCosf(fVar15);
      unaff_f22 = (float)iVar13 + (float)iVar6 * fVar14;
      fVar15 = SgSinf(fVar15);
      fVar15 = (float)iVar6 * fVar15;
LAB_001f601c:
      unaff_f20 = (float)(iVar10 + iVar6 + -1) - fVar15;
    }
    else if (ptn < 2) {
      if (ptn == '\0') {
        fVar14 = SgSinf(fVar15);
        unaff_f22 = (float)iVar12 - (float)iVar6 * fVar14;
        fVar15 = SgCosf(fVar15);
        fVar15 = (float)iVar6 * fVar15;
        goto LAB_001f601c;
      }
    }
    else {
      if (ptn == '\x02') {
        fVar14 = SgCosf(fVar15);
        unaff_f22 = (float)iVar12 - (float)iVar6 * fVar14;
        fVar15 = SgSinf(fVar15);
        fVar15 = (float)iVar6 * fVar15;
      }
      else {
        if (ptn != '\x03') goto code_r0x001f609c;
        fVar14 = SgSinf(fVar15);
        unaff_f22 = (float)iVar13 + (float)iVar6 * fVar14;
        fVar15 = SgCosf(fVar15);
        fVar15 = (float)iVar6 * fVar15;
      }
      unaff_f20 = (float)((iVar10 - iVar6) + 1) + fVar15;
    }
code_r0x001f609c:
    pQVar2 = pbuf;
    iVar9 = iVar9 + 1;
    *piVar8 = (int)((unaff_f22 + 2048.0) * fVar16);
    *piVar11 = (int)((unaff_f20 / fVar17 + 2048.0) * fVar16);
    if (9 < iVar9) {
      pQVar5 = pbuf + ndpkt;
      pQVar3 = pbuf + ndpkt + 1;
      pQVar5->ui32[0] = 0;
      pQVar5->ui32[1] = 0;
      pQVar5->ui32[2] = 0;
      pQVar5->ui32[3] = 0;
      pQVar5->ui32[0] = 0x7000001a;
      pQVar3->ul64[1] = 0xe;
      pQVar3->ul64[0] = 0x1000000000000002;
      pQVar2[ndpkt + 2].ul64[1] = 0x42;
      pQVar2[ndpkt + 2].ul64[0] = 0x100000064;
      pQVar2[ndpkt + 3].ul64[1] = 0x4e;
      pQVar2[ndpkt + 3].ul64[0] = 0x100008c;
      pQVar2[ndpkt + 4].ul64[0] = 0x2022c0000000800b;
      pQVar2[ndpkt + 4].ul64[1] = 0x41;
      ndpkt = ndpkt + 5;
      iVar6 = 10;
      do {
        pQVar3 = pQVar2 + ndpkt;
        pQVar3->ui32[3] = 1;
        pQVar3->ui32[0] = 0;
        pQVar5 = pQVar2 + ndpkt + 1;
        pQVar3->ui32[1] = 0;
        ndpkt = ndpkt + 2;
        pQVar3->ui32[2] = 0;
        iVar6 = iVar6 + -1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        pQVar5->ui32[0] = uVar1;
        uVar1 = *local_dc;
        pQVar5->ui32[3] = 0;
        local_dc = local_dc + 1;
        pQVar5->ui32[1] = uVar1;
        pQVar5->ui32[2] = 0xfffffff - mpri;
      } while (-1 < iVar6);
      return;
    }
  } while( true );
}
