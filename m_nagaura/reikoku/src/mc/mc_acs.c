// STATUS: NOT STARTED

char (*mc_acs[0])(/* parameters unknown */) = {
};

char mcAcsMain() {
	char end_flg;
	
  bool bVar1;
  char cVar2;
  long lVar3;
  
  bVar1 = false;
  if (mc_ctrl.acs.req == '\0') {
    cVar2 = '\x01';
  }
  else {
    if (mc_ctrl.acs.sync == '\0') {
      lVar3 = (**(code **)(&mc_acs + mc_ctrl.acs.func_no * 4))();
      if (lVar3 != 0) {
        if (lVar3 == 1) {
          mc_ctrl.acs.sync = '\x01';
        }
        else {
          bVar1 = true;
        }
      }
    }
    else {
      cVar2 = mcSyncNB();
      if (cVar2 < '\x03') {
        if ('\0' < cVar2) {
          bVar1 = true;
        }
      }
      else if (cVar2 == '\x03') {
        mc_ctrl.acs.sync = '\0';
      }
    }
    cVar2 = '\0';
    if (bVar1) {
      mcAcsEnd();
      cVar2 = '\x01';
    }
  }
  return cVar2;
}

void mcAcsReq(int func_no) {
  if (func_no < 10) {
    mc_ctrl.acs.req = '\x01';
    mc_ctrl.acs.func_no = (char)func_no;
    mc_ctrl.acs.retry_cnt = '\x05';
    mc_ctrl.acs.sync = '\0';
    mc_ctrl.acs.sta = '\0';
  }
  return;
}

void mcAcsEnd() {
  sceMcSync(0,0,0);
  mc_ctrl.acs.req = '\0';
  return;
}

