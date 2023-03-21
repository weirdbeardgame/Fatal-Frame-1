// STATUS: NOT STARTED

u_char able_to_light_tbl[0] = {
};
POINT_LIGHT_WRK point_light_wrk[8] = {
	/* [0] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [1] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [2] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [3] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [4] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [5] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [6] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	},
	/* [7] = */ {
		/* .state = */ 0,
		/* .room_no = */ 0,
		/* .power = */ NULL,
		/* .pos = */ NULL,
		/* .diffuse = */ NULL
	}
};
FSPE_LIGHT_WRK fspe_light_wrk[7] = {
	/* [0] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [1] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [2] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [3] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [4] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [5] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	},
	/* [6] = */ {
		/* .state = */ ST_FSLA_VACANT,
		/* .room_id = */ 0,
		/* .ap_in = */ NULL,
		/* .time = */ 0,
		/* .now_magnif = */ 0.f,
		/* .diffuse = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .fadeouttype = */ 0,
		/* .plw_id = */ 0
	}
};

FSPE_LIGHT_ANM* SetRandLightAnimEach(FSPE_LIGHT_ANM **ap) {
	int i;
	int num;
	FSPE_LIGHT_ANM **temp;
	
  FSPE_LIGHT_ANM *pFVar1;
  FSPE_LIGHT_ANM **ppFVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  pFVar1 = *ap;
  ppFVar2 = ap + 1;
  while (pFVar1 != (FSPE_LIGHT_ANM *)0x0) {
    iVar4 = iVar4 + 1;
    pFVar1 = *ppFVar2;
    ppFVar2 = ppFVar2 + 1;
  }
  iVar3 = rand();
  return ap[(int)((float)iVar3 * 4.656613e-10 * (float)iVar4)];
}

void SetRandLightAnim(FSPE_LIGHT_WRK *lw) {
	int num;
	FSPE_LIGHT_ANM **temp;
	FSPE_LIGHT_ANM **save;
	
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = *(int **)(&fspe_la_array + (uint)lw->type * 4);
  iVar2 = *piVar1;
  piVar3 = piVar1;
  while (iVar2 != 0) {
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar2 = *piVar3;
  }
  iVar2 = rand();
  lw->ap_in = (FSPE_LIGHT_ANM *)piVar1[(int)((float)iVar2 * 4.656613e-10 * (float)iVar4)];
  return;
}

signed char GetOpenPointLightWrkID() {
	int i;
	
  int iVar1;
  FSPE_LIGHT_WRK *pFVar2;
  
  iVar1 = 0;
  pFVar2 = fspe_light_wrk;
  do {
    if (pFVar2->state == ST_FSLA_VACANT) {
      return (char)iVar1;
    }
    iVar1 = iVar1 + 1;
    pFVar2 = pFVar2 + 1;
  } while (iVar1 < 7);
  return -1;
}

signed char GetVacantPLW() {
	int i;
	
  int iVar1;
  POINT_LIGHT_WRK *pPVar2;
  
  iVar1 = 0;
  pPVar2 = point_light_wrk;
  do {
    if (pPVar2->state == '\0') {
      return (char)iVar1;
    }
    iVar1 = iVar1 + 1;
    pPVar2 = pPVar2 + 1;
  } while (iVar1 < 8);
  return -1;
}

void DeletePointLight(signed char num) {
  (&point_light_wrk[0].state)[((int)num << 0x18) >> 0x14] = '\0';
  return;
}

signed char AddNewPointLight(sceVu0FVECTOR *pos, sceVu0FVECTOR *diffuse, float *power, u_char room_id) {
	signed char i;
	POINT_LIGHT_WRK *plw;
	
  char cVar1;
  char cVar2;
  
  cVar1 = GetVacantPLW();
  cVar2 = -1;
  if (-1 < cVar1) {
    point_light_wrk[cVar1].room_no = room_id;
    point_light_wrk[cVar1].pos = pos;
    point_light_wrk[cVar1].diffuse = diffuse;
    point_light_wrk[cVar1].power = power;
    point_light_wrk[cVar1].state = '\x01';
    cVar2 = cVar1;
  }
  return cVar2;
}

