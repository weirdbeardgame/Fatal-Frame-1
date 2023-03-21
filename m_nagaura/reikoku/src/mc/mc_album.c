// STATUS: NOT STARTED


char mcAlbumSaveMain() {
	char end_flg;
	static char newfile_flg;
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  
  iVar9 = mc_ctrl.sel_file;
  cVar11 = '\0';
  mc_ctrl.stepbak = mc_ctrl.step;
  switch(mc_ctrl.step) {
  case 1:
    cVar8 = mcCtrlCheckAlbum();
    if (cVar8 != '\0') {
      mcSetStepAfterCheck();
    }
    break;
  case 4:
    cVar8 = mcCtrlSelSlot();
    if (cVar8 == '\x01') {
LAB_00219858:
      mcSetStep(1,2);
      break;
    }
    if ((cVar8 < '\x02') || (iVar9 = 0x1a, cVar8 != '\x02')) break;
    goto LAB_002199f0;
  case 6:
    newfile_flg_117 = '\0';
    cVar8 = mcCtrlFileSel();
    switch(cVar8) {
    case '\x01':
      mcSetStep(8,0x1f);
      break;
    case '\x02':
      goto switchD_002194f8_caseD_0;
    case '\x03':
      goto LAB_002198c4;
    case '\x04':
      mcSetStep(0xc,0x1d);
      newfile_flg_117 = '\x01';
      break;
    case '\x05':
      mcSetStep(10,0x10);
    }
    break;
  case 8:
    cVar8 = mcCtrlYesno(1);
    switch(cVar8) {
    default:
      break;
    case '\x01':
      if (is_newdata_albmside == 0) {
LAB_002196e8:
        mcSetStep(0xf,0x13);
        break;
      }
switchD_00219634_caseD_2:
      mcSetStep(0xc,0x1d);
      break;
    case '\x02':
    case '\x03':
switchD_002196c0_caseD_2:
      mcSetStep(6,1);
      break;
    case '\x04':
      goto LAB_002198c4;
    }
  case 9:
    cVar8 = mcCtrlYesno(1);
    switch(cVar8) {
    default:
      break;
    case '\x01':
switchD_00219720_caseD_1:
      mcSetStep(0x10,0xf);
      break;
    case '\x02':
    case '\x03':
      goto switchD_002196c0_caseD_2;
    case '\x04':
      goto LAB_002198c4;
    }
  case 10:
    cVar8 = mcCtrlYesno(1);
    switch(cVar8) {
    case '\x01':
      mcSetStep(0x12,0x11);
      break;
    case '\x02':
    case '\x03':
      goto switchD_002196c0_caseD_2;
    case '\x04':
      goto LAB_002198c4;
    }
    break;
  case 0xb:
    cVar8 = mcCtrlYesno(1);
    switch(cVar8) {
    case '\x01':
      mcSetStep(0x13,0xb);
      break;
    case '\x02':
    case '\x03':
      goto switchD_002194f8_caseD_0;
    case '\x04':
      goto LAB_002198c4;
    }
    break;
  case 0xc:
    cVar8 = mcCtrlAlbumSel();
    if (cVar8 == '\x01') {
      mcSetStep(0xd,0x1e);
      break;
    }
    if (cVar8 < '\x02') break;
    if (cVar8 == '\x02') goto switchD_002196c0_caseD_2;
    if (cVar8 != '\x03') break;
LAB_002198c4:
    mcSetStep(0x15,6);
    break;
  case 0xd:
    cVar8 = mcCtrlYesno(1);
    switch(cVar8) {
    default:
      break;
    case '\x01':
      if (newfile_flg_117 != '\x01') goto LAB_002196e8;
      goto switchD_00219720_caseD_1;
    case '\x02':
    case '\x03':
      goto switchD_00219634_caseD_2;
    case '\x04':
      goto LAB_002198c4;
    }
  case 0xf:
    cVar8 = mcCtrlSave();
    if (cVar8 == '\x01') {
LAB_00219784:
      mcSetStep(0x17,0x14);
      break;
    }
    goto LAB_002198ec;
  case 0x10:
    cVar8 = mcCtrlMakeDir();
    if (cVar8 == '\x01') goto LAB_00219784;
    if ((cVar8 < '\x02') || (cVar8 != '\x02')) break;
    goto LAB_00219924;
  case 0x12:
    cVar8 = mcCtrlDelete();
    if (cVar8 == '\x01') {
      mcSetStep(0x10,0x11);
      mc_ctrl.sub_step = 2;
      mc_ctrl.album.type = '\0';
      break;
    }
LAB_002198ec:
    if (('\x01' < cVar8) && (cVar8 == '\x02')) {
LAB_00219924:
      mcSetStep(0x15,0x15);
    }
    break;
  case 0x13:
    cVar8 = mcCtrlFormat();
    if (cVar8 == '\x01') {
      mcSetStep(0x10,0xf);
      mc_ctrl.card[0].free = 0x578;
      mc_ctrl.album.type = '\0';
    }
    else if (('\x01' < cVar8) && (cVar8 == '\x02')) {
      mcSetStep(0x15,0xd);
    }
    break;
  case 0x15:
    cVar8 = mcCtrlDispErr();
    if (cVar8 != '\x01') {
      if (cVar8 < '\x02') break;
      if (cVar8 == '\x02') {
        mcSetMessage(6);
        break;
      }
      if (cVar8 != '\x03') break;
      goto LAB_00219858;
    }
  case 0:
switchD_002194f8_caseD_0:
    mcSetStep(4,0);
    break;
  case 0x17:
    if (mc_ctrl.sub_step == 0) {
      mc_ctrl.sub_step = 1;
      mc_ctrl.album.sta[mc_ctrl.sel_cur] = '\0';
      uVar6 = mc_header._16_8_;
      uVar5 = mc_header._8_8_;
      uVar4 = mc_header._0_8_;
      iVar3 = mc_ctrl.sel_cur;
      iVar10 = iVar9 * 0x20;
      uVar1 = iVar10 + 0x343d67U & 7;
      puVar2 = (ulong *)((iVar10 + 0x343d67U) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)mc_header._0_8_ >> (7 - uVar1) * 8;
      *(undefined8 *)(mc_header_buf + iVar9) = uVar4;
      uVar1 = iVar10 + 0x343d6fU & 7;
      puVar2 = (ulong *)((iVar10 + 0x343d6fU) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)uVar5 >> (7 - uVar1) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar10 + 8) = uVar5;
      uVar1 = iVar10 + 0x343d77U & 7;
      puVar2 = (ulong *)((iVar10 + 0x343d77U) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)uVar6 >> (7 - uVar1) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar10 + 0x10) = uVar6;
      uVar7 = mc_header._24_8_;
      uVar1 = iVar10 + 0x343d7fU & 7;
      puVar2 = (ulong *)((iVar10 + 0x343d7fU) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)mc_header._24_8_ >> (7 - uVar1) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar10 + 0x18) = uVar7;
      mc_ctrl.album.file_no[iVar3] = (uchar)mc_ctrl.sel_file;
    }
    if ((pad[0].one & 0x50U) == 0) break;
    SeStartFix(1,0,0x1000,0x1000,0);
    iVar9 = 0x19;
