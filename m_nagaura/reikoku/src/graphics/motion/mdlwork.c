// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#67,  not equal)
enum {
	PLYR_INIT_LOAD_SE_REQ = 0,
	PLYR_INIT_LOAD_SE_WAIT = 1,
	PLYR_INIT_LOAD_TEX_REQ = 2,
	PLYR_INIT_LOAD_TEX_SYNC = 3,
	PLYR_INIT_LOAD_MPK_REQ = 4,
	PLYR_INIT_LOAD_MPK_SYNC = 5,
	PLYR_INIT_LOAD_ACS_REQ = 6,
	PLYR_INIT_LOAD_ACS_SYNC = 7,
	PLYR_INIT_LOAD_BWC_REQ = 8,
	PLYR_INIT_LOAD_BWC_SYNC = 9,
	PLYR_INIT_LOAD_CLT_REQ = 10,
	PLYR_INIT_LOAD_CLT_SYNC = 11,
	PLYR_INIT_LOAD_ANM_REQ = 12,
	PLYR_INIT_LOAD_ANM_SYNC = 13
};

typedef struct {
	u_short pk2;
	u_short mpk;
	u_short acs;
	u_short anm;
	u_short bwc;
	u_short clt;
} PLYR_FILE_ID;

static PLYR_FILE_ID plyr_file_id[0] = {
};
u_int *plyr_clut_addr = NULL;
u_int *plyr_bwc_addr = NULL;

void ManmdlSetAlpha(void *sgd_top, u_char alpha) {
	SgMaterial *matp;
	u_int *phead;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)sgd_top + 0x10);
  uVar2 = *(uint *)((int)sgd_top + 0xc);
  if (uVar2 < uVar1) {
    do {
      *(float *)(uVar2 + 0x2c) = (float)((int)(char)alpha & 0xff);
      uVar2 = uVar2 + 0xb0;
    } while (uVar2 < uVar1);
  }
  return;
}

char motCheckTrRateMdl(u_int mdl_no) {
  if ((((mdl_no != 0x20) && (mdl_no != 0x22)) && (mdl_no != 0x23)) && (mdl_no != 0x24)) {
    return '\0';
  }
  return '\x01';
}

u_int* MpkMapUnit(u_int *mpk_p) {
  uint uVar1;
  uint *puVar2;
  
  puVar2 = mpk_p + 4;
  uVar1 = *puVar2;
  while (uVar1 - 1 < 0x7fffffff) {
    SgMapUnit(puVar2 + 4);
    puVar2 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 0x10);
    uVar1 = *puVar2;
  }
  return puVar2;
}

void DrawGirlSubObj(u_int *mpk_p, u_char alpha) {
	u_int i;
	u_int obj_num;
	sceVu0FVECTOR tmpvec;
	sceVu0FVECTOR vf2reg;
	HeaderSection *hs;
	SgCOORDUNIT *cp;
	char obj_id[2][2];
	
  char *pcVar1;
  uint uVar2;
  _SgCOORDUNIT *coordp;
  void *sgd_top;
  uint uVar3;
  float tmpvec [4];
  float vf2reg [4];
  char obj_id [2] [2];
  
  uVar2 = *mpk_p;
  coordp = (_SgCOORDUNIT *)mpk_p[10];
  pcVar1 = obj_id[1] + 1;
  uVar3 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar3) =
       *(uint *)(pcVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)DAT_00356bb0 >> (3 - uVar3) * 8;
  obj_id = DAT_00356bb0;
  uVar3 = 1;
  GetVF2Register(vf2reg);
  tmpvec[0] = 0.0;
  tmpvec[1] = 0.0;
  tmpvec[2] = 0.0;
  tmpvec[3] = 0.0;
  if (1 < uVar2) {
    do {
      sgd_top = GetFileInPak(mpk_p,uVar3);
      if ((uVar3 < 7) && (2 < uVar3)) {
        SetVF2Register(tmpvec);
      }
      else {
        SetVF2Register(vf2reg);
      }
      ManmdlSetAlpha(sgd_top,alpha);
      uVar3 = uVar3 + 1;
      ManTexflush();
      SortUnitRefCoordKind(sgd_top,coordp,-1);
    } while (uVar3 < uVar2);
  }
  return;
}

