# 1 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
# 25 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 1 3
# 10 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_ansi.h" 1 3
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_ansi.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\newlib.h" 1 3
# 14 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\newlib.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_newlib_version.h" 1 3
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\newlib.h" 2 3
# 16 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_ansi.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\config.h" 1 3



# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\ieeefp.h" 1 3
# 5 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\config.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 1 3
# 6 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\config.h" 2 3
# 17 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_ansi.h" 2 3
# 11 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 1 3
# 13 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_ansi.h" 1 3
# 14 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4

# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int wchar_t;
# 426 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 1 3
# 24 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_types.h" 1 3






# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3
# 27 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 8 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_types.h" 2 3
# 25 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\lock.h" 1 3





typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 26 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef unsigned int __size_t;
# 145 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef signed int _ssize_t;
# 156 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 357 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;



typedef unsigned long __clock_t;


typedef long __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 2 3






typedef unsigned long __ULong;
# 38 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
# 766 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\cdefs.h" 1 3
# 45 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\cdefs.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 46 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\cdefs.h" 2 3
# 13 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3




# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 18 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3


# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_locale.h" 1 3
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_locale.h" 3
struct __locale_t;
typedef struct __locale_t *locale_t;
# 21 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void * restrict, const void * restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);






char *strtok_r (char *restrict, const char *restrict, char **restrict);


int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);


void explicit_bzero (void *, size_t);
int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


int ffs (int);
char *index (const char *, int);


void * memccpy (void * restrict, const void * restrict, int, size_t);
# 86 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 3
char *rindex (const char *, int);


char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);


int strcasecmp (const char *, const char *);






char *strdup (const char *);

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t);

char *_strndup_r (struct _reent *, const char *, size_t);
# 121 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 3
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


int strncasecmp (const char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);
# 192 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 3
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\string.h" 1 3
# 193 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\string.h" 2 3


# 26 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2

# 1 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h" 1
# 42 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 1 3 4
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 1 3 4
# 13 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 1 3 4
# 49 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 201 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 1 3 4
# 20 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 2 3 4
# 43 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h" 2
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 44 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h" 2
# 54 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"

# 54 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
typedef struct {
  uint32_t api;
  uint32_t kernel;
} osVersion_t;


typedef enum {
  osKernelInactive = 0,
  osKernelReady = 1,
  osKernelRunning = 2,
  osKernelLocked = 3,
  osKernelSuspended = 4,
  osKernelError = -1,
  osKernelReserved = 0x7FFFFFFFU
} osKernelState_t;


typedef enum {
  osThreadInactive = 0,
  osThreadReady = 1,
  osThreadRunning = 2,
  osThreadBlocked = 3,
  osThreadTerminated = 4,
  osThreadError = -1,
  osThreadReserved = 0x7FFFFFFF
} osThreadState_t;


typedef enum {
  osPriorityNone = 0,
  osPriorityIdle = 1,
  osPriorityLow = 8,
  osPriorityLow1 = 8+1,
  osPriorityLow2 = 8+2,
  osPriorityLow3 = 8+3,
  osPriorityLow4 = 8+4,
  osPriorityLow5 = 8+5,
  osPriorityLow6 = 8+6,
  osPriorityLow7 = 8+7,
  osPriorityBelowNormal = 16,
  osPriorityBelowNormal1 = 16+1,
  osPriorityBelowNormal2 = 16+2,
  osPriorityBelowNormal3 = 16+3,
  osPriorityBelowNormal4 = 16+4,
  osPriorityBelowNormal5 = 16+5,
  osPriorityBelowNormal6 = 16+6,
  osPriorityBelowNormal7 = 16+7,
  osPriorityNormal = 24,
  osPriorityNormal1 = 24+1,
  osPriorityNormal2 = 24+2,
  osPriorityNormal3 = 24+3,
  osPriorityNormal4 = 24+4,
  osPriorityNormal5 = 24+5,
  osPriorityNormal6 = 24+6,
  osPriorityNormal7 = 24+7,
  osPriorityAboveNormal = 32,
  osPriorityAboveNormal1 = 32+1,
  osPriorityAboveNormal2 = 32+2,
  osPriorityAboveNormal3 = 32+3,
  osPriorityAboveNormal4 = 32+4,
  osPriorityAboveNormal5 = 32+5,
  osPriorityAboveNormal6 = 32+6,
  osPriorityAboveNormal7 = 32+7,
  osPriorityHigh = 40,
  osPriorityHigh1 = 40+1,
  osPriorityHigh2 = 40+2,
  osPriorityHigh3 = 40+3,
  osPriorityHigh4 = 40+4,
  osPriorityHigh5 = 40+5,
  osPriorityHigh6 = 40+6,
  osPriorityHigh7 = 40+7,
  osPriorityRealtime = 48,
  osPriorityRealtime1 = 48+1,
  osPriorityRealtime2 = 48+2,
  osPriorityRealtime3 = 48+3,
  osPriorityRealtime4 = 48+4,
  osPriorityRealtime5 = 48+5,
  osPriorityRealtime6 = 48+6,
  osPriorityRealtime7 = 48+7,
  osPriorityISR = 56,
  osPriorityError = -1,
  osPriorityReserved = 0x7FFFFFFF
} osPriority_t;


typedef void (*osThreadFunc_t) (void *argument);


typedef void (*osTimerFunc_t) (void *argument);


typedef enum {
  osTimerOnce = 0,
  osTimerPeriodic = 1
} osTimerType_t;
# 176 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
typedef enum {
  osOK = 0,
  osError = -1,
  osErrorTimeout = -2,
  osErrorResource = -3,
  osErrorParameter = -4,
  osErrorNoMemory = -5,
  osErrorISR = -6,
  osStatusReserved = 0x7FFFFFFF
} osStatus_t;



typedef void *osThreadId_t;


typedef void *osTimerId_t;


typedef void *osEventFlagsId_t;


typedef void *osMutexId_t;


typedef void *osSemaphoreId_t;


typedef void *osMemoryPoolId_t;


typedef void *osMessageQueueId_t;





typedef uint32_t TZ_ModuleId_t;




typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
  void *stack_mem;
  uint32_t stack_size;
  osPriority_t priority;
  TZ_ModuleId_t tz_module;
  uint32_t reserved;
} osThreadAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
} osTimerAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
} osEventFlagsAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
} osMutexAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
} osSemaphoreAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
  void *mp_mem;
  uint32_t mp_size;
} osMemoryPoolAttr_t;


typedef struct {
  const char *name;
  uint32_t attr_bits;
  void *cb_mem;
  uint32_t cb_size;
  void *mq_mem;
  uint32_t mq_size;
} osMessageQueueAttr_t;






osStatus_t osKernelInitialize (void);






osStatus_t osKernelGetInfo (osVersion_t *version, char *id_buf, uint32_t id_size);



osKernelState_t osKernelGetState (void);



osStatus_t osKernelStart (void);



int32_t osKernelLock (void);



int32_t osKernelUnlock (void);




int32_t osKernelRestoreLock (int32_t lock);



uint32_t osKernelSuspend (void);



void osKernelResume (uint32_t sleep_ticks);



uint32_t osKernelGetTickCount (void);



uint32_t osKernelGetTickFreq (void);



uint32_t osKernelGetSysTimerCount (void);



uint32_t osKernelGetSysTimerFreq (void);
# 349 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
osThreadId_t osThreadNew (osThreadFunc_t func, void *argument, const osThreadAttr_t *attr);




const char *osThreadGetName (osThreadId_t thread_id);



osThreadId_t osThreadGetId (void);




osThreadState_t osThreadGetState (osThreadId_t thread_id);




uint32_t osThreadGetStackSize (osThreadId_t thread_id);




uint32_t osThreadGetStackSpace (osThreadId_t thread_id);





osStatus_t osThreadSetPriority (osThreadId_t thread_id, osPriority_t priority);




osPriority_t osThreadGetPriority (osThreadId_t thread_id);



osStatus_t osThreadYield (void);




osStatus_t osThreadSuspend (osThreadId_t thread_id);




osStatus_t osThreadResume (osThreadId_t thread_id);




osStatus_t osThreadDetach (osThreadId_t thread_id);




osStatus_t osThreadJoin (osThreadId_t thread_id);


__attribute__((__noreturn__)) void osThreadExit (void);




osStatus_t osThreadTerminate (osThreadId_t thread_id);



uint32_t osThreadGetCount (void);





uint32_t osThreadEnumerate (osThreadId_t *thread_array, uint32_t array_items);
# 435 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
uint32_t osThreadFlagsSet (osThreadId_t thread_id, uint32_t flags);




uint32_t osThreadFlagsClear (uint32_t flags);



uint32_t osThreadFlagsGet (void);






uint32_t osThreadFlagsWait (uint32_t flags, uint32_t options, uint32_t timeout);







osStatus_t osDelay (uint32_t ticks);




osStatus_t osDelayUntil (uint32_t ticks);
# 475 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
osTimerId_t osTimerNew (osTimerFunc_t func, osTimerType_t type, void *argument, const osTimerAttr_t *attr);




const char *osTimerGetName (osTimerId_t timer_id);





osStatus_t osTimerStart (osTimerId_t timer_id, uint32_t ticks);




osStatus_t osTimerStop (osTimerId_t timer_id);




uint32_t osTimerIsRunning (osTimerId_t timer_id);




osStatus_t osTimerDelete (osTimerId_t timer_id);







osEventFlagsId_t osEventFlagsNew (const osEventFlagsAttr_t *attr);




const char *osEventFlagsGetName (osEventFlagsId_t ef_id);





uint32_t osEventFlagsSet (osEventFlagsId_t ef_id, uint32_t flags);





uint32_t osEventFlagsClear (osEventFlagsId_t ef_id, uint32_t flags);




uint32_t osEventFlagsGet (osEventFlagsId_t ef_id);







uint32_t osEventFlagsWait (osEventFlagsId_t ef_id, uint32_t flags, uint32_t options, uint32_t timeout);




osStatus_t osEventFlagsDelete (osEventFlagsId_t ef_id);







osMutexId_t osMutexNew (const osMutexAttr_t *attr);




const char *osMutexGetName (osMutexId_t mutex_id);