float SetPLW2PW(POINT_WRK *pw, POINT_LIGHT_WRK *plw, float obj_dist, float compare) {
	float power;
	float multi;
	sceVu0FVECTOR temp;
	
  float fVar1;
  float fVar2;
  float temp [4];
  
  fVar2 = ((DAT_00355ea0 - obj_dist) / DAT_00355ea0) * *plw->power;
  sceVu0ScaleVector(fVar2,(Vector4 *)temp,(Vector4 *)plw->diffuse);
  fVar1 = (float)sceVu0InnerProduct(temp,temp);
  fVar1 = SgSqrtf(fVar1);
  if (compare < fVar1) {
    sceVu0CopyVector((Vector4 *)pw->diffuse,(Vector4 *)plw->diffuse);
    compare = fVar1;
    sceVu0CopyVector((Vector4 *)pw,(Vector4 *)plw->pos);
    pw->power = fVar2;
  }
  return compare;
}

int SetPointLightPack(float *obj_pos, POINT_WRK *ppw, u_char start_num) {
	int i;
	int j;
	POINT_LIGHT_WRK *plw;
	float power[3];
	float temppri;
	float obj_dist;
	u_char save_num;
	u_char registered_num;
	u_char lm_num;
	
  int iVar1;
  ulong uVar3;
  int iVar4;
  POINT_LIGHT_WRK *plw;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  float fVar10;
  float fVar11;
  float power [3];
  float *local_b0;
  float *local_ac;
  ulong uVar2;
  ulong uVar9;
  
  uVar9 = (long)(char)start_num & 0xff;
  iVar8 = (int)uVar9;
  uVar7 = (ulong)(byte)(&able_to_light_tbl)[room_wrk.disp_no[0]];
  plw = point_light_wrk;
  iVar5 = iVar8;
  if (1 < uVar7) {
    iVar4 = 0;
    local_ac = power + iVar8;
    uVar6 = uVar9;
    local_b0 = obj_pos;
    do {
      if ((plw->state != '\0') &&
         (((plw->room_no == room_wrk.disp_no[0] || (plw->room_no == 0xff)) &&
          (fVar11 = GetDistV((float *)plw->pos,local_b0), fVar11 <= DAT_00355ea4)))) {
        iVar5 = (int)uVar6;
        if (uVar6 < uVar7) {
          fVar11 = SetPLW2PW(ppw + iVar5,plw,fVar11,0.0);
          uVar6 = (long)(iVar5 + 1) & 0xff;
          power[iVar5] = fVar11;
        }
        else {
          iVar1 = iVar8 + 1;
          uVar2 = (ulong)iVar1;
          fVar10 = *local_ac;
          uVar3 = uVar9;
          iVar5 = iVar8;
          if (uVar2 < uVar7) {
            do {
              if (fVar10 < power[iVar1]) {
                uVar3 = uVar2 & 0xff;
                fVar10 = power[iVar1];
              }
              iVar1 = (int)uVar2 + 1;
              iVar5 = (int)uVar3;
              uVar2 = (ulong)iVar1;
            } while ((long)uVar2 < (long)uVar7);
          }
          fVar11 = SetPLW2PW(ppw + iVar5,plw,fVar11,power[iVar5]);
          power[iVar5] = fVar11;
        }
      }
      iVar4 = iVar4 + 1;
      plw = plw + 1;
      iVar5 = (int)uVar6;
    } while (iVar4 < 8);
  }
  return iVar5;
}

void FinishCandle(FSPE_LIGHT_WRK *lw) {
  lw->state = ST_FSLA_VACANT;
  DeletePointLight(lw->plw_id);
  return;
}

void CandleAnmStop(signed char lw_id) {
	FSPE_LIGHT_WRK *lw;
	
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)lw_id;
  if (-1 < iVar2) {
    bVar1 = fspe_light_wrk[iVar2].fadeouttype;
    if (bVar1 == 0) {
      FinishCandle(fspe_light_wrk + iVar2);
    }
    else {
      fspe_light_wrk[iVar2].state = ST_FSLA_OUT;
      fspe_light_wrk[iVar2].ap_in = **(FSPE_LIGHT_ANM ***)(&fspe_la_array + (uint)bVar1 * 4);
    }
  }
  return;
}

