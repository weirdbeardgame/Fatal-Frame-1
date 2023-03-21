// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#173,  not equal)
enum {
	MT_TYPE_INIT = 0,
	MT_TYPE_SELECT = 1,
	MT_MDL_SELECT = 2,
	MT_ANM_SELECT = 3,
	MT_CAM_MODE = 4,
	MT_POP_MENU = 5
};

typedef struct {
	u_char mode;
	u_char mdl_num;
	u_char anm_num;
	char cur_id;
	u_char sel_id;
	char mot_num;
	char mim_num;
	char bg_num;
	char ani_type;
	ANI_CODE **tbl;
	u_int type;
	u_int mdl_id;
	u_int anm_id;
	u_int mimloop;
	u_int motloop;
} MOTTEST_WORK;

typedef struct {
	u_int r;
	u_int g;
	u_int b;
	u_int pad;
} MT_RGB_WORK;

typedef struct {
	int x;
	int y;
	int z;
	u_int pad;
} MT_IVECTOR;

// warning: multiple differing types with the same name (#173,  not equal)
enum {
	RSC_MISSION_NO = 0,
	RSC_ROOM_NO = 1,
	RSC_CHECK = 2,
	RSC_EXIT = 3,
	RSC_MENU_MAX = 4
};

static int rsc_menu_csr = 0;
static int rsc_no[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};
static u_int load_size;

void OutGameCtrl() {
  int iVar1;
  
  AnaPonChk();
  switch(outgame_wrk.mode) {
  case 0:
    init_load_id = LoadReq(0x184,0x1e90000);
    OutGameModeChange(1);
    return;
  case 1:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 != 0) {
      InitTecmotLogo();
      OutGameModeChange(2);
      return;
    }
    break;
  case 2:
    iVar1 = SetTecmoLogo();
    if (iVar1 != 0) {
      OutGameModeChange(3);
      return;
    }
    break;
  case 3:
    title_wrk.mode = 0;
    OutGameModeChange(4);
  case 4:
    TitleCtrl();
    return;
  case 6:
    ModeSlctLoop();
    return;
  case 7:
    ModeSlctLoop();
    return;
  case 8:
    ModeSlctLoop();
    return;
  case 0xb:
    SceneTestCtrl();
    return;
  case 0xc:
    gra2dDraw(0);
    return;
  case 0xd:
    RoomSizeCheckCtrl();
    gra2dDraw(0);
    return;
  case 0xe:
    LayoutTestMain();
    gra2dDraw(0);
    return;
  }
  return;
}

void OutGameModeChange(u_char mode) {
  switch(mode) {
  case 6:
    BattleModeInit();
    break;
  case 7:
    ModeSlctInit(3,9);
    break;
  case 0xb:
    scn_test_wrk.mode = 0;
    break;
  case 0xd:
    RoomSizeCheckInit();
    break;
  case 0xe:
    LayoutTestInit();
  }
  outgame_wrk.mode = mode;
  return;
}

void OrgSetSquare(int pri, float x, float y, float w, float h, u_char r, u_char g, u_char b, u_char a) {
  float y1;
  float x1;
  
  x1 = x - 320.0;
  y1 = y - 224.0;
  SetSquare(pri,x1,y1,x1 + w,y1,x1,y1 + h,x1 + w,y1 + h,r,g,b,a);
  return;
}

void RoomSizeDisp() {
	char tmp_str[256];
	
  char tmp_str [256];
  
  tmp_str[0] = DAT_00352e80;
  memset((void *)((uint)tmp_str | 1),0,0xff);
  OrgSetSquare(2,300.0,78.0,288.0,300.0,'P','x','x','(');
  sprintf(tmp_str,"ROOM DATA SIZE <%d>");
  SetASCIIString2(1,312.0,86.0,1,0x80,0x80,0x80,tmp_str);
  sprintf(tmp_str,s__d_byte_00357768);
  SetASCIIString2(1,380.0,110.0,1,0x80,0x80,0x80,tmp_str);
  sprintf(tmp_str,"0x%08X byte");
  SetASCIIString2(1,380.0,130.0,1,0x80,0x80,0x80,tmp_str);
  return;
}

