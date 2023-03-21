// STATUS: NOT STARTED

typedef struct {
	int type;
	int free;
	int format;
	int dir;
} MC_START_CHECK;

MC_START_CHECK mc_start_check[0] = {
};

char mcStartCheckMain() {
	static char err_flg = 0;
	
  char cVar1;
  
  AnaPonChk();
  mc_ctrl.stepbak = mc_ctrl.step;
  if (mc_ctrl.step != 1) {
    if (mc_ctrl.step < 2) {
      if (mc_ctrl.step == 0) {
        mcSetStep(4,0x29);
      }
      goto LAB_0021b590;
    }
    if (mc_ctrl.step != 4) {
      if (mc_ctrl.step == 5) {
        err_flg_117 = '\x01';
        cVar1 = mcStartCheckYesno(1);
        if (cVar1 == '\x01') {
          return '\x01';
        }
        if (('\x01' < cVar1) && (cVar1 == '\x02')) {
          mcInit('\a',(uint *)0x0,'\0');
          mcSetStep(1,0x29);
        }
      }
      goto LAB_0021b590;
    }
    if (err_flg_117 == '\x01') {
      mcSetStep(1,0x29);
    }
    else {
      mcSetStep(1,0x29);
    }
  }
  cVar1 = mcCtrlCheck();
  if (cVar1 != '\0') {
    mcStartCheckSet();
    if (mc_ctrl.port == 0) {
      if (err_flg_117 == '\x01') {
        mcSetStep(4,0x29);
      }
      else {
        mcSetStep(4,0x29);
      }
      mc_ctrl.port = 1;
      mc_ctrl.port_mes = 2;
    }
    else {
      cVar1 = mcStartCheckResult();
      if (cVar1 == '\x01') {
        mcSetStep(5,0x1c);
      }
      else if (cVar1 < '\x02') {
        if (cVar1 != '\0') {
          return '\x01';
        }
        mcSetStep(5,0x1b);
      }
      else {
        if (cVar1 != '\x03') {
          return '\x01';
        }
        mcSetStep(5,0x26);
      }
    }
  }
LAB_0021b590:
  mcDispMessage();
  return '\0';
}

void mcStartCheckSet() {
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = mc_ctrl.port;
  iVar2 = mc_ctrl.card[0].free;
  *(int *)(&mc_start_check + mc_ctrl.port * 0x10) = mc_ctrl.card[0].type;
  iVar3 = mc_ctrl.card[0].format;
  (&DAT_00343f8c)[iVar4 * 4] = iVar2;
  bVar1 = mc_ctrl.acs.sta == '\0';
  (&DAT_00343f90)[iVar4 * 4] = iVar3;
  if (bVar1) {
    (&DAT_00343f94)[iVar4 * 4] = 1;
    return;
  }
  (&DAT_00343f94)[iVar4 * 4] = 0;
  return;
}

char mcStartCheckResult() {
	u_int i;
	u_int card_exist;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  bVar1 = false;
  uVar4 = 0;
  piVar5 = (int *)&mc_start_check;
  do {
    iVar3 = *piVar5;
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 4;
    if (iVar3 == 2) {
      bVar1 = true;
    }
  } while (uVar4 < 2);
  if (bVar1) {
    uVar4 = 0;
    piVar5 = &DAT_00343f94;
    do {
      uVar4 = uVar4 + 1;
      if (*piVar5 == 1) {
        return '\x02';
      }
      piVar5 = piVar5 + 4;
    } while (uVar4 < 2);
    uVar4 = 0;
    piVar5 = (int *)&mc_start_check;
    while( true ) {
      if (*piVar5 == 2) {
        if (piVar5[2] == 0) {
          return '\x02';
        }
        iVar3 = piVar5[1];
      }
      else {
        iVar3 = piVar5[1];
      }
      uVar4 = uVar4 + 1;
      if (0x6fc < iVar3) break;
      piVar5 = piVar5 + 4;
      if (1 < uVar4) {
        if (_mc_start_check == 2) {
          mc_ctrl.port_mes = 1;
        }
        else {
          mc_ctrl.port_mes = 2;
        }
        cVar2 = '\0';
        if ((((_mc_start_check == 2) && (DAT_00343f98 == 2)) && (DAT_00343f8c < 0x6fd)) &&
           (cVar2 = '\x03', 0x6fc < DAT_00343f9c)) {
          cVar2 = '\0';
        }
        return cVar2;
      }
    }
    return '\x02';
  }
  return '\x01';
}

char mcStartCheckYesno(int def_pos) {
	static int backup[2];
	
  char cVar1;
  short sVar2;
  int *piVar3;
  
  if (mc_ctrl.sub_step == 0) {
    mc_ctrl.sub_step = 1;
    backup_127 = 0xff;
    DAT_00357c14 = 0xff;
    mc_ctrl.now_cur = def_pos;
  }
  YesNoCrslOKR(0x14000,(float)(mc_ctrl.now_cur * 0x84 + 0xb4),DAT_00356298,0x808080,128.0,2.0);
  if (mc_ctrl.sub_step == 1) {
    mcAcsReq(7);
    mc_ctrl.sub_step = 2;
  }
  else {
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if ((&backup_127)[mc_ctrl.port] != 0xff) {
        if ((mc_ctrl.acs.card_sta < -10) && ((int)(&backup_127)[mc_ctrl.port ^ 1] < -10)) {
          mcSetMessage(0x1c);
        }
        else {
          if ((long)(int)(&backup_127)[mc_ctrl.port] != (long)mc_ctrl.acs.card_sta) {
            return '\x02';
          }
          if (((long)(int)(&backup_127)[mc_ctrl.port] == 0) && (mc_ctrl.msg_no == 0x1c)) {
            return '\x02';
          }
        }
      }
      piVar3 = &backup_127 + mc_ctrl.port;
      mc_ctrl.port = mc_ctrl.port ^ 1;
      *piVar3 = (int)mc_ctrl.acs.card_sta;
      mc_ctrl.sub_step = 1;
    }
  }
  if ((pad[0].one & 0x40U) != 0) {
    SeStartFix(1,0,0x1000,0x1000,0);
    if (mc_ctrl.now_cur == 0) {
      return '\x01';
    }
    return '\x02';
  }
  if ((pad[0].one & 0x10U) != 0) {
    SeStartFix(3,0,0x1000,0x1000,0);
    return '\x02';
  }
  if ((((*key_now[2] != 1) && (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) && (*key_now[3] != 1)) &&
     (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
    return '\0';
  }
  SeStartFix(0,0,0x1000,0x1000,0);
  mc_ctrl.now_cur = mc_ctrl.now_cur ^ 1;
  return '\0';
}