osStatus_t osMutexAcquire (osMutexId_t mutex_id, uint32_t timeout);




osStatus_t osMutexRelease (osMutexId_t mutex_id);




osThreadId_t osMutexGetOwner (osMutexId_t mutex_id);




osStatus_t osMutexDelete (osMutexId_t mutex_id);
# 588 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
osSemaphoreId_t osSemaphoreNew (uint32_t max_count, uint32_t initial_count, const osSemaphoreAttr_t *attr);




const char *osSemaphoreGetName (osSemaphoreId_t semaphore_id);





osStatus_t osSemaphoreAcquire (osSemaphoreId_t semaphore_id, uint32_t timeout);




osStatus_t osSemaphoreRelease (osSemaphoreId_t semaphore_id);




uint32_t osSemaphoreGetCount (osSemaphoreId_t semaphore_id);




osStatus_t osSemaphoreDelete (osSemaphoreId_t semaphore_id);
# 624 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
osMemoryPoolId_t osMemoryPoolNew (uint32_t block_count, uint32_t block_size, const osMemoryPoolAttr_t *attr);




const char *osMemoryPoolGetName (osMemoryPoolId_t mp_id);





void *osMemoryPoolAlloc (osMemoryPoolId_t mp_id, uint32_t timeout);





osStatus_t osMemoryPoolFree (osMemoryPoolId_t mp_id, void *block);




uint32_t osMemoryPoolGetCapacity (osMemoryPoolId_t mp_id);




uint32_t osMemoryPoolGetBlockSize (osMemoryPoolId_t mp_id);




uint32_t osMemoryPoolGetCount (osMemoryPoolId_t mp_id);




uint32_t osMemoryPoolGetSpace (osMemoryPoolId_t mp_id);




osStatus_t osMemoryPoolDelete (osMemoryPoolId_t mp_id);
# 676 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.h"
osMessageQueueId_t osMessageQueueNew (uint32_t msg_count, uint32_t msg_size, const osMessageQueueAttr_t *attr);




const char *osMessageQueueGetName (osMessageQueueId_t mq_id);







osStatus_t osMessageQueuePut (osMessageQueueId_t mq_id, const void *msg_ptr, uint8_t msg_prio, uint32_t timeout);







osStatus_t osMessageQueueGet (osMessageQueueId_t mq_id, void *msg_ptr, uint8_t *msg_prio, uint32_t timeout);




uint32_t osMessageQueueGetCapacity (osMessageQueueId_t mq_id);




uint32_t osMessageQueueGetMsgSize (osMessageQueueId_t mq_id);




uint32_t osMessageQueueGetCount (osMessageQueueId_t mq_id);




uint32_t osMessageQueueGetSpace (osMessageQueueId_t mq_id);




osStatus_t osMessageQueueReset (osMessageQueueId_t mq_id);




osStatus_t osMessageQueueDelete (osMessageQueueId_t mq_id);
# 28 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2
# 1 "Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 48 "Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 29 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 766 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 782 "Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 805 "Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 866 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 919 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 954 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  uint32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
# 1299 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}
# 1324 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}
# 2083 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 49 "Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 29 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2

# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 1
# 34 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2
# 56 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
# 1 "Inc/FreeRTOSConfig.h" 1
# 52 "Inc/FreeRTOSConfig.h"
  extern uint32_t SystemCoreClock;
# 57 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2


# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/projdefs.h" 1
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/projdefs.h"
typedef void (*TaskFunction_t)( void * );
# 60 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2


# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 1
# 45 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/deprecated_definitions.h" 1
# 46 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2






# 1 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h" 1
# 55 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
typedef uint32_t StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;





 typedef uint32_t TickType_t;
# 97 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
extern void vPortEnterCritical( void );
extern void vPortExitCritical( void );
# 117 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
 extern void vPortSuppressTicksAndSleep( TickType_t xExpectedIdleTime );
# 156 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
 void vPortValidateInterruptPriority( void );
# 169 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
inline __attribute__(( always_inline)) static BaseType_t xPortIsInsideInterrupt( void )
{
uint32_t ulCurrentInterrupt;
BaseType_t xReturn;


 __asm volatile( "mrs %0, ipsr" : "=r"( ulCurrentInterrupt ) :: "memory" );

 if( ulCurrentInterrupt == 0 )
 {
  xReturn = ( ( BaseType_t ) 0 );
 }
 else
 {
  xReturn = ( ( BaseType_t ) 1 );
 }

 return xReturn;
}



inline __attribute__(( always_inline)) static void vPortRaiseBASEPRI( void )
{
uint32_t ulNewBASEPRI;

 __asm volatile
 (
  "	mov %0, %1												\n"
  "	msr basepri, %0											\n"
  "	isb														\n"
  "	dsb														\n"
  :"=r" (ulNewBASEPRI) : "i" ( ( 5 << (8 - 4) ) ) : "memory"
 );
}



inline __attribute__(( always_inline)) static uint32_t ulPortRaiseBASEPRI( void )
{
uint32_t ulOriginalBASEPRI, ulNewBASEPRI;

 __asm volatile
 (
  "	mrs %0, basepri											\n"
  "	mov %1, %2												\n"
  "	msr basepri, %1											\n"
  "	isb														\n"
  "	dsb														\n"
  :"=r" (ulOriginalBASEPRI), "=r" (ulNewBASEPRI) : "i" ( ( 5 << (8 - 4) ) ) : "memory"
 );



 return ulOriginalBASEPRI;
}


inline __attribute__(( always_inline)) static void vPortSetBASEPRI( uint32_t ulNewMaskValue )
{
 __asm volatile
 (
  "	msr basepri, %0	" :: "r" ( ulNewMaskValue ) : "memory"
 );
}
# 53 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2
# 91 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/mpu_wrappers.h" 1
# 92 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2
# 102 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
 StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters ) ;



typedef struct HeapRegion
{
 uint8_t *pucStartAddress;
 size_t xSizeInBytes;
} HeapRegion_t;
# 123 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
void vPortDefineHeapRegions( const HeapRegion_t * const pxHeapRegions ) ;





void *pvPortMalloc( size_t xSize ) ;
void vPortFree( void *pv ) ;
void vPortInitialiseBlocks( void ) ;
size_t xPortGetFreeHeapSize( void ) ;
size_t xPortGetMinimumEverFreeHeapSize( void ) ;





BaseType_t xPortStartScheduler( void ) ;






void vPortEndScheduler( void ) ;
# 63 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2
# 948 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
struct xSTATIC_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 4 ];
};
typedef struct xSTATIC_LIST_ITEM StaticListItem_t;


struct xSTATIC_MINI_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 2 ];
};
typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;


typedef struct xSTATIC_LIST
{
 UBaseType_t uxDummy1;
 void *pvDummy2;
 StaticMiniListItem_t xDummy3;
} StaticList_t;
# 984 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_TCB
{
 void *pxDummy1;



 StaticListItem_t xDummy3[ 2 ];
 UBaseType_t uxDummy5;
 void *pxDummy6;
 uint8_t ucDummy7[ ( 16 ) ];







  UBaseType_t uxDummy10[ 2 ];


  UBaseType_t uxDummy12[ 2 ];
# 1019 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
  uint32_t ulDummy18;
  uint8_t ucDummy19;


  uint8_t uxDummy20;






} StaticTask_t;
# 1046 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_QUEUE
{
 void *pvDummy1[ 3 ];

 union
 {
  void *pvDummy2;
  UBaseType_t uxDummy2;
 } u;

 StaticList_t xDummy3[ 2 ];
 UBaseType_t uxDummy4[ 3 ];
 uint8_t ucDummy5[ 2 ];


  uint8_t ucDummy6;







  UBaseType_t uxDummy8;
  uint8_t ucDummy9;


} StaticQueue_t;
typedef StaticQueue_t StaticSemaphore_t;
# 1090 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_EVENT_GROUP
{
 TickType_t xDummy1;
 StaticList_t xDummy2;


  UBaseType_t uxDummy3;



   uint8_t ucDummy4;


} StaticEventGroup_t;
# 1119 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_TIMER
{
 void *pvDummy1;
 StaticListItem_t xDummy2;
 TickType_t xDummy3;
 UBaseType_t uxDummy4;
 void *pvDummy5[ 2 ];

  UBaseType_t uxDummy6;



  uint8_t ucDummy7;


} StaticTimer_t;
# 1150 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_STREAM_BUFFER
{
 size_t uxDummy1[ 4 ];
 void * pvDummy2[ 3 ];
 uint8_t ucDummy3;

  UBaseType_t uxDummy4;

} StaticStreamBuffer_t;


typedef StaticStreamBuffer_t StaticMessageBuffer_t;
# 31 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h" 1
# 36 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h" 1
# 139 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
struct xLIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
 void * pvOwner;
 void * pvContainer;

};
typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;




typedef struct xLIST
{

 volatile UBaseType_t uxNumberOfItems;
 ListItem_t * pxIndex;
 MiniListItem_t xListEnd;

} List_t;
# 344 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInitialise( List_t * const pxList ) ;
# 355 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInitialiseItem( ListItem_t * const pxItem ) ;
# 368 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInsert( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 389 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInsertEnd( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 404 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
UBaseType_t uxListRemove( ListItem_t * const pxItemToRemove ) ;
# 37 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h" 2
# 61 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
typedef void * TaskHandle_t;





typedef BaseType_t (*TaskHookFunction_t)( void * );


typedef enum
{
 eRunning = 0,
 eReady,
 eBlocked,
 eSuspended,
 eDeleted,
 eInvalid
} eTaskState;


typedef enum
{
 eNoAction = 0,
 eSetBits,
 eIncrement,
 eSetValueWithOverwrite,
 eSetValueWithoutOverwrite
} eNotifyAction;




typedef struct xTIME_OUT
{
 BaseType_t xOverflowCount;
 TickType_t xTimeOnEntering;
} TimeOut_t;




typedef struct xMEMORY_REGION
{
 void *pvBaseAddress;
 uint32_t ulLengthInBytes;
 uint32_t ulParameters;
} MemoryRegion_t;




typedef struct xTASK_PARAMETERS
{
 TaskFunction_t pvTaskCode;
 const char * const pcName;
 uint16_t usStackDepth;
 void *pvParameters;
 UBaseType_t uxPriority;
 StackType_t *puxStackBuffer;
 MemoryRegion_t xRegions[ 1 ];



} TaskParameters_t;



