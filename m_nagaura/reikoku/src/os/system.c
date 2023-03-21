// STATUS: NOT STARTED

int odev = 0;
int stop_put_draw_env = 0;
static int fr = 0;
sceGsDBuff g_db = {
	/* .disp = */ {
		/* [0] = */ {
			/* .pmode = */ {
				/* .EN1 = */ CCC_BITFIELD,
				/* .EN2 = */ CCC_BITFIELD,
				/* .CRTMD = */ CCC_BITFIELD,
				/* .MMOD = */ CCC_BITFIELD,
				/* .AMOD = */ CCC_BITFIELD,
				/* .SLBG = */ CCC_BITFIELD,
				/* .ALP = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .smode2 = */ {
				/* .INT = */ CCC_BITFIELD,
				/* .FFMD = */ CCC_BITFIELD,
				/* .DPMS = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .dispfb = */ {
				/* .FBP = */ CCC_BITFIELD,
				/* .FBW = */ CCC_BITFIELD,
				/* .PSM = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DBX = */ CCC_BITFIELD,
				/* .DBY = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .display = */ {
				/* .DX = */ CCC_BITFIELD,
				/* .DY = */ CCC_BITFIELD,
				/* .MAGH = */ CCC_BITFIELD,
				/* .MAGV = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DW = */ CCC_BITFIELD,
				/* .DH = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .bgcolor = */ {
				/* .R = */ CCC_BITFIELD,
				/* .G = */ CCC_BITFIELD,
				/* .B = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			}
		},
		/* [1] = */ {
			/* .pmode = */ {
				/* .EN1 = */ CCC_BITFIELD,
				/* .EN2 = */ CCC_BITFIELD,
				/* .CRTMD = */ CCC_BITFIELD,
				/* .MMOD = */ CCC_BITFIELD,
				/* .AMOD = */ CCC_BITFIELD,
				/* .SLBG = */ CCC_BITFIELD,
				/* .ALP = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .smode2 = */ {
				/* .INT = */ CCC_BITFIELD,
				/* .FFMD = */ CCC_BITFIELD,
				/* .DPMS = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .dispfb = */ {
				/* .FBP = */ CCC_BITFIELD,
				/* .FBW = */ CCC_BITFIELD,
				/* .PSM = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DBX = */ CCC_BITFIELD,
				/* .DBY = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .display = */ {
				/* .DX = */ CCC_BITFIELD,
				/* .DY = */ CCC_BITFIELD,
				/* .MAGH = */ CCC_BITFIELD,
				/* .MAGV = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DW = */ CCC_BITFIELD,
				/* .DH = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .bgcolor = */ {
				/* .R = */ CCC_BITFIELD,
				/* .G = */ CCC_BITFIELD,
				/* .B = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			}
		}
	},
	/* .giftag0 = */ {
		/* .NLOOP = */ CCC_BITFIELD,
		/* .EOP = */ CCC_BITFIELD,
		/* .pad16 = */ CCC_BITFIELD,
		/* .id = */ CCC_BITFIELD,
		/* .PRE = */ CCC_BITFIELD,
		/* .PRIM = */ CCC_BITFIELD,
		/* .FLG = */ CCC_BITFIELD,
		/* .NREG = */ CCC_BITFIELD,
		/* .REGS0 = */ CCC_BITFIELD,
		/* .REGS1 = */ CCC_BITFIELD,
		/* .REGS2 = */ CCC_BITFIELD,
		/* .REGS3 = */ CCC_BITFIELD,
		/* .REGS4 = */ CCC_BITFIELD,
		/* .REGS5 = */ CCC_BITFIELD,
		/* .REGS6 = */ CCC_BITFIELD,
		/* .REGS7 = */ CCC_BITFIELD,
		/* .REGS8 = */ CCC_BITFIELD,
		/* .REGS9 = */ CCC_BITFIELD,
		/* .REGS10 = */ CCC_BITFIELD,
		/* .REGS11 = */ CCC_BITFIELD,
		/* .REGS12 = */ CCC_BITFIELD,
		/* .REGS13 = */ CCC_BITFIELD,
		/* .REGS14 = */ CCC_BITFIELD,
		/* .REGS15 = */ CCC_BITFIELD
	},
	/* .draw0 = */ {
		/* .frame1 = */ {
			/* .FBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .FBW = */ CCC_BITFIELD,
			/* .pad22 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad30 = */ CCC_BITFIELD,
			/* .FBMSK = */ CCC_BITFIELD
		},
		/* .frame1addr = */ 0,
		/* .zbuf1 = */ {
			/* .ZBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad28 = */ CCC_BITFIELD,
			/* .ZMSK = */ CCC_BITFIELD,
			/* .pad33 = */ CCC_BITFIELD
		},
		/* .zbuf1addr = */ 0,
		/* .xyoffset1 = */ {
			/* .OFX = */ CCC_BITFIELD,
			/* .pad16 = */ CCC_BITFIELD,
			/* .OFY = */ CCC_BITFIELD,
			/* .pad48 = */ CCC_BITFIELD
		},
		/* .xyoffset1addr = */ 0,
		/* .scissor1 = */ {
			/* .SCAX0 = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD,
			/* .SCAX1 = */ CCC_BITFIELD,
			/* .pad27 = */ CCC_BITFIELD,
			/* .SCAY0 = */ CCC_BITFIELD,
			/* .pad43 = */ CCC_BITFIELD,
			/* .SCAY1 = */ CCC_BITFIELD,
			/* .pad59 = */ CCC_BITFIELD
		},
		/* .scissor1addr = */ 0,
		/* .prmodecont = */ {
			/* .AC = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .prmodecontaddr = */ 0,
		/* .colclamp = */ {
			/* .CLAMP = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .colclampaddr = */ 0,
		/* .dthe = */ {
			/* .DTHE = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .dtheaddr = */ 0,
		/* .test1 = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .test1addr = */ 0
	},
	/* .clear0 = */ {
		/* .testa = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testaaddr = */ 0,
		/* .prim = */ {
			/* .PRIM = */ CCC_BITFIELD,
			/* .IIP = */ CCC_BITFIELD,
			/* .TME = */ CCC_BITFIELD,
			/* .FGE = */ CCC_BITFIELD,
			/* .ABE = */ CCC_BITFIELD,
			/* .AA1 = */ CCC_BITFIELD,
			/* .FST = */ CCC_BITFIELD,
			/* .CTXT = */ CCC_BITFIELD,
			/* .FIX = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD
		},
		/* .primaddr = */ 0,
		/* .rgbaq = */ {
			/* .R = */ 0,
			/* .G = */ 0,
			/* .B = */ 0,
			/* .A = */ 0,
			/* .Q = */ 0.f
		},
		/* .rgbaqaddr = */ 0,
		/* .xyz2a = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2aaddr = */ 0,
		/* .xyz2b = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2baddr = */ 0,
		/* .testb = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testbaddr = */ 0
	},
	/* .giftag1 = */ {
		/* .NLOOP = */ CCC_BITFIELD,
		/* .EOP = */ CCC_BITFIELD,
		/* .pad16 = */ CCC_BITFIELD,
		/* .id = */ CCC_BITFIELD,
		/* .PRE = */ CCC_BITFIELD,
		/* .PRIM = */ CCC_BITFIELD,
		/* .FLG = */ CCC_BITFIELD,
		/* .NREG = */ CCC_BITFIELD,
		/* .REGS0 = */ CCC_BITFIELD,
		/* .REGS1 = */ CCC_BITFIELD,
		/* .REGS2 = */ CCC_BITFIELD,
		/* .REGS3 = */ CCC_BITFIELD,
		/* .REGS4 = */ CCC_BITFIELD,
		/* .REGS5 = */ CCC_BITFIELD,
		/* .REGS6 = */ CCC_BITFIELD,
		/* .REGS7 = */ CCC_BITFIELD,
		/* .REGS8 = */ CCC_BITFIELD,
		/* .REGS9 = */ CCC_BITFIELD,
		/* .REGS10 = */ CCC_BITFIELD,
		/* .REGS11 = */ CCC_BITFIELD,
		/* .REGS12 = */ CCC_BITFIELD,
		/* .REGS13 = */ CCC_BITFIELD,
		/* .REGS14 = */ CCC_BITFIELD,
		/* .REGS15 = */ CCC_BITFIELD
	},
	/* .draw1 = */ {
		/* .frame1 = */ {
			/* .FBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .FBW = */ CCC_BITFIELD,
			/* .pad22 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad30 = */ CCC_BITFIELD,
			/* .FBMSK = */ CCC_BITFIELD
		},
		/* .frame1addr = */ 0,
		/* .zbuf1 = */ {
			/* .ZBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad28 = */ CCC_BITFIELD,
			/* .ZMSK = */ CCC_BITFIELD,
			/* .pad33 = */ CCC_BITFIELD
		},
		/* .zbuf1addr = */ 0,
		/* .xyoffset1 = */ {
			/* .OFX = */ CCC_BITFIELD,
			/* .pad16 = */ CCC_BITFIELD,
			/* .OFY = */ CCC_BITFIELD,
			/* .pad48 = */ CCC_BITFIELD
		},
		/* .xyoffset1addr = */ 0,
		/* .scissor1 = */ {
			/* .SCAX0 = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD,
			/* .SCAX1 = */ CCC_BITFIELD,
			/* .pad27 = */ CCC_BITFIELD,
			/* .SCAY0 = */ CCC_BITFIELD,
			/* .pad43 = */ CCC_BITFIELD,
			/* .SCAY1 = */ CCC_BITFIELD,
			/* .pad59 = */ CCC_BITFIELD
		},
		/* .scissor1addr = */ 0,
		/* .prmodecont = */ {
			/* .AC = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .prmodecontaddr = */ 0,
		/* .colclamp = */ {
			/* .CLAMP = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .colclampaddr = */ 0,
		/* .dthe = */ {
			/* .DTHE = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .dtheaddr = */ 0,
		/* .test1 = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .test1addr = */ 0
	},
	/* .clear1 = */ {
		/* .testa = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testaaddr = */ 0,
		/* .prim = */ {
			/* .PRIM = */ CCC_BITFIELD,
			/* .IIP = */ CCC_BITFIELD,
			/* .TME = */ CCC_BITFIELD,
			/* .FGE = */ CCC_BITFIELD,
			/* .ABE = */ CCC_BITFIELD,
			/* .AA1 = */ CCC_BITFIELD,
			/* .FST = */ CCC_BITFIELD,
			/* .CTXT = */ CCC_BITFIELD,
			/* .FIX = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD
		},
		/* .primaddr = */ 0,
		/* .rgbaq = */ {
			/* .R = */ 0,
			/* .G = */ 0,
			/* .B = */ 0,
			/* .A = */ 0,
			/* .Q = */ 0.f
		},
		/* .rgbaqaddr = */ 0,
		/* .xyz2a = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2aaddr = */ 0,
		/* .xyz2b = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2baddr = */ 0,
		/* .testb = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testbaddr = */ 0
	}
};
static int down_fr;
sceGsDrawEnv1 *pdrawenv = NULL;

void InitSystem() {
  InitIop();
  LoadDefModule();
  InitIop();
  sceSifInitIopHeap();
  sceFsReset();
  LoadIRX();
  InitSysWrk();
  SetDefaultKeyType();
  InitGraphics();
  InitPad();
  EiInit();
  InitSe();
  InitOptionWrk();
  sceMcInit();
  mc_start_flg = '\x01';
  sceSdRemoteInit();
  return;
}

void EndSystem() {
  return;
}

static void InitIop() {
  sceSifInitRpc(0);
  sceCdInit(0);
  sceCdMmode(2);
  return;
}

static void LoadDefModule() {
  long lVar1;
  
  do {
    lVar1 = sceSifRebootIop(0x3498d0);
  } while (lVar1 == 0);
  do {
    lVar1 = sceSifSyncIop();
  } while (lVar1 == 0);
  return;
}

void LoadIRX() {
  long lVar1;
  
  do {
    lVar1 = sceSifLoadModule(0x3498e8,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349900,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349918,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349930,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349948,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349960,0,0);
  } while (lVar1 < 0);
  do {
    lVar1 = sceSifLoadModule(0x349978,0,0);
  } while (lVar1 < 0);
  return;
}

void InitSysWrk() {
  GetNowClock(&sys_wrk.rtc);
  sys_wrk.init = 1;
  sys_wrk.reset = 0;
  sys_wrk.pause = 0;
  sys_wrk.game_mode = 0;
  sys_wrk.mode = 0;
  return;
}

void GetNowClock(sceCdCLOCK *nc) {
  long lVar1;
  
  memset(nc,0,8);
  lVar1 = sceCdReadClock(nc);
  if (lVar1 == 0) {
    memset(nc,0,8);
    nc->pad = '\x01';
  }
  return;
}

void InitOptionWrk() {
  opt_wrk.pad_mode = '\0';
  opt_wrk.se_vol = 0x3fff;
  opt_wrk.bgm_vol = 0xccc;
  opt_wrk.pad_move = '\0';
  opt_wrk.key_type = '\0';
  opt_wrk.sound_mode = '\0';
  SeSetMVol(0xccc);
  SeSetSteMono(opt_wrk.sound_mode);
  return;
}

void InitGraphics() {
	sceDmaEnv env;
	
  sceDmaEnv env;
  
  sceDmaReset(1);
  sceGsResetPath();
  sceDevVif0Reset();
  sceDevVu0Reset();
  sceGsResetGraph(0,1,2,1);
  REG_RCNT0_MODE = 0x83;
  REG_RCNT1_MODE = 0x83;
  sceDmaGetEnv(&env);
  env.notify = 4;
  sceDmaPutEnv(&env);
  sceGsSetDefDBuff(0x265eb0,0,0x280,0xe0,2,0x31,1);
  pdrawenv = &g_db.draw0;
  clearGsMem(0,0,0,0x280,0x1c0);
  SetSysBackColor(0,0,0);
  return;
}

int userGsSwapDBuff(sceGsDBuff *db, int id) {
	int ret;
	
  int iVar1;
  
  if ((id & 1U) == 0) {
    sceGsPutDispEnv(db);
  }
  else {
    sceGsPutDispEnv(db->disp + 1);
  }
  iVar1 = 0;
  if (stop_put_draw_env == 0) {
    if ((id & 1U) == 0) {
      iVar1 = sceGsPutDrawEnv(&db->giftag0);
    }
    else {
      iVar1 = sceGsPutDrawEnv(&db->giftag1);
    }
  }
  return iVar1;
}

int vblankHandler(int val) {
  down_fr = down_fr + 1;
  EIntr(val);
  return 0;
}

void vfunc() {
	static int count = 0;
	static int dfro = 0;
	
  uint uVar1;
  
  StopPerformanceCounter();
  uVar1 = REG_RCNT1_COUNT;
  if (count_150 < uVar1) {
    count_150 = REG_RCNT1_COUNT;
  }
  if ((0xdc < (int)count_150) || ((char)fr == '\0')) {
    count_150 = 0;
  }
  if (((down_fr != 0) && (down_fr == dfro_151)) && ((long)odev != (sys_wrk.count & 1))) {
    sys_wrk.count = sys_wrk.count + 1;
    fr = fr + 1;
    down_fr = 0;
  }
  REG_RCNT0_COUNT = 0;
  REG_RCNT1_COUNT = 0;
  dfro_151 = down_fr;
  if ((sys_wrk.count & 1) == 0) {
    pdrawenv = &g_db.draw0;
    sceGsSetHalfOffset(0x266000,0x800,0x800,(odev & 0xffffU) + 1 & 1);
  }
  else {
    pdrawenv = &g_db.draw1;
    sceGsSetHalfOffset(0x265f10,0x800,0x800,(odev & 0xffffU) + 1 & 1);
  }
  sys_wrk.count = sys_wrk.count + 1;
  fr = fr + 1;
  uVar1 = sceGsSyncV(0);
  odev = uVar1 ^ 1;
  FlushCache(0);
  sceGsSwapDBuff(0x265eb0,fr);
  PadSyncCallback();
  stop_put_draw_env = 0;
  REG_RCNT1_COUNT = 0;
  StartPerformanceCounter();
  return;
}

void SetSysBackColor(u_char r, u_char g, u_char b) {
  g_db.clear1.rgbaq._0_1_ = r;
  g_db.clear1.rgbaq._2_1_ = b;
  g_db.clear1.rgbaq._1_1_ = g;
  g_db.clear0.rgbaq._0_1_ = r;
  g_db.clear0.rgbaq._1_1_ = g;
  g_db.clear0.rgbaq._2_1_ = b;
  return;
}
