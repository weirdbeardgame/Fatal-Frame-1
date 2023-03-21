// STATUS: NOT STARTED

sceVu0FMATRIX fod_cmn_mtx = {
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
FOD_EFF_PARAM eff_param = {
	/* .fix = */ {
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
		/* [11] = */ NULL
	},
	/* .fade_mdl = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL
	},
	/* .fire_pos = */ {
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
	},
	/* .lenz_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .lenz_rot = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pdf_pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pdf_spd = */ 0.f,
	/* .pdf_rate = */ 0.f,
	/* .pdf_trate = */ 0.f,
	/* .pdf_p = */ NULL,
	/* .fix_eff_num = */ 0,
	/* .fade_mdl_cnt = */ 0,
	/* .fire_num = */ 0,
	/* .mono_flg = */ 0,
	/* .mdl_efct_sw = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	}
};

void FodInit(FOD_CTRL *fc, u_int *tcp, u_int *tlp, u_int *tep) {
  uchar uVar1;
  uint uVar2;
  FOD_EFF_FRAME *pFVar3;
  FOD_LIT_FRAME *pFVar4;
  
  sceVu0UnitMatrix((Matrix4x4 *)fod_cmn_mtx);
  fod_cmn_mtx[0][0] = 25.0;
  fod_cmn_mtx[3][3] = 1.0;
  fod_cmn_mtx[2][2] = 25.0;
  fod_cmn_mtx[1][1] = 25.0;
  sceVu0RotMatrixX(DAT_00355ac0,0x304aa0,0x304aa0);
  memset(fc,0,0x1980);
  fc->now_frame = 1;
  fc->total_frame = 2;
  fc->now_reso = 0;
  fc->cam_file_hdr = (FOD_FILE_HDR *)tcp;
  uVar2 = tcp[3];
  fc->lit_file_hdr = (FOD_FILE_HDR *)tlp;
  fc->eff_file_hdr = (FOD_FILE_HDR *)tep;
  fc->frame_max = uVar2;
  uVar1 = *(uchar *)(tcp + 2);
  fc->end_flg = '\0';
  fc->resolution = uVar1;
  fc->cam_frame_top = (FOD_CAM_FRAME *)(tcp + 0x10);
  pFVar3 = (FOD_EFF_FRAME *)FodGetFixEffect(tep);
  (fc->fod_light).lit_top = tlp;
  fc->eff_frame_top = pFVar3;
  FodGetLightNum(&fc->fod_light);
  FodGetLightSerial(&fc->fod_light);
  pFVar4 = (FOD_LIT_FRAME *)FodGetFirstLight(&fc->fod_light);
  fc->cam_frame = fc->cam_frame_top;
  fc->eff_frame = fc->eff_frame_top;
  fc->lit_frame = pFVar4;
  fc->lit_frame_top = pFVar4;
  return;
}

int FodNextFrame(FOD_CTRL *fc) {
	u_int size;
	char *cam_addr;
	char *lit_addr;
	char *eff_addr;
	
  uint uVar1;
  uint uVar2;
  FOD_FILE_HDR *pFVar3;
  
  uVar2 = fc->now_reso + 1;
  uVar1 = fc->cam_frame->size;
  fc->total_frame = fc->now_frame * 2 + uVar2;
  fc->now_reso = uVar2;
  if (uVar2 < fc->resolution) {
    return 0;
  }
  uVar2 = fc->now_frame + 1;
  fc->now_reso = 0;
  fc->now_frame = uVar2;
  if (fc->frame_max < uVar2) {
    fc->end_flg = '\x01';
    return 1;
  }
  if (fc->cam_file_hdr->frame != 0) {
    fc->cam_frame = (FOD_CAM_FRAME *)(fc->cam_frame[1].anm + (uVar1 - 8));
  }
  if (fc->lit_file_hdr->frame == 0) {
    pFVar3 = fc->eff_file_hdr;
  }
  else {
    fc->lit_frame = (FOD_LIT_FRAME *)((int)fc->lit_frame->pad + (fc->lit_frame->size - 8));
    pFVar3 = fc->eff_file_hdr;
  }
  if (pFVar3->frame != 0) {
    pFVar3 = (FOD_FILE_HDR *)0x0;
    fc->eff_frame = (FOD_EFF_FRAME *)((int)&fc->eff_frame->frame_no + fc->eff_frame->size);
  }
  return (int)pFVar3;
}

void FodSetFrame(FOD_CTRL *fc, u_int frame) {
	u_int i;
	u_int *fod_cam_addr;
	u_int *fod_lit_addr;
	u_int *fod_eff_addr;
	
  uint uVar1;
  FOD_CAM_FRAME *pFVar2;
  FOD_EFF_FRAME *pFVar3;
  FOD_LIT_FRAME *pFVar4;
  uint uVar5;
  
  if ((frame <= fc->frame_max) && (uVar5 = 1, frame != 0)) {
    pFVar2 = fc->cam_frame_top;
    pFVar4 = fc->lit_frame_top;
    pFVar3 = fc->eff_frame_top;
    if (frame < 2) {
      fc->eff_frame = pFVar3;
    }
    else {
      uVar1 = fc->cam_file_hdr->frame;
      while( true ) {
        if (uVar1 == 0) {
          uVar1 = fc->lit_file_hdr->frame;
        }
        else {
          pFVar2 = (FOD_CAM_FRAME *)(pFVar2[1].anm + ((pFVar2->size & 0xfffffffc) - 8));
          uVar1 = fc->lit_file_hdr->frame;
        }
        if (uVar1 == 0) {
          uVar1 = fc->eff_file_hdr->frame;
        }
        else {
          pFVar4 = (FOD_LIT_FRAME *)((int)pFVar4->pad + ((pFVar4->size & 0xfffffffc) - 8));
          uVar1 = fc->eff_file_hdr->frame;
        }
        uVar5 = uVar5 + 1;
        if (uVar1 != 0) {
          pFVar3 = (FOD_EFF_FRAME *)((int)&pFVar3->frame_no + (pFVar3->size & 0xfffffffc));
        }
        if (frame <= uVar5) break;
        uVar1 = fc->cam_file_hdr->frame;
      }
      fc->eff_frame = pFVar3;
    }
    fc->now_frame = frame;
    fc->total_frame = frame << 1;
    fc->cam_frame = pFVar2;
    fc->lit_frame = pFVar4;
    fc->now_reso = 0;
  }
  return;
}

void FodGetLightNum(FOD_LIGHT *fl) {
	u_int *lit_addr;
	
  uint *puVar1;
  
  puVar1 = fl->lit_top;
  fl->ilit_num = puVar1[4];
  fl->slit_num = puVar1[5];
  fl->plit_num = puVar1[6];
  fl->all_lit_num = puVar1[7] - 1;
  return;
}

void FodGetLightSerial(FOD_LIGHT *fl) {
	FOD_LIT_SERIAL *fls;
	u_int *lit_addr;
	int i;
	
  char *pcVar1;
  uint uVar2;
  FOD_LIT_SERIAL *pFVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong in_a1;
  ulong uVar8;
  ulong in_a2;
  char *str;
  uint uVar9;
  uint *puVar10;
  
  uVar9 = 0;
  fl->hand_spot_no = -1;
  uVar6 = (ulong)(int)fl->lit_top;
  uVar7 = (ulong)(int)fl->all_lit_num;
  puVar10 = fl->lit_top + 0x10;
  if (uVar7 != 0) {
    do {
      pFVar3 = fl->lit_serial + uVar9;
      uVar5 = (int)puVar10 + 7U & 7;
      uVar2 = (uint)puVar10 & 7;
      uVar6 = (*(long *)(((int)puVar10 + 7U) - uVar5) << (7 - uVar5) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)puVar10 - uVar2) >> uVar2 * 8;
      uVar5 = (int)puVar10 + 0xfU & 7;
      uVar2 = (uint)(puVar10 + 2) & 7;
      uVar7 = (*(long *)(((int)puVar10 + 0xfU) - uVar5) << (7 - uVar5) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(puVar10 + 2) - uVar2) >> uVar2 * 8;
      uVar5 = (int)puVar10 + 0x17U & 7;
      uVar2 = (uint)(puVar10 + 4) & 7;
      uVar8 = (*(long *)(((int)puVar10 + 0x17U) - uVar5) << (7 - uVar5) * 8 |
              in_a1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(puVar10 + 4) - uVar2) >> uVar2 * 8;
      uVar5 = (int)puVar10 + 0x1fU & 7;
      uVar2 = (uint)(puVar10 + 6) & 7;
      in_a2 = (*(long *)(((int)puVar10 + 0x1fU) - uVar5) << (7 - uVar5) * 8 |
              in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)(puVar10 + 6) - uVar2) >> uVar2 * 8;
      pcVar1 = pFVar3->light_name + 3;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           *(ulong *)(pcVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar6 >> (7 - uVar5) * 8;
      uVar5 = (uint)pFVar3 & 7;
      *(ulong *)((int)pFVar3 - uVar5) =
           uVar6 << uVar5 * 8 |
           *(ulong *)((int)pFVar3 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pcVar1 = pFVar3->light_name + 0xb;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           *(ulong *)(pcVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      pcVar1 = pFVar3->light_name + 4;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           uVar7 << uVar5 * 8 | *(ulong *)(pcVar1 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8
      ;
      pcVar1 = pFVar3->light_name + 0x13;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           *(ulong *)(pcVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
      pcVar1 = pFVar3->light_name + 0xc;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           uVar8 << uVar5 * 8 | *(ulong *)(pcVar1 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8
      ;
      pcVar1 = pFVar3->light_name + 0x1b;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           *(ulong *)(pcVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | in_a2 >> (7 - uVar5) * 8;
      str = pFVar3->light_name;
      uVar7 = (ulong)(int)str;
      pcVar1 = pFVar3->light_name + 0x14;
      uVar5 = (uint)pcVar1 & 7;
      *(ulong *)(pcVar1 + -uVar5) =
           in_a2 << uVar5 * 8 | *(ulong *)(pcVar1 + -uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8
      ;
      StrToLower(str);
      in_a1 = 0x34e2b0;
      iVar4 = strcmp(str,"hand_spot");
      if (iVar4 == 0) {
LAB_001832d4:
        uVar6 = (ulong)fl->hand_spot_no;
        if (uVar6 == 0xffffffffffffffff) {
          fl->hand_spot_no = uVar9;
        }
        uVar5 = fl->all_lit_num;
      }
      else {
        in_a1 = 0x34e2c0;
        iVar4 = strcmp(str,"hand-spot");
        if (iVar4 == 0) goto LAB_001832d4;
        uVar5 = fl->all_lit_num;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 8;
    } while (uVar9 < uVar5);
  }
  return;
}

u_int* FodGetFirstLight(FOD_LIGHT *fl) {
	float cone_deg;
	int i;
	int lit_type;
	u_int *lit_addr;
	float *v1;
	float *v1;
	float *v1;
	
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  FOD_LIGHT *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  uint *puVar10;
  Vector4 *pVVar11;
  Vector4 *pVVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  
  iVar15 = 5;
  uVar4 = fl->all_lit_num;
  puVar1 = fl->lit_top;
  iVar3 = uVar4 + 1;
  puVar10 = puVar1 + iVar3 * 8 + 0x10;
  pFVar5 = fl;
  do {
    pFVar5->amb[0] = 0.0;
    iVar15 = iVar15 + -1;
    pFVar5->amb[1] = 0.0;
    pFVar5->amb[2] = 0.0;
    pFVar5->amb[3] = 0.0;
    pFVar5 = (FOD_LIGHT *)(pFVar5->lit_serial[0].light_name + 0xc);
  } while (-1 < iVar15);
  uVar2 = *(undefined8 *)(puVar1 + iVar3 * 8 + 0xc);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  fVar6 = (float)puVar1[iVar3 * 8 + 0xe];
  fVar7 = (float)puVar1[iVar3 * 8 + 0xf];
  fl->amb[0] = (float)uVar2;
  fl->amb[1] = (float)((ulong)uVar2 >> 0x20);
  fl->amb[2] = fVar6;
  fl->amb[3] = fVar7;
                    /* end of inlined section */
  uVar16 = 0;
  if (uVar4 != 0) {
    fVar6 = 25.0;
    pVVar11 = (Vector4 *)fl->all_lit;
    pVVar12 = (Vector4 *)fl->all_lit[0].direction;
    pfVar14 = fl->all_lit[0].specular;
    pfVar13 = fl->all_lit[0].diffuse;
    puVar9 = (undefined8 *)(puVar1 + iVar3 * 8 + 0x14);
    pFVar5 = fl;
    do {
      iVar3 = FodGetLightType(fl,*(int *)(puVar9 + -2));
      if (iVar3 == 1) {
        uVar2 = *puVar9;
                    /* inlined from ../../graphics/graph3d/libsg.h */
        fVar7 = *(float *)(puVar9 + 1);
        fVar8 = *(float *)((int)puVar9 + 0xc);
        *pfVar13 = (float)uVar2;
        pfVar13[1] = (float)((ulong)uVar2 >> 0x20);
        pfVar13[2] = fVar7;
        pfVar13[3] = fVar8;
        uVar2 = *puVar9;
        fVar7 = *(float *)(puVar9 + 1);
        fVar8 = *(float *)((int)puVar9 + 0xc);
        *pfVar14 = (float)uVar2;
        pfVar14[1] = (float)((ulong)uVar2 >> 0x20);
        pfVar14[2] = fVar7;
        pfVar14[3] = fVar8;
                    /* end of inlined section */
        puVar9 = puVar9 + 6;
        puVar10 = puVar10 + 0xc;
LAB_00183568:
        uVar4 = fl->all_lit_num;
      }
      else {
        if (1 < iVar3) {
          if (iVar3 == 2) {
            pFVar5->all_lit[0].ambient[0] = 0.0;
            pFVar5->all_lit[0].ambient[1] = 0.0;
            pFVar5->all_lit[0].ambient[2] = 0.0;
            pFVar5->all_lit[0].ambient[3] = 0.0;
            uVar2 = *puVar9;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar7 = *(float *)(puVar9 + 1);
            fVar8 = *(float *)((int)puVar9 + 0xc);
            *pfVar13 = (float)uVar2;
            pfVar13[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar13[2] = fVar7;
            pfVar13[3] = fVar8;
            uVar2 = *puVar9;
            fVar7 = *(float *)(puVar9 + 1);
            fVar8 = *(float *)((int)puVar9 + 0xc);
            *pfVar14 = (float)uVar2;
            pfVar14[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar14[2] = fVar7;
            pfVar14[3] = fVar8;
            uVar2 = *(undefined8 *)(puVar10 + 8);
            fVar7 = (float)puVar10[10];
            fVar8 = (float)puVar10[0xb];
            pVVar11->x = (float)uVar2;
            pVVar11->y = (float)((ulong)uVar2 >> 0x20);
            pVVar11->z = fVar7;
            pVVar11->w = fVar8;
            uVar2 = *(undefined8 *)(puVar10 + 0xc);
            fVar7 = (float)puVar10[0xe];
            fVar8 = (float)puVar10[0xf];
            pVVar12->x = (float)uVar2;
            pVVar12->y = (float)((ulong)uVar2 >> 0x20);
            pVVar12->z = fVar7;
            pVVar12->w = fVar8;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pVVar11,(Matrix4x4 *)fod_cmn_mtx,pVVar11);
            sceVu0ApplyMatrix(pVVar12,(Matrix4x4 *)fod_cmn_mtx,pVVar12);
            fVar8 = *(float *)(puVar9 + 6);
            fVar7 = SgCosf((fVar8 * DAT_00355ac4) / 180.0);
            pVVar12[6].x = fVar7 * fVar7;
            if (fVar7 * fVar7 < 0.0) {
              pVVar12[6].x = 0.0;
            }
            puVar9 = puVar9 + 10;
            fVar7 = _TransSPower(fVar6);
            puVar10 = puVar10 + 0x14;
            pFVar5->all_lit[0].power = fVar7;
            pFVar5->all_lit[0].ambient[1] = fVar8;
            pFVar5->all_lit[0].ambient[0] = fVar6;
            pFVar5->all_lit[0].Enable = 0;
            pFVar5->all_lit[0].SEnable = 0;
          }
          else {
            if (iVar3 != 3) {
              uVar4 = fl->all_lit_num;
              goto LAB_0018356c;
            }
            pFVar5->all_lit[0].ambient[0] = 0.0;
            pFVar5->all_lit[0].ambient[1] = 0.0;
            pFVar5->all_lit[0].ambient[2] = 0.0;
            pFVar5->all_lit[0].ambient[3] = 0.0;
            uVar2 = *puVar9;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar7 = *(float *)(puVar9 + 1);
            fVar8 = *(float *)((int)puVar9 + 0xc);
            *pfVar13 = (float)uVar2;
            pfVar13[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar13[2] = fVar7;
            pfVar13[3] = fVar8;
            uVar2 = *puVar9;
            fVar7 = *(float *)(puVar9 + 1);
            fVar8 = *(float *)((int)puVar9 + 0xc);
            *pfVar14 = (float)uVar2;
            pfVar14[1] = (float)((ulong)uVar2 >> 0x20);
            pfVar14[2] = fVar7;
            pfVar14[3] = fVar8;
            uVar2 = *(undefined8 *)(puVar10 + 8);
            fVar7 = (float)puVar10[10];
            fVar8 = (float)puVar10[0xb];
            pVVar11->x = (float)uVar2;
            pVVar11->y = (float)((ulong)uVar2 >> 0x20);
            pVVar11->z = fVar7;
            pVVar11->w = fVar8;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pVVar11,(Matrix4x4 *)fod_cmn_mtx,pVVar11);
            puVar9 = puVar9 + 6;
            puVar10 = puVar10 + 0xc;
            fVar7 = _TransPPower(fVar6);
            pVVar11[7].z = fVar7;
            pVVar11[6].x = fVar6;
            pVVar11[8].y = 0.0;
            pVVar11[8].z = 0.0;
          }
          goto LAB_00183568;
        }
        if (iVar3 == 0) {
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + 8;
          goto LAB_00183568;
        }
        uVar4 = fl->all_lit_num;
      }
LAB_0018356c:
      uVar16 = uVar16 + 1;
      pVVar11 = pVVar11 + 9;
      pFVar5 = (FOD_LIGHT *)(pFVar5->lit_serial[4].light_name + 0xc);
      pVVar12 = pVVar12 + 9;
      pfVar14 = pfVar14 + 0x24;
      pfVar13 = pfVar13 + 0x24;
    } while (uVar16 < uVar4);
  }
  return puVar10;
}

void FodSetMyLight(FOD_LIGHT *fl, char *pfx, float *eye) {
	static SgLIGHT ilight[3];
	static SgLIGHT slight[3];
	static SgLIGHT plight[3];
	static sceVu0FVECTOR ambient;
	FOD_LIT_SERIAL *fls;
	SgLIGHT *org;
	int i;
	int il_num;
	int sl_num;
	int pl_num;
	int get_light_flg;
	
  char cVar1;
  uchar uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  SgLIGHT *pSVar8;
  SgLIGHT *pSVar9;
  int iVar10;
  Vector4 *pVVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *__s1;
  SgLIGHT *pSVar14;
  FOD_LIGHT *pFVar15;
  uint uVar16;
  uint num;
  int num_00;
  int num_01;
  float (*local_a8) [4];
  
  num_01 = 0;
  num_00 = 0;
  num = 0;
  uVar16 = 0;
  pSVar14 = fl->all_lit;
  pFVar15 = fl;
  if (fl->all_lit_num != 0) {
    do {
      bVar3 = false;
      if (fl->hand_spot_no == uVar16) {
        if ((int)num < 3) {
          pSVar8 = pSVar14;
          puVar4 = &slight_136 + num * 0x12;
          do {
            puVar5 = puVar4;
            pSVar9 = pSVar8;
            uVar12 = *(undefined8 *)(pSVar9->pos + 2);
            uVar13 = *(undefined8 *)pSVar9->direction;
            uVar7 = *(undefined8 *)(pSVar9->direction + 2);
            *puVar5 = *(undefined8 *)pSVar9->pos;
            puVar5[1] = uVar12;
            puVar5[2] = uVar13;
            puVar5[3] = uVar7;
            pSVar8 = (SgLIGHT *)pSVar9->ldirection;
            puVar4 = puVar5 + 4;
          } while (pSVar8 != (SgLIGHT *)&pSVar14->spower);
          uVar7 = *(undefined8 *)(pSVar9->ldirection + 2);
          puVar5[4] = *(undefined8 *)pSVar8;
          puVar5[5] = uVar7;
          num = num + 1;
        }
      }
      else {
        __s1 = pFVar15->lit_serial[0].light_name;
        iVar10 = strncmp(__s1,pfx,4);
        if (iVar10 == 0) {
          bVar3 = true;
        }
        else if (*pfx != 'm') {
          iVar10 = strncmp(__s1,&DAT_00356ea8,4);
          bVar3 = iVar10 == 0;
        }
      }
      uVar16 = uVar16 + 1;
      iVar10 = num_01;
      if (bVar3) {
        uVar2 = pFVar15->lit_serial[0].light_type;
        if (uVar2 == '\x01') {
          if (num_00 < 3) {
            pSVar8 = pSVar14;
            puVar4 = &ilight_135 + num_00 * 0x12;
            do {
              puVar5 = puVar4;
              pSVar9 = pSVar8;
              uVar7 = *(undefined8 *)(pSVar9->pos + 2);
              uVar12 = *(undefined8 *)pSVar9->direction;
              uVar13 = *(undefined8 *)(pSVar9->direction + 2);
              *puVar5 = *(undefined8 *)pSVar9->pos;
              puVar5[1] = uVar7;
              puVar5[2] = uVar12;
              puVar5[3] = uVar13;
              pSVar8 = (SgLIGHT *)pSVar9->ldirection;
              puVar4 = puVar5 + 4;
            } while (pSVar8 != (SgLIGHT *)&pSVar14->spower);
            uVar7 = *(undefined8 *)(pSVar9->ldirection + 2);
            puVar5[4] = *(undefined8 *)pSVar8;
            puVar5[5] = uVar7;
            num_00 = num_00 + 1;
          }
          goto LAB_00183888;
        }
        if (uVar2 == '\x02') {
          if ((int)num < 3) {
            pSVar8 = pSVar14;
            puVar4 = &slight_136 + num * 0x12;
            do {
              puVar5 = puVar4;
              pSVar9 = pSVar8;
              uVar7 = *(undefined8 *)(pSVar9->pos + 2);
              uVar12 = *(undefined8 *)pSVar9->direction;
              uVar13 = *(undefined8 *)(pSVar9->direction + 2);
              *puVar5 = *(undefined8 *)pSVar9->pos;
              puVar5[1] = uVar7;
              puVar5[2] = uVar12;
              puVar5[3] = uVar13;
              pSVar8 = (SgLIGHT *)pSVar9->ldirection;
              puVar4 = puVar5 + 4;
            } while (pSVar8 != (SgLIGHT *)&pSVar14->spower);
            uVar7 = *(undefined8 *)(pSVar9->ldirection + 2);
            puVar5[4] = *(undefined8 *)pSVar8;
            puVar5[5] = uVar7;
            num = num + 1;
          }
          goto LAB_00183888;
        }
        if (uVar2 == '\x03') {
          if (num_01 < 3) {
            iVar10 = num_01 + 1;
            pSVar8 = pSVar14;
            puVar4 = &plight_137 + num_01 * 0x12;
            do {
              puVar5 = puVar4;
              pSVar9 = pSVar8;
              uVar12 = *(undefined8 *)(pSVar9->pos + 2);
              uVar13 = *(undefined8 *)pSVar9->direction;
              uVar7 = *(undefined8 *)(pSVar9->direction + 2);
              *puVar5 = *(undefined8 *)pSVar9->pos;
              puVar5[1] = uVar12;
              puVar5[2] = uVar13;
              puVar5[3] = uVar7;
              pSVar8 = (SgLIGHT *)pSVar9->ldirection;
              puVar4 = puVar5 + 4;
            } while (pSVar8 != (SgLIGHT *)&pSVar14->spower);
            uVar7 = *(undefined8 *)(pSVar9->ldirection + 2);
            puVar5[4] = *(undefined8 *)pSVar8;
            puVar5[5] = uVar7;
          }
          goto LAB_00183888;
        }
        uVar6 = fl->all_lit_num;
      }
      else {
LAB_00183888:
        uVar6 = fl->all_lit_num;
        num_01 = iVar10;
      }
      pFVar15 = (FOD_LIGHT *)(pFVar15->lit_serial + 1);
      pSVar14 = pSVar14 + 1;
    } while (uVar16 < uVar6);
  }
  local_a8 = fl->amb;
  DAT_004007d8 = fl->amb[2];
  DAT_004007dc = fl->amb[3];
  ambient_138 = (undefined4)*(undefined8 *)*local_a8;
  DAT_004007d4 = (undefined4)((ulong)*(undefined8 *)*local_a8 >> 0x20);
                    /* end of inlined section */
  cVar1 = *pfx;
  if (cVar1 == 'm') {
    pVVar11 = (Vector4 *)fl->amb[1];
  }
  else if (cVar1 == 'r') {
    pVVar11 = (Vector4 *)fl->amb[2];
  }
  else if (cVar1 == 'f') {
    pVVar11 = (Vector4 *)fl->amb[3];
  }
  else {
    if (cVar1 != 'd') {
      if (cVar1 == 'i') {
        sceVu0AddVector((Vector4 *)&ambient_138,(Vector4 *)&ambient_138,(Vector4 *)fl->amb[5]);
      }
      goto LAB_00183934;
    }
    pVVar11 = (Vector4 *)fl->amb[4];
  }
  sceVu0AddVector((Vector4 *)&ambient_138,(Vector4 *)&ambient_138,pVVar11);
LAB_00183934:
  SgSetAmbient((float *)&ambient_138);
  if (num_00 < 1) {
    SgSetInfiniteLights(eye,(SgLIGHT *)0x0,0);
  }
  else {
    SgSetInfiniteLights(eye,(SgLIGHT *)&ilight_135,num_00);
  }
  if (num_01 < 1) {
    SgSetPointLights((SgLIGHT *)0x0,0);
  }
  else {
    SgSetPointLights((SgLIGHT *)&plight_137,num_01);
  }
  if ((int)num < 1) {
    FodSetSpotLights((SgLIGHT *)&slight_136,num);
    return;
  }
  FodSetSpotLights((SgLIGHT *)&slight_136,num);
  return;
}

void FodSetSpotLights(SgLIGHT *sl, u_int num) {
	u_int i;
	
  SgLIGHT *pSVar1;
  float *pfVar2;
  uint uVar3;
  
  if ((sl != (SgLIGHT *)0x0) && (uVar3 = 0, num != 0)) {
    pfVar2 = sl->direction;
    pSVar1 = sl;
    do {
      pSVar1->pos[3] = 1.0;
      sceVu0SubVector(pfVar2,pSVar1,pfVar2);
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 0x24;
      pSVar1 = pSVar1 + 1;
    } while (uVar3 < num);
  }
  SgSetSpotLights(sl,num);
  return;
}

void FodGetToSgLight(FOD_CTRL *fc) {
	SgLIGHT *sl;
	int i;
	u_int *lit_addr;
	float *data;
	float *v0;
	float *v1;
	float *v0;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float cone_deg;
	float *v0;
	float *v1;
	float *v0;
	float *v0;
	float *v1;
	
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  Vector4 *pVVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  Vector4 *pVVar9;
  FOD_LIT_FRAME *pFVar10;
  FOD_LIT_FRAME *pFVar11;
  uint uVar12;
  
  uVar12 = 0;
  uVar8 = (fc->fod_light).all_lit_num;
  pFVar11 = fc->lit_frame + 1;
  if (uVar8 != 0) {
    iVar4 = 0;
    do {
      pFVar10 = pFVar11;
      if ((fc->fod_light).lit_serial[0].light_name[iVar4 + -2] == '\x01') {
        uVar2 = pFVar11->size;
        pFVar10 = pFVar11 + 1;
        pVVar9 = (Vector4 *)((fc->fod_light).all_lit + uVar12);
        if (uVar2 == 2) {
          if (*(char *)pFVar11->pad != '\0') {
            uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar6 = (float)pFVar11[1].pad[0];
            fVar7 = (float)pFVar11[1].pad[1];
            pVVar9[4].x = (float)uVar3;
            pVVar9[4].y = (float)((ulong)uVar3 >> 0x20);
            pVVar9[4].z = fVar6;
            pVVar9[4].w = fVar7;
            uVar3 = *(undefined8 *)(pVVar9 + 4);
            fVar6 = pVVar9[4].z;
            fVar7 = pVVar9[4].w;
            pVVar9[5].x = (float)uVar3;
            pVVar9[5].y = (float)((ulong)uVar3 >> 0x20);
            pVVar9[5].z = fVar6;
            pVVar9[5].w = fVar7;
                    /* end of inlined section */
            pFVar10 = pFVar11 + 2;
          }
          if (*(char *)((int)pFVar11->pad + 1) == '\0') {
            cVar1 = *(char *)((int)pFVar11->pad + 2);
          }
          else {
            uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar6 = (float)pFVar10->pad[0];
            fVar7 = (float)pFVar10->pad[1];
            pVVar9->x = (float)uVar3;
            pVVar9->y = (float)((ulong)uVar3 >> 0x20);
            pVVar9->z = fVar6;
            pVVar9->w = fVar7;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pVVar9,(Matrix4x4 *)fod_cmn_mtx,pVVar9);
            pFVar10 = pFVar10 + 1;
            cVar1 = *(char *)((int)pFVar11->pad + 2);
          }
          pVVar5 = pVVar9 + 1;
          if (cVar1 != '\0') {
            uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar6 = (float)pFVar10->pad[0];
            fVar7 = (float)pFVar10->pad[1];
            pVVar5->x = (float)uVar3;
            pVVar9[1].y = (float)((ulong)uVar3 >> 0x20);
            pVVar9[1].z = fVar6;
            pVVar9[1].w = fVar7;
            pFVar10 = pFVar10 + 1;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pVVar5,(Matrix4x4 *)fod_cmn_mtx,pVVar5);
          }
          if (*(char *)((int)pFVar11->pad + 3) == '\0') {
            uVar8 = (fc->fod_light).all_lit_num;
          }
          else {
            fVar7 = (float)pFVar10->frame;
            fVar6 = SgCosf((fVar7 * DAT_00355ac8) / 180.0);
            pVVar9[6].y = fVar7;
            pVVar9[6].x = 25.0;
            pVVar9[7].x = fVar6 * fVar6;
LAB_00183cb8:
            uVar8 = (fc->fod_light).all_lit_num;
            pFVar10 = pFVar10 + 1;
          }
        }
        else if (uVar2 < 3) {
          if (uVar2 == 1) {
            if (*(char *)pFVar11->pad != '\0') {
              uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
              fVar6 = (float)pFVar11[1].pad[0];
              fVar7 = (float)pFVar11[1].pad[1];
              pVVar9[4].x = (float)uVar3;
              pVVar9[4].y = (float)((ulong)uVar3 >> 0x20);
              pVVar9[4].z = fVar6;
              pVVar9[4].w = fVar7;
              uVar3 = *(undefined8 *)(pVVar9 + 4);
              fVar6 = pVVar9[4].z;
              fVar7 = pVVar9[4].w;
              pVVar9[5].x = (float)uVar3;
              pVVar9[5].y = (float)((ulong)uVar3 >> 0x20);
              pVVar9[5].z = fVar6;
              pVVar9[5].w = fVar7;
                    /* end of inlined section */
              pVVar9[6].x = 0.0;
              pFVar10 = pFVar11 + 2;
              pVVar9[6].y = 0.0;
              pVVar9[6].z = 0.0;
              pVVar9[6].w = 0.0;
            }
            if (*(char *)((int)pFVar11->pad + 2) != '\0') {
              uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
              fVar6 = (float)pFVar10->pad[0];
              fVar7 = (float)pFVar10->pad[1];
              pVVar9[1].x = (float)uVar3;
              pVVar9[1].y = (float)((ulong)uVar3 >> 0x20);
              pVVar9[1].z = fVar6;
              pVVar9[1].w = fVar7;
              pFVar10 = pFVar10 + 1;
                    /* end of inlined section */
            }
          }
        }
        else if (uVar2 == 3) {
          if (*(char *)pFVar11->pad != '\0') {
            uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar6 = (float)pFVar11[1].pad[0];
            fVar7 = (float)pFVar11[1].pad[1];
            pVVar9[4].x = (float)uVar3;
            pVVar9[4].y = (float)((ulong)uVar3 >> 0x20);
            pVVar9[4].z = fVar6;
            pVVar9[4].w = fVar7;
            uVar3 = *(undefined8 *)(pVVar9 + 4);
            fVar6 = pVVar9[4].z;
            fVar7 = pVVar9[4].w;
            pVVar9[5].x = (float)uVar3;
            pVVar9[5].y = (float)((ulong)uVar3 >> 0x20);
            pVVar9[5].z = fVar6;
            pVVar9[5].w = fVar7;
                    /* end of inlined section */
            pFVar10 = pFVar11 + 2;
          }
          if (*(char *)((int)pFVar11->pad + 1) != '\0') {
            uVar3 = *(undefined8 *)pFVar10;
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar6 = (float)pFVar10->pad[0];
            fVar7 = (float)pFVar10->pad[1];
            pVVar9->x = (float)uVar3;
            pVVar9->y = (float)((ulong)uVar3 >> 0x20);
            pVVar9->z = fVar6;
            pVVar9->w = fVar7;
                    /* end of inlined section */
            sceVu0ApplyMatrix(pVVar9,(Matrix4x4 *)fod_cmn_mtx,pVVar9);
            goto LAB_00183cb8;
          }
        }
      }
      pFVar11 = pFVar10;
      uVar12 = uVar12 + 1;
      iVar4 = uVar12 * 0x20;
    } while (uVar12 < uVar8);
  }
  return;
}