typedef struct xTASK_STATUS
{
 TaskHandle_t xHandle;
 const char *pcTaskName;
 UBaseType_t xTaskNumber;
 eTaskState eCurrentState;
 UBaseType_t uxCurrentPriority;
 UBaseType_t uxBasePriority;
 uint32_t ulRunTimeCounter;
 StackType_t *pxStackBase;
 uint16_t usStackHighWaterMark;
} TaskStatus_t;


typedef enum
{
 eAbortSleep = 0,
 eStandardSleep,
 eNoTasksWaitingTimeout
} eSleepModeStatus;
# 321 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
 BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,
       const char * const pcName,
       const uint16_t usStackDepth,
       void * const pvParameters,
       UBaseType_t uxPriority,
       TaskHandle_t * const pxCreatedTask ) ;
# 437 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
 TaskHandle_t xTaskCreateStatic( TaskFunction_t pxTaskCode,
         const char * const pcName,
         const uint32_t ulStackDepth,
         void * const pvParameters,
         UBaseType_t uxPriority,
         StackType_t * const puxStackBuffer,
         StaticTask_t * const pxTaskBuffer ) ;
# 656 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskAllocateMPURegions( TaskHandle_t xTask, const MemoryRegion_t * const pxRegions ) ;
# 697 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelete( TaskHandle_t xTaskToDelete ) ;
# 749 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelay( const TickType_t xTicksToDelay ) ;
# 808 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelayUntil( TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement ) ;
# 833 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskAbortDelay( TaskHandle_t xTask ) ;
# 880 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskPriorityGet( TaskHandle_t xTask ) ;







UBaseType_t uxTaskPriorityGetFromISR( TaskHandle_t xTask ) ;
# 906 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
eTaskState eTaskGetState( TaskHandle_t xTask ) ;
# 962 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskGetInfo( TaskHandle_t xTask, TaskStatus_t *pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState ) ;
# 1004 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPrioritySet( TaskHandle_t xTask, UBaseType_t uxNewPriority ) ;
# 1055 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSuspend( TaskHandle_t xTaskToSuspend ) ;
# 1104 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskResume( TaskHandle_t xTaskToResume ) ;
# 1133 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskResumeFromISR( TaskHandle_t xTaskToResume ) ;
# 1166 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskStartScheduler( void ) ;
# 1222 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskEndScheduler( void ) ;
# 1273 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSuspendAll( void ) ;
# 1327 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskResumeAll( void ) ;
# 1342 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TickType_t xTaskGetTickCount( void ) ;
# 1358 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TickType_t xTaskGetTickCountFromISR( void ) ;
# 1372 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetNumberOfTasks( void ) ;
# 1385 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
char *pcTaskGetName( TaskHandle_t xTaskToQuery ) ;
# 1401 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TaskHandle_t xTaskGetHandle( const char *pcNameToQuery ) ;
# 1422 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetStackHighWaterMark( TaskHandle_t xTask ) ;
# 1475 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskCallApplicationTaskHook( TaskHandle_t xTask, void *pvParameter ) ;
# 1484 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TaskHandle_t xTaskGetIdleTaskHandle( void ) ;
# 1583 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetSystemState( TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime ) ;
# 1630 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskList( char * pcWriteBuffer ) ;
# 1684 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskGetRunTimeStats( char *pcWriteBuffer ) ;
# 1765 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskGenericNotify( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue ) ;
# 1856 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskGenericNotifyFromISR( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1933 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskNotifyWait( uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t *pulNotificationValue, TickType_t xTicksToWait ) ;
# 2034 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskNotifyGiveFromISR( TaskHandle_t xTaskToNotify, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 2103 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
uint32_t ulTaskNotifyTake( BaseType_t xClearCountOnExit, TickType_t xTicksToWait ) ;
# 2119 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskNotifyStateClear( TaskHandle_t xTask );
# 2140 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskIncrementTick( void ) ;
# 2173 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPlaceOnEventList( List_t * const pxEventList, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnUnorderedEventList( List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait ) ;
# 2187 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPlaceOnEventListRestricted( List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
# 2213 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskRemoveFromEventList( const List_t * const pxEventList ) ;
void vTaskRemoveFromUnorderedEventList( ListItem_t * pxEventListItem, const TickType_t xItemValue ) ;
# 2224 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSwitchContext( void ) ;





TickType_t uxTaskResetEventItemValue( void ) ;




TaskHandle_t xTaskGetCurrentTaskHandle( void ) ;




void vTaskSetTimeOutState( TimeOut_t * const pxTimeOut ) ;





BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait ) ;





void vTaskMissedYield( void ) ;





BaseType_t xTaskGetSchedulerState( void ) ;





BaseType_t xTaskPriorityInherit( TaskHandle_t const pxMutexHolder ) ;





BaseType_t xTaskPriorityDisinherit( TaskHandle_t const pxMutexHolder ) ;
# 2280 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPriorityDisinheritAfterTimeout( TaskHandle_t const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask ) ;




UBaseType_t uxTaskGetTaskNumber( TaskHandle_t xTask ) ;





void vTaskSetTaskNumber( TaskHandle_t xTask, const UBaseType_t uxHandle ) ;
# 2301 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskStepTick( const TickType_t xTicksToJump ) ;
# 2317 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
eSleepModeStatus eTaskConfirmSleepModeStatus( void ) ;





void *pvTaskIncrementMutexHeldCount( void ) ;





void vTaskInternalSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
# 32 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h" 1
# 36 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h" 1
# 38 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h" 1
# 39 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h" 2
# 76 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
typedef void * TimerHandle_t;




typedef void (*TimerCallbackFunction_t)( TimerHandle_t xTimer );





typedef void (*PendedFunction_t)( void *, uint32_t );
# 227 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
 TimerHandle_t xTimerCreate( const char * const pcTimerName,
        const TickType_t xTimerPeriodInTicks,
        const UBaseType_t uxAutoReload,
        void * const pvTimerID,
        TimerCallbackFunction_t pxCallbackFunction ) ;
# 357 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
 TimerHandle_t xTimerCreateStatic( const char * const pcTimerName,
          const TickType_t xTimerPeriodInTicks,
          const UBaseType_t uxAutoReload,
          void * const pvTimerID,
          TimerCallbackFunction_t pxCallbackFunction,
          StaticTimer_t *pxTimerBuffer ) ;
# 385 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
void *pvTimerGetTimerID( const TimerHandle_t xTimer ) ;
# 406 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
void vTimerSetTimerID( TimerHandle_t xTimer, void *pvNewID ) ;
# 443 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
BaseType_t xTimerIsTimerActive( TimerHandle_t xTimer ) ;







TaskHandle_t xTimerGetTimerDaemonTaskHandle( void ) ;
# 1186 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
BaseType_t xTimerPendFunctionCallFromISR( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1220 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
BaseType_t xTimerPendFunctionCall( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, TickType_t xTicksToWait ) ;
# 1231 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
const char * pcTimerGetName( TimerHandle_t xTimer ) ;
# 1242 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
TickType_t xTimerGetPeriod( TimerHandle_t xTimer ) ;
# 1257 "Middlewares/Third_Party/FreeRTOS/Source/include/timers.h"
TickType_t xTimerGetExpiryTime( TimerHandle_t xTimer ) ;





BaseType_t xTimerCreateTimerTask( void ) ;
BaseType_t xTimerGenericCommand( TimerHandle_t xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait ) ;


 void vTimerSetTimerNumber( TimerHandle_t xTimer, UBaseType_t uxTimerNumber ) ;
 UBaseType_t uxTimerGetTimerNumber( TimerHandle_t xTimer ) ;
# 37 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h" 2
# 81 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
typedef void * EventGroupHandle_t;
# 91 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
typedef TickType_t EventBits_t;
# 146 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
 EventGroupHandle_t xEventGroupCreate( void ) ;
# 199 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
 EventGroupHandle_t xEventGroupCreateStatic( StaticEventGroup_t *pxEventGroupBuffer ) ;
# 294 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
EventBits_t xEventGroupWaitBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToWaitFor, const BaseType_t xClearOnExit, const BaseType_t xWaitForAllBits, TickType_t xTicksToWait ) ;
# 351 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
EventBits_t xEventGroupClearBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToClear ) ;
# 407 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
 BaseType_t xEventGroupClearBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet ) ;
