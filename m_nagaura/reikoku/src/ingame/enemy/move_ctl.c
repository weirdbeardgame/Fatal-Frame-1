// STATUS: NOT STARTED

void (*CommJmpTbl[0])(/* parameters unknown */) = {
};
void (*BCommJmpTbl[0])(/* parameters unknown */) = {
};

void InitMoveBox(MOVE_BOX *mb) {
  memset(mb,0,0x90);
  mb->idx = 0xff;
  return;
}

void MoveCtrl(MOVE_BOX *mb) {
  byte bVar1;
  uchar *puVar2;
  uchar uVar3;
  
  uVar3 = mb->wait_time + 0xff;
  if ((mb->wait_time != '\0') && (mb->wait_time = uVar3, uVar3 == '\0')) {
    uVar3 = mb->pos_no;
    while( true ) {
      if (uVar3 == '\0') {
        puVar2 = *(uchar **)((int)&mb->comm_add + 4);
        mb->job_no = *puVar2;
        *(uchar **)((int)&mb->comm_add + 4) = puVar2 + 1;
        bVar1 = mb->job_no;
      }
      else {
        bVar1 = mb->job_no;
      }
      (**(code **)(&CommJmpTbl + (uint)bVar1 * 4))(mb);
      if (mb->wait_time == 0xff) break;
      if (mb->wait_time != '\0') {
        return;
      }
      uVar3 = mb->pos_no;
    }
    mb->pos_no = '\0';
    mb->wait_time = '\0';
  }
  return;
}

void EneBlinkCtrl(ENE_WRK *ew) {
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  
  if ((ew->sta & 0x30000000) == 0) {
    if (dbg_wrk.param_enestop == 0) {
      cVar1 = *(char *)((int)&ew->acomm_add_top + 6);
      cVar4 = cVar1 + -1;
      if ((cVar1 != '\0') && (*(char *)((int)&ew->acomm_add_top + 6) = cVar4, cVar4 == '\0')) {
        cVar1 = *(char *)((int)&ew->acomm_add_top + 5);
        while( true ) {
          if (cVar1 == '\0') {
            puVar3 = (undefined *)ew->pdf;
            *(undefined *)((int)&ew->acomm_add_top + 4) = *puVar3;
            ew->pdf = puVar3 + 1;
            bVar2 = *(byte *)((int)&ew->acomm_add_top + 4);
          }
          else {
            bVar2 = *(byte *)((int)&ew->acomm_add_top + 4);
          }
          (**(code **)(&BCommJmpTbl + (uint)bVar2 * 4))(ew);
          cVar1 = *(char *)((int)&ew->acomm_add_top + 6);
          if (cVar1 == -1) break;
          if (cVar1 != '\0') {
            return;
          }
          cVar1 = *(char *)((int)&ew->acomm_add_top + 5);
        }
        *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
        *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
      }
    }
    else {
      *(undefined *)&ew->nee = 0x50;
    }
  }
  return;
}

void EJob000(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  
  puVar3 = *(ushort **)((int)&mb->comm_add + 4);
  uVar4 = *puVar3;
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 1;
  bVar1 = *(byte *)((int)puVar3 + 3);
  bVar2 = *(byte *)(puVar3 + 1);
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 2;
  uVar5 = puVar3[2];
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 3;
  (mb->pos).y = (float)(uint)uVar4;
  (mb->pos).z = (float)((int)(((uint)bVar2 + (uint)bVar1 * 0x100) * 0x10000) >> 0x10);
  mb->pos_no = '\0';
  (mb->pos).w = (float)(uint)uVar5;
  (mb->tpos).x = 0.0;
  mb->wait_time = '\0';
  return;
}

void EJob001(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  float tv [4];
  
  pbVar7 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 2;
  bVar3 = pbVar7[3];
  bVar4 = pbVar7[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 4;
  bVar5 = pbVar7[5];
  bVar6 = pbVar7[4];
  tv[0] = (float)((int)(((uint)bVar1 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10);
  tv[1] = (float)((int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10);
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 6;
  tv[2] = (float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10);
  tv[3] = 0.0;
  sceVu0AddVector((Vector4 *)&(mb->pos).y,(Vector4 *)tv,(Vector4 *)tv);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob002(MOVE_BOX *mb) {
	u_char time;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
  bVar1 = mb->pos_no;
  if (bVar1 == 1) {
    mb->pos_no = '\0';
    mb->wait_time = '\0';
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return;
    }
    mb->wait_time = '\x01';
    return;
  }
  if (bVar1 != 0) {
    return;
  }
  puVar3 = *(uchar **)((int)&mb->comm_add + 4);
  uVar2 = *puVar3;
  *(uchar **)((int)&mb->comm_add + 4) = puVar3 + 1;
  if (uVar2 == '\0') {
    mb->wait_time = '\x01';
    mb->pos_no = '\x02';
    return;
  }
  mb->wait_time = uVar2;
  mb->pos_no = mb->pos_no + '\x01';
  return;
}

void EJob003(MOVE_BOX *mb) {
	int chk;
	
  byte bVar1;
  ushort *puVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  uchar uVar7;
  float fVar8;
  float fVar9;
  
  if (mb->pos_no == '\0') {
    puVar2 = *(ushort **)((int)&mb->comm_add + 4);
    uVar4 = *puVar2;
    *(ushort **)((int)&mb->comm_add + 4) = puVar2 + 1;
    uVar5 = puVar2[1];
    (mb->tpos).z = 0.0;
    (mb->spd).x = 0.0;
    *(ushort **)((int)&mb->comm_add + 4) = puVar2 + 2;
    (mb->tpos).y = (float)(uint)uVar4;
    (mb->tpos).w = (float)(uint)uVar5;
    GetTrgtRot(&(mb->pos).y,&(mb->tpos).y,&(mb->rot).y,2);
    bVar1 = mb->idx;
    (mb->spd).y = 0.0;
    (mb->spd).z = 0.0;
    bVar1 = *(byte *)(*(int *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0xb0) + 8);
    mb->pos_no = mb->pos_no + '\x01';
    mb->wait_time = '\x01';
    (mb->rot).x = 0.0;
    (mb->spd).w = (float)(uint)bVar1;
    return;
  }
  if (mb->pos_no != '\x01') {
    return;
  }
  bVar6 = false;
  uVar7 = ConvertRot2Dir((mb->rot).z,'\0');
  if (uVar7 == '\x01') {
    bVar3 = (mb->tpos).y < (mb->pos).y;
  }
  else if ((char)uVar7 < '\x02') {
    if (uVar7 != '\0') goto LAB_001913a4;
    bVar3 = (mb->tpos).w < (mb->pos).w;
  }
  else {
    if (uVar7 == '\x02') {
      fVar8 = (mb->pos).w;
      fVar9 = (mb->tpos).w;
    }
    else {
      if (uVar7 != '\x03') goto LAB_001913a4;
      fVar8 = (mb->pos).y;
      fVar9 = (mb->tpos).y;
    }
    bVar3 = fVar8 < fVar9;
  }
  if (bVar3) {
    bVar6 = true;
  }
LAB_001913a4:
  if (bVar6) {
    mb->pos_no = '\0';
    (mb->spd).y = 0.0;
    (mb->spd).z = 0.0;
    (mb->spd).w = 0.0;
    (mb->rot).x = 0.0;
    mb->wait_time = '\0';
  }
  else {
    mb->wait_time = '\x01';
  }
  return;
}

void EJob004(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	float dist[3];
	int *erd;
	char i;
	char j;
	char n;
	char max;
	char candidate[3];
	u_char mt;
	
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uchar uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  float *p1;
  float fVar17;
  float fVar18;
  float fVar19;
  float tv [4];
  float dist [3];
  char candidate [3];
  uchar mt;
  
  bVar1 = mb->pos_no;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      pcVar8 = *(char **)((int)&mb->comm_add + 4);
      cVar2 = *pcVar8;
      iVar13 = 2;
      uVar6 = mb->idx;
      *(char **)((int)&mb->comm_add + 4) = pcVar8 + 1;
      pcVar8 = candidate + 2;
      do {
        *pcVar8 = -1;
        iVar13 = iVar13 + -1;
        pcVar8 = pcVar8 + -1;
      } while (-1 < iVar13);
      iVar13 = 0;
      piVar7 = GetEneRootData(uVar6);
      uVar6 = GetEneRootMax(mb->idx);
      iVar16 = (int)(char)uVar6;
      dist[1] = 0.0;
      dist[2] = 0.0;
      if (0 < iVar16) {
        p1 = &(mb->pos).y;
        iVar14 = 0x1000000;
        piVar9 = piVar7;
        do {
          tv[1] = (float)piVar9[1];
          tv[0] = (float)*piVar9;
          tv[3] = 0.0;
          tv[2] = (float)piVar9[2];
          fVar18 = dist[1];
          fVar19 = dist[2];
          cVar12 = candidate[0];
          cVar11 = candidate[1];
          if (tv[1] == (mb->pos).z) {
            fVar17 = GetDistV2(tv,p1);
            uVar6 = HitChkSegment2AllChk(tv,p1,fVar17 / 50.0);
            if (uVar6 == '\0') {
              cVar11 = (char)iVar13;
              if ((dist[1] == 0.0) || (fVar17 < dist[1])) {
                fVar18 = fVar17;
                cVar12 = cVar11;
                cVar11 = candidate[1];
                if (candidate[0] != -1) {
                  dist[2] = dist[1];
                  candidate[1] = candidate[0];
                  fVar19 = dist[2];
                  cVar11 = candidate[1];
                }
              }
              else {
                fVar19 = fVar17;
                cVar12 = candidate[0];
                if ((dist[2] != 0.0) && (dist[2] <= fVar17)) goto LAB_001915d0;
              }
              goto LAB_001915cc;
            }
          }
          else {
LAB_001915cc:
            candidate[1] = cVar11;
            candidate[0] = cVar12;
            dist[2] = fVar19;
            dist[1] = fVar18;
          }
LAB_001915d0:
          iVar13 = iVar14 >> 0x18;
          iVar14 = iVar14 + 0x1000000;
          piVar9 = piVar9 + 3;
        } while (iVar13 < iVar16);
      }
      if ((dist[1] == 0.0) && (iVar13 = 0, dist[2] == 0.0)) {
        dist[1] = 0.0;
        dist[2] = 0.0;
        if (0 < iVar16) {
          do {
            tv[3] = 0.0;
            piVar9 = piVar7 + iVar13 * 3;
            tv[2] = (float)piVar9[2];
            tv[0] = (float)*piVar9;
            tv[1] = (float)piVar9[1];
            fVar18 = GetDistV2(tv,&(mb->pos).y);
            cVar12 = (char)iVar13;
            if ((dist[1] == 0.0) || (fVar18 < dist[1])) {
              fVar19 = fVar18;
              fVar18 = dist[2];
              cVar11 = cVar12;
              cVar5 = candidate[1];
              if (candidate[0] != -1) {
                dist[2] = dist[1];
                candidate[1] = candidate[0];
                fVar18 = dist[2];
                cVar5 = candidate[1];
              }
LAB_001916dc:
              candidate[1] = cVar5;
              candidate[0] = cVar11;
              dist[2] = fVar18;
              dist[1] = fVar19;
            }
            else {
              fVar19 = dist[1];
              cVar11 = candidate[0];
              cVar5 = cVar12;
              if ((dist[2] == 0.0) || (fVar18 < dist[2])) goto LAB_001916dc;
            }
            iVar13 = (int)(char)(cVar12 + '\x01');
          } while (iVar13 < iVar16);
        }
        if ((dist[1] == 0.0) && (dist[2] == 0.0)) {
          mb->pos_no = 'd';
          mb->wait_time = '\x01';
          return;
        }
      }
      lVar10 = (long)candidate[0];
      iVar13 = 0;
      lVar15 = -1;
      iVar16 = -1;
      dist[1] = 0.0;
      if (lVar10 == -1) {
        (mb->spd).x = 0.0;
      }
      else {
        do {
          tv[3] = 0.0;
          piVar9 = piVar7 + (int)lVar10 * 3;
          tv[2] = (float)piVar9[2];
          tv[0] = (float)*piVar9;
          tv[1] = (float)piVar9[1];
          fVar18 = GetDistV2(&plyr_wrk.move_box.spd.z,tv);
          if ((dist[1] == 0.0) || (fVar18 < dist[1])) {
            lVar15 = lVar10;
            dist[1] = fVar18;
          }
          iVar16 = (int)lVar15;
          iVar13 = (iVar13 + 1) * 0x1000000 >> 0x18;
          lVar10 = (long)candidate[iVar13];
        } while (lVar10 != -1);
        (mb->spd).x = 0.0;
      }
      piVar7 = piVar7 + iVar16 * 3;
      iVar13 = *piVar7;
      iVar16 = piVar7[1];
      (mb->tpos).w = (float)piVar7[2];
      (mb->tpos).y = (float)iVar13;
      (mb->tpos).z = (float)iVar16;
      GetTrgtRot(&(mb->pos).y,&(mb->tpos).y,&(mb->trot).y,3);
      (mb->pos_mid).x = DAT_00355c38;
      bVar1 = mb->idx;
      if (cVar2 == '\0') {
        (mb->spd).y = 0.0;
        (mb->spd).z = 0.0;
        bVar1 = *(byte *)(*(int *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0xb0) + 8);
      }
      else {
        (mb->spd).y = 0.0;
        (mb->spd).z = 0.0;
        bVar1 = *(byte *)(*(int *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0xb0) + 9);
      }
      (mb->rot).x = 0.0;
      (mb->spd).w = (float)(uint)bVar1;
      mb->wait_time = '\x01';
      mb->pos_no = mb->pos_no + '\x01';
      return;
    }
    if (bVar1 != 100) {
      return;
    }
    (mb->pos).y = plyr_wrk.move_box.spd.z;
    (mb->pos).z = plyr_wrk.move_box.spd.w;
    (mb->pos).w = plyr_wrk.move_box.rot.x;
    fVar18 = plyr_wrk.move_box.rot.y;
    mb->pos_no = '\0';
    (mb->tpos).x = fVar18;
    goto LAB_001919ec;
  }
  tv[3] = (mb->pos_mid).x;
  if (tv[3] == 0.0) {
    tv[0] = (mb->rot).y;
    tv[1] = (mb->rot).z;
    tv[2] = (mb->rot).w;
    tv[3] = (mb->rspd).x;
  }
  else {
    tv[0] = (mb->trot).y;
    tv[1] = (mb->trot).z;
    tv[2] = (mb->trot).w;
  }
  bVar4 = false;
  uVar6 = ConvertRot2Dir(tv[1],'\0');
  if (uVar6 == '\x01') {
    bVar3 = (mb->tpos).y < (mb->pos).y;
LAB_001919a0:
    if (bVar3) {
      bVar4 = true;
    }
  }
  else {
    if ('\x01' < (char)uVar6) {
      if (uVar6 == '\x02') {
        fVar18 = (mb->pos).w;
        fVar19 = (mb->tpos).w;
      }
      else {
        if (uVar6 != '\x03') goto LAB_001919a8;
        fVar18 = (mb->pos).y;
        fVar19 = (mb->tpos).y;
      }
      bVar3 = fVar18 < fVar19;
      goto LAB_001919a0;
    }
    if (uVar6 == '\0') {
      bVar3 = (mb->tpos).w < (mb->pos).w;
      goto LAB_001919a0;
    }
  }
LAB_001919a8:
  if (!bVar4) {
    mb->wait_time = '\x01';
    return;
  }
  mb->pos_no = '\0';
LAB_001919ec:
  mb->wait_time = '\0';
  return;
}

int* GetEneRootData(u_char no) {
	int *rd;
	
  int (*in_v1_lo) [3];
  
  if (no == '\x01') {
    in_v1_lo = erootd1;
  }
  else if (no < 2) {
    if (no == '\0') {
      in_v1_lo = erootd0;
    }
  }
  else if (no == '\x02') {
    in_v1_lo = erootd2;
  }
  return (int *)in_v1_lo;
}

u_char GetEneRootMax(u_char no) {
  return er_max_tbl[(int)(char)no & 0xff];
}

void EJob005(MOVE_BOX *mb) {
	float spd;
	
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\x01') {
    (mb->spd).w = (float)(uint)*(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 9);
  }
  else if (cVar1 == '\x02') {
    (mb->spd).w = (float)(uint)*(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 8)
                  * 0.5;
  }
  else {
    (mb->spd).w = (float)(uint)*(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 8);
  }
  mb->pos_no = '\0';
  (mb->spd).y = 0.0;
  (mb->spd).z = 0.0;
  (mb->rot).x = 0.0;
  mb->wait_time = '\0';
  return;
}

void EJob006(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  lVar4 = *(long *)((int)&mb->comm_add_top + 4);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  *(ulong *)((int)&mb->comm_add + 4) = lVar4 + ((long)(int)((uint)bVar1 << 8) | (ulong)bVar2);
  return;
}

void EJob007(MOVE_BOX *mb) {
  uint *puVar1;
  
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xfeffffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xffbfffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xff7fffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xfdffffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xfff7ffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xfffeffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 & 0xfffdffff;
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 | 0x1004;
  *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x12) = 0xff;
  mb->wait_time = 0xff;
  mb->pos_no = '\0';
  return;
}

