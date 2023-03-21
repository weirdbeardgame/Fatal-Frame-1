// STATUS: NOT STARTED

SE_EV_WRK se_ev_wrk[24] = {
	/* [0] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [1] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [2] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [3] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [4] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [5] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [6] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [7] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [8] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [9] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [10] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [11] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [12] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [13] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [14] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [15] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [16] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [17] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [18] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [19] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [20] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [21] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [22] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	},
	/* [23] = */ {
		/* .count = */ 0,
		/* .sew_no0 = */ 0,
		/* .mode = */ 0
	}
};

void SeEvInit() {
	SE_EV_WRK *seewp;
	int i;
	
  SE_EV_WRK *seewp;
  int iVar1;
  
  iVar1 = 0x17;
  seewp = SeEvGetSeEvWrk('\0');
  do {
    iVar1 = iVar1 + -1;
    SeEvInitOne(seewp);
    seewp = seewp + 1;
  } while (-1 < iVar1);
  return;
}

static void SeEvInitOne(SE_EV_WRK *seewp) {
  if (seewp != (SE_EV_WRK *)0x0) {
    seewp->mode = '\0';
    seewp->sew_no0 = 0xff;
    seewp->count = 0;
  }
  return;
}

void SeEvMain() {
	SE_EV_WRK *seewp;
	SE_WRK *swp;
	int i;
	
  byte bVar1;
  SE_EV_WRK *seewp;
  int iVar2;
  tagSE_WRK *ptVar3;
  int se_ev_pos;
  
  se_ev_pos = 0;
  seewp = SeEvGetSeEvWrk('\0');
  do {
    if (seewp->mode == '\0') {
LAB_00113d58:
      bVar1 = seewp->sew_no0;
    }
    else {
      if (seewp->mode == '\x01') {
        iVar2 = seewp->count + -1;
        seewp->count = iVar2;
        if (iVar2 < 1) {
          SeEvStop(se_ev_pos);
          SeEvInitOne(seewp);
        }
        goto LAB_00113d58;
      }
      bVar1 = seewp->sew_no0;
    }
    se_ev_pos = se_ev_pos + 1;
    if (bVar1 != 0xff) {
      ptVar3 = SeGetSeWrk((uint)bVar1);
      if (ptVar3 == (tagSE_WRK *)0x0) {
        seewp->sew_no0 = 0xff;
      }
      else if (ptVar3->status == 0) {
        seewp->sew_no0 = 0xff;
      }
    }
    seewp = seewp + 1;
    if (0x17 < se_ev_pos) {
      return;
    }
  } while( true );
}

void SeEvStopAll() {
	int i;
	
  int se_ev_pos;
  
  se_ev_pos = 0;
  do {
    SeEvStop(se_ev_pos);
    se_ev_pos = se_ev_pos + 1;
  } while (se_ev_pos < 0x18);
  return;
}

void SeEvStop(int se_ev_pos) {
	SE_EV_WRK *seewp;
	
  SE_EV_WRK *pSVar1;
  
  pSVar1 = SeEvGetSeEvWrk((uchar)se_ev_pos);
  if (pSVar1 != (SE_EV_WRK *)0x0) {
    if (pSVar1->sew_no0 == 0xff) {
      pSVar1->count = 0;
    }
    else {
      SeStop((uint)pSVar1->sew_no0);
      pSVar1->sew_no0 = 0xff;
      pSVar1->count = 0;
    }
    pSVar1->mode = '\0';
  }
  return;
}

void SeEvReq(int se_req_no, int se_ev_pos, int count, char mode) {
	SE_EV_WRK *seewp;
	SE_STE *ssp;
	u_char free_sw;
	
  uchar voice_no;
  SE_EV_WRK *pSVar1;
  SE_STE *pSVar2;
  
  pSVar1 = SeEvGetSeEvWrk((uchar)se_ev_pos);
  pSVar2 = SeGetSeSte(se_req_no);
  if (pSVar1 == (SE_EV_WRK *)0x0) {
    return;
  }
  voice_no = SeGetFreeSv();
  if ((long)(char)voice_no != 0xff) {
    pSVar1->sew_no0 = voice_no;
    SeStartV((uint)(ushort)pSVar2->se_no0,voice_no);
    if (mode == '\x01') {
      pSVar1->mode = '\x01';
      pSVar1->count = count;
    }
    else {
      pSVar1->mode = '\0';
      pSVar1->count = 0;
    }
    printf("SeEvReq se_no = %d, v_no = %d\n");
    return;
  }
  printf("SeEvReq free_se = 0xFF\n");
  return;
}

void SeEvSetPitch(int se_ev_pos, u_short pitch) {
	SE_EV_WRK *seewp;
	
  SE_EV_WRK *pSVar1;
  
  pSVar1 = SeEvGetSeEvWrk((uchar)se_ev_pos);
  if ((pSVar1 != (SE_EV_WRK *)0x0) && (pSVar1->sew_no0 != 0xff)) {
    SeCmdSetPitch((uint)pSVar1->sew_no0,pitch);
    return;
  }
  return;
}

u_short SeEvGetPitch(int se_ev_pos) {
	SE_EV_WRK *seewp;
	
  uchar *puVar1;
  SE_EV_WRK *pSVar2;
  
  pSVar2 = SeEvGetSeEvWrk((uchar)se_ev_pos);
  if ((pSVar2 != (SE_EV_WRK *)0x0) &&
     (puVar1 = &pSVar2->sew_no0, pSVar2 = (SE_EV_WRK *)0xff, *puVar1 != 0xff)) {
    pSVar2 = (SE_EV_WRK *)0x0;
  }
  return (short)pSVar2;
}

static SE_EV_WRK* SeEvGetSeEvWrk(u_char no) {
  if (((int)(char)no & 0xffU) < 0x18) {
    return se_ev_wrk + ((int)(char)no & 0xffU);
  }
  return (SE_EV_WRK *)0x0;
}
