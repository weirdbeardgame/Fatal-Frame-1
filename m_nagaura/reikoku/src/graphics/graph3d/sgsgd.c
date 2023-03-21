// STATUS: NOT STARTED

static int post_process = 0;
static int PresetChk;

void MappingVUVNData(u_int *intpointer, HeaderSection *hs) {
	int i;
	VUVN_PRIM *vh;
	PHEAD *ph;
	sceVu0FVECTOR *vp;
	sceVu0FVECTOR *np;
	
  char cVar1;
  uint uVar2;
  float (*pafVar3) [4];
  float (*pafVar4) [4];
  uint uVar5;
  long lVar6;
  uint *puVar7;
  float (**ppafVar8) [4];
  uint *puVar9;
  
  pafVar4 = normal_buffer;
  pafVar3 = vertex_buffer;
  puVar7 = hs->phead;
  puVar9 = intpointer + 2;
  cVar1 = *(char *)((int)intpointer + 0xd);
  if (cVar1 != '\x01') {
    if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
        uVar5 = puVar7[3];
        lVar6 = (long)*(short *)puVar9;
        uVar2 = puVar7[2];
        if (lVar6 < 1) {
          return;
        }
        puVar7 = intpointer + 0xd;
        do {
          lVar6 = (long)((int)lVar6 + -1);
          puVar7[-1] = puVar7[-1] * 0x10 + uVar2;
          *puVar7 = *puVar7 * 0x10 + uVar5;
          puVar7 = puVar7 + 2;
        } while (lVar6 != 0);
        return;
      }
      uVar5 = puVar7[0xc];
    }
    else {
      uVar5 = puVar7[0xc];
    }
    if (uVar5 == 0) {
      uVar5 = puVar7[0xb];
      lVar6 = (long)*(short *)puVar9;
      uVar2 = puVar7[10];
      if (0 < lVar6) {
        puVar7 = intpointer + 0xd;
        do {
          lVar6 = (long)((int)lVar6 + -1);
          puVar7[-1] = puVar7[-1] * 0x20 + uVar2;
          *puVar7 = *puVar7 * 0x20 + uVar5;
          puVar7 = puVar7 + 2;
        } while (lVar6 != 0);
        return;
      }
    }
    else {
      lVar6 = (long)*(short *)puVar9;
      if (0 < lVar6) {
        ppafVar8 = (float (**) [4])(intpointer + 0xd);
        do {
          lVar6 = (long)((int)lVar6 + -1);
          ppafVar8[-1] = pafVar3[(int)ppafVar8[-1]];
          *ppafVar8 = pafVar4[(int)*ppafVar8];
          ppafVar8 = ppafVar8 + 2;
        } while (lVar6 != 0);
        return;
      }
    }
  }
  return;
}

void MappingVUVNDataPreset(u_int *intpointer, int mtype, int gloops, int hsize) {
  return;
}

void MappingTYPE0(int gloops, u_int *prim) {
	int j;
	int loops;
	
  if (0 < gloops) {
    do {
      gloops = gloops + -1;
      prim[1] = prim[1] | 0x100000;
      prim = prim + (*prim & 0x7fff) * 8 + 4;
    } while (gloops != 0);
  }
  return;
}

int MappingTYPE2(int gloops, u_int *prim) {
	int j;
	int loops;
	int hsize;
	
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((prim[2] & 0xf) == 0xe) {
    iVar2 = (uint)((ulong)*(undefined8 *)prim >> 0x3c) + 1;
  }
  puVar1 = prim + iVar2 * 4;
  if (0 < gloops) {
    do {
      gloops = gloops + -1;
      puVar1[1] = puVar1[1] | 0x100000;
      puVar1 = puVar1 + (*puVar1 & 0x7fff) * 0xc + 4;
    } while (gloops != 0);
  }
  return iVar2;
}

void MappingMeshData(u_int *intpointer, u_int *vuvnprim, HeaderSection *hs) {
	int mtype;
	int gloops;
	int hsize;
	static u_int *old_mesh_p;
	
  ulong uVar1;
  int in_a3_lo;
  
  uVar1 = (ulong)*(char *)((int)intpointer + 0xd);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0xc0) == 0) {
      MappingVUVNData(vuvnprim,hs);
      return;
    }
  }
  else {
    PresetChk = 1;
    if ((uVar1 & 0x40) == 0) {
      MappingVUVNDataPreset
                (vuvnprim,(int)*(char *)((int)intpointer + 0xd),
                 (int)*(char *)((int)intpointer + 0xe),in_a3_lo);
      return;
    }
  }
  return;
}

