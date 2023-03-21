// STATUS: NOT STARTED

SgLIGHT *SgInfiniteLight = NULL;
SgLIGHT *SgPointLight = NULL;
SgLIGHT *SgSpotLight = NULL;
int model_buffer_size = 0;
int model_tag_size = 0;
sceVu0FVECTOR *vertex_buffer = NULL;
sceVu0FVECTOR *normal_buffer = NULL;
int vnbuf_size = 0;
sceVu0FVECTOR vf12reg[2] = {
	/* [0] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.f,
		/* [2] = */ 1.f,
		/* [3] = */ -1.f
	},
	/* [1] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
int loadtri2_flg = 1;
int loadbw_flg = 0;
int set_bw_color = 0;
static sceVu0FVECTOR trad = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.159154952f,
	/* [2] = */ -6.28318501f,
	/* [3] = */ 0.0174532924f
};
static sceVu0FVECTOR tgsinf[2] = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.166666672f,
		/* [2] = */ 0.00833333377f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ -0.000198412701f,
		/* [1] = */ 2.75573188e-06f,
		/* [2] = */ 1.f,
		/* [3] = */ 0.f
	}
};
sceVu0FVECTOR *objwork = NULL;
SgSourceChainTag *cachetag = NULL;
int vu1tag_num = 0;
int sbuffer_p = 0;
int edge_check = 0;
sceVu0FMATRIX SgWSMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX SgCMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX SgCMVtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX DLightMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX SLightMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX DColorMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FMATRIX SColorMtx = {
	/* [0] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* [3] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
sceVu0FVECTOR TAmbient = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
int ptag = 0;
qword *SgWorkBase = NULL;
SgVULightCoord *SgLightCoordp = NULL;
SgVULightParallel *SgLightParallelp = NULL;
SgVULightSpot *SgLightSpotp = NULL;
SgVULightPoint *SgLightPointp = NULL;
int SgInfiniteNum = 0;
int SgPointNum = 0;
int SgPointGroupNum = 0;
SgPOINTGROUP SgPointGroup[1] = {
	/* [0] = */ {
		/* .pos = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .btimes = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .eyevec = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .DColorMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .SColorMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .lnum = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		},
		/* .pad = */ 0
	}
};
sceVu0FVECTOR ieye = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
int SgSpotNum = 0;
int SgSpotGroupNum = 0;
SgSPOTGROUP SgSpotGroup[1] = {
	/* [0] = */ {
		/* .pos = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .intens = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .intens_b = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .btimes = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .WDLightMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .SLightMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .DColorMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .SColorMtx = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .lnum = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		},
		/* .pad = */ 0
	}
};
void *sgd_top_addr = NULL;
CoordCache ccahe = {
	/* .cache_on = */ 0,
	/* .edge_check = */ 0,
	/* .cn0 = */ 0,
	/* .cn1 = */ 0,
	/* .tagd_addr = */ 0,
	/* .qwc = */ 0,
	/* .Parallel = */ {
		/* .num = */ 0,
		/* .lnum = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		}
	},
	/* .Point = */ {
		/* .num = */ 0,
		/* .lnum = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		}
	},
	/* .Spot = */ {
		/* .num = */ 0,
		/* .lnum = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		}
	}
};
sceDmaChan *dvif0 = NULL;
sceDmaChan *dvif1 = NULL;
sceDmaChan *dgif = NULL;
sceDmaChan *dfspr = NULL;
SgSourceChainTag *cachetagdbuf[2] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};
sceVu0FVECTOR *objworkdbuf[2] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};
int tagswap = 0;
sceVu0FVECTOR fog_value = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
sceVu0IVECTOR fog_color = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0
};
ShadowTexture shadowtex = {
	/* .addr = */ 0,
	/* .max_width = */ 0,
	/* .max_height = */ 0,
	/* .width = */ 0,
	/* .height = */ 0,
	/* .width_p = */ 0,
	/* .height_p = */ 0,
	/* .scale = */ 0.f,
	/* .fund_scale = */ 0.f
};
int vu_prog_num = 0;
int clip_value_check = 0;
sceVu0FVECTOR clip_value = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
int wscissor_flg = 0;
sceVu0FVECTOR wscissor_upper = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
sceVu0FVECTOR wscissor_lower = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
u_int *pGroupPacket = NULL;

void _GetNormalVectorFromVector(float *norm, float *p0, float *p1) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])p0);
  auVar2 = _lqc2(*(undefined (*) [16])p1);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])norm = auVar1;
  return;
}

