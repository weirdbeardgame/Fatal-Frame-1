// STATUS: NOT STARTED

static u_int plyr_mepati_cnt = 0;

u_int* mimInitMimeCtrl(MIME_CTRL *m_ctrl, MIME_DAT *mdat, u_int *mim_p, u_int *mdl_p, u_int *tmp_p) {
	u_int i;
	u_int j;
	u_int mim_num;
	u_int parts_buf[20];
	u_int *parts_p[20];
	u_int *parts;
	u_int fsize;
	u_int parts_no;
	u_int flg;
	
  uint uVar1;
  bool bVar2;
  uint parts_id;
  uint *mdl_p_00;
  uint uVar3;
  uint uVar4;
  MIME_CTRL *m_ctrl_00;
  uint uVar5;
  uint *puVar6;
  ulong in_hi;
  uint parts_buf [20];
  uint *parts_p [20];
  MIME_CTRL *local_b0;
  uint *local_ac;
  uint mim_num;
  
  uVar5 = 0;
  mim_num = *mim_p;
  puVar6 = mim_p + 4;
  local_b0 = m_ctrl;
  local_ac = mdl_p;
  if (mim_num != 0) {
    do {
      uVar1 = *puVar6;
      bVar2 = false;
      puVar6 = puVar6 + 4;
      *(undefined *)(((uint)local_b0 | (uint)in_hi) + uVar5 * 0x14 + 0x10) = 0;
      parts_id = mimGetPartsNo(puVar6);
      mdl_p_00 = (uint *)GetFileInPak(local_ac,parts_id);
      parts_buf[uVar5] = parts_id;
      uVar3 = 0;
      parts_p[uVar5] = tmp_p;
      if (uVar5 != 0) {
        if (parts_id == parts_buf[0]) {
          bVar2 = true;
        }
        else {
          for (uVar3 = 1; uVar3 < uVar5; uVar3 = uVar3 + 1) {
            if (parts_id == parts_buf[uVar3]) {
              bVar2 = true;
              break;
            }
          }
        }
      }
      uVar4 = uVar5 + 1;
      if (bVar2) {
        mimSetMimeDat(mdat + uVar5,puVar6,parts_p[uVar3],mdl_p_00);
      }
      else {
        tmp_p = mimSetMimeDat(mdat + uVar5,puVar6,tmp_p,mdl_p_00);
      }
      in_hi = (ulong)(uint)((int)(uVar5 * 0x14) >> 0x1f);
      m_ctrl_00 = local_b0 + uVar5;
      mimSetMimeCtrl(m_ctrl_00,mdat + uVar5,0,parts_id);
      mimAddressMapping(m_ctrl_00->mdat->dat);
      mimSetOriVertex(m_ctrl_00->mdat);
      puVar6 = (uint *)((int)puVar6 + (uVar1 & 0xfffffffc));
      uVar5 = uVar4;
    } while (uVar4 < mim_num);
  }
  return tmp_p;
}

void mimInitAcsCtrl(ANI_CTRL *ani_ctrl, u_short mdl_no) {
	u_int i;
	u_int j;
	u_int k;
	u_int wmim_num;
	WMIM_DAT *wmim_tbl;
	MIME_CTRL *m_ctrl;
	u_char flg;
	u_char name[100];
	WMIM_DAT *wdat;
	
  uchar uVar1;
  bool bVar2;
  WMIM_CTRL *pWVar3;
  int iVar4;
  MIME_CTRL *pMVar5;
  uchar *__src;
  WMIM_CTRL *pWVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uchar name [100];
  
  pWVar6 = ani_ctrl->wmim;
  if (pWVar6 != (WMIM_CTRL *)0x0) {
    piVar7 = (int *)(&PTR_m000_wmim_tbl_002fc238)[((int)mdl_no & 0xffffU) * 5];
    uVar8 = 0;
    if ((piVar7 == (int *)0x0) || (iVar4 = 0, *piVar7 == 0)) {
      uVar10 = ani_ctrl->mim_num;
    }
    else {
      uVar10 = ani_ctrl->mim_num;
      do {
        pWVar3 = pWVar6 + uVar8;
        pWVar3->wdat = (WMIM_DAT *)((int)piVar7 + iVar4);
        uVar8 = uVar8 + 1;
        pWVar3->w[3] = 0.0;
        pWVar3->pbak[0] = 0.0;
        piVar7 = (int *)(&PTR_m000_wmim_tbl_002fc238)[((int)mdl_no & 0xffffU) * 5];
        pWVar3->pbak[1] = 0.0;
        pWVar3->pbak[2] = 0.0;
        pWVar3->pbak[3] = 0.0;
        pWVar3->v[0] = 0.0;
        pWVar3->v[1] = 0.0;
        pWVar3->v[2] = 0.0;
        pWVar3->v[3] = 0.0;
        pWVar3->w[0] = 0.0;
        pWVar3->w[1] = 0.0;
        pWVar3->w[2] = 0.0;
        if (piVar7 == (int *)0x0) break;
        iVar4 = uVar8 * 8;
      } while (piVar7[uVar8 * 2] != 0);
    }
    if (uVar8 < 10) {
      pWVar6 = pWVar6 + uVar8;
      uVar9 = uVar8;
      do {
        pWVar6->wdat = (WMIM_DAT *)0x0;
        uVar9 = uVar9 + 1;
        pWVar6 = pWVar6 + 1;
      } while (uVar9 < 10);
    }
    ani_ctrl->wmim_num = uVar8;
    if (uVar10 < uVar8) {
      ani_ctrl->wmim_num = 0;
      ani_ctrl->mim_num = 0;
    }
    else {
      uVar8 = 0;
      if (uVar10 != 0) {
        pMVar5 = ani_ctrl->mim;
LAB_00168fc0:
        bVar2 = false;
        if (pMVar5 != (MIME_CTRL *)0x0) {
          pMVar5 = pMVar5 + uVar8;
          uVar10 = 0;
          if (pMVar5->flg == '\0') {
            pMVar5->weight_id = '\0';
          }
          else {
            __src = mimGetWeightName(pMVar5->mdat->dat);
            strncpy((char *)name,(char *)__src,8);
            if (ani_ctrl->wmim_num != 0) {
              pWVar6 = ani_ctrl->wmim;
              do {
                iVar4 = 0;
                while( true ) {
                  uVar1 = (pWVar6[uVar10].wdat)->dat->name[iVar4];
                  if (uVar1 == '\0') break;
                  if (name[iVar4] != uVar1) goto LAB_0016905c;
                  iVar4 = iVar4 + 1;
                }
                pMVar5->weight_id = (uchar)uVar10;
                bVar2 = true;
                mimRequest(pMVar5,'\0');
LAB_0016905c:
                uVar10 = uVar10 + 1;
                if (bVar2) break;
                if (ani_ctrl->wmim_num <= uVar10) goto code_r0x00169074;
                pWVar6 = ani_ctrl->wmim;
              } while( true );
            }
          }
          uVar10 = ani_ctrl->mim_num;
          goto LAB_00169088;
        }
      }
    }
  }
  return;
code_r0x00169074:
  uVar10 = ani_ctrl->mim_num;
LAB_00169088:
  uVar8 = uVar8 + 1;
  if (uVar10 <= uVar8) {
    return;
  }
  pMVar5 = ani_ctrl->mim;
  goto LAB_00168fc0;
}

