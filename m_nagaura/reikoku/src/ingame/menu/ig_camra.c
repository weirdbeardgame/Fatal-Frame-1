// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#134,  not equal)
enum {
	CAMERA_CUSTOM_FILM = 0,
	CAMERA_CUSTOM_PWUP = 1,
	CAMERA_CUSTOM_SBAB = 2,
	CAMERA_CUSTOM_SPAB = 3,
	CAMERA_CUSTOM_MENU = 4
};

typedef struct {
	u_char mode;
	u_char csr[6];
	u_char yn_mode;
} CAMERA_MENU_WRK;

typedef struct {
	short int arw_cnt;
	u_char sb_flsh[5];
	u_char ex_flsh[5];
	u_char pow_bak[3];
	u_char pow_flr[3][4];
	u_char film_or_perform;
	u_char bonus_or_special;
	u_char pfm_max[3];
} CAM_DSP;

int camera_power_up_point[3][3] = {
	/* [0] = */ {
		/* [0] = */ 4000,
		/* [1] = */ 12000,
		/* [2] = */ 24000
	},
	/* [1] = */ {
		/* [0] = */ 2000,
		/* [1] = */ 6000,
		/* [2] = */ 12000
	},
	/* [2] = */ {
		/* [0] = */ 6000,
		/* [1] = */ 18000,
		/* [2] = */ 36000
	}
};
int camera_sub_abi_point[5] = {
	/* [0] = */ 16000,
	/* [1] = */ 18000,
	/* [2] = */ 12000,
	/* [3] = */ 20000,
	/* [4] = */ 14000
};
int camera_spe_abi_point[5] = {
	/* [0] = */ 42000,
	/* [1] = */ 64000,
	/* [2] = */ 80000,
	/* [3] = */ 74000,
	/* [4] = */ 96000
};
CAMERA_MENU_WRK cmr_menu_wrk = {
	/* .mode = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .yn_mode = */ 0
};
static CAM_DSP cam_dsp;
FLSH_CORE flsh = {
	/* .flsh_tmr = */ 0,
	/* .alpha = */ 0
};
FLSH_CORE flsh2 = {
	/* .flsh_tmr = */ 0,
	/* .alpha = */ 0
};

void CameraCustomNewgameInit() {
  memset(&cam_custom_wrk,0,0x18);
  cam_custom_wrk.set_sub = 0xff;
  cam_custom_wrk.func_sub[4] = '\x01';
  cam_custom_wrk.func_spe[4] = '\0';
  cam_custom_wrk.set_spe = 0xff;
  cam_custom_wrk.func_sub[0] = '\x01';
  cam_custom_wrk.func_sub[1] = '\x01';
  cam_custom_wrk.func_sub[2] = '\x01';
  cam_custom_wrk.func_sub[3] = '\x01';
  cam_custom_wrk.func_spe[0] = '\0';
  cam_custom_wrk.func_spe[1] = '\0';
  cam_custom_wrk.func_spe[2] = '\0';
  cam_custom_wrk.func_spe[3] = '\0';
  return;
}

