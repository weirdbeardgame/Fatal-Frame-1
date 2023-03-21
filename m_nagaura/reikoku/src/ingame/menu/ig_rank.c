// STATUS: NOT STARTED

typedef struct {
	u_char mode;
	u_char csr_bak;
	u_char star;
	u_char cnt;
	char exist_s_rank;
} MENU_RANK;

typedef struct {
	u_short type;
	u_short id;
} SUBJECT_CHK;

SAVE_RANK save_rank = {
	/* .pic_inf = */ {
		/* [0] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [1] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [2] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [3] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [4] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [5] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [6] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [7] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [8] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		},
		/* [9] = */ {
			/* .adr_no = */ 0,
			/* .msn_no = */ 0,
			/* .room = */ 0,
			/* .status = */ 0,
			/* .subject = */ {
				/* [0] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [1] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				},
				/* [2] = */ {
					/* [0] = */ 0,
					/* [1] = */ 0
				}
			},
			/* .score = */ 0,
			/* .time = */ {
				/* .stat = */ 0,
				/* .second = */ 0,
				/* .minute = */ 0,
				/* .hour = */ 0,
				/* .pad = */ 0,
				/* .day = */ 0,
				/* .month = */ 0,
				/* .year = */ 0
			}
		}
	},
	/* .pic_num = */ 0,
	/* .best_score = */ 0
};
static MENU_RANK menu_rank;
static FLSH_CORE flsh;

void NewgameMenuRankInit() {
  memset(&menu_rank,0,5);
  memset(&save_rank,0,0x11c);
  return;
}

void LoadgameMenuRankInit() {
  memset(&menu_rank,0,5);
  menu_rank.exist_s_rank = SrankCHK();
  return;
}

void StartRankModeInit() {
  yw2d.pad_lock = 1;
  ig_menu_wrk.csr[1] = '\0';
  menu_rank.csr_bak = 0xff;
  menu_rank.mode = '\0';
  menu_rank.cnt = '\0';
  InitPhotoExpand();
  return;
}

void IngameMenuRank() {
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  IngameMenuRankDisp();
  if (save_rank.pic_num == 0) {
    if ((yw2d.pad_lock == 0) && (*key_now[4] == 1)) {
      yw2d.out_mode_cnt = 0xb;
      SeStartFix(3,0,0x1000,0x1000,1);
      return;
    }
  }
  else if (menu_rank.mode == '\0') {
    if (yw2d.pad_lock == 0) {
      if (*key_now[4] == 1) {
        yw2d.out_mode_cnt = 0xb;
        SeStartFix(3,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        menu_rank.mode = '\x01';
        SeStartFix(1,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[1] == 1) ||
         ((((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
           (sVar1 = Ana2PadDirCnt('\x02'), sVar1 == 1)) ||
          ((uVar2 = Ana2PadDirCnt('\x02'), 0x19 < uVar2 &&
           (sVar1 = Ana2PadDirCnt('\x02'), (int)sVar1 % 5 == 1)))))) {
        SeStartFix(0,0,0x1000,0x1000,1);
        if ((int)(uint)ig_menu_wrk.csr[1] < (int)((ushort)save_rank.pic_num - 1)) {
          ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
          return;
        }
      }
      else {
        if (((*key_now[0] != 1) &&
            (((ushort)*key_now[0] < 0x1a || ((uint)(ushort)*key_now[0] % 5 != 1)))) &&
           (sVar1 = Ana2PadDirCnt('\0'), sVar1 != 1)) {
          uVar2 = Ana2PadDirCnt('\0');
          if (uVar2 < 0x1a) {
            return;
          }
          sVar1 = Ana2PadDirCnt('\0');
          if ((int)sVar1 % 5 != 1) {
            return;
          }
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        save_rank.pic_num._0_1_ = ig_menu_wrk.csr[1];
        if (ig_menu_wrk.csr[1] == '\0') {
          ig_menu_wrk.csr[1] = '\0';
          return;
        }
      }
      ig_menu_wrk.csr[1] = (uchar)save_rank.pic_num + 0xff;
    }
  }
  else if ((menu_rank.mode == '\x01') && (yw2d.pad_lock == 0)) {
    if (*key_now[4] == 1) {
      menu_rank.mode = '\0';
      SeStartFix(3,0,0x1000,0x1000,1);
      return;
    }
    if (((*key_now[3] == 1) ||
        (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
         (sVar1 = Ana2PadDirCnt('\x01'), sVar1 == 1)))) ||
       ((uVar2 = Ana2PadDirCnt('\x01'), 0x19 < uVar2 &&
        (sVar1 = Ana2PadDirCnt('\x01'), (int)sVar1 % 5 == 1)))) {
      SeStartFix(0,0,0x1000,0x1000,1);
      uVar3 = (uint)ig_menu_wrk.csr[1];
      ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
      if ((int)((ushort)save_rank.pic_num - 1) <= (int)uVar3) {
        ig_menu_wrk.csr[1] = '\0';
      }
    }
    else if (((*key_now[2] == 1) ||
             ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))) ||
            ((sVar1 = Ana2PadDirCnt('\x03'), sVar1 == 1 ||
             ((uVar2 = Ana2PadDirCnt('\x03'), 0x19 < uVar2 &&
              (sVar1 = Ana2PadDirCnt('\x03'), (int)sVar1 % 5 == 1)))))) {
      SeStartFix(0,0,0x1000,0x1000,1);
      if (ig_menu_wrk.csr[1] == '\0') {
        ig_menu_wrk.csr[1] = (uchar)save_rank.pic_num;
      }
      ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
    }
  }
  return;
}

void IngameMenuRankDisp() {
  RankCntInit();
  RankModeInOut();
  if (save_rank.pic_num == 0) {
    DrawMessageBox(0x14000,170.0,210.0,300.0,60.0,(byte)(int)yw2d.io_a[4]);
    PutStringYW(0x21,0,0xd7,0xe4,0x808080,(byte)(int)yw2d.io_a[4],0xf000,0);
    DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x06');
    RankModeInOut2();
  }
  else {
    if (yw2d.inn_mode_cnt == 10) {
      IngameMenuRankData('\x02');
    }
    else {
      IngameMenuRankData('\0');
    }
    RankModeInOut2();
    IngameMenuRankData('\x03');
    if (yw2d.out_mode_cnt == 0xc) {
      BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0xffff7f0);
      IngameMenuRankData('\x02');
    }
  }
  RankCntRenew();
  return;
}

static void IngameMenuRankData(u_char dsp) {
  if (dsp == '\x01') {
    DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x06');
    IngameMenuRankDataDisp('\x01');
    return;
  }
  if (dsp < 2) {
    if (dsp == '\0') {
      DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x06');
      IngameMenuRankDataDisp('\0');
      return;
    }
  }
  else {
    if (dsp == '\x02') {
      IngameMenuRankDataDisp('\x02');
      return;
    }
    if (dsp == '\x03') {
      IngameMenuRankDataDisp('\x03');
      return;
    }
  }
  return;
}