void mimInitLoop(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  MIME_CTRL *pMVar1;
  uint uVar2;
  int iVar3;
  
  pMVar1 = ani_ctrl->mim;
  if ((pMVar1 != (MIME_CTRL *)0x0) && (uVar2 = 0, ani_ctrl->mim_num != 0)) {
    iVar3 = 0;
    while( true ) {
      (&pMVar1->loop)[iVar3] = '\0';
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x14;
      if (ani_ctrl->mim_num <= uVar2) break;
      pMVar1 = ani_ctrl->mim;
    }
  }
  return;
}

void mimRequest(MIME_CTRL *m_ctrl, u_char rev) {
  uint uVar1;
  
  if (rev == '\0') {
    m_ctrl->frame = 0;
  }
  else {
    uVar1 = mimGetFrameNum(m_ctrl->mdat->dat);
    m_ctrl->frame = uVar1 - 1;
  }
  m_ctrl->rev = rev;
  m_ctrl->stat = '\x02';
  return;
}

void mimRequestLastFrame(MIME_CTRL *m_ctrl, u_char rev) {
  uint uVar1;
  
  if (rev == '\0') {
    uVar1 = mimGetFrameNum(m_ctrl->mdat->dat);
    m_ctrl->frame = uVar1 - 1;
  }
  else {
    m_ctrl->frame = 0;
  }
  m_ctrl->rev = rev;
  m_ctrl->stat = '\x02';
  return;
}

void mimMepatiReq(u_char mode, u_char rev) {
  if (mim_mepati_id != 0xff) {
    if (mode == '\0') {
      mimRequest(ani_mdl[0].mim + mim_mepati_id,rev);
    }
    else {
      mimRequestLastFrame(ani_mdl[0].mim + mim_mepati_id,rev);
    }
  }
  return;
}

void mimLNigiriReq(u_char mode, u_char rev) {
  if (mim_nigiri_l_id != 0xff) {
    if (mode == '\0') {
      mimRequest(ani_mdl[0].mim + mim_nigiri_l_id,rev);
    }
    else {
      mimRequestLastFrame(ani_mdl[0].mim + mim_nigiri_l_id,rev);
    }
  }
  return;
}

void mimRNigiriReq(u_char mode, u_char rev) {
  if (mim_nigiri_r_id != 0xff) {
    if (mode == '\0') {
      mimRequest(ani_mdl[0].mim + mim_nigiri_r_id,rev);
    }
    else {
      mimRequestLastFrame(ani_mdl[0].mim + mim_nigiri_r_id,rev);
    }
  }
  return;
}

void mimStop(MIME_CTRL *m_ctrl) {
  m_ctrl->rev = '\0';
  m_ctrl->stat = '\x01';
  m_ctrl->frame = 0;
  return;
}

void mimSetReso(MIME_CTRL *m_ctrl, u_char reso) {
  m_ctrl->reso = reso;
  return;
}