void FodGetHandSpotPos(FOD_LIGHT *fl, float *p, float *i) {
	SgLIGHT *sl;
	float *v1;
	float *v0;
	float *v1;
	
  undefined8 uVar1;
  SgLIGHT *pSVar2;
  float fVar3;
  float fVar4;
  
  pSVar2 = fl->all_lit + fl->hand_spot_no;
  uVar1 = *(undefined8 *)pSVar2->pos;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  fVar3 = pSVar2->pos[2];
  fVar4 = pSVar2->pos[3];
  *p = (float)uVar1;
  p[1] = (float)((ulong)uVar1 >> 0x20);
  p[2] = fVar3;
  p[3] = fVar4;
  uVar1 = *(undefined8 *)pSVar2->direction;
  fVar3 = pSVar2->direction[2];
  fVar4 = pSVar2->direction[3];
  *i = (float)uVar1;
  i[1] = (float)((ulong)uVar1 >> 0x20);
  i[2] = fVar3;
  i[3] = fVar4;
  return;
}

void FodGetDropSpotPos(FOD_LIGHT *fl, char *pfx, float *lp, float *li) {
	SgLIGHT *sl;
	int i;
	int no;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  SgLIGHT *pSVar4;
  float fVar5;
  float fVar6;
  char *__s2;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0xffffffff;
  uVar7 = 0;
  if (fl->all_lit_num != 0) {
    __s2 = fl->lit_serial[0].light_name;
    do {
      iVar2 = strncmp(pfx,__s2,4);
      if (iVar2 == 0) {
        iVar2 = strncmp("drop_spot",__s2 + 5,9);
        if (iVar2 == 0) {
          uVar8 = uVar7;
        }
        uVar3 = fl->all_lit_num;
      }
      else {
        uVar3 = fl->all_lit_num;
      }
      uVar7 = uVar7 + 1;
      __s2 = __s2 + 0x20;
    } while (uVar7 < uVar3);
  }
  if (-1 < (int)uVar8) {
    pSVar4 = fl->all_lit + uVar8;
    uVar1 = *(undefined8 *)pSVar4->pos;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar5 = pSVar4->pos[2];
    fVar6 = pSVar4->pos[3];
    *lp = (float)uVar1;
    lp[1] = (float)((ulong)uVar1 >> 0x20);
    lp[2] = fVar5;
    lp[3] = fVar6;
    uVar1 = *(undefined8 *)pSVar4->direction;
    fVar5 = pSVar4->direction[2];
    fVar6 = pSVar4->direction[3];
    *li = (float)uVar1;
    li[1] = (float)((ulong)uVar1 >> 0x20);
    li[2] = fVar5;
    li[3] = fVar6;
  }
                    /* end of inlined section */
  return;
}

