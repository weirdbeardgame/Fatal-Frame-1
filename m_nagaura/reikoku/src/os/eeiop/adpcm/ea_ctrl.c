// STATUS: NOT STARTED

enum ADPCM_GHOST_MODE {
	ADP_GST_INIT = 0,
	ADP_GST_REQ = 1,
	ADP_GST_FADEIN = 2,
	ADP_GST_PLAY = 3,
	ADP_GST_FADEOUT = 4,
	ADP_GST_STOP = 5
};

ADPCM_MAP adpcm_map = {
	/* .mpara = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mpos = */ NULL,
		/* .file_no = */ 0,
		/* .count = */ 0,
		/* .fin_flm = */ 0,
		/* .fout_flm = */ 0,
		/* .vol = */ 0,
		/* .pitch = */ 0,
		/* .pan = */ 0,
		/* .start_flm = */ 0,
		/* .mode = */ 0,
		/* .ewrk_no = */ 0
	},
	/* .bk_para = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mpos = */ NULL,
		/* .file_no = */ 0,
		/* .count = */ 0,
		/* .fin_flm = */ 0,
		/* .fout_flm = */ 0,
		/* .vol = */ 0,
		/* .pitch = */ 0,
		/* .pan = */ 0,
		/* .start_flm = */ 0,
		/* .mode = */ 0,
		/* .ewrk_no = */ 0
	},
	/* .btlmode = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .gover = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .scene = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .maga = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .shinkan = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .puzzle = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .soul = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .tape = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .gdead = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .event = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .ghost = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .autog = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .hiso = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .furn = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .map = */ {
		/* .para = */ {
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mpos = */ NULL,
			/* .file_no = */ 0,
			/* .count = */ 0,
			/* .fin_flm = */ 0,
			/* .fout_flm = */ 0,
			/* .vol = */ 0,
			/* .pitch = */ 0,
			/* .pan = */ 0,
			/* .start_flm = */ 0,
			/* .mode = */ 0,
			/* .ewrk_no = */ 0
		},
		/* .count = */ 0,
		/* .stop = */ 0,
		/* .use = */ 0,
		/* .mode = */ 0
	},
	/* .mvol = */ 0,
	/* .tgt_vol = */ 0,
	/* .deg = */ 0,
	/* .m_flg = */ 0,
	/* .movie = */ 0,
	/* .outmode = */ 0,
	/* .type = */ 0,
	/* .mode = */ 0
};
static u_char fout_flg;

void AdpcmMapCtrlInit() {
  memset(&adpcm_map,0,0x440);
  adpcm_map.deg = 0x80;
  adpcm_map.tgt_vol = 0xfff;
  adpcm_map.btlmode.para.file_no = -1;
  adpcm_map.gover.para.file_no = -1;
  adpcm_map.scene.para.file_no = -1;
  adpcm_map.maga.para.file_no = -1;
  adpcm_map.shinkan.para.file_no = -1;
  adpcm_map.puzzle.para.file_no = -1;
  adpcm_map.soul.para.file_no = -1;
  adpcm_map.tape.para.file_no = -1;
  adpcm_map.gdead.para.file_no = -1;
  adpcm_map.event.para.file_no = -1;
  adpcm_map.ghost.para.file_no = -1;
  adpcm_map.autog.para.file_no = -1;
  adpcm_map.hiso.para.file_no = -1;
  adpcm_map.furn.para.file_no = -1;
  adpcm_map.map.para.file_no = -1;
  adpcm_map.mvol = 0xfff;
  SetIopCmdSm(0x23,(int)((uint)(ushort)opt_wrk.bgm_vol * 0x3fff) >> 0xc,0,0);
  return;
}

void AdpcmMapUse() {
  adpcm_map.map.use = 1;
  return;
}

void AdpcmMapNoUse() {
  adpcm_map.map.use = 0;
  return;
}

