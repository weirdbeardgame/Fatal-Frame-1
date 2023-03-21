// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#102,  not equal)
enum {
	PG_STTS_NO = 0,
	PG_STTS_READY = 1,
	PG_STTS_IN = 2,
	PG_STTS_NOW = 3,
	PG_STTS_OUT = 4
};

PGOST_DAT pg_dat[0] = {
};
int test_rg_no = 0;
PGOST_WRK pg_wrk = {
	/* .req_no = */ 0,
	/* .pgst_no = */ 0,
	/* .ev_no = */ 0,
	/* .stts = */ 0,
	/* .time = */ 0
};

void PuzzleGhostInit() {
  memset(&pg_wrk,0,5);
  pg_wrk.req_no = 0xff;
  pg_wrk.pgst_no = 0xff;
  return;
}

void PuzzleGhostLoadReq(u_char pg_no) {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  pbVar1 = ap_wrk.pg_req;
  do {
    iVar2 = iVar2 + 1;
    if (*pbVar1 == 0xff) {
      *pbVar1 = pg_no;
      return;
    }
    pbVar1 = pbVar1 + 1;
  } while (iVar2 < 5);
  return;
}

void PuzzleGhostReq(u_char pg_no) {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  ap_wrk.stts = ap_wrk.stts | 0x20;
  if (DAT_00332698 != (pg_no | 0x80)) {
    iVar2 = 1;
    do {
      if (4 < iVar2) {
        pg_wrk.ev_no = ev_wrk.evt_no;
        return;
      }
      pbVar1 = &DAT_00332698 + iVar2;
      iVar2 = iVar2 + 1;
    } while (*pbVar1 != (pg_no | 0x80));
  }
  pg_wrk.ev_no = ev_wrk.evt_no;
  pg_wrk.req_no = pg_no;
  return;
}

int PuzzleGhostContinue(u_char ev_no) {
  if (((pg_wrk.ev_no != 0xff) && (pg_wrk.ev_no == ev_no)) && (pg_wrk.pgst_no != 0xff)) {
    pg_wrk.req_no = pg_wrk.pgst_no;
    return 1;
  }
  return 0;
}

void PuzzleGhostPhotoReq() {
	int i;
	
  uchar uVar1;
  byte *pbVar2;
  int iVar3;
  
  pg_wrk.stts = '\0';
  rg_dsp_wrk[0].mode = '\0';
  if (rg_dsp_wrk[0].se_wrk_no != 0xff) {
    SeFadeFlame((uint)rg_dsp_wrk[0].se_wrk_no,0x14,0);
  }
  rg_dsp_wrk[0].se_wrk_no = 0xff;
  event_stts[pg_wrk.ev_no] = '\x01';
  uVar1 = pg_wrk.req_no;
  pbVar2 = ev_wrk.spev_tmp;
  iVar3 = 2;
  do {
    if (*pbVar2 == pg_wrk.pgst_no) {
      *pbVar2 = 0xff;
    }
    iVar3 = iVar3 + -1;
    pbVar2 = pbVar2 + 1;
  } while (-1 < iVar3);
  if (DAT_00332698 == (uVar1 | 0x80)) {
    DAT_00332698 = 0xff;
  }
  else {
    for (iVar3 = 1; iVar3 < 5; iVar3 = iVar3 + 1) {
      if ((&DAT_00332698)[iVar3] == (uVar1 | 0x80)) {
        (&DAT_00332698)[iVar3] = 0xff;
        pg_wrk.pgst_no = 0xff;
        pg_wrk.ev_no = 0xff;
        return;
      }
    }
  }
  pg_wrk.pgst_no = 0xff;
  pg_wrk.ev_no = 0xff;
  return;
}

void PuzzleGhostMain() {
  PuzzleGhostDispSet();
  if (pg_wrk.stts != '\0') {
    PuzzleGhostDispMain();
    return;
  }
  return;
}

