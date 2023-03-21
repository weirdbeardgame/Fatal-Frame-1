// STATUS: NOT STARTED

SPRT_DAT test_tex0[0] = {
};
SPRT_DAT test_tex1[0] = {
};

void LayoutTestInit() {
  FileLoadB(0x10d,0x4300000);
  return;
}

void LayoutTestMain() {
  SetSprFile(0x4300000);
  LayoutTestDisp();
  if (*key_now[5] != 0) {
    OutGameModeChange(4);
    return;
  }
  return;
}

void LayoutTestDisp() {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)&test_tex0);
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_00341148);
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_00341168);
  ds.att = ds.att | 1;
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_00341188);
  ds.att = ds.att | 2;
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_003411a8);
  ds.att = ds.att | 3;
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&test_tex1);
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_003411e8);
  DispSprD(&ds);
  NumberDisp(0xeb,0x140,100,'\0',0xff,0xff,0xff,0x80,0,5,0);
  NumberDisp(0xeb,0x140,0x96,'\0',0xff,0xff,0xff,0x80,0,5,1);
  NumberDisp(0xeb,0x140,200,'\0',0xff,0xff,0xff,0x80,0,5,2);
  return;
}