void AdpcmMapCtrl() {
  int iVar1;
  uint data1;
  
  adpcm_map.m_flg = 1;
  if (adpcm_map.outmode == 0) {
    if (adpcm_map.movie == 0) {
      if (adpcm_map.btlmode.use == 0) {
        if (adpcm_map.gover.use == 0) {
          if (adpcm_map.scene.use == 0) {
            if (adpcm_map.maga.use == 0) {
              if (adpcm_map.shinkan.use == 0) {
                if (adpcm_map.puzzle.use == 0) {
                  if (adpcm_map.soul.use == 0) {
                    if (adpcm_map.tape.use == 0) {
                      if (adpcm_map.gdead.use == 0) {
                        if (adpcm_map.event.use == 0) {
                          if (adpcm_map.ghost.use == 0) {
                            if (adpcm_map.autog.use == 0) {
                              if (adpcm_map.hiso.use == 0) {
                                if (adpcm_map.furn.use == 0) {
                                  if (adpcm_map.map.use != 0) {
                                    EAdpcmMapMain();
                                  }
                                }
                                else {
                                  EAdpcmFurnMain();
                                }
                              }
                              else {
                                adpcm_map.m_flg = 0;
                                EAdpcmHisoMain();
                              }
                            }
                            else {
                              adpcm_map.m_flg = 0;
                              EAdpcmAutogMain();
                            }
                          }
                          else {
                            EAdpcmGhostMain();
                          }
                        }
                        else {
                          adpcm_map.m_flg = 0;
                          EAdpcmEventMain();
                        }
                      }
                      else {
                        EAdpcmGdeadMain();
                      }
                    }
                    else {
                      adpcm_map.m_flg = 0;
                      EAdpcmTapeMain();
                    }
                  }
                  else {
                    EAdpcmSoulMain();
                  }
                }
                else {
                  EAdpcmPuzzleMain();
                }
              }
              else {
                EAdpcmShinkanMain();
              }
            }
            else {
              EAdpcmMagatokiMain();
            }
          }
          else {
            adpcm_map.m_flg = 0;
            EAdpcmSceneMain();
          }
        }
        else {
          adpcm_map.m_flg = 0;
          EAdpcmGoverMain();
        }
      }
      else {
        adpcm_map.m_flg = 0;
        EAdpcmBtlmodeMain();
      }
    }
    else if (adpcm_map.mode != 0x10) {
      adpcm_map.mode = 0x10;
    }
  }
  iVar1 = UpdateAdpcmMenuFade();
  if ((iVar1 != 0) && (adpcm_map.m_flg == 1)) {
    data1 = (((int)((uint)(ushort)opt_wrk.bgm_vol * 0x3fff) >> 0xc) * adpcm_map.mvol) / 0xfff &
            0xffff;
    if (0x3fff < data1) {
      data1 = 0x3fff;
    }
    SetIopCmdSm(0x23,data1,0,0);
    return;
  }
  if (adpcm_map.m_flg != 2) {
    return;
  }
  SetIopCmdSm(0x23,(int)((uint)(ushort)opt_wrk.bgm_vol * 0x3fff) >> 0xc,0,0);
  return;
}

void AdpcmShiftMovie() {
  EAdpcmCmdStop(0,0,0);
  adpcm_map.movie = 1;
  return;
}

void AdpcmReturnFromMovie() {
  EAdpcmCmdInit(1);
  adpcm_map.movie = 0;
  return;
}

static u_char UpdateAdpcmMenuFade() {
	u_char update_flg;
	
  if (adpcm_map.mvol < adpcm_map.tgt_vol) {
    adpcm_map.mvol = adpcm_map.deg + adpcm_map.mvol;
    if (adpcm_map.tgt_vol <= adpcm_map.mvol) {
      adpcm_map.mvol = adpcm_map.tgt_vol;
    }
  }
  else {
    if (adpcm_map.mvol <= adpcm_map.tgt_vol) {
      return 0;
    }
    adpcm_map.mvol = adpcm_map.mvol - adpcm_map.deg;
    if (adpcm_map.mvol < adpcm_map.tgt_vol) {
      adpcm_map.mvol = adpcm_map.tgt_vol;
    }
  }
  return 1;
}

void SetTargetVolAdpcmMenuFade(int tgt_vol) {
  if (tgt_vol < 0) {
    tgt_vol = 0;
  }
  else if (0xfff < tgt_vol) {
    tgt_vol = 0xfff;
  }
  adpcm_map.tgt_vol = tgt_vol;
  return;
}

void EAdpcmFadeOut(u_short fout_flm) {
  EAdpcmCmdStop(0,0,fout_flm);
  fout_flg = '\0';
  return;
}

