// STATUS: NOT STARTED

static int write_flg = 0;
static int write_counter = 0;
static int dbg_flg = 0;
u_int *save_tri2_pointer = NULL;
u_int *save_bw_pointer = NULL;

void SgSuPDbgOn() {
  dbg_flg = 1;
  return;
}

void SgSuPDbgOff() {
  dbg_flg = 0;
  return;
}

void DispMicroMemory() {
	u_int *read_p;
	
  undefined4 *puVar1;
  
  puVar1 = &DAT_11008000;
  do {
    puVar1 = puVar1 + 4;
    printf("%x:%x %x %x %x\n");
  } while (puVar1 < (undefined4 *)0x1100fb01);
                    /* WARNING: Subroutine does not return */
  exit(0);
}

void DispVUMemory() {
	u_int *read_p;
	
  int iVar1;
  undefined4 *puVar2;
  
  FlushModel(1);
  sceDmaSync(dvif1,0,0);
  WaitVU1();
  sceGsSyncPath(0,0);
  FlushCache(0);
  puVar2 = &DAT_1100c000;
  iVar1 = DAT_1100c00c;
  while( true ) {
    if ((((iVar1 == 0x3f800000) || (puVar2 == (undefined4 *)&DAT_1100c4b0)) ||
        (puVar2 == (undefined4 *)&DAT_1100c500)) ||
       ((puVar2 == (undefined4 *)0x1100c550 || (puVar2 + -0x4403020 < (undefined4 *)0x3c1)))) {
      printf("%x(%3d):%f %f %f %f\n");
    }
    else {
      printf("%x(%3d):%8x %8x %8x %8x\n");
    }
    if ((undefined4 *)0x1100fff0 < puVar2 + 4) break;
    iVar1 = puVar2[7];
    puVar2 = puVar2 + 4;
  }
  printf(&DAT_00356dc0);
                    /* WARNING: Subroutine does not return */
  exit(0);
}