static void IngameMenuRankDataDisp(u_char dsp) {
  if (dsp < 3) {
    if (menu_rank.mode != '\0') {
      DspTopRankBig(dsp,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(uchar)(int)yw2d.io_a[4]
                   );
      DispCaption(0x11,(byte)(int)yw2d.io_a[4]);
      return;
    }
    DspTopRankLst(dsp,(ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(uchar)(int)yw2d.io_a[4]);
    DispCaption(0x10,(byte)(int)yw2d.io_a[4]);
    return;
  }
  if (dsp != '\x03') {
    return;
  }
  if (menu_rank.mode != '\0') {
    DspTopRankBig('\x03',(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],
                  (uchar)(int)yw2d.io_a[5]);
    return;
  }
  DspTopRankLst('\x03',(ushort)(int)yw2d.io_x[5],(ushort)(int)yw2d.io_y[5],(uchar)(int)yw2d.io_a[5])
  ;
  return;
}

static void RankCntInit() {
  return;
}

static void RankCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void RankModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0x15) {
    if ((ushort)yw2d.inn_mode_cnt < 0xb) {
      yw2d.io_a[5] = 0.0;
      yw2d.io_a[4] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
      yw2d.io_a[3] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    }
    else {
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[5] = (float)(((ushort)yw2d.inn_mode_cnt - 10) * 0x80) / 10.0;
      yw2d.io_a[3] = 0.0;
    }
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = yw2d.io_a[4];
    yw2d.io_a[2] = yw2d.io_a[3];
    PlayerStatusYW((uchar)(int)yw2d.io_a[3]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.out_mode_cnt == 0) {
    iVar1 = 0;
    do {
      XYAdefaultYW((uchar)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
  }
  else {
    if ((ushort)yw2d.out_mode_cnt < 0xc) {
      iVar1 = (ushort)yw2d.out_mode_cnt - 1;
      yw2d.io_a[5] = 0.0;
      yw2d.io_a[4] = (float)(iVar1 * 0x80) / 10.0;
      yw2d.io_a[3] = (1.0 - (float)iVar1 / 10.0) * 128.0;
    }
    else {
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[5] = (float)(((ushort)yw2d.out_mode_cnt - 0xb) * 0x80) / 10.0;
      yw2d.io_a[3] = 0.0;
    }
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = yw2d.io_a[4];
    yw2d.io_a[2] = yw2d.io_a[3];
    PlayerStatusYW((uchar)(int)yw2d.io_a[3]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
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

static void RankModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  if (yw2d.out_mode_cnt != 0) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  return;
}

static void DspTopRankLst(u_char dsp, short int pos_x, short int pos_y, u_char alpha) {
  byte alp;
  uint uVar1;
  float pos_x_00;
  float pos_y_00;
  float alp_00;
  
  uVar1 = (int)(char)alpha & 0xff;
  if (uVar1 != 0) {
    alp = (byte)uVar1;
    if (dsp < 2) {
      alp_00 = (float)uVar1;
      CmnWindow(0xb,0,0,alp,0x80);
      pos_x_00 = 0.0;
      pos_y_00 = 17.0;
      DspRankersCHR('\x04',ig_menu_wrk.csr[1] + '\x04',alp);
      DspRankersCHR('\x03',ig_menu_wrk.csr[1] + '\x03',alp);
      DspRankersCHR('\x02',ig_menu_wrk.csr[1] + '\x02',alp);
      DspRankersCHR('\x01',ig_menu_wrk.csr[1] + '\x01',alp);
      CmnWindow(0xe,0,0,alp,0x80);
      PutSpriteYW(0x169,0x169,pos_x_00,pos_y_00,pos_x_00,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x16a,0x16a,pos_x_00,167.0,pos_x_00,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x16c,0x16c,pos_x_00,pos_y_00,pos_x_00,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x16d,0x16d,pos_x_00,167.0,pos_x_00,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x16b,0x16b,pos_x_00,92.0,pos_x_00,0x808080,alp_00,1.0,DAT_00355f38,0,0xff,1,0,0);
      SideBar((char)save_rank.pic_num + '\x04','\x05',0x130,ig_menu_wrk.csr[1],0x16e,alp,0,0xf);
    }
    if ((dsp == '\0') || (dsp == '\x02')) {
      DspRankersSTR('\x01',ig_menu_wrk.csr[1] + '\x01',alp);
      DspRankersSTR('\x02',ig_menu_wrk.csr[1] + '\x02',alp);
      DspRankersSTR('\x03',ig_menu_wrk.csr[1] + '\x03',alp);
      DspRankersSTR('\x04',ig_menu_wrk.csr[1] + '\x04',alp);
    }
    if (dsp == '\x03') {
      DspRankersPHT('\x01',ig_menu_wrk.csr[1] + '\x01',alp);
      DspRankersPHT('\x02',ig_menu_wrk.csr[1] + '\x02',alp);
      DspRankersPHT('\x03',ig_menu_wrk.csr[1] + '\x03',alp);
      DspRankersPHT('\x04',ig_menu_wrk.csr[1] + '\x04',alp);
    }
  }
  return;
}

static void DspRankersCHR(u_char pos, u_char rank, u_char alpha) {
  int iVar1;
  uint uVar2;
  byte alp;
  uint uVar3;
  ushort uVar4;
  float fVar5;
  float rot;
  float fVar6;
  float alp_00;
  float scl_y;
  
  uVar2 = (int)(char)pos & 0xff;
  uVar4 = (short)(char)rank & 0xff;
  uVar3 = (int)(char)alpha & 0xff;
  if (uVar4 <= (ushort)save_rank.pic_num) {
    alp = (byte)uVar3;
    if (uVar2 == 1) {
      alp_00 = (float)uVar3;
      CmnWindow(0xc,0,0,alp,0x80);
      fVar6 = 1.0;
      PutSpriteYW(0x361,0x361,52.0,90.0,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
      fVar5 = DAT_00355f3c;
      rot = -90.0;
      PutSpriteYW(0x39a,0x39d,0.0,0.0,0.0,0x808080,alp_00,fVar6,fVar6,0,0xff,1,0,0);
      scl_y = 12.0;
      PutSpriteYW(0x360,0x360,46.0,205.0,rot,0x808080,alp_00,fVar6,fVar6,0,0xff,1,0,0);
      PutSpriteYW(uVar4 + 0x355,uVar4 + 0x355,54.0,159.0,rot,0x808080,alp_00,fVar6,fVar6,0,0xff,1,0,
                  0);
      RankEngine((uchar)uVar4,0x34,0x6b,alp);
      PutSpriteYW(0x392,0x392,0.0,0.0,0.0,0x808080,alp_00,fVar5,fVar6,0,0xff,1,0,0);
      PutSpriteYW(0x393,0x393,0.0,0.0,0.0,0x808080,alp_00,fVar5,fVar6,0,0xff,1,0,0);
      PutSpriteYW(0x394,0x394,0.0,0.0,0.0,0x808080,alp_00,fVar6,scl_y,0,0xff,1,0,0);
      PutSpriteYW(0x395,0x395,0.0,0.0,0.0,0x808080,alp_00,fVar6,scl_y,0,0xff,1,0,0);
    }
    else if (1 < uVar2) {
      iVar1 = (uVar2 - 2) * 0x35;
      fVar6 = (float)uVar3;
      CmnWindow(0xd,0,(ushort)iVar1,alp,0x80);
      PutSpriteYW(0x361,0x361,39.0,(float)(iVar1 + 0x121),-90.0,0x808080,fVar6,1.0,1.0,0,0xff,1,0,0)
      ;
      PutSpriteYW(0x39d,0x39d,0.0,(float)(iVar1 + 0xc0),0.0,0x808080,fVar6,1.0,1.0,0,0xff,1,0,0);
      fVar5 = (float)(iVar1 + 0x117);
      PutSpriteYW(uVar4 + 0x355,uVar4 + 0x355,182.0,fVar5,0.0,0x808080,fVar6,1.0,1.0,0,0xff,1,0,0);
      PutSpriteYW(0x360,0x360,125.0,fVar5,0.0,0x808080,fVar6,1.0,1.0,0,0xff,1,0,0);
      RankEngine((uchar)uVar4,0x42,(ushort)iVar1 + 0x118,alp);
      PutSpriteYW(0x39e,0x39e,256.0,(float)(iVar1 + 0x116),0.0,0x808080,fVar6,1.0,1.0,0,0xff,1,0,0);
    }
  }
  return;
}

static void RankEngine(u_char rank, short int pos_x, short int pos_y, u_char alpha) {
	u_int sc;
	u_char sm;
	u_char ss;
	
  short top_label;
  uint uVar1;
  int iVar2;
  int iVar3;
  float scl_x;
  float alp;
  
  iVar2 = (int)(short)pos_x;
  iVar3 = (int)(short)pos_y;
  uVar1 = save_rank.pic_inf[((int)(char)rank & 0xffU) - 1].score;
  if (uVar1 < 0x2135) {
    if (uVar1 < 0x1d4d) {
      if (uVar1 < 0x1b59) {
        if (uVar1 < 0x1771) {
          if (uVar1 < 0x1389) {
            if (uVar1 < 0xfa1) {
              if (uVar1 < 0xdad) {
                if (uVar1 < 0xbb9) {
                  if (uVar1 < 0x9c5) {
                    if (uVar1 < 0x7d1) {
                      if (uVar1 < 0x641) {
                        if (uVar1 < 0x4b1) {
                          if (uVar1 < 0x321) {
                            menu_rank.star = '\x0e';
                            if (400 < uVar1) {
                              menu_rank.star = '\r';
                            }
                          }
                          else {
                            menu_rank.star = '\f';
                          }
                        }
                        else {
                          menu_rank.star = '\v';
                        }
                      }
                      else {
                        menu_rank.star = '\n';
                      }
                    }
                    else {
                      menu_rank.star = '\t';
                    }
                  }
                  else {
                    menu_rank.star = '\b';
                  }
                }
                else {
                  menu_rank.star = '\a';
                }
              }
              else {
                menu_rank.star = '\x06';
              }
            }
            else {
              menu_rank.star = '\x05';
            }
          }
          else {
            menu_rank.star = '\x04';
          }
        }
        else {
          menu_rank.star = '\x03';
        }
      }
      else {
        menu_rank.star = '\x02';
      }
    }
    else {
      menu_rank.star = '\x01';
    }
  }
  else {
    menu_rank.star = '\0';
  }
  uVar1 = (uint)menu_rank.star % 3;
  if (menu_rank.star < 3) {
    uVar1 = 1;
  }
  alp = (float)((int)(char)alpha & 0xff);
  scl_x = 1.0;
  top_label = menu_rank.star / 3 + 0x375;
  PutSpriteYW(top_label,top_label,(float)iVar2,(float)iVar3,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  if (uVar1 == 0) {
    PutSpriteYW(0x354,0x354,(float)(iVar2 + -1),(float)(iVar3 + -8),0.0,0x808080,alp,scl_x,scl_x,0,
                0xff,1,0,0);
    return;
  }
  if (uVar1 == 2) {
    PutSpriteYW(0x355,0x355,(float)(iVar2 + 0x14),(float)(iVar3 + -8),0.0,0x808080,alp,scl_x,scl_x,0
                ,0xff,1,0,0);
    return;
  }
  return;
}

static char SrankCHK() {
	int i;
	u_int sc;
	char rtrn;
	
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x1000000;
  puVar2 = &save_rank.pic_inf[0].score;
  iVar1 = 9;
  do {
    iVar1 = iVar1 + -1;
    if (7000 < *puVar2) {
      iVar4 = iVar3 >> 0x18;
      iVar3 = iVar3 + 0x1000000;
    }
    puVar2 = puVar2 + 7;
  } while (-1 < iVar1);
  return (char)iVar4;
}

static void DspRankersSTR(u_char pos, u_char rank, u_char alpha) {
	int i;
	DISP_STR ds;
	u_char obj_num;
	u_short obj_py[4][3];
	STR_DAT dmy_str;
	
  undefined *puVar1;
  ulong *puVar2;
  char *pcVar3;
  ushort uVar4;
  short (*pasVar5) [2];
  byte alpha_00;
  ushort alpha_01;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  DISP_STR ds;
  short obj_py [4] [3];
  STR_DAT dmy_str;
  
  uVar9 = (int)(char)alpha & 0xff;
  uVar8 = (int)(char)rank & 0xff;
  puVar1 = (undefined *)((int)obj_py[1] + 1);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b40 >> (7 - uVar7) * 8;
  obj_py._0_8_ = DAT_00350b40;
  puVar1 = (undefined *)((int)obj_py[2] + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b48 >> (7 - uVar7) * 8;
  obj_py._8_8_ = DAT_00350b48;
  puVar1 = (undefined *)((int)obj_py[3] + 5);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b50 >> (7 - uVar7) * 8;
  obj_py._16_8_ = DAT_00350b50;
  puVar1 = (undefined *)((int)&dmy_str.pos_x + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b58 >> (7 - uVar7) * 8;
  dmy_str._0_8_ = DAT_00350b58;
  puVar1 = (undefined *)((int)&dmy_str.type + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b60 >> (7 - uVar7) * 8;
  dmy_str._8_8_ = DAT_00350b60;
  puVar1 = (undefined *)((int)&dmy_str.g + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b68 >> (7 - uVar7) * 8;
  dmy_str._16_8_ = DAT_00350b68;
  puVar1 = (undefined *)((int)&dmy_str.alpha + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b70 >> (7 - uVar7) * 8;
  dmy_str._24_8_ = DAT_00350b70;
  dmy_str.pri = DAT_00350b78;
  uVar4 = (short)(char)pos & 0xff;
  if (uVar8 <= (ushort)save_rank.pic_num) {
    alpha_01 = (ushort)uVar9;
    if (uVar4 == 1) {
      alpha_00 = (byte)uVar9;
      PutStringYW(0x27,0,0xfe,0x22,0x808080,alpha_00,0x14000,0);
      PutNumberYW(0,(uint)(ushort)save_rank.best_score,0x1ad,0x23,1.0,1.0,0x808080,alpha_01,0x14000,
                  7,0);
      iVar6 = 2;
      PutNumberYW(0,save_rank.pic_inf[uVar8 - 1].score,0x1ad,0x5e,1.0,1.0,0x808080,alpha_01,0x14000,
                  7,0);
      PutDate((PICTURE_WRK *)(&rel_csr.field_0xc + uVar8 * 0x1c),0x17c,0x7b,alpha_01,0x14000);
      PutStringYW(0x1e,save_rank.pic_inf[uVar8 - 1].room,0x189,0x99,0x808080,alpha_00,0x14000,0);
      uVar7 = 0;
      pasVar5 = save_rank.pic_inf[uVar8 - 1].subject;
      do {
        if ((*pasVar5)[0] != 0) {
          uVar7 = uVar7 + 1 & 0xff;
        }
        iVar6 = iVar6 + -1;
        pasVar5 = pasVar5[1];
      } while (-1 < iVar6);
      if (uVar7 == 0) {
        PutStringYW(0x21,3,0x1c0,obj_py[0][0] + 0xb9,0x808080,alpha_00,0x14000,0);
      }
      else if (uVar7 != 0) {
        iVar6 = uVar7 * 6;
        pasVar5 = save_rank.pic_inf[uVar8 - 1].subject;
        do {
          if ((*pasVar5)[0] != 0) {
            pcVar3 = GetSubjectNameAddr((*pasVar5)[0],(*pasVar5)[1],
                                        (ushort)save_rank.pic_inf[uVar8 - 1].msn_no);
            dmy_str._0_8_ = dmy_str._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar3);
            CopyStrDToStr(&ds,&dmy_str);
            ds.pos_x = 0x17e;
            ds.r = 0x80;
            ds.pos_y = *(ushort *)((int)obj_py + iVar6) + 0xb9;
            ds.g = 0x80;
            ds.b = 0x80;
            ds.pri = 0x14000;
            ds.alpha = uVar9;
            SetMessageV2(&ds);
          }
          iVar6 = iVar6 + 2;
          uVar7 = uVar7 - 1;
          pasVar5 = pasVar5[1];
        } while (uVar7 != 0);
      }
    }
    else if (1 < uVar4) {
      PutNumberYW(0,save_rank.pic_inf[uVar8 - 1].score,0x1ad,(uVar4 - 2) * 0x35 + 0x11c,1.0,1.0,
                  0x808080,alpha_01,0x14000,7,0);
    }
  }
  return;
}

static void DspRankersPHT(u_char pos, u_char rank, u_char alpha) {
	u_char pic_no;
	float scale;
	
  byte bVar1;
  uchar alp;
  uint uVar2;
  int n;
  uint uVar3;
  float fVar4;
  float alp_00;
  
  uVar2 = (int)(char)pos & 0xff;
  if (((int)(char)rank & 0xffU) <= (uint)(ushort)save_rank.pic_num) {
    DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
    uVar3 = (uint)save_rank.pic_inf[((int)(char)rank & 0xffU) - 1].adr_no;
    alp = (uchar)((int)(char)alpha & 0xffU);
    if (uVar2 == 1) {
      n = uVar3 + 0x18;
      if (ig_menu_wrk.csr[1] != menu_rank.csr_bak) {
        menu_rank.csr_bak = ig_menu_wrk.csr[1];
        ReqPhotoExpand();
      }
      alp_00 = (float)((int)(char)alpha & 0xffU);
      fVar4 = 1.0;
      UncompressPhoto(n);
      PolySquareYW(101.0,106.0,0xd8,0x90,0,alp_00,fVar4,fVar4,0x1f000,0,0,0);
      bVar1 = CheckPhotoExpandEnd();
      if (bVar1 != 0) {
        DrawPhotoFromPhotoWrk(n,0x1e000,0,0x65,0x6a,0xd8,0x90,alp);
      }
      if (menu_rank.star < 3) {
        if ((menu_rank.cnt < 0x1e) && (menu_rank.exist_s_rank == '\0')) {
          fVar4 = motLinearSupValue(20.0,fVar4,'\x01',(uint)menu_rank.cnt,0x1e);
          menu_rank.cnt = menu_rank.cnt + 1;
          PutSpriteYW(0x39f,0x39f,0.0,0.0,((float)(uint)menu_rank.cnt * DAT_00355f40) / 30.0,
                      0x808080,alp_00,fVar4,fVar4,0,0xff,1,1,0);
        }
        else {
          PutSpriteYW(0x39f,0x39f,0.0,0.0,-25.0,0x808080,alp_00,1.0,1.0,0,0xff,1,1,0);
          menu_rank.exist_s_rank = '\x01';
        }
      }
      else {
        menu_rank.cnt = '\0';
      }
    }
    else if (1 < uVar2) {
      DrawSPhotoFromSmallPhotoArea2
                (uVar3 + 0x18,0x1e000,0,0x102,(uVar2 - 2) * 0x35 + 0x118,0x30,0x20,alp);
    }
  }
  return;
}

static void DspTopRankBig(u_char dsp, short int pos_x, short int pos_y, u_char alpha) {
  if (alpha != '\0') {
    if (dsp < 2) {
      DspRankBigCHR(ig_menu_wrk.csr[1] + '\x01',alpha);
    }
    if ((dsp == '\0') || (dsp == '\x02')) {
      DspRankBigSTR(ig_menu_wrk.csr[1] + '\x01',alpha);
    }
    if (dsp == '\x03') {
      DspRankBigPHT(ig_menu_wrk.csr[1] + '\x01',alpha);
    }
  }
  return;
}

static void DspRankBigCHR(u_char rank, u_char alpha) {
	int rgb;
	
  float scl_x;
  short top_label;
  byte alp;
  float scl_y;
  float pos_y;
  float scl_x_00;
  float alp_00;
  int rgb;
  
  scl_x = DAT_00355f44;
  alp_00 = (float)((int)(char)alpha & 0xffU);
  scl_x_00 = 1.0;
  PutSpriteYW(0x362,0x362,0.0,0.0,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  scl_y = 15.875;
  PutSpriteYW(0x363,0x363,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  pos_y = DAT_00355f48;
  PutSpriteYW(0x364,0x364,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x365,0x365,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x366,0x366,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x367,0x367,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x368,0x368,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x369,0x369,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x38e,0x38e,0.0,0.0,0.0,0x808080,alp_00,scl_x,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x38f,0x38f,0.0,0.0,0.0,0x808080,alp_00,scl_x,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x390,0x390,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_y,0,0xff,1,0,0);
  PutSpriteYW(0x391,0x391,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_y,0,0xff,1,0,0);
  alp = (byte)((int)(char)alpha & 0xffU);
  CmnWindow(0xb,0,0,alp,0x80);
  CmnWindow(6,0,0,alp,0x80);
  PutSpriteYW(0x396,0x399,0.0,0.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  top_label = ((short)(char)rank & 0xffU) + 0x37b;
  PutSpriteYW(top_label,top_label,63.0,114.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x386,0x386,36.0,114.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x39e,0x39e,38.0,pos_y,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  PutSpriteYW(0x361,0x361,DAT_00355f4c,107.0,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  RankEngine((uchar)((short)(char)rank & 0xffU),0x22e,0x7c,alp);
  PutSpriteYW(0x39e,0x39e,DAT_00355f50,pos_y,0.0,0x808080,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  if ((ushort)save_rank.pic_num < 2) {
    FlashStarYW(&flsh,'@',0xc0,'<',0xff);
    CLRtoRGB(&rgb,flsh.alpha,flsh.alpha,flsh.alpha);
  }
  else {
    FlashStarYW(&flsh,'@',0xc0,'<','\0');
    CLRtoRGB(&rgb,flsh.alpha,flsh.alpha,flsh.alpha);
    PutSpriteYW(0x21b,0x21b,scl_x_00,16.0,0.0,rgb,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
    PutSpriteYW(0x21c,0x21c,-3.0,16.0,0.0,rgb,alp_00,scl_x_00,scl_x_00,0,0xff,1,0,0);
  }
  return;
}

static void DspRankBigSTR(u_char rank, u_char alpha) {
	int i;
	DISP_STR ds;
	u_char obj_num;
	u_short obj_py[4][3];
	STR_DAT dmy_str;
	
  undefined *puVar1;
  ulong *puVar2;
  char *pcVar3;
  byte alpha_00;
  ushort alpha_01;
  short (*pasVar4) [2];
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  DISP_STR ds;
  short obj_py [4] [3];
  STR_DAT dmy_str;
  
  uVar8 = (int)(char)alpha & 0xff;
  uVar5 = (int)(char)rank & 0xff;
  puVar1 = (undefined *)((int)obj_py[1] + 1);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b40 >> (7 - uVar7) * 8;
  obj_py._0_8_ = DAT_00350b40;
  puVar1 = (undefined *)((int)obj_py[2] + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b48 >> (7 - uVar7) * 8;
  obj_py._8_8_ = DAT_00350b48;
  puVar1 = (undefined *)((int)obj_py[3] + 5);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b50 >> (7 - uVar7) * 8;
  obj_py._16_8_ = DAT_00350b50;
  iVar6 = 2;
  puVar1 = (undefined *)((int)&dmy_str.pos_x + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b58 >> (7 - uVar7) * 8;
  dmy_str._0_8_ = DAT_00350b58;
  puVar1 = (undefined *)((int)&dmy_str.type + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b60 >> (7 - uVar7) * 8;
  dmy_str._8_8_ = DAT_00350b60;
  puVar1 = (undefined *)((int)&dmy_str.g + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b68 >> (7 - uVar7) * 8;
  dmy_str._16_8_ = DAT_00350b68;
  puVar1 = (undefined *)((int)&dmy_str.alpha + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_00350b70 >> (7 - uVar7) * 8;
  dmy_str._24_8_ = DAT_00350b70;
  dmy_str.pri = DAT_00350b78;
  alpha_00 = (byte)uVar8;
  PutStringYW(0x27,0,0xfe,0x22,0x808080,alpha_00,0x14000,0);
  alpha_01 = (ushort)uVar8;
  PutNumberYW(0,(uint)(ushort)save_rank.best_score,0x1ad,0x23,1.0,1.0,0x808080,alpha_01,0x14000,7,0)
  ;
  PutDate((PICTURE_WRK *)(&rel_csr.field_0xc + uVar5 * 0x1c),0x182,0x155,alpha_01,0x14000);
  PutStringYW(0x1e,save_rank.pic_inf[uVar5 - 1].room,399,0x172,0x808080,alpha_00,0x14000,0);
  PutNumberYW(0,save_rank.pic_inf[uVar5 - 1].score,0x1b3,0x18e,1.0,1.0,0x808080,alpha_01,0x14000,7,0
             );
  uVar7 = 0;
  pasVar4 = save_rank.pic_inf[uVar5 - 1].subject;
  do {
    if ((*pasVar4)[0] != 0) {
      uVar7 = uVar7 + 1 & 0xff;
    }
    iVar6 = iVar6 + -1;
    pasVar4 = pasVar4[1];
  } while (-1 < iVar6);
  if (uVar7 == 0) {
    PutStringYW(0x21,3,0xb4,obj_py[0][0] + 0x15b,0x808080,alpha_00,0x14000,0);
  }
  else if (uVar7 != 0) {
    iVar6 = uVar7 * 6;
    pasVar4 = save_rank.pic_inf[uVar5 - 1].subject;
    do {
      if ((*pasVar4)[0] != 0) {
        pcVar3 = GetSubjectNameAddr((*pasVar4)[0],(*pasVar4)[1],
                                    (ushort)save_rank.pic_inf[uVar5 - 1].msn_no);
        dmy_str._0_8_ = dmy_str._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar3);
        CopyStrDToStr(&ds,&dmy_str);
        ds.pos_x = 0x66;
        ds.r = 0x80;
        ds.pos_y = *(ushort *)((int)obj_py + iVar6) + 0x15b;
        ds.g = 0x80;
        ds.b = 0x80;
        ds.pri = 0x14000;
        ds.alpha = uVar8;
        SetMessageV2(&ds);
      }
      iVar6 = iVar6 + 2;
      uVar7 = uVar7 - 1;
      pasVar4 = pasVar4[1];
    } while (uVar7 != 0);
  }
  return;
}

static void DspRankBigPHT(u_char rank, u_char alpha) {
	u_char pic_no;
	signed char tmp;
	
  byte bVar1;
  uchar alp;
  int iVar2;
  uint uVar3;
  
  uVar3 = (int)(char)rank & 0xff;
  DrawSPhotoFromSmallPhotoArea(0,0x7f000,0,0,0,0);
  bVar1 = save_rank.pic_inf[uVar3 - 1].adr_no;
  if (ig_menu_wrk.csr[1] != menu_rank.csr_bak) {
    menu_rank.csr_bak = ig_menu_wrk.csr[1];
    ReqPhotoExpand();
  }
  iVar2 = bVar1 + 0x18;
  UncompressPhoto(iVar2);
  PolySquareYW(128.0,77.0,0x180,0xff,0,(float)((int)(char)alpha & 0xffU),1.0,1.0,0x1f000,0,0,0);
  bVar1 = CheckPhotoExpandEnd();
  alp = (uchar)((int)(char)alpha & 0xffU);
  if (bVar1 != 0) {
    DrawPhotoFromPhotoWrk(iVar2,0x1e000,0,0x80,0x4d,0x180,0xff,alp);
  }
  if (1 < (ushort)save_rank.pic_num) {
    iVar2 = (int)((uVar3 - 2) * 0x1000000) >> 0x18;
    if (iVar2 < 0) {
      iVar2 = (int)(((byte)save_rank.pic_num - 1) * 0x1000000) >> 0x18;
    }
    DrawSPhotoFromSmallPhotoArea2
              (save_rank.pic_inf[iVar2].adr_no + 0x18,0x1e000,0,0x28,0x105,0x30,0x20,alp);
    iVar2 = (int)(char)uVar3;
    if ((int)((ushort)save_rank.pic_num - 1) < iVar2) {
      iVar2 = 0;
    }
    DrawSPhotoFromSmallPhotoArea2
              (save_rank.pic_inf[iVar2].adr_no + 0x18,0x1e000,0,0x228,0x105,0x30,0x20,alp);
    return;
  }
  return;
}

static void RankingChkNow() {
	int i;
	int j;
	int tmp;
	PFILE_WRK tmp_srt;
	PICTURE_WRK tmp_pic;
	
  short (*pasVar1) [2];
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uchar *puVar9;
  PFILE_WRK *pPVar10;
  SAVE_RANK *pSVar11;
  PICTURE_WRK *pPVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  sceCdCLOCK sVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  PFILE_WRK tmp_srt;
  PICTURE_WRK tmp_pic;
  ulong uVar18;
  ulong uVar23;
  
  tmp_pic.subject._4_8_ = (ulong)(int)&tmp_srt;
  memset(&save_rank,-1,0x118);
  pPVar10 = &pfile_wrk;
  do {
    uVar15 = *(ulong *)pPVar10;
    tmp_pic._16_8_ = *(ulong *)pPVar10->pic[0].subject;
    uVar16 = *(ulong *)pPVar10->pic[0].subject[2];
    sVar19 = pPVar10->pic[0].time;
    puVar13 = (ulong *)tmp_pic.subject._4_8_;
    *puVar13 = uVar15;
    puVar13[1] = tmp_pic._16_8_;
    puVar13[2] = uVar16;
    *(sceCdCLOCK *)(puVar13 + 3) = sVar19;
    pPVar10 = (PFILE_WRK *)(pPVar10->pic + 1);
    tmp_pic.subject._4_8_ = (ulong)(int)(puVar13 + 4);
  } while (pPVar10 != (PFILE_WRK *)&cam_custom_wrk);
  if (0 < (int)(tmp_srt.pic_num - 1)) {
    iVar21 = 0;
    uVar16 = 0;
    do {
      iVar20 = (int)uVar16;
      iVar22 = iVar20 + 1;
      uVar23 = (ulong)iVar22;
      uVar8 = (int)tmp_srt.pic[0].subject + iVar21 + 3;
      uVar4 = uVar8 & 7;
      puVar9 = &((PICTURE_WRK *)tmp_srt.pic[0].subject[-1])->adr_no + iVar21;
      uVar5 = (uint)puVar9 & 7;
      tmp_pic._0_8_ =
           (*(long *)(uVar8 - uVar4) << (7 - uVar4) * 8 |
           tmp_pic.subject._4_8_ & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8
           | *(ulong *)(puVar9 + -uVar5) >> uVar5 * 8;
      uVar8 = (int)tmp_srt.pic[0].subject[2] + iVar21 + 3;
      uVar5 = uVar8 & 7;
      uVar4 = (int)tmp_srt.pic[0].subject[1] + iVar21;
      uVar6 = uVar4 & 7;
      uVar15 = (*(long *)(uVar8 - uVar5) << (7 - uVar5) * 8 |
               tmp_pic._16_8_ & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)(uVar4 - uVar6) >> uVar6 * 8;
      puVar9 = &((sceCdCLOCK *)tmp_srt.pic[0].subject[4])->stat + iVar21 + 3;
      uVar4 = (uint)puVar9 & 7;
      uVar8 = (int)tmp_srt.pic[0].subject[3] + iVar21;
      uVar5 = uVar8 & 7;
      tmp_pic._16_8_ =
           (*(long *)(puVar9 + -uVar4) << (7 - uVar4) * 8 |
           (ulong)sVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)(uVar8 - uVar5) >> uVar5 * 8;
      tmp_pic.time._4_4_ = *(undefined4 *)((int)tmp_srt.pic[0].subject[5] + iVar21);
      puVar3 = (undefined *)((int)tmp_pic.subject + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar8) * 8;
      puVar3 = (undefined *)((int)tmp_pic.subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | uVar15 >> (7 - uVar8) * 8;
      tmp_pic.subject._4_8_ = uVar15;
      puVar9 = &tmp_pic.time.hour;
      uVar8 = (uint)puVar9 & 7;
      puVar9 = puVar9 + -uVar8;
      *(ulong *)puVar9 =
           *(ulong *)puVar9 & -1L << (uVar8 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar8) * 8;
      uVar18 = uVar23;
      iVar21 = iVar20;
      if ((long)uVar23 < (long)(ulong)tmp_srt.pic_num) {
        uVar15 = (ulong)(iVar22 * 0x1c);
        do {
          iVar21 = (int)uVar15;
          uVar14 = (ulong)(tmp_pic.score < *(uint *)((int)tmp_srt.pic[0].subject[3] + iVar21));
          if (uVar14 != 0) {
            uVar8 = (int)tmp_srt.pic[0].subject + iVar21 + 3;
            uVar4 = uVar8 & 7;
            puVar9 = &((PICTURE_WRK *)tmp_srt.pic[0].subject[-1])->adr_no + iVar21;
            uVar5 = (uint)puVar9 & 7;
            tmp_pic._0_8_ =
                 (*(long *)(uVar8 - uVar4) << (7 - uVar4) * 8 |
                 uVar14 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)(puVar9 + -uVar5) >> uVar5 * 8;
            uVar8 = (int)tmp_srt.pic[0].subject[2] + iVar21 + 3;
            uVar5 = uVar8 & 7;
            uVar4 = (int)tmp_srt.pic[0].subject[1] + iVar21;
            uVar6 = uVar4 & 7;
            tmp_pic.subject._4_8_ =
                 (*(long *)(uVar8 - uVar5) << (7 - uVar5) * 8 |
                 uVar15 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)(uVar4 - uVar6) >> uVar6 * 8;
            puVar9 = &((sceCdCLOCK *)tmp_srt.pic[0].subject[4])->stat + iVar21 + 3;
            uVar4 = (uint)puVar9 & 7;
            uVar8 = (int)tmp_srt.pic[0].subject[3] + iVar21;
            uVar5 = uVar8 & 7;
            tmp_pic._16_8_ =
                 (*(long *)(puVar9 + -uVar4) << (7 - uVar4) * 8 |
                 (ulong)tmp_srt.pic_num & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                 -1L << (8 - uVar5) * 8 | *(ulong *)(uVar8 - uVar5) >> uVar5 * 8;
            tmp_pic.time._4_4_ = *(undefined4 *)((int)tmp_srt.pic[0].subject[5] + iVar21);
            puVar3 = (undefined *)((int)tmp_pic.subject + 3);
            uVar8 = (uint)puVar3 & 7;
            puVar13 = (ulong *)(puVar3 + -uVar8);
            *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar8) * 8;
            puVar3 = (undefined *)((int)tmp_pic.subject[2] + 3);
            uVar8 = (uint)puVar3 & 7;
            puVar13 = (ulong *)(puVar3 + -uVar8);
            *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar8) * 8;
            puVar9 = &tmp_pic.time.hour;
            uVar8 = (uint)puVar9 & 7;
            puVar9 = puVar9 + -uVar8;
            *(ulong *)puVar9 =
                 *(ulong *)puVar9 & -1L << (uVar8 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar8) * 8;
            uVar16 = uVar18;
          }
          iVar21 = (int)uVar16;
          iVar17 = (int)uVar18 + 1;
          uVar18 = (ulong)iVar17;
          uVar15 = (ulong)(iVar17 * 0x1c);
        } while ((long)uVar18 < (long)(ulong)tmp_srt.pic_num);
      }
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar20].subject + 3);
      uVar8 = (uint)puVar3 & 7;
      uVar4 = (uint)(tmp_srt.pic + iVar20) & 7;
      uVar16 = (*(long *)(puVar3 + -uVar8) << (7 - uVar8) * 8 |
               uVar15 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)(tmp_srt.pic + iVar20) - uVar4) >> uVar4 * 8;
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar20].subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      pasVar1 = tmp_srt.pic[iVar20].subject[1];
      uVar4 = (uint)pasVar1 & 7;
      uVar18 = (*(long *)(puVar3 + -uVar8) << (7 - uVar8) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)pasVar1 - uVar4) >> uVar4 * 8;
      puVar9 = &tmp_srt.pic[iVar20].time.hour;
      uVar8 = (uint)puVar9 & 7;
      puVar2 = &tmp_srt.pic[iVar20].score;
      uVar4 = (uint)puVar2 & 7;
      sVar19 = (sceCdCLOCK)
               ((*(long *)(puVar9 + -uVar8) << (7 - uVar8) * 8 |
                (ulong)tmp_srt.pic_num & 0xffffffffffffffffU >> (uVar8 + 1) * 8) &
                -1L << (8 - uVar4) * 8 | *(ulong *)((int)puVar2 - uVar4) >> uVar4 * 8);
      iVar17 = *(int *)&tmp_srt.pic[iVar20].time.pad;
      uVar15 = (ulong)iVar17;
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar21].subject + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | uVar16 >> (7 - uVar8) * 8;
      uVar8 = (uint)(tmp_srt.pic + iVar21) & 7;
      puVar13 = (ulong *)((int)(tmp_srt.pic + iVar21) - uVar8);
      *puVar13 = uVar16 << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar21].subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | uVar18 >> (7 - uVar8) * 8;
      pasVar1 = tmp_srt.pic[iVar21].subject[1];
      uVar8 = (uint)pasVar1 & 7;
      puVar13 = (ulong *)((int)pasVar1 - uVar8);
      *puVar13 = uVar18 << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar9 = &tmp_srt.pic[iVar21].time.hour;
      uVar8 = (uint)puVar9 & 7;
      puVar9 = puVar9 + -uVar8;
      *(ulong *)puVar9 =
           *(ulong *)puVar9 & -1L << (uVar8 + 1) * 8 | (ulong)sVar19 >> (7 - uVar8) * 8;
      puVar2 = &tmp_srt.pic[iVar21].score;
      uVar8 = (uint)puVar2 & 7;
      puVar13 = (ulong *)((int)puVar2 - uVar8);
      *puVar13 = (long)sVar19 << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      *(int *)&tmp_srt.pic[iVar21].time.pad = iVar17;
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar20].subject + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | tmp_pic._0_8_ >> (7 - uVar8) * 8;
      uVar8 = (uint)(tmp_srt.pic + iVar20) & 7;
      puVar13 = (ulong *)((int)(tmp_srt.pic + iVar20) - uVar8);
      *puVar13 = tmp_pic._0_8_ << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar3 = (undefined *)((int)tmp_srt.pic[iVar20].subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | tmp_pic.subject._4_8_ >> (7 - uVar8) * 8;
      pasVar1 = tmp_srt.pic[iVar20].subject[1];
      uVar8 = (uint)pasVar1 & 7;
      puVar13 = (ulong *)((int)pasVar1 - uVar8);
      *puVar13 = tmp_pic.subject._4_8_ << uVar8 * 8 |
                 *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar9 = &tmp_srt.pic[iVar20].time.hour;
      uVar8 = (uint)puVar9 & 7;
      puVar9 = puVar9 + -uVar8;
      *(ulong *)puVar9 =
           *(ulong *)puVar9 & -1L << (uVar8 + 1) * 8 | tmp_pic._16_8_ >> (7 - uVar8) * 8;
      puVar2 = &tmp_srt.pic[iVar20].score;
      uVar8 = (uint)puVar2 & 7;
      puVar13 = (ulong *)((int)puVar2 - uVar8);
      *puVar13 = tmp_pic._16_8_ << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      *(undefined4 *)&tmp_srt.pic[iVar20].time.pad = tmp_pic.time._4_4_;
      iVar21 = iVar22 * 0x1c;
      uVar16 = uVar23;
    } while ((long)uVar23 < (long)(int)(tmp_srt.pic_num - 1));
  }
  if (tmp_srt.pic_num < 10) {
    save_rank.pic_num = (short)tmp_srt.pic_num;
  }
  else {
    save_rank.pic_num = 10;
  }
  pSVar11 = &save_rank;
  uVar16 = (ulong)(ushort)save_rank.pic_num;
  iVar21 = 0;
  if (uVar16 != 0) {
    pPVar12 = tmp_srt.pic;
    do {
      puVar3 = (undefined *)((int)pPVar12->subject + 3);
      uVar8 = (uint)puVar3 & 7;
      uVar4 = (uint)pPVar12 & 7;
      sVar19 = (sceCdCLOCK)
               ((*(long *)(puVar3 + -uVar8) << (7 - uVar8) * 8 |
                (ulong)sVar19 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)pPVar12 - uVar4) >> uVar4 * 8);
      puVar3 = (undefined *)((int)pPVar12->subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      uVar4 = (uint)pPVar12->subject[1] & 7;
      uVar15 = (*(long *)(puVar3 + -uVar8) << (7 - uVar8) * 8 |
               uVar15 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)pPVar12->subject[1] - uVar4) >> uVar4 * 8;
      puVar9 = &(pPVar12->time).hour;
      uVar8 = (uint)puVar9 & 7;
      uVar4 = (uint)&pPVar12->score & 7;
      uVar16 = (*(long *)(puVar9 + -uVar8) << (7 - uVar8) * 8 |
               uVar16 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&pPVar12->score - uVar4) >> uVar4 * 8;
      uVar7 = *(undefined4 *)&(pPVar12->time).pad;
      puVar3 = (undefined *)((int)pSVar11->pic_inf[0].subject + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | (ulong)sVar19 >> (7 - uVar8) * 8;
      uVar8 = (uint)pSVar11 & 7;
      *(ulong *)((int)pSVar11 - uVar8) =
           (long)sVar19 << uVar8 * 8 |
           *(ulong *)((int)pSVar11 - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar3 = (undefined *)((int)pSVar11->pic_inf[0].subject[2] + 3);
      uVar8 = (uint)puVar3 & 7;
      puVar13 = (ulong *)(puVar3 + -uVar8);
      *puVar13 = *puVar13 & -1L << (uVar8 + 1) * 8 | uVar15 >> (7 - uVar8) * 8;
      pasVar1 = pSVar11->pic_inf[0].subject[1];
      uVar8 = (uint)pasVar1 & 7;
      puVar13 = (ulong *)((int)pasVar1 - uVar8);
      *puVar13 = uVar15 << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar9 = &pSVar11->pic_inf[0].time.hour;
      uVar8 = (uint)puVar9 & 7;
      puVar9 = puVar9 + -uVar8;
      *(ulong *)puVar9 = *(ulong *)puVar9 & -1L << (uVar8 + 1) * 8 | uVar16 >> (7 - uVar8) * 8;
      puVar2 = &pSVar11->pic_inf[0].score;
      uVar8 = (uint)puVar2 & 7;
      puVar13 = (ulong *)((int)puVar2 - uVar8);
      *puVar13 = uVar16 << uVar8 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      iVar21 = iVar21 + 1;
      *(undefined4 *)&pSVar11->pic_inf[0].time.pad = uVar7;
      pSVar11 = (SAVE_RANK *)(pSVar11->pic_inf + 1);
      uVar16 = (ulong)(iVar21 < (int)(uint)(ushort)save_rank.pic_num);
      pPVar12 = pPVar12 + 1;
    } while (uVar16 != 0);
  }
  save_rank.best_score = (short)save_rank.pic_inf[0].score;
  return;
}

void RankingChkMem(PICTURE_WRK new_pic) {
	int i;
	int j;
	int same_pic;
	int del_no;
	int del_pic_id;
	int copy_flg;
	
  uchar *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong in_v0;
  int iVar12;
  ulong in_v1;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  ulong in_a3;
  ulong in_t1;
  ulong in_t2;
  ulong in_t3;
  int iVar16;
  PICTURE_WRK *pPVar17;
  undefined local_70 [7];
  undefined auStack_69 [8];
  undefined auStack_61 [8];
  undefined8 uStack_59;
  
  iVar16 = 0;
  bVar9 = false;
  puVar2 = (undefined *)((int)new_pic->subject + 3);
  uVar11 = (uint)puVar2 & 7;
  uVar15 = (uint)new_pic & 7;
  _local_70 = (*(long *)(puVar2 + -uVar11) << (7 - uVar11) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar15) * 8 |
              *(ulong *)((int)new_pic - uVar15) >> uVar15 * 8;
  puVar2 = (undefined *)((int)new_pic->subject[2] + 3);
  uVar11 = (uint)puVar2 & 7;
  uVar15 = (uint)new_pic->subject[1] & 7;
  register0x00000030 =
       (undefined  [8])
       ((*(long *)(puVar2 + -uVar11) << (7 - uVar11) * 8 |
        in_v1 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar15) * 8 |
       *(ulong *)((int)new_pic->subject[1] - uVar15) >> uVar15 * 8);
  puVar1 = &(new_pic->time).hour;
  uVar11 = (uint)puVar1 & 7;
  uVar15 = (uint)&new_pic->score & 7;
  register0x00000070 =
       (undefined  [8])
       ((*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
        in_a3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar15) * 8 |
       *(ulong *)((int)&new_pic->score - uVar15) >> uVar15 * 8);
  uStack_59._1_4_ = *(undefined4 *)&(new_pic->time).pad;
  puVar2 = local_70 + 7;
  uVar11 = (uint)puVar2 & 7;
  *(ulong *)(puVar2 + -uVar11) =
       *(ulong *)(puVar2 + -uVar11) & -1L << (uVar11 + 1) * 8 | _local_70 >> (7 - uVar11) * 8;
  uVar11 = (uint)auStack_61 & 7;
  puVar6 = (ulong *)(auStack_61 + -uVar11);
  *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | (ulong)register0x00000030 >> (7 - uVar11) * 8;
  uVar11 = (uint)&uStack_59 & 7;
  puVar6 = (ulong *)((int)&uStack_59 - uVar11);
  *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | (ulong)register0x00000070 >> (7 - uVar11) * 8;
  if ((ushort)save_rank.pic_num != 0) {
    bVar7 = true;
    if (save_rank.pic_inf[0].score < auStack_61._1_4_) goto LAB_001f05ac;
    puVar13 = &save_rank.pic_inf[0].score;
    iVar16 = 1;
    while ((puVar13 = puVar13 + 7, iVar16 < (int)(uint)(ushort)save_rank.pic_num &&
           (auStack_61._1_4_ <= *puVar13))) {
      iVar16 = iVar16 + 1;
    }
  }
  bVar7 = iVar16 < 10;
LAB_001f05ac:
  if (bVar7) {
    uVar11 = CheckSamePic((PICTURE_WRK *)local_70);
    if (uVar11 == 0xffffffff) {
      bVar9 = true;
      uVar11 = 9;
      if ((ushort)save_rank.pic_num != 10) {
        uVar11 = (uint)(ushort)save_rank.pic_num;
      }
    }
    else if (auStack_61._1_4_ <= save_rank.pic_inf[uVar11].score) {
      return;
    }
    if (iVar16 == 0) {
      save_rank.best_score = auStack_61._1_2_;
    }
    if ((save_rank.pic_num == 10) || (!bVar9)) {
      uVar15 = (uint)save_rank.pic_inf[uVar11].adr_no;
    }
    else {
      uVar15 = (uint)(ushort)save_rank.pic_num;
    }
    iVar14 = 9;
    if (iVar16 < 9) {
      bVar7 = (int)uVar11 < 9;
      iVar12 = iVar14;
      do {
        iVar14 = iVar12 + -1;
        if (!bVar7) {
          iVar8 = iVar12 * 0x1c;
          iVar10 = iVar12 * 0x1c;
          uVar3 = iVar10 + 0x33f25bU & 7;
          uVar4 = (uint)(save_rank.pic_inf + iVar12 + -1) & 7;
          in_t1 = (*(long *)((iVar10 + 0x33f25bU) - uVar3) << (7 - uVar3) * 8 |
                  in_t1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                  *(ulong *)((int)(save_rank.pic_inf + iVar12 + -1) - uVar4) >> uVar4 * 8;
          uVar3 = iVar10 + 0x33f263U & 7;
          uVar4 = iVar10 + 0x33f25cU & 7;
          in_t2 = (*(long *)((iVar10 + 0x33f263U) - uVar3) << (7 - uVar3) * 8 |
                  in_t2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                  *(ulong *)((iVar10 + 0x33f25cU) - uVar4) >> uVar4 * 8;
          uVar3 = iVar10 + 0x33f26bU & 7;
          uVar4 = iVar10 + 0x33f264U & 7;
          in_t3 = (*(long *)((iVar10 + 0x33f26bU) - uVar3) << (7 - uVar3) * 8 |
                  in_t3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                  *(ulong *)((iVar10 + 0x33f264U) - uVar4) >> uVar4 * 8;
          uVar5 = *(undefined4 *)&save_rank.pic_inf[iVar12 + -1].time.pad;
          uVar3 = iVar8 + 0x33f277U & 7;
          puVar6 = (ulong *)((iVar8 + 0x33f277U) - uVar3);
          *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t1 >> (7 - uVar3) * 8;
          uVar3 = (uint)(save_rank.pic_inf + iVar12) & 7;
          puVar6 = (ulong *)((int)(save_rank.pic_inf + iVar12) - uVar3);
          *puVar6 = in_t1 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          uVar3 = iVar8 + 0x33f27fU & 7;
          puVar6 = (ulong *)((iVar8 + 0x33f27fU) - uVar3);
          *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t2 >> (7 - uVar3) * 8;
          uVar3 = iVar8 + 0x33f278U & 7;
          puVar6 = (ulong *)((iVar8 + 0x33f278U) - uVar3);
          *puVar6 = in_t2 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          uVar3 = iVar8 + 0x33f287U & 7;
          puVar6 = (ulong *)((iVar8 + 0x33f287U) - uVar3);
          *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t3 >> (7 - uVar3) * 8;
          uVar3 = iVar8 + 0x33f280U & 7;
          puVar6 = (ulong *)((iVar8 + 0x33f280U) - uVar3);
          *puVar6 = in_t3 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          *(undefined4 *)&save_rank.pic_inf[iVar12].time.pad = uVar5;
        }
        bVar7 = (int)uVar11 < iVar14;
        iVar12 = iVar14;
      } while (iVar16 < iVar14);
    }
    iVar16 = iVar14 * 0x1c;
    pPVar17 = save_rank.pic_inf + iVar14;
    uVar11 = iVar16 + 0x33f277U & 7;
    puVar6 = (ulong *)((iVar16 + 0x33f277U) - uVar11);
    *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | _local_70 >> (7 - uVar11) * 8;
    uVar11 = (uint)pPVar17 & 7;
    *(ulong *)((int)pPVar17 - uVar11) =
         _local_70 << uVar11 * 8 |
         *(ulong *)((int)pPVar17 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    uVar11 = iVar16 + 0x33f27fU & 7;
    puVar6 = (ulong *)((iVar16 + 0x33f27fU) - uVar11);
    *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | (ulong)stack0xffffff98 >> (7 - uVar11) * 8;
    uVar11 = iVar16 + 0x33f278U & 7;
    puVar6 = (ulong *)((iVar16 + 0x33f278U) - uVar11);
    *puVar6 = (long)stack0xffffff98 << uVar11 * 8 |
              *puVar6 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    uVar11 = iVar16 + 0x33f287U & 7;
    puVar6 = (ulong *)((iVar16 + 0x33f287U) - uVar11);
    *puVar6 = *puVar6 & -1L << (uVar11 + 1) * 8 | (ulong)stack0xffffffa0 >> (7 - uVar11) * 8;
    uVar11 = iVar16 + 0x33f280U & 7;
    puVar6 = (ulong *)((iVar16 + 0x33f280U) - uVar11);
    *puVar6 = (long)stack0xffffffa0 << uVar11 * 8 |
              *puVar6 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&save_rank.pic_inf[iVar14].time.pad = uStack_59._1_4_;
    pPVar17->adr_no = (uchar)uVar15;
    CopySPhoto(0x1a90000,(uint)local_70[0],0x1a90000,(uVar15 & 0xff) + 0x18);
    CopyPhoto(0x1aa5400,(uint)local_70[0],0x1aa5400,pPVar17->adr_no + 0x18);
    if (((ushort)save_rank.pic_num < 10) && (bVar9)) {
      save_rank.pic_num = save_rank.pic_num + 1;
    }
  }
  return;
}

int CheckSamePic(PICTURE_WRK *newp) {
	int i;
	int j;
	int k;
	int no;
	PICTURE_WRK *savep;
	SUBJECT_CHK newp_chk[3];
	SUBJECT_CHK save_chk[3];
	
  uchar uVar1;
  short sVar2;
  short *psVar3;
  SAVE_RANK *pSVar4;
  int iVar5;
  short (*pasVar6) [2];
  SUBJECT_CHK *pSVar7;
  int iVar8;
  short *psVar9;
  SUBJECT_CHK *pSVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  SAVE_RANK *pSVar14;
  SUBJECT_CHK newp_chk [3];
  SUBJECT_CHK save_chk [3];
  
  pSVar7 = newp_chk;
  pSVar10 = newp_chk;
  psVar9 = newp->subject + 1;
  pasVar6 = newp->subject;
  iVar13 = 2;
  psVar11 = &newp_chk[0].id;
  do {
    psVar3 = *pasVar6;
    iVar13 = iVar13 + -1;
    sVar2 = *psVar9;
    pasVar6 = pasVar6[1];
    pSVar7->type = *psVar3;
    psVar9 = psVar9 + 2;
    *psVar11 = sVar2;
    pSVar7 = (SUBJECT_CHK *)((int)pSVar7 + 4);
    psVar11 = psVar11 + 2;
  } while (-1 < iVar13);
  iVar13 = 0;
  if (newp_chk[0].type == 0) {
    iVar13 = 1;
    while ((pSVar10 = (SUBJECT_CHK *)((int)pSVar10 + 4), iVar13 < 3 && (*(short *)pSVar10 == 0))) {
      iVar13 = iVar13 + 1;
    }
  }
  if (iVar13 != 3) {
    pSVar14 = &save_rank;
    iVar13 = 0;
    if (save_rank.pic_num != 0) {
      uVar1 = newp->msn_no;
      do {
        if (uVar1 == pSVar14->pic_inf[0].msn_no) {
          psVar9 = pSVar14->pic_inf[0].subject + 1;
          iVar12 = 2;
          pSVar10 = save_chk;
          psVar11 = &save_chk[0].id;
          pSVar4 = pSVar14;
          do {
            pSVar4 = (SAVE_RANK *)pSVar4->pic_inf[0].subject;
            iVar12 = iVar12 + -1;
            sVar2 = *psVar9;
            pSVar10->type = (*(short (*) [2])pSVar4)[0];
            psVar9 = psVar9 + 2;
            *psVar11 = sVar2;
            pSVar10 = pSVar10 + 1;
            psVar11 = psVar11 + 2;
          } while (-1 < iVar12);
          iVar12 = 0;
          pSVar10 = newp_chk;
          psVar11 = &newp_chk[0].id;
          do {
            iVar8 = 0;
            if ((pSVar10->type != 0) || (save_chk[0].type != 0)) {
              iVar5 = 0;
              do {
                if (((pSVar10->type == *(short *)((int)&save_chk[0].type + iVar5)) &&
                    (*psVar11 == *(short *)((int)&save_chk[0].id + iVar5))) ||
                   (iVar8 = iVar8 + 1, 2 < iVar8)) break;
                iVar5 = iVar8 * 4;
              } while ((pSVar10->type != 0) || (iVar5 = iVar8 * 4, save_chk[iVar8].type != 0));
            }
            if (iVar8 == 3) break;
            iVar12 = iVar12 + 1;
            psVar11 = psVar11 + 2;
            pSVar10 = (SUBJECT_CHK *)((int)pSVar10 + 4);
          } while (iVar12 < 3);
          if (iVar12 == 3) {
            return iVar13;
          }
        }
        iVar13 = iVar13 + 1;
        pSVar14 = (SAVE_RANK *)(pSVar14->pic_inf + 1);
      } while (iVar13 < (int)(uint)(ushort)save_rank.pic_num);
    }
  }
  return -1;
}