signed char CandleAnmOcc(sceVu0FVECTOR *pos, float r, float g, float b, u_char in_pat, u_char pat, u_char out_pat, u_char room_id) {
	signed char id;
	FSPE_LIGHT_WRK *lw;
	
  ushort uVar1;
  char cVar2;
  char cVar3;
  FSPE_LIGHT_WRK *lw;
  
  cVar2 = GetOpenPointLightWrkID();
  if (-1 < cVar2) {
    lw = fspe_light_wrk + cVar2;
    fspe_light_wrk[cVar2].fadeouttype = out_pat;
    fspe_light_wrk[cVar2].type = pat;
    fspe_light_wrk[cVar2].diffuse[0] = r;
    fspe_light_wrk[cVar2].diffuse[1] = g;
    fspe_light_wrk[cVar2].diffuse[2] = b;
    if (((int)(char)in_pat & 0xffU) == 0) {
      lw->state = ST_FSLA_EXEC;
      SetRandLightAnim(lw);
    }
    else {
      lw->state = ST_FSLA_IN;
      fspe_light_wrk[cVar2].ap_in =
           **(FSPE_LIGHT_ANM ***)(&fspe_la_array + ((int)(char)in_pat & 0xffU) * 4);
    }
    uVar1 = (fspe_light_wrk[cVar2].ap_in)->time;
    fspe_light_wrk[cVar2].now_magnif = (fspe_light_wrk[cVar2].ap_in)->magnif;
    fspe_light_wrk[cVar2].time = (uint)uVar1;
    fspe_light_wrk[cVar2].room_id = room_id;
    cVar3 = AddNewPointLight(pos,(float (*) [4])fspe_light_wrk[cVar2].diffuse,
                             &fspe_light_wrk[cVar2].now_magnif,room_id);
    fspe_light_wrk[cVar2].plw_id = cVar3;
  }
  return cVar2;
}

void PointLightCtrl() {
  plyr_wrk.mylight.parallel[0].direction[3] =
       (float)SetPointLightPack(&plyr_wrk.move_box.spd.z,
                                (POINT_WRK *)(plyr_wrk.mylight.point[0].pad + 1),'\x01');
  return;
}

void CandleAnmCtrl() {
	int j;
	
  ST_FSLA SVar1;
  FSPE_LIGHT_ANM *pFVar2;
  FSPE_LIGHT_WRK *lw;
  int iVar3;
  float fVar4;
  
  iVar3 = 6;
  lw = fspe_light_wrk;
  do {
    SVar1 = lw->state;
    if (SVar1 != ST_FSLA_VACANT) {
      if (lw->time == 0) {
        pFVar2 = lw->ap_in;
        lw->ap_in = pFVar2 + 1;
        if (SVar1 == ST_FSLA_VACANT) {
LAB_001cdca4:
          pFVar2 = lw->ap_in;
        }
        else if (SVar1 < ST_FSLA_OUT) {
          if (pFVar2[1].time == 0) {
            SetRandLightAnim(lw);
            lw->state = ST_FSLA_EXEC;
            goto LAB_001cdca4;
          }
          pFVar2 = lw->ap_in;
        }
        else if (SVar1 == ST_FSLA_OUT) {
          if (pFVar2[1].time == 0) {
            FinishCandle(lw);
            goto LAB_001cdca4;
          }
          pFVar2 = lw->ap_in;
        }
        else {
          pFVar2 = lw->ap_in;
        }
        fVar4 = pFVar2->magnif;
        lw->time = (uint)(ushort)pFVar2->time;
        lw->now_magnif = fVar4 * 100.0;
      }
      else {
        lw->time = lw->time - 1;
      }
    }
    iVar3 = iVar3 + -1;
    lw = lw + 1;
    if (iVar3 < 0) {
      return;
    }
  } while( true );
}
