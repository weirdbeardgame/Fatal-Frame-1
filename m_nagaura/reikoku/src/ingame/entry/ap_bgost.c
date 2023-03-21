// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#98,  not equal)
enum {
	BGLOAD_MODE_REQ = 0,
	BGLOAD_MODE_START = 1,
	BGLOAD_MODE_MDL = 2,
	BGLOAD_MODE_MOT = 3,
	BGLOAD_MODE_SE = 4,
	BGLOAD_MODE_END = 5
};

typedef struct {
	u_char load_mode;
	u_char rel_mot;
	u_char bg_no;
	u_int mdl_adr;
	u_int mot_adr;
	u_int se_adr;
} BGST_WRK;

BGST_WRK bgst_wrk = {
	/* .load_mode = */ 0,
	/* .rel_mot = */ 0,
	/* .bg_no = */ 0,
	/* .mdl_adr = */ 0,
	/* .mot_adr = */ 0,
	/* .se_adr = */ 0
};

void Mission03BindGhost01Delete() {
  DelDataLoadWrk(0x344);
  DelDataLoadWrk(0x362);
  DelDataLoadWrk(0x37c);
  DelDataLoadWrk(0x561);
  DelDataLoadWrk(0x548);
  return;
}

void Mission04BindGhostLoad01Req() {
  bgst_wrk.load_mode = '\0';
  bgst_wrk.se_adr = 0x12;
  bgst_wrk.rel_mot = '\x11';
  bgst_wrk.bg_no = '\x06';
  bgst_wrk.mdl_adr = 0xd80000;
  bgst_wrk.mot_adr = 0xb90000;
  return;
}

void Mission04BindGhostLoad02Req() {
  return;
}

int BindGhostBattleEnd(int wrk_no) {
  char cVar1;
  int iVar2;
  
  if (ingame_wrk.msn_no == 4) {
    cVar1 = *(char *)((int)ene_wrk + wrk_no * 0x430 + 0x11);
    if (cVar1 == '\x04') {
      Mission04BindGhostLoad01Req();
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
      if (cVar1 == '\x06') {
        Mission04BindGhostLoad02Req();
        iVar2 = 1;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

int BindGhostLoad() {
  int iVar1;
  
  switch(bgst_wrk.load_mode) {
  case '\0':
    bgst_wrk.load_mode = '\x01';
    break;
  case '\x01':
    if (bgst_wrk.rel_mot != 0xff) {
      motReleaseAniMdlBuf((uint)bgst_wrk.rel_mot,(uint *)bgst_wrk.mot_adr);
    }
    LoadReq(*(ushort *)
             ((uint)bgst_wrk.bg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a
             ) + 799,bgst_wrk.mdl_adr);
    bgst_wrk.load_mode = '\x02';
    break;
  case '\x02':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      motInitEnemyMdl((uint *)bgst_wrk.mdl_adr,
                      (uint)*(ushort *)
                             ((uint)bgst_wrk.bg_no * 0x40 +
                              *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a));
      LoadEneDmgTex((uint)*(ushort *)
                           ((uint)bgst_wrk.bg_no * 0x40 +
                            *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a),
                    (uint *)(bgst_wrk.mot_adr + 0x98000));
      LoadReq(*(ushort *)
               ((uint)bgst_wrk.bg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) +
               0x1c) + 0x363,bgst_wrk.mot_adr);
      bgst_wrk.load_mode = '\x03';
    }
    break;
  case '\x03':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      iVar1 = (uint)bgst_wrk.bg_no * 0x40 + *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4);
      motInitEnemyAnm((uint *)bgst_wrk.mot_adr,(uint)*(ushort *)(iVar1 + 0x1a),
                      (uint)*(ushort *)(iVar1 + 0x1c));
      SeFileLoadAndSet(*(uint *)((uint)bgst_wrk.bg_no * 0x40 +
                                 *(int *)(&jene_dat + (uint)ingame_wrk.msn_no * 4) + 0x20),
                       bgst_wrk.se_adr);
      bgst_wrk.load_mode = '\x04';
    }
    break;
  case '\x04':
    iVar1 = IsLoadEndAll();
    if (iVar1 != 0) {
      bgst_wrk.load_mode = '\x05';
    }
    break;
  case '\x05':
    return 1;
  }
  return 0;
}