LAB_002199f0:
    mcSetStep(iVar9,0x29);
    break;
  case 0x19:
    cVar11 = '\x01';
    break;
  case 0x1a:
    cVar11 = '\x02';
  }
  if (cVar11 != '\0') {
    mcEnd();
  }
  return cVar11;
}

char mcCtrlCheckAlbum() {
	static int loop;
	
  uchar *puVar1;
  byte file_no;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uchar uVar11;
  long lVar12;
  long lVar13;
  uint uVar10;
  
  switch(mc_ctrl.sub_step) {
  case 0:
    mc_ctrl.sub_step = 1;
    mcAcsReq(0);
    return '\0';
  case 1:
    cVar8 = mcAcsMain();
    if (cVar8 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mc_ctrl.sub_step = 2;
    }
    break;
  case 2:
    mc_ctrl.sub_step = 3;
    sprintf(mc_ctrl.rw.path,&DAT_00357708);
    goto LAB_00219bdc;
  case 3:
    cVar8 = mcAcsMain();
    if (cVar8 != '\0') {
      if ((mc_ctrl.acs.sta != '\0') && (mc_ctrl.acs.sta != '\x04')) {
        return '\x01';
      }
      mcCheckRootList();
      if (mc_ctrl.album.file_num == '\0') {
        if ((((mc_ctrl.mode == 1) || (mc_ctrl.mode == 3)) || (mc_ctrl.mode == 4)) ||
           ((mc_ctrl.mode == 5 || (mc_ctrl.mode == 6)))) {
          mc_ctrl.acs.sta = '\x04';
        }
        else {
          cVar8 = mcCheckEmpty(0);
          if (cVar8 == '\0') {
            mc_ctrl.album.file_no[0] = '\0';
            mc_ctrl.acs.sta = '\0';
          }
          else {
            mc_ctrl.acs.sta = '\x03';
          }
        }
        return '\x01';
      }
      loop_121 = 0;
      mc_ctrl.sub_step = 4;
    }
    break;
  case 4:
    mc_ctrl.sub_step = 5;
    file_no = mc_ctrl.album.file_no[loop_121];
    mc_ctrl.sel_file = (int)file_no;
    mcSetPathDir(file_no);
LAB_00219bdc:
    sprintf(mc_ctrl.rw.name,&DAT_00357718);
    mcAcsReq(1);
    return '\0';
  case 5:
    cVar8 = mcAcsMain();
    if (cVar8 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      cVar8 = mcCheckFileList();
      if (cVar8 == '\0') {
        mc_ctrl.album.sta[loop_121] = mc_ctrl.acs.sta;
        mc_ctrl.sub_step = 6;
      }
      else {
        cVar8 = mcCheckEmpty(mc_ctrl.dir_size);
        if (cVar8 == '\0') {
          uVar11 = '\t';
        }
        else {
          uVar11 = '\x03';
        }
        mc_ctrl.album.sta[loop_121] = uVar11;
        loop_121 = loop_121 + 1;
        if ((long)mc_ctrl.album.file_num <= (long)loop_121) {
          return '\x01';
        }
        mc_ctrl.sub_step = 4;
      }
    }
    break;
  case 6:
    mcAcsFileReq(mc_ctrl.album.file_no[loop_121] + '\b',1,1);
    mc_ctrl.sub_step = 7;
    break;
  case 7:
    cVar8 = mcReadFile();
    if (cVar8 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mcSetLoadFile(mc_ctrl.work_addr,'\b');
      uVar6 = mc_header._16_8_;
      uVar5 = mc_header._8_8_;
      uVar4 = mc_header._0_8_;
      lVar13 = (long)mc_ctrl.album.file_num;
      puVar1 = mc_ctrl.album.file_no + loop_121;
      loop_121 = loop_121 + 1;
      lVar12 = (long)loop_121;
      uVar10 = (uint)*puVar1;
      iVar9 = uVar10 * 0x20;
      uVar2 = iVar9 + 0x343d67U & 7;
      puVar3 = (ulong *)((iVar9 + 0x343d67U) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)mc_header._0_8_ >> (7 - uVar2) * 8;
      *(undefined8 *)(mc_header_buf + uVar10) = uVar4;
      uVar2 = iVar9 + 0x343d6fU & 7;
      puVar3 = (ulong *)((iVar9 + 0x343d6fU) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)uVar5 >> (7 - uVar2) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar9 + 8) = uVar5;
      uVar2 = iVar9 + 0x343d77U & 7;
      puVar3 = (ulong *)((iVar9 + 0x343d77U) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)uVar6 >> (7 - uVar2) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar9 + 0x10) = uVar6;
      uVar7 = mc_header._24_8_;
      uVar2 = iVar9 + 0x343d7fU & 7;
      puVar3 = (ulong *)((iVar9 + 0x343d7fU) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)mc_header._24_8_ >> (7 - uVar2) * 8;
      *(undefined8 *)((int)mc_header_buf + iVar9 + 0x18) = uVar7;
      if (lVar13 <= lVar12) {
        return '\x01';
      }
      mc_ctrl.sub_step = 4;
    }
  }
  return '\0';
}