u_char IsEndAdpcmFadeOut() {
  ushort uVar1;
  int iVar2;
  
  uVar1 = EAGetRetStat();
  iVar2 = 1;
  if (uVar1 != 1) {
    uVar1 = EAGetRetStat();
    iVar2 = 0;
    if (uVar1 == 2) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

void EAdpcmFadeOutGameEnd(u_short fout_flm) {
  EAdpcmCmdStop(0,0,fout_flm);
  AdpcmMapCtrlInit();
  adpcm_map.map.use = 0;
  return;
}

u_char IsHighModeUse(u_char my_mode) {
  byte bVar1;
  
  switch(my_mode) {
  case 1:
    if (adpcm_map.furn.use != 0) {
      return 1;
    }
    if (adpcm_map.hiso.use != 0) {
      return 1;
    }
    if (adpcm_map.autog.use != 0) {
      return 1;
    }
    goto joined_r0x0010da58;
  case 2:
    if (adpcm_map.hiso.use != 0) {
      return 1;
    }
    goto joined_r0x0010d9ac;
  case 3:
joined_r0x0010d9ac:
    if (adpcm_map.autog.use != 0) {
      return 1;
    }
    if (adpcm_map.ghost.use != 0) {
      return 1;
    }
    if (adpcm_map.event.use != 0) {
      return 1;
    }
    if (adpcm_map.gdead.use != 0) {
      return 1;
    }
    if (adpcm_map.tape.use != 0) {
      return 1;
    }
    if (adpcm_map.soul.use != 0) {
      return 1;
    }
    if (adpcm_map.puzzle.use != 0) {
      return 1;
    }
    if (adpcm_map.shinkan.use != 0) {
      return 1;
    }
    if (adpcm_map.maga.use != 0) {
      return 1;
    }
    if (adpcm_map.scene.use != 0) {
      return 1;
    }
    if (adpcm_map.gover.use != 0) {
      return 1;
    }
    if (adpcm_map.btlmode.use != 0) {
      return 1;
    }
    if (adpcm_map.movie != 0) {
      return 1;
    }
    goto switchD_0010d81c_caseD_10;
  case 4:
joined_r0x0010da58:
    if (adpcm_map.ghost.use != 0) {
      return 1;
    }
    if (adpcm_map.event.use != 0) {
      return 1;
    }
    if (adpcm_map.gdead.use != 0) {
      return 1;
    }
    if (adpcm_map.tape.use != 0) {
      return 1;
    }
    if (adpcm_map.soul.use != 0) {
      return 1;
    }
    if (adpcm_map.puzzle.use != 0) {
      return 1;
    }
    if (adpcm_map.shinkan.use != 0) {
      return 1;
    }
    if (adpcm_map.maga.use != 0) {
      return 1;
    }
    if (adpcm_map.scene.use != 0) {
      return 1;
    }
    if (adpcm_map.gover.use != 0) {
      return 1;
    }
    goto joined_r0x0010de7c;
  case 5:
    if (adpcm_map.event.use != 0) {
      return 1;
    }
    goto joined_r0x0010db8c;
  case 6:
joined_r0x0010db8c:
    if (adpcm_map.gdead.use != 0) {
      return 1;
    }
    if (adpcm_map.tape.use != 0) {
      return 1;
    }
    break;
  case 7:
    if (adpcm_map.tape.use != 0) {
      return 1;
    }
    if (adpcm_map.soul.use != 0) {
      return 1;
    }
    if (adpcm_map.puzzle.use != 0) {
      return 1;
    }
    if (adpcm_map.shinkan.use != 0) {
      return 1;
    }
    if (adpcm_map.maga.use != 0) {
      return 1;
    }
    if (adpcm_map.scene.use != 0) {
      return 1;
    }
    if (adpcm_map.gover.use != 0) {
      return 1;
    }
    if (adpcm_map.btlmode.use != 0) {
      return 1;
    }
    if (adpcm_map.movie != 0) {
      return 1;
    }
    break;
  case 8:
    break;
  case 9:
    goto joined_r0x0010dd00;
  case 10:
    goto joined_r0x0010dd64;
  case 0xb:
    goto joined_r0x0010ddc8;
  case 0xc:
    goto joined_r0x0010ddbc;
  case 0xd:
    goto joined_r0x0010de48;
  case 0xe:
    goto joined_r0x0010de7c;
  case 0xf:
    if (adpcm_map.movie == 0) {
      return 0;
    }
    return 1;
  case 0x10:
    return 0;
  default:
    goto switchD_0010d81c_caseD_10;
  }
  if (adpcm_map.soul.use == 0) {
joined_r0x0010dd00:
    if (adpcm_map.puzzle.use == 0) {
joined_r0x0010dd64:
      if (adpcm_map.shinkan.use == 0) {
joined_r0x0010ddbc:
        if (adpcm_map.maga.use == 0) {
joined_r0x0010ddc8:
          if (adpcm_map.scene.use == 0) {
joined_r0x0010de48:
            if (adpcm_map.gover.use == 0) {
joined_r0x0010de7c:
              if (adpcm_map.btlmode.use == 0) {
                bVar1 = 1;
                if (adpcm_map.movie == 0) {
switchD_0010d81c_caseD_10:
                  bVar1 = 0;
                }
                return bVar1;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