void RoomSizeCheckCtrl() {
	char tmp_str[256];
	char *str[6];
	int max[2];
	u_int *end_addr;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  float y;
  char tmp_str [256];
  char *str [6];
  int max [2];
  
  tmp_str[0] = DAT_00352e80;
  memset((void *)((uint)tmp_str | 1),0,0xff);
  uVar3 = (int)str + 7U & 7;
  puVar4 = (ulong *)(((int)str + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | _PTR_s_ROOM_SIZE_CHECK_00352f10 >> (7 - uVar3) * 8;
  str._0_8_ = _PTR_s_ROOM_SIZE_CHECK_00352f10;
  uVar3 = (int)str + 0xfU & 7;
  puVar4 = (ulong *)(((int)str + 0xfU) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | _PTR_s_Room_No_00352f18 >> (7 - uVar3) * 8;
  str._8_8_ = _PTR_s_Room_No_00352f18;
  uVar3 = (int)str + 0x17U & 7;
  puVar4 = (ulong *)(((int)str + 0x17U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | _PTR_DAT_00352f20 >> (7 - uVar3) * 8;
  str._16_8_ = _PTR_DAT_00352f20;
  uVar3 = (int)max + 7U & 7;
  puVar4 = (ulong *)(((int)max + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_00357778 >> (7 - uVar3) * 8;
  max = DAT_00357778;
  if ((pad[0].one & 0x40U) == 0) {
    if ((pad[0].rpt & 0x4000U) == 0) {
      iVar6 = rsc_menu_csr + -1;
      if (((pad[0].rpt & 0x1000U) != 0) && (rsc_menu_csr = iVar6, iVar6 < 0)) {
        rsc_menu_csr = 3;
      }
    }
    else {
      rsc_menu_csr = rsc_menu_csr + 1;
      if (3 < rsc_menu_csr) {
        rsc_menu_csr = 0;
      }
    }
    if ((pad[0].one & 0x20U) != 0) {
      if (rsc_menu_csr == 3) goto LAB_0021c6b4;
      if (rsc_menu_csr == 2) {
        LoadReq(rsc_no[0] + 10,0x7f8000);
        puVar5 = RoomMdlLoadReq((uint *)0x4610000,'\0',(uchar)rsc_no[0],(uchar)rsc_no[1],'\0');
        do {
          iVar6 = RoomMdlLoadWait();
        } while (iVar6 == 0);
        load_size = (uint)(puVar5 + -0x1184000);
      }
    }
    iVar6 = rsc_menu_csr;
    if (rsc_menu_csr < 2) {
      if ((pad[0].rpt & 0x2000U) != 0) {
        piVar7 = rsc_no + rsc_menu_csr;
        iVar1 = *piVar7;
        iVar2 = max[rsc_menu_csr];
        *piVar7 = iVar1 + 1;
        if (iVar2 <= iVar1 + 1) {
          *piVar7 = 0;
        }
      }
      if ((pad[0].rpt & 0x8000U) != 0) {
        piVar7 = rsc_no + iVar6;
        iVar1 = *piVar7;
        *piVar7 = iVar1 + -1;
        if (iVar1 + -1 < 0) {
          *piVar7 = max[iVar6] + -1;
        }
      }
    }
    SetASCIIString2(1,60.0,40.0,0,' ',0x80,0x80,str[0]);
    y = 80.0;
    sprintf(tmp_str,&DAT_00357780);
    SetASCIIString2(1,100.0,y,1,0x80,0x80,0x80,tmp_str);
    sprintf(tmp_str,&DAT_00357780);
    SetASCIIString2(1,100.0,100.0,1,0x80,0x80,0x80,tmp_str);
    SetASCIIString2(1,100.0,120.0,1,0x80,0x80,0x80,str[3]);
    SetASCIIString2(1,100.0,140.0,1,0x80,0x80,0x80,str[4]);
    SetASCIIString2(1,400.0,400.0,1,0x80,0x80,0x80,str[5]);
    if (load_size != 0xffffffff) {
      RoomSizeDisp();
    }
    OrgSetSquare(2,y,(float)(rsc_menu_csr * 0x14 + 0x4e),216.0,16.0,'x','P','P','P');
  }
  else {
LAB_0021c6b4:
    OutGameModeChange(4);
  }
  return;
}

void RoomSizeCheckInit() {
  gra2dInitST();
  rsc_menu_csr = 0;
  rsc_no[0] = 0;
  load_size = 0xffffffff;
  rsc_no[1] = 0;
  return;
}