void mimClearVertex(MIME_CTRL *m_ctrl) {
	u_int i;
	u_int vtx_num;
	sceVu0FVECTOR *pkt;
	sceVu0FVECTOR *vtx;
	MIME_DAT *mdat;
	float *v0;
	float *v1;
	
  MIME_DAT *pMVar1;
  uint uVar2;
  float (*pafVar3) [4];
  float (*pafVar4) [4];
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pMVar1 = m_ctrl->mdat;
  uVar5 = 0;
  uVar2 = pMVar1->vtx_num;
  pafVar4 = pMVar1->pkt;
  pafVar3 = pMVar1->vtx;
  if (uVar2 != 0) {
    do {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      fVar6 = (*pafVar3)[1];
      fVar7 = (*pafVar3)[2];
      fVar8 = (*pafVar3)[3];
      (*pafVar4)[0] = (*pafVar3)[0];
      (*pafVar4)[1] = fVar6;
      (*pafVar4)[2] = fVar7;
      (*pafVar4)[3] = fVar8;
                    /* end of inlined section */
      uVar5 = uVar5 + 1;
      pafVar4 = pafVar4[1];
      pafVar3 = pafVar3[1];
    } while (uVar5 < uVar2);
  }
  return;
}

void mimCalcVertex(MIME_CTRL *m_ctrl, WMIM_CTRL *wmim, u_char clear_vtx_flg) {
	u_int i;
	u_int j;
	u_int k;
	u_int vtx_num;
	u_int key_num;
	u_int vtx_ofs;
	sceVu0FVECTOR vec;
	sceVu0FVECTOR *key;
	sceVu0FVECTOR *pkt;
	sceVu0FVECTOR *key_top;
	u_int *ko_top;
	float weight;
	MIME_DAT *mdat;
	u_char acs_flg[6];
	u_int koblock_num;
	
  byte bVar1;
  MIME_DAT *pMVar2;
  float fVar3;
  float fVar4;
  float (*pafVar5) [4];
  uchar *puVar6;
  uint uVar7;
  float fVar8;
  float (*pafVar9) [4];
  uint uVar10;
  float (*pafVar11) [4];
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float vec [4];
  uchar acs_flg [6];
  WMIM_CTRL *local_c0;
  uint key_num;
  
  pMVar2 = m_ctrl->mdat;
  key_num = mimGetKeymdlNum(pMVar2->dat);
  if (clear_vtx_flg != '\0') {
    mimClearVertex(m_ctrl);
  }
  bVar1 = m_ctrl->flg;
  local_c0 = wmim;
  if ((bVar1 & 1) != 0) {
    puVar6 = acs_flg;
    uVar13 = 1;
    uVar10 = 0;
    do {
      uVar7 = uVar13;
      *puVar6 = '\0';
      if (((int)(uint)bVar1 >> (uVar7 & 0x1f) & 1U) != 0) {
        *puVar6 = (uchar)uVar10;
        puVar6 = puVar6 + 1;
      }
      uVar13 = uVar7 + 1;
      uVar10 = uVar7;
    } while (uVar7 < 6);
  }
  uVar13 = 0;
  if (key_num == 0) {
    return;
  }
  do {
    if ((bVar1 & 1) == 0) {
      fVar16 = mimGetWavdata(pMVar2->dat,uVar13,m_ctrl->frame);
LAB_001694b0:
      if (DAT_00355990 <= fVar16) {
        pafVar5 = mimGetKeymdlTop(pMVar2->dat,uVar13);
        fVar3 = (*pafVar5)[0];
        pafVar5 = pafVar5[1];
        pafVar9 = pMVar2->pkt;
        fVar8 = 0.0;
        if (fVar3 != 0.0) {
          while( true ) {
            pafVar11 = pafVar5[1];
            fVar4 = (*pafVar5)[0];
            fVar12 = 0.0;
            pafVar9 = pafVar9[(int)(*pafVar5)[1]];
            pafVar5 = pafVar11;
            if (fVar4 != 0.0) {
              do {
                fVar12 = (float)((int)fVar12 + 1);
                sceVu0ScaleVectorXYZ(fVar16,vec,pafVar11);
                pafVar5 = pafVar11[1];
                fVar15 = (*pafVar9)[1];
                fVar14 = (*pafVar9)[2];
                (*pafVar9)[0] = (*pafVar9)[0] + vec[0];
                (*pafVar9)[1] = fVar15 + vec[1];
                (*pafVar9)[2] = fVar14 + vec[2];
                pafVar9 = pafVar9[1];
                pafVar11 = pafVar5;
              } while ((uint)fVar12 < (uint)fVar4);
            }
            fVar8 = (float)((int)fVar8 + 1);
            if ((uint)fVar3 <= (uint)fVar8) break;
            pafVar9 = pMVar2->pkt;
          }
        }
      }
    }
    else {
      if (local_c0 == (WMIM_CTRL *)0x0) {
        return;
      }
      if (local_c0->wdat != (WMIM_DAT *)0x0) {
        bVar1 = acs_flg[uVar13];
        if ((bVar1 & 1) == 0) {
          fVar16 = -local_c0->w[bVar1 >> 1];
        }
        else {
          fVar16 = local_c0->w[bVar1 >> 1];
        }
        if (0.0 <= fVar16) goto LAB_001694b0;
      }
    }
    uVar13 = uVar13 + 1;
    if (key_num <= uVar13) {
      return;
    }
    bVar1 = m_ctrl->flg;
  } while( true );
}