int FodGetLightType(FOD_LIGHT *fl, int id) {
	int i;
	int ret_type;
	
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = &fl->all_lit_num;
  uVar3 = 0;
  uVar2 = 0;
  if (*puVar1 != 0) {
    do {
      if ((uint)fl->lit_serial[0].light_no == id) {
        uVar2 = (uint)fl->lit_serial[0].light_type;
      }
      uVar3 = uVar3 + 1;
      fl = (FOD_LIGHT *)(fl->lit_serial + 1);
    } while (uVar3 < *puVar1);
  }
  return uVar2;
}

void FodGetFirstCam(SgCAMERA *cam, FOD_CTRL *fc) {
	FOD_FIRST_CAM *fcam;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  FOD_FILE_HDR *pFVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  Vector4 *pVVar5;
  float fVar6;
  
  pFVar1 = fc->cam_file_hdr;
  uVar2 = *(undefined8 *)(pFVar1 + 1);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  fVar3 = (float)pFVar1[1].reso;
  fVar4 = (float)pFVar1[1].frame;
  (cam->p).x = (float)uVar2;
  (cam->p).y = (float)((ulong)uVar2 >> 0x20);
  (cam->p).z = fVar3;
  (cam->p).w = fVar4;
  pVVar5 = &cam->i;
  uVar2 = *(undefined8 *)(pFVar1 + 2);
  fVar3 = (float)pFVar1[2].reso;
  fVar4 = (float)pFVar1[2].frame;
  pVVar5->x = (float)uVar2;
  (cam->i).y = (float)((ulong)uVar2 >> 0x20);
  (cam->i).z = fVar3;
  (cam->i).w = fVar4;
  fVar3 = DAT_00355acc;
                    /* end of inlined section */
  fVar4 = 180.0;
  cam->roll = ((float)pFVar1[3].file_id * DAT_00355acc) / 180.0;
  sceVu0ApplyMatrix(&cam->p,(Matrix4x4 *)fod_cmn_mtx,&cam->p);
  sceVu0ApplyMatrix(pVVar5,(Matrix4x4 *)fod_cmn_mtx,pVVar5);
  fVar6 = cam->roll + fVar3;
  cam->roll = fVar6;
  if (fVar3 < fVar6) {
    cam->roll = fVar6 - DAT_00355ad0;
  }
  fVar4 = (pFVar1[3].version * fVar3) / fVar4;
  cam->fov = fVar4;
  if (fVar3 < fVar4) {
    cam->fov = fVar4 - DAT_00355ad4;
  }
  cam->nearz = (float)pFVar1[3].reso;
  fVar4 = DAT_00355adc;
  fVar3 = DAT_00355ad8;
  cam->farz = (float)pFVar1[3].frame;
  cam->zmax = fVar4;
  cam->ax = 1.0;
  cam->ay = fVar3;
  cam->cy = 2048.0;
  cam->cx = 2048.0;
  cam->zmin = 0.0;
  return;
}