void DrawBoundingBox(sceVu0FVECTOR *box) {
	int i;
	int j;
	int qwc;
	u_int *datap;
	u_int *startp;
	static char boxmesh[24] = {
		/* [0] = */ 1,
		/* [1] = */ 0,
		/* [2] = */ 3,
		/* [3] = */ 2,
		/* [4] = */ 7,
		/* [5] = */ 5,
		/* [6] = */ 3,
		/* [7] = */ 1,
		/* [8] = */ 6,
		/* [9] = */ 7,
		/* [10] = */ 2,
		/* [11] = */ 3,
		/* [12] = */ 4,
		/* [13] = */ 6,
		/* [14] = */ 0,
		/* [15] = */ 2,
		/* [16] = */ 5,
		/* [17] = */ 4,
		/* [18] = */ 1,
		/* [19] = */ 0,
		/* [20] = */ 4,
		/* [21] = */ 5,
		/* [22] = */ 6,
		/* [23] = */ 7
	};
	float *v0;
	float *v1;
	
  undefined8 uVar1;
  float (*pafVar2) [4];
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float (*pafVar9) [4];
  float (*pafVar10) [4];
  
  LoadSgProg(1);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar9 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar9)[0] = (float)&DAT_11000000;
  (*pafVar9)[3] = 6.238061e+26;
  pafVar9[1][0] = 4.591775e-41;
  pafVar9[1][3] = 0.0;
  (*pafVar9)[1] = 0.0;
  (*pafVar9)[2] = 0.0;
  pafVar9[1][1] = 0.0;
  pafVar9[1][2] = 0.0;
  AppendDmaBuffer(2);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar9 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar9)[3] = 6.528233e+26;
  pafVar9[1][3] = 128.0;
  pafVar9[2][3] = 12.0;
  (*pafVar9)[0] = 0.0;
  (*pafVar9)[1] = 0.0;
  (*pafVar9)[2] = 0.0;
  pafVar9[1][0] = 1.0;
  pafVar9[1][1] = 1.0;
  pafVar9[1][2] = 128.0;
  pafVar9[2][0] = 0.0;
  pafVar9[2][1] = 0.0;
  pafVar9[2][2] = 0.0;
  pafVar9[3][0] = 0.0;
  pafVar9[3][1] = 0.0;
  pafVar9[3][2] = 0.0;
  pafVar9[3][3] = 0.0;
  pafVar9[4][0] = 0.0;
  pafVar9[4][1] = 0.0;
  pafVar9[4][2] = 0.0;
  pafVar9[4][3] = 0.0;
  pafVar9[5][0] = 0.0;
  pafVar9[5][1] = 0.0;
  pafVar9[5][2] = 0.0;
  pafVar9[5][3] = 0.0;
  pafVar9[6][0] = 0.0;
  pafVar9[6][1] = 0.0;
  pafVar9[6][2] = 0.0;
  pafVar9[6][3] = 0.0;
  pafVar9[7][0] = 0.0;
  pafVar9[7][1] = 0.0;
  pafVar9[7][2] = 0.0;
  pafVar9[7][3] = 0.0;
  AppendDmaBuffer(8);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar10 = objwork[sbuffer_p];
                    /* end of inlined section */
  pafVar10[1][0] = 2.242078e-44;
  pafVar10[1][3] = 8.407791e-45;
  pcVar5 = &boxmesh_132;
  pafVar10[1][2] = 6.866362e-44;
  pafVar10[1][1] = 6.866362e-44;
  pafVar9 = pafVar10[2];
  do {
    pafVar2 = box[*pcVar5];
    uVar1 = *(undefined8 *)*pafVar2;
    fVar7 = (*pafVar2)[2];
    fVar8 = (*pafVar2)[3];
    (*pafVar9)[0] = (float)uVar1;
    (*pafVar9)[1] = (float)((ulong)uVar1 >> 0x20);
    (*pafVar9)[2] = fVar7;
    (*pafVar9)[3] = fVar8;
    pafVar9[1][0] = 0.0;
    pcVar5 = pcVar5 + 1;
    pafVar9[1][1] = 1.0;
    pafVar9[1][2] = 0.0;
    pafVar9[1][3] = 1.0;
    pafVar9 = pafVar9[2];
  } while ((int)pcVar5 < 0x303d38);
  uVar3 = 0;
  uVar6 = 5;
  do {
    fVar7 = (float)uVar3;
    *(undefined8 *)(*pafVar9 + 2) = 0x41;
    uVar3 = uVar3 + 1;
    *(ulong *)*pafVar9 = (ulong)(uVar6 == 0) << 0xf | 0x2032400000000004;
    iVar4 = 3;
    pafVar9 = pafVar9[1];
    do {
      pafVar2 = pafVar9;
      (*pafVar2)[0] = fVar7 * 22.0;
      iVar4 = iVar4 + -1;
      (*pafVar2)[1] = 0.0;
      (*pafVar2)[2] = 0.0;
      (*pafVar2)[3] = 0.0;
      pafVar2[1][0] = 0.0;
      pafVar2[1][1] = 0.0;
      pafVar2[1][2] = 0.0;
      pafVar2[1][3] = 0.0;
      pafVar9 = pafVar2[2];
    } while (-1 < iVar4);
    uVar6 = uVar3 ^ 5;
  } while ((int)uVar3 < 6);
  pafVar2[2][3] = 4.135903e-25;
  pafVar2[2][1] = 6.462726e-27;
  pafVar2[2][2] = (float)&DAT_11000000;
  (*pafVar9)[0] = (float)&DAT_11000000;
  (*pafVar10)[0] = 0.0;
  (*pafVar10)[1] = 0.0;
  uVar6 = (uint)((int)pafVar2 + (0x30 - (int)pafVar10)) >> 4;
  (*pafVar10)[2] = 0.0;
  (*pafVar10)[3] = (float)((uVar6 - 2) * 0x10000 | 0x6c008000);
  AppendDmaBuffer(uVar6);
  FlushModel(0);
  return;
}

