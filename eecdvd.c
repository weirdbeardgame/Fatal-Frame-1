// STATUS: NOT STARTED


static CB_DelayTh() {
  iSignalSema(param_3);
  SYNC(0);
  EI();
  return;
}

sceCdDelayThread() {
  undefined8 uVar1;
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  
  local_4c = 1;
  local_48 = 0;
  local_3c = 0;
  uVar1 = CreateSema(auStack_50);
  SetAlarm(param_1,0x2215c0,uVar1);
  WaitSema(uVar1);
  DeleteSema(uVar1);
  return;
}

sceCdCallback() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceCdSync(1);
  uVar1 = 0;
  if (lVar2 == 0) {
    DIntr();
    uVar1 = sceCdCbfunc;
    sceCdCbfunc = param_1;
    EIntr();
  }
  return uVar1;
}

_sceCd_cd_callback() {
  sceCdCbfunc_num = *param_1;
  sceCdCbfunc_number = sceCdCbfunc_num;
  if (sceCdCbfunc_num == 0xb) {
    _sceCd_c_cb_sem = 0;
  }
  else {
    iSignalSema(_sceCd_ncmd_semid);
    if ((cb_thid == 0) || (sceCdCbfunc == 0)) {
      _sceCd_c_cb_sem = 0;
    }
    else {
      iSignalSema(cb_semid);
    }
  }
  sceCdCbfunc_num = 0;
  return;
}

_Cdvd_cbLoop() {
  do {
    WaitSema(cb_semid);
    if (sceCdCbfunc_num == -1) {
      _sceCd_c_cb_sem = 0;
      sceCdCbfunc_num = 0;
      cb_thid = 0;
      sceCdPoffCbfunc_num = 0;
      ExitDeleteThread();
    }
    if (0 < SCE_CD_debug) {
      scePrintf(0x353048,sceCdCbfunc,sceCdCbfunc_number);
    }
    if ((sceCdCbfunc != (code *)0x0) && (sceCdCbfunc_number != 0)) {
      (*sceCdCbfunc)(sceCdCbfunc_number);
    }
    _sceCd_c_cb_sem = 0;
  } while( true );
}

sceCdInitEeCB() {
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = cb_thid != 0;
  if (bVar1) {
    ChangeThreadPriority(cb_thid,param_1);
  }
  else {
    uVar2 = GetThreadId();
    my_thid = (undefined4)uVar2;
    ReferThreadStatus(uVar2,0x402f18);
    DAT_00402f58 = 0x35d070;
    DAT_00402f4c = _Cdvd_cbLoop;
    DAT_00402f5c = (undefined4)param_1;
    DAT_00402f50 = param_2;
    DAT_00402f54 = param_3;
    uVar2 = CreateThread(0x402f48);
    cb_thid = (int)uVar2;
    StartThread(uVar2,0);
  }
  return !bVar1;
}

_sceCd_cd_read_intr() {
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 | 0x20000000);
  if (0 < *piVar6) {
    iVar2 = piVar6[2];
    iVar4 = 0;
    if (0 < *piVar6) {
      piVar1 = piVar6 + 4;
      do {
        puVar3 = (undefined *)(iVar2 + iVar4);
        iVar4 = iVar4 + 1;
        *puVar3 = *(undefined *)piVar1;
        piVar1 = (int *)((int)(piVar6 + 4) + iVar4);
      } while (iVar4 < *piVar6);
      iVar2 = piVar6[1];
      goto LAB_0022193c;
    }
  }
  iVar2 = piVar6[1];
LAB_0022193c:
  if (0 < iVar2) {
    iVar4 = piVar6[3];
    iVar5 = 0;
    if (0 < iVar2) {
      piVar1 = piVar6 + 0x14;
      do {
        puVar3 = (undefined *)(iVar4 + iVar5);
        iVar5 = iVar5 + 1;
        *puVar3 = *(undefined *)piVar1;
        piVar1 = (int *)((int)(piVar6 + 0x14) + iVar5);
      } while (iVar5 < piVar6[1]);
    }
  }
  _sceCd_cd_callback(0x345ed4);
  return;
}