# 484 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
EventBits_t xEventGroupSetBits( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet ) ;
# 559 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
 BaseType_t xEventGroupSetBitsFromISR( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 688 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
EventBits_t xEventGroupSync( EventGroupHandle_t xEventGroup, const EventBits_t uxBitsToSet, const EventBits_t uxBitsToWaitFor, TickType_t xTicksToWait ) ;
# 724 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
EventBits_t xEventGroupGetBitsFromISR( EventGroupHandle_t xEventGroup ) ;
# 738 "Middlewares/Third_Party/FreeRTOS/Source/include/event_groups.h"
void vEventGroupDelete( EventGroupHandle_t xEventGroup ) ;


void vEventGroupSetBitsCallback( void *pvEventGroup, const uint32_t ulBitsToSet ) ;
void vEventGroupClearBitsCallback( void *pvEventGroup, const uint32_t ulBitsToClear ) ;



 UBaseType_t uxEventGroupGetNumber( void* xEventGroup ) ;
 void vEventGroupSetNumber( void* xEventGroup, UBaseType_t uxEventGroupNumber ) ;
# 33 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/semphr.h" 1
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/semphr.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h" 1
# 46 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
typedef void * QueueHandle_t;






typedef void * QueueSetHandle_t;






typedef void * QueueSetMemberHandle_t;
# 648 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueGenericSend( QueueHandle_t xQueue, const void * const pvItemToQueue, TickType_t xTicksToWait, const BaseType_t xCopyPosition ) ;
# 742 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueuePeek( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 775 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueuePeekFromISR( QueueHandle_t xQueue, void * const pvBuffer ) ;
# 866 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueReceive( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 881 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
UBaseType_t uxQueueMessagesWaiting( const QueueHandle_t xQueue ) ;
# 898 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
UBaseType_t uxQueueSpacesAvailable( const QueueHandle_t xQueue ) ;
# 912 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
void vQueueDelete( QueueHandle_t xQueue ) ;
# 1293 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueGenericSendFromISR( QueueHandle_t xQueue, const void * const pvItemToQueue, BaseType_t * const pxHigherPriorityTaskWoken, const BaseType_t xCopyPosition ) ;
BaseType_t xQueueGiveFromISR( QueueHandle_t xQueue, BaseType_t * const pxHigherPriorityTaskWoken ) ;
# 1383 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueReceiveFromISR( QueueHandle_t xQueue, void * const pvBuffer, BaseType_t * const pxHigherPriorityTaskWoken ) ;





BaseType_t xQueueIsQueueEmptyFromISR( const QueueHandle_t xQueue ) ;
BaseType_t xQueueIsQueueFullFromISR( const QueueHandle_t xQueue ) ;
UBaseType_t uxQueueMessagesWaitingFromISR( const QueueHandle_t xQueue ) ;
# 1402 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueCRSendFromISR( QueueHandle_t xQueue, const void *pvItemToQueue, BaseType_t xCoRoutinePreviouslyWoken );
BaseType_t xQueueCRReceiveFromISR( QueueHandle_t xQueue, void *pvBuffer, BaseType_t *pxTaskWoken );
BaseType_t xQueueCRSend( QueueHandle_t xQueue, const void *pvItemToQueue, TickType_t xTicksToWait );
BaseType_t xQueueCRReceive( QueueHandle_t xQueue, void *pvBuffer, TickType_t xTicksToWait );






QueueHandle_t xQueueCreateMutex( const uint8_t ucQueueType ) ;
QueueHandle_t xQueueCreateMutexStatic( const uint8_t ucQueueType, StaticQueue_t *pxStaticQueue ) ;
QueueHandle_t xQueueCreateCountingSemaphore( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount ) ;
QueueHandle_t xQueueCreateCountingSemaphoreStatic( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount, StaticQueue_t *pxStaticQueue ) ;
BaseType_t xQueueSemaphoreTake( QueueHandle_t xQueue, TickType_t xTicksToWait ) ;
void* xQueueGetMutexHolder( QueueHandle_t xSemaphore ) ;
void* xQueueGetMutexHolderFromISR( QueueHandle_t xSemaphore ) ;





BaseType_t xQueueTakeMutexRecursive( QueueHandle_t xMutex, TickType_t xTicksToWait ) ;
BaseType_t xQueueGiveMutexRecursive( QueueHandle_t pxMutex ) ;
# 1456 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
 void vQueueAddToRegistry( QueueHandle_t xQueue, const char *pcName ) ;
# 1470 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
 void vQueueUnregisterQueue( QueueHandle_t xQueue ) ;
# 1485 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
 const char *pcQueueGetName( QueueHandle_t xQueue ) ;
# 1494 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
 QueueHandle_t xQueueGenericCreate( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, const uint8_t ucQueueType ) ;
# 1503 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
 QueueHandle_t xQueueGenericCreateStatic( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, uint8_t *pucQueueStorage, StaticQueue_t *pxStaticQueue, const uint8_t ucQueueType ) ;
# 1554 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
QueueSetHandle_t xQueueCreateSet( const UBaseType_t uxEventQueueLength ) ;
# 1578 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueAddToSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1597 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
BaseType_t xQueueRemoveFromSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1633 "Middlewares/Third_Party/FreeRTOS/Source/include/queue.h"
QueueSetMemberHandle_t xQueueSelectFromSet( QueueSetHandle_t xQueueSet, const TickType_t xTicksToWait ) ;




QueueSetMemberHandle_t xQueueSelectFromSetFromISR( QueueSetHandle_t xQueueSet ) ;


void vQueueWaitForMessageRestricted( QueueHandle_t xQueue, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
BaseType_t xQueueGenericReset( QueueHandle_t xQueue, BaseType_t xNewQueue ) ;
void vQueueSetQueueNumber( QueueHandle_t xQueue, UBaseType_t uxQueueNumber ) ;
UBaseType_t uxQueueGetQueueNumber( QueueHandle_t xQueue ) ;
uint8_t ucQueueGetQueueType( QueueHandle_t xQueue ) ;
# 36 "Middlewares/Third_Party/FreeRTOS/Source/include/semphr.h" 2

typedef QueueHandle_t SemaphoreHandle_t;
# 34 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 2
# 91 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
typedef struct {
  osTimerFunc_t func;
  void *arg;
} TimerCallback_t;


static osKernelState_t KernelState;
# 135 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
osStatus_t osKernelInitialize (void) {
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else {
    if (KernelState == osKernelInactive) {



      KernelState = osKernelReady;
      stat = osOK;
    } else {
      stat = osError;
    }
  }

  return (stat);
}

osStatus_t osKernelGetInfo (osVersion_t *version, char *id_buf, uint32_t id_size) {

  if (version != 
# 158 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                ((void *)0)
# 158 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                    ) {
    version->api = (((uint32_t)10 * 10000000UL) | ((uint32_t)0 * 10000UL) | ((uint32_t)1 * 1UL));
    version->kernel = (((uint32_t)10 * 10000000UL) | ((uint32_t)0 * 10000UL) | ((uint32_t)1 * 1UL));
  }

  if ((id_buf != 
# 163 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                ((void *)0)
# 163 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                    ) && (id_size != 0U)) {
    if (id_size > sizeof("FreeRTOS V10.0.1")) {
      id_size = sizeof("FreeRTOS V10.0.1");
    }
    memcpy(id_buf, "FreeRTOS V10.0.1", id_size);
  }

  return (osOK);
}

osKernelState_t osKernelGetState (void) {
  osKernelState_t state;

  switch (xTaskGetSchedulerState()) {
    case ( ( BaseType_t ) 2 ):
      state = osKernelRunning;
      break;

    case ( ( BaseType_t ) 0 ):
      state = osKernelLocked;
      break;

    case ( ( BaseType_t ) 1 ):
    default:
      if (KernelState == osKernelReady) {
        state = osKernelReady;
      } else {
        state = osKernelInactive;
      }
      break;
  }

  return (state);
}

osStatus_t osKernelStart (void) {
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else {
    if (KernelState == osKernelReady) {
      KernelState = osKernelRunning;
      vTaskStartScheduler();
      stat = osOK;
    } else {
      stat = osError;
    }
  }

  return (stat);
}

int32_t osKernelLock (void) {
  int32_t lock;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    lock = (int32_t)osErrorISR;
  }
  else {
    switch (xTaskGetSchedulerState()) {
      case ( ( BaseType_t ) 0 ):
        lock = 1;
        break;

      case ( ( BaseType_t ) 2 ):
        vTaskSuspendAll();
        lock = 0;
        break;

      case ( ( BaseType_t ) 1 ):
      default:
        lock = (int32_t)osError;
        break;
    }
  }

  return (lock);
}

int32_t osKernelUnlock (void) {
  int32_t lock;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    lock = (int32_t)osErrorISR;
  }
  else {
    switch (xTaskGetSchedulerState()) {
      case ( ( BaseType_t ) 0 ):
        lock = 1;

        if (xTaskResumeAll() != ( ( BaseType_t ) 1 )) {
          if (xTaskGetSchedulerState() == ( ( BaseType_t ) 0 )) {
            lock = (int32_t)osError;
          }
        }
        break;

      case ( ( BaseType_t ) 2 ):
        lock = 0;
        break;

      case ( ( BaseType_t ) 1 ):
      default:
        lock = (int32_t)osError;
        break;
    }
  }

  return (lock);
}

int32_t osKernelRestoreLock (int32_t lock) {

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    lock = (int32_t)osErrorISR;
  }
  else {
    switch (xTaskGetSchedulerState()) {
      case ( ( BaseType_t ) 0 ):
      case ( ( BaseType_t ) 2 ):
        if (lock == 1) {
          vTaskSuspendAll();
        }
        else {
          if (lock != 0) {
            lock = (int32_t)osError;
          }
          else {
            if (xTaskResumeAll() != ( ( BaseType_t ) 1 )) {
              if (xTaskGetSchedulerState() != ( ( BaseType_t ) 2 )) {
                lock = (int32_t)osError;
              }
            }
          }
        }
        break;

      case ( ( BaseType_t ) 1 ):
      default:
        lock = (int32_t)osError;
        break;
    }
  }

  return (lock);
}

uint32_t osKernelGetTickCount (void) {
  TickType_t ticks;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    ticks = xTaskGetTickCountFromISR();
  } else {
    ticks = xTaskGetTickCount();
  }

  return (ticks);
}

uint32_t osKernelGetTickFreq (void) {
  return (((TickType_t)1000));
}

uint32_t osKernelGetSysTimerCount (void) {
  TickType_t ticks;
  uint32_t val;

  vPortRaiseBASEPRI();

  ticks = xTaskGetTickCount();

  val = ticks * ( ( SystemCoreClock ) / ((TickType_t)1000) );
  vPortSetBASEPRI(0);

  return (val);
}

uint32_t osKernelGetSysTimerFreq (void) {
  return (( SystemCoreClock ));
}