void FodGetCamData(SgCAMERA *cam, FOD_CTRL *fc) {
	float *fdat;
	int i;
	float *v0;
	float *v1;
	float *v1;
	
  bool bVar1;
  undefined8 uVar2;
  uint *puVar3;
  FOD_CAM_FRAME *pFVar4;
  FOD_CAM_FRAME *pFVar5;
  SgCAMERA *pSVar6;
  float fVar7;
  FOD_CAM_FRAME *pFVar8;
  int iVar9;
  float fVar10;
  
  pFVar5 = fc->cam_frame;
  pFVar8 = pFVar5 + 1;
  pFVar4 = pFVar5;
  iVar9 = 0;
  do {
    if (pFVar4->anm[0] != '\x01') goto switchD_00184010_caseD_6;
    switch(iVar9) {
    case 0:
      uVar2 = *(undefined8 *)pFVar8;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      fVar10 = *(float *)pFVar8->anm;
      fVar7 = *(float *)(pFVar8->anm + 4);
      (cam->p).x = (float)uVar2;
      (cam->p).y = (float)((ulong)uVar2 >> 0x20);
      (cam->p).z = fVar10;
      (cam->p).w = fVar7;
      pSVar6 = cam;
                    /* end of inlined section */
      goto LAB_00184044;
    case 1:
      uVar2 = *(undefined8 *)pFVar8;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      fVar10 = *(float *)pFVar8->anm;
      fVar7 = *(float *)(pFVar8->anm + 4);
      (cam->i).x = (float)uVar2;
      (cam->i).y = (float)((ulong)uVar2 >> 0x20);
      (cam->i).z = fVar10;
      (cam->i).w = fVar7;
                    /* end of inlined section */
      pSVar6 = (SgCAMERA *)&cam->i;
LAB_00184044:
      pFVar8 = pFVar8 + 1;
      sceVu0ApplyMatrix(&pSVar6->p,(Matrix4x4 *)fod_cmn_mtx,&pSVar6->p);
      pFVar5 = fc->cam_frame;
      break;
    case 2:
      fVar10 = ((float)pFVar8->frame * DAT_00355ae0) / 180.0 + DAT_00355ae0;
      bVar1 = DAT_00355ae0 < fVar10;
      cam->roll = fVar10;
      if (bVar1) {
        cam->roll = fVar10 - DAT_00355ae4;
      }
      goto LAB_001840d4;
    case 3:
      fVar10 = ((float)pFVar8->frame * DAT_00355ae8) / 180.0;
      bVar1 = DAT_00355ae8 < fVar10;
      cam->fov = fVar10;
      if (bVar1) {
        cam->fov = fVar10 - DAT_00355aec;
      }
LAB_001840d4:
      pFVar8 = (FOD_CAM_FRAME *)&pFVar8->size;
      break;
    case 4:
      puVar3 = &pFVar8->frame;
      pFVar8 = (FOD_CAM_FRAME *)&pFVar8->size;
      cam->nearz = (float)*puVar3;
      break;
    case 5:
      puVar3 = &pFVar8->frame;
      pFVar8 = (FOD_CAM_FRAME *)&pFVar8->size;
      cam->farz = (float)*puVar3;
    }
switchD_00184010_caseD_6:
    if (5 < iVar9 + 1) {
      return;
    }
    pFVar4 = (FOD_CAM_FRAME *)(pFVar5->anm + iVar9 + -7);
    iVar9 = iVar9 + 1;
  } while( true );
}

