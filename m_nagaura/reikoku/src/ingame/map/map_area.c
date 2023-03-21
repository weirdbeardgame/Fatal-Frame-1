// STATUS: NOT STARTED

u_char area_dat[11][6] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2,
		/* [3] = */ 3,
		/* [4] = */ 8,
		/* [5] = */ 38
	},
	/* [1] = */ {
		/* [0] = */ 4,
		/* [1] = */ 5,
		/* [2] = */ 6,
		/* [3] = */ 14,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [2] = */ {
		/* [0] = */ 9,
		/* [1] = */ 255,
		/* [2] = */ 255,
		/* [3] = */ 255,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [3] = */ {
		/* [0] = */ 7,
		/* [1] = */ 40,
		/* [2] = */ 15,
		/* [3] = */ 16,
		/* [4] = */ 22,
		/* [5] = */ 27
	},
	/* [4] = */ {
		/* [0] = */ 11,
		/* [1] = */ 12,
		/* [2] = */ 13,
		/* [3] = */ 255,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [5] = */ {
		/* [0] = */ 17,
		/* [1] = */ 21,
		/* [2] = */ 23,
		/* [3] = */ 25,
		/* [4] = */ 26,
		/* [5] = */ 255
	},
	/* [6] = */ {
		/* [0] = */ 8,
		/* [1] = */ 20,
		/* [2] = */ 35,
		/* [3] = */ 38,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [7] = */ {
		/* [0] = */ 14,
		/* [1] = */ 18,
		/* [2] = */ 255,
		/* [3] = */ 255,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [8] = */ {
		/* [0] = */ 24,
		/* [1] = */ 255,
		/* [2] = */ 255,
		/* [3] = */ 255,
		/* [4] = */ 255,
		/* [5] = */ 255
	},
	/* [9] = */ {
		/* [0] = */ 19,
		/* [1] = */ 28,
		/* [2] = */ 29,
		/* [3] = */ 30,
		/* [4] = */ 31,
		/* [5] = */ 255
	},
	/* [10] = */ {
		/* [0] = */ 32,
		/* [1] = */ 33,
		/* [2] = */ 34,
		/* [3] = */ 255,
		/* [4] = */ 255,
		/* [5] = */ 255
	}
};
u_char one_room_load_ok = 0;
AREA_WRK area_wrk = {
	/* .rmd = */ {
		/* [0] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		},
		/* [1] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		},
		/* [2] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		},
		/* [3] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		},
		/* [4] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		},
		/* [5] = */ {
			/* .sgd_room = */ NULL,
			/* .sgd_furn = */ {
				/* [0] = */ NULL,
				/* [1] = */ NULL,
				/* [2] = */ NULL,
				/* [3] = */ NULL,
				/* [4] = */ NULL,
				/* [5] = */ NULL,
				/* [6] = */ NULL,
				/* [7] = */ NULL,
				/* [8] = */ NULL,
				/* [9] = */ NULL,
				/* [10] = */ NULL,
				/* [11] = */ NULL,
				/* [12] = */ NULL,
				/* [13] = */ NULL,
				/* [14] = */ NULL,
				/* [15] = */ NULL,
				/* [16] = */ NULL,
				/* [17] = */ NULL,
				/* [18] = */ NULL,
				/* [19] = */ NULL,
				/* [20] = */ NULL,
				/* [21] = */ NULL,
				/* [22] = */ NULL,
				/* [23] = */ NULL,
				/* [24] = */ NULL,
				/* [25] = */ NULL,
				/* [26] = */ NULL,
				/* [27] = */ NULL,
				/* [28] = */ NULL,
				/* [29] = */ NULL
			},
			/* .mno_room = */ 0,
			/* .mno_furn = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0
			},
			/* .room_id = */ 0
		}
	},
	/* .dmd = */ {
		/* [0] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [1] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [2] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [3] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [4] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [5] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [6] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [7] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [8] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [9] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [10] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [11] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [12] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [13] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [14] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [15] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [16] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [17] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [18] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		},
		/* [19] = */ {
			/* .sgd_door = */ NULL,
			/* .mno_door = */ 0
		}
	},
	/* .tmp_after_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .area_no = */ 0,
	/* .area_bak = */ 0,
	/* .room = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .rgst = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	},
	/* .ev_se = */ 0,
	/* .fg_max = */ 0,
	/* .padding = */ 0
};

void MapAreaInit() {
	int i;
	
  int iVar1;
  undefined *puVar2;
  
  memset(&area_wrk,0,0x540);
  puVar2 = &DAT_00332697;
  iVar1 = 5;
  do {
    *puVar2 = 0xff;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  iVar1 = 4;
  puVar2 = &DAT_0033269c;
  do {
    *puVar2 = 0xff;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  DAT_0033269e = 1;
  return;
}

void MapAreaMain() {
  int iVar1;
  
  area_wrk.padding._0_1_ = area_wrk.fg_max;
  switch(area_read_wrk.stat) {
  case '\x01':
    area_read_wrk.next_area = GetRoomArea(area_read_wrk.rm_to);
    area_read_wrk.stat = '\x04';
    break;
  case '\x05':
    iVar1 = FloatGhostLoadMain();
    if (iVar1 == 0) break;
  case '\x04':
    area_read_wrk.stat = '\b';
    break;
  case '\b':
    ingame_wrk.mode = 6;
    area_read_wrk.stat = '\0';
  }
  area_wrk.fg_max = GetRoomArea(plyr_wrk.dop._13_1_);
  return;
}

int MapAreaRoomLoadReq() {
  uint uVar1;
  
  if (area_read_wrk.load_count < 6) {
    do {
      if (area_read_wrk.room[area_read_wrk.load_count] != 0xff) {
        RoomMdlLoadReq((uint *)0x0,area_read_wrk.load_count,ingame_wrk.msn_no,
                       area_read_wrk.room[area_read_wrk.load_count],'\0');
        uVar1 = (uint)area_read_wrk.load_count;
        area_read_wrk.load_count = area_read_wrk.load_count + '\x01';
        area_wrk.rgst[uVar1 + 8] = area_read_wrk.room[uVar1];
        area_read_wrk.load_mode = '\x01';
        return 0;
      }
      uVar1 = area_read_wrk.load_count + 1;
      area_read_wrk.load_count = (uchar)uVar1;
    } while ((uVar1 & 0xff) < 6);
  }
  return 1;
}

void MapAreaLoadSet() {
  area_read_wrk.next_area = GetRoomArea(area_read_wrk.rm_to);
  SetAreaLoadRoom('\0',area_read_wrk.next_area);
  FloatGhostEntrySet(area_read_wrk.next_area);
  return;
}

u_char GetRoomArea(u_char room_id) {
	int i;
	int j;
	
  uchar *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    puVar1 = area_dat + iVar4;
    do {
      iVar2 = iVar2 + 1;
      if (*puVar1 == room_id) {
        return (uchar)iVar3;
      }
      puVar1 = puVar1 + 1;
    } while (iVar2 < 6);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 6;
  } while (iVar3 < 0xb);
  return 0xff;
}

int SetAreaLoadRoom(u_char mode, u_char area_no) {
	int i;
	int j;
	int count;
	int tmp0[6];
	int tmp1[6];
	int tmp2[6];
	int tmp3;
	
  uchar uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  uchar *puVar11;
  int iVar12;
  int tmp0 [6];
  int tmp1 [6];
  int tmp2 [6];
  
  piVar2 = tmp0;
  piVar7 = tmp0;
  puVar10 = (uint *)tmp2;
  iVar4 = 0;
  piVar8 = tmp1;
  puVar3 = puVar10;
  do {
    *piVar2 = 0xff;
    puVar11 = area_read_wrk.room + iVar4;
    *piVar8 = 0xff;
    iVar4 = iVar4 + 1;
    *puVar3 = 0xff;
    piVar8 = piVar8 + 1;
    *puVar11 = 0xff;
    puVar3 = puVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 6);
  iVar12 = 0;
  puVar11 = (uchar *)((int)&area_wrk.padding + 1);
  iVar4 = 0;
  do {
    iVar9 = iVar4 + 1;
    iVar6 = 0;
    piVar8 = tmp1 + iVar12;
    puVar5 = (uchar *)area_dat[(int)(char)area_no & 0xffU];
    do {
      if (*puVar11 == *puVar5) {
        iVar12 = iVar12 + 1;
        tmp0[iVar4] = (uint)*puVar11;
        *piVar8 = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 6);
    puVar11 = area_wrk.rgst + iVar4 + 9;
    iVar4 = iVar9;
  } while (iVar9 < 6);
  puVar3 = puVar10;
  iVar4 = 0;
  do {
    iVar6 = 0;
    if (tmp1[0] != iVar4) {
      for (iVar6 = 1; (iVar6 < 6 && (tmp1[iVar6] != iVar4)); iVar6 = iVar6 + 1) {
      }
    }
    iVar9 = iVar4 + 1;
    if (iVar6 == 6) {
      *puVar3 = (uint)area_dat[(int)(char)area_no & 0xffU][iVar4];
      puVar3 = puVar3 + 1;
    }
    iVar6 = tmp2[0];
    iVar4 = iVar9;
  } while (iVar9 < 6);
  if (tmp2[0] != (uint)area_read_wrk.rm_to) {
    puVar3 = puVar10;
    for (iVar4 = 1; puVar3 = puVar3 + 1, iVar4 < 6; iVar4 = iVar4 + 1) {
      if (*puVar3 == (uint)area_read_wrk.rm_to) {
        if (iVar4 != 0) {
          tmp2[0] = *puVar3;
          *puVar3 = iVar6;
        }
        break;
      }
    }
  }
  if (mode == '\0') {
    if (area_wrk.padding._1_1_ == area_read_wrk.rm_from) {
      tmp0[0] = (uint)area_read_wrk.rm_from;
    }
    else {
      for (iVar4 = 1; iVar4 < 6; iVar4 = iVar4 + 1) {
        if (area_wrk.rgst[iVar4 + 8] == area_read_wrk.rm_from) {
          tmp0[iVar4] = (uint)area_read_wrk.rm_from;
          break;
        }
      }
    }
  }
  iVar4 = 0;
  do {
    if (*piVar7 == 0xff) {
      uVar1 = *(uchar *)puVar10;
      area_read_wrk.room[iVar4] = uVar1;
      if (uVar1 != 0xff) {
        area_wrk.rgst[iVar4 + 8] = uVar1;
      }
      puVar10 = puVar10 + 1;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar4 < 6);
  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return iVar12;
}

void AreaRoomAllLoadInit() {
	int i;
	
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 5;
  puVar1 = &DAT_00332697;
  do {
    *puVar1 = 0xff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}

int AreaRoomAllLoad(u_char area_no) {
	int i;
	
  int iVar1;
  uint uVar2;
  int unaff_s3_lo;
  
  if (area_read_wrk.load_mode == '\0') {
    if (area_read_wrk.load_count < 6) {
      if (area_dat[(int)(char)area_no & 0xffU][area_read_wrk.load_count] != 0xff) {
        RoomMdlLoadReq((uint *)0x0,area_read_wrk.load_count,ingame_wrk.msn_no,
                       area_dat[(int)(char)area_no & 0xffU][area_read_wrk.load_count],'\0');
        uVar2 = (uint)area_read_wrk.load_count;
        area_read_wrk.load_count = area_read_wrk.load_count + '\x01';
        area_wrk.rgst[unaff_s3_lo + 8] = area_dat[(int)(char)area_no & 0xffU][uVar2];
        area_read_wrk.load_mode = '\x01';
        goto LAB_001bda84;
      }
    }
    area_read_wrk.load_count = '\0';
    iVar1 = 1;
    area_read_wrk.load_mode = '\0';
  }
  else {
    iVar1 = RoomMdlLoadWait();
    if (iVar1 == 0) {
      return 0;
    }
    area_read_wrk.load_mode = '\0';
LAB_001bda84:
    iVar1 = 0;
  }
  return iVar1;
}

int GetEmptyRoomAddr() {
	int i;
	
  uchar *puVar1;
  int iVar2;
  int iVar3;
  
  if (sys_wrk.game_mode != 3) {
    return 0x14b0000;
  }
  puVar1 = (uchar *)((int)&area_wrk.padding + 1);
  iVar2 = 0;
  do {
    if (plyr_wrk.dop._13_1_ != *puVar1) {
      return iVar2 * 0x2f0000 + 0x14b0000;
    }
    iVar3 = iVar2 + 1;
    puVar1 = area_wrk.rgst + iVar2 + 9;
    iVar2 = iVar3;
  } while (iVar3 < 2);
  return 0;
}

void ClearDispRoom(int wrk_no) {
	DOOR_WRK *dwp;
	int i;
	
  int iVar1;
  uchar uVar2;
  FURN_WRK *fwp;
  int iVar3;
  DOOR_WRK *pDVar4;
  
  fwp = furn_wrk;
  iVar3 = 0;
  room_wrk.disp_no[wrk_no] = 0xff;
  do {
    if ((fwp->room_id != room_wrk.disp_no[wrk_no ^ 1U]) &&
       ((fwp->use == '\0' || (fwp->use == '\x02')))) {
      FurnSetWrkNoUse(fwp,iVar3);
    }
    iVar3 = iVar3 + 1;
    fwp = fwp + 1;
  } while (iVar3 < 0x3c);
  pDVar4 = door_wrk;
  iVar3 = 0x13;
  do {
    uVar2 = pDVar4->use;
    if (((uVar2 == '\x01') || (uVar2 == '\x04')) || (uVar2 == '\x03')) {
      uVar2 = GetRoomIdBeyondDoor(pDVar4->door_id,room_wrk.disp_no[wrk_no ^ 1U]);
      if ((((long)(char)uVar2 != 0xff) &&
          ((long)(char)uVar2 != (ulong)room_wrk.disp_no[wrk_no ^ 1U])) && (1 < pDVar4->stts)) {
        DoorSttsChange(pDVar4->door_id,'\x01');
      }
    }
    iVar3 = iVar3 + -1;
    pDVar4 = pDVar4 + 1;
  } while (-1 < iVar3);
  DoorFreeFurnWrk('\0');
  FurnSortFurnWrk('\0');
  iVar3 = 1;
  if (plyr_wrk.dop._13_1_ == area_wrk.padding._1_1_) {
    do {
      if (1 < iVar3) {
        return;
      }
      iVar1 = iVar3 + 8;
      iVar3 = iVar3 + 1;
    } while (plyr_wrk.dop._13_1_ == area_wrk.rgst[iVar1]);
    area_wrk.rgst[iVar1] = 0xff;
  }
  else {
    area_wrk.padding._1_1_ = 0xff;
  }
  return;
}