void WaitVU1() {
  char cVar1;
  
  do {
    cVar1 = getCopCondition(2,0);
  } while (cVar1 != '\0');
  return;
}

float _TransPPower(float scale) {
  return scale * 60.0;
}

float _TransSPower(float scale) {
  return scale * 200.0;
}

void Set12Register() {
	sceVu0FVECTOR vf[2];
	
  float vf [2] [4];
  
  _lqc2(CONCAT412(0xbf800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
  _lqc2(ZEXT816(0x3f800000));
  return;
}

void SetVF2Register(float *vf2reg) {
                    /* inlined from libsg.h */
  vf12reg[1][0] = *vf2reg;
  vf12reg[1][1] = vf2reg[1];
  vf12reg[1][2] = vf2reg[2];
  vf12reg[1][3] = vf2reg[3];
  return;
}

void GetVF2Register(float *vf2reg) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = vf12reg[1][3];
  fVar2 = vf12reg[1][2];
                    /* inlined from libsg.h */
  fVar1 = vf12reg[1][1];
  *vf2reg = vf12reg[1][0];
  vf2reg[1] = fVar1;
  vf2reg[2] = fVar2;
  vf2reg[3] = fVar3;
  return;
}

void printVector(float *v) {
                    /* end of inlined section */
  printf("(%f %f %f %f)\n");
  return;
}

void printVectorC(float *v, char *s) {
  printf("%s (%ff,%ff,%ff,%ff)\n");
  return;
}

void printMat(float *m0[4]) {
	int i;
	
  int iVar1;
  
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
    printf("%f %f %f %f\n");
  } while (-1 < iVar1);
  return;
}

void printMatC(float *m0[4], char *s) {
  printf(&DAT_00356c98);
  printMat(m0);
  return;
}

void printLMatC(float *m0[4], char *str) {
	int i;
	
  int iVar1;
  
  printf(&DAT_00356c98);
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    printf("%f %f %f\n");
  } while (-1 < iVar1);
  return;
}

void SgSetWsMtx(float *m0[4]) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
                    /* inlined from libsg.h */
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  SgWSMtx.matrix[0] = (Vector4)_sqc2(auVar1);
  SgWSMtx.matrix[1] = (Vector4)_sqc2(auVar2);
  SgWSMtx.matrix[2] = (Vector4)_sqc2(auVar3);
  SgWSMtx.matrix[3] = (Vector4)_sqc2(auVar4);
  return;
}

void SgSetClipMtx(float *m0[4]) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
                    /* inlined from libsg.h */
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  SgCMtx[0] = (float  [4])_sqc2(auVar1);
  SgCMtx[1] = (float  [4])_sqc2(auVar2);
  SgCMtx[2] = (float  [4])_sqc2(auVar3);
  SgCMtx[3] = (float  [4])_sqc2(auVar4);
  return;
}

void SgSetClipVMtx(float *m0[4]) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
                    /* inlined from libsg.h */
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  SgCMVtx[0] = (float  [4])_sqc2(auVar1);
  SgCMVtx[1] = (float  [4])_sqc2(auVar2);
  SgCMVtx[2] = (float  [4])_sqc2(auVar3);
  SgCMVtx[3] = (float  [4])_sqc2(auVar4);
  return;
}

void SgSetWorkBase(qword *base) {
                    /* end of inlined section */
  SgWorkBase = base;
  return;
}

qword* SgGetWorkBase() {
  return SgWorkBase;
}

void SgSetProjection(float scrz) {
	sceVu0FVECTOR tmp;
	
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined4 uVar2;
  float tmp [4];
  
  auVar1 = _lqc2(CONCAT412(scrz,tmp._0_12_));
  _vdiv(in_vf0,0,auVar1,0);
  uVar2 = _vwaitq();
  _vmulq(in_vf0,uVar2);
  return;
}

float SgGetProjection() {
	sceVu0FVECTOR tmp;
	
  undefined auVar1 [16];
  undefined in_vf1 [16];
  float tmp [4];
  
  auVar1 = _sqc2(in_vf1);
  tmp[3] = SUB164(auVar1 >> 0x60,0);
  return tmp[3];
}

