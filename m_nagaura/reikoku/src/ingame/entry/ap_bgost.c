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
    if (cVar1 == 4) {
      Mission04BindGhostLoad01Req();
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
      if (cVar1 == 6)
       {
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
  switch(bgst_wrk.load_mode) {
  case 0:
    bgst_wrk.load_mode = 1;
    break;
  case 1:
    if (bgst_wrk.rel_mot != 0xff) {
      motReleaseAniMdlBuf(bgst_wrk.rel_mot,bgst_wrk.mot_adr);
    }
    LoadReq(bgst_wrk.bg_no, bgst_wrk.mdl_adr);
    bgst_wrk.load_mode = 2;
    break;
  case 2:
    if (IsLoadEndAll() != 0) {
      motInitEnemyMdl(bgst_wrk.mdl_adr, jene_dat[ingame_wrk.msn_no]);
      LoadEneDmgTex(bgst_wrk.bg_no bgst_wrk.mot_adr);
      LoadReq(bgst_wrk.bg_no,bgst_wrk.mot_adr);
      bgst_wrk.load_mode = 3;
    }
    break;
  case 3:
    if (IsLoadEndAll() != 0) {
      motInitEnemyAnm(bgst_wrk.mot_adr, bgst_wrk.mdl_adr, bgst_wrk.bg_no);
      SeFileLoadAndSet(bgst_wrk.bg_no, jene_dat[ingame_wrk.msn_no]);
      bgst_wrk.load_mode = 4;
    }
    break;
  case 4:
    if (IsLoadEndAll() != 0) {
      bgst_wrk.load_mode = 5;
    }
    break;
  case 5:
    return 1;
  }
  return 0;
}