void SetVUMeshDataP(u_int *prim) {
	int mtype;
	u_int *datap;
	
  char cVar1;
  float (*pafVar2) [4];
  
  cVar1 = *(char *)((int)prim + 0xd);
  if (cVar1 != '2') {
    if ('2' < cVar1) {
      if ((cVar1 != 'R') && (cVar1 != 'r')) {
        return;
      }
      if (edge_check == 0) {
        AppendDmaTag((uint)(prim + 4),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
        pafVar2 = objwork[sbuffer_p];
                    /* end of inlined section */
        (*pafVar2)[3] = 4.135903e-25;
        (*pafVar2)[0] = 6.463568e-27;
        (*pafVar2)[2] = (float)&DAT_11000000;
        (*pafVar2)[1] = 4.135903e-25;
        AppendDmaBuffer(1);
      }
      goto LAB_00179344;
    }
    if (cVar1 == '\x10') {
      LoadSgProg(1);
      AppendDmaTag((uint)(prim + 8),prim[2]);
      AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
                    /* inlined from libsg.h */
                    /* end of inlined section */
      pafVar2 = objwork[sbuffer_p];
      if (edge_check == 0) {
        (*pafVar2)[3] = 4.135903e-25;
        (*pafVar2)[0] = 6.46303e-27;
        (*pafVar2)[2] = (float)&DAT_11000000;
        (*pafVar2)[1] = 4.135903e-25;
      }
      else {
        (*pafVar2)[3] = 4.135903e-25;
        (*pafVar2)[1] = 6.462726e-27;
        (*pafVar2)[2] = (float)&DAT_11000000;
        (*pafVar2)[0] = (float)&DAT_11000000;
      }
      AppendDmaBuffer(1);
      goto LAB_00179344;
    }
    if (cVar1 != '\x12') {
      return;
    }
  }
  LoadSgProg(2);
  AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
  AppendDmaTag((uint)(prim + 8),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pafVar2 = objwork[sbuffer_p];
  if (edge_check == 0) {
    (*pafVar2)[3] = 4.135903e-25;
    (*pafVar2)[0] = 6.463162e-27;
    (*pafVar2)[2] = (float)&DAT_11000000;
    (*pafVar2)[1] = 4.135903e-25;
  }
  else {
    (*pafVar2)[3] = 4.135903e-25;
    (*pafVar2)[1] = 6.462726e-27;
    (*pafVar2)[2] = (float)&DAT_11000000;
    (*pafVar2)[0] = (float)&DAT_11000000;
  }
  AppendDmaBuffer(1);
  FlushModel(0);
LAB_00179344:
  FlushModel(0);
  return;
}

int BoundingBoxCalcP(u_int *prim) {
	float *m1[4];
	float *m1[4];
	
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  iVar1 = CheckBoundingBox(prim);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    if (edge_check == 0) {
      uVar2 = prim[2];
                    /* inlined from libsg.h */
      auVar4 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[0]);
      auVar5 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[1]);
      auVar6 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[2]);
      auVar7 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[3]);
      _DAT_70000430 = _sqc2(auVar4);
      _DAT_70000440 = _sqc2(auVar5);
      _DAT_70000450 = _sqc2(auVar6);
      _DAT_70000460 = _sqc2(auVar7);
                    /* end of inlined section */
      _MulMatrix((float (*) [4])&DAT_70000090,(float (*) [4])&SgWSMtx,(float (*) [4])&DAT_70000430);
      _MulMatrix((float (*) [4])&DAT_700000d0,SgCMtx,(float (*) [4])&DAT_70000430);
      uVar2 = prim[2];
    }
    else {
      uVar2 = prim[2];
                    /* inlined from libsg.h */
      auVar4 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[0]);
      auVar5 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[1]);
      auVar6 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[2]);
      auVar7 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[3]);
      _DAT_70000430 = _sqc2(auVar4);
      _DAT_70000440 = _sqc2(auVar5);
      _DAT_70000450 = _sqc2(auVar6);
      _DAT_70000460 = _sqc2(auVar7);
                    /* end of inlined section */
      _MulMatrix((float (*) [4])&DAT_70000090,(float (*) [4])&SgWSMtx,(float (*) [4])&DAT_70000430);
      _MulMatrix((float (*) [4])&DAT_700000d0,SgCMVtx,(float (*) [4])&DAT_70000430);
      uVar2 = prim[2];
    }
    lcp[uVar2].edge_check = edge_check;
    SelectLight(prim);
    iVar1 = CheckCoordCache(prim[2]);
    iVar3 = 1;
    if (iVar1 == 0) {
      SetMaterialPointerCoordVU();
      SetLightData(lcp + prim[2],(_SgCOORDUNIT *)0x0);
      SetVU1Header();
      iVar3 = 1;
    }
  }
  return iVar3;
}