void CameraCustomInit() {
	int i;
	u_char *pow[3];
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  uchar *puVar4;
  uchar *pow [3];
  
  uVar1 = (int)pow + 7U & 7;
  puVar2 = (ulong *)(((int)pow + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_cam_custom_wrk_0034fd40 >> (7 - uVar1) * 8;
  pow._0_8_ = _PTR_cam_custom_wrk_0034fd40;
  pow[2] = DAT_0034fd48;
  memset(&cam_dsp,0,0x20);
  memset(&cmr_menu_wrk,0,8);
  cmr_menu_wrk.mode = '\x04';
  cam_dsp.pow_bak[0] = *pow[0];
  cam_dsp.pow_bak[1] = *pow[1];
  cam_dsp.pow_bak[2] = *pow[2];
  yw2d.pad_lock = 1;
  cam_dsp.arw_cnt = 0;
  cam_dsp.film_or_perform = '\0';
  cam_dsp.bonus_or_special = '\0';
  cam_dsp.pfm_max[0] = '\0';
  cam_dsp.pfm_max[1] = '\0';
  cam_dsp.pfm_max[2] = '\0';
  memset(&flsh,0,2);
  memset(&flsh2,0,2);
  puVar4 = cam_dsp.ex_flsh;
  iVar3 = 4;
  do {
    puVar4[-5] = '\x14';
    iVar3 = iVar3 + -1;
    *puVar4 = '\x14';
    puVar4 = puVar4 + 1;
  } while (-1 < iVar3);
  return;
}

void CameraCustomMain() {
	static char err;
	
  switch(cmr_menu_wrk.mode) {
  case '\0':
    CameraCustomFilm((char *)&err_123);
    break;
  case '\x01':
    CameraCustomPowerUp((char *)&err_123);
    break;
  case '\x02':
    CameraCustomSubAbility((char *)&err_123);
    break;
  case '\x03':
    CameraCustomSpecialAbility((char *)&err_123);
    break;
  case '\x04':
    CameraCustomMenuSlct((char *)&err_123);
  }
  CameraDspCtrl(err_123);
  return;
}

void CameraCustomMenuSlct(char *err) {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  
  if (yw2d.pad_lock == 0) {
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,1);
      yw2d.out_mode_cnt = 0xb;
    }
    else {
      if ((*key_now[1] == 1) ||
         ((((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\x02'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 == 1)))))) {
        bVar1 = 2 < cmr_menu_wrk.csr[0];
        cmr_menu_wrk.csr[0] = cmr_menu_wrk.csr[0] + '\x01';
        if (bVar1) {
          cmr_menu_wrk.csr[0] = '\0';
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if ((((*key_now[0] == 1) ||
           ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))) ||
          (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) ||
         ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
          (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
        bVar1 = cmr_menu_wrk.csr[0] == '\0';
        cmr_menu_wrk.csr[0] = cmr_menu_wrk.csr[0] + 0xff;
        if (bVar1) {
          cmr_menu_wrk.csr[0] = '\x03';
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        cmr_menu_wrk.yn_mode = '\0';
        cmr_menu_wrk.mode = cmr_menu_wrk.csr[0];
        SeStartFix(1,0,0x1000,0x1000,1);
        return;
      }
    }
  }
  return;
}

void CameraCustomFilm(char *err) {
  uchar uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int se_no;
  
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[4] == 1) {
    SeStartFix(3,0,0x1000,0x1000,1);
    if (*err != '\0') {
      *err = '\0';
      return;
    }
    cmr_menu_wrk.mode = '\x04';
    return;
  }
  if (*key_now[6] == 1) {
    cVar2 = *err;
  }
  else {
    if (*key_now[5] != 1) {
      if (*key_now[1] == 1) goto LAB_001dc87c;
      if (((ushort)*key_now[1] < 0x1a) || ((uint)(ushort)*key_now[1] % 5 != 1)) {
        sVar3 = Ana2PadDirCnt('\x02');
        if (sVar3 == 1) {
          *err = '\0';
        }
        else {
          uVar4 = Ana2PadDirCnt('\x02');
          if (((uVar4 < 0x1a) || (sVar3 = Ana2PadDirCnt('\x02'), (int)sVar3 % 5 != 1)) &&
             (*key_now[0] != 1)) {
            if (((ushort)*key_now[0] < 0x1a) || ((uint)(ushort)*key_now[0] % 5 != 1)) {
              sVar3 = Ana2PadDirCnt('\0');
              if (sVar3 != 1) {
                uVar4 = Ana2PadDirCnt('\0');
                if ((uVar4 < 0x1a) || (sVar3 = Ana2PadDirCnt('\0'), (int)sVar3 % 5 != 1)) {
                  if (*key_now[2] != 1) {
                    if ((0x19 < (ushort)*key_now[2]) && ((uint)(ushort)*key_now[2] % 5 == 1)) {
                      *err = '\0';
                      goto LAB_001dca00;
                    }
                    sVar3 = Ana2PadDirCnt('\x03');
                    if (sVar3 == 1) {
                      *err = '\0';
                      goto LAB_001dca00;
                    }
                    uVar4 = Ana2PadDirCnt('\x03');
                    if ((0x19 < uVar4) && (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)) {
                      *err = '\0';
                      goto LAB_001dca00;
                    }
                    if (*key_now[3] != 1) {
                      if ((0x19 < (ushort)*key_now[3]) && ((uint)(ushort)*key_now[3] % 5 == 1)) {
                        *err = '\0';
                        goto LAB_001dca00;
                      }
                      sVar3 = Ana2PadDirCnt('\x01');
                      if (sVar3 == 1) {
                        *err = '\0';
                        goto LAB_001dca00;
                      }
                      uVar4 = Ana2PadDirCnt('\x01');
                      if (uVar4 < 0x1a) {
                        return;
                      }
                      sVar3 = Ana2PadDirCnt('\x01');
                      if ((int)sVar3 % 5 != 1) {
                        return;
                      }
                    }
                  }
                  *err = '\0';
LAB_001dca00:
                  if (cmr_menu_wrk.csr[1] == '\x01') {
                    cmr_menu_wrk.csr[1] = '\x03';
                  }
                  else if (cmr_menu_wrk.csr[1] < 2) {
                    if (cmr_menu_wrk.csr[1] == '\0') {
                      cmr_menu_wrk.csr[1] = '\x02';
                    }
                  }
                  else if (cmr_menu_wrk.csr[1] == '\x02') {
                    cmr_menu_wrk.csr[1] = '\0';
                  }
                  else if (cmr_menu_wrk.csr[1] == '\x03') {
                    cmr_menu_wrk.csr[1] = '\x01';
                  }
                  SeStartFix(0,0,0x1000,0x1000,1);
                  return;
                }
                goto LAB_001dc87c;
              }
              *err = '\0';
            }
            else {
              *err = '\0';
            }
          }
          else {
LAB_001dc87c:
            *err = '\0';
          }
        }
      }
      else {
        *err = '\0';
      }
      if (cmr_menu_wrk.csr[1] == '\x01') {
        cmr_menu_wrk.csr[1] = '\0';
        se_no = 0;
        goto LAB_001dc8e8;
      }
      if (cmr_menu_wrk.csr[1] < 2) {
        uVar1 = '\x01';
        if (cmr_menu_wrk.csr[1] != '\0') {
          se_no = 0;
          goto LAB_001dc8e8;
        }
      }
      else {
        if (cmr_menu_wrk.csr[1] == '\x02') {
          cmr_menu_wrk.csr[1] = '\x03';
          se_no = 0;
          goto LAB_001dc8e8;
        }
        uVar1 = '\x02';
        if (cmr_menu_wrk.csr[1] != '\x03') {
          se_no = 0;
          goto LAB_001dc8e8;
        }
      }
      cmr_menu_wrk.csr[1] = uVar1;
      se_no = 0;
      goto LAB_001dc8e8;
    }
    cVar2 = *err;
  }
  if (cVar2 != '\0') {
    SeStartFix(1,0,0x1000,0x1000,1);
    *err = '\0';
    return;
  }
  uVar5 = (uint)cmr_menu_wrk.csr[1];
  if (poss_item[uVar5 + 1] == 0) {
    if (flm_exp_flg[uVar5 + 1] == '\0') {
      se_no = 2;
    }
    else {
      se_no = 2;
      *err = '\x04';
    }
  }
  else if ((uint)plyr_wrk.film_no == uVar5 + 1) {
    se_no = 2;
    *err = '\x02';
  }
  else {
    plyr_wrk.film_no = (uchar)(uVar5 + 1);
    se_no = 5;
  }
LAB_001dc8e8:
  SeStartFix(se_no,0,0x1000,0x1000,1);
  return;
}

void CameraCustomPowerUp(char *err) {
	u_char *pow[3];
	
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  int se_no;
  uchar *pow [3];
  
  uVar1 = (int)pow + 7U & 7;
  puVar2 = (ulong *)(((int)pow + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_cam_custom_wrk_0034fd40 >> (7 - uVar1) * 8;
  pow._0_8_ = _PTR_cam_custom_wrk_0034fd40;
  pow[2] = DAT_0034fd48;
  if (cmr_menu_wrk.yn_mode != '\0') {
    if (cmr_menu_wrk.yn_mode != '\x01') {
      return;
    }
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,1);
      if (*err == '\0') {
        cmr_menu_wrk.yn_mode = '\0';
        return;
      }
      *err = '\0';
      return;
    }
    if (*key_now[2] == 1) {
      *err = '\0';
    }
    else {
      sVar5 = Ana2PadDirCnt('\x03');
      if (sVar5 == 1) {
        *err = '\0';
      }
      else if (*key_now[3] == 1) {
        *err = '\0';
      }
      else {
        sVar5 = Ana2PadDirCnt('\x01');
        if (sVar5 != 1) {
          if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
            return;
          }
          SeStartFix(1,0,0x1000,0x1000,1);
          if (*err != '\0') {
            *err = '\0';
            return;
          }
          if (cmr_menu_wrk.csr[5] != '\0') {
            cmr_menu_wrk.yn_mode = '\0';
            return;
          }
          cam_custom_wrk.point =
               cam_custom_wrk.point -
               (long)camera_power_up_point[cmr_menu_wrk.csr[2]][*pow[cmr_menu_wrk.csr[2]]];
          *pow[cmr_menu_wrk.csr[2]] = *pow[cmr_menu_wrk.csr[2]] + '\x01';
          cmr_menu_wrk.yn_mode = '\0';
          if (*pow[cmr_menu_wrk.csr[2]] == '\x03') {
            cam_dsp.pfm_max[cmr_menu_wrk.csr[2]] = '\x14';
            return;
          }
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
      }
    }
    se_no = 0;
    if (cmr_menu_wrk.csr[5] == '\0') {
      cmr_menu_wrk.csr[5] = '\x01';
    }
    else {
      cmr_menu_wrk.csr[5] = '\0';
    }
    goto LAB_001dcdec;
  }
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[4] == 1) {
    SeStartFix(3,0,0x1000,0x1000,1);
    if (*err == '\0') {
      cmr_menu_wrk.mode = '\x04';
      return;
    }
    *err = '\0';
    return;
  }
  if (*key_now[1] == 1) {
LAB_001dcbb8:
    *err = '\0';
LAB_001dcbbc:
    bVar3 = 1 < cmr_menu_wrk.csr[2];
    cmr_menu_wrk.csr[2] = cmr_menu_wrk.csr[2] + '\x01';
    if (bVar3) {
      cmr_menu_wrk.csr[2] = '\0';
      se_no = 0;
      goto LAB_001dcdec;
    }
  }
  else {
    if ((0x19 < (ushort)*key_now[1]) && ((uint)(ushort)*key_now[1] % 5 == 1)) {
      *err = '\0';
      goto LAB_001dcbbc;
    }
    sVar5 = Ana2PadDirCnt('\x02');
    if (sVar5 == 1) {
      *err = '\0';
      goto LAB_001dcbbc;
    }
    uVar6 = Ana2PadDirCnt('\x02');
    if ((0x19 < uVar6) && (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 == 1)) goto LAB_001dcbb8;
    if (*key_now[0] == 1) {
LAB_001dcc60:
      *err = '\0';
    }
    else if (((ushort)*key_now[0] < 0x1a) || ((uint)(ushort)*key_now[0] % 5 != 1)) {
      sVar5 = Ana2PadDirCnt('\0');
      if (sVar5 != 1) {
        uVar6 = Ana2PadDirCnt('\0');
        if ((uVar6 < 0x1a) || (sVar5 = Ana2PadDirCnt('\0'), (int)sVar5 % 5 != 1)) {
          if (*key_now[6] == 1) {
            cVar4 = *err;
          }
          else {
            if (*key_now[5] != 1) {
              return;
            }
            cVar4 = *err;
          }
          if (cVar4 != '\0') {
            SeStartFix(1,0,0x1000,0x1000,1);
            *err = '\0';
            return;
          }
          if (*pow[cmr_menu_wrk.csr[2]] == 3) {
            return;
          }
          if (cam_custom_wrk.point <
              (ulong)(long)camera_power_up_point[cmr_menu_wrk.csr[2]][*pow[cmr_menu_wrk.csr[2]]]) {
            *err = '\x01';
            se_no = 2;
          }
          else {
            cmr_menu_wrk.yn_mode = '\x01';
            cmr_menu_wrk.csr[5] = '\0';
            se_no = 1;
          }
          goto LAB_001dcdec;
        }
        goto LAB_001dcc60;
      }
      *err = '\0';
    }
    else {
      *err = '\0';
    }
    bVar3 = cmr_menu_wrk.csr[2] == '\0';
    cmr_menu_wrk.csr[2] = cmr_menu_wrk.csr[2] + 0xff;
    if (bVar3) {
      cmr_menu_wrk.csr[2] = '\x02';
    }
  }
  se_no = 0;
LAB_001dcdec:
  SeStartFix(se_no,0,0x1000,0x1000,1);
  return;
}

void CameraCustomSubAbility(char *err) {
	int i;
	
  uchar uVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  uchar *puVar6;
  int iVar7;
  
  if (cmr_menu_wrk.yn_mode != '\0') {
    if (cmr_menu_wrk.yn_mode == '\x01') {
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            uVar1 = cmr_menu_wrk.csr[3];
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            cam_custom_wrk.func_sub[cmr_menu_wrk.csr[3]] = '\x02';
            cam_custom_wrk.point = cam_custom_wrk.point - (long)camera_sub_abi_point[uVar1];
            cmr_menu_wrk.yn_mode = '\x02';
            return;
          }
          *err = '\0';
        }
      }
    }
    else if (cmr_menu_wrk.yn_mode == '\x02') {
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            uVar1 = cmr_menu_wrk.csr[3];
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            puVar6 = cam_custom_wrk.func_sub;
            iVar7 = 4;
            do {
              if (*puVar6 == '\x03') {
                *puVar6 = '\x02';
              }
              iVar7 = iVar7 + -1;
              puVar6 = puVar6 + 1;
            } while (-1 < iVar7);
            cmr_menu_wrk.yn_mode = '\0';
            cam_custom_wrk.func_sub[uVar1] = '\x03';
            cam_custom_wrk.set_sub = uVar1;
            return;
          }
          *err = '\0';
        }
      }
    }
    else {
      if (cmr_menu_wrk.yn_mode != '\x03') {
        return;
      }
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            cmr_menu_wrk.yn_mode = '\0';
            cam_custom_wrk.func_sub[cmr_menu_wrk.csr[3]] = '\x02';
            cam_custom_wrk.set_sub = 0xff;
            return;
          }
          *err = '\0';
        }
      }
    }
    if (cmr_menu_wrk.csr[5] == '\0') {
      cmr_menu_wrk.csr[5] = '\x01';
      iVar7 = 0;
    }
    else {
      cmr_menu_wrk.csr[5] = '\0';
      iVar7 = 0;
    }
    goto LAB_001dd4f8;
  }
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[4] == 1) {
    SeStartFix(3,0,0x1000,0x1000,1);
    if (*err == '\0') {
      cmr_menu_wrk.mode = '\x04';
      return;
    }
    *err = '\0';
    return;
  }
  if (*key_now[3] == 1) {
LAB_001dd008:
    *err = '\0';
LAB_001dd00c:
    bVar2 = 3 < cmr_menu_wrk.csr[3];
    cmr_menu_wrk.csr[3] = cmr_menu_wrk.csr[3] + '\x01';
    if (bVar2) {
      cmr_menu_wrk.csr[3] = '\0';
      iVar7 = 0;
      goto LAB_001dd4f8;
    }
  }
  else {
    if ((0x19 < (ushort)*key_now[3]) && ((uint)(ushort)*key_now[3] % 5 == 1)) {
      *err = '\0';
      goto LAB_001dd00c;
    }
    sVar4 = Ana2PadDirCnt('\x01');
    if (sVar4 == 1) {
      *err = '\0';
      goto LAB_001dd00c;
    }
    uVar5 = Ana2PadDirCnt('\x01');
    if ((0x19 < uVar5) && (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) goto LAB_001dd008;
    if (*key_now[2] == 1) {
LAB_001dd0b4:
      *err = '\0';
    }
    else if (((ushort)*key_now[2] < 0x1a) || ((uint)(ushort)*key_now[2] % 5 != 1)) {
      sVar4 = Ana2PadDirCnt('\x03');
      if (sVar4 != 1) {
        uVar5 = Ana2PadDirCnt('\x03');
        if ((uVar5 < 0x1a) || (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 != 1)) {
          if (*key_now[6] == 1) {
            cVar3 = *err;
          }
          else {
            if (*key_now[5] != 1) {
              return;
            }
            cVar3 = *err;
          }
          if (cVar3 != '\0') {
            *err = '\0';
            SeStartFix(1,0,0x1000,0x1000,1);
            return;
          }
          uVar1 = cam_custom_wrk.func_sub[cmr_menu_wrk.csr[3]];
          if (uVar1 == '\0') {
            iVar7 = 2;
          }
          else if (uVar1 == '\x01') {
            if (cam_custom_wrk.point < (ulong)(long)camera_sub_abi_point[cmr_menu_wrk.csr[3]]) {
              *err = '\x01';
              iVar7 = 2;
            }
            else {
              cmr_menu_wrk.csr[5] = '\0';
              iVar7 = 1;
              cmr_menu_wrk.yn_mode = uVar1;
            }
          }
          else if (uVar1 == '\x02') {
            cmr_menu_wrk.csr[5] = '\0';
            iVar7 = 1;
            cmr_menu_wrk.yn_mode = uVar1;
          }
          else {
            if (uVar1 != '\x03') {
              return;
            }
            cmr_menu_wrk.csr[5] = '\0';
            iVar7 = 1;
            cmr_menu_wrk.yn_mode = uVar1;
          }
          goto LAB_001dd4f8;
        }
        goto LAB_001dd0b4;
      }
      *err = '\0';
    }
    else {
      *err = '\0';
    }
    bVar2 = cmr_menu_wrk.csr[3] == '\0';
    cmr_menu_wrk.csr[3] = cmr_menu_wrk.csr[3] + 0xff;
    if (bVar2) {
      cmr_menu_wrk.csr[3] = '\x04';
    }
  }
  iVar7 = 0;
LAB_001dd4f8:
  SeStartFix(iVar7,0,0x1000,0x1000,1);
  return;
}

