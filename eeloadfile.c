// STATUS: NOT STARTED


static _lf_bind() {
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if ((int)_bind_check < 0) {
    while (lVar3 = sceSifBindRpc(0x4064c0,0xffffffff80000006,0), -1 < lVar3) {
      if (DAT_004064e4 != 0) {
        _bind_check = (undefined *)0x0;
        lVar3 = sceSifCallRpc(0x4064c0,0xff,0,0,0,0x4062c0,4,0);
        if (lVar3 < 0) {
          return 0xfffeffff;
        }
        _lfversion = _senddata;
        return 0;
      }
      iVar2 = 0x100000;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

static _lf_version() {
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = memcmp(&_lfversion,__ps2_klibinfo__ + 0xc,4);
  if (iVar1 != 0) {
    iVar1 = memcmp(&_lfversion,_lfwildcard,4);
    if (iVar1 != 0) {
      iVar1 = memcmp(__ps2_klibinfo__ + 0xc,_lfwildcard,4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

sceSifLoadFileReset() {
  _bind_check = &_heap_size;
  memset(&_lfversion,0,4);
  return 0;
}

static _sceSifLoadModuleBuffer() {
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong in_v1;
  ulong *puVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar7 = param_3;
  lVar5 = _lf_bind();
  uVar4 = 0xffff0000;
  if (-1 < lVar5) {
    lVar5 = _lf_version();
    if (lVar5 == 0) {
      _senddata = param_1;
      if (param_3 == 0) {
        DAT_004062c4 = 0;
      }
      else {
        __src = (void *)param_3;
        if ((long)param_2 < 0xfd) {
          memcpy(&DAT_004063c4,__src,param_2);
          DAT_004062c4 = (undefined4)param_2;
        }
        else {
          puVar6 = (ulong *)&DAT_004063c4;
          if (((param_3 | 0x4063c4) & 7) == 0) {
            do {
              puVar9 = (ulong *)param_3;
              param_7 = *puVar9;
              uVar10 = puVar9[1];
              uVar7 = puVar9[2];
              param_5 = puVar9[3];
              *puVar6 = param_7;
              puVar6[1] = uVar10;
              puVar6[2] = uVar7;
              puVar6[3] = param_5;
              puVar9 = puVar9 + 4;
              param_3 = (ulong)(int)puVar9;
              puVar6 = puVar6 + 4;
            } while (param_3 != (long)((int)__src + 0xe0));
          }
          else {
            do {
              uVar8 = (uint)param_3;
              uVar1 = uVar8 + 7 & 7;
              uVar2 = uVar8 & 7;
              in_v1 = (*(long *)((uVar8 + 7) - uVar1) << (7 - uVar1) * 8 |
                      in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)(uVar8 - uVar2) >> uVar2 * 8;
              uVar1 = uVar8 + 0xf & 7;
              uVar2 = uVar8 + 8 & 7;
              uVar7 = (*(long *)((uVar8 + 0xf) - uVar1) << (7 - uVar1) * 8 |
                      uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((uVar8 + 8) - uVar2) >> uVar2 * 8;
              uVar1 = uVar8 + 0x17 & 7;
              uVar2 = uVar8 + 0x10 & 7;
              param_5 = (*(long *)((uVar8 + 0x17) - uVar1) << (7 - uVar1) * 8 |
                        param_5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                        *(ulong *)((uVar8 + 0x10) - uVar2) >> uVar2 * 8;
              uVar1 = uVar8 + 0x1f & 7;
              uVar2 = uVar8 + 0x18 & 7;
              param_6 = (*(long *)((uVar8 + 0x1f) - uVar1) << (7 - uVar1) * 8 |
                        param_6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                        *(ulong *)((uVar8 + 0x18) - uVar2) >> uVar2 * 8;
              uVar1 = (uint)(undefined1 *)((int)puVar6 + 7) & 7;
              puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 7) + -uVar1);
              *puVar9 = *puVar9 & -1L << (uVar1 + 1) * 8 | in_v1 >> (7 - uVar1) * 8;
              uVar1 = (uint)puVar6 & 7;
              *(ulong *)((int)puVar6 - uVar1) =
                   in_v1 << uVar1 * 8 |
                   *(ulong *)((int)puVar6 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
              uVar1 = (uint)(undefined1 *)((int)puVar6 + 0xf) & 7;
              puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 0xf) + -uVar1);
              *puVar9 = *puVar9 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
              uVar1 = (uint)(puVar6 + 1) & 7;
              puVar9 = (ulong *)((int)(puVar6 + 1) - uVar1);
              *puVar9 = uVar7 << uVar1 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
              uVar1 = (uint)(undefined1 *)((int)puVar6 + 0x17) & 7;
              puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 0x17) + -uVar1);
              *puVar9 = *puVar9 & -1L << (uVar1 + 1) * 8 | param_5 >> (7 - uVar1) * 8;
              uVar1 = (uint)(puVar6 + 2) & 7;
              puVar9 = (ulong *)((int)(puVar6 + 2) - uVar1);
              *puVar9 = param_5 << uVar1 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
              uVar1 = (uint)(undefined1 *)((int)puVar6 + 0x1f) & 7;
              puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 0x1f) + -uVar1);
              *puVar9 = *puVar9 & -1L << (uVar1 + 1) * 8 | param_6 >> (7 - uVar1) * 8;
              uVar1 = (uint)(puVar6 + 3) & 7;
              puVar9 = (ulong *)((int)(puVar6 + 3) - uVar1);
              *puVar9 = param_6 << uVar1 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
              puVar9 = (ulong *)(uVar8 + 0x20);
              param_3 = (ulong)(int)puVar9;
              puVar6 = puVar6 + 4;
            } while (param_3 != (long)((int)__src + 0xe0));
          }
          uVar1 = (int)puVar9 + 7U & 7;
          uVar2 = (uint)puVar9 & 7;
          uVar10 = (*(long *)(((int)puVar9 + 7U) - uVar1) << (7 - uVar1) * 8 |
                   param_6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)puVar9 - uVar2) >> uVar2 * 8;
          uVar1 = (int)puVar9 + 0xfU & 7;
          uVar2 = (uint)(puVar9 + 1) & 7;
          uVar11 = (*(long *)(((int)puVar9 + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                   param_7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)(puVar9 + 1) - uVar2) >> uVar2 * 8;
          uVar1 = (int)puVar9 + 0x17U & 7;
          uVar2 = (uint)(puVar9 + 2) & 7;
          uVar7 = (*(long *)(((int)puVar9 + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                  uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                  *(ulong *)((int)(puVar9 + 2) - uVar2) >> uVar2 * 8;
          uVar1 = (int)puVar9 + 0x1bU & 3;
          uVar2 = (uint)(puVar9 + 3) & 3;
          uVar1 = (*(int *)(((int)puVar9 + 0x1bU) - uVar1) << (3 - uVar1) * 8 |
                  (uint)param_5 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                  *(uint *)((int)(puVar9 + 3) - uVar2) >> uVar2 * 8;
          uVar2 = (uint)(undefined1 *)((int)puVar6 + 7) & 7;
          puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 7) + -uVar2);
          *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
          uVar2 = (uint)puVar6 & 7;
          *(ulong *)((int)puVar6 - uVar2) =
               uVar10 << uVar2 * 8 |
               *(ulong *)((int)puVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          uVar2 = (uint)(undefined1 *)((int)puVar6 + 0xf) & 7;
          puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 0xf) + -uVar2);
          *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
          uVar2 = (uint)(puVar6 + 1) & 7;
          puVar9 = (ulong *)((int)(puVar6 + 1) - uVar2);
          *puVar9 = uVar11 << uVar2 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          uVar2 = (uint)(undefined1 *)((int)puVar6 + 0x17) & 7;
          puVar9 = (ulong *)((undefined1 *)((int)puVar6 + 0x17) + -uVar2);
          *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
          uVar2 = (uint)(puVar6 + 2) & 7;
          puVar9 = (ulong *)((int)(puVar6 + 2) - uVar2);
          *puVar9 = uVar7 << uVar2 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          uVar2 = (uint)(undefined1 *)((int)puVar6 + 0x1b) & 3;
          puVar3 = (uint *)((undefined1 *)((int)puVar6 + 0x1b) + -uVar2);
          *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar1 >> (3 - uVar2) * 8;
          *(uint *)(puVar6 + 3) = uVar1;
          DAT_004062c4 = 0xfc;
        }
      }
      lVar5 = sceSifCallRpc(0x4064c0,6,0,0x4062c0,0x200,0x4062c0,8,0);
      uVar4 = _senddata;
      if (lVar5 < 0) {
        uVar4 = 0xfffeffff;
      }
      else {
        *param_4 = DAT_004062c4;
      }
    }
    else {
      uVar4 = 0xfffefffc;
    }
  }
  return uVar4;
}

sceSifLoadModuleBuffer() {
  _sceSifLoadModuleBuffer();
  return;
}

sceSifLoadStartModuleBuffer() {
  _sceSifLoadModuleBuffer();
  return;
}

static _sceSifLoadModule() {
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = param_4;
  uVar11 = param_5;
  lVar7 = _lf_bind();
  uVar5 = 0xffff0000;
  if (-1 < lVar7) {
    lVar7 = _lf_version();
    if (lVar7 == 0) {
      uVar9 = 0xfc;
      strncpy(&DAT_004062c8,param_1,0xfc);
      DAT_004063c3 = 0;
      if (param_3 == (ulong *)0x0) {
        DAT_004063c4 = 0;
        _senddata = 0;
      }
      else if ((long)param_2 < 0xfd) {
        memcpy(&DAT_004063c4,param_3,param_2);
        _senddata = (undefined4)param_2;
      }
      else {
        puVar8 = (ulong *)&DAT_004063c4;
        if ((((uint)param_3 | 0x4063c4) & 7) == 0) {
          puVar6 = param_3 + 0x1c;
          do {
            uVar9 = *param_3;
            uVar10 = param_3[1];
            uVar11 = param_3[2];
            param_6 = param_3[3];
            *puVar8 = uVar9;
            puVar8[1] = uVar10;
            puVar8[2] = uVar11;
            puVar8[3] = param_6;
            param_3 = param_3 + 4;
            puVar8 = puVar8 + 4;
          } while (param_3 != puVar6);
        }
        else {
          puVar6 = param_3 + 0x1c;
          do {
            uVar1 = (int)param_3 + 7U & 7;
            uVar2 = (uint)param_3 & 7;
            uVar9 = (*(long *)(((int)param_3 + 7U) - uVar1) << (7 - uVar1) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)param_3 - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0xfU & 7;
            uVar2 = (uint)(param_3 + 1) & 7;
            uVar10 = (*(long *)(((int)param_3 + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)(param_3 + 1) - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0x17U & 7;
            uVar2 = (uint)(param_3 + 2) & 7;
            uVar11 = (*(long *)(((int)param_3 + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                     uVar11 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)(param_3 + 2) - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0x1fU & 7;
            uVar2 = (uint)(param_3 + 3) & 7;
            param_6 = (*(long *)(((int)param_3 + 0x1fU) - uVar1) << (7 - uVar1) * 8 |
                      param_6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((int)(param_3 + 3) - uVar2) >> uVar2 * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar8 + 7) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar8 + 7) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar9 >> (7 - uVar1) * 8;
            uVar1 = (uint)puVar8 & 7;
            *(ulong *)((int)puVar8 - uVar1) =
                 uVar9 << uVar1 * 8 |
                 *(ulong *)((int)puVar8 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar8 + 0xf) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar8 + 0xf) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar10 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar8 + 1) & 7;
            puVar3 = (ulong *)((int)(puVar8 + 1) - uVar1);
            *puVar3 = uVar10 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar8 + 0x17) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar8 + 0x17) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar11 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar8 + 2) & 7;
            puVar3 = (ulong *)((int)(puVar8 + 2) - uVar1);
            *puVar3 = uVar11 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar8 + 0x1f) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar8 + 0x1f) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | param_6 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar8 + 3) & 7;
            puVar3 = (ulong *)((int)(puVar8 + 3) - uVar1);
            *puVar3 = param_6 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            param_3 = param_3 + 4;
            puVar8 = puVar8 + 4;
          } while (param_3 != puVar6);
        }
        uVar1 = (int)param_3 + 7U & 7;
        uVar2 = (uint)param_3 & 7;
        uVar9 = (*(long *)(((int)param_3 + 7U) - uVar1) << (7 - uVar1) * 8 |
                uVar9 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)param_3 - uVar2) >> uVar2 * 8;
        uVar1 = (int)param_3 + 0xfU & 7;
        uVar2 = (uint)(param_3 + 1) & 7;
        uVar10 = (*(long *)(((int)param_3 + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                 uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)(param_3 + 1) - uVar2) >> uVar2 * 8;
        uVar1 = (int)param_3 + 0x17U & 7;
        uVar2 = (uint)(param_3 + 2) & 7;
        uVar11 = (*(long *)(((int)param_3 + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                 uVar11 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)(param_3 + 2) - uVar2) >> uVar2 * 8;
        uVar1 = (int)param_3 + 0x1bU & 3;
        uVar2 = (uint)(param_3 + 3) & 3;
        uVar1 = (*(int *)(((int)param_3 + 0x1bU) - uVar1) << (3 - uVar1) * 8 |
                (uint)param_6 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                *(uint *)((int)(param_3 + 3) - uVar2) >> uVar2 * 8;
        uVar2 = (uint)(undefined1 *)((int)puVar8 + 7) & 7;
        puVar6 = (ulong *)((undefined1 *)((int)puVar8 + 7) + -uVar2);
        *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        uVar2 = (uint)puVar8 & 7;
        *(ulong *)((int)puVar8 - uVar2) =
             uVar9 << uVar2 * 8 |
             *(ulong *)((int)puVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (uint)(undefined1 *)((int)puVar8 + 0xf) & 7;
        puVar6 = (ulong *)((undefined1 *)((int)puVar8 + 0xf) + -uVar2);
        *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
        uVar2 = (uint)(puVar8 + 1) & 7;
        puVar6 = (ulong *)((int)(puVar8 + 1) - uVar2);
        *puVar6 = uVar10 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (uint)(undefined1 *)((int)puVar8 + 0x17) & 7;
        puVar6 = (ulong *)((undefined1 *)((int)puVar8 + 0x17) + -uVar2);
        *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        uVar2 = (uint)(puVar8 + 2) & 7;
        puVar6 = (ulong *)((int)(puVar8 + 2) - uVar2);
        *puVar6 = uVar11 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = (uint)(undefined1 *)((int)puVar8 + 0x1b) & 3;
        puVar4 = (uint *)((undefined1 *)((int)puVar8 + 0x1b) + -uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | uVar1 >> (3 - uVar2) * 8;
        *(uint *)(puVar8 + 3) = uVar1;
        _senddata = 0xfc;
      }
      lVar7 = sceSifCallRpc(0x4064c0,param_5,0,0x4062c0,0x200,0x4062c0,8,0);
      uVar5 = _senddata;
      if (lVar7 < 0) {
        uVar5 = 0xfffeffff;
      }
      else {
        *(undefined4 *)param_4 = DAT_004062c4;
      }
    }
    else {
      uVar5 = 0xfffefffc;
    }
  }
  return uVar5;
}

sceSifLoadModule() {
  _sceSifLoadModule();
  return;
}

sceSifLoadStartModule() {
  _sceSifLoadModule();
  return;
}

static _sceSifLoadElfPart() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = _lf_bind();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = _lf_version();
    if (lVar2 == 0) {
      strncpy(&DAT_004062c8,param_1,0xfc);
      DAT_004063c3 = 0;
      strncpy(&DAT_004063c4,param_2,0xfc);
      DAT_004064bf = 0;
      lVar2 = sceSifCallRpc(0x4064c0,param_4,0,0x4062c0,0x200,0x4062c0,0x10,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else if (_senddata == 0) {
        uVar1 = 0xfffefffd;
      }
      else {
        *param_3 = _senddata;
        uVar1 = 0;
        param_3[1] = DAT_004062c4;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

sceSifLoadElfPart() {
  _sceSifLoadElfPart();
  return;
}

sceSifLoadElf() {
  _sceSifLoadElfPart(param_1,0x353588,param_2,1);
  return;
}

sceSifGetIopAddr() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = _lf_bind();
  if (lVar2 < 0) {
    return 0xffff0000;
  }
  if (param_3 < 3) {
    DAT_004062c4 = (undefined4)param_3;
    _senddata = param_1;
    lVar2 = sceSifCallRpc(0x4064c0,3,0,0x4062c0,0x20,0x4062c0,0x20,0);
    if (lVar2 < 0) {
      return 0xfffeffff;
    }
    if (param_3 == 0) {
      *(undefined *)param_2 = (undefined)_senddata;
    }
    else if (param_3 == 1) {
      *(undefined2 *)param_2 = (undefined2)_senddata;
    }
    else {
      if (param_3 != 2) goto LAB_0022b224;
      *param_2 = _senddata;
    }
    uVar1 = 0;
  }
  else {
LAB_0022b224:
    uVar1 = 0xfffefffe;
  }
  return uVar1;
}

sceSifSetIopAddr() {
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = _lf_bind();
  if (lVar2 < 0) {
    uVar1 = 0xffff0000;
  }
  else {
    DAT_004062c4 = (undefined4)param_3;
    if (param_3 == 0) {
      _DAT_004062c8 = _DAT_004062c8 & 0xffffff00 | (uint)*(byte *)param_2;
    }
    else if (param_3 == 1) {
      _DAT_004062c8 = _DAT_004062c8 & 0xffff0000 | (uint)*(ushort *)param_2;
    }
    else {
      if (param_3 != 2) {
        _senddata = param_1;
        return 0xfffefffe;
      }
      _DAT_004062c8 = *param_2;
    }
    _senddata = param_1;
    lVar2 = sceSifCallRpc(0x4064c0,2,0,0x4062c0,0x20,0x4062c0,0x10,0);
    uVar1 = 0xfffeffff;
    if (-1 < lVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