u_int* FodGetFixEffect(u_int *tep) {
	FOD_EFF_DATA *fed;
	u_int i;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  FOD_EFF_DATA *pFVar4;
  FOD_EFF_PARAM *pFVar5;
  
  if (tep[3] == 0) {
    puVar2 = tep + 4;
    eff_param.fix_eff_num = 0;
  }
  else {
    pFVar5 = &eff_param;
    memset(&eff_param,0,0xe0);
    uVar1 = tep[4];
    pFVar4 = (FOD_EFF_DATA *)(tep + 8);
    eff_param.pdf_p = (void *)0x0;
    uVar3 = 0;
    eff_param.fix_eff_num = uVar1;
    if (uVar1 != 0) {
      do {
        pFVar5->fix[0] = pFVar4;
        uVar3 = uVar3 + 1;
        pFVar4 = pFVar4 + 1;
        pFVar5 = (FOD_EFF_PARAM *)(pFVar5->fix + 1);
      } while (uVar3 < uVar1);
    }
    puVar2 = tep + 4 + eff_param.fix_eff_num * 4 + 4;
  }
  return puVar2;
}

void FodSetEffect(FOD_CTRL *fc) {
	FOD_EFF_FRAME *fef;
	FOD_EFF_DATA *fed;
	int i;
	char *end_addr;
	
  byte bVar1;
  FOD_EFF_DATA *pFVar2;
  int *piVar3;
  FOD_EF_FADE_MDL **ppFVar4;
  FOD_EFF_DATA *pFVar5;
  int iVar6;
  uint uVar7;
  
  ppFVar4 = eff_param.fade_mdl + 3;
  iVar6 = 3;
  pFVar2 = (FOD_EFF_DATA *)fc->eff_frame;
  pFVar5 = (FOD_EFF_DATA *)(pFVar2->unit + (pFVar2->blur).scale);
  do {
    *ppFVar4 = (FOD_EF_FADE_MDL *)0x0;
    iVar6 = iVar6 + -1;
    ppFVar4 = ppFVar4 + -1;
  } while (-1 < iVar6);
  eff_param.fade_mdl_cnt = 0;
  iVar6 = 3;
  piVar3 = eff_param.mdl_efct_sw + 3;
  do {
    *piVar3 = -1;
    iVar6 = iVar6 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar6);
  eff_param.fire_num = 0;
  if (pFVar2->unit[8] == '\x01') {
    SetEffects(1,1);
    bVar1 = pFVar2->unit[9];
  }
  else {
    bVar1 = pFVar2->unit[9];
  }
  if ((bVar1 == 1) && (eff_param.mono_flg == 0)) {
    eff_param.mono_flg = (uint)bVar1;
    ChangeMonochrome(1);
  }
  else if ((bVar1 == 0) && (eff_param.mono_flg != 0)) {
    eff_param.mono_flg = 0;
    ChangeMonochrome(0);
  }
  while (pFVar2 = pFVar2 + 1, pFVar2 < pFVar5) {
    FodSetEffectParam(pFVar2);
  }
  uVar7 = 0;
  if (eff_param.fix_eff_num != 0) {
    iVar6 = 0;
    do {
      pFVar2 = *(FOD_EFF_DATA **)((int)eff_param.fix + iVar6);
      if ((pFVar2->dither).efct_id == '\x12') {
        if ((fc->now_frame == 1) && (fc->now_reso == 0)) {
          eff_param.pdf_spd = 1.0;
          uVar7 = uVar7 + 2;
          eff_param.pdf_rate = (pFVar2->dither).speed;
          eff_param.pdf_trate = (pFVar2->dither).alpha;
          eff_param.pdf_pos[0] = *(float *)((int)pFVar2 + 0x14);
          eff_param.pdf_pos[1] = *(float *)((int)pFVar2 + 0x18);
          eff_param.pdf_pos[2] = *(float *)((int)pFVar2 + 0x1c);
          eff_param.pdf_pos[3] = 0.0;
          sceVu0ApplyMatrix((Vector4 *)eff_param.pdf_pos,(Matrix4x4 *)fod_cmn_mtx,
                            (Vector4 *)eff_param.pdf_pos);
          eff_param.pdf_p = SetEffects(0x1b,2);
        }
      }
      else {
        FodSetEffectParam(pFVar2);
      }
      uVar7 = uVar7 + 1;
      iVar6 = uVar7 * 4;
    } while (uVar7 < eff_param.fix_eff_num);
  }
  return;
}