void MappingCoordinateData(u_int *intpointer, HeaderSection *hs) {
  return;
}

void MappingVertexList(VERTEXLIST *vli, PHEAD *ph) {
	int i;
	int size;
	int vnnum;
	
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = vnbuf_size;
  iVar6 = 0;
  iVar1 = vli->list_num;
  iVar5 = 0;
  if (iVar1 < 1) {
    bVar3 = vnbuf_size < 0;
  }
  else {
    do {
      iVar7 = iVar6 + 1;
      iVar2 = *(int *)&vli->lists[iVar6].vIdx;
      vli->lists[iVar6].vOff = (short)iVar5;
      iVar5 = iVar5 + iVar2;
      iVar6 = iVar7;
    } while (iVar7 < iVar1);
    bVar3 = iVar4 < iVar5;
  }
  if (bVar3) {
    printf("VNBuffer Over size %d needs %d\n");
    ph->pUniqList = (uint *)0x0;
    ph->pWeightedList = (uint *)0x0;
  }
  return;
}

void SgMapRebuld(void *sgd_top) {
	u_int *prim;
	u_int *nextprim;
	
  uint uVar1;
  uint *prim;
  uint *puVar2;
  
  prim = (uint *)(*(int *)((int)sgd_top + 0x18) + (int)sgd_top);
  if ((*(int *)((int)sgd_top + 0x18) != 0) && (puVar2 = (uint *)(*prim + (int)prim), *prim != 0)) {
    while( true ) {
      if (prim[1] == 10) {
        RebuildTRI2Files(prim);
        uVar1 = *puVar2;
      }
      else {
        uVar1 = *puVar2;
      }
      if (uVar1 == 0) break;
      prim = puVar2;
      puVar2 = (uint *)(uVar1 + (int)puVar2);
    }
  }
  return;
}