void PuzzleGhostDispSet() {
  uchar uVar1;
  int iVar2;
  uint uVar3;
  short flame;
  
  uVar1 = pg_wrk.req_no;
  if (pg_wrk.req_no != 0xff) {
    pg_wrk.pgst_no = pg_wrk.req_no;
    if (pg_wrk.stts == '\0') {
      pg_wrk.stts = '\x01';
    }
    else if (pg_wrk.stts == '\x04') {
      iVar2 = SeStartPos(0x1c,rg_dsp_wrk[0].pos,0,0x1000,0x1000,0xff);
      rg_dsp_wrk[0].se_wrk_no = (uchar)iVar2;
      pg_wrk.stts = '\x02';
      pg_wrk.time = pg_wrk.time * -3 + '<';
    }
    pg_wrk.req_no = 0xff;
    return;
  }
  if (pg_wrk.pgst_no == 0xff) {
    return;
  }
  if (pg_wrk.stts == '\x03') {
    pg_wrk.time = '\x14';
    flame = 0x14;
    if (rg_dsp_wrk[0].se_wrk_no == 0xff) {
      rg_dsp_wrk[0].se_wrk_no = pg_wrk.req_no;
      pg_wrk.stts = '\x04';
      pg_wrk.time = '\x14';
      return;
    }
  }
  else {
    if (pg_wrk.stts != '\x02') {
      return;
    }
    uVar3 = 0x14 - pg_wrk.time / 3;
    pg_wrk.time = (uchar)uVar3;
    if (rg_dsp_wrk[0].se_wrk_no == 0xff) {
      rg_dsp_wrk[0].se_wrk_no = pg_wrk.req_no;
      pg_wrk.stts = '\x04';
      return;
    }
    flame = 0x14 - (short)((uVar3 & 0xff) / 3);
  }
  pg_wrk.stts = '\x04';
  SeFadeFlame((uint)rg_dsp_wrk[0].se_wrk_no,flame,0);
  rg_dsp_wrk[0].se_wrk_no = uVar1;
  return;
}

void PuzzleGhostDispMain() {
	sceVu0FVECTOR room_pos;
	
  int iVar1;
  float room_pos [4];
  
  if (pg_wrk.stts == '\x01') {
    rg_dsp_wrk[0].mode = '\x02';
    rg_dsp_wrk[0].rg_no = pg_wrk.pgst_no + 0x80;
    GetRoomPos(*(uchar *)((uint)pg_wrk.pgst_no * 10 + 0x32289b),room_pos);
    rg_dsp_wrk[0].pos[0] =
         (float)(int)*(short *)(&DAT_0032289c + (uint)pg_wrk.pgst_no * 10) + room_pos[0];
    rg_dsp_wrk[0].pos[1] =
         (float)(int)*(short *)(&DAT_0032289e + (uint)pg_wrk.pgst_no * 10) + room_pos[1];
    rg_dsp_wrk[0].pos[2] =
         (float)(int)*(short *)(&DAT_003228a0 + (uint)pg_wrk.pgst_no * 10) + room_pos[2];
    iVar1 = SeStartPos(0x1c,rg_dsp_wrk[0].pos,0,0x1000,0x1000,0xff);
    rg_dsp_wrk[0].se_wrk_no = (uchar)iVar1;
    pg_wrk.stts = '\x02';
    pg_wrk.time = '<';
  }
  if (pg_wrk.time != '\0') {
    pg_wrk.time = pg_wrk.time + 0xff;
  }
  if (pg_wrk.stts == '\x03') {
    rg_dsp_wrk[0].alpha = 'd';
  }
  else if (pg_wrk.stts < 4) {
    if ((pg_wrk.stts == '\x02') &&
       (rg_dsp_wrk[0].alpha = (uchar)((int)((0x3c - (uint)pg_wrk.time) * 100) / 0x3c),
       pg_wrk.time == '\0')) {
      pg_wrk.stts = '\x03';
    }
  }
  else if ((pg_wrk.stts == '\x04') &&
          (rg_dsp_wrk[0].alpha = pg_wrk.time * '\x05', pg_wrk.time == '\0')) {
    rg_dsp_wrk[0].mode = '\0';
    pg_wrk.stts = '\0';
  }
  return;
}
