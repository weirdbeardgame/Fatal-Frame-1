// STATUS: NOT STARTED

typedef struct {
	SgLIGHT *lights;
	SgLIGHT *plights;
	SgLIGHT *slights;
	int lnum;
	int pnum;
	int snum;
	int lmax;
	int pmax;
	int smax;
	u_int *ldata;
	u_int *pdata;
	u_int *sdata;
} ROOM_LIGHT;

static char *room_name[0] = {
};
static u_int *ldata_top;
static u_int *pdata_top;
static u_int *sdata_top;
static sceVu0FVECTOR le_ambient;
static SgLIGHT le_lights[3];
static SgLIGHT le_plights[16];
static SgLIGHT le_slights[16];
static int fog_mode;

void ReadLights(ROOM_LIGHT *rdata, void *buf) {
	int num;
	int i;
	u_int *prim;
	sceVu0FVECTOR *pvec;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = *(uint **)((int)buf + 0x18);
  rdata->sdata = (uint *)0x0;
  uVar2 = *puVar1;
  rdata->pdata = (uint *)0x0;
  rdata->ldata = (uint *)0x0;
  if (uVar2 != 0) {
    uVar3 = puVar1[1];
    do {
      if (uVar3 == 0xb) {
        uVar8 = puVar1[3];
        if (puVar1[2] == 1) {
          rdata->pdata = puVar1;
          if (rdata->pnum < (int)uVar8) {
            uVar8 = rdata->pnum;
          }
          if ((rdata->plights != (SgLIGHT *)0x0) && (0 < (int)uVar8)) {
            do {
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else if (puVar1[2] == 0) {
          puVar9 = (undefined8 *)(puVar1 + 4);
          rdata->ldata = puVar1;
          if (rdata->lnum < (int)uVar8) {
            uVar8 = rdata->lnum;
          }
          if ((rdata->lights != (SgLIGHT *)0x0) && (pfVar5 = rdata->lights->diffuse, 0 < (int)uVar8)
             ) {
            do {
              uVar4 = *puVar9;
                    /* inlined from ../../graphics/graph3d/libsg.h */
              fVar6 = *(float *)(puVar9 + 1);
              fVar7 = *(float *)((int)puVar9 + 0xc);
              *pfVar5 = (float)uVar4;
              pfVar5[1] = (float)((ulong)uVar4 >> 0x20);
              pfVar5[2] = fVar6;
              pfVar5[3] = fVar7;
              uVar4 = *puVar9;
              fVar6 = *(float *)(puVar9 + 1);
              fVar7 = *(float *)((int)puVar9 + 0xc);
              pfVar5[4] = (float)uVar4;
              pfVar5[5] = (float)((ulong)uVar4 >> 0x20);
              pfVar5[6] = fVar6;
              pfVar5[7] = fVar7;
              uVar4 = *puVar9;
              fVar6 = *(float *)(puVar9 + 1);
              fVar7 = *(float *)((int)puVar9 + 0xc);
              pfVar5[8] = (float)uVar4;
              pfVar5[9] = (float)((ulong)uVar4 >> 0x20);
              pfVar5[10] = fVar6;
              pfVar5[0xb] = fVar7;
              uVar4 = puVar9[2];
              fVar6 = *(float *)(puVar9 + 3);
              fVar7 = *(float *)((int)puVar9 + 0x1c);
              pfVar5[-0xc] = (float)uVar4;
              pfVar5[-0xb] = (float)((ulong)uVar4 >> 0x20);
              pfVar5[-10] = fVar6;
              pfVar5[-9] = fVar7;
                    /* end of inlined section */
              puVar9 = puVar9 + 4;
              uVar8 = uVar8 - 1;
              pfVar5 = pfVar5 + 0x24;
            } while (uVar8 != 0);
          }
        }
      }
    } while (uVar2 != 0);
  }
  return;
}

static void LoadLightData(DEBUG_MENU **dbgmenu_tbl, int disp_room) {
	int i;
	int sub_menu_num;
	int nnum;
	DEBUG_SUB_MENU *psubmenu;
	
  char *pcVar1;
  DEBUG_MENU *pDVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  DEBUG_SUB_MENU *pDVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  SgReadLights((void *)0x0,room_addr_tbl[disp_room].lit_data,le_ambient,le_lights,3,le_plights,0x10,
               le_slights,0x10);
  iVar12 = 1;
  if (0 < le_lights[0].num) {
    pDVar2 = dbgmenu_tbl[0x12];
    pDVar2->submenu[1].subnum = 0x1014;
    pDVar2->submenu[1].nmax = 0;
    pDVar2->submenu[1].name = "Infinite";
    iVar12 = 0;
    if (0 < le_lights[0].num) {
      do {
        iVar9 = iVar12 + 1;
        pDVar8 = dbgmenu_tbl[0x14]->submenu + iVar12;
        sprintf(pDVar8->name,"Infinite %d");
        pDVar8->nmax = 0;
        pDVar8->subnum = 0x1019;
        iVar12 = iVar9;
      } while (iVar9 < le_lights[0].num);
    }
    cVar7 = DAT_00356b5d;
    cVar6 = DAT_00356b5c;
    uVar5 = DAT_00356b58;
    iVar12 = 2;
    pDVar8 = dbgmenu_tbl[0x14]->submenu + le_lights[0].num;
    pcVar3 = pDVar8->name;
    pcVar1 = pcVar3 + 3;
    uVar4 = (uint)pcVar1 & 3;
    *(uint *)(pcVar1 + -uVar4) =
         *(uint *)(pcVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | DAT_00356b58 >> (3 - uVar4) * 8;
    uVar4 = (uint)pcVar3 & 3;
    *(uint *)(pcVar3 + -uVar4) =
         *(uint *)(pcVar3 + -uVar4) & 0xffffffffU >> (4 - uVar4) * 8 | uVar5 << uVar4 * 8;
    pcVar3[4] = cVar6;
    pcVar3[5] = cVar7;
    pDVar8->subnum = 0;
    pDVar8->nmax = 0;
  }
  if (0 < le_plights[0].num) {
    iVar10 = 0;
    iVar11 = le_plights[0].num / 9 + 1;
    iVar9 = iVar12;
    if (0 < iVar11) {
      do {
        iVar12 = iVar9 + 1;
        pDVar8 = dbgmenu_tbl[0x12]->submenu + iVar9;
        sprintf(pDVar8->name,s_Point_d_00356b60);
        pDVar8->nmax = iVar10;
        iVar10 = iVar10 + 1;
        pDVar8->subnum = 0x1015;
        iVar9 = iVar12;
      } while (iVar10 < iVar11);
    }
  }
  if (0 < le_slights[0].num) {
    iVar10 = 0;
    iVar11 = le_slights[0].num / 9 + 1;
    iVar9 = iVar12;
    if (0 < iVar11) {
      do {
        iVar10 = iVar10 + 1;
        iVar12 = iVar9 + 1;
        pDVar8 = dbgmenu_tbl[0x12]->submenu + iVar9;
        sprintf(pDVar8->name,s_Spot_d_00356b68);
        pDVar8->nmax = 0;
        pDVar8->subnum = 0x1016;
        iVar9 = iVar12;
      } while (iVar10 < iVar11);
    }
  }
  pDVar2 = dbgmenu_tbl[0x12];
  pDVar8 = pDVar2->submenu + iVar12;
  pDVar8->name = s_Ambient_00356b70;
  pDVar8->subnum = 0x1031;
  pDVar8->nmax = 0;
  pDVar8 = pDVar2->submenu + iVar12 + 1;
  pDVar8->name = (char *)&DAT_00356b58;
  pDVar8->nmax = 0;
  pDVar8->subnum = 0;
  for (iVar12 = iVar12 + 2; iVar12 < 10; iVar12 = iVar12 + 1) {
    pDVar8 = pDVar2->submenu + iVar12;
    pDVar8->name = &DAT_00356b78;
    pDVar8->nmax = 0;
    pDVar8->subnum = 0;
  }
  return;
}

static void GetSGDLightDataPointer(int room_no, u_int **amb_p, u_int **infinite_p, u_int **point_p, u_int **spot_p) {
	u_int *prim;
	
  uint **ppuVar1;
  uint uVar2;
  uint **ppuVar3;
  
  if (room_addr_tbl[room_no].lit_data != (uint *)0x0) {
    *spot_p = (uint *)0x0;
    *point_p = (uint *)0x0;
    *infinite_p = (uint *)0x0;
    *amb_p = (uint *)0x0;
    ppuVar1 = (uint **)room_addr_tbl[room_no].lit_data[6];
    for (ppuVar3 = (uint **)*ppuVar1; ppuVar3 != (uint **)0x0; ppuVar3 = (uint **)*ppuVar3) {
      if (ppuVar1[1] == (uint *)0xb) {
        uVar2 = (uint)ppuVar1[2];
        if (uVar2 == 1) {
          *point_p = (uint *)ppuVar1;
        }
        else if (uVar2 == 0) {
          *infinite_p = (uint *)ppuVar1;
        }
        else if (uVar2 == 2) {
          *spot_p = (uint *)ppuVar1;
        }
        else if (uVar2 == 3) {
          *amb_p = (uint *)ppuVar1;
        }
      }
      ppuVar1 = ppuVar3;
    }
  }
  return;
}

static void WriteSGDLightDataPointer(int room_no, u_int **amb_p, u_int **infinite_p, u_int **point_p, u_int **spot_p) {
	int i;
	sceVu0FVECTOR *pvec;
	float *v0;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  
  fVar4 = le_ambient[3];
  fVar3 = le_ambient[2];
  uVar2 = le_ambient._0_8_;
  puVar8 = *amb_p;
  if (puVar8 != (uint *)0x0) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
    puVar8[4] = (uint)le_ambient._0_8_;
    puVar8[5] = (uint)((ulong)uVar2 >> 0x20);
    puVar8[6] = (uint)fVar3;
    puVar8[7] = (uint)fVar4;
  }
                    /* end of inlined section */
  if (((*infinite_p == (uint *)0x0) || (puVar8 = *infinite_p + 4, le_lights[0].num == 0)) ||
     (iVar7 = 0, le_lights[0].num < 1)) {
    puVar5 = *point_p;
    puVar6 = *spot_p;
  }
  else {
    puVar5 = *point_p;
    puVar6 = *spot_p;
    do {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      uVar2 = *(undefined8 *)le_lights[iVar7].diffuse;
      fVar3 = le_lights[iVar7].diffuse[2];
      fVar4 = le_lights[iVar7].diffuse[3];
      *puVar8 = (uint)uVar2;
      puVar8[1] = (uint)((ulong)uVar2 >> 0x20);
      puVar8[2] = (uint)fVar3;
      puVar8[3] = (uint)fVar4;
      uVar2 = *(undefined8 *)le_lights[iVar7].direction;
      fVar3 = le_lights[iVar7].direction[2];
      fVar4 = le_lights[iVar7].direction[3];
      puVar8[4] = (uint)uVar2;
      puVar8[5] = (uint)((ulong)uVar2 >> 0x20);
      puVar8[6] = (uint)fVar3;
      puVar8[7] = (uint)fVar4;
                    /* end of inlined section */
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 8;
    } while (iVar7 < le_lights[0].num);
  }
  if ((puVar5 != (uint *)0x0) && (le_plights[0].num != 0)) {
    puVar5 = puVar5 + 4;
    iVar7 = 0;
    if (0 < le_plights[0].num) {
      do {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        uVar2 = *(undefined8 *)le_plights[iVar7].diffuse;
        fVar3 = le_plights[iVar7].diffuse[2];
        fVar4 = le_plights[iVar7].diffuse[3];
        *puVar5 = (uint)uVar2;
        puVar5[1] = (uint)((ulong)uVar2 >> 0x20);
        puVar5[2] = (uint)fVar3;
        puVar5[3] = (uint)fVar4;
                    /* end of inlined section */
        bVar1 = iVar7 + 1 < le_plights[0].num;
        puVar5[3] = (uint)(le_plights[iVar7].intens / le_plights[iVar7].ambient[0]);
        puVar5 = puVar5 + 8;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
  }
  if (((puVar6 != (uint *)0x0) && (puVar6 = puVar6 + 4, le_slights[0].num != 0)) &&
     (iVar7 = 0, 0 < le_slights[0].num)) {
    do {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      uVar2 = *(undefined8 *)le_slights[iVar7].diffuse;
      fVar3 = le_slights[iVar7].diffuse[2];
      fVar4 = le_slights[iVar7].diffuse[3];
      *puVar6 = (uint)uVar2;
      puVar6[1] = (uint)((ulong)uVar2 >> 0x20);
      puVar6[2] = (uint)fVar3;
      puVar6[3] = (uint)fVar4;
                    /* end of inlined section */
      bVar1 = iVar7 + 1 < le_slights[0].num;
      puVar6[7] = (uint)le_slights[iVar7].ambient[1];
      puVar6 = puVar6 + 0xc;
      iVar7 = iVar7 + 1;
    } while (bVar1);
  }
  return;
}

static void SaveLightData(int room_no) {
	u_int *amb_p;
	u_int *infinite_p;
	u_int *point_p;
	u_int *spot_p;
	int len;
	int rfd;
	static char LoadDir[31] = {
		/* [0] = */ 104,
		/* [1] = */ 111,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 48,
		/* [5] = */ 58,
		/* [6] = */ 46,
		/* [7] = */ 46,
		/* [8] = */ 47,
		/* [9] = */ 98,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 47,
		/* [13] = */ 100,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 97,
		/* [17] = */ 47,
		/* [18] = */ 51,
		/* [19] = */ 100,
		/* [20] = */ 100,
		/* [21] = */ 97,
		/* [22] = */ 116,
		/* [23] = */ 97,
		/* [24] = */ 47,
		/* [25] = */ 114,
		/* [26] = */ 111,
		/* [27] = */ 111,
		/* [28] = */ 109,
		/* [29] = */ 47,
		/* [30] = */ 0
	};
	char filename[100];
	char filename2[100];
	
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  uint **ppuVar4;
  char filename [100];
  char filename2 [100];
  uint *amb_p;
  uint *infinite_p;
  uint *point_p;
  uint *spot_p;
  
  ppuVar4 = &room_addr_tbl[room_no].lit_data;
  if (*ppuVar4 != (uint *)0x0) {
    GetSGDLightDataPointer(room_no,&amb_p,&infinite_p,&point_p,&spot_p);
    sprintf(filename2,&DAT_00356b80);
    pcVar1 = appendchar(filename,LoadDir_129,filename2);
    lVar2 = sceOpen(pcVar1,1);
    if (-1 < lVar2) {
      uVar3 = sceLseek(lVar2,0,2);
      sceLseek(lVar2,0,0);
      sceRead(lVar2,*ppuVar4,uVar3);
      sceClose(lVar2);
      WriteSGDLightDataPointer(room_no,&amb_p,&infinite_p,&point_p,&spot_p);
      pcVar1 = appendchar(filename,LoadDir_129,filename2);
      lVar2 = sceOpen(pcVar1,2);
      if (lVar2 < 0) {
        SgMapUnit(*ppuVar4);
      }
      else {
        sceLseek(lVar2,0,0);
        sceWrite(lVar2,*ppuVar4,uVar3);
        sceClose(lVar2);
        SgMapUnit(*ppuVar4);
      }
    }
  }
  return;
}

void ApplyLight(int room_no) {
	void *mdl_addr;
	SgCOORDUNIT *cp;
	u_int *amb_p;
	u_int *infinite_p;
	u_int *point_p;
	u_int *spot_p;
	
  uint *puVar1;
  _SgCOORDUNIT *p_Var2;
  uint *amb_p;
  uint *infinite_p;
  uint *point_p;
  uint *spot_p;
  
  PushLight();
  SgSetAmbient(le_ambient);
  SgSetInfiniteLights(&camera.zd.x,le_lights,le_lights[0].num);
  SgSetPointLights(le_plights,le_plights[0].num);
  SgSetSpotLights(le_slights,le_slights[0].num);
  puVar1 = room_addr_tbl[room_no].near_sgd;
  if (puVar1 == (uint *)0x0) {
    puVar1 = room_addr_tbl[room_no].ss_sgd;
  }
  else {
    p_Var2 = (_SgCOORDUNIT *)puVar1[2];
    sceVu0UnitMatrix((Matrix4x4 *)p_Var2);
    CalcCoordinate(p_Var2,puVar1[5] - 1);
    SgClearPreRender(puVar1,-1);
    SgPreRender(puVar1,-1);
    p_Var2->flg = 0;
    puVar1 = room_addr_tbl[room_no].ss_sgd;
  }
  if (puVar1 != (uint *)0x0) {
    p_Var2 = (_SgCOORDUNIT *)puVar1[2];
    sceVu0UnitMatrix((Matrix4x4 *)p_Var2);
    CalcCoordinate(p_Var2,puVar1[5] - 1);
    SgClearPreRender(puVar1,-1);
    SgPreRender(puVar1,-1);
  }
  PopLight();
  GetSGDLightDataPointer(room_no,&amb_p,&infinite_p,&point_p,&spot_p);
  WriteSGDLightDataPointer(room_no,&amb_p,&infinite_p,&point_p,&spot_p);
  return;
}

static int ReadNMax(DEBUG_MENU **dbgmenu_tbl, int now_tree) {
	DEBUG_MENU *parent;
	DEBUG_SUB_MENU *select;
	
  return dbgmenu_tbl[dbgmenu_tbl[now_tree]->parent]->submenu
         [dbgmenu_tbl[dbgmenu_tbl[now_tree]->parent]->pos].nmax;
}

void MakeLightEditorData(DEBUG_MENU **dbgmenu_tbl, int now_tree) {
	int i;
	int j;
	int disp_room;
	int menu_end;
	int menu_start;
	DEBUG_SUB_MENU *psubmenu;
	SgLIGHT *plight;
	static int old_disp = -1;
	static int loff = 0;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  DEBUG_MENU *pDVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined *puVar12;
  char **ppcVar13;
  DEBUG_SUB_MENU *pDVar14;
  SgLIGHT *pSVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  switch(now_tree) {
  case 0x12:
    iVar10 = 0;
    do {
      puVar12 = (undefined *)(uint)room_wrk.disp_no[0];
      if ((puVar12 != (undefined *)0xff) && (room_addr_tbl[(int)puVar12].near_sgd != (uint *)0x0)) {
        if (old_disp_139 == puVar12) {
          return;
        }
        dbg_wrk.light_spot = 0;
        dbg_wrk.light_infinite = 0;
        dbg_wrk.light_point = 0;
        old_disp_139 = puVar12;
        LoadLightData(dbgmenu_tbl,(int)puVar12);
        ApplyLight((int)old_disp_139);
        dbgmenu_tbl[0x13]->title = *(char **)(&room_name + (int)puVar12 * 4);
        return;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 2);
    break;
  case 0x14:
    loff_140 = 0;
    break;
  case 0x15:
    iVar7 = ReadNMax(dbgmenu_tbl,now_tree);
    iVar10 = iVar7 * 9;
    iVar3 = iVar10;
    iVar16 = iVar10 + 9;
    if (le_plights[0].num < iVar10 + 9) {
      iVar16 = le_plights[0].num;
    }
    for (; iVar3 < iVar16; iVar3 = iVar3 + 1) {
      ppcVar13 = (char **)((int)dbgmenu_tbl[0x15] + (iVar3 + iVar7 * -9) * 0xc + 0x1c);
      sprintf(*ppcVar13,"Point %d");
      ppcVar13[2] = (char *)0x0;
      ppcVar13[1] = (char *)0x101a;
    }
    iVar16 = iVar16 + iVar7 * -9;
    pDVar8 = dbgmenu_tbl[0x15];
    goto LAB_00164e20;
  case 0x16:
    iVar7 = ReadNMax(dbgmenu_tbl,now_tree);
    iVar10 = iVar7 * 9;
    iVar3 = iVar10;
    iVar16 = iVar10 + 9;
    if (le_slights[0].num < iVar10 + 9) {
      iVar16 = le_slights[0].num;
    }
    for (; iVar3 < iVar16; iVar3 = iVar3 + 1) {
      ppcVar13 = (char **)((int)dbgmenu_tbl[0x16] + (iVar3 + iVar7 * -9) * 0xc + 0x1c);
      sprintf(*ppcVar13,s_Spot__d_00356b90);
      ppcVar13[2] = (char *)0x0;
      ppcVar13[1] = (char *)0x101b;
    }
    iVar16 = iVar16 + iVar7 * -9;
    pDVar8 = dbgmenu_tbl[0x16];
LAB_00164e20:
    cVar6 = DAT_00356b5d;
    cVar5 = DAT_00356b5c;
    uVar4 = DAT_00356b58;
    pDVar14 = pDVar8->submenu + iVar16;
    pcVar11 = pDVar14->name;
    pcVar9 = pcVar11 + 3;
    uVar1 = (uint)pcVar9 & 3;
    *(uint *)(pcVar9 + -uVar1) =
         *(uint *)(pcVar9 + -uVar1) & -1 << (uVar1 + 1) * 8 | DAT_00356b58 >> (3 - uVar1) * 8;
    uVar1 = (uint)pcVar11 & 3;
    *(uint *)(pcVar11 + -uVar1) =
         *(uint *)(pcVar11 + -uVar1) & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
    pcVar11[4] = cVar5;
    pcVar11[5] = cVar6;
    pDVar14->subnum = 0;
    pDVar14->nmax = 0;
    loff_140 = iVar10;
    break;
  case 0x17:
    SaveLightData((int)old_disp_139);
    break;
  case 0x18:
    LoadLightData(dbgmenu_tbl,(int)old_disp_139);
    goto LAB_00165164;
  case 0x19:
    iVar10 = dbg_wrk.light_infinite + loff_140;
    dbg_wrk.le_B = (int)(le_lights[iVar10].diffuse[2] * 100.0 + DAT_0035591c);
    dbg_wrk.le_R = (int)(le_lights[iVar10].diffuse[0] * 100.0 + DAT_0035591c);
    dbg_wrk.le_G = (int)(le_lights[iVar10].diffuse[1] * 100.0 + DAT_0035591c);
    sprintf(dbgmenu_tbl[0x19]->title,"Infinite %d");
    break;
  case 0x1a:
    iVar10 = dbg_wrk.light_point + loff_140;
    pcVar9 = dbgmenu_tbl[0x1a]->title;
    fVar20 = le_plights[iVar10].diffuse[0] * 100.0 + DAT_00355920;
    fVar18 = le_plights[iVar10].diffuse[2] * 100.0 + DAT_00355920;
    fVar17 = le_plights[iVar10].diffuse[1] * 100.0 + DAT_00355920;
    fVar19 = le_plights[iVar10].power / le_plights[iVar10].ambient[0] + DAT_00355920;
    dbg_wrk.le_plen =
         (int)((le_plights[iVar10].intens * 10.0) / le_plights[iVar10].ambient[0] + DAT_00355920);
    pcVar11 = "Point %d";
    goto LAB_00165080;
  case 0x1b:
    iVar10 = dbg_wrk.light_spot + loff_140;
    pcVar9 = dbgmenu_tbl[0x1b]->title;
    pcVar11 = s_Spot__d_00356b90;
    fVar20 = le_slights[iVar10].diffuse[0] * 100.0 + DAT_00355924;
    fVar17 = le_slights[iVar10].diffuse[1] * 100.0 + DAT_00355924;
    fVar18 = le_slights[iVar10].diffuse[2] * 100.0 + DAT_00355924;
    fVar19 = le_slights[iVar10].power / le_slights[iVar10].ambient[0] + DAT_00355924;
    dbg_wrk.le_cone = (int)(le_slights[iVar10].ambient[1] + DAT_00355924);
LAB_00165080:
    dbg_wrk.le_B = (int)fVar18;
    dbg_wrk.le_G = (int)fVar17;
    dbg_wrk.le_R = (int)fVar20;
    dbg_wrk.le_power = (int)fVar19;
    sprintf(pcVar9,pcVar11);
    break;
  case 0x1f:
    iVar10 = dbg_wrk.light_infinite + loff_140;
    fVar18 = (float)dbg_wrk.le_B * DAT_0035592c;
    fVar17 = (float)dbg_wrk.le_G * DAT_0035592c;
    le_lights[iVar10].diffuse[0] = (float)dbg_wrk.le_R * DAT_0035592c;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_lights[iVar10].diffuse[1] = fVar17;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_lights[iVar10].diffuse[2] = fVar18;
    uVar2 = *(undefined8 *)le_lights[iVar10].diffuse;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar17 = le_lights[iVar10].diffuse[2];
    fVar18 = le_lights[iVar10].diffuse[3];
    le_lights[iVar10].specular[0] = (float)uVar2;
    le_lights[iVar10].specular[1] = (float)((ulong)uVar2 >> 0x20);
    le_lights[iVar10].specular[2] = fVar17;
    le_lights[iVar10].specular[3] = fVar18;
LAB_00165164:
                    /* end of inlined section */
    ApplyLight((int)old_disp_139);
    break;
  case 0x20:
    iVar10 = dbg_wrk.light_point + loff_140;
    fVar17 = (float)dbg_wrk.le_G * DAT_00355930;
    fVar18 = (float)dbg_wrk.le_B * DAT_00355930;
    pSVar15 = le_plights + iVar10;
    le_plights[iVar10].diffuse[0] = (float)dbg_wrk.le_R * DAT_00355930;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_plights[iVar10].diffuse[1] = fVar17;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_plights[iVar10].diffuse[2] = fVar18;
    uVar2 = *(undefined8 *)le_plights[iVar10].diffuse;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar17 = le_plights[iVar10].diffuse[2];
    fVar18 = le_plights[iVar10].diffuse[3];
    le_plights[iVar10].specular[0] = (float)uVar2;
    le_plights[iVar10].specular[1] = (float)((ulong)uVar2 >> 0x20);
    le_plights[iVar10].specular[2] = fVar17;
    le_plights[iVar10].specular[3] = fVar18;
    puVar12 = old_disp_139;
                    /* end of inlined section */
    fVar17 = (float)dbg_wrk.le_plen * le_plights[iVar10].ambient[0] * DAT_00355934;
    le_plights[iVar10].power = (float)dbg_wrk.le_power * le_plights[iVar10].ambient[0];
    goto LAB_001652c4;
  case 0x21:
    iVar10 = dbg_wrk.light_spot + loff_140;
    fVar17 = (float)dbg_wrk.le_G * DAT_00355938;
    fVar18 = (float)dbg_wrk.le_B * DAT_00355938;
    pSVar15 = le_slights + iVar10;
    le_slights[iVar10].diffuse[0] = (float)dbg_wrk.le_R * DAT_00355938;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_slights[iVar10].diffuse[1] = fVar17;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    le_slights[iVar10].diffuse[2] = fVar18;
    uVar2 = *(undefined8 *)le_slights[iVar10].diffuse;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar17 = le_slights[iVar10].diffuse[2];
    fVar18 = le_slights[iVar10].diffuse[3];
    le_slights[iVar10].specular[0] = (float)uVar2;
    le_slights[iVar10].specular[1] = (float)((ulong)uVar2 >> 0x20);
    le_slights[iVar10].specular[2] = fVar17;
    le_slights[iVar10].specular[3] = fVar18;
                    /* end of inlined section */
    fVar18 = (float)dbg_wrk.le_power;
    fVar17 = le_slights[iVar10].ambient[0];
    fVar20 = (float)dbg_wrk.le_cone * DAT_0035593c;
    le_slights[iVar10].ambient[1] = (float)dbg_wrk.le_cone;
    le_slights[iVar10].power = fVar18 * fVar17;
    fVar17 = SgCosf(fVar20 / 180.0);
    fVar17 = fVar17 * fVar17;
    puVar12 = old_disp_139;
LAB_001652c4:
    pSVar15->intens = fVar17;
    ApplyLight((int)puVar12);
    break;
  case 0x31:
    dbg_wrk.le_AR = (int)(le_ambient[0] * 100.0 + DAT_00355928);
    dbg_wrk.le_AB = (int)(le_ambient[2] * 100.0 + DAT_00355928);
    dbg_wrk.le_AG = (int)(le_ambient[1] * 100.0 + DAT_00355928);
    break;
  case 0x32:
    le_ambient[2] = (float)dbg_wrk.le_AB * DAT_00355940;
    le_ambient[0] = (float)dbg_wrk.le_AR * DAT_00355940;
    le_ambient[1] = (float)dbg_wrk.le_AG * DAT_00355940;
    ApplyLight((int)old_disp_139);
  }
  return;
}

void MakeFogData(DEBUG_SUB_MENU **dbgmenu_tbl, int pos) {
	int disp_room;
	
  uint uVar1;
  
  uVar1 = (uint)room_wrk.disp_no[0];
  if (pos == 3) {
    dbg_wrk.fog_min = (int)fog_param[uVar1][0];
    dbg_wrk.fog_far = (int)(fog_param[uVar1][3] / 100.0);
    dbg_wrk.fog_b = fog_rgb[uVar1][2];
    dbg_wrk.fog_max = (int)fog_param[uVar1][1];
    dbg_wrk.fog_r = fog_rgb[uVar1][0];
    dbg_wrk.fog_near = (int)(fog_param[uVar1][2] / 100.0);
    dbg_wrk.fog_g = fog_rgb[uVar1][1];
    fog_mode = 0;
    return;
  }
  dbg_wrk.fog_min = (int)fog_param_finder[uVar1][0];
  dbg_wrk.fog_max = (int)fog_param_finder[uVar1][1];
  dbg_wrk.fog_b = fog_rgb_finder[uVar1][2];
  dbg_wrk.fog_far = (int)(fog_param_finder[uVar1][3] / 100.0);
  dbg_wrk.fog_near = (int)(fog_param_finder[uVar1][2] / 100.0);
  fog_mode = 1;
  dbg_wrk.fog_r = fog_rgb_finder[uVar1][0];
  dbg_wrk.fog_g = fog_rgb_finder[uVar1][1];
  return;
}

void ApplyFogData() {
	int disp_room;
	
  int iVar1;
  int iVar2;
  int (*paiVar3) [4];
  float (*pafVar4) [4];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = dbg_wrk.fog_g;
  iVar1 = dbg_wrk.fog_r;
  if (fog_mode == 0) {
    paiVar3 = fog_rgb;
    pafVar4 = fog_param;
  }
  else {
    paiVar3 = fog_rgb_finder;
    pafVar4 = fog_param_finder;
  }
  paiVar3 = paiVar3[room_wrk.disp_no[0]];
  fVar6 = (float)dbg_wrk.fog_far;
  fVar5 = (float)dbg_wrk.fog_near;
  fVar8 = (float)dbg_wrk.fog_max;
  fVar7 = (float)dbg_wrk.fog_min;
  pafVar4 = pafVar4[room_wrk.disp_no[0]];
  (*paiVar3)[2] = dbg_wrk.fog_b;
  (*pafVar4)[3] = fVar6 * 100.0;
  (*pafVar4)[0] = fVar7;
  (*pafVar4)[1] = fVar8;
  (*pafVar4)[2] = fVar5 * 100.0;
  (*paiVar3)[0] = iVar1;
  (*paiVar3)[1] = iVar2;
  return;
}