void SgInit3D() {
	u_int prim[4];
	SgSourceChainTag ftag;
	
  sceDmaChan *psVar1;
  sceDmaChan *psVar2;
  uint prim [4];
  SgSourceChainTag ftag;
  
  SgSpotLight = (SgLIGHT *)0x0;
  loadtri2_flg = 1;
  SgPointLight = (SgLIGHT *)0x0;
  SgSpotNum = 0;
  SgPointNum = 0;
  loadbw_flg = 0;
  dvif0 = (sceDmaChan *)sceDmaGetChan(0);
  dvif1 = (sceDmaChan *)sceDmaGetChan(1);
  dgif = (sceDmaChan *)sceDmaGetChan(2);
  dfspr = (sceDmaChan *)sceDmaGetChan(8);
  psVar2 = dgif;
  dfspr->chcr = (tD_CHCR)((uint)dfspr->chcr & 0xffffffbf);
  psVar1 = dvif1;
  psVar2->chcr = (tD_CHCR)((uint)psVar2->chcr | 0x40);
  psVar1->chcr = (tD_CHCR)((uint)psVar1->chcr & 0xffffffbf);
  vu_prog_num = -1;
  wscissor_flg = 0;
  SetClipValue(-1.0,1.0,-1.0,1.0);
  InitialDmaBuffer();
  Set12Register();
  ShadowInit();
  return;
}

void GetMatrixFromQuaternion(float *quat[4], float *qvert) {
	sceVu0FMATRIX rmat;
	sceVu0FMATRIX lmat;
	
  float afVar1 [4];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  float rmat [4] [4];
  float lmat [4] [4];
  
  fVar8 = qvert[2];
  fVar6 = qvert[1];
  fVar7 = *qvert;
  fVar4 = -fVar8;
  fVar2 = -fVar6;
  fVar3 = qvert[3];
  fVar5 = -fVar7;
  auVar9 = _lqc2(CONCAT412(fVar7,CONCAT48(fVar2,CONCAT44(fVar8,fVar3))));
  auVar10 = _lqc2(CONCAT412(fVar6,CONCAT48(fVar7,CONCAT44(fVar3,fVar4))));
  auVar11 = _lqc2(CONCAT412(fVar8,CONCAT48(fVar3,CONCAT44(fVar5,fVar6))));
  auVar12 = _lqc2(CONCAT412(fVar3,CONCAT48(fVar4,CONCAT44(fVar2,fVar5))));
  auVar13 = _lqc2(CONCAT412(fVar5,CONCAT48(fVar2,CONCAT44(fVar8,fVar3))));
  auVar14 = _lqc2(CONCAT412(fVar2,CONCAT48(fVar7,CONCAT44(fVar3,fVar4))));
  auVar15 = _lqc2(CONCAT412(fVar4,CONCAT48(fVar3,CONCAT44(fVar5,fVar6))));
  auVar16 = _lqc2(*(undefined (*) [16])qvert);
  _vmulabc(auVar9,auVar13);
  _vmaddabc(auVar10,auVar13);
  _vmaddabc(auVar11,auVar13);
  auVar13 = _vmaddbc(auVar12,auVar13);
  _vmulabc(auVar9,auVar14);
  _vmaddabc(auVar10,auVar14);
  _vmaddabc(auVar11,auVar14);
  auVar14 = _vmaddbc(auVar12,auVar14);
  _vmulabc(auVar9,auVar15);
  _vmaddabc(auVar10,auVar15);
  _vmaddabc(auVar11,auVar15);
  auVar15 = _vmaddbc(auVar12,auVar15);
  _vmulabc(auVar9,auVar16);
  _vmaddabc(auVar10,auVar16);
  _vmaddabc(auVar11,auVar16);
  auVar9 = _vmaddbc(auVar12,auVar16);
  afVar1 = (float  [4])_sqc2(auVar13);
  *quat = afVar1;
  afVar1 = (float  [4])_sqc2(auVar14);
  quat[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar15);
  quat[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar9);
  quat[3] = afVar1;
  return;
}