void EJob008(MOVE_BOX *mb) {
	short int rot[3];
	u_char i;
	
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ushort rot [3];
  
  fVar5 = DAT_00355c44;
  fVar4 = DAT_00355c40;
  fVar3 = DAT_00355c3c;
  uVar8 = 0;
  pbVar7 = *(byte **)((int)&mb->comm_add + 4);
  while( true ) {
    bVar1 = pbVar7[1];
    bVar2 = *pbVar7;
    *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 2;
    uVar6 = (uint)bVar2 + (uint)bVar1 * 0x100 + 0x800 & 0xfff;
    rot[uVar8] = (ushort)uVar6;
    if (uVar6 == 0x800) {
      (&(mb->rspd).y)[uVar8] = 0.0;
    }
    else {
      (&(mb->rspd).y)[uVar8] = ((float)uVar6 * fVar3) / fVar4 - fVar5;
    }
    uVar8 = uVar8 + 1 & 0xff;
    if (2 < uVar8) break;
    pbVar7 = *(byte **)((int)&mb->comm_add + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob009(MOVE_BOX *mb) {
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char *pcVar8;
  
  pcVar8 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar8;
  *(char **)((int)&mb->comm_add + 4) = pcVar8 + 1;
  bVar2 = pcVar8[1];
  bVar3 = pcVar8[2];
  *(char **)((int)&mb->comm_add + 4) = pcVar8 + 3;
  bVar4 = pcVar8[4];
  bVar5 = pcVar8[3];
  *(char **)((int)&mb->comm_add + 4) = pcVar8 + 5;
  bVar6 = pcVar8[6];
  bVar7 = pcVar8[5];
  *(char **)((int)&mb->comm_add + 4) = pcVar8 + 7;
  (mb->spd).y = (float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10);
  (mb->spd).z = (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10);
  (mb->rot).x = 0.0;
  (mb->spd).w = (float)((int)(((uint)bVar7 + (uint)bVar6 * 0x100) * 0x10000) >> 0x10);
  if (cVar1 != '\0') {
    RotFvector(&(mb->rot).y,&(mb->spd).y);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob00A(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR tr;
	u_char x;
	u_char z;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  float *p0;
  float tv [4];
  float tr [4];
  
  p0 = &(mb->pos).y;
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 1;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  GetTrgtRot(p0,&plyr_wrk.move_box.spd.z,tr,2);
  if (bVar2 < 2) {
    uVar4 = (uint)bVar2;
  }
  else {
    uVar4 = GetRndSP(1,(uint)bVar2);
  }
  tv[2] = (float)uVar4 * 20.0;
  if (bVar1 == 0) {
    tv[0] = 0.0;
  }
  else {
    iVar5 = GetRndSP(0,(uint)bVar1 << 1);
    tv[0] = (float)iVar5 * 100.0 - (float)(uint)bVar1 * 100.0;
  }
  tv[1] = 0.0;
  RotFvector(tr,tv);
  sceVu0AddVector((Vector4 *)p0,(Vector4 *)p0,(Vector4 *)tv);
  EnePosInfoSet((ENE_WRK *)((int)ene_wrk + (uint)mb->idx * 0x430));
  EneBlinkPosSet((ENE_WRK *)((int)ene_wrk + (uint)mb->idx * 0x430));
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob00B(MOVE_BOX *mb) {
	u_short time;
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  bVar3 = pbVar4[3];
  uVar6 = (ulong)bVar1 | (long)(int)((uint)bVar2 << 8);
  bVar1 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 4;
  if (uVar6 != 0) {
    uVar5 = 0;
    if (time_wrk.stop < uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      mb->pos_no = '\0';
      goto LAB_0019202c;
    }
  }
  if ((plyr_wrk.mvsta & 0xf) == 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
LAB_0019202c:
  mb->wait_time = '\0';
  return;
}

void EJob00C(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	u_char id;
	
  byte bVar1;
  byte *pbVar2;
  float *p0;
  uint uVar3;
  float fVar4;
  float tv [4];
  
  bVar1 = mb->idx;
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  uVar3 = (uint)*pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,
                  (Vector4 *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3a0));
  if (uVar3 == 0) {
    GetTrgtRot(&(mb->pos).y,tv,&(mb->rot).y,3);
    (mb->pos_mid).x = 0.0;
  }
  else if (uVar3 == 0xff) {
    fVar4 = (mb->rot).z;
    (mb->pos_mid).x = 0.0;
    (mb->trot).z = fVar4;
  }
  else {
    p0 = &(mb->pos).y;
    if (uVar3 == 0xfe) {
      tv[1] = tv[1] + DAT_00355c48;
      GetTrgtRot(p0,tv,&(mb->trot).y,3);
      fVar4 = DAT_00355c4c;
      (mb->rot).y = (mb->trot).y;
    }
    else {
      GetTrgtRot(p0,tv,&(mb->trot).y,3);
      fVar4 = DAT_00355c50 / (float)uVar3;
      (mb->rot).y = (mb->trot).y;
    }
    (mb->pos_mid).x = fVar4;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob00D(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR tr;
	u_char type;
	u_char dmin;
	u_char wmin;
	static u_char tr_rate_save[4];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float tv [4];
  float tr [4];
  
  if (mb->pos_no != '\0') {
    if (mb->pos_no != '\x01') {
      return;
    }
    *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x358) = (&tr_rate_save_171)[mb->idx];
    mb->pos_no = '\0';
    goto LAB_001923d4;
  }
  pbVar5 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar5;
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 1;
  bVar2 = pbVar5[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 2;
  bVar3 = pbVar5[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 3;
  bVar4 = pbVar5[3];
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 5;
  uVar6 = (uint)bVar3;
  if (bVar3 == bVar2) {
    tv[0] = 0.0;
    tv[1] = 0.0;
  }
  else {
    tv[0] = 0.0;
    tv[1] = 0.0;
    uVar6 = GetRndSP((uint)bVar2,uVar6 - bVar2);
  }
  tv[3] = 0.0;
  tv[2] = (float)uVar6 * 50.0;
  if (bVar1 == 1) {
    tr[0] = 0.0;
    iVar7 = GetRndSP(0,0x24);
    tr[1] = (float)iVar7 * DAT_00355c58 - DAT_00355c5c;
LAB_001922b4:
    tr[3] = 0.0;
    tr[2] = 0.0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      tr[0] = 0.0;
      tr[1] = plyr_wrk.move_box.trot.w + DAT_00355c54;
      goto LAB_001922b4;
    }
  }
  else if (bVar1 == 2) {
    tr[0] = 0.0;
    tr[1] = plyr_wrk.move_box.trot.w;
    goto LAB_001922b4;
  }
  RotLimitChk(tr + 1);
  RotFvector(tr,tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  bVar1 = mb->idx;
  fVar8 = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4);
  (mb->pos).y = tv[0];
  tv[1] = (mb->pos).z + fVar8;
  (mb->pos).w = tv[2];
  (mb->tpos).x = tv[3];
  (mb->pos).z = tv[1];
  EnePosInfoSet((ENE_WRK *)((int)ene_wrk + (uint)bVar1 * 0x430));
  EneBlinkPosSet((ENE_WRK *)((int)ene_wrk + (uint)mb->idx * 0x430));
  SeStartPos(0x1f,&(mb->pos).y,0,0x1000,0x1000,0xff);
  if (bVar4 != 0) {
    (&tr_rate_save_171)[mb->idx] = *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x358);
    *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x358) = 0;
    mb->wait_time = bVar4;
    mb->pos_no = mb->pos_no + '\x01';
    return;
  }
  mb->pos_no = '\0';
LAB_001923d4:
  mb->wait_time = '\0';
  return;
}

void EJob00E(MOVE_BOX *mb) {
	float hit_rng;
	float rot;
	u_short adj;
	u_char id;
	
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  float *p0;
  float fVar8;
  float fVar9;
  float rot;
  
  pcVar5 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar5;
  *(char **)((int)&mb->comm_add + 4) = pcVar5 + 1;
  bVar2 = pcVar5[2];
  bVar3 = pcVar5[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar5 + 3;
  fVar9 = DAT_00355c64;
  if (cVar1 == '\x01') {
    fVar9 = (float)(uint)*(ushort *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 0xe);
  }
  else {
    if (cVar1 == '\x02') {
      uVar4 = *(ushort *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 0xe);
      fVar9 = DAT_00355c60;
    }
    else {
      iVar7 = (uint)mb->idx * 0x430;
      uVar6 = *(uint *)((int)ene_wrk + iVar7 + 4);
      if (((uVar6 & 1) == 0) || (plyr_wrk.mode != 1)) {
        fVar9 = (float)(uint)*(ushort *)
                              (*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 0xe) + 200.0;
        goto LAB_00192538;
      }
      uVar4 = *(ushort *)(*(int *)((int)ene_wrk + iVar7 + 0xb0) + 0xe);
      *(uint *)((int)ene_wrk + iVar7 + 4) = uVar6 | 2;
    }
    fVar9 = (float)(uint)uVar4 * fVar9;
  }
LAB_00192538:
  p0 = &(mb->pos).y;
  fVar8 = GetTrgtRotY(p0,&plyr_wrk.move_box.spd.z);
  rot = fVar8 - (mb->rot).z;
  RotLimitChk(&rot);
  fVar8 = GetDistV(&plyr_wrk.move_box.spd.z,p0);
  if ((fVar8 <= fVar9) &&
     (ABS((plyr_wrk.move_box.spd.w - (mb->pos).z) +
          *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4)) <= 300.0)) {
    if (DAT_00355c68 < ABS(rot)) {
      mb->pos_no = '\0';
      goto LAB_001925e4;
    }
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar3 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
LAB_001925e4:
  mb->wait_time = '\0';
  return;
}

void EJob00F(MOVE_BOX *mb) {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	u_short adj;
	u_char id;
	u_char per;
	u_char flag;
	u_char ani;
	u_char pani_tbl[3];
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  float *pfVar11;
  float *rot;
  uchar uVar12;
  uint uVar13;
  float tv [4];
  float rv [4];
  uchar pani_tbl [3];
  short adj;
  
  bVar6 = false;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  pani_tbl[0] = DAT_00356fb0;
  pani_tbl[1] = DAT_00356fb1;
  pani_tbl[2] = DAT_00356fb2;
  uVar10 = (uint)*pbVar4;
  iVar5 = (uint)mb->idx * 0x430;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar1 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  uVar2 = *(ushort *)(pbVar4 + 2);
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 4;
  if ((CONCAT44(plyr_wrk.mvsta,plyr_wrk.sta) & 0x20000000000008) == 0) {
    if (ABS((plyr_wrk.move_box.spd.w - (mb->pos).z) + *(float *)((int)ene_wrk + iVar5 + 0x3a4)) <=
        200.0) {
      if (plyr_wrk.mode == 2) goto LAB_00192718;
    }
    else {
      bVar6 = true;
    }
  }
  else {
LAB_00192718:
    bVar6 = true;
  }
  if (bVar6) {
LAB_00192740:
    uVar10 = 2;
    uVar7 = 0;
  }
  else {
    iVar8 = GetRndSP(1,99);
    uVar7 = uVar10 & 0x80;
    if (iVar8 <= (int)(uint)bVar1) goto LAB_00192740;
  }
  uVar13 = 0xff;
  if (uVar7 != 0) {
    uVar13 = uVar10 & 0x7f;
    uVar10 = 1;
  }
  if (uVar10 == 1) {
    iVar8 = GetRndSP(0,99);
    if (iVar8 < 0x47) {
      SeStartPos(0x22,&plyr_wrk.move_box.spd.z,0,0x1000,0x1000,0xff);
    }
    else {
      SeStartPos(0x23,&plyr_wrk.move_box.spd.z,0,0x1000,0x1000,0xff);
    }
    pfVar11 = &(mb->pos).y;
    SeStartPos(0x1e,pfVar11,0,0x1000,0x1000,0xff);
    if (plyr_wrk.mode == 1) {
      FinderEndSet();
      plyr_wrk.dmg_cam_flag = '\0';
    }
    if (plyr_wrk.mode != 2) {
      plyr_wrk.mode = 7;
    }
    plyr_wrk.cond_tm = 0;
    iVar8 = *(int *)((int)ene_wrk + iVar5 + 0xb0);
    plyr_wrk.dmg = *(short *)(iVar8 + 0x16);
    plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
    if ((ingame_wrk.difficult != 0) && (ingame_wrk.game == 0)) {
      uVar2 = *(ushort *)(iVar8 + 0x16);
      plyr_wrk.dmg = plyr_wrk.dmg + uVar2 + (uVar2 >> 1);
    }
    plyr_wrk.dmg_type = '\x02';
    plyr_wrk.atk_no = mb->idx;
    plyr_wrk.move_box.trot.w = GetTrgtRotY(&plyr_wrk.move_box.spd.z,pfVar11);
    if (uVar13 == 0xff) {
      uVar12 = pani_tbl[*(byte *)(*(int *)((int)ene_wrk + iVar5 + 0xb0) + 7)];
    }
    else {
      uVar12 = pani_tbl[uVar13];
    }
    SetPlyrAnime(uVar12,'\0');
    iVar8 = *(int *)((int)ene_wrk + iVar5 + 0xb0);
    plyr_wrk.dwalk_tm = 0x3c;
    tv[0] = 0.0;
    tv[3] = 0.0;
    rot = &(mb->rot).y;
    *(ushort *)((int)ene_wrk + iVar5 + 0xe) = (ushort)*(byte *)(iVar8 + 0x19) * 0x1e;
    tv[2] = (float)(uint)*(ushort *)(iVar8 + 0xe);
    puVar9 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    *puVar9 = *puVar9 | 0x8000;
    tv[1] = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4);
    RotFvector(&plyr_wrk.move_box.trot.z,tv);
    sceVu0AddVector((Vector4 *)pfVar11,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
    GetTrgtRot(pfVar11,&plyr_wrk.move_box.spd.z,rot,2);
    tv[1] = 0.0;
    tv[0] = (float)(int)*(short *)(*(int *)((int)ene_wrk + iVar5 + 0xb0) + 0x12);
    tv[2] = 0.0;
    tv[3] = 0.0;
    RotFvector(rot,tv);
    sceVu0AddVector((Vector4 *)pfVar11,(Vector4 *)pfVar11,(Vector4 *)tv);
    (mb->pos).z = plyr_wrk.move_box.spd.w + *(float *)((int)ene_wrk + iVar5 + 0x3a4);
  }
  else {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        mb->pos_no = '\0';
        goto LAB_00192dbc;
      }
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
      ReqFinderInOverRap(0);
      if (plyr_wrk.mode == 1) {
        FinderEndSet();
      }
      plyr_wrk.mode = 7;
      plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
      plyr_wrk.dmg_cam_flag = '\0';
      plyr_wrk.atk_no = mb->idx;
      GetTrgtRot(&plyr_wrk.move_box.spd.z,&(mb->pos).y,rv,2);
      rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
      RotLimitChk(rv + 1);
      if ((rv[1] < DAT_00355c6c) || (uVar12 = 'W', DAT_00355c70 < rv[1])) {
        if (rv[1] < DAT_00355c74) {
          mb->pos_no = '\0';
          goto LAB_00192dbc;
        }
        uVar12 = 'V';
        if (DAT_00355c78 < rv[1]) goto LAB_00192db8;
      }
      SetPlyrAnime(uVar12,'\0');
      mb->pos_no = '\0';
      goto LAB_00192dbc;
    }
    if (uVar10 == 2) {
      iVar8 = GetRndSP(0,99);
      if (iVar8 < 0x47) {
        SeStartPos(0x21,&plyr_wrk.move_box.spd.z,0,0x1000,0x1000,0xff);
      }
      else {
        SeStartPos(0x22,&plyr_wrk.move_box.spd.z,0,0x1000,0x1000,0xff);
      }
      pfVar11 = &(mb->pos).y;
      SeStartPos(0x20,pfVar11,0,0x1000,0x1000,0xff);
      ReqFinderInOverRap(0);
      if (plyr_wrk.mode == 1) {
        FinderEndSet();
      }
      plyr_wrk.cond_tm = 0;
      iVar5 = *(int *)((int)ene_wrk + iVar5 + 0xb0);
      plyr_wrk.dmg = *(short *)(iVar5 + 0x14);
      plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
      if ((ingame_wrk.difficult != 0) && (ingame_wrk.game == 0)) {
        uVar3 = *(ushort *)(iVar5 + 0x14);
        plyr_wrk.dmg = plyr_wrk.dmg + uVar3 + (uVar3 >> 1);
      }
      plyr_wrk.dmg_type = '\0';
      plyr_wrk.dmg_cam_flag = '\0';
      plyr_wrk.atk_no = mb->idx;
      puVar9 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
      *puVar9 = *puVar9 | 0x8000;
      GetTrgtRot(pfVar11,&plyr_wrk.move_box.spd.z,&(mb->rot).y,2);
      if (!bVar6) {
        plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
        plyr_wrk.dmg_type = '\x01';
        GetTrgtRot(&plyr_wrk.move_box.spd.z,pfVar11,rv,2);
        rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
        RotLimitChk(rv + 1);
        ConvertRot2Dir(rv[1],'\x02');
        SetPlyrAnime('>','\0');
        if (plyr_wrk.mode != 2) {
          plyr_wrk.mode = 7;
        }
      }
      *(long *)((int)&mb->comm_add + 4) =
           (long)(int)(uint)uVar2 + *(long *)((int)&mb->comm_add_top + 4);
    }
    else {
      if (uVar10 != 3) {
        mb->pos_no = '\0';
        goto LAB_00192dbc;
      }
      SeStartPos(0x23,&plyr_wrk.move_box.spd.z,0,0x1000,0x1000,0xff);
      if (plyr_wrk.mode == 1) {
        FinderEndSet();
        plyr_wrk.dmg_cam_flag = '\0';
      }
      plyr_wrk.cond_tm = 0;
      plyr_wrk.mode = 7;
      iVar8 = *(int *)((int)ene_wrk + iVar5 + 0xb0);
      plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
      plyr_wrk.dmg = *(short *)(iVar8 + 0x16);
      if ((ingame_wrk.difficult != 0) && (ingame_wrk.game == 0)) {
        plyr_wrk.dmg = plyr_wrk.dmg + *(ushort *)(iVar8 + 0x16) + (*(ushort *)(iVar8 + 0x16) >> 1);
      }
      plyr_wrk.dmg_type = '\x02';
      plyr_wrk.atk_no = mb->idx;
      if (uVar13 == 0xff) {
        uVar12 = pani_tbl[*(byte *)(iVar8 + 7)];
      }
      else {
        uVar12 = pani_tbl[uVar13];
      }
      SetPlyrAnime(uVar12,'\0');
      plyr_wrk.dwalk_tm = 0x3c;
      *(ushort *)((int)ene_wrk + iVar5 + 0xe) =
           (ushort)*(byte *)(*(int *)((int)ene_wrk + iVar5 + 0xb0) + 0x19) * 0x1e;
      puVar9 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
      *puVar9 = *puVar9 | 0x8000;
    }
  }
LAB_00192db8:
  mb->pos_no = '\0';
LAB_00192dbc:
  mb->wait_time = '\0';
  return;
}

void EJob010(MOVE_BOX *mb) {
	u_char no;
	
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  
  bVar1 = mb->idx;
  pcVar3 = *(char **)((int)&mb->comm_add + 4);
  cVar2 = *pcVar3;
  *(char **)((int)&mb->comm_add + 4) = pcVar3 + 1;
  puVar5 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  uVar4 = *puVar5 & 0xffffffe7;
  *puVar5 = uVar4;
  if (cVar2 == '\x01') {
    uVar4 = uVar4 | 8;
  }
  else {
    uVar4 = uVar4 | 0x18;
    if (cVar2 != '\x02') {
      mb->pos_no = '\0';
      goto LAB_00192e58;
    }
  }
  *puVar5 = uVar4;
  mb->pos_no = '\0';
LAB_00192e58:
  mb->wait_time = '\0';
  return;
}

void EJob011(MOVE_BOX *mb) {
  uint *puVar1;
  
  puVar1 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar1 = *puVar1 | 0x2000;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob012(MOVE_BOX *mb) {
	u_char type;
	u_char no;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uchar uVar4;
  int iVar5;
  uint se_no;
  float *pos;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 1;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (bVar1 == 1) {
    se_no = (uint)bVar2;
    pos = &(mb->pos).y;
LAB_00192fac:
    iVar5 = SeStartPos(se_no,pos,0,0x1000,0x1000,0xff);
    mb->se = iVar5;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      mb->pos_no = '\0';
      goto LAB_00192fbc;
    }
    iVar5 = SeStartFix((uint)bVar2,0,0x1000,0x1000,0);
    mb->se = iVar5;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        mb->pos_no = '\0';
        goto LAB_00192fbc;
      }
      iVar5 = *(int *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x41c) + 0x1c);
      if (iVar5 == -1) {
        mb->pos_no = '\0';
        goto LAB_00192fbc;
      }
      uVar4 = SFootGetSeNoFromFileNo(iVar5);
      se_no = (uint)(char)uVar4;
      pos = (float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xd0);
      goto LAB_00192fac;
    }
    if (mb->se == -1) {
      mb->pos_no = '\0';
      goto LAB_00192fbc;
    }
    SeStop(mb->se);
    mb->se = -1;
  }
  mb->pos_no = '\0';
LAB_00192fbc:
  mb->wait_time = '\0';
  return;
}

void EJob013(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  if (bVar1 == plyr_wrk.cond) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob014(MOVE_BOX *mb) {
	u_short time;
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  bVar3 = pbVar4[3];
  uVar5 = (ulong)bVar1 | (long)(int)((uint)bVar2 << 8);
  bVar1 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 4;
  if (uVar5 != 0) {
    if (time_wrk.nwalk < uVar5) {
      if (time_wrk.swalk < uVar5) {
        if (uVar5 <= time_wrk.fwalk) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      mb->pos_no = '\0';
      goto LAB_001930cc;
    }
  }
  if ((plyr_wrk.mvsta & 6) == 0) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
LAB_001930cc:
  mb->wait_time = '\0';
  return;
}

void EJob015(MOVE_BOX *mb) {
	sceVu0FVECTOR rot;
	static u_char turn[3];
	static u_char time[3];
	
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  uchar uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  float fVar8;
  float rot [4];
  
  memset(rot,0,0x10);
  switch(mb->pos_no) {
  case '\0':
    puVar3 = *(undefined **)((int)&mb->comm_add + 4);
    (&turn_196)[mb->idx] = *puVar3;
    *(undefined **)((int)&mb->comm_add + 4) = puVar3 + 1;
    (&time_197)[mb->idx] = puVar3[1];
    pfVar7 = &(mb->pos).y;
    *(undefined **)((int)&mb->comm_add + 4) = puVar3 + 2;
    puVar6 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    *puVar6 = *puVar6 | 0x800000;
    iVar5 = GetRndSP((uint)(byte)(&time_197)[mb->idx],0x1e);
    mb->loop = (short)iVar5;
    GetTrgtRot(pfVar7,&plyr_wrk.move_box.spd.z,rot,1);
    if ((&turn_196)[mb->idx] == '\x02') {
      fVar8 = GetTrgtRotY(pfVar7,&plyr_wrk.move_box.spd.z);
      rot[1] = fVar8 + DAT_00355c7c;
      RotLimitChk((float *)((uint)rot | 4));
    }
    else {
      iVar5 = GetRndSP(0,0xe);
      rot[1] = ((float)iVar5 - 7.0) * DAT_00355c80;
      RotLimitChk((float *)((uint)rot | 4));
      if (0.0 < rot[1]) {
        rot[1] = rot[1] + DAT_00355c84;
      }
      else {
        rot[1] = rot[1] - DAT_00355c88;
      }
    }
    (mb->spd).y = 0.0;
    (mb->spd).z = 0.0;
    (mb->rot).x = 0.0;
    (mb->spd).w = 20.0;
    RotFvector(rot,&(mb->spd).y);
    uVar4 = mb->pos_no;
    break;
  case '\x01':
    sVar2 = mb->loop;
    if (sVar2 != 0) {
LAB_001933cc:
      mb->loop = sVar2 - 1U;
      if ((ushort)(sVar2 - 1U) < 0x1f) {
        pfVar7 = &(mb->spd).y;
        sceVu0ScaleVector(DAT_00355c98,(Vector4 *)pfVar7,(Vector4 *)pfVar7);
      }
      mb->wait_time = '\x01';
      return;
    }
    if ((&turn_196)[mb->idx] == '\x02') goto LAB_001932f0;
    uVar4 = mb->pos_no;
    break;
  case '\x02':
    if (((&turn_196)[mb->idx] != '\0') && (iVar5 = GetRndSP(0,100), iVar5 < 0x29)) {
LAB_001932f0:
      mb->pos_no = '\x04';
      mb->wait_time = '\x01';
      return;
    }
    GetTrgtRot(&(mb->pos).y,&plyr_wrk.move_box.spd.z,rot,1);
    iVar5 = GetRndSP((uint)(byte)(&time_197)[mb->idx],0x1e);
    mb->loop = (short)iVar5;
    iVar5 = GetRndSP(0,0xe);
    rot[1] = (float)iVar5 * DAT_00355c8c;
    RotLimitChk((float *)((uint)rot | 4));
    if (0.0 < rot[1]) {
      rot[1] = rot[1] + DAT_00355c90;
    }
    else {
      rot[1] = rot[1] - DAT_00355c94;
    }
    (mb->spd).w = 20.0;
    RotFvector(rot,&(mb->spd).y);
    uVar4 = mb->pos_no;
    break;
  case '\x03':
    sVar2 = mb->loop;
    if (sVar2 != 0) goto LAB_001933cc;
    uVar4 = mb->pos_no;
    break;
  case '\x04':
    bVar1 = mb->idx;
    (mb->spd).y = 0.0;
    (mb->spd).z = 0.0;
    puVar6 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
    *puVar6 = *puVar6 & 0xff7fffff;
    bVar1 = *(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 8);
    mb->pos_no = '\0';
    (mb->rot).x = 0.0;
    mb->wait_time = '\0';
    (mb->spd).w = (float)(uint)bVar1;
  default:
    goto switchD_00193124_caseD_5;
  }
  mb->wait_time = '\x01';
  mb->pos_no = uVar4 + '\x01';
switchD_00193124_caseD_5:
  return;
}

void EJob016(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar2 = pbVar4[2];
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  iVar5 = GetRndSP(1,99);
  if ((int)(uint)bVar1 < iVar5) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar3 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob017(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  mb->pos_no = '\0';
  mb->loop = (ushort)bVar2 + (ushort)bVar1 * 0x100;
  mb->wait_time = '\0';
  return;
}

void EJob018(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (mb->loop == 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  else {
    mb->loop = mb->loop + -1;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob019(MOVE_BOX *mb) {
  byte bVar1;
  uchar anime_no;
  uchar flame;
  uchar *puVar2;
  int iVar3;
  uint *puVar4;
  
  puVar2 = *(uchar **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  anime_no = *puVar2;
  *(uchar **)((int)&mb->comm_add + 4) = puVar2 + 1;
  flame = puVar2[1];
  *(uchar **)((int)&mb->comm_add + 4) = puVar2 + 2;
  *(undefined *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3fe) = 1;
  puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
  *puVar4 = *puVar4 & 0x8fffffff;
  *(uchar *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x13) = anime_no;
  ReqEnemyAnime(mb->idx,flame);
  iVar3 = (uint)mb->idx * 0x430;
  if (*(byte *)((int)ene_wrk + iVar3 + 0x10) < 2) {
    EneARatioDataSet((ENE_WRK *)((int)ene_wrk + iVar3),anime_no);
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob01A(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x40000000) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob01B(MOVE_BOX *mb) {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	static float spd[3];
	static float rate[3];
	static float trate[3];
	static sceVu0FVECTOR p[3];
	
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  float *p0;
  ulong in_hi;
  ulong uVar8;
  float tv [4];
  float rv [4];
  
  p0 = &(mb->pos).y;
  bVar1 = mb->idx;
  iVar2 = *(int *)((int)&mb->comm_add + 4);
  iVar3 = (uint)bVar1 * 0x430;
  uVar8 = in_hi & 0xffffffff00000000;
  iVar7 = (uint)bVar1 * 4;
  *(int *)((int)&mb->comm_add + 4) = iVar2 + 2;
  *(int *)((int)&mb->comm_add + 4) = iVar2 + 4;
  *(int *)((int)&mb->comm_add + 4) = iVar2 + 6;
  tv[1] = *(float *)((int)ene_wrk + iVar3 + 0x3e4);
  *(undefined4 *)(&rate_217 + iVar7) = 0x40000000;
  *(undefined4 *)(&trate_218 + iVar7) = 0x3f800000;
  tv[2] = 300.0;
  *(undefined4 *)(&spd_216 + iVar7) = 0x3f800000;
  tv[0] = 0.0;
  tv[3] = 0.0;
  GetTrgtRot(p0,(float *)&camera,rv,2);
  RotFvector(rv,tv);
  sceVu0AddVector((Vector4 *)(&p_219 + (uint)bVar1 * 0x10),(Vector4 *)p0,(Vector4 *)tv);
  SetEffects(0x1b,4);
  uVar5 = DAT_00355c9c;
  lVar4 = (uVar8 | 0x252e90) + (long)(int)((uint)mb->idx * 0x430);
  *(undefined4 *)((int)lVar4 + 0x38c) = 0x40404860;
  *(undefined4 *)(((uint)((ulong)lVar4 >> 0x20) | 0x252e90) + (uint)mb->idx * 0x430 + 0x388) = uVar5
  ;
  uVar5 = DAT_00355ca0;
  uVar6 = (uint)*(byte *)((int)ene_wrk + iVar3 + 0x413);
  if (uVar6 != 0xff) {
    *(undefined4 *)((int)ene_wrk + uVar6 * 0x40 + iVar3 + 0x290) = DAT_00355ca0;
    *(undefined4 *)
     ((int)ene_wrk + (uint)*(byte *)((int)ene_wrk + iVar3 + 0x413) * 0x40 + iVar3 + 0x294) = uVar5;
    *(undefined4 *)
     ((int)ene_wrk + (uint)*(byte *)((int)ene_wrk + iVar3 + 0x413) * 0x40 + iVar3 + 0x298) = uVar5;
    *(undefined4 *)
     ((int)ene_wrk + (uint)*(byte *)((int)ene_wrk + iVar3 + 0x413) * 0x40 + iVar3 + 0x29c) =
         0x437f0000;
    *(undefined4 *)((int)ene_wrk + iVar3 + 0x19c) = 0x437f0000;
    *(undefined4 *)((int)ene_wrk + iVar3 + 0x198) = uVar5;
    *(undefined4 *)((int)ene_wrk + iVar3 + 400) = uVar5;
    *(undefined4 *)((int)ene_wrk + iVar3 + 0x194) = uVar5;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob01C(MOVE_BOX *mb) {
  byte bVar1;
  byte *pbVar2;
  float pow;
  
  pow = DAT_00355ca4;
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  ReqQuake(0,pow,(uint)bVar1,0,0);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob01D(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (ingame_wrk.game == 1) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob01E(MOVE_BOX *mb) {
  uchar req;
  uchar *puVar1;
  short no;
  short time;
  
  puVar1 = *(uchar **)((int)&mb->comm_add + 4);
  req = *puVar1;
  *(uchar **)((int)&mb->comm_add + 4) = puVar1 + 1;
  no = *(short *)(puVar1 + 1);
  *(uchar **)((int)&mb->comm_add + 4) = puVar1 + 3;
  time = *(short *)(puVar1 + 3);
  *(uchar **)((int)&mb->comm_add + 4) = puVar1 + 5;
  ReqDramaCamera(req,no,time);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob01F(MOVE_BOX *mb) {
	u_short time;
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  bVar3 = pbVar4[3];
  uVar6 = (ulong)bVar1 | (long)(int)((uint)bVar2 << 8);
  bVar1 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 4;
  if (uVar6 != 0) {
    uVar5 = 0;
    if (time_wrk.run < uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      mb->pos_no = '\0';
      goto LAB_00193ad4;
    }
  }
  if ((plyr_wrk.mvsta & 1) == 0) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
LAB_00193ad4:
  mb->wait_time = '\0';
  return;
}

void EJob020(MOVE_BOX *mb) {
	u_char door_id_tbl[5];
	
  uchar *puVar1;
  byte bVar2;
  short *psVar3;
  uint uVar4;
  short door_id;
  uchar door_id_tbl [5];
  
  psVar3 = *(short **)((int)&mb->comm_add + 4);
  puVar1 = door_id_tbl + 3;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | DAT_00356fb8 >> (3 - uVar4) * 8;
  door_id_tbl._0_4_ = DAT_00356fb8;
  door_id_tbl[4] = DAT_00356fbc;
  door_id = *psVar3;
  *(short **)((int)&mb->comm_add + 4) = psVar3 + 1;
  bVar2 = *(byte *)(psVar3 + 1);
  *(int *)((int)&mb->comm_add + 4) = (int)psVar3 + 3;
  DoorSttsChange(door_id,door_id_tbl[bVar2]);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob021(MOVE_BOX *mb) {
	u_short se;
	
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  
  bVar2 = mb->idx;
  puVar3 = *(ushort **)((int)&mb->comm_add + 4);
  iVar5 = (uint)bVar2 * 0x430;
  uVar4 = *puVar3;
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 1;
  cVar1 = *(char *)((int)ene_wrk + iVar5 + 0x3fd);
  if (cVar1 != -1) {
    if (*(char *)((int)ene_wrk + iVar5 + 0x10) == '\x02') {
      iVar5 = SeStartPos(cVar1 + 0x5e,&(mb->pos).y,0,0x1000,0x1000,0xff);
      mb->se = iVar5;
    }
    else {
      iVar5 = SeStartGhost((uint)uVar4,(uint)bVar2,0,0x1000,0x1000,
                           *(byte *)((int)ene_wrk + iVar5 + 0x3fd));
      mb->se = iVar5;
    }
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob022(MOVE_BOX *mb) {
	u_char no;
	static sceVu0FVECTOR ep[3];
	static float fade[3];
	static float rate[3];
	
  byte bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  bVar1 = mb->idx;
  uVar10 = (uint)bVar1;
  if (mb->pos_no == '\0') {
    iVar6 = *(int *)((int)&mb->comm_add + 4);
    iVar3 = (uint)bVar1 * 0x430;
    *(int *)((int)&mb->comm_add + 4) = iVar6 + 3;
    sVar4 = *(short *)(iVar6 + 3);
    *(int *)((int)&mb->comm_add + 4) = iVar6 + 5;
    iVar9 = (uint)bVar1 * 4;
    sVar5 = *(short *)(iVar6 + 5);
    *(int *)((int)&mb->comm_add + 4) = iVar6 + 9;
    uVar7 = sVar4 + sVar5;
    uVar2 = *(uint *)((int)ene_wrk + iVar3);
    mb->loop = uVar7;
    bVar1 = *(byte *)((int)ene_wrk + iVar3 + 0x358);
    iVar6 = uVar10 * 0x10;
    uVar14 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x3e0);
    uVar12 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x3e4);
    uVar13 = *(undefined4 *)((int)ene_wrk + iVar3 + 1000);
    *(undefined4 *)(&DAT_0040203c + iVar6) = *(undefined4 *)((int)ene_wrk + iVar3 + 0x3ec);
    *(float *)(&rate_243 + iVar9) = (float)(uint)bVar1;
    *(undefined4 *)(&ep_241 + iVar6) = uVar14;
    *(undefined4 *)(&DAT_00402034 + iVar6) = uVar12;
    *(undefined4 *)(&DAT_00402038 + iVar6) = uVar13;
    *(float *)(&fade_242 + iVar9) = (float)(uint)bVar1 / (float)(uint)uVar7;
    *(uint *)((int)ene_wrk + iVar3) = uVar2 | 0x2000000;
    mb->wait_time = '\x01';
    mb->pos_no = mb->pos_no + '\x01';
    return;
  }
  if (mb->pos_no == '\x01') {
    if (mb->loop == 0) {
      puVar8 = (uint *)((int)ene_wrk + uVar10 * 0x430);
      *puVar8 = *puVar8 & 0xfdffffff;
      mb->pos_no = '\0';
      mb->wait_time = '\0';
      return;
    }
    fVar11 = *(float *)(&rate_243 + uVar10 * 4) - *(float *)(&fade_242 + uVar10 * 4);
    mb->loop = mb->loop + -1;
    *(float *)(&rate_243 + uVar10 * 4) = fVar11;
    *(char *)((int)ene_wrk + uVar10 * 0x430 + 0x358) = (char)(int)fVar11;
    mb->wait_time = '\x01';
    return;
  }
  return;
}

void EJob023(MOVE_BOX *mb) {
	static sceVu0FVECTOR ep[3];
	
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (mb->pos_no == '\0') {
    iVar4 = *(int *)((int)&mb->comm_add + 4);
    bVar1 = mb->idx;
    *(int *)((int)&mb->comm_add + 4) = iVar4 + 3;
    cVar2 = *(char *)(iVar4 + 3);
    *(int *)((int)&mb->comm_add + 4) = iVar4 + 5;
    cVar3 = *(char *)(iVar4 + 5);
    *(int *)((int)&mb->comm_add + 4) = iVar4 + 9;
    *(undefined4 *)(&ep_247 + (uint)bVar1 * 0x10) =
         *(undefined4 *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3e0);
    *(undefined4 *)(&DAT_00402084 + (uint)mb->idx * 0x10) =
         *(undefined4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3e4);
    *(undefined4 *)(&DAT_00402088 + (uint)mb->idx * 0x10) =
         *(undefined4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + 1000);
    *(undefined4 *)(&DAT_0040208c + (uint)mb->idx * 0x10) =
         *(undefined4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3ec);
    mb->wait_time = cVar2 + cVar3;
    mb->pos_no = mb->pos_no + '\x01';
  }
  else if (mb->pos_no == '\x01') {
    mb->pos_no = '\0';
    mb->wait_time = '\0';
  }
  return;
}

void EJob024(MOVE_BOX *mb) {
  int iVar1;
  
  iVar1 = *(int *)((int)&mb->comm_add + 4);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 1;
  return;
}

void EJob025(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  iVar4 = (uint)mb->idx * 0x430;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (*(short *)((int)ene_wrk + iVar4 + 0xe) == 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  else {
    if ((*(ushort *)((int)ene_wrk + iVar4 + 0xe) & 3) != 0) {
      mb->pos_no = '\0';
      goto LAB_00193f68;
    }
    ReqPlyrHPdown((ushort)*(byte *)(*(int *)((int)ene_wrk + iVar4 + 0xb0) + 0x18),'\0');
  }
  mb->pos_no = '\0';
LAB_00193f68:
  mb->wait_time = '\0';
  return;
}

void EJob026(MOVE_BOX *mb) {
	int rot;
	
  ushort *puVar1;
  uint uVar2;
  float fVar3;
  
  puVar1 = *(ushort **)((int)&mb->comm_add + 4);
  uVar2 = (uint)*puVar1;
  *(ushort **)((int)&mb->comm_add + 4) = puVar1 + 1;
  if (uVar2 == 1000) {
    fVar3 = GetTrgtRotY(&(mb->pos).y,&plyr_wrk.move_box.spd.z);
    (mb->rot).z = fVar3;
  }
  else {
    (mb->rot).z = ((float)uVar2 / 180.0) * DAT_00355ca8;
    RotLimitChk(&(mb->rot).z);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob027(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xff7fffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x800000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob028(MOVE_BOX *mb) {
	MOVE_BOX *fmb;
	u_char no;
	u_char i;
	u_char id;
	
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  FLY_WRK *pFVar10;
  uint no;
  
  pbVar8 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar8;
  *(byte **)((int)&mb->comm_add + 4) = pbVar8 + 1;
  bVar2 = pbVar8[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar8 + 2;
  no = 0;
  if ((fly_wrk[0].sta & 1U) == 0) {
    bVar6 = true;
  }
  else {
    uVar7 = 1;
    do {
      no = uVar7 & 0xff;
      bVar6 = no < 10;
      if (!bVar6) goto LAB_00194288;
      uVar7 = no + 1;
    } while ((fly_wrk[no].sta & 1U) != 0);
  }
  if (bVar6) {
    iVar9 = (uint)bVar1 * 8;
    pFVar10 = fly_wrk + no;
    pFVar10->sta = 1;
    uVar3 = mb->idx;
    fly_wrk[no].dat = (FLY_DATA *)(&fly_dat + iVar9);
    fly_wrk[no].ene = uVar3;
    InitMoveBox(&fly_wrk[no].move_box);
    fly_wrk[no].move_box.idx = (uchar)no;
    sVar5 = *(short *)(&DAT_00320104 + iVar9);
    fly_wrk[no].move_box.pos.y = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3e0);
    fly_wrk[no].move_box.pos.z = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3e4);
    fly_wrk[no].move_box.pos.w = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 1000);
    bVar4 = mb->idx;
    *(undefined8 *)((int)&fly_wrk[no].move_box.comm_add_top + 4) = 0x7e0000;
    fly_wrk[no].move_box.tpos.x = *(float *)((int)ene_wrk + (uint)bVar4 * 0x430 + 0x3ec);
    pbVar8 = (byte *)((CONCAT11(uRam007e0007,uRam007e0006) | 0x7e0000) + (uint)bVar1 * 2);
    bVar1 = pbVar8[1];
    bVar4 = *pbVar8;
    fly_wrk[no].move_box.wait_time = '\x01';
    fly_wrk[no].move_box.pos_no = '\0';
    *(ulong *)((int)&fly_wrk[no].move_box.comm_add + 4) =
         (ulong)bVar4 | (long)(int)((uint)bVar1 << 8) | 0x7e0000;
    fly_wrk[no].move_box.rot.z = (mb->rot).z;
    fly_wrk[no].adjp[0] = 0.0;
    fly_wrk[no].adjp[1] = 0.0;
    fly_wrk[no].adjp[2] = 0.0;
    fly_wrk[no].adjp[3] = 0.0;
    fly_wrk[no].adjmv[0] = 0.0;
    fly_wrk[no].adjmv[1] = 0.0;
    fly_wrk[no].adjmv[2] = 0.0;
    fly_wrk[no].adjmv[3] = 0.0;
    if (sVar5 != -1) {
      RequestFly(no,1);
    }
    if (bVar2 == 0) {
      mb->pos_no = '\0';
      goto LAB_0019428c;
    }
    pFVar10->sta = pFVar10->sta | 8;
  }
LAB_00194288:
  mb->pos_no = '\0';
LAB_0019428c:
  mb->wait_time = '\0';
  return;
}

void EJob029(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((fly_wrk[bVar1].sta & 2U) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob02A(MOVE_BOX *mb) {
  FlyDataEnd(mb->idx);
  mb->pos_no = '\0';
  mb->wait_time = 0xff;
  return;
}

void FlyDataEnd(u_char no) {
  FLY_DATA *pFVar1;
  uint no_00;
  
  no_00 = (int)(char)no & 0xff;
  pFVar1 = fly_wrk[no_00].dat;
  fly_wrk[no_00].sta = fly_wrk[no_00].sta & 0xfffe;
  if (pFVar1->mdl_no != -1) {
    RequestFly(no_00,0);
    return;
  }
  return;
}

void EJob02B(MOVE_BOX *mb) {
  char cVar1;
  uchar r;
  uchar g;
  uchar b;
  char *pcVar2;
  void *pvVar3;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  r = pcVar2[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 2;
  g = pcVar2[2];
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 3;
  b = pcVar2[3];
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 4;
  if (cVar1 == '\0') {
    ResetEffects(fly_wrk[mb->idx].ep);
  }
  else {
    pvVar3 = CallFire(&(mb->pos).y,r,g,b,1.5);
    fly_wrk[mb->idx].ep = pvVar3;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob02C(MOVE_BOX *mb) {
	u_short min;
	u_char rng;
	
  short *psVar1;
  short sVar2;
  uint uVar3;
  
  psVar1 = *(short **)((int)&mb->comm_add + 4);
  sVar2 = *psVar1;
  *(short **)((int)&mb->comm_add + 4) = psVar1 + 1;
  uVar3 = (uint)*(byte *)(psVar1 + 1);
  *(int *)((int)&mb->comm_add + 4) = (int)psVar1 + 3;
  if (uVar3 != 0) {
    uVar3 = GetRndSP(0,uVar3);
    uVar3 = uVar3 & 0xff;
  }
  mb->pos_no = '\0';
  mb->loop = sVar2 + (short)uVar3;
  mb->wait_time = '\0';
  return;
}

void EJob02D(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  float fVar6;
  float tv [4];
  float rv [4];
  
  fVar6 = DAT_00355cac;
  pbVar5 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = pbVar5[1];
  bVar2 = *pbVar5;
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 2;
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 4;
  tv[0] = 0.0;
  tv[1] = 0.0;
  tv[3] = 0.0;
  rv[0] = 0.0;
  tv[2] = (float)((int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10);
  rv[2] = 0.0;
  rv[3] = 0.0;
  rv[1] = ((float)((int)(((uint)bVar2 + (uint)bVar1 * 0x100) * 0x10000) >> 0x10) * fVar6) / 180.0 +
          plyr_wrk.move_box.trot.w;
  RotLimitChk(rv + 1);
  RotFvector(rv,tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z);
  GetTrgtRot(&(mb->pos).y,tv,&(mb->trot).y,3);
  fVar6 = DAT_00355cb0;
  (mb->rot).y = (mb->trot).y;
  (mb->pos_mid).x = fVar6;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob02E(MOVE_BOX *mb) {
	ENE_WRK *ew;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  iVar5 = (uint)mb->idx * 0x430;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  if ((uint)*(ushort *)((int)ene_wrk + iVar5 + 8) <=
      ((uint)*(ushort *)(*(int *)((int)ene_wrk + iVar5 + 0xb0) + 10) * (uint)bVar1) / 100) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob02F(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xffbfffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x400000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob030(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	short int rot;
	u_char min;
	u_char max;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float tv [4];
  float rv [4];
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  bVar3 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  uVar6 = (int)(((uint)bVar1 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10;
  bVar1 = pbVar4[3];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 4;
  if (uVar6 != 0) {
    iVar5 = GetRndSP(0,(uVar6 & 0x7f) << 1);
    uVar6 = (int)((iVar5 - uVar6) * 0x10000) >> 0x10;
  }
  rv[0] = 0.0;
  rv[2] = 0.0;
  rv[3] = 0.0;
  rv[1] = ((float)uVar6 * DAT_00355cb4) / 180.0 + plyr_wrk.move_box.trot.w;
  RotLimitChk(rv + 1);
  if ((bVar3 == 0) && (bVar1 == 0)) {
    tv[0] = 0.0;
    tv[1] = 0.0;
    tv[2] = GetDistV(&(mb->pos).y,&plyr_wrk.move_box.spd.z);
  }
  else {
    if (bVar1 == bVar3) {
      tv[0] = 0.0;
      uVar6 = (uint)bVar3;
      tv[1] = 0.0;
    }
    else {
      tv[0] = 0.0;
      tv[1] = 0.0;
      uVar6 = GetRndSP((uint)bVar3,(uint)bVar1 - (uint)bVar3);
    }
    tv[2] = (float)(uVar6 * 500);
  }
  tv[3] = 0.0;
  RotFvector(rv,tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  bVar1 = mb->idx;
  fVar7 = *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4);
  (mb->pos).y = tv[0];
  tv[1] = (mb->pos).z + fVar7;
  (mb->pos).w = tv[2];
  (mb->tpos).x = tv[3];
  (mb->pos).z = tv[1];
  EnePosInfoSet((ENE_WRK *)((int)ene_wrk + (uint)bVar1 * 0x430));
  EneBlinkPosSet((ENE_WRK *)((int)ene_wrk + (uint)mb->idx * 0x430));
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob031(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  iVar5 = (uint)mb->idx * 0x430;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  if (((uint)*(ushort *)(*(int *)((int)ene_wrk + iVar5 + 0xb0) + 10) * (uint)bVar1) / 100 <=
      (uint)*(ushort *)((int)ene_wrk + iVar5 + 0xc)) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob032(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  float fVar5;
  
  puVar3 = *(ushort **)((int)&mb->comm_add + 4);
  uVar4 = *puVar3;
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 1;
  bVar1 = *(byte *)((int)puVar3 + 3);
  bVar2 = *(byte *)(puVar3 + 1);
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 2;
  fVar5 = GetDistV(&plyr_wrk.move_box.spd.z,&(mb->pos).y);
  if ((float)(uint)uVar4 <= fVar5) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob033(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xfeffffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x1000000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob034(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xfdffffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x2000000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob035(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xffffbfff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x4000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob036(MOVE_BOX *mb) {
	int rot;
	
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  float fVar5;
  int iVar6;
  float rot;
  
  fVar5 = DAT_00355cb8;
  puVar3 = *(ushort **)((int)&mb->comm_add + 4);
  rot = (mb->rot).z;
  uVar4 = *puVar3;
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 1;
  bVar1 = *(byte *)((int)puVar3 + 3);
  bVar2 = *(byte *)(puVar3 + 1);
  *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 2;
  iVar6 = RotRngChk(&(mb->pos).y,&plyr_wrk.move_box.spd.z,rot,((float)(uint)uVar4 / 180.0) * fVar5);
  if (iVar6 == 0) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob037(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	u_short time;
	short int spd;
	
  char cVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  float tv [4];
  
  if (mb->pos_no == '\0') {
    pcVar5 = *(char **)((int)&mb->comm_add + 4);
    cVar1 = *pcVar5;
    *(char **)((int)&mb->comm_add + 4) = pcVar5 + 1;
    uVar2 = pcVar5[1];
    *(char **)((int)&mb->comm_add + 4) = pcVar5 + 3;
    bVar3 = pcVar5[4];
    bVar4 = pcVar5[3];
    *(char **)((int)&mb->comm_add + 4) = pcVar5 + 5;
    iVar7 = (int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10;
    if (cVar1 != '\0') {
      iVar7 = iVar7 * -0x10000 >> 0x10;
    }
    (mb->spd).z = 0.0;
    (mb->spd).w = 0.0;
    (mb->rot).x = 0.0;
    (mb->spd).y = (float)iVar7;
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)&(mb->pos).y,(Vector4 *)&(mb->spd).y);
    GetPointHeightChk(tv);
    tv[1] = tv[1] - (mb->pos).z;
    if ((5.0 < ABS(tv[1])) && (bVar6 = tv[1] < 0.0, tv[1] = 5.0, bVar6)) {
      tv[1] = -5.0;
    }
    mb->wait_time = uVar2;
    mb->pos_no = mb->pos_no + '\x01';
    (mb->spd).z = tv[1];
  }
  else if (mb->pos_no == '\x01') {
    mb->pos_no = '\0';
    (mb->spd).y = 0.0;
    (mb->spd).z = 0.0;
    (mb->spd).w = 0.0;
    (mb->rot).x = 0.0;
    mb->wait_time = '\0';
  }
  return;
}

void EJob038(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	float rot;
	u_char side;
	
  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  bool bVar5;
  ushort uVar6;
  float *p1;
  float tv [4];
  float rv [4];
  
  p1 = &(mb->pos).y;
  pcVar4 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar4;
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 1;
  cVar2 = pcVar4[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 2;
  uVar6 = *(ushort *)(pcVar4 + 2);
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 4;
  tv[0] = 0.0;
  tv[1] = 0.0;
  tv[2] = 0.0;
  tv[3] = 0.0;
  tv[2] = GetDistV(&plyr_wrk.move_box.spd.z,p1);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      bVar3 = *(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 8);
    }
    else {
      bVar3 = *(byte *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 9);
    }
    tv[2] = tv[2] - (float)(uint)bVar3;
  }
  GetTrgtRot(&plyr_wrk.move_box.spd.z,p1,rv,2);
  if (cVar2 == '\0') {
    rv[1] = rv[1] - (((float)(uint)uVar6 / 10.0) * DAT_00355cbc) / 180.0;
  }
  else {
    rv[1] = rv[1] + (((float)(uint)uVar6 / 10.0) * DAT_00355cc0) / 180.0;
  }
  RotLimitChk(rv + 1);
  RotFvector(rv,tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z);
  sceVu0SubVector(tv,tv,p1);
  tv[1] = 0.0;
  (mb->spd).z = 0.0;
  (mb->spd).y = tv[0];
  (mb->spd).w = tv[2];
  (mb->rot).x = tv[3];
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)p1);
  GetPointHeightChk(tv);
  tv[1] = (tv[1] + *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4)) - (mb->pos).z;
  if ((1.0 < ABS(tv[1])) && (bVar5 = tv[1] < 0.0, tv[1] = 1.0, bVar5)) {
    tv[1] = -1.0;
  }
  mb->pos_no = '\0';
  (mb->spd).z = tv[1];
  mb->wait_time = '\0';
  return;
}

void EJob039(MOVE_BOX *mb) {
	u_short time;
	u_short max;
	u_short mrng;
	
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  
  pcVar4 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar4;
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 1;
  uVar7 = (uint)(byte)pcVar4[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 2;
  bVar2 = pcVar4[2];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 3;
  bVar8 = pcVar4[3];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 4;
  bVar3 = pcVar4[4];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 5;
  if (cVar1 == '\0') {
    puVar6 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    *puVar6 = *puVar6 & 0xffffbfff;
  }
  else {
    puVar6 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    *puVar6 = *puVar6 | 0x4000;
    if (bVar2 != 0) {
      uVar7 = GetRndSP(uVar7,(uint)bVar2);
      uVar7 = uVar7 & 0xffff;
    }
    *(short *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3f8) = (short)uVar7;
    if (bVar3 != 0) {
      iVar5 = GetRndSP((uint)bVar8,(uint)bVar3);
      bVar8 = (byte)iVar5;
    }
    *(byte *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3fa) = bVar8;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03A(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x400) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03B(MOVE_BOX *mb) {
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  float fVar4;
  
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  sVar3 = *(short *)(pbVar2 + 1);
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 3;
  if (plyr_wrk.cond != bVar1) {
    plyr_wrk.cond = bVar1;
    plyr_wrk.cond_tm = sVar3;
    if (bVar1 == 2) {
      if (plyr_wrk.mode == 1) {
        FinderEndSet();
        plyr_wrk.mode = 3;
      }
      fVar4 = GetDistV(&(mb->pos).y,&plyr_wrk.move_box.spd.z);
      plyr_wrk.cond_tm = (short)(int)(fVar4 / DAT_00355cc4);
    }
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03C(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x20) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03D(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (plyr_wrk.aphoto_tm != 0) {
    plyr_wrk.aphoto_tm = 0;
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03E(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x200) == 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob03F(MOVE_BOX *mb) {
  *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x358) = 0;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob040(MOVE_BOX *mb) {
	u_char no;
	static u_short time[4];
	static u_char max[4];
	static float up[4][2];
	
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = (uint)mb->idx;
  if (mb->pos_no == '\0') {
    pbVar3 = *(byte **)((int)&mb->comm_add + 4);
    uVar7 = (uint)mb->idx;
    puVar5 = (ushort *)(&time_338 + uVar7 * 2);
    *puVar5 = (ushort)*pbVar3 + (ushort)pbVar3[1] * 0x100;
    iVar4 = *(int *)((int)&mb->comm_add + 4);
    *(int *)((int)&mb->comm_add + 4) = iVar4 + 2;
    (&max_339)[uVar7] = *(byte *)(iVar4 + 2);
    *(int *)((int)&mb->comm_add + 4) = iVar4 + 3;
    bVar1 = (&max_339)[uVar7];
    uVar2 = *puVar5;
    *(undefined *)((int)ene_wrk + uVar7 * 0x430 + 0x358) = 0;
    *(float *)(&up_340 + uVar7 * 8) = (float)(uint)bVar1 / (float)(uint)uVar2;
    *(undefined4 *)(&DAT_004020b4 + uVar7 * 8) = 0;
    mb->pos_no = mb->pos_no + '\x01';
  }
  else {
    if (mb->pos_no != '\x01') {
      return;
    }
    puVar5 = (ushort *)(&time_338 + uVar6 * 2);
  }
  if (*puVar5 == 0) {
    *(undefined *)((int)ene_wrk + uVar6 * 0x430 + 0x358) = (&max_339)[uVar6];
    mb->pos_no = '\0';
    mb->wait_time = '\0';
    return;
  }
  fVar8 = *(float *)(&up_340 + uVar6 * 8);
  fVar9 = *(float *)(&DAT_004020b4 + uVar6 * 8);
  *puVar5 = *puVar5 - 1;
  fVar9 = fVar9 + fVar8;
  *(float *)(&DAT_004020b4 + uVar6 * 8) = fVar9;
  *(char *)((int)ene_wrk + uVar6 * 0x430 + 0x358) = (char)(int)fVar9;
  mb->wait_time = '\x01';
  return;
}

void EJob041(MOVE_BOX *mb) {
	u_char no;
	static u_short time[4];
	static float down[4][2];
	
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  uVar4 = (uint)mb->idx;
  if (mb->pos_no == '\0') {
    pbVar3 = *(byte **)((int)&mb->comm_add + 4);
    iVar5 = uVar4 * 2;
    *(ushort *)(&time_344 + iVar5) = (ushort)*pbVar3 + (ushort)pbVar3[1] * 0x100;
    *(int *)((int)&mb->comm_add + 4) = *(int *)((int)&mb->comm_add + 4) + 2;
    if (*(char *)((int)ene_wrk + uVar4 * 0x430 + 0x358) == '\0') goto LAB_00195554;
    bVar1 = *(byte *)((int)ene_wrk + uVar4 * 0x430 + 0x358);
    *(float *)(&down_345 + uVar4 * 8) =
         (float)(uint)bVar1 / (float)(uint)*(ushort *)(&time_344 + iVar5);
    *(float *)(&DAT_004020d4 + uVar4 * 8) = (float)(uint)bVar1;
    mb->pos_no = mb->pos_no + '\x01';
  }
  else {
    iVar5 = uVar4 << 1;
    if (mb->pos_no != '\x01') {
      return;
    }
  }
  sVar2 = *(short *)(&time_344 + iVar5);
  if (sVar2 != 0) {
    *(short *)(&time_344 + iVar5) = sVar2 + -1;
    fVar6 = *(float *)(&DAT_004020d4 + uVar4 * 8);
    if (0.0 < fVar6) {
      fVar6 = fVar6 - *(float *)(&down_345 + uVar4 * 8);
      *(float *)(&DAT_004020d4 + uVar4 * 8) = fVar6;
      *(char *)((int)ene_wrk + uVar4 * 0x430 + 0x358) = (char)(int)fVar6;
    }
    mb->wait_time = '\x01';
    return;
  }
  *(undefined *)((int)ene_wrk + uVar4 * 0x430 + 0x358) = 0;
LAB_00195554:
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob042(MOVE_BOX *mb) {
	u_short no;
	u_short adj;
	u_char brnch;
	
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  bool bVar5;
  short sVar6;
  
  bVar5 = false;
  pcVar4 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar4;
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 1;
  sVar6 = *(short *)(pcVar4 + 1);
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 3;
  bVar2 = pcVar4[4];
  bVar3 = pcVar4[3];
  *(char **)((int)&mb->comm_add + 4) = pcVar4 + 5;
  if (cVar1 == '\0') {
    if (sVar6 == -1) {
      sVar6 = _DAT_00252e60;
    }
    if ((plyr_wrk._0_8_ & 0x2008) == 0x2008) {
      bVar5 = _DAT_00252e60 == sVar6;
    }
  }
  else {
    bVar5 = (plyr_wrk._0_8_ & 0x20000000000008) != 0;
  }
  if (bVar5) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar3 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob043(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xfff7ffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x80000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob044(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (plyr_wrk.mode == 1) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob045(MOVE_BOX *mb) {
  undefined *puVar1;
  
  puVar1 = *(undefined **)((int)&mb->comm_add + 4);
  *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x358) = *puVar1;
  *(undefined **)((int)&mb->comm_add + 4) = puVar1 + 1;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob046(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  float *pfVar8;
  float tv [4];
  
  pbVar7 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 2;
  bVar3 = pbVar7[3];
  bVar4 = pbVar7[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 4;
  bVar5 = pbVar7[5];
  bVar6 = pbVar7[4];
  tv[0] = (float)((int)(((uint)bVar1 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10);
  tv[1] = (float)((int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10);
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 6;
  tv[2] = (float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10);
  tv[3] = 0.0;
  RotFvector(&(mb->rot).y,tv);
  pfVar8 = &(mb->pos).y;
  sceVu0AddVector((Vector4 *)pfVar8,(Vector4 *)pfVar8,(Vector4 *)tv);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob047(MOVE_BOX *mb) {
	u_short adj;
	u_short rng;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  float fVar10;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  iVar6 = (uint)bVar1 * 0x430;
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  uVar9 = (ulong)bVar2 | (long)(int)((uint)bVar3 << 8);
  if (*(char *)((int)ene_wrk + iVar6 + 0x10) == '\x02') {
    uVar8 = *(ushort *)(*(int *)((int)ene_wrk + iVar6 + 0x41c) + 0x10);
    if (uVar8 == 0) {
LAB_00195984:
      if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x800) == 0) {
        mb->pos_no = '\0';
        goto LAB_001959e4;
      }
      lVar7 = *(long *)((int)&mb->comm_add_top + 4);
    }
    else {
      fVar10 = GetDistV(&plyr_wrk.move_box.spd.z,(float *)((int)ene_wrk + iVar6 + 0xc0));
      if ((float)(uint)uVar8 < fVar10) {
        uVar8 = 0;
      }
      if (uVar8 == 0) {
        bVar1 = mb->idx;
        goto LAB_00195984;
      }
      lVar7 = *(long *)((int)&mb->comm_add_top + 4);
    }
    *(ulong *)((int)&mb->comm_add + 4) = uVar9 + lVar7;
  }
  else {
    uVar5 = *(uint *)((int)ene_wrk + iVar6);
    if ((uVar5 & 0x800) == 0) {
      mb->pos_no = '\0';
      goto LAB_001959e4;
    }
    lVar7 = *(long *)((int)&mb->comm_add_top + 4);
    *(uint *)((int)ene_wrk + iVar6) = uVar5 & 0xfffff7ff;
    *(ulong *)((int)&mb->comm_add + 4) = uVar9 + lVar7;
  }
  mb->pos_no = '\0';
LAB_001959e4:
  mb->wait_time = '\0';
  return;
}

void EJob048(MOVE_BOX *mb) {
	u_char no;
	static float fade[3];
	static float rate[3];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  byte *pbVar5;
  int iVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  bVar1 = mb->idx;
  if (mb->pos_no == '\0') {
    pbVar5 = *(byte **)((int)&mb->comm_add + 4);
    bVar2 = pbVar5[1];
    bVar3 = *pbVar5;
    *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 2;
    uVar7 = (ushort)bVar3 + (ushort)bVar2 * 0x100;
    mb->loop = uVar7;
    iVar6 = (uint)bVar1 * 4;
    bVar2 = *(byte *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x358);
    *(float *)(&rate_368 + iVar6) = (float)(uint)bVar2;
    *(float *)(&fade_367 + iVar6) = (float)(uint)bVar2 / (float)(uint)uVar7;
    mb->pos_no = mb->pos_no + '\x01';
    sVar4 = mb->loop;
  }
  else {
    if (mb->pos_no != '\x01') {
      return;
    }
    sVar4 = mb->loop;
  }
  if (sVar4 != 0) {
    iVar6 = (uint)bVar1 * 4;
    fVar10 = *(float *)(&rate_368 + iVar6);
    fVar9 = *(float *)(&fade_367 + iVar6);
    fVar8 = 0.0;
    mb->loop = sVar4 + -1;
    if (fVar9 < fVar10) {
      fVar8 = fVar10 - fVar9;
    }
    *(float *)(&rate_368 + iVar6) = fVar8;
    *(char *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x358) = (char)(int)fVar8;
    mb->wait_time = '\x01';
    return;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob049(MOVE_BOX *mb) {
	float spd;
	
  int iVar1;
  
  iVar1 = *(int *)((int)&mb->comm_add + 4);
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 2;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 4;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 6;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 8;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 10;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 0xc;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 0xe;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 0x10;
  SetEffects(2,4);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob04A(MOVE_BOX *mb) {
	u_char time;
	
  byte bVar1;
  int iVar2;
  uchar uVar3;
  
  if (mb->pos_no == '\0') {
    bVar1 = mb->idx;
    uVar3 = '\n';
    if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430 + 4) & 2) == 0) {
      uVar3 = '(';
    }
    else {
      (mb->spd).y = 0.0;
      (mb->spd).z = 0.0;
      (mb->spd).w = 0.0;
      (mb->rot).x = 0.0;
    }
    iVar2 = (uint)bVar1 * 0x430;
    *(uint *)((int)ene_wrk + iVar2 + 4) = *(uint *)((int)ene_wrk + iVar2 + 4) & 0xfffffffd;
    mb->wait_time = uVar3;
    mb->pos_no = mb->pos_no + '\x01';
    return;
  }
  if (mb->pos_no == '\x01') {
    mb->pos_no = '\0';
    mb->wait_time = '\0';
    return;
  }
  return;
}

void EJob04B(MOVE_BOX *mb) {
	u_short adj[3];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  byte *pbVar10;
  long lVar11;
  short adj [3];
  
  pbVar10 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  bVar2 = pbVar10[1];
  bVar3 = *pbVar10;
  *(byte **)((int)&mb->comm_add + 4) = pbVar10 + 2;
  bVar4 = pbVar10[3];
  bVar5 = pbVar10[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar10 + 4;
  bVar6 = pbVar10[4];
  bVar7 = pbVar10[5];
  *(byte **)((int)&mb->comm_add + 4) = pbVar10 + 6;
  cVar8 = *(char *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3fb);
  uVar9 = (ushort)bVar3 + (ushort)bVar2 * 0x100;
  if ((cVar8 == '\x01') || (uVar9 = (ushort)bVar5 + (ushort)bVar4 * 0x100, cVar8 == '\x02')) {
    lVar11 = *(long *)((int)&mb->comm_add_top + 4);
  }
  else {
    lVar11 = *(long *)((int)&mb->comm_add_top + 4);
    uVar9 = (ushort)bVar6 + (ushort)bVar7 * 0x100;
  }
  *(ulong *)((int)&mb->comm_add + 4) = lVar11 + (ulong)uVar9;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob04C(MOVE_BOX *mb) {
	u_short time;
	u_short adj;
	u_char id;
	
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort *puVar5;
  ushort uVar6;
  char cVar7;
  
  puVar5 = *(ushort **)((int)&mb->comm_add + 4);
  uVar6 = *puVar5;
  *(ushort **)((int)&mb->comm_add + 4) = puVar5 + 1;
  bVar1 = *(byte *)((int)puVar5 + 3);
  bVar2 = *(byte *)(puVar5 + 1);
  *(ushort **)((int)&mb->comm_add + 4) = puVar5 + 2;
  cVar3 = *(char *)(puVar5 + 2);
  *(int *)((int)&mb->comm_add + 4) = (int)puVar5 + 5;
  if (cVar3 == '\0') {
    bVar4 = mb->idx;
  }
  else {
    bVar4 = mb->idx;
    cVar7 = '\0';
    if ((*(uint *)((int)ene_wrk + (uint)bVar4 * 0x430) & 0x200) == 0) {
      cVar7 = cVar3;
    }
    if (cVar7 != '\0') {
      mb->pos_no = '\0';
      goto LAB_00195ed8;
    }
  }
  if (*(ushort *)((int)ene_wrk + (uint)bVar4 * 0x430 + 0x3f0) < uVar6) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
LAB_00195ed8:
  mb->wait_time = '\0';
  return;
}

void EJob04D(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (time_wrk.zerohour == 0) {
    if ((plyr_wrk.sta & 8) != 0) {
      mb->pos_no = '\0';
      goto LAB_00195f40;
    }
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  else {
    time_wrk.zerohour = time_wrk.zerohour - 1;
  }
  mb->pos_no = '\0';
LAB_00195f40:
  mb->wait_time = '\0';
  return;
}

void EJob04E(MOVE_BOX *mb) {
  char cVar1;
  uchar bone_id;
  char *pcVar2;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  bone_id = pcVar2[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 2;
  if (cVar1 == '\0') {
    motReleaseEnemyKuttuki(mb->idx);
    mb->pos_no = '\0';
  }
  else {
    motSetEnemyKuttuki(mb->idx,bone_id,
                       (float)(uint)*(ushort *)
                                     (*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xb0) + 0xe),
                       DAT_00355ccc);
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob04F(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xfffcffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x10000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob050(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  
  pbVar8 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  bVar2 = pbVar8[1];
  bVar3 = *pbVar8;
  *(byte **)((int)&mb->comm_add + 4) = pbVar8 + 2;
  bVar4 = pbVar8[3];
  bVar5 = pbVar8[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar8 + 4;
  bVar6 = pbVar8[4];
  bVar7 = pbVar8[5];
  *(byte **)((int)&mb->comm_add + 4) = pbVar8 + 6;
  *(float *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3a0) =
       (float)((int)(((uint)bVar3 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10);
  *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a4) =
       (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10);
  *(float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3a8) =
       (float)((int)(((uint)bVar6 + (uint)bVar7 * 0x100) * 0x10000) >> 0x10);
  *(undefined4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x3ac) = 0;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob051(MOVE_BOX *mb) {
  byte bVar1;
  undefined uVar2;
  undefined *puVar3;
  
  bVar1 = mb->idx;
  puVar3 = *(undefined **)((int)&mb->comm_add + 4);
  uVar2 = *puVar3;
  *(undefined **)((int)&mb->comm_add + 4) = puVar3 + 1;
  *(undefined *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x3fe) = uVar2;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob052(MOVE_BOX *mb) {
  int iVar1;
  
  iVar1 = *(int *)((int)&mb->comm_add + 4);
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 1;
  *(int *)((int)&mb->comm_add + 4) = iVar1 + 2;
  SetEffects(6,1);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob053(MOVE_BOX *mb) {
	sceVu0FVECTOR vb;
	sceVu0FVECTOR vt;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uchar uVar4;
  float fVar5;
  float vb [4];
  float vt [4];
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  vb[1] = (mb->pos).z - 300.0;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  vb[0] = (mb->pos).y;
  vt[1] = plyr_wrk.move_box.spd.w - 300.0;
  vb[3] = (mb->tpos).x;
  vb[2] = (mb->pos).w;
  vt[0] = plyr_wrk.move_box.spd.z;
  vt[2] = plyr_wrk.move_box.rot.x;
  vt[3] = plyr_wrk.move_box.rot.y;
  fVar5 = GetDistV(vb,vt);
  uVar4 = HitChkSegment2AllChk(vb,vt,fVar5 / 50.0);
  if (uVar4 == '\0') {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob054(MOVE_BOX *mb) {
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  SetWhiteIn2((uint)bVar1);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob055(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  bVar2 = *pbVar5;
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 1;
  bVar3 = pbVar5[1];
  bVar4 = pbVar5[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar5 + 3;
  if ((ushort)bVar2 == *(ushort *)(*(int *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0xb0) + 0x36)) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar3 | (long)(int)((uint)bVar4 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob056(MOVE_BOX *mb) {
	int *erd;
	u_short x;
	u_short z;
	u_char i;
	u_char n;
	
  byte no;
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  no = mb->idx;
  piVar6 = GetEneRootData(no);
  uVar8 = 0;
  while( true ) {
    puVar3 = *(ushort **)((int)&mb->comm_add + 4);
    uVar4 = *puVar3;
    *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 1;
    bVar1 = *(byte *)((int)puVar3 + 3);
    bVar2 = *(byte *)(puVar3 + 1);
    *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 2;
    uVar5 = puVar3[2];
    *(ushort **)((int)&mb->comm_add + 4) = puVar3 + 3;
    if ((uVar4 == 0xffff) && (uVar5 == 0xffff)) break;
    puVar7 = (uint *)(piVar6 + uVar8 * 3);
    puVar7[2] = (uint)uVar5;
    *puVar7 = (uint)uVar4;
    puVar7[1] = (int)(((uint)bVar2 + (uint)bVar1 * 0x100) * 0x10000) >> 0x10;
    uVar8 = uVar8 + 1 & 0xff;
  }
  er_max_tbl[no] = (uchar)uVar8;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob057(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	
  char cVar1;
  char *pcVar2;
  float fVar3;
  float tv [4];
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  tv[0] = (mb->pos).y;
  cVar1 = *pcVar2;
  tv[1] = (mb->pos).z;
  tv[2] = (mb->pos).w;
  tv[3] = (mb->tpos).x;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  GetPointHeightChk(tv);
  if (cVar1 != '\0') {
    fVar3 = (mb->pos).z;
    if (ABS(tv[1] - fVar3) <= 5.0) {
      (mb->pos).z = tv[1];
      goto LAB_001964c0;
    }
    if (tv[1] < fVar3) {
      tv[1] = fVar3 - 5.0;
    }
    else {
      tv[1] = fVar3 + 5.0;
    }
  }
  (mb->pos).z = tv[1];
LAB_001964c0:
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob058(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  float fVar4;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  fVar4 = (mb->pos).z;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (fVar4 != plyr_wrk.move_box.spd.w) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob059(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (plyr_wrk.mode == 2) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05A(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 & 0xfffdffff;
  }
  else {
    puVar4 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
    uVar3 = *puVar4 | 0x20000;
  }
  *puVar4 = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05B(MOVE_BOX *mb) {
	sceVu0FVECTOR rv;
	u_char i;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float rv [4];
  
  fVar8 = DAT_00355cd0;
  uVar10 = 0;
  pbVar7 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 2;
  bVar3 = pbVar7[3];
  bVar4 = pbVar7[2];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 4;
  bVar5 = pbVar7[5];
  bVar6 = pbVar7[4];
  *(byte **)((int)&mb->comm_add + 4) = pbVar7 + 6;
  rv[3] = 0.0;
  rv[0] = ((float)((int)(((uint)bVar1 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10) * fVar8) / 180.0;
  rv[1] = ((float)((int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10) * fVar8) / 180.0;
  rv[2] = ((float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10) * fVar8) / 180.0;
  iVar9 = 0;
  while( true ) {
    RotLimitChk((float *)((int)rv + iVar9));
    uVar10 = uVar10 + 1 & 0xff;
    if (2 < uVar10) break;
    iVar9 = uVar10 << 2;
  }
  uVar10 = 0;
  sceVu0AddVector((Vector4 *)&(mb->rot).y,(Vector4 *)rv,(Vector4 *)rv);
  iVar9 = 0;
  while( true ) {
    RotLimitChk((float *)((int)rv + iVar9));
    uVar10 = uVar10 + 1 & 0xff;
    if (2 < uVar10) break;
    iVar9 = uVar10 << 2;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05C(MOVE_BOX *mb) {
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  cVar2 = *pcVar5;
  *(char **)((int)&mb->comm_add + 4) = pcVar5 + 1;
  bVar3 = pcVar5[1];
  bVar4 = pcVar5[2];
  *(char **)((int)&mb->comm_add + 4) = pcVar5 + 3;
  if (cVar2 == *(char *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x13)) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar3 | (long)(int)((uint)bVar4 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05D(MOVE_BOX *mb) {
  ReqEneSpeakAdpcmCnt(*(short *)(*(int *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x41c) + 10));
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05E(MOVE_BOX *mb) {
  undefined *puVar1;
  
  puVar1 = *(undefined **)((int)&mb->comm_add + 4);
  *(undefined *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0x426) = *puVar1;
  *(undefined **)((int)&mb->comm_add + 4) = puVar1 + 1;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob05F(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  float fVar5;
  float tv [4];
  
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar4;
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 1;
  bVar2 = pbVar4[2];
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 3;
  tv[0] = 0.0;
  tv[1] = 0.0;
  fVar5 = GetDistV2(&(mb->pos).y,&plyr_wrk.move_box.spd.z);
  tv[3] = 0.0;
  tv[2] = (fVar5 + (float)((int)(((uint)bVar3 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10)) /
          (float)(uint)bVar1;
  RotFvector(&(mb->rot).y,tv);
  (mb->spd).y = tv[0];
  (mb->spd).z = tv[1];
  (mb->spd).w = tv[2];
  (mb->rot).x = tv[3];
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob060(MOVE_BOX *mb) {
  GetTrgtRot(&(mb->pos).y,(float *)&camera,&(mb->rot).y,3);
  mb->pos_no = '\0';
  (mb->pos_mid).x = 0.0;
  mb->wait_time = '\0';
  return;
}

void EJob061(MOVE_BOX *mb) {
  byte bVar1;
  uint *puVar2;
  
  if (mb->pos_no == '\0') {
    bVar1 = mb->idx;
    *(int *)((int)&mb->comm_add + 4) = *(int *)((int)&mb->comm_add + 4) + 1;
    puVar2 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
    *puVar2 = *puVar2 & 0xfffbffff;
    SetEffects(0x28,8);
    mb->wait_time = '\x01';
    mb->pos_no = mb->pos_no + '\x01';
  }
  else if (mb->pos_no == '\x01') {
    GhostDeadInit((uint)mb->idx);
    RequestSpirit((uint)mb->idx,0);
    ReleaseEneTexture((uint)mb->idx);
    motReleaseAnmPacket(mb->idx);
    mb->pos_no = '\0';
    mb->wait_time = '\0';
  }
  return;
}

void EJob062(MOVE_BOX *mb) {
	sceVu0FVECTOR rv;
	sceVu0FVECTOR tv;
	u_char req;
	u_char i;
	
  byte bVar1;
  byte *pbVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  float rv [4];
  float tv [4];
  
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  if (bVar1 == 1) {
    plyr_wrk.mode = 1;
    plyr_wrk.sta = plyr_wrk.sta & 0xffffefff;
    ReqEneStop('\0','\0');
    mb->pos_no = '\0';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      plyr_wrk.sta = plyr_wrk.sta & 0xffffefff;
      uVar5 = 0;
      FinderEndSet();
      plyr_wrk.mode = 0;
      ReqEneStop('\0','\0');
      disp3d_furn_req = 1;
      disp3d_room_req = 1;
      iVar4 = 0;
      do {
        if ((((*(uint *)((int)&ene_wrk[0].sta + iVar4) & 1) != 0) &&
            (*(short *)((int)&ene_wrk[0].hp + iVar4) != 0)) &&
           ((&ene_wrk[1].move_box.wait_time)[iVar4] == plyr_wrk.dop._13_1_)) {
          plyr_wrk.mode = 1;
          plyr_wrk.sta = plyr_wrk.sta | 0x10;
          SetDebugMenuSwitch(0);
          plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
          goto LAB_00196e00;
        }
        uVar5 = uVar5 + 1 & 0xff;
        iVar4 = uVar5 * 0x430;
      } while (uVar5 < 3);
      mb->pos_no = '\0';
    }
    else {
      mb->pos_no = '\0';
    }
  }
  else if (bVar1 == 2) {
    plyr_wrk.mode = 1;
    uVar5 = 0;
    plyr_wrk.sta = plyr_wrk.sta | 0x10;
    SetDebugMenuSwitch(0);
    plyr_wrk.sta = plyr_wrk.sta | 0x1000;
    plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
    SetPlyrAnime('C','\0');
    ReqEneStop('\x02',(uchar)(1 << (mb->idx & 0x1f)));
    plyr_wrk.rock_trgt = mb->idx;
    iVar4 = 0;
    do {
      if ((((*(ushort *)((int)&fly_wrk[0].sta + iVar4) & 1) != 0) &&
          ((&fly_wrk[0].ene)[iVar4] == mb->idx)) &&
         (*(short *)(*(int *)((int)fly_wrk[0].adjp + iVar4 + -0x10) + 4) != -1)) {
        FlyDataEnd((uchar)uVar5);
      }
      uVar5 = uVar5 + 1 & 0xff;
      iVar4 = uVar5 * 0xd0;
    } while (uVar5 < 10);
    mb->pos_no = '\0';
  }
  else if (bVar1 == 3) {
    plyr_wrk.mode = 9;
    tv[2] = DAT_00355cd4;
    tv[0] = 0.0;
    tv[1] = 0.0;
    tv[3] = 0.0;
    GetTrgtRot((float *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xc0),(float *)&camera,rv,3);
    RotFvector(rv,(float *)(Vector4 *)tv);
    sceVu0AddVector(&camera.p,(Vector4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + 0xc0),(Vector4 *)tv
                   );
    if (mb->se != -1) {
      SeStop(mb->se);
    }
    uVar5 = 0;
    bVar1 = mb->idx;
    while( true ) {
      iVar4 = *(int *)((int)ene_wrk + uVar5 * 4 + (uint)bVar1 * 0x430 + 0x390);
      if (iVar4 != -1) {
        SeStop(iVar4);
        *(undefined4 *)((int)ene_wrk + (uint)mb->idx * 0x430 + uVar5 * 4 + 0x390) = 0xffffffff;
      }
      uVar5 = uVar5 + 1 & 0xff;
      if (1 < uVar5) break;
      bVar1 = mb->idx;
    }
    uVar3 = PosInAreaJudge0(room_wrk.room_no,(short)(int)camera.p.z,(short)(int)camera.p.x);
    if ((uVar3 == '\0') ||
       (iVar4 = (uint)mb->idx * 0x430,
       uVar3 = PosInAreaJudge0(room_wrk.room_no,(short)(int)*(float *)((int)ene_wrk + iVar4 + 200),
                               (short)(int)*(float *)((int)ene_wrk + iVar4 + 0xc0)), uVar3 == '\0'))
    {
      disp3d_room_req = 0;
      disp3d_furn_req = 0;
LAB_00196e00:
      mb->pos_no = '\0';
    }
    else {
      mb->pos_no = '\0';
    }
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob063(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x40000) != 0) {
    iVar5 = GhostDeadLoadEndJudge();
    if (iVar5 == 0) {
      mb->pos_no = '\0';
      goto LAB_00196eb0;
    }
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
LAB_00196eb0:
  mb->wait_time = '\0';
  return;
}

void EJob064(MOVE_BOX *mb) {
	sceVu0FVECTOR tv;
	short int x;
	short int y;
	short int z;
	
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float tv [4];
  
  pcVar6 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar6;
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 1;
  bVar2 = pcVar6[1];
  bVar3 = pcVar6[2];
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 3;
  bVar4 = pcVar6[4];
  bVar5 = pcVar6[3];
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 5;
  iVar8 = (int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10;
  bVar2 = pcVar6[6];
  bVar3 = pcVar6[5];
  iVar7 = (int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10;
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 7;
  iVar9 = (int)(((uint)bVar3 + (uint)bVar2 * 0x100) * 0x10000) >> 0x10;
  if (cVar1 == '\0') {
    fly_wrk[mb->idx].adjp[3] = 0.0;
    fly_wrk[mb->idx].adjmv[3] = 0.0;
  }
  else if (cVar1 == '\x01') {
    fly_wrk[mb->idx].adjp[0] = (float)iVar8;
    fly_wrk[mb->idx].adjp[1] = (float)iVar7;
    fly_wrk[mb->idx].adjp[2] = (float)iVar9;
    fly_wrk[mb->idx].adjp[3] = 1.0;
  }
  else {
    tv[0] = (float)iVar8;
    tv[1] = (float)iVar7;
    tv[2] = (float)iVar9;
    tv[3] = 0.0;
    sceVu0AddVector((Vector4 *)fly_wrk[mb->idx].adjmv,(Vector4 *)fly_wrk[mb->idx].adjmv,
                    (Vector4 *)tv);
    fly_wrk[mb->idx].adjmv[3] = 1.0;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob065(MOVE_BOX *mb) {
	u_char i;
	
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    puVar4 = (ushort *)((int)&fly_wrk[0].sta + iVar2);
    uVar1 = *puVar4;
    if (((uVar1 & 1) != 0) && ((&fly_wrk[0].ene)[iVar2] == mb->idx)) {
      *puVar4 = uVar1 | 8;
      puVar3 = (uint *)((int)ene_wrk + (uint)mb->idx * 0x430);
      *puVar3 = *puVar3 | 0x4000000;
    }
    uVar5 = uVar5 + 1 & 0xff;
    iVar2 = uVar5 * 0xd0;
  } while (uVar5 < 10);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob066(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((fly_wrk[bVar1].sta & 8U) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob067(MOVE_BOX *mb) {
	u_char id;
	u_short rot;
	float adj;
	
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  float adj;
  
  pbVar2 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar2;
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 1;
  uVar3 = *(ushort *)(pbVar2 + 1);
  *(byte **)((int)&mb->comm_add + 4) = pbVar2 + 3;
  uVar5 = (uint)uVar3;
  if ((bVar1 & 1) != 0) {
    iVar4 = GetRndSP(0,uVar5 << 1);
    adj = (((float)iVar4 - (float)uVar5) * DAT_00355cd8) / 180.0;
    RotLimitChk(&adj);
    (mb->rot).y = (mb->rot).y + adj;
    RotLimitChk(&(mb->rot).y);
  }
  if ((bVar1 & 2) != 0) {
    iVar4 = GetRndSP(0,uVar5 << 1);
    adj = (((float)iVar4 - (float)uVar5) * DAT_00355cdc) / 180.0;
    RotLimitChk(&adj);
    (mb->rot).z = (mb->rot).z + adj;
    RotLimitChk(&(mb->rot).z);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob068(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x4000000) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob069(MOVE_BOX *mb) {
	u_short adj;
	u_char i;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (((fly_wrk[0].sta & 1U) == 0) || (bVar4 = true, fly_wrk[0].ene != mb->idx)) {
    uVar5 = 1;
    do {
      uVar6 = uVar5 & 0xff;
      bVar4 = uVar6 < 10;
      if (!bVar4) goto LAB_00197390;
      uVar5 = uVar6 + 1;
    } while (((fly_wrk[uVar6].sta & 1U) == 0) || (uVar5 = uVar6 + 1, fly_wrk[uVar6].ene != mb->idx))
    ;
  }
  if (bVar4) {
    mb->pos_no = '\0';
  }
  else {
LAB_00197390:
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob06A(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (plyr_wrk.mode == 3) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob06B(MOVE_BOX *mb) {
	sceVu0FVECTOR pv;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	float rot;
	float dist;
	short int spd;
	u_char side;
	
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  ushort uVar7;
  float fVar8;
  float *p1;
  float pv [4];
  float tv [4];
  float rv [4];
  
  fVar8 = DAT_00355ce0;
  p1 = &(mb->pos).y;
  pcVar6 = *(char **)((int)&mb->comm_add + 4);
  bVar1 = mb->idx;
  cVar2 = *pcVar6;
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 1;
  cVar3 = pcVar6[1];
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 2;
  uVar7 = *(ushort *)(pcVar6 + 2);
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 4;
  bVar4 = pcVar6[5];
  bVar5 = pcVar6[4];
  *(char **)((int)&mb->comm_add + 4) = pcVar6 + 6;
  pv[3] = plyr_wrk.move_box.rot.y;
  pv[2] = plyr_wrk.move_box.rot.x;
  pv[0] = plyr_wrk.move_box.spd.z;
  pv[1] = plyr_wrk.move_box.spd.w + fVar8;
  fly_wrk[bVar1].sta = fly_wrk[bVar1].sta | 0x10;
  tv[2] = GetDistV(pv,p1);
  if (cVar2 != '\x01') {
    tv[2] = tv[2] - (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10);
  }
  tv[3] = 0.0;
  tv[1] = 0.0;
  tv[0] = 0.0;
  GetTrgtRot(pv,p1,rv,3);
  if (cVar3 == '\0') {
    rv[1] = rv[1] - (((float)(uint)uVar7 / 10.0) * DAT_00355ce4) / 180.0;
  }
  else {
    rv[1] = rv[1] + (((float)(uint)uVar7 / 10.0) * DAT_00355ce8) / 180.0;
  }
  RotLimitChk(rv + 1);
  RotFvector(rv,(float *)(Vector4 *)tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)pv);
  sceVu0SubVector((Vector4 *)tv,(Vector4 *)tv,p1);
  (mb->spd).y = tv[0];
  (mb->spd).z = tv[1];
  (mb->spd).w = tv[2];
  (mb->rot).x = tv[3];
  GetTrgtRot(p1,pv,&(mb->rot).y,3);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob06C(MOVE_BOX *mb) {
  plyr_wrk.hp = 1;
  ReqPlyrHPdown(100,'\x01');
  if (plyr_wrk.mode == 1) {
    FinderEndSet();
    plyr_wrk.mode = 0;
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob06D(MOVE_BOX *mb) {
	u_short adj;
	u_char charge;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar4 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 1;
  bVar1 = pbVar3[2];
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 3;
  if (bVar4 == 0xff) {
    bVar4 = (&charge_max_tbl)[cam_custom_wrk.charge_max];
  }
  if (plyr_wrk.charge_num < bVar4) {
    mb->pos_no = '\0';
  }
  else {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    mb->pos_no = '\0';
  }
  mb->wait_time = '\0';
  return;
}

void EJob06E(MOVE_BOX *mb) {
  ushort uVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  
  psVar2 = *(short **)((int)&mb->comm_add + 4);
  iVar3 = (uint)mb->idx * 0x430;
  sVar4 = *psVar2;
  *(short **)((int)&mb->comm_add + 4) = psVar2 + 1;
  *(short *)((int)ene_wrk + iVar3 + 8) = sVar4 + *(short *)((int)ene_wrk + iVar3 + 8);
  iVar3 = (uint)mb->idx * 0x430;
  uVar1 = *(ushort *)(*(int *)((int)ene_wrk + iVar3 + 0xb0) + 10);
  if (uVar1 < *(ushort *)((int)ene_wrk + iVar3 + 8)) {
    *(ushort *)((int)ene_wrk + iVar3 + 8) = uVar1;
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob06F(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = mb->idx;
  pbVar4 = *(byte **)((int)&mb->comm_add + 4);
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar4 + 2;
  if ((*(uint *)((int)ene_wrk + (uint)bVar1 * 0x430) & 0x100) != 0) {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar2 | (long)(int)((uint)bVar3 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob070(MOVE_BOX *mb) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  if (point_get_end != '\0') {
    *(ulong *)((int)&mb->comm_add + 4) =
         ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
  }
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob071(MOVE_BOX *mb) {
  GhostDeadInit((uint)mb->idx);
  RequestSpirit((uint)mb->idx,0);
  ReleaseEneTexture((uint)mb->idx);
  motReleaseAnmPacket(mb->idx);
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void EJob072(MOVE_BOX *mb) {
	float dist;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uchar uVar4;
  float *p0;
  float fVar5;
  
  p0 = &(mb->pos).y;
  pbVar3 = *(byte **)((int)&mb->comm_add + 4);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(byte **)((int)&mb->comm_add + 4) = pbVar3 + 2;
  fVar5 = GetDistV(p0,&plyr_wrk.move_box.spd.z);
  if ((mb->pos).z == plyr_wrk.move_box.spd.w) {
    if (fVar5 <= 2000.0) {
      uVar4 = HitChkSegment2AllChk(p0,&plyr_wrk.move_box.spd.z,fVar5 / 50.0);
      if (uVar4 != '\0') {
        mb->pos_no = '\0';
        goto LAB_00197938;
      }
      *(ulong *)((int)&mb->comm_add + 4) =
           ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + *(long *)((int)&mb->comm_add_top + 4);
    }
    mb->pos_no = '\0';
  }
  else {
    mb->pos_no = '\0';
  }
LAB_00197938:
  mb->wait_time = '\0';
  return;
}

void EJob073(MOVE_BOX *mb) {
  char cVar1;
  char *pcVar2;
  ushort uVar3;
  FLY_WRK *pFVar4;
  
  pcVar2 = *(char **)((int)&mb->comm_add + 4);
  cVar1 = *pcVar2;
  *(char **)((int)&mb->comm_add + 4) = pcVar2 + 1;
  if (cVar1 == '\0') {
    pFVar4 = fly_wrk + mb->idx;
    uVar3 = pFVar4->sta & 0xfff7;
  }
  else {
    pFVar4 = fly_wrk + mb->idx;
    uVar3 = pFVar4->sta | 8;
  }
  pFVar4->sta = uVar3;
  mb->pos_no = '\0';
  mb->wait_time = '\0';
  return;
}

void BJobDammy(ENE_WRK *ew) {
  return;
}

void BJob000(ENE_WRK *ew) {
	u_char time;
	
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)((int)&ew->acomm_add_top + 5);
  if (bVar1 == 1) {
    *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
    *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return;
    }
    *(undefined *)((int)&ew->acomm_add_top + 6) = 1;
    return;
  }
  if (bVar1 != 0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  cVar2 = *ew->pdf;
  ew->pdf = (char *)((int)ew->pdf + 1);
  if (cVar2 == '\0') {
    *(undefined *)((int)&ew->acomm_add_top + 6) = 1;
    *(undefined *)((int)&ew->acomm_add_top + 5) = 2;
    return;
  }
  *(char *)((int)&ew->acomm_add_top + 6) = cVar2;
  *(char *)((int)&ew->acomm_add_top + 5) = *(char *)((int)&ew->acomm_add_top + 5) + '\x01';
  return;
}

void BJob001(ENE_WRK *ew) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)ew->pdf;
  lVar4 = *(long *)&ew->pdf2;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  ew->pdf = pbVar3 + 2;
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  *(ulong *)&ew->pdf = lVar4 + ((long)(int)((uint)bVar1 << 8) | (ulong)bVar2);
  return;
}

void BJob009(ENE_WRK *ew) {
	LIGHT_PACK *l;
	float diff;
	float r;
	float g;
	float b;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  
  pbVar4 = (byte *)ew->pdf;
  fVar5 = (ew->mylight).ambient[3];
  bVar1 = *pbVar4;
  ew->pdf = pbVar4 + 1;
  bVar2 = pbVar4[1];
  ew->pdf = pbVar4 + 2;
  bVar3 = pbVar4[2];
  fVar6 = (float)(uint)bVar1 / 10.0;
  ew->pdf = pbVar4 + 3;
  bVar1 = pbVar4[3];
  ew->pdf = pbVar4 + 4;
  if ((int)fVar5 < 3) {
    (ew->mylight).parallel[(int)fVar5 + 1].diffuse[2] = 255.0;
    (ew->mylight).parallel[(int)fVar5].diffuse[3] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 1].direction[0] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 1].direction[1] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 1].direction[2] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 1].direction[3] = fVar6;
    (ew->mylight).parallel[(int)fVar5 + 1].diffuse[0] = fVar6;
    (ew->mylight).parallel[(int)fVar5 + 1].diffuse[1] = fVar6;
    (ew->mylight).parallel[0].direction[3] = (float)(uint)bVar2 / 10.0;
    (ew->mylight).parallel[0].diffuse[0] = (float)(uint)bVar3 / 10.0;
    (ew->mylight).parallel[0].diffuse[1] = (float)(uint)bVar1 / 10.0;
    (ew->mylight).parallel[0].diffuse[2] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 2].diffuse[2] = 255.0;
    (ew->mylight).parallel[(int)fVar5 + 2].diffuse[1] = fVar6;
    (ew->mylight).ambient[3] = (float)((int)fVar5 + 1);
    (ew->mylight).parallel[(int)fVar5 + 1].diffuse[3] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 2].direction[0] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 2].direction[1] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 2].direction[2] = 0.0;
    (ew->mylight).parallel[(int)fVar5 + 2].direction[3] = fVar6;
    (ew->mylight).parallel[(int)fVar5 + 2].diffuse[0] = fVar6;
  }
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob00A(ENE_WRK *ew) {
	sceVu0FVECTOR tv;
	POINT_WRK *p;
	float power;
	float diff;
	short int tv2[3];
	u_char id;
	u_char i;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort *puVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  float tv [4];
  ushort tv2 [3];
  
  memset(tv,0,0x10);
  puVar5 = (ushort *)ew->pdf;
  uVar7 = *puVar5;
  ew->pdf = puVar5 + 1;
  uVar8 = puVar5[1];
  ew->pdf = puVar5 + 2;
  fVar14 = (float)(uint)uVar7;
  bVar1 = *(byte *)((int)puVar5 + 5);
  bVar2 = *(byte *)(puVar5 + 2);
  ew->pdf = puVar5 + 3;
  fVar15 = (float)(uint)uVar8 / 100.0;
  bVar3 = *(byte *)((int)puVar5 + 7);
  bVar4 = *(byte *)(puVar5 + 3);
  tv[0] = (float)(int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  ew->pdf = puVar5 + 4;
  bVar1 = *(byte *)((int)puVar5 + 9);
  bVar2 = *(byte *)(puVar5 + 4);
  tv[1] = (float)(int)(short)((ushort)bVar4 + (ushort)bVar3 * 0x100);
  tv[3] = 0.0;
  ew->pdf = puVar5 + 5;
  tv[2] = (float)((int)(((uint)bVar2 + (uint)bVar1 * 0x100) * 0x10000) >> 0x10);
  *(float *)&ew->in_finder_tm = tv[0];
  *(float *)(ew->area + 2) = tv[1];
  *(undefined4 *)&ew->se_area_no = 0;
  *(float *)&ew->tr_time = tv[2];
  RotFvector(&(ew->move_box).rspd.x,tv);
  sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)((ew->mpos).p1 + 3));
  pbVar13 = (byte *)((int)&ew[1].move_box.pos.w + 2);
  uVar11 = 0;
  pbVar12 = pbVar13;
  do {
    uVar10 = (uint)*pbVar12;
    if (uVar10 == 0xff) {
      if (room_wrk.mylight[uVar11].point_num < 3) {
        bVar1 = *(byte *)&room_wrk.mylight[uVar11].point_num;
        uVar10 = (uint)bVar1;
        *pbVar12 = bVar1;
        room_wrk.mylight[uVar11].point_num = room_wrk.mylight[uVar11].point_num + 1;
      }
      if (uVar10 != 0xff) goto LAB_00197d58;
    }
    else {
LAB_00197d58:
      pfVar9 = (float *)(uVar11 * 0x1d0 + 0x254030 + uVar10 * 0x30);
      pfVar9[4] = fVar15;
      pfVar9[5] = fVar15;
      pfVar9[6] = fVar15;
      pfVar9[7] = 255.0;
      *pfVar9 = tv[0];
      pfVar9[1] = tv[1];
      pfVar9[2] = tv[2];
      pfVar9[8] = fVar14;
      pfVar9[3] = tv[3];
    }
    uVar11 = uVar11 + 1 & 0xff;
    pbVar12 = pbVar13 + uVar11;
  } while (uVar11 < 2);
  uVar11 = (uint)*(byte *)&ew[1].move_box.pos.w;
  if (uVar11 == 0xff) {
    fVar6 = (ew->mylight).parallel[0].direction[0];
    if ((int)fVar6 < 3) {
      bVar1 = *(byte *)(ew->mylight).parallel[0].direction;
      uVar11 = (uint)bVar1;
      (ew->mylight).parallel[0].direction[0] = (float)((int)fVar6 + 1);
      *(byte *)&ew[1].move_box.pos.w = bVar1;
    }
    if (uVar11 == 0xff) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_00197e34;
    }
  }
  pfVar9 = (ew->mylight).point[uVar11].diffuse + 3;
  pfVar9[6] = fVar15;
  pfVar9[7] = 255.0;
  pfVar9[4] = fVar15;
  pfVar9[5] = fVar15;
  *pfVar9 = tv[0];
  pfVar9[1] = tv[1];
  pfVar9[2] = tv[2];
  pfVar9[8] = fVar14;
  pfVar9[3] = tv[3];
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
LAB_00197e34:
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob00B(ENE_WRK *ew) {
	sceVu0FVECTOR p;
	sceVu0FVECTOR i;
	SPOT_WRK *s;
	float power;
	float diff;
	float intens;
	short int p2[3];
	short int i2[3];
	u_char id;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort *puVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  float *pfVar10;
  uint uVar11;
  Vector4 *pVVar12;
  Vector4 *rot;
  float fVar13;
  float fVar14;
  float p [4];
  float i [4];
  ushort p2 [3];
  ushort i2 [3];
  
  rot = &(ew->move_box).rspd;
  pVVar12 = (Vector4 *)((ew->mpos).p1 + 3);
  memset(p,0,0x10);
  memset((Vector4 *)i,0,0x10);
  puVar5 = (ushort *)ew->pdf;
  uVar7 = *puVar5;
  ew->pdf = puVar5 + 1;
  uVar8 = puVar5[1];
  ew->pdf = puVar5 + 2;
  uVar9 = puVar5[2];
  ew->pdf = puVar5 + 3;
  bVar1 = *(byte *)((int)puVar5 + 7);
  bVar2 = *(byte *)(puVar5 + 3);
  fVar13 = (float)(uint)uVar8 / 100.0;
  ew->pdf = puVar5 + 4;
  fVar14 = (float)(uint)uVar9 / 100.0;
  bVar3 = *(byte *)((int)puVar5 + 9);
  bVar4 = *(byte *)(puVar5 + 4);
  p[0] = (float)(int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  ew->pdf = puVar5 + 5;
  bVar1 = *(byte *)((int)puVar5 + 0xb);
  bVar2 = *(byte *)(puVar5 + 5);
  p[1] = (float)(int)(short)((ushort)bVar4 + (ushort)bVar3 * 0x100);
  ew->pdf = puVar5 + 6;
  bVar3 = *(byte *)((int)puVar5 + 0xd);
  bVar4 = *(byte *)(puVar5 + 6);
  p[2] = (float)(int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  ew->pdf = puVar5 + 7;
  bVar1 = *(byte *)((int)puVar5 + 0xf);
  bVar2 = *(byte *)(puVar5 + 7);
  i[0] = (float)(int)(short)((ushort)bVar4 + (ushort)bVar3 * 0x100);
  ew->pdf = puVar5 + 8;
  bVar3 = *(byte *)((int)puVar5 + 0x11);
  bVar4 = *(byte *)(puVar5 + 8);
  i[1] = (float)(int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  ew->pdf = puVar5 + 9;
  p[3] = 0.0;
  *(float *)((int)ew->fp + 1) = p[0];
  i[2] = (float)(int)(short)((ushort)bVar4 + (ushort)bVar3 * 0x100);
  *(float *)((int)ew->fp2 + 1) = p[1];
  *(float *)((int)ew->fp2[1] + 1) = p[2];
  *(float *)(ew->eroot + 1) = i[0];
  *(float *)(ew->plight_svm + 1) = i[1];
  *(float *)((int)&ew->pa_radius + 1) = i[2];
  *(undefined4 *)((int)&ew->aie + 1) = 0;
  i[3] = 0.0;
  *(undefined4 *)((int)ew->fp2[2] + 1) = 0;
  RotFvector(&rot->x,p);
  sceVu0AddVector((Vector4 *)p,(Vector4 *)p,pVVar12);
  RotFvector(&rot->x,(float *)(Vector4 *)i);
  sceVu0AddVector((Vector4 *)i,(Vector4 *)i,pVVar12);
  sceVu0SubVector((Vector4 *)i,p,(Vector4 *)i);
  uVar11 = (uint)*(byte *)((int)&ew[1].move_box.pos.w + 1);
  if (uVar11 == 0xff) {
    fVar6 = (ew->mylight).parallel[0].direction[1];
    if ((int)fVar6 < 3) {
      bVar1 = *(byte *)((ew->mylight).parallel[0].direction + 1);
      uVar11 = (uint)bVar1;
      (ew->mylight).parallel[0].direction[1] = (float)((int)fVar6 + 1);
      *(byte *)((int)&ew[1].move_box.pos.w + 1) = bVar1;
    }
    if (uVar11 == 0xff) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_00198168;
    }
  }
  pfVar10 = &(ew->mylight).spot[uVar11].direction.w;
  pfVar10[0xc] = fVar13;
  pfVar10[10] = fVar14;
  pfVar10[0xb] = 255.0;
  *pfVar10 = p[0];
  pfVar10[1] = p[1];
  pfVar10[2] = p[2];
  pfVar10[3] = p[3];
  pfVar10[4] = i[0];
  pfVar10[5] = i[1];
  pfVar10[6] = i[2];
  pfVar10[7] = i[3];
  pfVar10[0xd] = (float)(uint)uVar7;
  pfVar10[8] = fVar14;
  pfVar10[9] = fVar14;
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
LAB_00198168:
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob00C(ENE_WRK *ew) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  void *pvVar6;
  
  pbVar5 = (byte *)ew->pdf;
  bVar1 = *pbVar5;
  ew->pdf = pbVar5 + 1;
  bVar2 = pbVar5[1];
  ew->pdf = pbVar5 + 2;
  bVar3 = pbVar5[2];
  ew->pdf = pbVar5 + 3;
  bVar4 = pbVar5[3];
  ew->pdf = pbVar5 + 4;
  (ew->pp).y = (float)(uint)bVar4;
  if (bVar1 == 0xff) {
    ResetEffects((void *)(ew->pp).x);
  }
  else {
    pvVar6 = CallPartsDeform5((uint)bVar1,(float)(uint)bVar2 / 100.0,(float)(uint)bVar3 / 100.0,
                              (void *)((int)&ew->stm_slow + 1),&(ew->pp).y);
    (ew->pp).x = (float)pvVar6;
  }
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob010(ENE_WRK *ew) {
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)ew->pdf;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  ew->pdf = pbVar3 + 2;
  if ((plyr_wrk.mode == 2) || ((ew->sta & 0x2000000) != 0)) {
    *(ulong *)&ew->pdf = ((ulong)bVar1 | (long)(int)((uint)bVar2 << 8)) + *(long *)&ew->pdf2;
    *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  }
  else {
    *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  }
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob011(ENE_WRK *ew) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint *puVar5;
  
  pbVar3 = (byte *)ew->pdf;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  ew->pdf = pbVar3 + 2;
  if ((ew->sta & 0x4000) != 0) {
    lVar4 = *(long *)&ew->pdf2;
    puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar5 = *puVar5 & 0xffffbfff;
    *(ulong *)&ew->pdf = ((ulong)bVar2 | (long)(int)((uint)bVar1 << 8)) + lVar4;
  }
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob012(ENE_WRK *ew) {
	u_char n;
	static float rate[4];
	static float r_adj[4];
	
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  short sVar4;
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  bVar1 = *(byte *)((int)&ew->acomm_add_top + 5);
  uVar7 = (uint)*(byte *)((int)&(ew->move_box).pos.x + 3);
  if (bVar1 == 1) {
LAB_001983f8:
    if (plyr_wrk.mode == 2) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
LAB_0019842c:
      *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
      return;
    }
    if ((*(ulong *)ew & 0x2004000) != 0) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_0019842c;
    }
    sVar4 = *(short *)((int)&ew->acomm_add_top + 2);
    if (sVar4 == 0) {
      *(undefined *)((int)&ew->acomm_add_top + 6) = 1;
      *(char *)((int)&ew->acomm_add_top + 5) = *(char *)((int)&ew->acomm_add_top + 5) + '\x01';
      return;
    }
    if ((ew->sta & 0x80000) != 0) goto LAB_00198640;
    pfVar6 = (float *)(&rate_528 + uVar7 * 4);
    fVar8 = *(float *)(&r_adj_529 + uVar7 * 4);
    fVar9 = *pfVar6;
    *(short *)((int)&ew->acomm_add_top + 2) = sVar4 + -1;
    *pfVar6 = fVar9 + fVar8;
    if (127.0 < fVar9 + fVar8) {
      *pfVar6 = 127.0;
    }
    if ((((*(uint *)(ew->mpos).p0[3] & 0x10) != 0) ||
        ((ingame_wrk.difficult != 0 && (ingame_wrk.game == 0)))) && (plyr_wrk.mode != 1)) {
      *(undefined *)&ew->nee = 0;
      goto LAB_00198640;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      if (*(short *)&ew[1].act_no == 0) {
        uVar2 = ew[1].move_box.job_no;
        *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
        *(uchar *)&ew->nee = uVar2;
        *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
        return;
      }
      uVar3 = *(ushort *)&ew[1].act_no;
      *(undefined *)&ew->nee = 0;
      *(undefined4 *)(&rate_528 + uVar7 * 4) = 0;
      uVar3 = uVar3 >> 1;
      *(ushort *)((int)&ew->acomm_add_top + 2) = uVar3;
      bVar1 = ew[1].move_box.job_no;
      *(ushort *)&ew[1].act_no = uVar3;
      *(float *)(&r_adj_529 + uVar7 * 4) = (float)(uint)bVar1 / (float)(uint)uVar3;
      *(char *)((int)&ew->acomm_add_top + 5) = *(char *)((int)&ew->acomm_add_top + 5) + '\x01';
      goto LAB_001983f8;
    }
    if (bVar1 == 2) {
      bVar1 = ew[1].move_box.job_no;
      uVar3 = *(ushort *)&ew[1].act_no;
      *(undefined2 *)((int)&ew->acomm_add_top + 2) = *(undefined2 *)&ew[1].act_no;
      *(float *)(&r_adj_529 + uVar7 * 4) = -((float)(uint)bVar1 / (float)(uint)uVar3);
      *(char *)((int)&ew->acomm_add_top + 5) = *(char *)((int)&ew->acomm_add_top + 5) + '\x01';
    }
    else if (bVar1 != 3) {
      return;
    }
    if (plyr_wrk.mode == 2) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_0019842c;
    }
    if ((*(ulong *)ew & 0x2004000) != 0) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_0019842c;
    }
    sVar4 = *(short *)((int)&ew->acomm_add_top + 2);
    if (sVar4 == 0) {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
LAB_00198594:
      *(undefined *)&ew->nee = 0;
      *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
      return;
    }
    if (*(char *)&ew->nee == '\0') {
      *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
      goto LAB_00198594;
    }
    if ((ew->sta & 0x80000) != 0) goto LAB_00198640;
    fVar10 = *(float *)(&r_adj_529 + uVar7 * 4);
    fVar8 = *(float *)(&rate_528 + uVar7 * 4);
    fVar9 = 0.0;
    *(short *)((int)&ew->acomm_add_top + 2) = sVar4 + -1;
    if (ABS(fVar10) < fVar8) {
      fVar9 = fVar8 + fVar10;
    }
    puVar5 = (uint *)(ew->mpos).p0[3];
    *(float *)(&rate_528 + uVar7 * 4) = fVar9;
    if (((*puVar5 & 0x10) != 0) && (plyr_wrk.mode != 1)) {
      *(undefined *)&ew->nee = 0;
      goto LAB_00198640;
    }
  }
  *(char *)&ew->nee = (char)(int)*(float *)(&rate_528 + uVar7 * 4);
LAB_00198640:
  *(undefined *)((int)&ew->acomm_add_top + 6) = 1;
  return;
}

void BJob013(ENE_WRK *ew) {
  undefined uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)ew->pdf;
  uVar1 = *puVar2;
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)&ew->nee = uVar1;
  ew->pdf = puVar2 + 1;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}

void BJob014(ENE_WRK *ew) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  void *pvVar6;
  
  pbVar5 = (byte *)ew->pdf;
  bVar1 = *pbVar5;
  ew->pdf = pbVar5 + 1;
  bVar2 = pbVar5[1];
  ew->pdf = pbVar5 + 2;
  bVar3 = pbVar5[2];
  ew->pdf = pbVar5 + 3;
  bVar4 = pbVar5[3];
  ew->pdf = pbVar5 + 4;
  (ew->pp).w = (float)(uint)bVar4;
  if (bVar1 == 0xff) {
    ResetEffects((void *)(ew->pp).z);
  }
  else {
    pvVar6 = CallPartsDeform5((uint)bVar1,(float)(uint)bVar2 / 100.0,(float)(uint)bVar3 / 100.0,
                              (void *)((int)&ew->stm_slow + 1),&(ew->pp).w);
    (ew->pp).z = (float)pvVar6;
  }
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
  return;
}