void mimSetMimeCtrl(MIME_CTRL *m_ctrl, MIME_DAT *mdat, u_int furn_id, u_int parts_id) {
  uint *mim_top;
  uint uVar1;
  
  m_ctrl->parts_id = (uchar)parts_id;
  m_ctrl->reso = '\x02';
  m_ctrl->frame = 0;
  mim_top = mdat->dat;
  m_ctrl->cnt = 0;
  m_ctrl->furn_id = (short)furn_id;
  m_ctrl->mdat = mdat;
  uVar1 = mimGetFlg(mim_top);
  m_ctrl->flg = (uchar)uVar1;
  if ((uVar1 & 0xff) == 1) {
    m_ctrl->stat = '\x02';
  }
  else {
    m_ctrl->stat = '\x01';
  }
  m_ctrl->rev = '\0';
  m_ctrl->loop = '\0';
  return;
}

u_int* mimSetMimeDat(MIME_DAT *mdat, u_int *mim_p, u_int *tmp_buf, u_int *mdl_p) {
	PHEAD *ph;
	
  float (*pafVar1) [4];
  int iVar2;
  uint uVar3;
  
  uVar3 = mdl_p[4];
  mdat->dat = mim_p;
  pafVar1 = *(float (**) [4])(uVar3 + 8);
  iVar2 = *(int *)(uVar3 + 0xc);
  mdat->pkt = pafVar1;
  uVar3 = iVar2 - (int)pafVar1;
  mdat->vtx = (float (*) [4])tmp_buf;
  mdat->vtx_num = uVar3 >> 4;
  return (uint *)((int)tmp_buf + (uVar3 & 0xfffffff0));
}

void mimSetOriVertex(MIME_DAT *mdat) {
	u_int i;
	u_int vtx_num;
	sceVu0FVECTOR *vtx;
	sceVu0FVECTOR *pkt;
	float *v0;
	float *v1;
	
  uint uVar1;
  float (*pafVar2) [4];
  float (*pafVar3) [4];
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = mdat->vtx_num;
  uVar4 = 0;
  pafVar2 = mdat->pkt;
  pafVar3 = mdat->vtx;
  if (uVar1 != 0) {
    do {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      fVar5 = (*pafVar2)[1];
      fVar6 = (*pafVar2)[2];
      fVar7 = (*pafVar2)[3];
      (*pafVar3)[0] = (*pafVar2)[0];
      (*pafVar3)[1] = fVar5;
      (*pafVar3)[2] = fVar6;
      (*pafVar3)[3] = fVar7;
                    /* end of inlined section */
      uVar4 = uVar4 + 1;
      pafVar2 = pafVar2[1];
      pafVar3 = pafVar3[1];
    } while (uVar4 < uVar1);
  }
  return;
}

void mimSetVertex(ANI_CTRL *ani_ctrl) {
	MIME_DAT *mdat;
	u_int stat;
	u_int i;
	u_char flg[30];
	MIME_CTRL *m_ctrl;
	MIME_CTRL *m_ctrl;
	
  byte bVar1;
  uint uVar2;
  MIME_DAT *pMVar3;
  uchar *puVar4;
  MIME_CTRL *pMVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uchar flg [30];
  
  puVar4 = flg;
  uVar9 = ani_ctrl->mim_num;
  uVar2 = ani_ctrl->bg_num;
  uVar8 = ani_ctrl->wmim_num;
  uVar6 = 0;
  do {
    *puVar4 = '\x01';
    uVar7 = uVar6 + 1;
    puVar4 = flg + uVar6 + 1;
    uVar6 = uVar7;
  } while (uVar7 < 0x1e);
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      uVar8 = uVar6 + 1;
      mimWeightCtrl(ani_ctrl,uVar6,1.0);
      uVar6 = uVar8;
    } while (uVar8 < ani_ctrl->wmim_num);
  }
  uVar8 = 0;
  if (uVar9 != 0) {
    iVar10 = 0;
    do {
      pMVar5 = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar10);
      if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
        return;
      }
      pMVar3 = pMVar5->mdat;
      if (pMVar5->stat == '\x02') {
        if (ani_ctrl->wmim == (WMIM_CTRL *)0x0) {
          mimCalcVertex(pMVar5,(WMIM_CTRL *)0x0,flg[pMVar5->parts_id]);
          bVar1 = pMVar5->flg;
        }
        else {
          mimCalcVertex(pMVar5,ani_ctrl->wmim + pMVar5->weight_id,flg[pMVar5->parts_id]);
          bVar1 = pMVar5->flg;
        }
        if ((bVar1 & 1) == 0) {
          mimAddFrame(pMVar5,pMVar3->dat);
          bVar1 = pMVar5->parts_id;
        }
        else {
          bVar1 = pMVar5->parts_id;
        }
        flg[bVar1] = '\0';
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar8 < uVar9);
  }
  uVar9 = 0;
  if (uVar2 != 0) {
    iVar10 = 0;
    do {
      pMVar5 = (MIME_CTRL *)((int)&ani_ctrl->bgmim->mdat + iVar10);
      if (ani_ctrl->bgmim == (MIME_CTRL *)0x0) {
        return;
      }
      pMVar3 = pMVar5->mdat;
      if (flg[pMVar5->parts_id] == '\x01') {
        mimCalcVertex(pMVar5,(WMIM_CTRL *)0x0,'\x01');
        mimAddFrame(pMVar5,pMVar3->dat);
        flg[pMVar5->parts_id] = '\0';
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar9 < uVar2);
  }
  return;
}