void SgSortUnitPrimP(u_int *prim) {
  uint **ppuVar1;
  int iVar2;
  uint **ppuVar3;
  
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar3 = ppuVar1, ppuVar3 != (uint **)0x0) {
      switch(((uint **)prim)[1]) {
      case (uint *)0x0:
        vuvnprim = prim;
        break;
      case (uint *)0x1:
        SetVUMeshDataP(prim);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x2:
        SetMaterialDataVU(prim);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x4:
        iVar2 = BoundingBoxCalcP(prim);
        if (iVar2 == 0) {
          return;
        }
        if (save_tri2_pointer != (uint *)0x0) {
          LoadTRI2Files(save_tri2_pointer);
          save_tri2_pointer = (uint *)0x0;
        }
        if (save_bw_pointer != (uint *)0x0) {
          LoadTRI2Files(save_bw_pointer);
          save_bw_pointer = (uint *)0x0;
        }
        write_coord = write_coord + 1;
        goto LAB_001795c0;
      case (uint *)0x5:
        GsImageProcess(prim);
LAB_001795c0:
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x41:
        goto LAB_001795d8;
      }
      prim = (uint *)ppuVar3;
      ppuVar1 = (uint **)*ppuVar3;
    }
  }
LAB_001795d8:
  return;
}

void SgSortPreProcessP(u_int *prim) {
	static u_int *old_pointer = NULL;
	static sceDmaTag tag[2][3];
	static sceDmaTag *tp;
	static qword base[3];
	static qword base3[6];
	static qword *base2;
	
  uint **ppuVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  
  pGroupPacket = (uint *)0x0;
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar3 = ppuVar1, ppuVar3 != (uint **)0x0) {
      ppuVar1 = (uint **)save_tri2_pointer;
      ppuVar2 = (uint **)save_bw_pointer;
      switch(((uint **)prim)[1]) {
      case (uint *)0x5:
        GsImageProcess(prim);
        ppuVar3 = (uint **)*prim;
        ppuVar1 = (uint **)save_tri2_pointer;
        ppuVar2 = (uint **)save_bw_pointer;
        break;
      case (uint *)0xa:
        ppuVar1 = (uint **)prim;
        if (save_tri2_pointer == (uint *)&_heap_size) {
          LoadTRI2Files(prim);
          ppuVar3 = (uint **)*prim;
          save_tri2_pointer = (uint *)0x0;
          ppuVar1 = (uint **)save_tri2_pointer;
          ppuVar2 = (uint **)save_bw_pointer;
        }
        break;
      case (uint *)0xc:
        if (save_tri2_pointer != (uint *)0x0) {
          LoadTRI2Files(save_tri2_pointer);
        }
        LoadTextureAnimation(prim);
        ppuVar3 = (uint **)*prim;
        ppuVar1 = (uint **)save_tri2_pointer;
        ppuVar2 = (uint **)save_bw_pointer;
        break;
      case (uint *)0xd:
        if ((loadbw_flg != 0) && (ppuVar2 = (uint **)prim, save_bw_pointer == (uint *)&_heap_size))
        {
          LoadTRI2Files(prim);
          ppuVar3 = (uint **)*prim;
          save_bw_pointer = (uint *)0x0;
          ppuVar1 = (uint **)save_tri2_pointer;
          ppuVar2 = (uint **)save_bw_pointer;
        }
        break;
      case (uint *)0xe:
        pGroupPacket = prim;
      }
      save_bw_pointer = (uint *)ppuVar2;
      save_tri2_pointer = (uint *)ppuVar1;
      prim = (uint *)ppuVar3;
      ppuVar1 = (uint **)*ppuVar3;
    }
  }
  return;
}