osThreadId_t osThreadNew (osThreadFunc_t func, void *argument, const osThreadAttr_t *attr) {
  char empty;
  const char *name;
  uint32_t stack;
  TaskHandle_t hTask;
  UBaseType_t prio;
  int32_t mem;

  hTask = 
# 356 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
         ((void *)0)
# 356 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
             ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) && (func != 
# 358 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 358 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {
    stack = ((uint16_t)128);
    prio = (UBaseType_t)osPriorityNormal;

    empty = '\0';
    name = &empty;
    mem = -1;

    if (attr != 
# 366 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 366 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      if (attr->name != 
# 367 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                       ((void *)0)
# 367 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                           ) {
        name = attr->name;
      }
      if (attr->priority != osPriorityNone) {
        prio = (UBaseType_t)attr->priority;
      }

      if ((prio < osPriorityIdle) || (prio > osPriorityISR) || ((attr->attr_bits & 0x00000001U) == 0x00000001U)) {
        return (
# 375 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 375 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   );
      }

      if (attr->stack_size > 0U) {


        stack = attr->stack_size / sizeof(StackType_t);
      }

      if ((attr->cb_mem != 
# 384 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                             ((void *)0)
# 384 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                 ) && (attr->cb_size >= sizeof(StaticTask_t)) &&
          (attr->stack_mem != 
# 385 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                             ((void *)0)
# 385 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                 ) && (attr->stack_size > 0U)) {
        mem = 1;
      }
      else {
        if ((attr->cb_mem == 
# 389 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 389 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size == 0U) && (attr->stack_mem == 
# 389 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                                                                  ((void *)0)
# 389 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                                                                      )) {
          mem = 0;
        }
      }
    }
    else {
      mem = 0;
    }

    if (mem == 1) {
      hTask = xTaskCreateStatic ((TaskFunction_t)func, name, stack, argument, prio, (StackType_t *)attr->stack_mem,
                                                                                    (StaticTask_t *)attr->cb_mem);
    }
    else {
      if (mem == 0) {
        if (xTaskCreate ((TaskFunction_t)func, name, (uint16_t)stack, argument, prio, &hTask) != ( ( ( BaseType_t ) 1 ) )) {
          hTask = 
# 405 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                 ((void *)0)
# 405 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                     ;
        }
      }
    }
  }

  return ((osThreadId_t)hTask);
}

const char *osThreadGetName (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  const char *name;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTask == 
# 418 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 418 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {
    name = 
# 419 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
          ((void *)0)
# 419 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
              ;
  } else {
    name = pcTaskGetName (hTask);
  }

  return (name);
}

osThreadId_t osThreadGetId (void) {
  osThreadId_t id;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    id = 
# 431 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
        ((void *)0)
# 431 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
            ;
  } else {
    id = (osThreadId_t)xTaskGetCurrentTaskHandle();
  }

  return (id);
}

osThreadState_t osThreadGetState (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osThreadState_t state;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTask == 
# 443 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 443 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {
    state = osThreadError;
  }
  else {
    switch (eTaskGetState (hTask)) {
      case eRunning: state = osThreadRunning; break;
      case eReady: state = osThreadReady; break;
      case eBlocked:
      case eSuspended: state = osThreadBlocked; break;
      case eDeleted: state = osThreadTerminated; break;
      case eInvalid:
      default: state = osThreadError; break;
    }
  }

  return (state);
}

uint32_t osThreadGetStackSpace (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  uint32_t sz;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTask == 
# 465 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 465 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {
    sz = 0U;
  } else {
    sz = (uint32_t)uxTaskGetStackHighWaterMark (hTask);
  }

  return (sz);
}

uint32_t osThreadGetStackSize (osThreadId_t thread_id) {





  (void) thread_id;
  return 0;
}

osStatus_t osThreadSetPriority (osThreadId_t thread_id, osPriority_t priority) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if ((hTask == 
# 491 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 491 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) || (priority < osPriorityIdle) || (priority > osPriorityISR)) {
    stat = osErrorParameter;
  }
  else {
    stat = osOK;
    vTaskPrioritySet (hTask, (UBaseType_t)priority);
  }

  return (stat);
}

osPriority_t osThreadGetPriority (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osPriority_t prio;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTask == 
# 506 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 506 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {
    prio = osPriorityError;
  } else {
    prio = (osPriority_t)uxTaskPriorityGet (hTask);
  }

  return (prio);
}

osStatus_t osThreadYield (void) {
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  } else {
    stat = osOK;
    { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
  }

  return (stat);
}

osStatus_t osThreadSuspend (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTask == 
# 535 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 535 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    stat = osErrorParameter;
  }
  else {
    stat = osOK;
    vTaskSuspend (hTask);
  }

  return (stat);
}

osStatus_t osThreadResume (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTask == 
# 553 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 553 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    stat = osErrorParameter;
  }
  else {
    stat = osOK;
    vTaskResume (hTask);
  }

  return (stat);
}

__attribute__((__noreturn__)) void osThreadExit (void) {

  vTaskDelete (
# 566 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
              ((void *)0)
# 566 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                  );

  for (;;);
}

osStatus_t osThreadTerminate (osThreadId_t thread_id) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  osStatus_t stat;

  eTaskState tstate;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTask == 
# 580 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 580 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    stat = osErrorParameter;
  }
  else {
    tstate = eTaskGetState (hTask);

    if (tstate != eDeleted) {
      stat = osOK;
      vTaskDelete (hTask);
    } else {
      stat = osErrorResource;
    }
  }




  return (stat);
}

uint32_t osThreadGetCount (void) {
  uint32_t count;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    count = 0U;
  } else {
    count = uxTaskGetNumberOfTasks();
  }

  return (count);
}

uint32_t osThreadEnumerate (osThreadId_t *thread_array, uint32_t array_items) {
  uint32_t i, count;
  TaskStatus_t *task;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (thread_array == 
# 616 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                  ((void *)0)
# 616 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                      ) || (array_items == 0U)) {
    count = 0U;
  } else {
    vTaskSuspendAll();

    count = uxTaskGetNumberOfTasks();
    task = pvPortMalloc (count * sizeof(TaskStatus_t));

    if (task != 
# 624 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 624 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      count = uxTaskGetSystemState (task, count, 
# 625 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                                ((void *)0)
# 625 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                                    );

      for (i = 0U; (i < count) && (i < array_items); i++) {
        thread_array[i] = (osThreadId_t)task[i].xHandle;
      }
      count = i;
    }
    (void)xTaskResumeAll();

    vPortFree (task);
  }

  return (count);
}

uint32_t osThreadFlagsSet (osThreadId_t thread_id, uint32_t flags) {
  TaskHandle_t hTask = (TaskHandle_t)thread_id;
  uint32_t rflags;
  BaseType_t yield;

  if ((hTask == 
# 645 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 645 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) || ((flags & (~((1UL << 31U) - 1U))) != 0U)) {
    rflags = (uint32_t)osErrorParameter;
  }
  else {
    rflags = (uint32_t)osError;

    if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
      yield = ( ( BaseType_t ) 0 );

      (void)xTaskGenericNotifyFromISR( ( hTask ), ( flags ), ( eSetBits ), 
# 654 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0)
# 654 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
           , ( &yield ) );
      (void)xTaskGenericNotifyFromISR( ( hTask ), ( 0 ), ( eNoAction ), ( &rflags ), ( 
# 655 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0) 
# 655 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
           ) );

      if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
    }
    else {
      (void)xTaskGenericNotify( ( hTask ), ( flags ), ( eSetBits ), 
# 660 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0) 
# 660 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
           );
      (void)xTaskGenericNotify( ( hTask ), ( 0 ), ( eNoAction ), ( &rflags ) );
    }
  }

  return (rflags);
}

uint32_t osThreadFlagsClear (uint32_t flags) {
  TaskHandle_t hTask;
  uint32_t rflags, cflags;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = (uint32_t)osErrorISR;
  }
  else if ((flags & (~((1UL << 31U) - 1U))) != 0U) {
    rflags = (uint32_t)osErrorParameter;
  }
  else {
    hTask = xTaskGetCurrentTaskHandle();

    if (xTaskGenericNotify( ( hTask ), ( 0 ), ( eNoAction ), ( &cflags ) ) == ( ( ( BaseType_t ) 1 ) )) {
      rflags = cflags;
      cflags &= ~flags;

      if (xTaskGenericNotify( ( hTask ), ( cflags ), ( eSetValueWithOverwrite ), 
# 685 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
         ((void *)0) 
# 685 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
         ) != ( ( ( BaseType_t ) 1 ) )) {
        rflags = (uint32_t)osError;
      }
    }
    else {
      rflags = (uint32_t)osError;
    }
  }


  return (rflags);
}

uint32_t osThreadFlagsGet (void) {
  TaskHandle_t hTask;
  uint32_t rflags;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = (uint32_t)osErrorISR;
  }
  else {
    hTask = xTaskGetCurrentTaskHandle();

    if (xTaskGenericNotify( ( hTask ), ( 0 ), ( eNoAction ), ( &rflags ) ) != ( ( ( BaseType_t ) 1 ) )) {
      rflags = (uint32_t)osError;
    }
  }

  return (rflags);
}

uint32_t osThreadFlagsWait (uint32_t flags, uint32_t options, uint32_t timeout) {
  uint32_t rflags, nval;
  uint32_t clear;
  TickType_t t0, td, tout;
  BaseType_t rval;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = (uint32_t)osErrorISR;
  }
  else if ((flags & (~((1UL << 31U) - 1U))) != 0U) {
    rflags = (uint32_t)osErrorParameter;
  }
  else {
    if ((options & 0x00000002U) == 0x00000002U) {
      clear = 0U;
    } else {
      clear = flags;
    }

    rflags = 0U;
    tout = timeout;

    t0 = xTaskGetTickCount();
    do {
      rval = xTaskNotifyWait (0, clear, &nval, tout);

      if (rval == ( ( ( BaseType_t ) 1 ) )) {
        rflags &= flags;
        rflags |= nval;

        if ((options & 0x00000001U) == 0x00000001U) {
          if ((flags & rflags) == flags) {
            break;
          } else {
            if (timeout == 0U) {
              rflags = (uint32_t)osErrorResource;
              break;
            }
          }
        }
        else {
          if ((flags & rflags) != 0) {
            break;
          } else {
            if (timeout == 0U) {
              rflags = (uint32_t)osErrorResource;
              break;
            }
          }
        }


        td = xTaskGetTickCount() - t0;

        if (td > tout) {
          tout = 0;
        } else {
          tout -= td;
        }
      }
      else {
        if (timeout == 0) {
          rflags = (uint32_t)osErrorResource;
        } else {
          rflags = (uint32_t)osErrorTimeout;
        }
      }
    }
    while (rval != ( ( ( BaseType_t ) 0 ) ));
  }


  return (rflags);
}

osStatus_t osDelay (uint32_t ticks) {
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else {
    stat = osOK;

    if (ticks != 0U) {
      vTaskDelay(ticks);
    }
  }

  return (stat);
}

osStatus_t osDelayUntil (uint32_t ticks) {
  TickType_t tcnt;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else {
    stat = osOK;
    tcnt = xTaskGetTickCount();

    vTaskDelayUntil (&tcnt, (TickType_t)(ticks - tcnt));
  }

  return (stat);
}