void mimClearToScene() {
	u_int i;
	
  ANI_CTRL *ani_ctrl;
  uint work_no;
  ENE_WRK *pEVar1;
  
  work_no = 0;
  mimClearAllVertex(ani_mdl);
  pEVar1 = ene_wrk;
  do {
    if ((pEVar1->sta & 1) != 0) {
      ani_ctrl = motGetAniMdl(work_no);
      mimClearAllVertex(ani_ctrl);
    }
    work_no = work_no + 1;
    pEVar1 = (ENE_WRK *)((int)&pEVar1[1].move_box.spd.z + 2);
  } while (work_no < 4);
  return;
}

void mimClearAllVertex(ANI_CTRL *ani_ctrl) {
	u_int mim_num;
	u_int i;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ani_ctrl->mim_num;
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
        return;
      }
      uVar2 = uVar2 + 1;
      mimClearVertex((MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar3));
      iVar3 = iVar3 + 0x14;
    } while (uVar2 < uVar1);
  }
  return;
}

u_char mimAddFrame(MIME_CTRL *m_ctrl, u_int *dat) {
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  if (m_ctrl->reso == '\0') {
LAB_00169a64:
    uVar1 = '\0';
  }
  else {
    uVar2 = m_ctrl->cnt + 1;
    m_ctrl->cnt = uVar2;
    if (uVar2 < m_ctrl->reso) {
      return '\0';
    }
    if (m_ctrl->rev == '\0') {
      uVar2 = m_ctrl->cnt;
      if (m_ctrl->reso == 0) {
        trap(7);
      }
      m_ctrl->cnt = 0;
      m_ctrl->frame = m_ctrl->frame + (uint)uVar2 / (uint)m_ctrl->reso;
      uVar3 = mimGetFrameNum(dat);
      if ((uint)m_ctrl->frame < uVar3) {
        return '\0';
      }
      uVar1 = m_ctrl->loop;
      m_ctrl->frame = 0;
    }
    else {
      uVar2 = m_ctrl->cnt;
      if (m_ctrl->reso == 0) {
        trap(7);
      }
      m_ctrl->cnt = 0;
      iVar4 = m_ctrl->frame - (uint)uVar2 / (uint)m_ctrl->reso;
      m_ctrl->frame = iVar4;
      if (-1 < iVar4) goto LAB_00169a64;
      uVar3 = mimGetFrameNum(dat);
      uVar1 = m_ctrl->loop;
      m_ctrl->frame = uVar3 - 1;
    }
    if (uVar1 == '\0') {
      mimStop(m_ctrl);
    }
    uVar1 = '\x01';
  }
  return uVar1;
}

void SceneMimSetVertex(ANI_CTRL *ani_ctrl, u_int frame) {
	MIME_DAT *mdat;
	u_int i;
	u_char flg[30];
	MIME_CTRL *m_ctrl;
	
  byte bVar1;
  MIME_DAT *pMVar2;
  uchar *puVar3;
  uint uVar4;
  MIME_CTRL *m_ctrl;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uchar flg [30];
  
  puVar3 = flg;
  uVar6 = ani_ctrl->wmim_num;
  uVar4 = 0;
  do {
    *puVar3 = '\x01';
    uVar5 = uVar4 + 1;
    puVar3 = flg + uVar4 + 1;
    uVar4 = uVar5;
  } while (uVar5 < 0x1e);
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      uVar6 = uVar4 + 1;
      mimWeightCtrl(ani_ctrl,uVar4,1.0);
      uVar4 = uVar6;
    } while (uVar6 < ani_ctrl->wmim_num);
  }
  uVar6 = 0;
  if (ani_ctrl->mim_num != 0) {
    iVar7 = 0;
    do {
      m_ctrl = (MIME_CTRL *)((int)&ani_ctrl->mim->mdat + iVar7);
      if (ani_ctrl->mim == (MIME_CTRL *)0x0) {
        return;
      }
      pMVar2 = m_ctrl->mdat;
      if ((m_ctrl->flg & 1) == 0) {
        uVar4 = mimGetFrameNum(pMVar2->dat);
        if (frame < uVar4) {
          m_ctrl->frame = frame;
        }
        else {
          uVar4 = mimGetFrameNum(pMVar2->dat);
          frame = uVar4 - 1;
          m_ctrl->frame = frame;
        }
      }
      if (ani_ctrl->wmim == (WMIM_CTRL *)0x0) {
        mimCalcVertex(m_ctrl,(WMIM_CTRL *)0x0,flg[m_ctrl->parts_id]);
        bVar1 = m_ctrl->parts_id;
      }
      else {
        mimCalcVertex(m_ctrl,ani_ctrl->wmim + m_ctrl->weight_id,flg[m_ctrl->parts_id]);
        bVar1 = m_ctrl->parts_id;
      }
      uVar6 = uVar6 + 1;
      uVar4 = ani_ctrl->mim_num;
      iVar7 = iVar7 + 0x14;
      flg[bVar1] = '\0';
    } while (uVar6 < uVar4);
  }
  return;
}

void mimChodoInitWork() {
	u_int i;
	
  uint uVar1;
  short *psVar2;
  
  psVar2 = &mim_chodo[0].furn_id;
  uVar1 = 0;
  do {
    *psVar2 = -1;
    mim_chodo_se[uVar1] = 0xff;
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 10;
  } while (uVar1 < 0x14);
  return;
}

