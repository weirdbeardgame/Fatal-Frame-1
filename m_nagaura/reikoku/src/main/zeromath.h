#ifndef _ZEROMATH
#define _ZEROMATH
#ifdef __SIZEOF_INT128__

#include <stdint.h>

typedef unsigned long u_long;
typedef unsigned int u_int;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned __int128 u_long128;

typedef struct {
  float x;
  float y;
  float z;
  float w;
} sceVu0FVECTOR;

typedef struct {
  sceVu0FVECTOR matrix[4];
} sceVu0FMATRIX;

#endif
#endif