void CameraCustomSpecialAbility(char *err) {
	int i;
	
  uchar uVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  uchar *puVar6;
  int iVar7;
  
  if (cmr_menu_wrk.yn_mode != '\0') {
    if (cmr_menu_wrk.yn_mode == '\x01') {
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            uVar1 = cmr_menu_wrk.csr[4];
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            cam_custom_wrk.func_spe[cmr_menu_wrk.csr[4]] = '\x02';
            cam_custom_wrk.point = cam_custom_wrk.point - (long)camera_spe_abi_point[uVar1];
            cmr_menu_wrk.yn_mode = '\x02';
            return;
          }
          *err = '\0';
        }
      }
    }
    else if (cmr_menu_wrk.yn_mode == '\x02') {
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            uVar1 = cmr_menu_wrk.csr[4];
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            puVar6 = cam_custom_wrk.func_spe;
            iVar7 = 4;
            do {
              if (*puVar6 == '\x03') {
                *puVar6 = '\x02';
              }
              iVar7 = iVar7 + -1;
              puVar6 = puVar6 + 1;
            } while (-1 < iVar7);
            cmr_menu_wrk.yn_mode = '\0';
            cam_custom_wrk.func_spe[uVar1] = '\x03';
            cam_custom_wrk.set_spe = uVar1;
            return;
          }
          *err = '\0';
        }
      }
    }
    else {
      if (cmr_menu_wrk.yn_mode != '\x03') {
        return;
      }
      if (yw2d.pad_lock != 0) {
        return;
      }
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,1);
        if (*err == '\0') {
          cmr_menu_wrk.yn_mode = '\0';
          return;
        }
        *err = '\0';
        return;
      }
      if (*key_now[2] == 1) {
        *err = '\0';
      }
      else {
        sVar4 = Ana2PadDirCnt('\x03');
        if (sVar4 == 1) {
          *err = '\0';
        }
        else if (*key_now[3] == 1) {
          *err = '\0';
        }
        else {
          sVar4 = Ana2PadDirCnt('\x01');
          if (sVar4 != 1) {
            if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
              return;
            }
            SeStartFix(1,0,0x1000,0x1000,1);
            if (*err != '\0') {
              *err = '\0';
              return;
            }
            if (cmr_menu_wrk.csr[5] != '\0') {
              cmr_menu_wrk.yn_mode = '\0';
              return;
            }
            cmr_menu_wrk.yn_mode = '\0';
            cam_custom_wrk.func_spe[cmr_menu_wrk.csr[4]] = '\x02';
            cam_custom_wrk.set_spe = 0xff;
            return;
          }
          *err = '\0';
        }
      }
    }
    if (cmr_menu_wrk.csr[5] == '\0') {
      cmr_menu_wrk.csr[5] = '\x01';
      iVar7 = 0;
    }
    else {
      cmr_menu_wrk.csr[5] = '\0';
      iVar7 = 0;
    }
    goto LAB_001ddbb0;
  }
  if (yw2d.pad_lock != 0) {
    return;
  }
  if (*key_now[4] == 1) {
    SeStartFix(3,0,0x1000,0x1000,1);
    if (*err == '\0') {
      cmr_menu_wrk.mode = '\x04';
      return;
    }
    *err = '\0';
    return;
  }
  if (*key_now[3] == 1) {
LAB_001dd6a8:
    *err = '\0';
LAB_001dd6ac:
    bVar2 = 3 < cmr_menu_wrk.csr[4];
    cmr_menu_wrk.csr[4] = cmr_menu_wrk.csr[4] + '\x01';
    if (bVar2) {
      cmr_menu_wrk.csr[4] = '\0';
      iVar7 = 0;
      goto LAB_001ddbb0;
    }
  }
  else {
    if ((0x19 < (ushort)*key_now[3]) && ((uint)(ushort)*key_now[3] % 5 == 1)) {
      *err = '\0';
      goto LAB_001dd6ac;
    }
    sVar4 = Ana2PadDirCnt('\x01');
    if (sVar4 == 1) {
      *err = '\0';
      goto LAB_001dd6ac;
    }
    uVar5 = Ana2PadDirCnt('\x01');
    if ((0x19 < uVar5) && (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) goto LAB_001dd6a8;
    if (*key_now[2] == 1) {
LAB_001dd754:
      *err = '\0';
    }
    else if (((ushort)*key_now[2] < 0x1a) || ((uint)(ushort)*key_now[2] % 5 != 1)) {
      sVar4 = Ana2PadDirCnt('\x03');
      if (sVar4 != 1) {
        uVar5 = Ana2PadDirCnt('\x03');
        if ((uVar5 < 0x1a) || (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 != 1)) {
          if (*key_now[6] == 1) {
            cVar3 = *err;
          }
          else {
            if (*key_now[5] != 1) {
              return;
            }
            cVar3 = *err;
          }
          if (cVar3 != '\0') {
            *err = '\0';
            SeStartFix(1,0,0x1000,0x1000,1);
            return;
          }
          uVar1 = cam_custom_wrk.func_spe[cmr_menu_wrk.csr[4]];
          if (uVar1 == '\0') {
            iVar7 = 2;
          }
          else if (uVar1 == '\x01') {
            if ((ulong)(long)camera_spe_abi_point[cmr_menu_wrk.csr[4]] <= cam_custom_wrk.point) {
              SeStartFix(1,0,0x1000,0x1000,1);
              cmr_menu_wrk.csr[5] = '\0';
              cmr_menu_wrk.yn_mode = uVar1;
              return;
            }
            *err = '\x01';
            iVar7 = 2;
          }
          else if (uVar1 == '\x02') {
            cmr_menu_wrk.csr[5] = '\0';
            iVar7 = 1;
            cmr_menu_wrk.yn_mode = uVar1;
          }
          else {
            if (uVar1 != '\x03') {
              return;
            }
            cmr_menu_wrk.csr[5] = '\0';
            iVar7 = 1;
            cmr_menu_wrk.yn_mode = uVar1;
          }
          goto LAB_001ddbb0;
        }
        goto LAB_001dd754;
      }
      *err = '\0';
    }
    else {
      *err = '\0';
    }
    bVar2 = cmr_menu_wrk.csr[4] == '\0';
    cmr_menu_wrk.csr[4] = cmr_menu_wrk.csr[4] + 0xff;
    if (bVar2) {
      cmr_menu_wrk.csr[4] = '\x04';
    }
  }
  iVar7 = 0;
LAB_001ddbb0:
  SeStartFix(iVar7,0,0x1000,0x1000,1);
  return;
}