void mimChodoSetWork(u_int furn_id, u_char room_no) {
	u_int i;
	char room_id;
	u_char mim_no;
	
  MIME_CTRL *pMVar1;
  MIME_CTRL *m_ctrl;
  uint uVar2;
  long in_t0;
  
  if (((&DAT_0033773e)[furn_id * 0x12] & 0x80) != 0) {
    uVar2 = 0;
    if (room_no == room_load_block[0].room_no) {
      in_t0 = (long)(char)room_load_block[0].block_no;
    }
    else {
      do {
        if (uVar2 == 1) {
          return;
        }
        uVar2 = uVar2 + 1;
        if (in_t0 == -1) {
          return;
        }
        if (1 < uVar2) goto LAB_00169cbc;
      } while (room_no != *(uchar *)((int)room_load_block + uVar2 * 0xb4 + 0xae));
      in_t0 = (long)*(char *)((int)room_load_block + uVar2 * 0xb4 + 0xac);
    }
LAB_00169cbc:
    uVar2 = 0;
    do {
      if (0x13 < uVar2) {
        return;
      }
      m_ctrl = mim_chodo + uVar2;
      pMVar1 = mim_chodo + uVar2;
      uVar2 = uVar2 + 1;
    } while (pMVar1->furn_id != -1);
    mimSetMimeCtrl(m_ctrl,mim_cdat[(int)in_t0] + ((byte)(&DAT_0033773e)[furn_id * 0x12] & 0x7f),
                   furn_id,0);
  }
  return;
}

void mimChodoReleaseWork(u_int furn_id, u_char room_no) {
	u_int i;
	
  uint uVar1;
  
  if (((&DAT_0033773e)[furn_id * 0x12] & 0x80) != 0) {
    if ((ushort)mim_chodo[0].furn_id == furn_id) {
      mim_chodo[0].furn_id = -1;
      mim_chodo_se[0] = 0xff;
      return;
    }
    for (uVar1 = 1; uVar1 < 0x14; uVar1 = uVar1 + 1) {
      if ((ushort)mim_chodo[uVar1].furn_id == furn_id) {
        mim_chodo[uVar1].furn_id = -1;
        mim_chodo_se[uVar1] = 0xff;
        return;
      }
    }
  }
  return;
}

void mimInitChodo(u_int *mim_p, u_short *furn_id, u_char room_id, u_short room_no, u_int num) {
	u_short i;
	u_short j;
	u_int *pkt_p;
	u_short mim_num;
	u_char *chodo_num;
	u_int fsize;
	u_int flg;
	
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  uint *pkt_p;
  short mim_num;
  
  pbVar2 = *(byte **)(&DAT_003024f4 + ((int)room_no & 0xffffU) * 8);
  if (pbVar2 != (byte *)0x0) {
    uVar9 = 0;
    pkt_p = (uint *)GetPakTaleAddr(mim_p);
    uVar5 = (uint)*(ushort *)mim_p;
    puVar8 = mim_p + 4;
    bVar1 = *pbVar2;
    while (bVar1 != 0xff) {
      uVar9 = uVar9 + 1 & 0xffff;
      bVar1 = pbVar2[uVar9];
    }
    if ((uVar9 == uVar5) && (uVar9 = 0, pbVar7 = pbVar2, uVar5 != 0)) {
      do {
        uVar3 = *puVar8;
        bVar4 = false;
        if (furn_addr_tbl[*pbVar7] != (uint *)0x0) {
          uVar6 = 0;
          if (num != 0) {
            if ((ushort)*pbVar7 == *furn_id) {
              bVar4 = true;
            }
            else {
              do {
                uVar6 = uVar6 + 1 & 0xffff;
                if (num <= uVar6) goto LAB_00169f0c;
              } while ((ushort)*pbVar7 != furn_id[uVar6]);
              bVar4 = true;
            }
          }
LAB_00169f0c:
          if (bVar4) {
            if (*pbVar7 == 0xff) {
              return;
            }
            pkt_p = mimSetMimeDat(mim_cdat[(int)(char)room_id & 0xffU] + uVar9,puVar8 + 4,pkt_p,
                                  furn_addr_tbl[*pbVar7]);
            mimAddressMapping(mim_cdat[(int)(char)room_id & 0xffU][uVar9].dat);
            mimSetOriVertex(mim_cdat[(int)(char)room_id & 0xffU] + uVar9);
          }
        }
        puVar8 = (uint *)((int)(puVar8 + 4) + (uVar3 & 0xfffffffc));
        uVar9 = uVar9 + 1 & 0xffff;
        pbVar7 = pbVar2 + uVar9;
      } while (uVar9 < uVar5);
    }
  }
  return;
}