static cmd_sem_init() {
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  
  if ((_sceCd_ncmd_semid == &_heap_size) || (_sceCd_scmd_semid == &_heap_size)) {
    local_3c = 0;
    local_4c = 1;
    local_48 = 1;
    _sceCd_ncmd_semid = (undefined *)CreateSema(auStack_50);
    _sceCd_scmd_semid = (undefined *)CreateSema(auStack_50);
    local_48 = 0;
    cb_semid = (undefined *)CreateSema(auStack_50);
    _sceCd_c_cb_sem = 0;
  }
  return;
}

static cdvd_exit() {
  if (cb_thid != 0) {
    sceCdCbfunc_num = 0xffffffff;
    SignalSema(cb_semid);
  }
  DeleteSema(_sceCd_ncmd_semid);
  DeleteSema(_sceCd_scmd_semid);
  DeleteSema(cb_semid);
  DIntr();
  sceSifRemoveCmdHandler(0xffffffff80000012);
  EIntr();
  return;
}

sceCdPOffCallback() {
  undefined4 uVar1;
  
  if ((int)_icmd_bind < 0) {
    PowerOffCB();
  }
  DIntr();
  uVar1 = sceCdPoffCbfunc;
  sceCdPoffCbfunc = param_1;
  sceCdPoffCbdata = param_2;
  EIntr();
  return uVar1;
}

static _sceCd_Poff_Intr() {
  if ((sceCdPoffCbfunc != (code *)0x0) && (Init_seq == 0)) {
    (*sceCdPoffCbfunc)(sceCdPoffCbdata);
  }
  return;
}

