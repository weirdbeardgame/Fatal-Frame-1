// STATUS: NOT STARTED


void motAniCodeClearBuf(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  uint *puVar1;
  short *psVar2;
  uint uVar3;
  
  puVar1 = &(ani_ctrl->anm).buf[0].stat;
  uVar3 = 0;
  psVar2 = &(ani_ctrl->anm).buf[0].cnt;
  do {
    *puVar1 = 0;
    uVar3 = uVar3 + 1;
    *psVar2 = 0;
    puVar1 = puVar1 + 2;
    psVar2 = psVar2 + 4;
  } while (uVar3 < 10);
  return;
}

void motAniCodeSetBuf(ANI_CTRL *ani_ctrl, ANI_CODE code) {
	u_int i;
	
  short sVar1;
  ANI_BUF *pAVar2;
  uint uVar3;
  
  uVar3 = 0;
  pAVar2 = (ani_ctrl->anm).buf;
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  do {
    uVar3 = uVar3 + 1;
    if (pAVar2->stat == 0) {
      pAVar2->code = code;
      sVar1 = *(short *)&(ani_ctrl->anm).timer;
      pAVar2->stat = 1;
      pAVar2->cnt = sVar1;
      return;
    }
    pAVar2 = pAVar2 + 1;
  } while (uVar3 < 10);
  return;
}

u_char motAniCodeRead(ANI_CTRL *ani_ctrl) {
	ANI_CODE_CTRL *c_ctrl;
	int args[3];
	
  short code;
  int iVar1;
  short *psVar2;
  int args [3];
  
  (ani_ctrl->anm).stat = 0;
  psVar2 = (ani_ctrl->anm).code_now;
  while( true ) {
    code = *psVar2;
    GetAniCodeArgs(code,args);
    motAniCodeExec(ani_ctrl,code,args);
    iVar1 = (ani_ctrl->anm).stat;
    if (iVar1 != 0) break;
    psVar2 = (ani_ctrl->anm).code_now;
  }
  return iVar1 == 1;
}

void motAniCodeExec(ANI_CTRL *ani_ctrl, ANI_CODE code, int *args) {
  uint uVar1;
  
  uVar1 = ((int)code & 0xffffU) >> 0xc;
  if (uVar1 == 1) {
    motAniCodeReadTIMER(ani_ctrl,args);
    return;
  }
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      motAniCodeReadCTRL(ani_ctrl,args);
      return;
    }
  }
  else if (uVar1 == 2) {
    motAniCodeReadMOT(ani_ctrl,args);
    return;
  }
  motAniCodeSetBuf(ani_ctrl,(short)((int)code & 0xffffU));
  return;
}

void motAniTimerCodeExec(ANI_CTRL *ani_ctrl) {
	int args[3];
	
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  uint *puVar4;
  ANI_CTRL *pAVar5;
  int args [3];
  
  puVar4 = &(ani_ctrl->anm).buf[0].stat;
  pAVar5 = ani_ctrl;
  do {
    if ((*puVar4 != 0) &&
       (uVar2 = motGetNowFrame(&ani_ctrl->mot), uVar2 == (ushort)(pAVar5->anm).buf[0].cnt)) {
      uVar1 = (pAVar5->anm).buf[0].code;
      GetAniCodeArgs(uVar1,args);
      uVar1 = uVar1 >> 0xc;
      if (uVar1 == 4) {
        motAniCodeReadSE(ani_ctrl,args);
        psVar3 = (ani_ctrl->anm).code_now;
      }
      else if (uVar1 < 5) {
        if (uVar1 == 3) {
          motAniCodeReadMIM(ani_ctrl,args);
          psVar3 = (ani_ctrl->anm).code_now;
        }
        else {
          psVar3 = (ani_ctrl->anm).code_now;
        }
      }
      else if (uVar1 == 5) {
        motAniCodeReadDOOR(ani_ctrl,args);
        psVar3 = (ani_ctrl->anm).code_now;
      }
      else if (uVar1 == 6) {
        motAniCodeReadEFCT(ani_ctrl,args);
        psVar3 = (ani_ctrl->anm).code_now;
      }
      else {
        psVar3 = (ani_ctrl->anm).code_now;
      }
      *puVar4 = 0;
      (ani_ctrl->anm).code_now = psVar3 + -1;
    }
    puVar4 = puVar4 + 2;
    pAVar5 = (ANI_CTRL *)&(pAVar5->anm).loop_rest;
  } while (puVar4 < &(ani_ctrl->anm).code_now);
  return;
}