void SgMapUnit(void *sgd_top) {
	int i;
	int j;
	int size;
	u_int *intpointer;
	u_int *nextprim;
	u_int *pk;
	u_int *vuvnprim;
	HeaderSection *hs;
	SgMaterial *matp;
	u_int *phead;
	
  uint uVar1;
  PHEAD *ph;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int **prim;
  short sVar8;
  VERTEXLIST *vli;
  uint uVar9;
  int **unaff_s3_lo;
  
  if (*(char *)((int)sgd_top + 4) != '\0') {
    return;
  }
  uVar2 = *(uint *)((int)sgd_top + 8);
  *(undefined *)((int)sgd_top + 4) = 1;
  PresetChk = 0;
  if (uVar2 - 1 < 0x2fffffff) {
    uVar2 = uVar2 + (int)sgd_top;
    *(uint *)((int)sgd_top + 8) = uVar2;
  }
  if (*(int *)((int)sgd_top + 0xc) - 1U < 0x2fffffff) {
    *(int *)((int)sgd_top + 0xc) = *(int *)((int)sgd_top + 0xc) + (int)sgd_top;
    iVar3 = *(int *)((int)sgd_top + 0x10);
  }
  else {
    iVar3 = *(int *)((int)sgd_top + 0x10);
  }
  uVar9 = *(uint *)((int)sgd_top + 0x14);
  uVar6 = 0;
  *(int *)((int)sgd_top + 0x10) = iVar3 + (int)sgd_top;
  if (uVar9 != 0) {
    iVar4 = 0;
    do {
      piVar5 = (int *)((int)sgd_top + iVar4 + 0x18);
      iVar4 = *piVar5;
      if (iVar4 != 0) {
        *piVar5 = iVar4 + (int)sgd_top;
        uVar9 = *(uint *)((int)sgd_top + 0x14);
      }
      uVar6 = uVar6 + 1;
      iVar4 = uVar6 * 4;
    } while (uVar6 < uVar9);
  }
  if ((uVar2 != 0) && (uVar7 = 0, uVar6 = uVar2, uVar9 != 1)) {
    do {
      uVar1 = *(uint *)(uVar6 + 0xd0);
      if ((int)uVar1 < 0) {
        *(undefined4 *)(uVar6 + 0xd0) = 0;
      }
      else if (uVar1 < uVar2) {
        *(uint *)(uVar6 + 0xd0) = uVar1 * 0xe0 + uVar2;
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + 0xe0;
    } while (uVar7 < uVar9 - 1);
  }
  piVar5 = (int *)(iVar3 + (int)sgd_top + 4);
  uVar2 = 0;
  ph = *(PHEAD **)((int)sgd_top + 0x10);
  if (ph->HeaderSections != 0) {
    iVar3 = *piVar5;
    while( true ) {
      iVar4 = 0;
      piVar5 = piVar5 + 1;
      if (iVar3 + -1 < 1) {
        uVar9 = ph->HeaderSections;
      }
      else {
        do {
          if (*piVar5 != 0) {
            *piVar5 = *piVar5 + (int)sgd_top;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 < iVar3 + -1);
        uVar9 = ph->HeaderSections;
      }
      uVar2 = uVar2 + 1;
      if (uVar9 <= uVar2) break;
      iVar3 = *piVar5;
    }
  }
  if (ph->pUniqList != (uint *)0x0) {
    if (ph->UniqHeaderSize != 4) {
      uVar2 = *(uint *)((int)sgd_top + 0x14);
      goto LAB_0017258c;
    }
    if (vnbuf_size == 0) {
      ph->pUniqList = (uint *)0x0;
      ph->pCommonList = (uint *)0x0;
LAB_00172554:
      ph->pWeightedList = (uint *)0x0;
      vli = (VERTEXLIST *)ph->pWeightedList;
    }
    else if (ph->pWeightedVertex == (float (*) [4])0x0) {
      if (ph->pWeightedNormal == (float (*) [4])0x0) goto LAB_00172554;
      vli = (VERTEXLIST *)ph->pWeightedList;
    }
    else {
      vli = (VERTEXLIST *)ph->pWeightedList;
    }
    ph->pUniqList = (uint *)0x0;
    if (vli != (VERTEXLIST *)0x0) {
      MappingVertexList(vli,ph);
      MappingVertexList((VERTEXLIST *)(vli->lists + vli->list_num),ph);
    }
  }
  uVar2 = *(uint *)((int)sgd_top + 0x14);
LAB_0017258c:
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      post_process = (int)(uVar9 == uVar2 - 1);
      prim = *(int ***)((int)sgd_top + uVar9 * 4 + 0x18);
      if ((prim != (int **)0x0) && (*prim != (int *)0x0)) {
        *prim = (int *)((int)*prim + (int)prim);
        do {
          switch(prim[1]) {
          case (int *)0x0:
            unaff_s3_lo = prim;
            break;
          case (int *)0x1:
            MappingMeshData((uint *)prim,(uint *)unaff_s3_lo,(HeaderSection *)sgd_top);
            prim = (int **)*prim;
            goto LAB_00172660;
          case (int *)0x2:
            prim[2] = (int *)(*(int *)((int)sgd_top + 0xc) + (int)prim[2] * 0xb0);
            break;
          case (int *)0x3:
            MappingCoordinateData((uint *)prim,(HeaderSection *)sgd_top);
            prim = (int **)*prim;
            goto LAB_00172660;
          case (int *)0xa:
            RebuildTRI2Files((uint *)prim);
          }
          prim = (int **)*prim;
LAB_00172660:
          if (*prim == (int *)0x0) break;
          *prim = (int *)((int)*prim + (int)prim);
        } while( true );
      }
      uVar9 = uVar9 + 1;
      uVar2 = *(uint *)((int)sgd_top + 0x14);
    } while (uVar9 < uVar2);
  }
  if (*(short *)((int)sgd_top + 6) == 0) {
    sVar8 = 0;
    for (uVar2 = *(uint *)((int)sgd_top + 0xc); uVar2 < *(uint *)((int)sgd_top + 0x10);
        uVar2 = uVar2 + 0xb0) {
      sVar8 = sVar8 + 1;
    }
    *(short *)((int)sgd_top + 6) = sVar8;
    *(undefined *)((int)sgd_top + 5) = (undefined)PresetChk;
  }
  return;
}

u_int* GetPrimitiveAddr(void *sgd_top, int num) {
	int blocks;
	u_int *pk;
	
  uint **ppuVar1;
  uint **ppuVar2;
  
  if (*(int *)((int)sgd_top + 0x14) <= num) {
    return (uint *)&_heap_size;
  }
  ppuVar2 = (uint **)((int)sgd_top + num * 4 + 0x18);
  ppuVar1 = (uint **)*ppuVar2;
  if (ppuVar1 != (uint **)0x0) {
    ppuVar2 = ppuVar1;
  }
  return (uint *)ppuVar2;
}