void SgSortUnitP(void *sgd_top, int pnum) {
	int i;
	u_int *pk;
	
  uint *prim;
  uint **ppuVar1;
  int iVar2;
  
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  if (((uint)lcp & 0xf) == 0) {
    blocksm = *(int *)((int)sgd_top + 0x14);
    write_flg = 0;
    write_counter = 0;
    write_coord = 0;
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

u_int* GetModelGroupPacket(void *sgd_top) {
	u_int *prim;
	
  uint **ppuVar1;
  uint **ppuVar2;
  
  ppuVar1 = *(uint ***)((int)sgd_top + 0x18);
  if (ppuVar1 == (uint **)0x0) {
    return (uint *)0x0;
  }
  ppuVar2 = (uint **)*ppuVar1;
  while( true ) {
    if (ppuVar2 == (uint **)0x0) {
      return (uint *)0x0;
    }
    if (ppuVar1[1] == (uint *)0xe) break;
    ppuVar1 = ppuVar2;
    ppuVar2 = (uint **)*ppuVar2;
  }
  return (uint *)ppuVar1;
}

void SgSortGroupP(void *sgd_top, int gnum) {
	int i;
	int groups;
	u_int *pk;
	ModelGroup *mgp;
	
  short sVar1;
  int iVar2;
  uint **ppuVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  if (((uint)lcp & 0xf) == 0) {
    blocksm = *(int *)((int)sgd_top + 0x14);
    write_flg = 0;
    write_counter = 0;
    write_coord = 0;
    save_tri2_pointer = (uint *)0x0;
    save_bw_pointer = (uint *)0x0;
    sgd_top_addr = sgd_top;
    ClearMaterialCache((HeaderSection *)sgd_top);
    SetUpSortUnit();
    SgSortPreProcessP(*(uint **)((int)sgd_top + 0x18));
    if (pGroupPacket == (uint *)0x0) {
      iVar2 = 1;
      ppuVar3 = (uint **)((int)sgd_top + 0x1c);
      if (1 < blocksm) {
        puVar4 = *ppuVar3;
        while( true ) {
          iVar2 = iVar2 + 1;
          ppuVar3 = ppuVar3 + 1;
          SgSortUnitPrimP(puVar4);
          if (blocksm <= iVar2) break;
          puVar4 = *ppuVar3;
        }
      }
    }
    else {
      puVar4 = pGroupPacket + 4;
      if ((int)pGroupPacket[2] < gnum) {
        gnum = pGroupPacket[2];
      }
      if (gnum < 1) {
        sVar1 = *(short *)((int)pGroupPacket + 0x12);
      }
      else {
        do {
          gnum = gnum - 1;
          puVar4 = (uint *)((int)puVar4 + (*(short *)((int)puVar4 + 2) + 2) * 2);
        } while (gnum != 0);
        sVar1 = *(short *)((int)puVar4 + 2);
      }
      lVar6 = 0;
      if (0 < sVar1) {
        iVar2 = 0;
        do {
          iVar5 = (int)lVar6 + 1;
          lVar6 = (long)iVar5;
          SgSortUnitPrimP(*(uint **)((int)sgd_top + *(short *)((int)puVar4 + iVar2 + 4) * 4 + 0x18))
          ;
          iVar2 = iVar5 * 2;
        } while (lVar6 < *(short *)((int)puVar4 + 2));
      }
    }
    return;
  }
  printf("SgSortGroupP Data broken. %x\n");
  return;
}