void CameraDspCtrl(u_char err) {
  uchar msg;
  
  CameraModeInOut();
  msg = StrKndChk(err);
  CameraDsp(0,0,(uchar)(int)yw2d.io_a[4],msg);
  PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
  DispCaption(0x12,(byte)(int)yw2d.io_a[4]);
  CameraModeInOut2();
  CameraCntRenew();
  return;
}

void CameraDsp(short int pos_x, short int pos_y, u_char alp, u_char msg) {
	int i;
	int j;
	int cost;
	u_char rgb;
	u_char flsh_alp[6];
	u_char use;
	u_char *pow[3];
	int cst_rgb;
	short int flm_ax[4];
	short int flm_ay[4];
	float arw_alp;
	
  ulong *puVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  byte alp_00;
  ulong uVar7;
  uint uVar8;
  ushort alpha;
  ushort *puVar9;
  int iVar10;
  uchar (*pauVar11) [4];
  ushort *puVar12;
  int iVar13;
  uchar *puVar14;
  byte **ppbVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float pos_y_00;
  float fVar23;
  float fVar24;
  float fVar25;
  float pos_x_00;
  float fVar26;
  float alp_01;
  float pos_x_01;
  float pos_y_01;
  uchar flsh_alp [6];
  uchar *pow [3];
  ushort flm_ax [4];
  ushort flm_ay [4];
  int cst_rgb;
  uint local_11c;
  uint local_118;
  int local_114;
  uchar **local_110;
  ushort *local_10c;
  ushort *local_108;
  int local_104;
  
  iVar20 = (int)(short)pos_y;
  iVar19 = (int)(short)pos_x;
  uVar18 = (int)(char)alp & 0xff;
  pos_y_01 = (float)iVar20;
  pos_x_01 = (float)iVar19;
  alp_01 = (float)uVar18;
  uVar8 = (int)pow + 7U & 7;
  puVar1 = (ulong *)(((int)pow + 7U) - uVar8);
  *puVar1 = *puVar1 & -1L << (uVar8 + 1) * 8 | _PTR_cam_custom_wrk_0034fd40 >> (7 - uVar8) * 8;
  pow._0_8_ = _PTR_cam_custom_wrk_0034fd40;
  pow[2] = DAT_0034fd48;
  local_11c = (int)(char)msg & 0xff;
  uVar8 = (int)flm_ax + 7U & 7;
  puVar1 = (ulong *)(((int)flm_ax + 7U) - uVar8);
  *puVar1 = *puVar1 & -1L << (uVar8 + 1) * 8 | (ulong)DAT_00357158 >> (7 - uVar8) * 8;
  flm_ax = DAT_00357158;
  uVar8 = (int)flm_ay + 7U & 7;
  puVar1 = (ulong *)(((int)flm_ay + 7U) - uVar8);
  *puVar1 = *puVar1 & -1L << (uVar8 + 1) * 8 | (ulong)DAT_00357160 >> (7 - uVar8) * 8;
  flm_ay = DAT_00357160;
  fVar23 = pos_y_01;
  fVar25 = alp_01;
  PutSpriteYW(0x10b,0x10b,pos_x_01,pos_y_01,0.0,(int)&DAT_00404040,alp_01,1.0,1.0,0,0xff,1,0,0);
  if (cmr_menu_wrk.csr[0] == '\x01') {
    cam_dsp.film_or_perform = '\x01';
  }
  else if (cmr_menu_wrk.csr[0] < 2) {
    if (cmr_menu_wrk.csr[0] == '\0') {
      cam_dsp.film_or_perform = '\0';
    }
  }
  else if (cmr_menu_wrk.csr[0] == '\x02') {
    cam_dsp.bonus_or_special = '\0';
  }
  else if (cmr_menu_wrk.csr[0] == '\x03') {
    cam_dsp.bonus_or_special = '\x01';
  }
  local_118 = uVar18 >> 1;
  FlashStarYW(&flsh,'@','`','Z','\0');
  alp_00 = (byte)uVar18;
  FlashStarYW(&flsh2,alp_00,(uchar)local_118,'Z','\0');
  switch(cmr_menu_wrk.mode) {
  case '\0':
    flsh_alp[0] = '@';
    flsh_alp[1] = flsh.alpha;
    flsh_alp[4] = '\0';
    flsh_alp[3] = '\0';
    flsh_alp[2] = '\0';
    break;
  case '\x01':
    flsh_alp[0] = '@';
    flsh_alp[2] = flsh.alpha;
    flsh_alp[4] = '\0';
    flsh_alp[3] = '\0';
    goto LAB_001ddf7c;
  case '\x02':
    flsh_alp[0] = '@';
    flsh_alp[3] = flsh.alpha;
    flsh_alp[4] = '\0';
    goto LAB_001ddf78;
  case '\x03':
    flsh_alp[0] = '@';
    flsh_alp[4] = flsh.alpha;
    goto LAB_001ddf74;
  case '\x04':
    flsh_alp[4] = '\0';
    flsh_alp[0] = flsh.alpha;
LAB_001ddf74:
    flsh_alp[3] = '\0';
LAB_001ddf78:
    flsh_alp[2] = '\0';
LAB_001ddf7c:
    flsh_alp[1] = '\0';
  }
  uVar7 = 0xffffffffffffffff;
  if (cmr_menu_wrk.mode == '\x02') {
    uVar8 = (uint)cmr_menu_wrk.csr[3];
    if (cam_custom_wrk.func_sub[uVar8] != '\x01') goto LAB_001de06c;
    piVar4 = camera_sub_abi_point;
  }
  else {
    if (cmr_menu_wrk.mode < 3) {
      if (cmr_menu_wrk.mode == '\x01') {
        if (*pow[cmr_menu_wrk.csr[2]] != 3) {
          uVar7 = (ulong)camera_power_up_point[cmr_menu_wrk.csr[2]][*pow[cmr_menu_wrk.csr[2]]];
        }
      }
      goto LAB_001de06c;
    }
    if ((cmr_menu_wrk.mode != '\x03') ||
       (uVar8 = (uint)cmr_menu_wrk.csr[4], cam_custom_wrk.func_spe[uVar8] != '\x01'))
    goto LAB_001de06c;
    piVar4 = camera_spe_abi_point;
  }
  uVar7 = (ulong)piVar4[uVar8];
LAB_001de06c:
  flsh_alp[5] = '@';
  alpha = (ushort)uVar18;
  if (uVar7 != 0xffffffffffffffff) {
    if (cam_custom_wrk.point < uVar7) {
      PutNumberYW(3,(int)uVar7,0x209,0x121,1.0,1.0,0x808080,(ushort)(int)(alp_01 * 0.5),0x5000,5,0);
    }
    else {
      flsh_alp[5] = flsh2.alpha;
      PutNumberYW(3,(int)uVar7,0x209,0x121,1.0,1.0,0x808080,alpha,0x5000,5,0);
    }
  }
  WakuWaku2(0xfff1,0,alp_00,'\x04','7');
  fVar21 = 0.0;
  PutSpriteYW(0xf5,0xf8,(float)(iVar19 + -0xf),pos_y_01,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0);
  DspMenuTitle(pos_x,pos_y,alp_01,'2','\a');
  CmnWindow(0x21,pos_x,pos_y,alp_00,flsh_alp[5]);
  CLRtoRGB(&cst_rgb,flsh_alp[5],flsh_alp[5],flsh_alp[5]);
  PutSpriteYW(0x10a,0x10a,pos_x_01,pos_y_01,fVar21,cst_rgb,alp_01,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x110,0x110,pos_x_01,pos_y_01,fVar21,0x808080,alp_01,1.0,1.0,0,0xff,0,0,0);
  if (cam_dsp.film_or_perform == '\0') {
    bVar5 = 0x80;
    if (cmr_menu_wrk.csr[0] != '\0') {
      bVar5 = 0x40;
    }
    CmnWindow(0x22,pos_x,pos_y,alp_00,bVar5);
    PutSpriteYW(0x10c,0x10c,pos_x_01,fVar23,fVar21,0x808080,fVar25,1.0,1.0,0,0xff,0,0,0);
  }
  else {
    bVar5 = 0x80;
    if (cmr_menu_wrk.csr[0] != '\x01') {
      bVar5 = 0x40;
    }
    CmnWindow(0x23,pos_x,pos_y,alp_00,bVar5);
    PutSpriteYW(0x10d,0x10d,pos_x_01,fVar23,fVar21,0x808080,fVar25,1.0,1.0,0,0xff,0,0,0);
  }
  if (cam_dsp.bonus_or_special == '\0') {
    bVar5 = 0x80;
    if (cmr_menu_wrk.csr[0] != '\x02') {
      bVar5 = 0x40;
    }
    CmnWindow(0x24,pos_x,pos_y,alp_00,bVar5);
    PutSpriteYW(0x10e,0x10e,pos_x_01,pos_y_01,0.0,0x808080,alp_01,1.0,1.0,0,0xff,0,0,0);
  }
  else {
    bVar5 = 0x80;
    if (cmr_menu_wrk.csr[0] != '\x03') {
      bVar5 = 0x40;
    }
    CmnWindow(0x25,pos_x,pos_y,alp_00,bVar5);
    PutSpriteYW(0x10f,0x10f,pos_x_01,pos_y_01,0.0,0x808080,alp_01,1.0,1.0,0,0xff,0,0,0);
  }
  if (cam_dsp.film_or_perform == '\0') {
    local_10c = flm_ax;
    local_108 = flm_ay;
    local_104 = iVar19 + 0x17;
    local_114 = iVar20 + 0x154;
    iVar19 = 0;
    do {
      iVar20 = iVar19 + 1;
      pbVar17 = poss_item + iVar19 + 1;
      if (*pbVar17 == 0) {
        sVar2 = (short)iVar19 + 0xf9;
        if (flm_exp_flg[iVar19 + 1] != '\0') {
          PutSpriteYW(sVar2,sVar2,pos_x_01,pos_y_01,0.0,(int)&DAT_00404040,alp_01,1.0,1.0,0,0xff,1,0
                      ,0);
          puVar12 = local_108 + iVar19;
          puVar9 = local_10c + iVar19;
          PutStringYW(0x2d,0,*puVar9 + 0x15f,*puVar12 + 0x9b,(int)&DAT_00404040,alp_00,0x2000,0);
          PutStringYW(0x18,(byte)iVar20,*puVar9 + 0xce,*puVar12 + 0x83,(int)&DAT_00404040,alp_00,
                      0x2000,0);
          PutNumberYW(3,(uint)*pbVar17,pos_x + *puVar9 + 0x16f,pos_y + *puVar12 + 0x97,1.0,1.0,
                      (int)&DAT_00404040,alpha,0x2000,2,1);
          PolySquareYW((float)((short)*puVar9 + 0xcc),(float)((short)*puVar12 + 0x81),0xc5,0x2d,0,
                       (float)local_118,1.0,1.0,0x2000,0,0,0);
        }
      }
      else {
        sVar2 = (short)iVar19 + 0xf9;
        PutSpriteYW(sVar2,sVar2,pos_x_01,pos_y_01,0.0,(int)&DAT_00404040,alp_01,1.0,1.0,0,0xff,1,0,0
                   );
        puVar12 = local_108 + iVar19;
        puVar9 = local_10c + iVar19;
        PutStringYW(0x2d,0,*puVar9 + 0x15f,*puVar12 + 0x9b,0x808080,alp_00,0x2000,0);
        PutStringYW(0x18,(byte)iVar20,*puVar9 + 0xce,*puVar12 + 0x83,0x808080,alp_00,0x2000,0);
        PutNumberYW(3,(uint)*pbVar17,pos_x + *puVar9 + 0x16f,pos_y + *puVar12 + 0x97,1.0,1.0,
                    0x808080,alpha,0x2000,2,1);
      }
      iVar19 = iVar20;
    } while (iVar20 < 4);
  }
  else {
    local_10c = flm_ax;
    local_108 = flm_ay;
    local_104 = iVar19 + 0x17;
    local_114 = iVar20 + 0x154;
    iVar6 = 0x111;
    fVar23 = 1.0;
    iVar10 = 0;
    local_110 = pow;
    do {
      PutSpriteYW((short)iVar6,(short)iVar6,pos_x_01,pos_y_01,0.0,0x808080,alp_01,fVar23,fVar23,0,
                  0xff,1,0,0);
      if (*local_110[iVar10] == '\x03') {
        fVar22 = (float)(iVar19 + -5);
        fVar24 = (float)(iVar20 + iVar10 * 0x20 + -7);
        PutSpriteYW(0x108,0x108,fVar22,fVar24,0.0,0x808080,fVar25,fVar23,fVar23,0,0xff,1,0,0);
        fVar21 = BeMax((uchar)iVar10);
        PutSpriteYW(0x108,0x108,fVar22,fVar24,0.0,0x808080,fVar25 * fVar21,fVar23,fVar23,0,0xff,1,1,
                    0);
        fVar21 = fVar23;
      }
      else {
        fVar22 = 0.25;
        fVar24 = 0.5;
        iVar16 = 0;
        iVar13 = 0;
        fVar21 = fVar23;
        iVar6 = iVar19;
        do {
          fVar26 = NeonAlp(5,0x3c,10,0x32,(ushort)((uint)iVar13 >> 0x10),&cam_dsp.arw_cnt);
          pos_x_00 = (float)iVar6;
          pos_y_00 = (float)(iVar20 + iVar10 * 0x20);
          iVar16 = iVar16 + 1;
          PutSpriteYW(0x107,0x107,pos_x_00,pos_y_00,0.0,0x808080,alp_01 * fVar26 * fVar22,fVar23,
                      fVar23,0,0xff,1,0,0);
          iVar6 = iVar6 + 0xf;
          PutSpriteYW(0x107,0x107,pos_x_00,pos_y_00,0.0,0x808080,alp_01 * fVar26 * fVar24,fVar23,
                      fVar23,0,0xff,1,1,0);
          iVar13 = iVar16 * 0x10000;
        } while (iVar16 < 5);
      }
      iVar13 = iVar10 + 1;
      iVar6 = iVar10 + 0x112;
      fVar23 = fVar21;
      iVar10 = iVar13;
    } while (iVar13 < 3);
    if ((short)cam_dsp.arw_cnt < 0xfff) {
      cam_dsp.arw_cnt = cam_dsp.arw_cnt + 1;
    }
    else {
      cam_dsp.arw_cnt = 0;
    }
    iVar6 = 0;
    iVar10 = 0;
    do {
      iVar6 = iVar20 + iVar6;
      PutSpriteYW(0x109,0x109,pos_x_01,(float)iVar6,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0);
      iVar16 = iVar10 + 1;
      iVar13 = 0;
      ppbVar15 = local_110 + iVar10;
      iVar10 = iVar19;
      do {
        if (iVar13 < (int)(**ppbVar15 + 1)) {
          PutSpriteYW(0xf4,0xf4,(float)iVar10,(float)iVar6,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0)
          ;
        }
        else {
          PutSpriteYW(0xf3,0xf3,(float)iVar10,(float)iVar6,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0)
          ;
        }
        iVar13 = iVar13 + 1;
        iVar10 = iVar10 + 0x16;
      } while (iVar13 < 4);
      iVar6 = iVar16 * 0x20;
      iVar10 = iVar16;
    } while (iVar16 < 3);
    iVar10 = 0;
    do {
      pbVar17 = local_110[iVar10];
      bVar5 = *pbVar17;
      if (bVar5 != cam_dsp.pow_bak[iVar10]) {
        cam_dsp.pow_flr[iVar10][bVar5] = '\x14';
        cam_dsp.pow_bak[iVar10] = *pbVar17;
      }
      iVar6 = iVar10 * 0x20;
      fVar25 = 1.0;
      pauVar11 = cam_dsp.pow_flr[iVar10];
      fVar21 = 20.0;
      iVar13 = 0;
      iVar10 = iVar10 + 1;
      fVar23 = DAT_00355f04;
      do {
        bVar5 = (*pauVar11)[0] - 1;
        if ((*pauVar11)[0] != '\0') {
          fVar26 = (float)(iVar20 + iVar6);
          (*pauVar11)[0] = bVar5;
          fVar22 = SgSinf(((float)(uint)bVar5 * fVar23) / fVar21);
          fVar24 = (float)(iVar13 * 0x16 + iVar19);
          fVar22 = (float)((int)(alp_01 * fVar22) & 0xff);
          PutSpriteYW(0xf4,0xf4,fVar24,fVar26,0.0,0x808080,fVar22,fVar25,fVar25,0,0xff,1,1,0);
          PutSpriteYW(0xf2,0xf2,fVar24,fVar26,0.0,0x808080,fVar22,fVar25,fVar25,0,0xff,1,1,0);
        }
        iVar13 = iVar13 + 1;
        pauVar11 = (uchar (*) [4])(*pauVar11 + 1);
      } while (iVar13 < 4);
    } while (iVar10 < 3);
  }
  if (cam_dsp.bonus_or_special == '\0') {
    puVar14 = cam_dsp.sb_flsh;
    iVar19 = 0;
    fVar23 = alp_01;
    fVar25 = pos_x_01;
    do {
      bVar5 = cam_custom_wrk.func_sub[iVar19];
      sVar2 = (short)iVar19;
      if (bVar5 == 1) {
        PutSpriteYW(sVar2 + 0xfd,sVar2 + 0xfd,pos_x_01,pos_y_01,0.0,(int)&DAT_00404040,alp_01,1.0,
                    1.0,0,0xff,1,0,0);
        PolySquareYW((float)(iVar19 * 0x2e + 0xcc),DAT_00355f08,0x2c,0x2c,0,(float)local_118,1.0,1.0
                     ,0xf000,0,0,0);
      }
      else if (1 < bVar5) {
        if (bVar5 == 2) {
          PutSpriteYW(sVar2 + 0xfd,sVar2 + 0xfd,pos_x_01,pos_y_01,0.0,0x808080,
                      (float)(uint)flsh2.alpha,1.0,1.0,0,0xff,1,0,0);
          *puVar14 = 0;
        }
        else if (bVar5 == 3) {
          sVar3 = sVar2 + 0xfd;
          if (*puVar14 < 0x14) {
            PutSpriteYW(sVar3,sVar3,fVar25,pos_y_01,0.0,0x808080,fVar23,1.0,1.0,0,0xff,1,0,0);
            fVar21 = SgSinf(((float)(uint)*puVar14 * DAT_00355f0c) / 20.0);
            PutSpriteYW(sVar3,sVar3,fVar25,pos_y_01,0.0,0x808080,
                        (float)((int)(fVar23 * fVar21) & 0xff),1.0,1.0,0,0xff,1,1,0);
            *puVar14 = *puVar14 + 1;
          }
          else {
            PutSpriteYW(sVar2 + 0xfd,sVar2 + 0xfd,pos_x_01,pos_y_01,0.0,0x808080,
                        (float)(uint)flsh2.alpha,1.0,1.0,0,0xff,1,0,0);
          }
        }
      }
      iVar19 = iVar19 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar19 < 5);
  }
  else {
    puVar14 = cam_dsp.ex_flsh;
    iVar19 = 0;
    fVar23 = alp_01;
    fVar25 = pos_x_01;
    do {
      bVar5 = cam_custom_wrk.func_spe[iVar19];
      sVar2 = (short)iVar19;
      if (bVar5 == 1) {
        PutSpriteYW(sVar2 + 0x102,sVar2 + 0x102,pos_x_01,pos_y_01,0.0,(int)&DAT_00404040,alp_01,1.0,
                    1.0,0,0xff,1,0,0);
        PolySquareYW((float)(iVar19 * 0x2e + 0xcc),DAT_00355f10,0x2c,0x2c,0,(float)local_118,1.0,1.0
                     ,0xa000,0,0,0);
      }
      else if (1 < bVar5) {
        if (bVar5 == 2) {
          PutSpriteYW(sVar2 + 0x102,sVar2 + 0x102,pos_x_01,pos_y_01,0.0,0x808080,
                      (float)(uint)flsh2.alpha,1.0,1.0,0,0xff,1,0,0);
          *puVar14 = 0;
        }
        else if (bVar5 == 3) {
          sVar3 = sVar2 + 0x102;
          if (*puVar14 < 0x14) {
            PutSpriteYW(sVar3,sVar3,fVar25,pos_y_01,0.0,0x808080,fVar23,1.0,1.0,0,0xff,1,0,0);
            fVar21 = SgSinf(((float)(uint)*puVar14 * DAT_00355f14) / 20.0);
            PutSpriteYW(sVar3,sVar3,fVar25,pos_y_01,0.0,0x808080,
                        (float)((int)(fVar23 * fVar21) & 0xff),1.0,1.0,0,0xff,1,1,0);
            *puVar14 = *puVar14 + 1;
          }
          else {
            PutSpriteYW(sVar2 + 0x102,sVar2 + 0x102,pos_x_01,pos_y_01,0.0,0x808080,
                        (float)(uint)flsh2.alpha,1.0,1.0,0,0xff,1,0,0);
          }
        }
      }
      iVar19 = iVar19 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar19 < 5);
  }
  CmnCursol(0x20,(ushort)cmr_menu_wrk.csr[0] * 0x32 + 0x78,0x7a,0x2a,(float)(uint)flsh_alp[0],alp_00
            ,0xa000);
  CmnCursol(local_10c[cmr_menu_wrk.csr[1]] + 0xcc,local_108[cmr_menu_wrk.csr[1]] + 0x81,0xc5,0x2d,
            (float)(uint)flsh_alp[1],alp_00,0x2000);
  CmnCursol(0xcc,(ushort)cmr_menu_wrk.csr[2] * 0x20 + 0x81,0x192,0x1e,(float)(uint)flsh_alp[2],
            alp_00,0xa000);
  CmnCursol((ushort)cmr_menu_wrk.csr[3] * 0x2e + 0xcc,0x10f,0x2c,0x2c,(float)(uint)flsh_alp[3],
            alp_00,0xa000);
  CmnCursol((ushort)cmr_menu_wrk.csr[4] * 0x2e + 0xcc,0x10f,0x2c,0x2c,(float)(uint)flsh_alp[4],
            alp_00,0xa000);
  DrawMessageBox(0x19000,(float)local_104,(float)local_114,DAT_00355f18,84.0,alp_00);
  if (cmr_menu_wrk.yn_mode == '\0') {
    if (local_11c != 0xff) {
      PutStringYW(0x2d,(byte)local_11c,0x30,0x164,0x808080,alp_00,0x5000,0);
    }
  }
  else if (local_11c != 0xff) {
    PutStringYW(0x2d,(byte)local_11c,0x13e,0x164,0x808080,alp_00,0x5000,1);
    PutStringYW(0x2d,2,0x30,0x181,0x808080,alp_00,0x5000,0);
    YesNoCrslOKR(0x14000,(float)((uint)cmr_menu_wrk.csr[5] * 0x84 + 0xb2),380.0,0x808080,alp_01,2.0)
    ;
  }
  return;
}

