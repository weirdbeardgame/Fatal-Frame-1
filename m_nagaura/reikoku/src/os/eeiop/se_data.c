// STATUS: NOT STARTED

enum SE_PARAM_NO {
	SE_PARAM_NO_000 = 0,
	SE_PARAM_NO_001 = 1,
	SE_PARAM_NO_002 = 2,
	SE_PARAM_NO_003 = 3,
	SE_PARAM_NO_004 = 4,
	SE_PARAM_NO_005 = 5,
	SE_PARAM_NO_006 = 6,
	SE_PARAM_NO_007 = 7,
	SE_PARAM_NO_008 = 8,
	SE_PARAM_NO_009 = 9,
	SE_PARAM_NO_010 = 10,
	SE_PARAM_NO_011 = 11,
	SE_PARAM_NO_012 = 12,
	SE_PARAM_NO_013 = 13
};

char se_use_static_tbl[0][30] = {
};
char se_use_btlhit_tbl[0][3] = {
};
char se_use_voice_tbl[0][5] = {
};
char se_use_door_tbl[0][2] = {
};
char se_use_foot_tbl[0][1] = {
};
char se_use_srund_tbl[0][1] = {
};
char se_use_ghost_tbl[0][11] = {
};
char se_use_event_tbl[0][3] = {
};
char se_use_wide_tbl[0][1] = {
};
char se_use_jidou_tbl[0][1] = {
};
static SE_STE se_ste_tbl[0] = {
};

char CheckSeUse(int se_no) {
	u_char se_pos;
	u_char type;
	u_char tbl_no;
	
  char cVar1;
  uchar tbl_no;
  uchar type;
  uchar se_no_00;
  
  if ((uint)se_no < 0x1e) {
    cVar1 = (&se_use_static_tbl)[se_no];
  }
  else {
    cVar1 = (char)se_no;
    if (se_no < 0x21) {
      se_no_00 = cVar1 + 0xe2;
      type = '\x01';
      tbl_no = (char)se_ctrl.btlhit_no + 0xb9;
    }
    else if (se_no < 0x26) {
      se_no_00 = cVar1 + 0xdf;
      type = '\x02';
      tbl_no = (char)se_ctrl.voice_no + 0xb7;
    }
    else if (se_no < 0x28) {
      se_no_00 = cVar1 + 0xda;
      type = '\x03';
      tbl_no = (char)se_ctrl.door_no[0] + '@';
    }
    else if (se_no < 0x2a) {
      se_no_00 = cVar1 + 0xd8;
      type = '\x04';
      tbl_no = (char)se_ctrl.door_no[1] + '@';
    }
    else if (se_no < 0x2c) {
      se_no_00 = cVar1 + 0xd6;
      type = '\x05';
      tbl_no = (char)se_ctrl.door_no[2] + '@';
    }
    else if (se_no < 0x2d) {
      se_no_00 = cVar1 + 0xd4;
      type = '\x06';
      tbl_no = (char)se_ctrl.foot_no[0] + '\\';
    }
    else if (se_no < 0x2e) {
      se_no_00 = cVar1 + 0xd3;
      type = '\a';
      tbl_no = (char)se_ctrl.foot_no[1] + '\\';
    }
    else if (se_no < 0x2f) {
      se_no_00 = cVar1 + 0xd2;
      type = '\b';
      tbl_no = (char)se_ctrl.foot_no[2] + '\\';
    }
    else if (se_no < 0x30) {
      se_no_00 = cVar1 + 0xd1;
      type = '\t';
      tbl_no = (char)se_ctrl.foot_no[3] + '\\';
    }
    else if (se_no < 0x31) {
      se_no_00 = cVar1 + 0xd0;
      type = '\n';
      tbl_no = (char)se_ctrl.foot_no[4] + '\\';
    }
    else if (se_no < 0x32) {
      se_no_00 = cVar1 + 0xcf;
      type = '\v';
      tbl_no = (char)se_ctrl.foot_no[5] + '\\';
    }
    else if (se_no < 0x33) {
      se_no_00 = cVar1 + 0xce;
      type = '\f';
      tbl_no = (char)se_ctrl.foot_no[6] + '\\';
    }
    else if (se_no < 0x34) {
      se_no_00 = cVar1 + 0xcd;
      type = '\r';
      tbl_no = (char)se_ctrl.foot_no[7] + '\\';
    }
    else if (se_no < 0x35) {
      se_no_00 = cVar1 + 0xcc;
      type = '\x0e';
      tbl_no = (char)se_ctrl.srund_no[0] + '*';
    }
    else if (se_no < 0x36) {
      se_no_00 = cVar1 + 0xcb;
      type = '\x0f';
      tbl_no = (char)se_ctrl.srund_no[1] + '*';
    }
    else if (se_no < 0x41) {
      se_no_00 = cVar1 + 0xca;
      type = '\x10';
      tbl_no = (char)se_ctrl.ghost_no[0] + 0xad;
    }
    else if (se_no < 0x4c) {
      se_no_00 = cVar1 + 0xbf;
      type = '\x11';
      tbl_no = (char)se_ctrl.ghost_no[1] + 0xad;
    }
    else if (se_no < 0x57) {
      se_no_00 = cVar1 + 0xb4;
      type = '\x12';
      tbl_no = (char)se_ctrl.ghost_no[2] + 0xad;
    }
    else if (se_no < 0x5a) {
      se_no_00 = cVar1 + 0xa9;
      type = '\x13';
      tbl_no = (char)se_ctrl.event_no[0] + 0x89;
    }
    else if (se_no < 0x5d) {
      se_no_00 = cVar1 + 0xa6;
      type = '\x14';
      tbl_no = (char)se_ctrl.event_no[1] + 0x89;
    }
    else if (se_no < 0x5e) {
      se_no_00 = cVar1 + 0xa3;
      type = '\x15';
      tbl_no = (char)se_ctrl.wide_no + '\x17';
    }
    else {
      if (se_no < 0x5f) {
        se_no_00 = cVar1 + 0xa2;
        type = '\x16';
        cVar1 = (char)se_ctrl.jidou_no[0];
      }
      else if (se_no < 0x60) {
        se_no_00 = cVar1 + 0xa1;
        type = '\x17';
        cVar1 = (char)se_ctrl.jidou_no[1];
      }
      else if (se_no < 0x61) {
        se_no_00 = cVar1 + 0xa0;
        type = '\x18';
        cVar1 = (char)se_ctrl.jidou_no[2];
      }
      else {
        if (0x61 < se_no) {
          return '\0';
        }
        se_no_00 = cVar1 + 0x9f;
        type = '\x19';
        cVar1 = (char)se_ctrl.jidou_no[3];
      }
      tbl_no = cVar1 + 'j';
    }
    cVar1 = GetSeUseTbl(type,tbl_no,se_no_00);
  }
  return cVar1;
}