int motAniCodeIsEnd(ANI_CODE code) {
	int args[3];
	
  uint uVar1;
  int args [3];
  
  GetAniCodeArgs((short)((int)code & 0xffffU),args);
  uVar1 = 0;
  if (((int)code & 0xffffU) >> 0xc == 0) {
    uVar1 = (uint)(args[0] == 0);
  }
  return uVar1;
}

void GetAniCodeArgs(ANI_CODE code, int *args) {
  uint uVar1;
  uint uVar3;
  uint uVar2;
  
  uVar1 = (uint)code;
  uVar2 = uVar1 & 0xffff;
  uVar3 = uVar2 >> 10 & 3;
  if (uVar3 == 1) {
    args[1] = uVar1 & 7;
    *args = uVar2 >> 3 & 0x7f;
    args[2] = 0;
    return;
  }
  if (1 < uVar3) {
    if (uVar3 != 2) {
      return;
    }
    *args = uVar2 >> 6 & 0xf;
    args[2] = uVar1 & 7;
    args[1] = uVar2 >> 3 & 7;
    return;
  }
  if (uVar3 != 0) {
    return;
  }
  args[2] = 0;
  *args = uVar1 & 0x3ff;
  args[1] = 0;
  return;
}

void motAniCodeReadCTRL(ANI_CTRL *ani_ctrl, int *args) {
  int iVar1;
  short *psVar2;
  
  iVar1 = *args;
  if (iVar1 == 1) {
    iVar1 = (ani_ctrl->anm).loop_rest;
    if (iVar1 == 0) {
      (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
      return;
    }
    if (iVar1 != -1) {
      (ani_ctrl->anm).loop_rest = iVar1 + -1;
    }
    (ani_ctrl->anm).code_now = (ani_ctrl->anm).loop_start;
    return;
  }
  if (1 < iVar1) {
    if (iVar1 == 2) {
      if (args[1] == 0) {
        (ani_ctrl->anm).loop_rest = -1;
      }
      else {
        (ani_ctrl->anm).loop_rest = args[1];
      }
      (ani_ctrl->anm).timer = 0;
      psVar2 = (ani_ctrl->anm).code_now + 1;
      (ani_ctrl->anm).loop_start = psVar2;
      (ani_ctrl->anm).code_now = psVar2;
      return;
    }
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  (ani_ctrl->anm).stat = 1;
  return;
}

void motAniCodeReadTIMER(ANI_CTRL *ani_ctrl, int *args) {
  (ani_ctrl->anm).timer = *args;
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  return;
}

void motAniCodeReadMOT(ANI_CTRL *ani_ctrl, int *args) {
	MOT_CTRL *m_ctrl;
	
  short sVar1;
  uint num;
  uint *puVar2;
  short *psVar3;
  
  num = *args;
  (ani_ctrl->mot).play_id = num;
  puVar2 = (uint *)GetFileInPak((ani_ctrl->mot).top,num);
  (ani_ctrl->mot).dat = puVar2;
  if (ani_ctrl->mtop == (uint *)0x0) {
    psVar3 = (ani_ctrl->anm).code_now;
  }
  else {
    puVar2 = (uint *)GetFileInPak(ani_ctrl->mtop,(ani_ctrl->mot).play_id);
    ani_ctrl->mdat = puVar2;
    psVar3 = (ani_ctrl->anm).code_now;
  }
  sVar1 = *(short *)(args + 1);
  (ani_ctrl->anm).stat = 2;
  (ani_ctrl->anm).code_now = psVar3 + 1;
  ani_ctrl->ftype = sVar1;
  ani_ctrl->interp_flg = 0;
  return;
}

void motAniCodeReadMIM(ANI_CTRL *ani_ctrl, int *args) {
  short *psVar1;
  MIME_CTRL *pMVar2;
  
  pMVar2 = ani_ctrl->mim;
  if (pMVar2 != (MIME_CTRL *)0x0) {
    if (args[1] == 0) {
      pMVar2[*args].loop = '\0';
      if (args[2] == 0) {
        mimRequest(ani_ctrl->mim + *args,*(uchar *)(args + 1));
        psVar1 = (ani_ctrl->anm).code_now;
      }
      else {
        mimRequestLastFrame(ani_ctrl->mim + *args,*(uchar *)(args + 1));
        psVar1 = (ani_ctrl->anm).code_now;
      }
      goto LAB_00171aac;
    }
    if (args[1] != 1) {
      psVar1 = (ani_ctrl->anm).code_now;
      goto LAB_00171aac;
    }
    pMVar2[*args].loop = '\x01';
    pMVar2 = ani_ctrl->mim + *args;
    if (pMVar2->stat != '\x01') {
      psVar1 = (ani_ctrl->anm).code_now;
      goto LAB_00171aac;
    }
    if (args[2] == 0) {
      mimRequest(pMVar2,*(uchar *)(args + 1));
      psVar1 = (ani_ctrl->anm).code_now;
      goto LAB_00171aac;
    }
    mimRequestLastFrame(pMVar2,*(uchar *)(args + 1));
  }
  psVar1 = (ani_ctrl->anm).code_now;
LAB_00171aac:
  (ani_ctrl->anm).code_now = psVar1 + 1;
  return;
}

void motAniCodeReadSE(ANI_CTRL *ani_ctrl, int *args) {
	sceVu0FVECTOR pos;
	
  uchar lr;
  float pos [4];
  
  if (*args == 0) {
    lr = '\0';
  }
  else {
    if (*args != 1) {
      return;
    }
    lr = '\x01';
  }
  GetPlyrFootPos(pos,ani_ctrl,lr);
  SeReqFootStep(pos);
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  return;
}

void motAniCodeReadDOOR(ANI_CTRL *ani_ctrl, int *args) {
  switch(*args) {
  case 0:
    door_open_ctrl.open[1] = '\0';
    door_open_ctrl.open[0] = '\0';
    break;
  case 1:
    door_open_ctrl.open[0] = '\x01';
    break;
  case 2:
    door_open_ctrl.open[1] = '\x01';
    break;
  case 3:
    door_open_ctrl.open[0] = '\x01';
    door_open_ctrl.open[1] = door_open_ctrl.open[0];
    break;
  case 4:
    door_open_ctrl.open[0] = '\x02';
    door_open_ctrl.open[1] = door_open_ctrl.open[0];
  }
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  return;
}

void motAniCodeReadEFCT(ANI_CTRL *ani_ctrl, int *args) {
	sceVu0FVECTOR pos;
	
  uchar uVar1;
  short *psVar2;
  float pos [4];
  
  switch(*args) {
  case 0:
    GetPlyrFootPos(pos,ani_ctrl,'\0');
    uVar1 = IsHokoriZone();
    break;
  case 1:
    GetPlyrFootPos(pos,ani_ctrl,'\x01');
    uVar1 = IsHokoriZone();
    break;
  case 2:
    SetSwordSwitch(1);
    psVar2 = (ani_ctrl->anm).code_now;
    goto LAB_00171d04;
  case 3:
    SetSwordSwitch(0);
    psVar2 = (ani_ctrl->anm).code_now;
    goto LAB_00171d04;
  case 4:
    if (ingame_wrk.msn_no != 3) {
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_00171d04;
    }
    if (quake.flg != '\0') {
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_00171d04;
    }
    ReqQuake(0,DAT_00355a10,0xb4,0,1);
    quake.flg = '\x01';
  default:
    psVar2 = (ani_ctrl->anm).code_now;
    goto LAB_00171d04;
  }
  if (uVar1 == '\0') {
    uVar1 = IsKarehaZone(&plyr_wrk.move_box.spd.z);
    if ((uVar1 == '\0') && (uVar1 = IsTakenohaZone(&plyr_wrk.move_box.spd.z), uVar1 == '\0')) {
      psVar2 = (ani_ctrl->anm).code_now;
    }
    else {
      SetLeaf(pos);
      psVar2 = (ani_ctrl->anm).code_now;
    }
  }
  else {
    SetDust2(pos);
    psVar2 = (ani_ctrl->anm).code_now;
  }
LAB_00171d04:
  (ani_ctrl->anm).code_now = psVar2 + 1;
  return;
}

u_char motGetNextMotion(ANI_CTRL *ani_ctrl) {
	ANI_CODE_CTRL *c_ctrl;
	int args[3];
	
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int args [3];
  
  (ani_ctrl->anm).stat = 0;
  puVar3 = (ushort *)(ani_ctrl->anm).code_now;
  while( true ) {
    uVar1 = *puVar3;
    GetAniCodeArgs(uVar1,args);
    uVar1 = uVar1 >> 0xc;
    if (uVar1 == 0) {
      motAniCodeReadCTRL(ani_ctrl,args);
      iVar2 = (ani_ctrl->anm).stat;
    }
    else {
      if (uVar1 == 2) {
        motAniCodeReadMOT(ani_ctrl,args);
      }
      else {
        (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
      }
      iVar2 = (ani_ctrl->anm).stat;
    }
    if (iVar2 != 0) break;
    puVar3 = (ushort *)(ani_ctrl->anm).code_now;
  }
  return iVar2 == 1;
}