static void TimerCallback (TimerHandle_t hTimer) {
  TimerCallback_t *callb;

  callb = (TimerCallback_t *)pvTimerGetTimerID (hTimer);

  if (callb != 
# 832 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
              ((void *)0)
# 832 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                  ) {
    callb->func (callb->arg);
  }
}

osTimerId_t osTimerNew (osTimerFunc_t func, osTimerType_t type, void *argument, const osTimerAttr_t *attr) {
  const char *name;
  TimerHandle_t hTimer;
  TimerCallback_t *callb;
  UBaseType_t reload;
  int32_t mem;

  hTimer = 
# 844 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
          ((void *)0)
# 844 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
              ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) && (func != 
# 846 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                           ((void *)0)
# 846 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                               )) {

    callb = pvPortMalloc (sizeof(TimerCallback_t));

    if (callb != 
# 850 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                ((void *)0)
# 850 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                    ) {
      callb->func = func;
      callb->arg = argument;

      if (type == osTimerOnce) {
        reload = ( ( BaseType_t ) 0 );
      } else {
        reload = ( ( BaseType_t ) 1 );
      }

      mem = -1;
      name = 
# 861 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
            ((void *)0)
# 861 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                ;

      if (attr != 
# 863 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                 ((void *)0)
# 863 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                     ) {
        if (attr->name != 
# 864 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                         ((void *)0)
# 864 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                             ) {
          name = attr->name;
        }

        if ((attr->cb_mem != 
# 868 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 868 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size >= sizeof(StaticTimer_t))) {
          mem = 1;
        }
        else {
          if ((attr->cb_mem == 
# 872 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                              ((void *)0)
# 872 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                  ) && (attr->cb_size == 0U)) {
            mem = 0;
          }
        }
      }
      else {
        mem = 0;
      }

      if (mem == 1) {
        hTimer = xTimerCreateStatic (name, 1, reload, callb, TimerCallback, (StaticTimer_t *)attr->cb_mem);
      }
      else {
        if (mem == 0) {
          hTimer = xTimerCreate (name, 1, reload, callb, TimerCallback);
        }
      }
    }
  }

  return ((osTimerId_t)hTimer);
}

const char *osTimerGetName (osTimerId_t timer_id) {
  TimerHandle_t hTimer = (TimerHandle_t)timer_id;
  const char *p;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTimer == 
# 899 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 899 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                )) {
    p = 
# 900 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
       ((void *)0)
# 900 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
           ;
  } else {
    p = pcTimerGetName (hTimer);
  }

  return (p);
}

osStatus_t osTimerStart (osTimerId_t timer_id, uint32_t ticks) {
  TimerHandle_t hTimer = (TimerHandle_t)timer_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTimer == 
# 915 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 915 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    if (xTimerGenericCommand( ( hTimer ), ( ( BaseType_t ) 4 ), ( ticks ), 
# 919 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
       ((void *)0)
# 919 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
       , ( 0 ) ) == ( ( ( BaseType_t ) 1 ) )) {
      stat = osOK;
    } else {
      stat = osErrorResource;
    }
  }

  return (stat);
}

osStatus_t osTimerStop (osTimerId_t timer_id) {
  TimerHandle_t hTimer = (TimerHandle_t)timer_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTimer == 
# 936 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 936 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    if (xTimerIsTimerActive (hTimer) == ( ( BaseType_t ) 0 )) {
      stat = osErrorResource;
    }
    else {
      if (xTimerGenericCommand( ( hTimer ), ( ( BaseType_t ) 3 ), 0U, 
# 944 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
         ((void *)0)
# 944 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
         , ( 0 ) ) == ( ( ( BaseType_t ) 1 ) )) {
        stat = osOK;
      } else {
        stat = osError;
      }
    }
  }

  return (stat);
}

uint32_t osTimerIsRunning (osTimerId_t timer_id) {
  TimerHandle_t hTimer = (TimerHandle_t)timer_id;
  uint32_t running;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hTimer == 
# 959 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 959 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                )) {
    running = 0U;
  } else {
    running = (uint32_t)xTimerIsTimerActive (hTimer);
  }

  return (running);
}

osStatus_t osTimerDelete (osTimerId_t timer_id) {
  TimerHandle_t hTimer = (TimerHandle_t)timer_id;
  osStatus_t stat;

  TimerCallback_t *callb;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hTimer == 
# 977 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 977 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    callb = (TimerCallback_t *)pvTimerGetTimerID (hTimer);

    if (xTimerGenericCommand( ( hTimer ), ( ( BaseType_t ) 5 ), 0U, 
# 983 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
       ((void *)0)
# 983 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
       , ( 0 ) ) == ( ( ( BaseType_t ) 1 ) )) {
      vPortFree (callb);
      stat = osOK;
    } else {
      stat = osErrorResource;
    }
  }




  return (stat);
}



osEventFlagsId_t osEventFlagsNew (const osEventFlagsAttr_t *attr) {
  EventGroupHandle_t hEventGroup;
  int32_t mem;

  hEventGroup = 
# 1003 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1003 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    mem = -1;

    if (attr != 
# 1008 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1008 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      if ((attr->cb_mem != 
# 1009 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                          ((void *)0)
# 1009 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                              ) && (attr->cb_size >= sizeof(StaticEventGroup_t))) {
        mem = 1;
      }
      else {
        if ((attr->cb_mem == 
# 1013 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1013 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size == 0U)) {
          mem = 0;
        }
      }
    }
    else {
      mem = 0;
    }

    if (mem == 1) {
      hEventGroup = xEventGroupCreateStatic (attr->cb_mem);
    }
    else {
      if (mem == 0) {
        hEventGroup = xEventGroupCreate();
      }
    }
  }

  return ((osEventFlagsId_t)hEventGroup);
}

uint32_t osEventFlagsSet (osEventFlagsId_t ef_id, uint32_t flags) {
  EventGroupHandle_t hEventGroup = (EventGroupHandle_t)ef_id;
  uint32_t rflags;
  BaseType_t yield;

  if ((hEventGroup == 
# 1040 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                     ((void *)0)
# 1040 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                         ) || ((flags & (~((1UL << 24U) - 1U))) != 0U)) {
    rflags = (uint32_t)osErrorParameter;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    yield = ( ( BaseType_t ) 0 );

    if (xEventGroupSetBitsFromISR (hEventGroup, (EventBits_t)flags, &yield) != ( ( ( BaseType_t ) 0 ) )) {
      rflags = (uint32_t)osErrorResource;
    } else {
      rflags = flags;
      if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
    }
  }
  else {
    rflags = xEventGroupSetBits (hEventGroup, (EventBits_t)flags);
  }

  return (rflags);
}

uint32_t osEventFlagsClear (osEventFlagsId_t ef_id, uint32_t flags) {
  EventGroupHandle_t hEventGroup = (EventGroupHandle_t)ef_id;
  uint32_t rflags;

  if ((hEventGroup == 
# 1064 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                     ((void *)0)
# 1064 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                         ) || ((flags & (~((1UL << 24U) - 1U))) != 0U)) {
    rflags = (uint32_t)osErrorParameter;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = xEventGroupGetBitsFromISR (hEventGroup);

    if (xEventGroupClearBitsFromISR (hEventGroup, (EventBits_t)flags) == ( ( ( BaseType_t ) 0 ) )) {
      rflags = (uint32_t)osErrorResource;
    }
  }
  else {
    rflags = xEventGroupClearBits (hEventGroup, (EventBits_t)flags);
  }

  return (rflags);
}

uint32_t osEventFlagsGet (osEventFlagsId_t ef_id) {
  EventGroupHandle_t hEventGroup = (EventGroupHandle_t)ef_id;
  uint32_t rflags;

  if (ef_id == 
# 1085 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
              ((void *)0)
# 1085 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                  ) {
    rflags = 0U;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = xEventGroupGetBitsFromISR (hEventGroup);
  }
  else {
    rflags = xEventGroupClearBits( hEventGroup, 0 );
  }

  return (rflags);
}

uint32_t osEventFlagsWait (osEventFlagsId_t ef_id, uint32_t flags, uint32_t options, uint32_t timeout) {
  EventGroupHandle_t hEventGroup = (EventGroupHandle_t)ef_id;
  BaseType_t wait_all;
  BaseType_t exit_clr;
  uint32_t rflags;

  if ((hEventGroup == 
# 1104 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                     ((void *)0)
# 1104 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                         ) || ((flags & (~((1UL << 24U) - 1U))) != 0U)) {
    rflags = (uint32_t)osErrorParameter;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    rflags = (uint32_t)osErrorISR;
  }
  else {
    if (options & 0x00000001U) {
      wait_all = ( ( BaseType_t ) 1 );
    } else {
      wait_all = ( ( ( BaseType_t ) 0 ) );
    }

    if (options & 0x00000002U) {
      exit_clr = ( ( ( BaseType_t ) 0 ) );
    } else {
      exit_clr = ( ( BaseType_t ) 1 );
    }

    rflags = xEventGroupWaitBits (hEventGroup, (EventBits_t)flags, exit_clr, wait_all, (TickType_t)timeout);

    if (options & 0x00000001U) {
      if (flags != rflags) {
        if (timeout > 0U) {
          rflags = (uint32_t)osErrorTimeout;
        } else {
          rflags = (uint32_t)osErrorResource;
        }
      }
    }
    else {
      if ((flags & rflags) == 0U) {
        if (timeout > 0U) {
          rflags = (uint32_t)osErrorTimeout;
        } else {
          rflags = (uint32_t)osErrorResource;
        }
      }
    }
  }

  return (rflags);
}

osStatus_t osEventFlagsDelete (osEventFlagsId_t ef_id) {
  EventGroupHandle_t hEventGroup = (EventGroupHandle_t)ef_id;
  osStatus_t stat;


  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hEventGroup == 
# 1156 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                         ((void *)0)
# 1156 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                             ) {
    stat = osErrorParameter;
  }
  else {
    stat = osOK;
    vEventGroupDelete (hEventGroup);
  }




  return (stat);
}



osMutexId_t osMutexNew (const osMutexAttr_t *attr) {
  SemaphoreHandle_t hMutex;
  uint32_t type;
  uint32_t rmtx;
  int32_t mem;

  const char *name;


  hMutex = 
# 1181 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
          ((void *)0)
# 1181 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
              ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    if (attr != 
# 1184 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1184 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      type = attr->attr_bits;
    } else {
      type = 0U;
    }

    if ((type & 0x00000001U) == 0x00000001U) {
      rmtx = 1U;
    } else {
      rmtx = 0U;
    }

    if ((type & 0x00000008U) != 0x00000008U) {
      mem = -1;

      if (attr != 
# 1199 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                 ((void *)0)
# 1199 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                     ) {
        if ((attr->cb_mem != 
# 1200 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1200 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size >= sizeof(StaticSemaphore_t))) {
          mem = 1;
        }
        else {
          if ((attr->cb_mem == 
# 1204 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                              ((void *)0)
# 1204 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                  ) && (attr->cb_size == 0U)) {
            mem = 0;
          }
        }
      }
      else {
        mem = 0;
      }

      if (mem == 1) {
        if (rmtx != 0U) {
          hMutex = xQueueCreateMutexStatic( ( ( uint8_t ) 4U ), attr->cb_mem );
        }
        else {
          hMutex = xQueueCreateMutexStatic( ( ( uint8_t ) 1U ), ( attr->cb_mem ) );
        }
      }
      else {
        if (mem == 0) {
          if (rmtx != 0U) {
            hMutex = xQueueCreateMutex( ( ( uint8_t ) 4U ) );
          } else {
            hMutex = xQueueCreateMutex( ( ( uint8_t ) 1U ) );
          }
        }
      }


      if (hMutex != 
# 1232 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1232 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
        if (attr != 
# 1233 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1233 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
          name = attr->name;
        } else {
          name = 
# 1236 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                ((void *)0)
# 1236 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                    ;
        }
        vQueueAddToRegistry (hMutex, name);
      }


      if ((hMutex != 
# 1242 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1242 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) && (rmtx != 0U)) {
        hMutex = (SemaphoreHandle_t)((uint32_t)hMutex | 1U);
      }
    }
  }

  return ((osMutexId_t)hMutex);
}

osStatus_t osMutexAcquire (osMutexId_t mutex_id, uint32_t timeout) {
  SemaphoreHandle_t hMutex;
  osStatus_t stat;
  uint32_t rmtx;

  hMutex = (SemaphoreHandle_t)((uint32_t)mutex_id & ~1U);

  rmtx = (uint32_t)mutex_id & 1U;

  stat = osOK;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hMutex == 
# 1265 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1265 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    if (rmtx != 0U) {
      if (xQueueTakeMutexRecursive( ( hMutex ), ( timeout ) ) != ( ( ( BaseType_t ) 1 ) )) {
        if (timeout != 0U) {
          stat = osErrorTimeout;
        } else {
          stat = osErrorResource;
        }
      }
    }
    else {
      if (xQueueSemaphoreTake( ( hMutex ), ( timeout ) ) != ( ( ( BaseType_t ) 1 ) )) {
        if (timeout != 0U) {
          stat = osErrorTimeout;
        } else {
          stat = osErrorResource;
        }
      }
    }
  }

  return (stat);
}

osStatus_t osMutexRelease (osMutexId_t mutex_id) {
  SemaphoreHandle_t hMutex;
  osStatus_t stat;
  uint32_t rmtx;

  hMutex = (SemaphoreHandle_t)((uint32_t)mutex_id & ~1U);

  rmtx = (uint32_t)mutex_id & 1U;

  stat = osOK;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hMutex == 
# 1306 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1306 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    if (rmtx != 0U) {
      if (xQueueGiveMutexRecursive( ( hMutex ) ) != ( ( ( BaseType_t ) 1 ) )) {
        stat = osErrorResource;
      }
    }
    else {
      if (xQueueGenericSend( ( QueueHandle_t ) ( hMutex ), 
# 1316 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
         ((void *)0)
# 1316 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
         , ( ( TickType_t ) 0U ), ( ( BaseType_t ) 0 ) ) != ( ( ( BaseType_t ) 1 ) )) {
        stat = osErrorResource;
      }
    }
  }

  return (stat);
}