char GetSeUseTbl(u_char type, u_char tbl_no, u_char se_no) {
  int iVar1;
  char cVar2;
  char_0__3_ *pcVar3;
  char_0__1_ *pcVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (int)(char)tbl_no & 0xff;
  uVar6 = (int)(char)se_no & 0xff;
  if (((int)(char)type & 0xffU) - 1 < 0x19) {
    cVar2 = -0x30;
    switch((int)(char)type & 0xffU) {
    case 1:
      if ((uVar6 < 3) && (uVar5 < 6)) {
        iVar1 = uVar5 * 3;
        pcVar3 = &se_use_btlhit_tbl;
LAB_00113b98:
        return pcVar3[uVar6 + iVar1];
      }
      break;
    case 2:
      if ((uVar6 < 5) && (uVar5 < 0x32)) {
        iVar1 = uVar5 * 5;
        pcVar3 = &se_use_voice_tbl;
        goto LAB_00113b98;
      }
      break;
    default:
      goto switchD_00113b6c_caseD_3;
    case 0xe:
    case 0xf:
      if ((uVar6 == 0) && (uVar5 < 0x13)) {
        pcVar4 = &se_use_srund_tbl;
LAB_00113bdc:
        return pcVar4[uVar5];
      }
      break;
    case 0x10:
    case 0x11:
    case 0x12:
      if (uVar6 < 0xb) {
        iVar1 = uVar5 * 0xb;
        pcVar3 = &se_use_ghost_tbl;
        goto LAB_00113b98;
      }
      break;
    case 0x13:
    case 0x14:
      if ((uVar6 < 3) && (uVar5 < 0x4b)) {
        iVar1 = uVar5 * 3;
        pcVar3 = &se_use_event_tbl;
        goto LAB_00113b98;
      }
      break;
    case 0x15:
      if ((uVar6 == 0) && (uVar5 < 0xf)) {
        pcVar4 = &se_use_wide_tbl;
        goto LAB_00113bdc;
      }
      break;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      if ((uVar6 == 0) && (uVar5 < 0xe)) {
        pcVar4 = &se_use_jidou_tbl;
        goto LAB_00113bdc;
      }
    }
    return '\0';
  }
  cVar2 = '\0';
switchD_00113b6c_caseD_3:
  return cVar2;
}

SE_STE* SeGetSeSte(int num) {
  return (SE_STE *)(&se_ste_tbl + num * 4);
}