char StrKndChk(u_char err) {
	char str;
	
  byte bVar1;
  char cVar2;
  
  cVar2 = -1;
  switch(cmr_menu_wrk.mode) {
  case '\0':
    if (err != '\0') {
      if (err == '\x02') {
        return '\f';
      }
      if (err < 3) {
        if (err == '\x01') {
          return '\x03';
        }
        return -1;
      }
      if (err == '\x03') {
        return '\r';
      }
      if (err != '\x04') {
        return -1;
      }
      return '\x0e';
    }
    if (cmr_menu_wrk.yn_mode == '\0') {
      cVar2 = FilmPossChk(cmr_menu_wrk.csr[1]);
      if (cVar2 == '\0') {
        return -1;
      }
      cVar2 = cmr_menu_wrk.csr[1] + '5';
    }
    else {
      cVar2 = cmr_menu_wrk.csr[1] + '\b';
    }
    break;
  case '\x01':
    if (err == '\0') {
      if (cmr_menu_wrk.yn_mode == '\0') {
        cVar2 = cmr_menu_wrk.csr[2] + '9';
      }
      else {
        cVar2 = cmr_menu_wrk.csr[2] + '\x0f';
      }
    }
    else {
      if (err == '\x01') {
        return '\x03';
      }
      if (err != '\x02') {
        return -1;
      }
      cVar2 = cmr_menu_wrk.csr[2] + '\x12';
    }
    break;
  case '\x02':
    if (err != '\0') {
      if (err == '\x01') {
        return '\x03';
      }
      if (err == '\x02') {
        return '$';
      }
      return -1;
    }
    if (cmr_menu_wrk.yn_mode == '\0') {
      if (cam_custom_wrk.func_sub[cmr_menu_wrk.csr[3]] == '\0') {
        return -1;
      }
      cVar2 = (char)((cmr_menu_wrk.csr[3] + 0x15) * 0x1000000 >> 0x18);
    }
    else {
      bVar1 = cam_custom_wrk.func_sub[cmr_menu_wrk.csr[3]];
      if (bVar1 == 2) {
        cVar2 = cmr_menu_wrk.csr[3] + '\x1f';
      }
      else if (bVar1 < 3) {
        if (bVar1 != 1) {
          return -1;
        }
        cVar2 = cmr_menu_wrk.csr[3] + '\x1a';
      }
      else {
        if (bVar1 != 3) {
          return -1;
        }
        cVar2 = cmr_menu_wrk.csr[3] + '<';
      }
    }
    break;
  case '\x03':
    if (err != '\0') {
      if (err == '\x01') {
        return '\x03';
      }
      if (err != '\x02') {
        return -1;
      }
      return '4';
    }
    if (cmr_menu_wrk.yn_mode == '\0') {
      cVar2 = cmr_menu_wrk.csr[4] + '%';
      if (cam_custom_wrk.func_spe[cmr_menu_wrk.csr[4]] == '\0') {
        return -1;
      }
    }
    else {
      bVar1 = cam_custom_wrk.func_spe[cmr_menu_wrk.csr[4]];
      if (bVar1 == 2) {
        cVar2 = cmr_menu_wrk.csr[4] + '/';
      }
      else if (bVar1 < 3) {
        if (bVar1 != 1) {
          return -1;
        }
        cVar2 = cmr_menu_wrk.csr[4] + '*';
      }
      else {
        if (bVar1 != 3) {
          return -1;
        }
        cVar2 = cmr_menu_wrk.csr[4] + 'A';
      }
    }
    break;
  case '\x04':
    cVar2 = cmr_menu_wrk.csr[0] + '\x04';
  }
  return cVar2;
}