osThreadId_t osMutexGetOwner (osMutexId_t mutex_id) {
  SemaphoreHandle_t hMutex;
  osThreadId_t owner;

  hMutex = (SemaphoreHandle_t)((uint32_t)mutex_id & ~1U);

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) || (hMutex == 
# 1331 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1331 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                )) {
    owner = 
# 1332 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0)
# 1332 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
               ;
  } else {
    owner = (osThreadId_t)xQueueGetMutexHolder( ( hMutex ) );
  }

  return (owner);
}

osStatus_t osMutexDelete (osMutexId_t mutex_id) {
  osStatus_t stat;

  SemaphoreHandle_t hMutex;

  hMutex = (SemaphoreHandle_t)((uint32_t)mutex_id & ~1U);

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hMutex == 
# 1350 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1350 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {

    vQueueUnregisterQueue (hMutex);

    stat = osOK;
    vQueueDelete( ( QueueHandle_t ) ( hMutex ) );
  }




  return (stat);
}



osSemaphoreId_t osSemaphoreNew (uint32_t max_count, uint32_t initial_count, const osSemaphoreAttr_t *attr) {
  SemaphoreHandle_t hSemaphore;
  int32_t mem;

  const char *name;


  hSemaphore = 
# 1376 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
              ((void *)0)
# 1376 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                  ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) && (max_count > 0U) && (initial_count <= max_count)) {
    mem = -1;

    if (attr != 
# 1381 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1381 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      if ((attr->cb_mem != 
# 1382 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                          ((void *)0)
# 1382 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                              ) && (attr->cb_size >= sizeof(StaticSemaphore_t))) {
        mem = 1;
      }
      else {
        if ((attr->cb_mem == 
# 1386 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1386 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size == 0U)) {
          mem = 0;
        }
      }
    }
    else {
      mem = 0;
    }

    if (mem != -1) {
      if (max_count == 1U) {
        if (mem == 1) {
          hSemaphore = xQueueGenericCreateStatic( ( UBaseType_t ) 1, ( ( uint8_t ) 0U ), 
# 1398 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                      ((void *)0)
# 1398 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                      , (StaticSemaphore_t *)attr->cb_mem, ( ( uint8_t ) 3U ) );
        }
        else {
          hSemaphore = xQueueGenericCreate( ( UBaseType_t ) 1, ( ( uint8_t ) 0U ), ( ( uint8_t ) 3U ) );
        }

        if ((hSemaphore != 
# 1404 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                          ((void *)0)
# 1404 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                              ) && (initial_count != 0U)) {
          if (xQueueGenericSend( ( QueueHandle_t ) ( hSemaphore ), 
# 1405 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
             ((void *)0)
# 1405 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
             , ( ( TickType_t ) 0U ), ( ( BaseType_t ) 0 ) ) != ( ( ( BaseType_t ) 1 ) )) {
            vQueueDelete( ( QueueHandle_t ) ( hSemaphore ) );
            hSemaphore = 
# 1407 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                        ((void *)0)
# 1407 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                            ;
          }
        }
      }
      else {
        if (mem == 1) {
          hSemaphore = xQueueCreateCountingSemaphoreStatic( ( max_count ), ( initial_count ), ( (StaticSemaphore_t *)attr->cb_mem ) );
        }
        else {
          hSemaphore = xQueueCreateCountingSemaphore( ( max_count ), ( initial_count ) );
        }
      }


      if (hSemaphore != 
# 1421 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                       ((void *)0)
# 1421 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                           ) {
        if (attr != 
# 1422 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1422 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
          name = attr->name;
        } else {
          name = 
# 1425 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                ((void *)0)
# 1425 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                    ;
        }
        vQueueAddToRegistry (hSemaphore, name);
      }

    }
  }

  return ((osSemaphoreId_t)hSemaphore);
}

osStatus_t osSemaphoreAcquire (osSemaphoreId_t semaphore_id, uint32_t timeout) {
  SemaphoreHandle_t hSemaphore = (SemaphoreHandle_t)semaphore_id;
  osStatus_t stat;
  BaseType_t yield;

  stat = osOK;

  if (hSemaphore == 
# 1443 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1443 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    stat = osErrorParameter;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    if (timeout != 0U) {
      stat = osErrorParameter;
    }
    else {
      yield = ( ( BaseType_t ) 0 );

      if (xQueueReceiveFromISR( ( QueueHandle_t ) ( hSemaphore ), 
# 1453 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
         ((void *)0)
# 1453 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
         , ( &yield ) ) != ( ( ( BaseType_t ) 1 ) )) {
        stat = osErrorResource;
      } else {
        if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
      }
    }
  }
  else {
    if (xQueueSemaphoreTake( ( hSemaphore ), ( (TickType_t)timeout ) ) != ( ( ( BaseType_t ) 1 ) )) {
      if (timeout != 0U) {
        stat = osErrorTimeout;
      } else {
        stat = osErrorResource;
      }
    }
  }

  return (stat);
}

osStatus_t osSemaphoreRelease (osSemaphoreId_t semaphore_id) {
  SemaphoreHandle_t hSemaphore = (SemaphoreHandle_t)semaphore_id;
  osStatus_t stat;
  BaseType_t yield;

  stat = osOK;

  if (hSemaphore == 
# 1480 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1480 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    stat = osErrorParameter;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    yield = ( ( BaseType_t ) 0 );

    if (xQueueGiveFromISR( ( QueueHandle_t ) ( hSemaphore ), ( &yield ) ) != ( ( BaseType_t ) 1 )) {
      stat = osErrorResource;
    } else {
      if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
    }
  }
  else {
    if (xQueueGenericSend( ( QueueHandle_t ) ( hSemaphore ), 
# 1493 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
       ((void *)0)
# 1493 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
       , ( ( TickType_t ) 0U ), ( ( BaseType_t ) 0 ) ) != ( ( ( BaseType_t ) 1 ) )) {
      stat = osErrorResource;
    }
  }

  return (stat);
}