char mcCtrlAlbumSel() {
  char cVar1;
  short sVar2;
  int iVar3;
  
  if (mc_ctrl.sub_step == 0) {
    mc_ctrl.sub_step = 1;
    mc_ctrl.now_cur = (int)mc_ctrl.album.type;
  }
  if (mc_ctrl.sub_step == 1) {
    mcAcsReq(7);
    mc_ctrl.sub_step = 2;
  }
  else {
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x03';
      }
      mc_ctrl.sub_step = 1;
    }
  }
  mc_ctrl.album.type = (char)mc_ctrl.now_cur;
  if ((pad[0].one & 0x40U) == 0) {
    if ((pad[0].one & 0x10U) == 0) {
      if ((*key_now[3] == 1) || (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) {
        SeStartFix(0,0,0x1000,0x1000,0);
        iVar3 = mc_ctrl.now_cur + 1;
        if (mc_ctrl.now_cur < 3) {
          if (2 < iVar3) {
            mc_ctrl.now_cur = 0;
            iVar3 = mc_ctrl.now_cur;
          }
        }
        else if (5 < iVar3) {
          iVar3 = 3;
        }
      }
      else if ((*key_now[2] == 1) || (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) {
        SeStartFix(0,0,0x1000,0x1000,0);
        iVar3 = mc_ctrl.now_cur + -1;
        if (mc_ctrl.now_cur < 3) {
          if (iVar3 < 0) {
            iVar3 = 2;
          }
        }
        else if (iVar3 < 3) {
          iVar3 = 5;
        }
      }
      else if ((*key_now[0] == 1) || (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) {
        SeStartFix(0,0,0x1000,0x1000,0);
        iVar3 = mc_ctrl.now_cur + -3;
        if (mc_ctrl.now_cur + -3 < 0) {
          iVar3 = mc_ctrl.now_cur + 3;
        }
      }
      else {
        if ((*key_now[1] != 1) && (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
          return '\0';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
        iVar3 = mc_ctrl.now_cur + 3;
        if (5 < mc_ctrl.now_cur + 3) {
          iVar3 = mc_ctrl.now_cur + -3;
        }
      }
      mc_ctrl.now_cur = iVar3;
      cVar1 = '\0';
    }
    else {
      SeStartFix(3,0,0x1000,0x1000,0);
      cVar1 = '\x02';
    }
  }
  else {
    SeStartFix(1,0,0x1000,0x1000,0);
    cVar1 = '\x01';
  }
  return cVar1;
}