void mimDispChodo(MIME_CTRL *m_ctrl, u_int *mdl_p) {
	MIME_DAT *mdat;
	
  ushort uVar1;
  MIME_DAT *pMVar2;
  uchar uVar3;
  uint *dat;
  
  pMVar2 = m_ctrl->mdat;
  if (m_ctrl->stat != '\x02') goto LAB_0016a0b4;
  mimCalcVertex(m_ctrl,(WMIM_CTRL *)0x0,'\x01');
  if (m_ctrl->frame < 10) {
    uVar1 = m_ctrl->furn_id;
    if (uVar1 == 0x10e) {
      if (ingame_wrk.clear_count != 0) goto LAB_0016a07c;
      dat = pMVar2->dat;
    }
    else if (uVar1 < 0x10f) {
      if ((uVar1 == 100) || (uVar1 == 0x10d)) {
LAB_0016a07c:
        VibrateRequest1(0,1);
        dat = pMVar2->dat;
      }
      else {
        dat = pMVar2->dat;
      }
    }
    else {
      if (uVar1 == 0x10f) goto LAB_0016a07c;
      if (uVar1 == 0x13c) {
        VibrateRequest1(0,1);
        goto LAB_0016a094;
      }
      dat = pMVar2->dat;
    }
  }
  else {
LAB_0016a094:
    dat = pMVar2->dat;
  }
  uVar3 = mimAddFrame(m_ctrl,dat);
  if (uVar3 != '\0') {
    mimChodoStop((uint)(ushort)m_ctrl->furn_id);
  }
LAB_0016a0b4:
  SgSortUnit(mdl_p,-1);
  if (m_ctrl->stat != '\x02') {
    return;
  }
  mimClearVertex(m_ctrl);
  return;
}

u_char mimChodoChkExec(u_int furn_id) {
	u_char i;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while ((furn_id != *(ushort *)((int)&mim_chodo[0].furn_id + iVar1) ||
         ((&mim_chodo[0].stat)[iVar1] != '\x02'))) {
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 * 0x14;
    if (0x13 < uVar2) {
      return '\0';
    }
  }
  return '\x01';
}

void mimChodoRequest(FURN_ACT_WRK *fawp, u_char mode, u_char rev) {
	u_char i;
	
  ushort uVar1;
  int iVar2;
  byte room_id;
  byte req_pos;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  while (fawp->furn_id != *(short *)((int)&mim_chodo[0].furn_id + iVar2)) {
LAB_0016a2d8:
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = uVar3 * 0x14;
    if (0x13 < uVar3) {
      return;
    }
  }
  if (fawp->furn_id == 0x10e) {
    if (ingame_wrk.clear_count == 0) goto LAB_0016a2d8;
    uVar1 = fawp->furn_id;
  }
  else {
    uVar1 = fawp->furn_id;
  }
  if (uVar1 == 0x10d) {
    req_pos = 0;
    room_id = 9;
  }
  else if (uVar1 < 0x10e) {
    if ((uVar1 == 0x3b) || (uVar1 != 100)) goto LAB_0016a2a8;
    SeStartPosEventFlame(0x15,0,fawp->pos,0,0x1000,0x1000);
    room_id = 0x15;
    req_pos = 1;
  }
  else if (uVar1 == 0x10f) {
    req_pos = 1;
    room_id = 0xb;
  }
  else {
    if (0x10e < uVar1) {
      if (uVar1 == 0x13c) {
        SeStartPosEventFlame(7,0,fawp->pos,0,0x1000,0x1000);
      }
      goto LAB_0016a2a8;
    }
    if (ingame_wrk.clear_count == 0) goto LAB_0016a2a8;
    req_pos = 0;
    room_id = 3;
  }
  SeStartPosEventFlame(room_id,req_pos,fawp->pos,0,0x1000,0x1000);
LAB_0016a2a8:
  if (mode == '\0') {
    mimRequest(mim_chodo + uVar3,rev);
    return;
  }
  mimRequestLastFrame(mim_chodo + uVar3,rev);
  return;
}

void mimChodoStop(u_int furn_id) {
	u_char i;
	
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (0x13 < uVar1) {
      return;
    }
    if (furn_id == (ushort)mim_chodo[uVar1].furn_id) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  mimStop(mim_chodo + uVar1);
  return;
}

void mimChodoSetReso(u_int furn_id, u_char reso) {
	u_char i;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (furn_id == *(ushort *)((int)&mim_chodo[0].furn_id + iVar1)) {
      mimSetReso((MIME_CTRL *)((int)&mim_chodo[0].mdat + iVar1),reso);
    }
    uVar2 = uVar2 + 1 & 0xff;
    if (0x13 < uVar2) break;
    iVar1 = uVar2 * 0x14;
  }
  return;
}

u_int mimGetFrameNum(u_int *mim_top) {
  return mim_top[3];
}

u_int mimGetKeymdlNum(u_int *mim_top) {
  return mim_top[2];
}

u_int mimGetPartsNo(u_int *mim_top) {
  return mim_top[4];
}

u_int mimGetFlg(u_int *mim_top) {
  return mim_top[5];
}

u_char* mimGetWeightName(u_int *mim_top) {
  return (uchar *)(mim_top + 6);
}

float mimGetWavdata(u_int *mim_top, u_int key_no, u_int frame) {
	u_int *wav_addr;
	
  uint *puVar1;
  
  puVar1 = mim_top + key_no * 2 + 8;
  if (mim_top[1] == 0) {
    puVar1 = (uint *)((int)(mim_top + key_no * 2 + 8) + (int)mim_top);
  }
  return *(float *)(frame * 4 + *puVar1);
}

sceVu0FVECTOR* mimGetKeymdlTop(u_int *mim_top, u_int key_no) {
	u_int *vtx_addr;
	
  float (**ppafVar1) [4];
  
  ppafVar1 = (float (**) [4])(mim_top + key_no * 2 + 9);
  if (mim_top[1] == 0) {
    ppafVar1 = (float (**) [4])((int)(mim_top + key_no * 2 + 9) + (int)mim_top);
  }
  return *ppafVar1;
}