void GetMatrixRotateAxis(float *quat[4], float *axis, float theta) {
	sceVu0FVECTOR qvert;
	float theta2;
	
  float fVar1;
  float qvert [4];
  
  fVar1 = SgSinf(theta * 0.5);
  sceVu0ScaleVector(fVar1,(Vector4 *)qvert,(Vector4 *)axis);
  qvert[3] = SgCosf(theta * 0.5);
  GetMatrixFromQuaternion(quat,qvert);
  return;
}

float SgSinf(float rad) {
	float rad;
	float rad;
	
  float fVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar2 = _lqc2((undefined  [16])trad);
  auVar3 = _qmtc2(rad);
  auVar3 = _vmulbc(auVar2,auVar3);
  auVar3 = _vftoi0(auVar3);
  auVar3 = _vitof0(auVar3);
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _qmfc2(SUB164(auVar2,0));
  fVar1 = SUB164(auVar2,0);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + DAT_00355a14;
  }
  if (DAT_00355a18 < fVar1) {
    fVar1 = fVar1 - DAT_00355a1c;
  }
  else if (DAT_00355a20 < fVar1) {
    fVar1 = DAT_00355a24 - fVar1;
  }
  auVar2 = _qmtc2(fVar1);
  _lqc2((undefined  [16])tgsinf[0]);
  auVar3 = _lqc2((undefined  [16])tgsinf[1]);
  auVar2 = _vmove(auVar2);
  _vmulbc(auVar2,auVar2);
  _vmulabc(auVar2,in_vf0);
  auVar4 = _vsubbc(in_vf0,in_vf0);
  auVar5 = _vmulbc(auVar4,auVar2);
  _vmaddabc(auVar5,auVar2);
  auVar5 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar5,auVar2);
  auVar2 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar2 = _vmaddbc(auVar2,auVar3);
  auVar2 = _vminibc(auVar2,in_vf0);
  auVar2 = _vmaxbc(auVar2,auVar4);
  auVar2 = _qmfc2(SUB164(auVar2,0));
  return SUB164(auVar2,0);
}

float SgCosf(float rad) {
  float fVar1;
  
  fVar1 = SgSinf(rad + DAT_00355a28);
  return fVar1;
}

float SgSinfd(float degree) {
	float degree;
	float rad;
	
  float fVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar2 = _lqc2((undefined  [16])trad);
  auVar3 = _qmtc2(degree);
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar3 = _vmulbc(auVar2,auVar3);
  auVar3 = _vftoi0(auVar3);
  auVar3 = _vitof0(auVar3);
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _qmfc2(SUB164(auVar2,0));
  fVar1 = SUB164(auVar2,0);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + DAT_00355a2c;
  }
  if (DAT_00355a30 < fVar1) {
    fVar1 = fVar1 - DAT_00355a34;
  }
  else if (DAT_00355a38 < fVar1) {
    fVar1 = DAT_00355a3c - fVar1;
  }
  auVar2 = _qmtc2(fVar1);
  _lqc2((undefined  [16])tgsinf[0]);
  auVar3 = _lqc2((undefined  [16])tgsinf[1]);
  auVar2 = _vmove(auVar2);
  _vmulbc(auVar2,auVar2);
  _vmulabc(auVar2,in_vf0);
  auVar4 = _vsubbc(in_vf0,in_vf0);
  auVar5 = _vmulbc(auVar4,auVar2);
  _vmaddabc(auVar5,auVar2);
  auVar5 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar5,auVar2);
  auVar2 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar2 = _vmaddbc(auVar2,auVar3);
  auVar2 = _vminibc(auVar2,in_vf0);
  auVar2 = _vmaxbc(auVar2,auVar4);
  auVar2 = _qmfc2(SUB164(auVar2,0));
  return SUB164(auVar2,0);
}

float SgCosfd(float degree) {
  float fVar1;
  
  fVar1 = SgSinfd(degree + 90.0);
  return fVar1;
}

float SgACosf(float ccos) {
  float fVar1;
  
  fVar1 = SgSqrtf(1.0 - ccos * ccos);
  fVar1 = SgAtan2f(fVar1,ccos);
  return fVar1;
}

