// STATUS: NOT STARTED

#ifndef LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H
#define LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H

typedef char *__gnuc_va_list;
typedef __sFILE FILE;
typedef __gnuc_va_list va_list;
int vfprintf(FILE *fp, char *fmt0, va_list ap);
int _vfprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap);

#endif // LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H