void FodSetEffectParam(FOD_EFF_DATA *fed) {
	int i;
	sceVu0FMATRIX mtx;
	sceVu0FVECTOR base;
	sceVu0FVECTOR trgt;
	float x;
	float y;
	float z;
	sceVu0FVECTOR *fire;
	
  FOD_EF_FADE_MDL **ppFVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  Vector4 *pVVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float mtx [4] [4];
  float base [4];
  float trgt [4];
  
  fVar9 = DAT_00355af4;
  fVar7 = DAT_00355af0;
  uVar2 = eff_param.fire_num;
  switch((fed->dither).efct_id) {
  case '\x01':
    SetEffects(2,1);
    break;
  case '\x02':
  case '\x03':
  case '\x04':
    SetEffects(3,1);
    break;
  case '\x05':
    iVar3 = 6;
    goto LAB_0018456c;
  case '\x06':
    iVar3 = 7;
    goto LAB_0018475c;
  case '\t':
    iVar3 = 0xd;
    goto LAB_0018456c;
  case '\n':
    iVar3 = 0xe;
    goto LAB_0018456c;
  case '\v':
    iVar3 = 0xf;
LAB_0018456c:
    SetEffects(iVar3,1);
    break;
  case '\f':
    SetEffects(9,1);
    break;
  case '\r':
    if ((fed->dither).type == '\0') {
      eff_param.lenz_rot[0] = (fed->dither).speed;
      pfVar4 = eff_param.lenz_rot;
      eff_param.lenz_rot[1] = (fed->dither).alpha;
      iVar3 = 2;
      eff_param.lenz_rot[2] = (fed->lenz_f).z;
      eff_param.lenz_rot[3] = 0.0;
      eff_param.lenz_pos[0] = *(float *)((int)fed + 0x14);
      eff_param.lenz_pos[1] = *(float *)((int)fed + 0x18);
      eff_param.lenz_pos[2] = *(float *)((int)fed + 0x1c);
      eff_param.lenz_pos[3] = 0.0;
      do {
        fVar8 = (*pfVar4 * fVar7) / 180.0;
        *pfVar4 = fVar8;
        if (fVar7 < fVar8) {
          *pfVar4 = fVar8 - fVar9;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 1;
      } while (-1 < iVar3);
      memset(base,0,0x10);
      fVar9 = 0.0;
      sceVu0UnitMatrix((Matrix4x4 *)mtx);
      mtx[0][0] = fVar9;
      mtx[1][1] = fVar9;
      sceVu0RotMatrixX(eff_param.lenz_rot[0],mtx,mtx);
      sceVu0RotMatrixY(eff_param.lenz_rot[1],mtx,mtx);
      sceVu0RotMatrixZ(eff_param.lenz_rot[2],mtx,mtx);
      fVar7 = SgSqrtf(mtx[2][0] * mtx[2][0] + mtx[2][2] * mtx[2][2]);
      eff_param.lenz_rot[0] = SgAtan2f(mtx[2][1],fVar7);
      fVar7 = SgAtan2f(mtx[2][0],mtx[2][2]);
      eff_param.lenz_rot[0] = -eff_param.lenz_rot[0];
      eff_param.lenz_rot[1] = -fVar7 + DAT_00355af8;
      if (DAT_00355af8 < eff_param.lenz_rot[0]) {
        eff_param.lenz_rot[0] = eff_param.lenz_rot[0] - DAT_00355afc;
      }
      if (DAT_00355af8 < eff_param.lenz_rot[1]) {
        eff_param.lenz_rot[1] = eff_param.lenz_rot[1] - DAT_00355b00;
      }
      eff_param.lenz_rot[2] = fVar9;
      sceVu0ApplyMatrix((Vector4 *)eff_param.lenz_pos,(Matrix4x4 *)fod_cmn_mtx,
                        (Vector4 *)eff_param.lenz_pos);
      SetEffects(10,1);
    }
    break;
  case '\x0e':
    iVar3 = 8;
LAB_0018475c:
    SetEffects(iVar3,1);
    break;
  case '\x0f':
    if ((fed->fade_scr).a != '\0') {
      SceneSetSquare(0x10,0.0,0.0,640.0,448.0,(fed->fade_scr).r,(fed->fade_scr).g,(fed->fade_scr).b,
                     (fed->fade_scr).a);
    }
    break;
  case '\x10':
    ppFVar1 = eff_param.fade_mdl + eff_param.fade_mdl_cnt;
    eff_param.fade_mdl_cnt = eff_param.fade_mdl_cnt + 1;
    *ppFVar1 = (FOD_EF_FADE_MDL *)fed;
    break;
  case '\x12':
    if ((fed->dither).type == '\0') {
      iVar3 = GetRndSP(1,2);
      eff_param.pdf_spd = (float)iVar3;
      eff_param.pdf_rate = (fed->dither).speed + DAT_00355b04;
      eff_param.pdf_trate = (fed->dither).alpha;
      eff_param.pdf_pos[0] = *(float *)((int)fed + 0x14);
      eff_param.pdf_pos[1] = *(float *)((int)fed + 0x18);
      eff_param.pdf_pos[2] = *(float *)((int)fed + 0x1c);
      eff_param.pdf_pos[3] = 0.0;
      sceVu0ApplyMatrix((Vector4 *)eff_param.pdf_pos,(Matrix4x4 *)fod_cmn_mtx,
                        (Vector4 *)eff_param.pdf_pos);
    }
    break;
  case '\x13':
  case '\x14':
    pVVar5 = (Vector4 *)eff_param.fire_pos[eff_param.fire_num];
    if (eff_param.fire_num < 4) {
      pVVar5->x = (fed->dither).speed;
      eff_param.fire_pos[uVar2][1] = (fed->dither).alpha;
      fVar7 = (float)(fed->dither).ipad;
      eff_param.fire_pos[uVar2][3] = 0.0;
      eff_param.fire_pos[uVar2][2] = fVar7;
      sceVu0ApplyMatrix(pVVar5,(Matrix4x4 *)fod_cmn_mtx,pVVar5);
      SetEffects(0x17,1);
      eff_param.fire_num = eff_param.fire_num + 1;
    }
    break;
  case '\x17':
    piVar6 = eff_param.mdl_efct_sw;
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*piVar6 == -1) {
        uVar2 = GetPrefixNo((char *)&(fed->fade_scr).r);
        *piVar6 = uVar2;
        return;
      }
      piVar6 = piVar6 + 1;
    }
  }
  return;
}