uint32_t osSemaphoreGetCount (osSemaphoreId_t semaphore_id) {
  SemaphoreHandle_t hSemaphore = (SemaphoreHandle_t)semaphore_id;
  uint32_t count;

  if (hSemaphore == 
# 1505 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                   ((void *)0)
# 1505 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                       ) {
    count = 0U;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    count = uxQueueMessagesWaitingFromISR (hSemaphore);
  } else {
    count = (uint32_t)uxQueueMessagesWaiting( ( QueueHandle_t ) ( hSemaphore ) );
  }

  return (count);
}

osStatus_t osSemaphoreDelete (osSemaphoreId_t semaphore_id) {
  SemaphoreHandle_t hSemaphore = (SemaphoreHandle_t)semaphore_id;
  osStatus_t stat;


  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hSemaphore == 
# 1525 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                        ((void *)0)
# 1525 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                            ) {
    stat = osErrorParameter;
  }
  else {

    vQueueUnregisterQueue (hSemaphore);


    stat = osOK;
    vQueueDelete( ( QueueHandle_t ) ( hSemaphore ) );
  }




  return (stat);
}



osMessageQueueId_t osMessageQueueNew (uint32_t msg_count, uint32_t msg_size, const osMessageQueueAttr_t *attr) {
  QueueHandle_t hQueue;
  int32_t mem;

  const char *name;


  hQueue = 
# 1552 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
          ((void *)0)
# 1552 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
              ;

  if (!((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U)) && (msg_count > 0U) && (msg_size > 0U)) {
    mem = -1;

    if (attr != 
# 1557 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1557 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
      if ((attr->cb_mem != 
# 1558 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                          ((void *)0)
# 1558 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                              ) && (attr->cb_size >= sizeof(StaticQueue_t)) &&
          (attr->mq_mem != 
# 1559 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                          ((void *)0)
# 1559 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                              ) && (attr->mq_size >= (msg_count * msg_size))) {
        mem = 1;
      }
      else {
        if ((attr->cb_mem == 
# 1563 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1563 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->cb_size == 0U) &&
            (attr->mq_mem == 
# 1564 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                            ((void *)0)
# 1564 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                ) && (attr->mq_size == 0U)) {
          mem = 0;
        }
      }
    }
    else {
      mem = 0;
    }

    if (mem == 1) {
      hQueue = xQueueGenericCreateStatic( ( msg_count ), ( msg_size ), ( attr->mq_mem ), ( attr->cb_mem ), ( ( ( uint8_t ) 0U ) ) );
    }
    else {
      if (mem == 0) {
        hQueue = xQueueGenericCreate( ( msg_count ), ( msg_size ), ( ( ( uint8_t ) 0U ) ) );
      }
    }


    if (hQueue != 
# 1583 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                 ((void *)0)
# 1583 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                     ) {
      if (attr != 
# 1584 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                 ((void *)0)
# 1584 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                     ) {
        name = attr->name;
      } else {
        name = 
# 1587 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
              ((void *)0)
# 1587 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                  ;
      }
      vQueueAddToRegistry (hQueue, name);
    }


  }

  return ((osMessageQueueId_t)hQueue);
}

osStatus_t osMessageQueuePut (osMessageQueueId_t mq_id, const void *msg_ptr, uint8_t msg_prio, uint32_t timeout) {
  QueueHandle_t hQueue = (QueueHandle_t)mq_id;
  osStatus_t stat;
  BaseType_t yield;

  (void)msg_prio;

  stat = osOK;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    if ((hQueue == 
# 1608 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                  ((void *)0)
# 1608 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                      ) || (msg_ptr == 
# 1608 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                       ((void *)0)
# 1608 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                           ) || (timeout != 0U)) {
      stat = osErrorParameter;
    }
    else {
      yield = ( ( BaseType_t ) 0 );

      if (xQueueGenericSendFromISR( ( hQueue ), ( msg_ptr ), ( &yield ), ( ( BaseType_t ) 0 ) ) != ( ( BaseType_t ) 1 )) {
        stat = osErrorResource;
      } else {
        if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
      }
    }
  }
  else {
    if ((hQueue == 
# 1622 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                  ((void *)0)
# 1622 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                      ) || (msg_ptr == 
# 1622 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                       ((void *)0)
# 1622 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                           )) {
      stat = osErrorParameter;
    }
    else {
      if (xQueueGenericSend( ( hQueue ), ( msg_ptr ), ( (TickType_t)timeout ), ( ( BaseType_t ) 0 ) ) != ( ( ( BaseType_t ) 1 ) )) {
        if (timeout != 0U) {
          stat = osErrorTimeout;
        } else {
          stat = osErrorResource;
        }
      }
    }
  }

  return (stat);
}

osStatus_t osMessageQueueGet (osMessageQueueId_t mq_id, void *msg_ptr, uint8_t *msg_prio, uint32_t timeout) {
  QueueHandle_t hQueue = (QueueHandle_t)mq_id;
  osStatus_t stat;
  BaseType_t yield;

  (void)msg_prio;

  stat = osOK;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    if ((hQueue == 
# 1649 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                  ((void *)0)
# 1649 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                      ) || (msg_ptr == 
# 1649 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                       ((void *)0)
# 1649 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                           ) || (timeout != 0U)) {
      stat = osErrorParameter;
    }
    else {
      yield = ( ( BaseType_t ) 0 );

      if (xQueueReceiveFromISR (hQueue, msg_ptr, &yield) != ( ( ( BaseType_t ) 1 ) )) {
        stat = osErrorResource;
      } else {
        if( yield != ( ( BaseType_t ) 0 ) ) { ( * ( ( volatile uint32_t * ) 0xe000ed04 ) ) = ( 1UL << 28UL ); __asm volatile( "dsb" ::: "memory" ); __asm volatile( "isb" ); };
      }
    }
  }
  else {
    if ((hQueue == 
# 1663 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                  ((void *)0)
# 1663 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                      ) || (msg_ptr == 
# 1663 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                                       ((void *)0)
# 1663 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                                           )) {
      stat = osErrorParameter;
    }
    else {
      if (xQueueReceive (hQueue, msg_ptr, (TickType_t)timeout) != ( ( ( BaseType_t ) 1 ) )) {
        if (timeout != 0U) {
          stat = osErrorTimeout;
        } else {
          stat = osErrorResource;
        }
      }
    }
  }

  return (stat);
}

uint32_t osMessageQueueGetCapacity (osMessageQueueId_t mq_id) {
  StaticQueue_t *mq = (StaticQueue_t *)mq_id;
  uint32_t capacity;

  if (mq == 
# 1684 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0)
# 1684 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
               ) {
    capacity = 0U;
  } else {

    capacity = mq->uxDummy4[1];
  }

  return (capacity);
}

uint32_t osMessageQueueGetMsgSize (osMessageQueueId_t mq_id) {
  StaticQueue_t *mq = (StaticQueue_t *)mq_id;
  uint32_t size;

  if (mq == 
# 1698 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0)
# 1698 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
               ) {
    size = 0U;
  } else {

    size = mq->uxDummy4[2];
  }

  return (size);
}

uint32_t osMessageQueueGetCount (osMessageQueueId_t mq_id) {
  QueueHandle_t hQueue = (QueueHandle_t)mq_id;
  UBaseType_t count;

  if (hQueue == 
# 1712 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
               ((void *)0)
# 1712 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                   ) {
    count = 0U;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    count = uxQueueMessagesWaitingFromISR (hQueue);
  }
  else {
    count = uxQueueMessagesWaiting (hQueue);
  }

  return ((uint32_t)count);
}

uint32_t osMessageQueueGetSpace (osMessageQueueId_t mq_id) {
  StaticQueue_t *mq = (StaticQueue_t *)mq_id;
  uint32_t space;
  uint32_t isrm;

  if (mq == 
# 1730 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
           ((void *)0)
# 1730 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
               ) {
    space = 0U;
  }
  else if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    isrm = ulPortRaiseBASEPRI();


    space = mq->uxDummy4[1] - mq->uxDummy4[0];

    vPortSetBASEPRI(isrm);
  }
  else {
    space = (uint32_t)uxQueueSpacesAvailable ((QueueHandle_t)mq);
  }

  return (space);
}

osStatus_t osMessageQueueReset (osMessageQueueId_t mq_id) {
  QueueHandle_t hQueue = (QueueHandle_t)mq_id;
  osStatus_t stat;

  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hQueue == 
# 1755 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1755 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {
    stat = osOK;
    (void)xQueueGenericReset( hQueue, ( ( BaseType_t ) 0 ) );
  }

  return (stat);
}

osStatus_t osMessageQueueDelete (osMessageQueueId_t mq_id) {
  QueueHandle_t hQueue = (QueueHandle_t)mq_id;
  osStatus_t stat;


  if (((__get_IPSR() != 0U) || (__get_PRIMASK() != 0U))) {
    stat = osErrorISR;
  }
  else if (hQueue == 
# 1774 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c" 3 4
                    ((void *)0)
# 1774 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
                        ) {
    stat = osErrorParameter;
  }
  else {

    vQueueUnregisterQueue (hQueue);


    stat = osOK;
    vQueueDelete (hQueue);
  }




  return (stat);
}




extern void vApplicationIdleHook (void);
extern void vApplicationTickHook (void);
extern void vApplicationMallocFailedHook (void);
extern void vApplicationDaemonTaskStartupHook (void);
extern void vApplicationStackOverflowHook (TaskHandle_t xTask, signed char *pcTaskName);
# 1842 "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c"
extern void vApplicationGetIdleTaskMemory (StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize);
extern void vApplicationGetTimerTaskMemory (StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer, uint32_t *pulTimerTaskStackSize);


static StaticTask_t Idle_TCB;
static StackType_t Idle_Stack[((uint16_t)128)];


static StaticTask_t Timer_TCB;
static StackType_t Timer_Stack[256];





void vApplicationGetIdleTaskMemory (StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize) {
  *ppxIdleTaskTCBBuffer = &Idle_TCB;
  *ppxIdleTaskStackBuffer = &Idle_Stack[0];
  *pulIdleTaskStackSize = (uint32_t)((uint16_t)128);
}





void vApplicationGetTimerTaskMemory (StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer, uint32_t *pulTimerTaskStackSize) {
  *ppxTimerTaskTCBBuffer = &Timer_TCB;
  *ppxTimerTaskStackBuffer = &Timer_Stack[0];
  *pulTimerTaskStackSize = (uint32_t)256;
}