void mimAddressMapping(u_int *top_addr) {
	MIM_FILE_HEADER *head_p;
	MIM_ADDR_TABLE *tbl_p;
	u_int i;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = top_addr + 8;
  if ((*top_addr == 0x454d494d) && (top_addr[1] != 1)) {
    uVar1 = top_addr[2];
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar2 = (int)top_addr + *puVar2;
        puVar2[1] = (int)top_addr + puVar2[1];
        puVar2 = puVar2 + 2;
      } while (uVar3 < uVar1);
    }
    top_addr[1] = 1;
  }
  return;
}

void mimPlyrMepatiCtrl() {
  plyr_mepati_cnt = plyr_mepati_cnt + 1;
  if (299 < plyr_mepati_cnt) {
    mimMepatiReq('\0','\0');
    plyr_mepati_cnt = 0;
  }
  return;
}

void mimInitWeight(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  uint uVar1;
  WMIM_CTRL *pWVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ani_ctrl->wmim_num;
  if (uVar1 != 0) {
    pWVar2 = ani_ctrl->wmim;
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      pWVar2[uVar3].w[3] = 0.0;
      pWVar2[uVar3].v[0] = 0.0;
      pWVar2[uVar3].v[1] = 0.0;
      pWVar2[uVar3].v[2] = 0.0;
      pWVar2[uVar3].v[3] = 0.0;
      pWVar2[uVar3].w[0] = 0.0;
      pWVar2[uVar3].w[1] = 0.0;
      pWVar2[uVar3].w[2] = 0.0;
      uVar3 = uVar4;
    } while (uVar4 < uVar1);
  }
  return;
}

void mimWeightCtrl(ANI_CTRL *ani_ctrl, u_int weight_id, float scale) {
	u_int i;
	sceVu0FMATRIX m;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR f;
	sceVu0FVECTOR reverse;
	sceVu0FVECTOR force;
	HeaderSection *hs;
	WMIM_CTRL *w_ctrl;
	WMIM_DAT *wdat;
	
  WMIM_DAT *pWVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  WMIM_CTRL *pWVar5;
  float fVar6;
  float fVar7;
  float m [4] [4];
  float pos [4];
  float f [4];
  float reverse [4];
  float force [4];
  
  if (ani_ctrl->wmim != (WMIM_CTRL *)0x0) {
    pWVar5 = ani_ctrl->wmim + weight_id;
    pWVar1 = pWVar5->wdat;
    sceVu0CopyMatrix(m,ani_ctrl->base_p[2] + (uint)pWVar1->bone_id * 0xe0 + 0x40);
    sceVu0ApplyMatrix((Vector4 *)pos,(Matrix4x4 *)m,(Vector4 *)pWVar1->dat->pos);
    sceVu0SubVector((Vector4 *)f,(Vector4 *)pos,pWVar5->pbak);
    sceVu0CopyVector((Vector4 *)pWVar5->pbak,(Vector4 *)pos);
    sceVu0ScaleVector(pWVar1->dat->mass,(Vector4 *)f,(Vector4 *)f);
    sceVu0ScaleVector(pWVar1->dat->mass,(Vector4 *)force,(Vector4 *)pWVar1->dat->gravity);
    sceVu0AddVector((Vector4 *)f,(Vector4 *)f,(Vector4 *)force);
    sceVu0ScaleVector(scale,(Vector4 *)f,(Vector4 *)f);
    fVar6 = (float)sceVu0InnerProduct((Vector4 *)f,(Vector4 *)f);
    if (DAT_00355994 < fVar6) {
      mimInitWeight(ani_ctrl);
    }
    else {
      fVar6 = 1.0;
      m[2][3] = 0.0;
      pfVar4 = pWVar5->w;
      m[1][3] = 0.0;
      pfVar3 = pWVar5->v;
      m[0][3] = 0.0;
      m[3][2] = 0.0;
      m[3][1] = 0.0;
      m[3][0] = 0.0;
      m[3][3] = 1.0;
      sceVu0Normalize(m,m);
      sceVu0Normalize(m[1],m[1]);
      sceVu0Normalize(m[2],m[2]);
      sceVu0InversMatrix(m,m);
      f[3] = 0.0;
      sceVu0ApplyMatrix((Vector4 *)f,(Matrix4x4 *)m,(Vector4 *)f);
      sceVu0ScaleVector(-pWVar1->dat->Ks,(Vector4 *)reverse,(Vector4 *)pfVar4);
      sceVu0AddVector((Vector4 *)pfVar3,(Vector4 *)pfVar3,(Vector4 *)reverse);
      sceVu0ScaleVector(pWVar1->dat->dec,(Vector4 *)pfVar3,(Vector4 *)pfVar3);
      sceVu0AddVector((Vector4 *)pfVar4,(Vector4 *)pfVar4,(Vector4 *)pfVar3);
      sceVu0AddVector((Vector4 *)pfVar4,(Vector4 *)pfVar4,(Vector4 *)f);
      uVar2 = 0;
      do {
        fVar7 = *pfVar4;
        if (fVar6 < fVar7) {
          *pfVar4 = fVar6;
          fVar7 = fVar6;
        }
        if (fVar7 < -1.0) {
          *pfVar4 = -1.0;
        }
        uVar2 = uVar2 + 1;
        pfVar4 = pfVar4 + 1;
      } while (uVar2 < 3);
    }
  }
  return;
}