static void GetATanf(sceVu0FVECTOR *tmpv) {
  float afVar1 [4];
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  
  auVar2 = _lqc2((undefined  [16])*tmpv);
  auVar3 = _lqc2((undefined  [16])tmpv[1]);
  auVar6 = _lqc2((undefined  [16])tmpv[2]);
  auVar4 = _vaddbc(auVar2,in_vf0);
  auVar2 = _vsubbc(auVar2,in_vf0);
  _vdiv(auVar2,0,auVar4,0);
  uVar7 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar7);
  auVar4 = _vmulbc(auVar2,auVar2);
  _vmulabc(auVar2,auVar2);
  auVar5 = _vmulbc(auVar4,auVar2);
  _vmaddabc(auVar5,auVar2);
  auVar5 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar5,auVar2);
  auVar2 = _vmulbc(auVar5,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar2 = _vmaddbc(auVar2,auVar6);
  auVar2 = _vaddbc(auVar2,auVar6);
  afVar1 = (float  [4])_sqc2(auVar2);
  *tmpv = afVar1;
  return;
}

float SgAtanf(float x) {
	sceVu0FVECTOR tmpv[3];
	
  float fVar1;
  float tmpv [3] [4];
  
  if (0.0 <= x) {
    if (1.0 < x) {
      tmpv[0][0] = 1.0 / x;
      tmpv[0][1] = DAT_00355a40;
      tmpv[0][2] = DAT_00355a44;
      tmpv[0][3] = DAT_00355a48;
      tmpv[1][0] = DAT_00355a4c;
      tmpv[1][1] = DAT_00355a50;
      tmpv[1][2] = DAT_00355a54;
      tmpv[1][3] = DAT_00355a58;
      tmpv[2][0] = DAT_00355a5c;
      tmpv[2][1] = DAT_00355a60;
      GetATanf(tmpv);
      tmpv[0][0] = DAT_00355a64 - tmpv[0][0];
    }
    else {
      tmpv[0][1] = DAT_00355a68;
      tmpv[0][2] = DAT_00355a6c;
      tmpv[0][3] = DAT_00355a70;
      tmpv[1][0] = DAT_00355a74;
      tmpv[1][1] = DAT_00355a78;
      tmpv[1][2] = DAT_00355a7c;
      tmpv[1][3] = DAT_00355a80;
      tmpv[2][0] = DAT_00355a84;
      tmpv[2][1] = DAT_00355a88;
      tmpv[0][0] = x;
      GetATanf(tmpv);
    }
  }
  else {
    fVar1 = SgAtanf(-x);
    tmpv[0][0] = -fVar1;
  }
  return tmpv[0][0];
}

float SgAtan2f(float y, float x) {
	float rad;
	
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (x == 0.0) {
    fVar1 = DAT_00355a8c;
    if (0.0 <= y) {
      return DAT_00355a90;
    }
  }
  else {
    fVar1 = SgAtanf(y / x);
    if ((x < fVar2) && (fVar1 = fVar1 + DAT_00355a94, DAT_00355a94 < fVar1)) {
      fVar1 = fVar1 - DAT_00355a98;
    }
  }
  return fVar1;
}

float SgSqrtf(float len) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _qmtc2(len);
  _vsqrt(auVar1);
  uVar2 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar2);
  auVar1 = _qmfc2(SUB164(auVar1,0));
  return SUB164(auVar1,0);
}

float SgRSqrtf(float len) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _qmtc2(len);
  _vrsqrt(in_vf0,auVar1);
  uVar2 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar2);
  auVar1 = _qmfc2(SUB164(auVar1,0));
  return SUB164(auVar1,0);
}

static void GetSgCalclen(float *tmpv) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _lqc2(*(undefined (*) [16])tmpv);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vsqrt(auVar1);
  uVar2 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])tmpv = auVar1;
  return;
}

float SgCalcLen(float x, float y, float z) {
	sceVu0FVECTOR tmpv;
	
  float tmpv [4];
  
  tmpv[0] = x;
  tmpv[1] = y;
  tmpv[2] = z;
  GetSgCalclen(tmpv);
  return tmpv[0];
}

float _CalcLen(float *v0, float *v1) {
	sceVu0FVECTOR tmpv;
	
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  float tmpv [4];
  
  auVar1 = _lqc2(*(undefined (*) [16])v0);
  auVar2 = _lqc2(*(undefined (*) [16])v1);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vsqrt(auVar1);
  uVar3 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar3);
  auVar1 = _sqc2(auVar1);
  tmpv[0] = SUB164(auVar1,0);
  return tmpv[0];
}

