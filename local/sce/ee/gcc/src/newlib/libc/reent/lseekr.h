// STATUS: NOT STARTED

#ifndef LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_LSEEKR_H
#define LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_LSEEKR_H

typedef long int _off_t;
typedef long int off_t;
_off_t _lseek_r(_reent *ptr, int fd, off_t pos, int whence);

#endif // LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_REENT_LSEEKR_H