char mcSlotCheck() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcGetInfo(mc_ctrl.port,mc_ctrl.slot,0x343b48,0x343b4c,0x343b50);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\n';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcFileCheck() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcGetDir(mc_ctrl.port,mc_ctrl.slot,0x343c60,0,0x12,0x343680);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\n';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcOpen() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcOpen(mc_ctrl.port,mc_ctrl.slot,0x343c60,mc_ctrl.rw.mode);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      mc_ctrl.acs.sta = '\a';
      if (mc_ctrl.mode != 0) {
        if (mc_ctrl.mode == 2) {
          mc_ctrl.acs.sta = '\a';
        }
        else {
          mc_ctrl.acs.sta = '\x06';
        }
      }
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcClose() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcClose(mc_ctrl.rw.fd);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      mc_ctrl.acs.sta = '\a';
      if (mc_ctrl.mode != 0) {
        if (mc_ctrl.mode == 2) {
          mc_ctrl.acs.sta = '\a';
        }
        else {
          mc_ctrl.acs.sta = '\x06';
        }
      }
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcLoad() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcRead(mc_ctrl.rw.fd,mc_ctrl.rw.buf,mc_ctrl.rw.size);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\x06';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcSave() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcWrite(mc_ctrl.rw.fd,mc_ctrl.rw.buf,mc_ctrl.rw.size);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\a';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcExistCheck() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcGetInfo(mc_ctrl.port,mc_ctrl.slot,0x343b48,0x343b4c,0x343b50);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\n';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcMakeDir() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcMkdir(mc_ctrl.port,mc_ctrl.slot,0x343be0);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\a';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcFormat() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcFormat(mc_ctrl.port,mc_ctrl.slot);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\b';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcDelete() {
  char cVar1;
  long lVar2;
  
  lVar2 = sceMcDelete(mc_ctrl.port,mc_ctrl.slot,0x343c60);
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if ((int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18) < 1) {
      cVar1 = '\x02';
      mc_ctrl.acs.sta = '\a';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

char mcSyncNB() {
	int sync;
	int result;
	int cmd;
	
  long lVar1;
  int cmd;
  int result;
  
  lVar1 = sceMcSync(1,&cmd,(uint)&cmd | 4);
  if (lVar1 == 0) {
    return '\0';
  }
  if (lVar1 != 1) {
    if (lVar1 != -1) {
      return '\x01';
    }
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1;
    if (0 < (int)((uint)(byte)mc_ctrl.acs.retry_cnt << 0x18)) {
      return '\x03';
    }
    mc_ctrl.acs.sta = '\n';
    return '\x02';
  }
  if (cmd == 2) {
    if (-1 < result) {
      mc_ctrl.acs.sta = '\0';
      mc_ctrl.rw.fd = result;
      return '\x01';
    }
    if (0 < (int)((uint)(byte)(mc_ctrl.acs.retry_cnt - 1U) << 0x18)) {
      mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1U;
      return '\x03';
    }
    cmd = 2;
    goto LAB_002192c4;
  }
  if (cmd < 3) {
    if (cmd != 1) goto LAB_00219294;
    if (mc_ctrl.step == 1) {
      if ((mc_ctrl.card[0].format == 1) && (mc_ctrl.card[0].type == 2)) {
        mc_ctrl.acs.sta = '\0';
        return '\x01';
      }
    }
    else {
      mc_ctrl.acs.card_sta = (char)result;
      if (result == 0) {
        if (mc_ctrl.card[0].type == 2) {
          mc_ctrl.acs.sta = '\0';
          return '\x01';
        }
        mc_ctrl.acs.card_sta = -0xb;
      }
    }
  }
  else {
    if (cmd == 0xd) {
      if (-1 < result) {
        mc_ctrl.dir.file_num = (ushort)result;
        mc_ctrl.acs.sta = '\0';
        return '\x01';
      }
      if (result == -4) {
        mc_ctrl.dir.file_num = 0;
        mcSyncErrWork(0xd,-4);
        return '\x01';
      }
      if (0 < (int)((uint)(byte)(mc_ctrl.acs.retry_cnt - 1U) << 0x18)) {
        mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt - 1U;
        return '\x03';
      }
      cmd = 0xd;
      goto LAB_002192c4;
    }
LAB_00219294:
    if (-1 < result) {
      mc_ctrl.acs.sta = '\0';
      return '\x01';
    }
  }
  if (0 < (int)((uint)(byte)(mc_ctrl.acs.retry_cnt - 1) << 0x18)) {
    mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt + -1;
    return '\x03';
  }
LAB_002192c4:
  mc_ctrl.acs.retry_cnt = mc_ctrl.acs.retry_cnt + -1;
  mcSyncErrWork(cmd,result);
  return '\x02';
}

void mcSyncErrWork(int cmd, int result) {
  switch(cmd) {
  case 1:
    if (mc_ctrl.step != 1) {
      mc_ctrl.acs.sta = '\x02';
      return;
    }
    if ((mc_ctrl.card[0].type == 2) && (mc_ctrl.card[0].format == 0)) {
      mc_ctrl.acs.sta = '\x01';
      return;
    }
    mc_ctrl.acs.sta = '\x02';
    return;
  case 2:
    if (result < -2) {
      if (-6 < result) {
        mc_ctrl.acs.sta = '\n';
        return;
      }
      if (result != -7) {
        mc_ctrl.acs.sta = '\x02';
        return;
      }
      mc_ctrl.acs.sta = '\n';
      return;
    }
    break;
  case 3:
  case 0xe:
    if (result == -4) {
      mc_ctrl.acs.sta = '\n';
      return;
    }
    break;
  default:
    goto LAB_002194b0;
  case 5:
    if (result < -5) {
      mc_ctrl.acs.sta = '\x02';
      return;
    }
    goto joined_r0x0021944c;
  case 6:
    if (result < -2) {
      if (-6 < result) {
        mc_ctrl.acs.sta = '\n';
        return;
      }
      if (result != -8) {
        mc_ctrl.acs.sta = '\x02';
        return;
      }
      mc_ctrl.acs.sta = '\n';
      return;
    }
    break;
  case 0xb:
    if (result < -4) {
      mc_ctrl.acs.sta = '\x02';
      return;
    }
joined_r0x0021944c:
    if (result < -2) {
      mc_ctrl.acs.sta = '\n';
      return;
    }
    break;
  case 0xd:
    if (result == -4) {
      mc_ctrl.acs.sta = '\x04';
      return;
    }
    if (result < -3) {
      if (result != -5) {
        mc_ctrl.acs.sta = '\x02';
        return;
      }
      mc_ctrl.acs.sta = '\n';
      return;
    }
    break;
  case 0xf:
    if (result < -6) {
      mc_ctrl.acs.sta = '\x02';
      return;
    }
    if (result < -3) {
      mc_ctrl.acs.sta = '\n';
      return;
    }
  }
  if (result == -2) {
    mc_ctrl.acs.sta = '\x01';
    return;
  }
LAB_002194b0:
  mc_ctrl.acs.sta = '\x02';
  return;
}