char FilmPossChk(u_char knd) {
	char rtrn;
	char chk;
	
  int iVar1;
  char cVar2;
  
  iVar1 = (int)((((int)(char)knd & 0xffU) + 1) * 0x1000000) >> 0x18;
  if (flm_exp_flg[iVar1] == '\0') {
    cVar2 = -1;
    if (poss_item[iVar1] == 0) {
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = '\x01';
    if (poss_item[iVar1] != 0) {
      cVar2 = '\x02';
    }
  }
  return cVar2;
}

void CameraModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  float fVar1;
  int iVar2;
  
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    yw2d.io_a[2] = 128.0;
    yw2d.io_a[1] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[3] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    fVar1 = yw2d.io_a[1];
    yw2d.io_a[4] = yw2d.io_a[1];
    if (sys_wrk.game_mode == 3) {
      DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
      DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x01');
      fVar1 = yw2d.io_a[2];
    }
    yw2d.io_a[2] = fVar1;
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.out_mode_cnt == 0) {
    iVar2 = 0;
    do {
      XYAdefaultYW((uchar)iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
  }
  else {
    yw2d.io_a[2] = 128.0;
    yw2d.io_a[1] = (float)(((ushort)yw2d.out_mode_cnt - 1) * 0x80) / 10.0;
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[3] = (1.0 - (float)((ushort)yw2d.out_mode_cnt - 1) / 10.0) * 128.0;
    fVar1 = yw2d.io_a[1];
    yw2d.io_a[4] = yw2d.io_a[1];
    if (sys_wrk.game_mode == 3) {
      DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
      DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x01');
      fVar1 = yw2d.io_a[2];
    }
    yw2d.io_a[2] = fVar1;
    yw2d.pad_lock = 1;
    if (yw2d.out_mode_cnt == 1) {
      ig_menu_wrk.mode = '\a';
      IngameMenuModeSlctDispInit();
      yw2d.pad_lock = 0;
      yw2d.menu_io_flg = 0;
    }
  }
  return;
}

void CameraModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    if (sys_wrk.game_mode == 3) {
      DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x02');
      return;
    }
  }
  else if ((yw2d.out_mode_cnt != 0) && (sys_wrk.game_mode == 3)) {
    DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x02');
    return;
  }
  return;
}

void CameraCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

int isCameraTopMenu() {
  return (int)(cmr_menu_wrk.mode == '\x04');
}

void OutGameInitCamera() {
  yw2d.inn_mode_cnt = 0;
  ItemInitAtMenuOpen();
  ig_menu_wrk.mode = '\x06';
  return;
}

int isCameraEnd() {
  return (int)(ig_menu_wrk.mode != '\x06');
}

float GetCamDispAlpha() {
  float fVar1;
  
  fVar1 = 0.0;
  if (yw2d.inn_mode_cnt != 0) {
    fVar1 = yw2d.io_a[2];
  }
  return fVar1;
}

void OpenCameraMenu() {
  cribo.clear_info = cribo.clear_info | 4;
  return;
}

float NeonAlp(short int num, short int exe, short int dly, short int stp, short int no, short int *timer) {
	float rad;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (int)(short)exe;
  uVar1 = (uint)*timer;
  if ((long)(((int)(short)stp + iVar3 + (int)(short)dly * ((short)num + -1)) * 0x10000 >> 0x10) <=
      (long)(short)*timer) {
    *timer = 0;
    uVar1 = 0;
  }
  iVar2 = (int)((uVar1 - ((int)(short)no * (int)(short)dly * 0x10000 >> 0x10)) * 0x10000) >> 0x10;
  if ((iVar2 < 0) || (iVar3 <= iVar2)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = ((float)iVar2 * DAT_00355f1c) / (float)iVar3;
  }
  fVar4 = SgCosf(fVar4);
  return (2.0 - (fVar4 + 1.0)) * 0.5;
}

float BeMax(u_char no) {
	float per;
	
  uchar *puVar1;
  float fVar2;
  
  puVar1 = cam_dsp.pfm_max + ((int)(char)no & 0xff);
  if (*puVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = SgSinf(((float)(uint)*puVar1 * DAT_00355f20) / 20.0);
    *puVar1 = *puVar1 - 1;
  }
  return fVar2;
}
