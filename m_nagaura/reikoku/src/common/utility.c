// STATUS: NOT STARTED


char* StrToLower(char *str) {
	char *strp;
	
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *str;
  pcVar4 = str;
  cVar2 = *str;
  while (cVar2 != '\0') {
    iVar3 = tolower((int)cVar1);
    *pcVar4 = (char)iVar3;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    cVar2 = cVar1;
  }
  return str;
}