void DrawEneSubObj(u_int *mpk_p, u_char alpha1, u_char alpha2) {
	u_int i;
	HeaderSection *hs;
	SgCOORDUNIT *cp;
	u_int obj_num;
	u_char alpha;
	
  uint uVar1;
  _SgCOORDUNIT *coordp;
  uint uVar2;
  void *sgd_top;
  uchar alpha;
  uint num;
  uint uVar3;
  
  uVar1 = *mpk_p;
  coordp = (_SgCOORDUNIT *)mpk_p[10];
  if (1 < uVar1) {
    uVar2 = 0;
    num = 1;
    do {
      alpha = alpha2;
      if (uVar2 != 0) {
        alpha = alpha1;
      }
      uVar3 = num + 1;
      sgd_top = GetFileInPak(mpk_p,num);
      ManmdlSetAlpha(sgd_top,alpha);
      ManTexflush();
      SortUnitRefCoordKind(sgd_top,coordp,-1);
      uVar2 = uVar3 ^ 1;
      num = uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}

void SortUnitRefCoordKind(void *sgd_top, SgCOORDUNIT *coordp, int num) {
	int old_di;
	
  long lVar1;
  
  lVar1 = DIntr();
  if ((*(byte *)((int)sgd_top + 5) & 1) == 0) {
    SortUnitRefCoord(sgd_top,coordp,num);
  }
  else {
    SortUnitRefCoordP(sgd_top,coordp,num);
  }
  if (lVar1 != 0) {
    EIntr();
    return;
  }
  return;
}

void SortUnitRefCoordP(void *sgd_top, SgCOORDUNIT *coordp, int pnum) {
	int i;
	u_int *pk;
	
  uint *prim;
  uint **ppuVar1;
  int iVar2;
  
  lcp = coordp;
  if (((uint)coordp & 0xf) == 0) {
    blocksm = *(int *)((int)sgd_top + 0x14);
    save_tri2_pointer = (uint *)0x0;
    save_bw_pointer = (uint *)0x0;
    sgd_top_addr = sgd_top;
    ClearMaterialCache((HeaderSection *)sgd_top);
    SetUpSortUnit();
    if (pnum < 0) {
      iVar2 = 1;
      SgSortPreProcessP(*(uint **)((int)sgd_top + 0x18));
      ppuVar1 = (uint **)((int)sgd_top + 0x1c);
      if (1 < blocksm) {
        prim = *ppuVar1;
        while( true ) {
          iVar2 = iVar2 + 1;
          ppuVar1 = ppuVar1 + 1;
          SgSortUnitPrimP(prim);
          if (blocksm <= iVar2) break;
          prim = *ppuVar1;
        }
      }
    }
    else if (pnum == 0) {
      save_bw_pointer = (uint *)&_heap_size;
      save_tri2_pointer = (uint *)&_heap_size;
      SgSortPreProcessP(*(uint **)((int)sgd_top + 0x18));
    }
    else {
      SgSortUnitPrimP(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
    }
    return;
  }
  printf("SgSortUnitP Data broken. %x\n");
  return;
}

void SortUnitRefCoord(void *sgd_top, SgCOORDUNIT *coordp, int pnum) {
	int i;
	u_int *pk;
	
  uint *puVar1;
  uint **ppuVar2;
  int iVar3;
  
  lphead = *(PHEAD **)((int)sgd_top + 0x10);
  blocksm = *(int *)((int)sgd_top + 0x14);
  sgd_top_addr = sgd_top;
  lcp = coordp;
  ClearMaterialCache((HeaderSection *)sgd_top);
  SetUpSortUnit();
  LoadSgProg(0);
  if (pnum < 0) {
    iVar3 = 1;
    SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
    ppuVar2 = (uint **)((int)sgd_top + 0x1c);
    if (1 < blocksm + -1) {
      puVar1 = *ppuVar2;
      while( true ) {
        iVar3 = iVar3 + 1;
        ppuVar2 = ppuVar2 + 1;
        SgSortUnitPrim(puVar1);
        if (blocksm + -1 <= iVar3) break;
        puVar1 = *ppuVar2;
      }
    }
    puVar1 = *(uint **)((int)sgd_top + iVar3 * 4 + 0x18);
    if (puVar1 != (uint *)0x0) {
      SgSortUnitPrimPost(puVar1);
      return;
    }
    return;
  }
  if (pnum == 0) {
    SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
    return;
  }
  if (pnum == blocksm + -1) {
    SgSortUnitPrimPost(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
    return;
  }
  SgSortUnitPrim(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
  return;
}

void InitEneVramCtrl() {
	u_int i;
	
  ENE_VRAM_CTRL *ev_ctrl;
  uint uVar1;
  
  uVar1 = 0;
  ev_ctrl = ene_vram_ctrl;
  do {
    uVar1 = uVar1 + 1;
    InitEneVramCtrlSub(ev_ctrl);
    ev_ctrl = ev_ctrl + 1;
  } while (uVar1 < 4);
  return;
}

void InitEneVramCtrlSub(ENE_VRAM_CTRL *ev_ctrl) {
  ev_ctrl->offset = 0;
  ev_ctrl->mdl_no = 0xffff;
  ev_ctrl->mdl_p = (uint *)0x0;
  ev_ctrl->flg = 0;
  return;
}

void SetEneTexture(u_int work_id) {
	u_int *mdl_p;
	u_int offset;
	u_int i;
	u_int num;
	u_int mdl_no;
	
  bool bVar1;
  uint *mdl_p;
  ANI_CTRL *pAVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_s2_lo;
  
  uVar7 = (uint)*(ushort *)(*(int *)((int)ene_wrk + work_id * 0x430 + 0xb0) + 0x1a);
  pAVar2 = motGetAniMdl(work_id);
  mdl_p = pAVar2->mdl_p;
  uVar6 = 0;
  puVar4 = &ene_vram_ctrl[0].mdl_no;
  do {
    if (*puVar4 == uVar7) {
      return;
    }
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 4;
  } while (uVar6 < 4);
  uVar6 = 0;
  puVar4 = &ene_vram_ctrl[0].flg;
  do {
    if (*puVar4 == 0) {
      puVar4[1] = uVar7;
      *puVar4 = 1;
      ((ENE_VRAM_CTRL *)(puVar4 + -1))->mdl_p = mdl_p;
      if ((0x2c < uVar7) || (uVar7 < 0x2a)) {
        if (uVar6 == 0) {
          ene_vram_ctrl[0].offset = 0x2d00;
        }
        else {
          puVar4[2] = 0x3160;
        }
      }
      else if (uVar6 == 0) {
        ene_vram_ctrl[0].offset = 0x2d00;
      }
      else if (uVar6 == 1) {
        if (ene_vram_ctrl[0].mdl_no - 0x2a < 3) {
          ene_vram_ctrl[1].offset = 0x2fbc;
        }
        else {
          ene_vram_ctrl[1].offset = 0x3160;
        }
      }
      else {
        if (uVar6 != 2) {
          unaff_s2_lo = puVar4[2];
          break;
        }
        ene_vram_ctrl[2].offset = 0x3278;
      }
      unaff_s2_lo = puVar4[2];
      break;
    }
    iVar3 = 3;
    if (uVar7 < 0x2a) {
      iVar3 = 2;
    }
    iVar5 = 2;
    if (0x2c >= uVar7) {
      iVar5 = iVar3;
    }
    bVar1 = uVar6 == iVar5 - 1U;
    uVar6 = uVar6 + 1;
    if (bVar1) {
      motPrintVramCtrl();
      return;
    }
    puVar4 = puVar4 + 4;
  } while (uVar6 < 4);
  motPrintVramCtrl();
  SetEneVram(mdl_p,unaff_s2_lo);
  return;
}

void SetEneVram(u_int *mdl_p, int offset) {
	u_int *mpk_p;
	u_int *pk2_p;
	
  uint *mpk_p;
  uint *pak_addr;
  
  mpk_p = (uint *)GetFileInPak(mdl_p,0);
  pak_addr = (uint *)GetFileInPak(mdl_p,1);
  if (offset < 0) {
    if (mpk_p[1] == 0) {
      return;
    }
    mpk_p[1] = 0;
  }
  else {
    if (mpk_p[1] == 1) {
      return;
    }
    mpk_p[1] = 1;
    SetManmdlTm2(pak_addr,offset,'\0');
  }
  MpkAddTexOffset(mpk_p,offset);
  return;
}

void ReleaseEneTexture(u_int work_id) {
	u_int *mdl_p;
	u_int mdl_no;
	u_int offset;
	u_int i;
	
  bool bVar1;
  short sVar2;
  uint *mdl_p;
  ANI_CTRL *pAVar3;
  ENE_VRAM_CTRL *ev_ctrl;
  uint uVar4;
  int *piVar5;
  ENE_WRK *pEVar6;
  int unaff_s4_lo;
  
  pEVar6 = ene_wrk;
  sVar2 = *(short *)(*(int *)((int)ene_wrk + work_id * 0x430 + 0xb0) + 0x1a);
  pAVar3 = motGetAniMdl(work_id);
  mdl_p = pAVar3->mdl_p;
  uVar4 = 0;
  do {
    bVar1 = uVar4 != work_id;
    uVar4 = uVar4 + 1;
    if (((bVar1) && ((pEVar6->sta & 1) != 0)) &&
       (*(short *)((int)(pEVar6->mpos).p0[3] + 0x1a) == sVar2)) {
      return;
    }
    pEVar6 = (ENE_WRK *)((int)&pEVar6[1].move_box.spd.z + 2);
  } while (uVar4 < 4);
  uVar4 = 0;
  piVar5 = &ene_vram_ctrl[0].offset;
  ev_ctrl = ene_vram_ctrl;
  do {
    if (3 < uVar4) {
LAB_00166fd0:
      motPrintVramCtrl();
      SetEneVram(mdl_p,-unaff_s4_lo);
      return;
    }
    if (ev_ctrl->mdl_p == mdl_p) {
      unaff_s4_lo = *piVar5;
      InitEneVramCtrlSub(ev_ctrl);
      goto LAB_00166fd0;
    }
    ev_ctrl = ev_ctrl + 1;
    if (uVar4 == 3) {
      motPrintVramCtrl();
      return;
    }
    piVar5 = piVar5 + 4;
    uVar4 = uVar4 + 1;
  } while( true );
}

void SendManMdlTex() {
	u_int i;
	
  uint *pak_addr;
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  pEVar1 = ene_vram_ctrl;
  do {
    uVar2 = uVar2 + 1;
    if (pEVar1->flg != 0) {
      pak_addr = (uint *)GetFileInPak(pEVar1->mdl_p,1);
      SetManmdlTm2(pak_addr,pEVar1->offset,'\0');
    }
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  return;
}

void SetTextureToScene() {
	u_int i;
	int offset;
	
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  BackupEneVramCtrl();
  pEVar1 = ene_vram_ctrl;
  do {
    if (pEVar1->flg == 1) {
      SetEneVram(pEVar1->mdl_p,-pEVar1->offset);
    }
    uVar2 = uVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  InitEneVramCtrl();
  return;
}

void SetTextureAfterScene() {
	u_int i;
	
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  SetupEneVramCtrl();
  pEVar1 = ene_vram_ctrl;
  do {
    uVar2 = uVar2 + 1;
    if (pEVar1->flg != 0) {
      SetEneVram(pEVar1->mdl_p,pEVar1->offset);
    }
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  return;
}

void MpkAddTexOffset(u_int *mpk_p, int offset) {
  uint *sgd_top;
  uint *puVar1;
  
  puVar1 = mpk_p + 4;
  if (*puVar1 - 1 < 0x7fffffff) {
    sgd_top = mpk_p + 8;
    do {
      SgdAddTexOffset(sgd_top,offset);
      puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffffffc) + 0x10);
      sgd_top = puVar1 + 4;
    } while (*puVar1 - 1 < 0x7fffffff);
  }
  return;
}

void SetManmdlTm2(u_int *pak_addr, int offset, char mode) {
	u_int tm2_num;
	u_int i;
	u_int *tm2_addr;
	
  uint uVar1;
  void *tm2_addr;
  uint num;
  
  uVar1 = *pak_addr;
  num = 0;
  if (uVar1 != 0) {
    do {
      tm2_addr = GetFileInPak(pak_addr,num);
      if (mode == '\0') {
        MakeTim2SendPacket_3Dpkt((uint)tm2_addr,offset);
      }
      else {
        MakeTim2SendPacket((uint)tm2_addr,offset);
      }
      num = num + 1;
    } while (num < uVar1);
  }
  return;
}

void BackupEneVramCtrl() {
	u_int i;
	
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ENE_VRAM_CTRL *pEVar6;
  uint uVar7;
  ENE_VRAM_CTRL *pEVar8;
  
  pEVar8 = ene_vram_bak;
  pEVar6 = ene_vram_ctrl;
  uVar7 = 0;
  do {
    uVar2 = *(ulong *)pEVar6;
    uVar3 = *(ulong *)&pEVar6->mdl_no;
    puVar1 = (undefined *)((int)&pEVar8->flg + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    *(ulong *)pEVar8 = uVar2;
    puVar1 = (undefined *)((int)&pEVar8->offset + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
    uVar7 = uVar7 + 1;
    *(ulong *)&pEVar8->mdl_no = uVar3;
    pEVar8 = pEVar8 + 1;
    pEVar6 = pEVar6 + 1;
  } while (uVar7 < 4);
  return;
}

void SetupEneVramCtrl() {
	u_int i;
	
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ENE_VRAM_CTRL *pEVar6;
  uint uVar7;
  ENE_VRAM_CTRL *pEVar8;
  
  pEVar8 = ene_vram_ctrl;
  pEVar6 = ene_vram_bak;
  uVar7 = 0;
  do {
    uVar2 = *(ulong *)pEVar6;
    uVar3 = *(ulong *)&pEVar6->mdl_no;
    puVar1 = (undefined *)((int)&pEVar8->flg + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    *(ulong *)pEVar8 = uVar2;
    puVar1 = (undefined *)((int)&pEVar8->offset + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
    uVar7 = uVar7 + 1;
    *(ulong *)&pEVar8->mdl_no = uVar3;
    pEVar8 = pEVar8 + 1;
    pEVar6 = pEVar6 + 1;
  } while (uVar7 < 4);
  return;
}

void motPrintVramCtrl() {
	u_int i;
	
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

void ManTexflush() {
                    /* end of inlined section */
  return;
}

void SgdAddTexOffset(void *sgd_top, int offset) {
	u_int i;
	u_int *p;
	u_int *nextprim;
	u_int *pk;
	
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)sgd_top + 0x14) != 0) {
    iVar1 = 0;
    do {
      ppiVar3 = *(int ***)((int)sgd_top + iVar1 + 0x18);
      if ((ppiVar3 == (int **)0x0) || (*ppiVar3 == (int *)0x0)) {
        uVar2 = *(uint *)((int)sgd_top + 0x14);
      }
      else {
        do {
          if (ppiVar3[1] == (int *)0x1) {
            if (ppiVar3[0xc] == (int *)0x6) {
              ppiVar3[10] = (int *)((int)ppiVar3[10] + offset);
              ppiVar3[0xb] = ppiVar3[0xb] + offset * 8;
              ppiVar3 = (int **)*ppiVar3;
            }
            else {
              ppiVar3 = (int **)*ppiVar3;
            }
          }
          else {
            ppiVar3 = (int **)*ppiVar3;
          }
        } while (*ppiVar3 != (int *)0x0);
        uVar2 = *(uint *)((int)sgd_top + 0x14);
      }
      uVar4 = uVar4 + 1;
      iVar1 = uVar4 * 4;
    } while (uVar4 < uVar2);
  }
  return;
}

u_int* GetOkuraBuffer(u_char work_id) {
  ANI_CTRL *pAVar1;
  
  pAVar1 = motGetAniMdl((int)(char)work_id & 0xff);
  return pAVar1->anm_p + 0x26000;
}

void ReqMsnInitPlyr(u_char msn_no) {
  plyr_init_ctrl.msn_no = msn_no;
  plyr_init_ctrl.step = '\0';
  return;
}

char MsnInitPlyr() {
	static char sync_flg;
	char pk2_id;
	
  int iVar1;
  int iVar2;
  
  if (plyr_init_ctrl.msn_no != '\0') {
    mim_mepati_id = '\x05';
    mim_nigiri_l_id = '\x06';
    mim_nigiri_r_id = '\a';
    iVar2 = (int)(char)cribo.costume;
  }
  else {
    mim_nigiri_l_id = '\x01';
    iVar2 = 4;
    mim_nigiri_r_id = 0xff;
    mim_mepati_id = '\0';
  }
  plyr_mdl_no = plyr_init_ctrl.msn_no == '\0';
  switch(plyr_init_ctrl.step) {
  case '\0':
    init_load_id = SeFileLoadAndSet((int)plyr_mdl_no + 0x549,2);
    plyr_init_ctrl.step = '\x01';
    break;
  case '\x01':
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return '\0';
    }
    plyr_init_ctrl.step = '\x02';
  case '\x02':
    init_load_id = LoadReq((uint)*(ushort *)(&plyr_file_id + iVar2 * 0xc),0x9a0000);
    plyr_init_ctrl.step = '\x03';
    break;
  case '\x03':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 == 0) {
      return '\0';
    }
    SetManmdlTm2((uint *)0x9a0000,0,'\x01');
    plyr_init_ctrl.step = '\x04';
    sync_flg_195 = 2;
    return '\0';
  case '\x04':
    if ('\0' < sync_flg_195) {
      sync_flg_195 = sync_flg_195 + -1;
      return '\0';
    }
    init_load_id = LoadReq((uint)*(ushort *)(iVar2 * 0xc + 0x2fc8aa),0x9a0000);
    plyr_init_ctrl.step = '\x05';
    break;
  case '\x05':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 != 0) {
      init_load_adr = PlayerModelInit();
      plyr_init_ctrl.step = '\x06';
      return '\0';
    }
    return '\0';
  case '\x06':
    init_load_id = LoadReq((uint)*(ushort *)(iVar2 * 0xc + 0x2fc8ac),init_load_adr);
    plyr_init_ctrl.step = '\a';
    break;
  case '\a':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 != 0) {
      init_load_adr = PlayerAccessoryInit(init_load_adr);
      plyr_init_ctrl.step = '\b';
      return '\0';
    }
    return '\0';
  case '\b':
    init_load_id = LoadReq((uint)*(ushort *)(iVar2 * 0xc + 0x2fc8b0),init_load_adr);
    plyr_init_ctrl.step = '\t';
    break;
  case '\t':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 == 0) {
      return '\0';
    }
    plyr_bwc_addr = (uint *)init_load_adr;
    init_load_adr = (int)GetPakTaleAddr((void *)init_load_adr);
    plyr_init_ctrl.step = '\n';
    return '\0';
  case '\n':
    init_load_id = LoadReq((uint)*(ushort *)(iVar2 * 0xc + 0x2fc8b2),init_load_adr);
    plyr_init_ctrl.step = '\v';
    break;
  case '\v':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 == 0) {
      return '\0';
    }
    plyr_clut_addr = (uint *)init_load_adr;
    init_load_adr = (int)GetPakTaleAddr(plyr_bwc_addr);
    plyr_init_ctrl.step = '\f';
    return '\0';
  case '\f':
    plyr_init_ctrl.step = '\r';
    init_load_id = LoadReq((uint)*(ushort *)(iVar2 * 0xc + 0x2fc8ae),0x870000);
    return '\0';
  case '\r':
    iVar2 = IsLoadEnd(init_load_id);
    if (iVar2 == 0) {
      return '\0';
    }
    motInitPlayerAnm(plyr_mdl_no);
    motInitMsn();
    return '\x01';
  default:
    return '\0';
  }
  return '\0';
}

void motInitMsn() {
  motInitAniMdlBuf();
  motInitPacketCtrl();
  InitEneVramCtrl();
  motInitEneKuttuki();
  InitPlyrAcsAlpha();
  InitQuake();
  motInitPlyrAct();
  return;
}

void motInitAniMdlBuf() {
  ANI_MDL_CTRL *am_ctrl;
  
  am_ctrl = ani_mdl_ctrl;
  do {
    motInitAniMdlBufSub(am_ctrl);
    am_ctrl = am_ctrl + 1;
  } while (am_ctrl < rope_ctrl);
  return;
}

void motInitAniMdlBufSub(ANI_MDL_CTRL *am_ctrl) {
  am_ctrl->pkt_no = '\0';
  am_ctrl->anm_no = -1;
  am_ctrl->anm_p = (uint *)0x0;
  am_ctrl->map_flg = '\0';
  return;
}

u_char motSetAniMdlBuf(u_int anm_no, u_int *anm_p) {
	u_int i;
	u_int j;
	u_int pkt_no;
	
  uint uVar1;
  short *psVar2;
  uint uVar3;
  ANI_MDL_CTRL *pAVar4;
  uchar uVar5;
  
  uVar5 = '\0';
  uVar1 = 1;
  pAVar4 = ani_mdl_ctrl;
  do {
    pAVar4 = pAVar4 + 1;
    if (pAVar4->anm_no == -1) {
      psVar2 = &ani_mdl_ctrl[1].anm_no;
      uVar3 = 1;
      do {
        uVar3 = uVar3 + 1;
        if (*(uint **)(psVar2 + 1) == anm_p) {
          if ((ushort)*psVar2 == anm_no) {
            uVar5 = uVar5 + '\x01';
          }
        }
        psVar2 = psVar2 + 6;
      } while (uVar3 < 0x14);
      pAVar4->pkt_no = uVar5;
      pAVar4->anm_no = (short)anm_no;
      pAVar4->anm_p = anm_p;
      pAVar4->map_flg = '\0';
      return (uchar)uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x14);
  return 0xff;
}

void motReleaseOneAniMdlBuf(u_int anm_no, u_int *anm_p) {
	u_int i;
	u_int j;
	
  ENE_PKT_CTRL *pEVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar2 = 0xc;
  while( true ) {
    if ((*(uint **)((int)&ani_mdl_ctrl[0].anm_p + iVar2) == anm_p) &&
       (*(ushort *)((int)&ani_mdl_ctrl[0].anm_no + iVar2) == anm_no)) {
      motInitAniMdlBufSub((ANI_MDL_CTRL *)(&ani_mdl_ctrl[0].map_flg + iVar2));
      uVar4 = 0;
      puVar3 = &ene_pkt_ctrl[0].pkt_no;
      pEVar1 = ene_pkt_ctrl;
      do {
        uVar4 = uVar4 + 1;
        if (pEVar1->buf_no == uVar5) {
          pEVar1->buf_no = 0xff;
          *puVar3 = 0xff;
        }
        puVar3 = puVar3 + 2;
        pEVar1 = pEVar1 + 1;
      } while (uVar4 < 4);
    }
    uVar5 = uVar5 + 1;
    if (0x13 < uVar5) break;
    iVar2 = uVar5 * 0xc;
  }
  return;
}

void motReleaseAniMdlBuf(u_int anm_no, u_int *anm_p) {
  ENE_PKT_CTRL *pEVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  iVar2 = 0xc;
  while( true ) {
    if ((*(uint **)((int)&ani_mdl_ctrl[0].anm_p + iVar2) == anm_p) &&
       (*(ushort *)((int)&ani_mdl_ctrl[0].anm_no + iVar2) == anm_no)) {
      motInitAniMdlBufSub((ANI_MDL_CTRL *)(&ani_mdl_ctrl[0].map_flg + iVar2));
      uVar4 = 0;
      puVar3 = &ene_pkt_ctrl[0].pkt_no;
      pEVar1 = ene_pkt_ctrl;
      do {
        uVar4 = uVar4 + 1;
        if (pEVar1->buf_no == uVar5) {
          pEVar1->buf_no = 0xff;
          *puVar3 = 0xff;
        }
        puVar3 = puVar3 + 2;
        pEVar1 = pEVar1 + 1;
      } while (uVar4 < 4);
    }
    uVar5 = uVar5 + 1;
    if (0x13 < uVar5) break;
    iVar2 = uVar5 * 0xc;
  }
  return;
}

ANI_CTRL* motGetAniMdl(u_int work_no) {
	u_int i;
	u_int anm_no;
	u_int pkt_no;
	ANI_CTRL *ani_ctrl;
	
  short sVar1;
  uint uVar2;
  ANI_CTRL *pAVar3;
  
  pAVar3 = (ANI_CTRL *)0x0;
  sVar1 = *(short *)(*(int *)((int)ene_wrk + work_no * 0x430 + 0xb0) + 0x1c);
  if (sVar1 == ani_mdl_ctrl[1].anm_no) {
    uVar2 = 2;
    if (ene_pkt_ctrl[work_no].pkt_no == ani_mdl_ctrl[1].pkt_no) {
      pAVar3 = ani_mdl + 1;
      goto LAB_001679ec;
    }
  }
  else {
    uVar2 = 2;
  }
  while (uVar2 < 0x14) {
    if (sVar1 == ani_mdl_ctrl[uVar2].anm_no) {
      if (ene_pkt_ctrl[work_no].pkt_no == ani_mdl_ctrl[uVar2].pkt_no) {
        pAVar3 = ani_mdl + uVar2;
        break;
      }
      uVar2 = uVar2 + 1;
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
LAB_001679ec:
  uVar2 = 0;
  if (pAVar3 == (ANI_CTRL *)0x0) {
    do {
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
  }
  return pAVar3;
}

void motInitPacketCtrl() {
	u_int i;
	
  uchar *puVar1;
  ENE_PKT_CTRL *pEVar2;
  uint uVar3;
  
  uVar3 = 0;
  pEVar2 = ene_pkt_ctrl;
  puVar1 = &ene_pkt_ctrl[0].pkt_no;
  do {
    *puVar1 = 0xff;
    uVar3 = uVar3 + 1;
    pEVar2->buf_no = 0xff;
    puVar1 = puVar1 + 2;
    pEVar2 = pEVar2 + 1;
  } while (uVar3 < 4);
  return;
}

void motSetAnmPacket(u_char no) {
	u_int i;
	
  uint uVar1;
  uint uVar2;
  ANI_MDL_CTRL *pAVar3;
  
  uVar1 = (int)(char)no & 0xff;
  pAVar3 = ani_mdl_ctrl;
  uVar2 = 0;
  while ((pAVar3->anm_no != *(short *)(*(int *)((int)ene_wrk + uVar1 * 0x430 + 0xb0) + 0x1c) ||
         (pAVar3->map_flg != '\0'))) {
    uVar2 = uVar2 + 1;
    pAVar3 = pAVar3 + 1;
    if (0x13 < uVar2) {
      return;
    }
  }
  pAVar3->map_flg = '\x01';
  ene_pkt_ctrl[uVar1].pkt_no = pAVar3->pkt_no;
  ene_pkt_ctrl[uVar1].buf_no = (uchar)uVar2;
  return;
}

void motReleaseAnmPacket(u_char no) {
  short sVar1;
  ANI_MDL_CTRL *pAVar2;
  uint uVar3;
  
  uVar3 = (int)(char)no & 0xff;
  pAVar2 = ani_mdl_ctrl;
  sVar1 = ani_mdl_ctrl[0].anm_no;
  while( true ) {
    if (sVar1 == *(short *)(*(int *)((int)ene_wrk + uVar3 * 0x430 + 0xb0) + 0x1c)) {
      if (pAVar2->pkt_no == ene_pkt_ctrl[uVar3].pkt_no) {
        pAVar2->map_flg = '\0';
        ene_pkt_ctrl[uVar3].buf_no = 0xff;
        ene_pkt_ctrl[uVar3].pkt_no = 0xff;
        return;
      }
    }
    if (&ani_mdl_ctrl[0x13].field_0xb < pAVar2 + 1) break;
    sVar1 = pAVar2[1].anm_no;
    pAVar2 = pAVar2 + 1;
  }
  return;
}

void motEneTexAnm(ANI_CTRL *ani_ctrl, u_int work_id) {
	u_int *pk2_p;
	u_int i;
	u_int offset;
	static u_int cnt = 0;
	
  bool bVar1;
  uint *pak_addr;
  uint uVar2;
  int num;
  ENE_VRAM_CTRL *pEVar3;
  int unaff_s1_lo;
  
  if ((sys_wrk.count & 1) != 0) {
    cnt_229 = cnt_229 + 1;
  }
  num = 7 - cnt_229 % 7;
  if ((cnt_229 / 7 & 1U) == 0) {
    num = cnt_229 % 7;
  }
  pak_addr = (uint *)GetFileInPak(ani_ctrl->tanm_p,num);
  pEVar3 = ene_vram_ctrl;
  uVar2 = 0;
  while( true ) {
    if (pEVar3->mdl_p == ani_ctrl->mdl_p) {
      unaff_s1_lo = pEVar3->offset;
    }
    bVar1 = uVar2 == 3;
    uVar2 = uVar2 + 1;
    if (bVar1) break;
    pEVar3 = pEVar3 + 1;
    if (3 < uVar2) {
      SetManmdlTm2(pak_addr,unaff_s1_lo,'\0');
      return;
    }
  }
  return;
}

void motInitEneKuttuki() {
  ENE_CHILD_CTRL *pEVar1;
  
  pEVar1 = ene_child_ctrl;
  do {
    (&pEVar1->bone_id)[1] = '\0';
    pEVar1->bone_id = '\0';
    pEVar1->r = 0.0;
    (&pEVar1->r)[1] = 0.0;
    pEVar1 = pEVar1 + 1;
  } while (pEVar1 < &quake);
  return;
}

void motSetEnemyKuttuki(u_char work_id, u_char bone_id, float radius, float ry) {
	short int bone_list[1];
	
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  ushort bone_list [1];
  
  uVar2 = (int)(char)work_id & 0xff;
  uVar3 = 0;
  if (((int)(char)bone_id & 0xffU) == 0) {
    uVar3 = (int)(char)bone_id & 0xffU;
  }
  bone_list[0] = 0xc;
  if (uVar2 < 4) {
    uVar1 = *(uchar *)(bone_list + uVar3);
    ene_child_ctrl[uVar2].r = radius;
    ene_child_ctrl[uVar2].ry = ry;
    ene_child_ctrl[uVar2].flg = '\x01';
    ene_child_ctrl[uVar2].bone_id = uVar1;
  }
  return;
}

void motReleaseEnemyKuttuki(u_char work_id) {
  if (((int)(char)work_id & 0xffU) < 4) {
    ene_child_ctrl[(int)(char)work_id & 0xffU].flg = '\0';
  }
  return;
}

void SetPlyrClut(int bw_flg) {
	u_int *clut_addr;
	u_int i;
	u_int num;
	
  uint uVar1;
  void *tm2_addr;
  uint num;
  uint *pak_head;
  
  pak_head = plyr_bwc_addr;
  if (bw_flg == 0) {
    pak_head = plyr_clut_addr;
  }
  uVar1 = *pak_head;
  num = 0;
  if (uVar1 != 0) {
    do {
      tm2_addr = GetFileInPak(pak_head,num);
      num = num + 1;
      MakeTim2SendPacket((uint)tm2_addr,0);
    } while (num < uVar1);
  }
  return;
}