void _MulRotMatrix(float *ans[4], float *m0[4], float *m1[4]) {
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  auVar2 = _lqc2((undefined  [16])*m0);
  auVar3 = _lqc2((undefined  [16])m0[1]);
  auVar4 = _lqc2((undefined  [16])m0[2]);
  auVar5 = _lqc2((undefined  [16])*m1);
  auVar6 = _lqc2((undefined  [16])m1[1]);
  auVar7 = _lqc2((undefined  [16])m1[2]);
  _vmulabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar5 = _vmaddbc(auVar4,auVar5);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  auVar6 = _vmaddbc(auVar4,auVar6);
  _vmulabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  auVar2 = _vmaddbc(auVar4,auVar7);
  afVar1 = (float  [4])_sqc2(auVar5);
  *ans = afVar1;
  afVar1 = (float  [4])_sqc2(auVar6);
  ans[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar2);
  ans[2] = afVar1;
  return;
}

void _MulMatrix(float *ans[4], float *m0[4], float *m1[4]) {
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  auVar2 = _lqc2((undefined  [16])*m0);
  auVar3 = _lqc2((undefined  [16])m0[1]);
  auVar4 = _lqc2((undefined  [16])m0[2]);
  auVar5 = _lqc2((undefined  [16])m0[3]);
  auVar6 = _lqc2((undefined  [16])*m1);
  auVar7 = _lqc2((undefined  [16])m1[1]);
  auVar8 = _lqc2((undefined  [16])m1[2]);
  auVar9 = _lqc2((undefined  [16])m1[3]);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar6 = _vmaddbc(auVar5,auVar6);
  _vmulabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  auVar7 = _vmaddbc(auVar5,auVar7);
  _vmulabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddabc(auVar4,auVar8);
  auVar8 = _vmaddbc(auVar5,auVar8);
  _vmulabc(auVar2,auVar9);
  _vmaddabc(auVar3,auVar9);
  _vmaddabc(auVar4,auVar9);
  auVar2 = _vmaddbc(auVar5,auVar9);
  afVar1 = (float  [4])_sqc2(auVar6);
  *ans = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  ans[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  ans[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar2);
  ans[3] = afVar1;
  return;
}

void _SetMulMatrix(float *m0[4], float *m1[4]) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  auVar5 = _lqc2((undefined  [16])*m1);
  auVar6 = _lqc2((undefined  [16])m1[1]);
  auVar7 = _lqc2((undefined  [16])m1[2]);
  auVar8 = _lqc2((undefined  [16])m1[3]);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  _vmaddbc(auVar4,auVar5);
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddbc(auVar4,auVar6);
  _vmulabc(auVar1,auVar7);
  _vmaddabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddbc(auVar4,auVar7);
  _vmulabc(auVar1,auVar8);
  _vmaddabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddbc(auVar4,auVar8);
  return;
}

void _CalcLenASM(float *out, float *v0, float *v1) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*(undefined (*) [16])v0);
  auVar2 = _lqc2(*(undefined (*) [16])v1);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vsqrt(auVar1);
  uVar3 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])out = auVar1;
  return;
}

void _NormalizeVector(float *v, float *v0) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*(undefined (*) [16])v0);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vrsqrt(in_vf0,auVar2);
  _vmul(auVar1,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v = auVar1;
  return;
}

void _NormalizeVector2(float *v, float *v0) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*(undefined (*) [16])v0);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vrsqrt(in_vf0,auVar2);
  uVar3 = _vwaitq();
  _vmulq(auVar1,uVar3);
  auVar1 = _vmulq(in_vf0,uVar3);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v = auVar1;
  return;
}

void _ApplyRotMatrix(float *v0, float *v1) {
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(in_vf4,auVar1);
  _vmaddabc(in_vf5,auVar1);
  auVar1 = _vmaddbc(in_vf6,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void _ApplyMatrixXYZ(float *v0, float *m[4], float *v1) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _lqc2((undefined  [16])*m);
  auVar3 = _lqc2((undefined  [16])m[1]);
  auVar4 = _lqc2((undefined  [16])m[2]);
  _vmulabc(auVar2,auVar1);
  _vmaddabc(auVar3,auVar1);
  auVar1 = _vmaddbc(auVar4,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}