u_int* GetStartPacketAddr(void *sgd_top, int num) {
	int blocks;
	u_int *pk;
	
  if (*(int *)((int)sgd_top + 0x14) <= num) {
    return (uint *)&_heap_size;
  }
  return (uint *)((int)sgd_top + num * 4 + 0x18);
}

u_int* GetEndPacketAddr(void *sgd_top, int num) {
	u_int *pk;
	u_int *pkback;
	
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  ppiVar4 = (int **)GetPrimitiveAddr(sgd_top,num);
  if ((ppiVar4 != (int **)&_heap_size) && (ppiVar4 != (int **)0x0)) {
    piVar1 = *ppiVar4;
    ppiVar2 = ppiVar4;
    while (ppiVar3 = ppiVar2, piVar1 != (int *)0x0) {
      ppiVar2 = (int **)*ppiVar3;
      piVar1 = *ppiVar2;
      ppiVar4 = ppiVar3;
    }
  }
  return (uint *)ppiVar4;
}

void PostChainPacket(u_int *dest, u_int *source) {
  *source = *dest;
  *dest = (uint)source;
  return;
}

int GetModelKind(void *sgd_top) {
  return *(byte *)((int)sgd_top + 5) & 1;
}

void SgSetTEX1Prim(u_int *prim, sceGsTex1 *ptex1) {
	u_int *mesh_prim;
	int i;
	int hsize;
	
  uint **ppuVar1;
  ulong uVar2;
  sceGsTex1 sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  sceGsTex1 sVar8;
  ulong *puVar9;
  uint **ppuVar10;
  
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar10 = ppuVar1, ppuVar10 != (uint **)0x0) {
      if ((((uint **)prim)[1] == (uint *)0x1) && (((uint)((uint **)prim)[10] & 0xf) == 0xe)) {
        uVar2 = *(ulong *)((uint **)prim + 8) >> 0x3c;
        puVar9 = (ulong *)((uint **)prim + 0xc);
        if (uVar2 != 0) {
          do {
            if (*(undefined **)(puVar9 + 1) == &o_left) {
              uVar6 = *puVar9;
              if ((uVar6 >> 2 & 7) != 0) {
                sVar3 = *ptex1;
                *puVar9 = uVar6 & 0xfffffffffffffffe | (ulong)sVar3 & 1;
                sVar8 = *ptex1;
                uVar4 = (ulong)sVar8 >> 2 & 7;
                if ((int)uVar4 != 0) {
                  *puVar9 = uVar6 & 0xffffffffffffffe2 | (ulong)sVar3 & 1 | uVar4 << 2;
                  sVar8 = *ptex1;
                }
                uVar7 = *puVar9;
                uVar6 = (ulong)sVar8 & 0x20;
                *puVar9 = uVar7 & 0xffffffffffffffdf | uVar6;
                uVar4 = (ulong)*ptex1 & 0x1c0;
                *puVar9 = uVar7 & 0xfffffffffffffe1f | uVar6 | uVar4;
                uVar5 = (ulong)*ptex1 & 0x200;
                *puVar9 = uVar7 & 0xfffffffffffffc1f | uVar6 | uVar4 | uVar5;
                sVar3 = *ptex1;
                *puVar9 = uVar7 & 0xffffffffffe7fc1f | uVar6 | uVar4 | uVar5 |
                          (ulong)sVar3 & 0x180000;
                *puVar9 = uVar7 & 0xfffff000ffe7fc1f | uVar6 | uVar4 | uVar5 |
                          (ulong)sVar3 & 0x180000 |
                          ((ulong)*(uint *)&ptex1->field_0x4 & 0xfff) << 0x20;
              }
            }
            uVar2 = (ulong)((int)uVar2 + -1);
            puVar9 = puVar9 + 2;
          } while (uVar2 != 0);
          ppuVar10 = (uint **)*prim;
        }
      }
      prim = (uint *)ppuVar10;
      ppuVar1 = (uint **)*ppuVar10;
    }
  }
  return;
}

void SgSetTEX1(void *sgd_top, sceGsTex1 *ptex1) {
	int i;
	
  uint *prim;
  uint **ppuVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (1 < *(uint *)((int)sgd_top + 0x14)) {
    ppuVar1 = (uint **)((int)sgd_top + 0x1c);
    prim = *ppuVar1;
    while( true ) {
      uVar2 = uVar2 + 1;
      ppuVar1 = ppuVar1 + 1;
      SgSetTEX1Prim(prim,ptex1);
      if (*(uint *)((int)sgd_top + 0x14) <= uVar2) break;
      prim = *ppuVar1;
    }
  }
  return;
}