static PowerOffCB() {
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  sceSifInitRpc(0);
  Init_seq = 1;
  DIntr();
  sceSifAddCmdHandler(0xffffffff80000012,0x221b08,0);
  EIntr();
  if ((int)_icmd_bind < 0) {
    iVar4 = 0;
    do {
      while (lVar3 = sceSifBindRpc(0x402f78,0xffffffff80000596,0), lVar3 < 0) {
        if (0 < SCE_CD_debug) {
          scePrintf(0x353070);
        }
        iVar2 = 0x100000;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
      iVar2 = 0x100000;
      if (DAT_00402f9c != 0) {
        _icmd_bind = (undefined *)0x0;
        goto LAB_00221c60;
      }
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
      bVar1 = iVar4 < 0x11;
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  else {
LAB_00221c60:
    func_num = 0xb;
    lVar3 = sceSifCallRpc(0x402f78,1,1,0,0,0,0,0);
    if (-1 < lVar3) {
      Init_seq = 0;
      return 1;
    }
  }
  Init_seq = 0;
  return 0;
}

sceCdSearchFile() {
  char cVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  long lVar12;
  int iVar13;
  
  cmd_sem_init();
  puVar11 = (undefined *)PollSema(_sceCd_ncmd_semid);
  if (_sceCd_ncmd_semid == puVar11) {
    ncmd_sema_keep_cmd = 1;
    ReferThreadStatus(my_thid,0x402f18);
    lVar12 = sceCdSync(1);
    if (lVar12 == 0) {
      sceSifInitRpc(0);
      if ((int)_sf_bind < 0) {
        while( true ) {
          while (lVar12 = sceSifBindRpc(0x403140,0xffffffff80000597,0), lVar12 < 0) {
            if (0 < SCE_CD_debug) {
              scePrintf(0x353090);
            }
            iVar13 = 0x100000;
            do {
              iVar13 = iVar13 + -1;
            } while (iVar13 != -1);
          }
          iVar13 = 0x100000;
          if (DAT_00403164 != 0) break;
          do {
            iVar13 = iVar13 + -1;
          } while (iVar13 != -1);
        }
        _sf_bind = (undefined *)0x0;
      }
      DAT_00402fe4 = *param_2;
      iVar13 = 0;
      if (DAT_00402fe4 != '\0') {
        for (iVar13 = 1;
            (iVar13 < 0x100 &&
            (cVar1 = param_2[iVar13], (&DAT_00402fe4)[iVar13] = cVar1, cVar1 != '\0'));
            iVar13 = iVar13 + 1) {
        }
      }
      if (iVar13 == 0x100) {
        DAT_004030e3 = 0;
      }
      DAT_004030e4 = &_sf_data;
      if (0 < SCE_CD_debug) {
        scePrintf(0x3530b0,0x402fe4);
      }
      sceSifWriteBackDCache(0x402fc0,0x128);
      lVar12 = sceSifCallRpc();
      uVar8 = uRam20402fd8;
      uVar7 = uRam20402fd0;
      uVar6 = uRam20402fc8;
      uVar5 = uRam20402fc0;
      if (-1 < lVar12) {
        uVar2 = (int)param_1 + 7U & 7;
        puVar3 = (ulong *)(((int)param_1 + 7U) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uRam20402fc0 >> (7 - uVar2) * 8;
        uVar2 = (uint)param_1 & 7;
        *(ulong *)((int)param_1 - uVar2) =
             uVar5 << uVar2 * 8 |
             *(ulong *)((int)param_1 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (int)param_1 + 0xfU & 7;
        puVar3 = (ulong *)(((int)param_1 + 0xfU) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
        uVar2 = (uint)(param_1 + 2) & 7;
        puVar3 = (ulong *)((int)(param_1 + 2) - uVar2);
        *puVar3 = uVar6 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (int)param_1 + 0x17U & 7;
        puVar3 = (ulong *)(((int)param_1 + 0x17U) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
        uVar2 = (uint)(param_1 + 4) & 7;
        puVar3 = (ulong *)((int)(param_1 + 4) - uVar2);
        *puVar3 = uVar7 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (int)param_1 + 0x1fU & 7;
        puVar3 = (ulong *)(((int)param_1 + 0x1fU) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
        uVar2 = (uint)(param_1 + 6) & 7;
        puVar3 = (ulong *)((int)(param_1 + 6) - uVar2);
        *puVar3 = uVar8 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar9 = uRam20402fe0;
        uVar2 = (int)param_1 + 0x23U & 3;
        puVar4 = (uint *)(((int)param_1 + 0x23U) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | uRam20402fe0 >> (3 - uVar2) * 8;
        uVar2 = (uint)(param_1 + 8) & 3;
        puVar4 = (uint *)((int)(param_1 + 8) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | uVar9 << uVar2 * 8;
        if (((0 < SCE_CD_debug) && (scePrintf(0x3530c8,param_1 + 2), 0 < SCE_CD_debug)) &&
           (scePrintf(0x3530d8,param_1[1]), 0 < SCE_CD_debug)) {
          scePrintf(0x3530e8,*param_1);
        }
        uVar10 = uRam20403100;
        SignalSema(_sceCd_ncmd_semid);
        return uVar10;
      }
    }
    SignalSema(_sceCd_ncmd_semid);
  }
  return 0;
}

_sceCd_ncmd_prechk() {
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_ncmd_semid);
  if (_sceCd_ncmd_semid == puVar1) {
    ncmd_sema_keep_cmd = (undefined4)param_1;
    ReferThreadStatus(my_thid,0x402f18);
    lVar3 = sceCdSync(1);
    if (lVar3 == 0) {
      sceSifInitRpc(0);
      if (-1 < (int)_ncmd_bind) {
        return 1;
      }
      while( true ) {
        while (lVar3 = sceSifBindRpc(0x347050,0xffffffff80000595,0), lVar3 < 0) {
          if (0 < SCE_CD_debug) {
            scePrintf(0x353128);
          }
          iVar2 = 0x100000;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        if (_sceCd_cd_ncmd._36_4_ != 0) break;
        iVar2 = 0x100000;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
      _ncmd_bind = (undefined *)0x0;
      return 1;
    }
    SignalSema(_sceCd_ncmd_semid);
  }
  else if (0 < SCE_CD_debug) {
    scePrintf(0x353100,param_1,ncmd_sema_keep_cmd);
    return 0;
  }
  return 0;
}

sceCdNcmdDiskReady() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = _sceCd_ncmd_prechk(2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = sceSifCallRpc(0x347050,0xe,0,0,0,0x345f00,4,0);
    uVar1 = uRam20345f00;
    if (lVar2 < 0) {
      SignalSema(_sceCd_ncmd_semid);
      uVar1 = 0;
    }
    else {
      SignalSema(_sceCd_ncmd_semid);
    }
  }
  return uVar1;
}

sceCdSync() {
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    if (0 < SCE_CD_debug) {
      scePrintf(0x353140);
    }
    while ((_sceCd_c_cb_sem != 0 || (lVar2 = sceSifCheckStatRpc(0x347050), lVar2 != 0))) {
      sceCdDelayThread(0x3c);
    }
    return 0;
  }
  uVar1 = 1;
  if (_sceCd_c_cb_sem == 0) {
    lVar2 = sceSifCheckStatRpc(0x347050);
    uVar1 = 1;
    if (lVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

sceCdSyncS() {
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (0 < SCE_CD_debug) {
      scePrintf(0x353150);
    }
    while( true ) {
      lVar1 = sceSifCheckStatRpc(0x3478c8);
      uVar2 = 0;
      if (lVar1 == 0) break;
      sceCdDelayThread(0x3c);
    }
  }
  else {
    uVar2 = sceSifCheckStatRpc(0x3478c8);
  }
  return uVar2;
}

_sceCd_scmd_prechk() {
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_scmd_semid);
  if (_sceCd_scmd_semid == puVar1) {
    scmd_sema_keep_cmd = (undefined4)param_1;
    ReferThreadStatus(my_thid,0x402f18);
    lVar3 = sceCdSyncS(1);
    if (lVar3 == 0) {
      sceSifInitRpc(0);
      if (-1 < (int)_scmd_bind) {
        return 1;
      }
      while( true ) {
        while (lVar3 = sceSifBindRpc(0x3478c8,0xffffffff80000593,0), lVar3 < 0) {
          if (0 < SCE_CD_debug) {
            scePrintf(0x353188);
          }
          iVar2 = 0x100000;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        if (_sceCd_cd_scmd._36_4_ != 0) break;
        iVar2 = 0x100000;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
      _scmd_bind = (undefined *)0x0;
      return 1;
    }
    SignalSema(_sceCd_scmd_semid);
  }
  else if (0 < SCE_CD_debug) {
    scePrintf(0x353160,param_1,scmd_sema_keep_cmd);
    return 0;
  }
  return 0;
}

sceCdInit() {
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = sceCdSyncS(1);
  uVar3 = 0;
  if (lVar2 == 0) {
    sceSifInitRpc(0);
    my_thid = GetThreadId();
    Init_seq = 1;
    c_cnt_57 = c_cnt_57 + 1;
    _icmd_bind = &_heap_size;
    _sf_bind = &_heap_size;
    _ncmd_bind = &_heap_size;
    _scmd_bind = &_heap_size;
    _scmd_dr_bind = &_heap_size;
    _sceCd_ee_read_mode = 0;
    _it_bind = &_heap_size;
    while( true ) {
      while (lVar2 = sceSifBindRpc(0x403168,0xffffffff80000592,0), lVar2 < 0) {
        if (0 < SCE_CD_debug) {
          scePrintf(0x3531a0,lVar2,c_cnt_57);
        }
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      if (DAT_0040318c != 0) break;
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    _it_bind = (undefined *)0x0;
    _i_mode = param_1;
    sceSifWriteBackDCache(0x4031c0,4);
    lVar2 = sceSifCallRpc(0x403168,0,0,0x4031c0,4,0x347080,0x10,0);
    if (lVar2 < 0) {
      Init_seq = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if (iRam2034708c != 0xff) {
        if (iRam2034708c == 0xfe) {
          SCE_CD_debug = 1;
        }
        else {
          iVar1 = iRam20347084 + 0xff;
          if (-1 < iRam20347084) {
            iVar1 = iRam20347084;
          }
          if (iVar1 >> 8 < 2) {
            uVar3 = 2;
          }
          else {
            iVar1 = iRam20347088 + 0xff;
            if (-1 < iRam20347088) {
              iVar1 = iRam20347088;
            }
            if (iVar1 >> 8 < 2) {
              uVar3 = 2;
            }
          }
        }
      }
      Init_seq = 0;
      if (((param_1 < 0) || (param_1 < 2)) || (param_1 != 5)) {
        cmd_sem_init();
        PowerOffCB();
      }
      else {
        if (0 < SCE_CD_debug) {
          scePrintf(0x3531c0);
        }
        cdvd_exit();
        _sceCd_ncmd_semid = &_heap_size;
        _sceCd_scmd_semid = &_heap_size;
        cb_semid = &_heap_size;
      }
    }
  }
  return uVar3;
}

sceCdDiskReady() {
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (0 < SCE_CD_debug) {
    scePrintf(0x3531d0);
  }
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_scmd_semid);
  uVar3 = 6;
  if (_sceCd_scmd_semid == puVar1) {
    lVar4 = sceCdSyncS(1);
    if (lVar4 == 0) {
      sceSifInitRpc(0);
      if ((int)_scmd_dr_bind < 0) {
        while( true ) {
          while (lVar4 = sceSifBindRpc(0x403190,0xffffffff8000059a,0), lVar4 < 0) {
            if (0 < SCE_CD_debug) {
              scePrintf(0x3531e0);
            }
            iVar2 = 0x100000;
            do {
              iVar2 = iVar2 + -1;
            } while (iVar2 != -1);
          }
          iVar2 = 0x100000;
          if (DAT_004031b4 != 0) break;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        _scmd_dr_bind = (undefined *)0x0;
      }
      _dr_mode = (undefined4)param_1;
      sceSifWriteBackDCache(0x4031d0,4);
      lVar4 = sceSifCallRpc(0x403190,0,0,0x4031d0,4,0x347080,4,0);
      if (-1 < lVar4) {
        if (0 < SCE_CD_debug) {
          scePrintf(0x353200);
        }
        uVar3 = uRam20347080;
        SignalSema(_sceCd_scmd_semid);
        return uVar3;
      }
    }
    SignalSema(_sceCd_scmd_semid);
    uVar3 = 6;
    if (param_1 == 8) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

sceCdMmode() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = _sceCd_scmd_prechk(0x22);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _sceCd_scmdsdata._0_4_ = param_1;
    sceSifWriteBackDCache(0x3474c0,4);
    lVar2 = sceSifCallRpc(0x3478c8,0x22,0,0x3474c0,4,0x347080,4,0);
    uVar1 = uRam20347080;
    if (lVar2 < 0) {
      SignalSema(_sceCd_scmd_semid);
      uVar1 = 0;
    }
    else {
      SignalSema(_sceCd_scmd_semid);
    }
  }
  return uVar1;
}

sceCdReadClock() {
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = _sceCd_scmd_prechk(0xf);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (0 < SCE_CD_debug) {
      scePrintf(0x353218);
    }
    lVar4 = sceSifCallRpc(0x3478c8,1,0,0,0,0x347080,0x10,0);
    if (lVar4 < 0) {
      SignalSema(_sceCd_scmd_semid);
      uVar3 = 0;
    }
    else {
      uVar5 = lRam20347088 << 0x20 | (ulong)uRam20347084;
      uVar1 = param_1 + 7 & 7;
      puVar2 = (ulong *)((param_1 + 7) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | uVar5 >> (7 - uVar1) * 8;
      uVar1 = param_1 & 7;
      *(ulong *)(param_1 - uVar1) =
           uVar5 << uVar1 * 8 | *(ulong *)(param_1 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8
      ;
      if (0 < SCE_CD_debug) {
        scePrintf(0x353238);
      }
      uVar3 = uRam20347080;
      SignalSema(_sceCd_scmd_semid);
    }
  }
  return uVar3;
}

sceCdStInit() {
  stm_status = 0;
  sceCdStream();
  return;
}

sceCdStStart() {
  stm_status = 1;
  sceCdStream(param_1,0,0,1,param_2);
  return;
}

sceCdStSeekF() {
  sceCdStream(param_1,0,0,9,0x4031d8);
  return;
}

sceCdStSeek() {
  sceCdStream(param_1,0,0,4,0x4031d8);
  return;
}

sceCdStStop() {
  stm_status = 0;
  sceCdStream(0,0,0,3,0x4031d8);
  return;
}

sceCdStRead() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < SCE_CD_debug) {
    scePrintf(0x353258,param_1);
  }
  uVar2 = 0;
  if (stm_status == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    sceSifWriteBackDCache(param_2,param_1 << 0xb);
    if (param_3 == 0) {
      uVar2 = sceCdStream(0,param_1,param_2,2,0x4031d8);
      uVar5 = uVar2 & 0xffff;
      *param_4 = uVar2 >> 0x10;
    }
    else {
      iVar3 = 0;
      while( true ) {
        do {
          uVar1 = sceCdStream(0,param_1 - uVar5,(int)param_2 + iVar3,2,0x4031d8);
          uVar4 = uVar1 & 0xffff;
          uVar1 = uVar1 >> 0x10;
          uVar5 = uVar5 + uVar4;
          if (uVar1 == 0) {
            if (uVar4 == 0) {
              sceCdDelayThread(8);
            }
          }
          else {
            uVar2 = uVar1;
            if (0 < SCE_CD_debug) {
              scePrintf(0x353288,uVar5,uVar4,param_1,uVar1);
            }
          }
          if (uVar5 == param_1) goto LAB_00222d04;
          iVar3 = uVar5 * 0x800;
        } while (uVar1 == 0);
        if (uVar4 == 0) break;
        iVar3 = uVar5 * 0x800;
      }
LAB_00222d04:
      if (0 < SCE_CD_debug) {
        scePrintf(0x3532d0);
      }
      *param_4 = uVar2;
    }
  }
  return uVar5;
}

sceCdStPause() {
  stm_status = 0;
  if (0 < SCE_CD_debug) {
    scePrintf(0x3532f0);
  }
  sceCdStream(0,0,0,7,0x4031d8);
  return;
}

sceCdStResume() {
  stm_status = 1;
  if (0 < SCE_CD_debug) {
    scePrintf(0x353308);
  }
  sceCdStream(0,0,0,8,0x4031d8);
  return;
}

sceCdStStat() {
  if (0 < SCE_CD_debug) {
    scePrintf(0x353320);
  }
  sceCdStream(0,0,0,6,0x4031d8);
  return;
}

sceCdStream() {
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = _sceCd_ncmd_prechk(0xf);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (0 < SCE_CD_debug) {
      scePrintf(0x353338);
    }
    if (param_5 != 0) {
      puVar3 = (undefined *)param_5;
      _sceCd_ncmdsdata[16] = *puVar3;
      _sceCd_ncmdsdata[17] = puVar3[1];
      _sceCd_ncmdsdata[18] = puVar3[2];
    }
    _sceCd_ncmdsdata._0_4_ = param_1;
    _sceCd_ncmdsdata._4_4_ = param_2;
    _sceCd_ncmdsdata._8_4_ = param_3;
    _sceCd_ncmdsdata._12_4_ = param_4;
    if (0 < SCE_CD_debug) {
      scePrintf(0x353350);
    }
    sceSifWriteBackDCache(0x345f80,0x14);
    lVar2 = sceSifCallRpc(0x347050,9,0,0x345f80,0x14,0x345f00,4,0);
    if (lVar2 < 0) {
      SignalSema(_sceCd_ncmd_semid);
      uVar1 = 0;
    }
    else {
      if (0 < SCE_CD_debug) {
        scePrintf(0x353368);
      }
      uVar1 = uRam20345f00;
      SignalSema(_sceCd_ncmd_semid);
    }
  }
  return uVar1;
}
