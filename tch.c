# 1 "tchcheck.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "tchcheck.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 328 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 324 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 325 "/usr/include/sys/cdefs.h" 2 3 4
# 329 "/usr/include/features.h" 2 3 4
# 351 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 352 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 326 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
{
    int quot;
    int rem;
} div_t;



typedef struct
{
    long int quot;
    long int rem;
} ldiv_t;



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
                          char **__restrict __endptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
                            char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
                                      char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
                                 char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
                                           char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
                                  char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
                                            char **__restrict __endptr, int __base)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 279 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
                                     char **__restrict __endptr, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
                                    char **__restrict __endptr, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
                                           char **__restrict __endptr,
                                           int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long int __strtol_internal (__const char *__restrict __nptr,
                                       char **__restrict __endptr,
                                       int __base, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
            char **__restrict __endptr,
            int __base, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
            char **__restrict __endptr,
            int __base, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
            __restrict __nptr,
            char **__restrict __endptr,
            int __base, int __group)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4


# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct {
    int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 32 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
{
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
{
    __time_t tv_sec;
    long int tv_nsec;
};
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
{
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
{






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


} fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
                       fd_set *__restrict __writefds,
                       fd_set *__restrict __exceptfds,
                       struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
                        fd_set *__restrict __writefds,
                        fd_set *__restrict __exceptfds,
                        const struct timespec *__restrict __timeout,
                        const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
    __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
    __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
    __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
    __attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
    return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
    __attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
    return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
    __attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
    return ((__minor & 0xff) | ((__major & 0xfff) << 8)
            | (((unsigned long long int) (__minor & ~0xff)) << 12)
            | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
    char __size[56];
    long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
    struct __pthread_mutex_s
    {
        int __lock;
        unsigned int __count;
        int __owner;

        unsigned int __nusers;



        int __kind;

        int __spins;
        __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
    } __data;
    char __size[40];
    long int __align;
} pthread_mutex_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_mutexattr_t;




typedef union
{
    struct
    {
        int __lock;
        unsigned int __futex;
        __extension__ unsigned long long int __total_seq;
        __extension__ unsigned long long int __wakeup_seq;
        __extension__ unsigned long long int __woken_seq;
        void *__mutex;
        unsigned int __nwaiters;
        unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

    struct
    {
        int __lock;
        unsigned int __nr_readers;
        unsigned int __readers_wakeup;
        unsigned int __writer_wakeup;
        unsigned int __nr_readers_queued;
        unsigned int __nr_writers_queued;
        int __writer;
        int __pad1;
        unsigned long int __pad2;
        unsigned long int __pad3;


        unsigned int __flags;
    } __data;
# 184 "/usr/include/bits/pthreadtypes.h" 3 4
    char __size[56];
    long int __align;
} pthread_rwlock_t;

typedef union
{
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
    char __size[32];
    long int __align;
} pthread_barrier_t;

typedef union
{
    char __size[4];
    int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 439 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
                            size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
{
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};

extern int random_r (struct random_data *__restrict __buf,
                         int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
                            size_t __statelen,
                            struct random_data *__restrict __buf)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
                           struct random_data *__restrict __buf)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};


extern int drand48_r (struct drand48_data *__restrict __buffer,
                          double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
                          struct drand48_data *__restrict __buffer,
                          double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
                          long int *__restrict __result)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
                          struct drand48_data *__restrict __buffer,
                          long int *__restrict __result)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
                          long int *__restrict __result)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
                          struct drand48_data *__restrict __buffer,
                          long int *__restrict __result)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
                         struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
                          struct drand48_data *__buffer)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
    __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
    __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 658 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;

# 755 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
                           char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
                          size_t __nmemb, size_t __size, __compar_fn_t __compar)
    __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                       __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
    __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
    __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 820 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
                       int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
                       int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
                        int *__restrict __decpt, int *__restrict __sign)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
                        int *__restrict __decpt, int *__restrict __sign)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
                       int *__restrict __sign, char *__restrict __buf,
                       size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
                       int *__restrict __sign, char *__restrict __buf,
                       size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
                        int *__restrict __decpt, int *__restrict __sign,
                        char *__restrict __buf, size_t __len)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
                        int *__restrict __decpt, int *__restrict __sign,
                        char *__restrict __buf, size_t __len)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
                       __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
                            __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
                            __const wchar_t *__restrict __pwcs, size_t __n)
    __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 925 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 960 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/stdlib.h" 3 4

# 2 "tchcheck.c" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 2 3 4
# 3 "tchcheck.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
    int __count;
    union
    {
        wint_t __wch;
        char __wchb[4];
    } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
    __GCONV_OK = 0,
    __GCONV_NOCONV,
    __GCONV_NODB,
    __GCONV_NOMEM,

    __GCONV_EMPTY_INPUT,
    __GCONV_FULL_OUTPUT,
    __GCONV_ILLEGAL_INPUT,
    __GCONV_INCOMPLETE_INPUT,

    __GCONV_ILLEGAL_DESCRIPTOR,
    __GCONV_INTERNAL_ERROR
};



enum
{
    __GCONV_IS_LAST = 0x0001,
    __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
                            __const unsigned char **, __const unsigned char *,
                            unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
                                  struct __gconv_step_data *, void *,
                                  __const unsigned char *,
                                  __const unsigned char **,
                                  __const unsigned char *, unsigned char **,
                                  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
        __const unsigned char *,
        unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
                                        size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

    __gconv_trans_fct __trans_fct;
    __gconv_trans_context_fct __trans_context_fct;
    __gconv_trans_end_fct __trans_end_fct;
    void *__data;
    struct __gconv_trans_data *__next;
};



struct __gconv_step
{
    struct __gconv_loaded_object *__shlib_handle;
    __const char *__modname;

    int __counter;

    char *__from_name;
    char *__to_name;

    __gconv_fct __fct;
    __gconv_btowc_fct __btowc_fct;
    __gconv_init_fct __init_fct;
    __gconv_end_fct __end_fct;



    int __min_needed_from;
    int __max_needed_from;
    int __min_needed_to;
    int __max_needed_to;


    int __stateful;

    void *__data;
};



struct __gconv_step_data
{
    unsigned char *__outbuf;
    unsigned char *__outbufend;



    int __flags;



    int __invocation_counter;



    int __internal_use;

    __mbstate_t *__statep;
    __mbstate_t __state;



    struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
    size_t __nsteps;
    struct __gconv_step *__steps;
    __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
    struct __gconv_info __cd;
    struct
    {
        struct __gconv_info __cd;
        struct __gconv_step_data __data;
    } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t;
struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;



    int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
    __codecvt_ok,
    __codecvt_partial,
    __codecvt_error,
    __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
    int _flags;




    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;

    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;

    struct _IO_marker *_markers;

    struct _IO_FILE *_chain;

    int _fileno;



    int _flags2;

    __off_t _old_offset;



    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];



    _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
    __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;

    int _mode;

    char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                            __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                             __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void) ;
# 188 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
    __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 231 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
                        __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
                          __const char *__restrict __modes,
                          FILE *__restrict __stream) ;
# 274 "/usr/include/stdio.h" 3 4

# 285 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 306 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                        int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
                           size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
                        __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
                        __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
                         __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
                         __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
                         __const char *__restrict __format, ...)
    __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
                          __const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 400 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
                       __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
                       __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 442 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 466 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 510 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
    ;






extern char *gets (char *__s) ;

# 591 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
                         size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                          size_t __n, FILE *__restrict __s) ;

# 644 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                                  size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                                   size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 680 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 699 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 722 "/usr/include/stdio.h" 3 4

# 731 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 761 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 780 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 820 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 850 "/usr/include/stdio.h" 3 4

# 4 "tchcheck.c" 2
# 1 "/usr/include/tcutil.h" 1 3 4
# 27 "/usr/include/tcutil.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h" 1 3 4
# 33 "/usr/include/tcutil.h" 2 3 4

# 1 "/usr/include/stdint.h" 1 3 4
# 28 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 35 "/usr/include/tcutil.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 59 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 132 "/usr/include/time.h" 3 4


struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;


    long int tm_gmtoff;
    __const char *tm_zone;




};








struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};


struct sigevent;
# 181 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
    __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
                            __const char *__restrict __format,
                            __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 229 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
                                            struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
                                               struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
                            char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
                          char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
# 312 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 327 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
                          struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
    __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
                                __const struct timespec *__req,
                                struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
                             struct sigevent *__restrict __evp,
                             timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
                              __const struct itimerspec *__restrict __value,
                              struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
    __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
# 416 "/usr/include/time.h" 3 4

# 36 "/usr/include/tcutil.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h" 1 3 4
# 37 "/usr/include/tcutil.h" 2 3 4
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 47 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__));
extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__));
extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__));
extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__));
extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__));
extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__));
extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__));
extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__));
extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__));
extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__));
extern double __tanh (double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__));
extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__));
extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__));
extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__));
extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));
extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__));
extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__));
extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__));
extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__));
extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__));
extern double __logb (double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern double pow (double __x, double __y) __attribute__ ((__nothrow__));
extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__));
extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__));
extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__));
extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__));
extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__));
extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__));
extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__));
extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__));
extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__));
extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__));
extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__));
extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__));
extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__));
extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__));
extern double __lgamma (double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern double gamma (double) __attribute__ ((__nothrow__));
extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__));
extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern double remainder (double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__));
extern int __ilogb (double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern double scalb (double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__));
extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__));
extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__));
extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__));
extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__));
extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__));
extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__));
extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__));
extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__));
extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__));
extern float __tanhf (float __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__));
extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__));
extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__));
extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__));
extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));
extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__));
extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__));
extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__));
extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__));
extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__));
extern float __logbf (float __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern float powf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__));
extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__));
extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__));
extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__));
extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__));
extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__));
extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__));
extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__));
extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__));
extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__));
extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__));
extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__));
extern float __lgammaf (float) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern float gammaf (float) __attribute__ ((__nothrow__));
extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__));
extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__));
extern int __ilogbf (float __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__));
extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__));
extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__));
extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__));
extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__));
extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__));
extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__));
extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__));
extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__));
extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__));
extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__));
extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__));
extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__));
extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__));
extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__));
extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__));
extern long double __logbl (long double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__));
extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__));
extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__));
extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__));
extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__));
extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__));
extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__));
extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__));
extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__));
extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__));
extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__));
extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__));
extern long double __lgammal (long double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern long double gammal (long double) __attribute__ ((__nothrow__));
extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__));
extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 284 "/usr/include/math.h" 3 4
typedef enum
{
    _IEEE_ = -1,
    _SVID_,
    _XOPEN_,
    _POSIX_,
    _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 309 "/usr/include/math.h" 3 4
struct exception

{
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};




extern int matherr (struct exception *__exc);
# 465 "/usr/include/math.h" 3 4

# 38 "/usr/include/tcutil.h" 2 3 4
# 47 "/usr/include/tcutil.h" 3 4
extern const char *tcversion;






extern void (*tcfatalfunc)(const char *);
# 63 "/usr/include/tcutil.h" 3 4
void *tcmalloc(size_t size);
# 73 "/usr/include/tcutil.h" 3 4
void *tccalloc(size_t nmemb, size_t size);
# 83 "/usr/include/tcutil.h" 3 4
void *tcrealloc(void *ptr, size_t size);
# 94 "/usr/include/tcutil.h" 3 4
void *tcmemdup(const void *ptr, size_t size);







char *tcstrdup(const void *str);






void tcfree(void *ptr);
# 126 "/usr/include/tcutil.h" 3 4
typedef int (*TCCMP)(const char *aptr, int asiz, const char *bptr, int bsiz, void *op);
# 136 "/usr/include/tcutil.h" 3 4
typedef void *(*TCCODEC)(const void *ptr, int size, int *sp, void *op);
# 146 "/usr/include/tcutil.h" 3 4
typedef void *(*TCPDPROC)(const void *vbuf, int vsiz, int *sp, void *op);
# 155 "/usr/include/tcutil.h" 3 4
typedef _Bool (*TCITER)(const void *kbuf, int ksiz, const void *vbuf, int vsiz, void *op);
# 164 "/usr/include/tcutil.h" 3 4
typedef struct {
    char *ptr;
    int size;
    int asize;
} TCXSTR;




TCXSTR *tcxstrnew(void);





TCXSTR *tcxstrnew2(const char *str);





TCXSTR *tcxstrnew3(int asiz);





TCXSTR *tcxstrdup(const TCXSTR *xstr);





void tcxstrdel(TCXSTR *xstr);






void tcxstrcat(TCXSTR *xstr, const void *ptr, int size);





void tcxstrcat2(TCXSTR *xstr, const char *str);







const void *tcxstrptr(const TCXSTR *xstr);





int tcxstrsize(const TCXSTR *xstr);





void tcxstrclear(TCXSTR *xstr);
# 241 "/usr/include/tcutil.h" 3 4
void tcxstrprintf(TCXSTR *xstr, const char *format, ...);
# 254 "/usr/include/tcutil.h" 3 4
char *tcsprintf(const char *format, ...);
# 271 "/usr/include/tcutil.h" 3 4
void *tcxstrtomalloc(TCXSTR *xstr);







TCXSTR *tcxstrfrommalloc(void *ptr, int size);
# 288 "/usr/include/tcutil.h" 3 4
typedef struct {
    char *ptr;
    int size;
} TCLISTDATUM;

typedef struct {
    TCLISTDATUM *array;
    int anum;
    int start;
    int num;
} TCLIST;




TCLIST *tclistnew(void);





TCLIST *tclistnew2(int anum);






TCLIST *tclistnew3(const char *str, ...);





TCLIST *tclistdup(const TCLIST *list);





void tclistdel(TCLIST *list);





int tclistnum(const TCLIST *list);
# 346 "/usr/include/tcutil.h" 3 4
const void *tclistval(const TCLIST *list, int index, int *sp);







const char *tclistval2(const TCLIST *list, int index);






void tclistpush(TCLIST *list, const void *ptr, int size);





void tclistpush2(TCLIST *list, const char *str);
# 379 "/usr/include/tcutil.h" 3 4
void *tclistpop(TCLIST *list, int *sp);
# 388 "/usr/include/tcutil.h" 3 4
char *tclistpop2(TCLIST *list);






void tclistunshift(TCLIST *list, const void *ptr, int size);





void tclistunshift2(TCLIST *list, const char *str);
# 413 "/usr/include/tcutil.h" 3 4
void *tclistshift(TCLIST *list, int *sp);
# 422 "/usr/include/tcutil.h" 3 4
char *tclistshift2(TCLIST *list);
# 431 "/usr/include/tcutil.h" 3 4
void tclistinsert(TCLIST *list, int index, const void *ptr, int size);







void tclistinsert2(TCLIST *list, int index, const char *str);
# 453 "/usr/include/tcutil.h" 3 4
void *tclistremove(TCLIST *list, int index, int *sp);
# 463 "/usr/include/tcutil.h" 3 4
char *tclistremove2(TCLIST *list, int index);
# 472 "/usr/include/tcutil.h" 3 4
void tclistover(TCLIST *list, int index, const void *ptr, int size);







void tclistover2(TCLIST *list, int index, const char *str);




void tclistsort(TCLIST *list);
# 495 "/usr/include/tcutil.h" 3 4
int tclistlsearch(const TCLIST *list, const void *ptr, int size);
# 505 "/usr/include/tcutil.h" 3 4
int tclistbsearch(const TCLIST *list, const void *ptr, int size);





void tclistclear(TCLIST *list);
# 521 "/usr/include/tcutil.h" 3 4
void *tclistdump(const TCLIST *list, int *sp);
# 530 "/usr/include/tcutil.h" 3 4
TCLIST *tclistload(const void *ptr, int size);
# 544 "/usr/include/tcutil.h" 3 4
void tclistpushmalloc(TCLIST *list, void *ptr, int size);




void tclistsortci(TCLIST *list);







void tclistsortex(TCLIST *list, int (*cmp)(const TCLISTDATUM *, const TCLISTDATUM *));




void tclistinvert(TCLIST *list);
# 573 "/usr/include/tcutil.h" 3 4
void tclistprintf(TCLIST *list, const char *format, ...);
# 582 "/usr/include/tcutil.h" 3 4
typedef struct _TCMAPREC {
    int32_t ksiz;
    int32_t vsiz;
    struct _TCMAPREC *left;
    struct _TCMAPREC *right;
    struct _TCMAPREC *prev;
    struct _TCMAPREC *next;
} TCMAPREC;

typedef struct {
    TCMAPREC **buckets;
    TCMAPREC *first;
    TCMAPREC *last;
    TCMAPREC *cur;
    uint32_t bnum;
    uint64_t rnum;
    uint64_t msiz;
} TCMAP;




TCMAP *tcmapnew(void);





TCMAP *tcmapnew2(uint32_t bnum);







TCMAP *tcmapnew3(const char *str, ...);





TCMAP *tcmapdup(const TCMAP *map);





void tcmapdel(TCMAP *map);
# 640 "/usr/include/tcutil.h" 3 4
void tcmapput(TCMAP *map, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcmapput2(TCMAP *map, const char *kstr, const char *vstr);
# 659 "/usr/include/tcutil.h" 3 4
_Bool tcmapputkeep(TCMAP *map, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 668 "/usr/include/tcutil.h" 3 4
_Bool tcmapputkeep2(TCMAP *map, const char *kstr, const char *vstr);
# 678 "/usr/include/tcutil.h" 3 4
void tcmapputcat(TCMAP *map, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcmapputcat2(TCMAP *map, const char *kstr, const char *vstr);
# 695 "/usr/include/tcutil.h" 3 4
_Bool tcmapout(TCMAP *map, const void *kbuf, int ksiz);







_Bool tcmapout2(TCMAP *map, const char *kstr);
# 716 "/usr/include/tcutil.h" 3 4
const void *tcmapget(const TCMAP *map, const void *kbuf, int ksiz, int *sp);







const char *tcmapget2(const TCMAP *map, const char *kstr);
# 734 "/usr/include/tcutil.h" 3 4
_Bool tcmapmove(TCMAP *map, const void *kbuf, int ksiz, _Bool head);
# 743 "/usr/include/tcutil.h" 3 4
_Bool tcmapmove2(TCMAP *map, const char *kstr, _Bool head);





void tcmapiterinit(TCMAP *map);
# 761 "/usr/include/tcutil.h" 3 4
const void *tcmapiternext(TCMAP *map, int *sp);







const char *tcmapiternext2(TCMAP *map);





uint64_t tcmaprnum(const TCMAP *map);





uint64_t tcmapmsiz(const TCMAP *map);







TCLIST *tcmapkeys(const TCMAP *map);







TCLIST *tcmapvals(const TCMAP *map);
# 808 "/usr/include/tcutil.h" 3 4
int tcmapaddint(TCMAP *map, const void *kbuf, int ksiz, int num);
# 819 "/usr/include/tcutil.h" 3 4
double tcmapadddouble(TCMAP *map, const void *kbuf, int ksiz, double num);





void tcmapclear(TCMAP *map);





void tcmapcutfront(TCMAP *map, int num);
# 841 "/usr/include/tcutil.h" 3 4
void *tcmapdump(const TCMAP *map, int *sp);
# 850 "/usr/include/tcutil.h" 3 4
TCMAP *tcmapload(const void *ptr, int size);
# 867 "/usr/include/tcutil.h" 3 4
void tcmapput3(TCMAP *map, const void *kbuf, int ksiz, const char *vbuf, int vsiz);
# 879 "/usr/include/tcutil.h" 3 4
void tcmapput4(TCMAP *map, const void *kbuf, int ksiz,
               const void *fvbuf, int fvsiz, const void *lvbuf, int lvsiz);
# 890 "/usr/include/tcutil.h" 3 4
void tcmapputcat3(TCMAP *map, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 910 "/usr/include/tcutil.h" 3 4
_Bool tcmapputproc(TCMAP *map, const void *kbuf, int ksiz, const void *vbuf, int vsiz,
                   TCPDPROC proc, void *op);
# 926 "/usr/include/tcutil.h" 3 4
const void *tcmapget3(TCMAP *map, const void *kbuf, int ksiz, int *sp);
# 935 "/usr/include/tcutil.h" 3 4
const char *tcmapget4(TCMAP *map, const char *kstr, const char *dstr);







void tcmapiterinit2(TCMAP *map, const void *kbuf, int ksiz);






void tcmapiterinit3(TCMAP *map, const char *kstr);
# 960 "/usr/include/tcutil.h" 3 4
const void *tcmapiterval(const void *kbuf, int *sp);





const char *tcmapiterval2(const char *kstr);
# 977 "/usr/include/tcutil.h" 3 4
const char **tcmapkeys2(const TCMAP *map, int *np);
# 988 "/usr/include/tcutil.h" 3 4
const char **tcmapvals2(const TCMAP *map, int *np);
# 1002 "/usr/include/tcutil.h" 3 4
void *tcmaploadone(const void *ptr, int size, const void *kbuf, int ksiz, int *sp);
# 1014 "/usr/include/tcutil.h" 3 4
void tcmapprintf(TCMAP *map, const char *kstr, const char *format, ...);
# 1023 "/usr/include/tcutil.h" 3 4
typedef struct _TCTREEREC {
    int32_t ksiz;
    int32_t vsiz;
    struct _TCTREEREC *left;
    struct _TCTREEREC *right;
} TCTREEREC;

typedef struct {
    TCTREEREC *root;
    TCTREEREC *cur;
    uint64_t rnum;
    uint64_t msiz;
    TCCMP cmp;
    void *cmpop;
} TCTREE;




TCTREE *tctreenew(void);
# 1057 "/usr/include/tcutil.h" 3 4
TCTREE *tctreenew2(TCCMP cmp, void *cmpop);





TCTREE *tctreedup(const TCTREE *tree);





void tctreedel(TCTREE *tree);
# 1079 "/usr/include/tcutil.h" 3 4
void tctreeput(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tctreeput2(TCTREE *tree, const char *kstr, const char *vstr);
# 1098 "/usr/include/tcutil.h" 3 4
_Bool tctreeputkeep(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1107 "/usr/include/tcutil.h" 3 4
_Bool tctreeputkeep2(TCTREE *tree, const char *kstr, const char *vstr);
# 1117 "/usr/include/tcutil.h" 3 4
void tctreeputcat(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tctreeputcat2(TCTREE *tree, const char *kstr, const char *vstr);
# 1145 "/usr/include/tcutil.h" 3 4
_Bool tctreeputproc(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz,
                    TCPDPROC proc, void *op);
# 1155 "/usr/include/tcutil.h" 3 4
_Bool tctreeout(TCTREE *tree, const void *kbuf, int ksiz);







_Bool tctreeout2(TCTREE *tree, const char *kstr);
# 1176 "/usr/include/tcutil.h" 3 4
const void *tctreeget(TCTREE *tree, const void *kbuf, int ksiz, int *sp);







const char *tctreeget2(TCTREE *tree, const char *kstr);





void tctreeiterinit(TCTREE *tree);
# 1202 "/usr/include/tcutil.h" 3 4
const void *tctreeiternext(TCTREE *tree, int *sp);







const char *tctreeiternext2(TCTREE *tree);





uint64_t tctreernum(const TCTREE *tree);





uint64_t tctreemsiz(const TCTREE *tree);







TCLIST *tctreekeys(const TCTREE *tree);







TCLIST *tctreevals(const TCTREE *tree);
# 1249 "/usr/include/tcutil.h" 3 4
int tctreeaddint(TCTREE *tree, const void *kbuf, int ksiz, int num);
# 1260 "/usr/include/tcutil.h" 3 4
double tctreeadddouble(TCTREE *tree, const void *kbuf, int ksiz, double num);





void tctreeclear(TCTREE *tree);





void tctreecutfringe(TCTREE *tree, int num);
# 1282 "/usr/include/tcutil.h" 3 4
void *tctreedump(const TCTREE *tree, int *sp);
# 1294 "/usr/include/tcutil.h" 3 4
TCTREE *tctreeload(const void *ptr, int size, TCCMP cmp, void *cmpop);
# 1311 "/usr/include/tcutil.h" 3 4
void tctreeput3(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1323 "/usr/include/tcutil.h" 3 4
_Bool tctreeputkeep3(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1334 "/usr/include/tcutil.h" 3 4
void tctreeputcat3(TCTREE *tree, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1348 "/usr/include/tcutil.h" 3 4
const void *tctreeget3(const TCTREE *tree, const void *kbuf, int ksiz, int *sp);
# 1357 "/usr/include/tcutil.h" 3 4
const char *tctreeget4(TCTREE *tree, const char *kstr, const char *dstr);
# 1366 "/usr/include/tcutil.h" 3 4
void tctreeiterinit2(TCTREE *tree, const void *kbuf, int ksiz);







void tctreeiterinit3(TCTREE *tree, const char *kstr);
# 1384 "/usr/include/tcutil.h" 3 4
const void *tctreeiterval(const void *kbuf, int *sp);





const char *tctreeiterval2(const char *kstr);
# 1401 "/usr/include/tcutil.h" 3 4
const char **tctreekeys2(const TCTREE *tree, int *np);
# 1412 "/usr/include/tcutil.h" 3 4
const char **tctreevals2(const TCTREE *tree, int *np);
# 1426 "/usr/include/tcutil.h" 3 4
void *tctreeloadone(const void *ptr, int size, const void *kbuf, int ksiz, int *sp);
# 1438 "/usr/include/tcutil.h" 3 4
void tctreeprintf(TCTREE *tree, const char *kstr, const char *format, ...);
# 1447 "/usr/include/tcutil.h" 3 4
typedef struct {
    void **mmtxs;
    void *imtx;
    TCMAP **maps;
    int iter;
} TCMDB;





TCMDB *tcmdbnew(void);






TCMDB *tcmdbnew2(uint32_t bnum);




void tcmdbdel(TCMDB *mdb);
# 1480 "/usr/include/tcutil.h" 3 4
void tcmdbput(TCMDB *mdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcmdbput2(TCMDB *mdb, const char *kstr, const char *vstr);
# 1499 "/usr/include/tcutil.h" 3 4
_Bool tcmdbputkeep(TCMDB *mdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1508 "/usr/include/tcutil.h" 3 4
_Bool tcmdbputkeep2(TCMDB *mdb, const char *kstr, const char *vstr);
# 1518 "/usr/include/tcutil.h" 3 4
void tcmdbputcat(TCMDB *mdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcmdbputcat2(TCMDB *mdb, const char *kstr, const char *vstr);
# 1535 "/usr/include/tcutil.h" 3 4
_Bool tcmdbout(TCMDB *mdb, const void *kbuf, int ksiz);







_Bool tcmdbout2(TCMDB *mdb, const char *kstr);
# 1558 "/usr/include/tcutil.h" 3 4
void *tcmdbget(TCMDB *mdb, const void *kbuf, int ksiz, int *sp);
# 1568 "/usr/include/tcutil.h" 3 4
char *tcmdbget2(TCMDB *mdb, const char *kstr);
# 1577 "/usr/include/tcutil.h" 3 4
int tcmdbvsiz(TCMDB *mdb, const void *kbuf, int ksiz);







int tcmdbvsiz2(TCMDB *mdb, const char *kstr);






void tcmdbiterinit(TCMDB *mdb);
# 1606 "/usr/include/tcutil.h" 3 4
void *tcmdbiternext(TCMDB *mdb, int *sp);
# 1616 "/usr/include/tcutil.h" 3 4
char *tcmdbiternext2(TCMDB *mdb);
# 1630 "/usr/include/tcutil.h" 3 4
TCLIST *tcmdbfwmkeys(TCMDB *mdb, const void *pbuf, int psiz, int max);
# 1643 "/usr/include/tcutil.h" 3 4
TCLIST *tcmdbfwmkeys2(TCMDB *mdb, const char *pstr, int max);





uint64_t tcmdbrnum(TCMDB *mdb);





uint64_t tcmdbmsiz(TCMDB *mdb);
# 1666 "/usr/include/tcutil.h" 3 4
int tcmdbaddint(TCMDB *mdb, const void *kbuf, int ksiz, int num);
# 1677 "/usr/include/tcutil.h" 3 4
double tcmdbadddouble(TCMDB *mdb, const void *kbuf, int ksiz, double num);





void tcmdbvanish(TCMDB *mdb);





void tcmdbcutfront(TCMDB *mdb, int num);
# 1706 "/usr/include/tcutil.h" 3 4
void tcmdbput3(TCMDB *mdb, const void *kbuf, int ksiz, const char *vbuf, int vsiz);
# 1718 "/usr/include/tcutil.h" 3 4
void tcmdbput4(TCMDB *mdb, const void *kbuf, int ksiz,
               const void *fvbuf, int fvsiz, const void *lvbuf, int lvsiz);
# 1729 "/usr/include/tcutil.h" 3 4
void tcmdbputcat3(TCMDB *mdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1749 "/usr/include/tcutil.h" 3 4
_Bool tcmdbputproc(TCMDB *mdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz,
                   TCPDPROC proc, void *op);
# 1766 "/usr/include/tcutil.h" 3 4
void *tcmdbget3(TCMDB *mdb, const void *kbuf, int ksiz, int *sp);







void tcmdbiterinit2(TCMDB *mdb, const void *kbuf, int ksiz);






void tcmdbiterinit3(TCMDB *mdb, const char *kstr);
# 1793 "/usr/include/tcutil.h" 3 4
void tcmdbforeach(TCMDB *mdb, TCITER iter, void *op);
# 1802 "/usr/include/tcutil.h" 3 4
typedef struct {
    void *mmtx;
    TCTREE *tree;
} TCNDB;





TCNDB *tcndbnew(void);
# 1822 "/usr/include/tcutil.h" 3 4
TCNDB *tcndbnew2(TCCMP cmp, void *cmpop);




void tcndbdel(TCNDB *ndb);
# 1837 "/usr/include/tcutil.h" 3 4
void tcndbput(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcndbput2(TCNDB *ndb, const char *kstr, const char *vstr);
# 1856 "/usr/include/tcutil.h" 3 4
_Bool tcndbputkeep(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 1865 "/usr/include/tcutil.h" 3 4
_Bool tcndbputkeep2(TCNDB *ndb, const char *kstr, const char *vstr);
# 1875 "/usr/include/tcutil.h" 3 4
void tcndbputcat(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);







void tcndbputcat2(TCNDB *ndb, const char *kstr, const char *vstr);
# 1892 "/usr/include/tcutil.h" 3 4
_Bool tcndbout(TCNDB *ndb, const void *kbuf, int ksiz);







_Bool tcndbout2(TCNDB *ndb, const char *kstr);
# 1915 "/usr/include/tcutil.h" 3 4
void *tcndbget(TCNDB *ndb, const void *kbuf, int ksiz, int *sp);
# 1925 "/usr/include/tcutil.h" 3 4
char *tcndbget2(TCNDB *ndb, const char *kstr);
# 1934 "/usr/include/tcutil.h" 3 4
int tcndbvsiz(TCNDB *ndb, const void *kbuf, int ksiz);







int tcndbvsiz2(TCNDB *ndb, const char *kstr);






void tcndbiterinit(TCNDB *ndb);
# 1963 "/usr/include/tcutil.h" 3 4
void *tcndbiternext(TCNDB *ndb, int *sp);
# 1973 "/usr/include/tcutil.h" 3 4
char *tcndbiternext2(TCNDB *ndb);
# 1986 "/usr/include/tcutil.h" 3 4
TCLIST *tcndbfwmkeys(TCNDB *ndb, const void *pbuf, int psiz, int max);
# 1998 "/usr/include/tcutil.h" 3 4
TCLIST *tcndbfwmkeys2(TCNDB *ndb, const char *pstr, int max);





uint64_t tcndbrnum(TCNDB *ndb);





uint64_t tcndbmsiz(TCNDB *ndb);
# 2021 "/usr/include/tcutil.h" 3 4
int tcndbaddint(TCNDB *ndb, const void *kbuf, int ksiz, int num);
# 2032 "/usr/include/tcutil.h" 3 4
double tcndbadddouble(TCNDB *ndb, const void *kbuf, int ksiz, double num);





void tcndbvanish(TCNDB *ndb);





void tcndbcutfringe(TCNDB *ndb, int num);
# 2061 "/usr/include/tcutil.h" 3 4
void tcndbput3(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 2073 "/usr/include/tcutil.h" 3 4
_Bool tcndbputkeep3(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 2084 "/usr/include/tcutil.h" 3 4
void tcndbputcat3(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 2104 "/usr/include/tcutil.h" 3 4
_Bool tcndbputproc(TCNDB *ndb, const void *kbuf, int ksiz, const void *vbuf, int vsiz,
                   TCPDPROC proc, void *op);
# 2120 "/usr/include/tcutil.h" 3 4
void *tcndbget3(TCNDB *ndb, const void *kbuf, int ksiz, int *sp);
# 2129 "/usr/include/tcutil.h" 3 4
void tcndbiterinit2(TCNDB *ndb, const void *kbuf, int ksiz);







void tcndbiterinit3(TCNDB *ndb, const char *kstr);
# 2149 "/usr/include/tcutil.h" 3 4
void tcndbforeach(TCNDB *ndb, TCITER iter, void *op);
# 2158 "/usr/include/tcutil.h" 3 4
typedef struct {
    void *ptr;
    void (*del)(void *);
} TCMPELEM;

typedef struct {
    void *mutex;
    TCMPELEM *elems;
    int anum;
    int num;
} TCMPOOL;




TCMPOOL *tcmpoolnew(void);





void tcmpooldel(TCMPOOL *mpool);
# 2190 "/usr/include/tcutil.h" 3 4
void *tcmpoolpush(TCMPOOL *mpool, void *ptr, void (*del)(void *));
# 2200 "/usr/include/tcutil.h" 3 4
void *tcmpoolpushptr(TCMPOOL *mpool, void *ptr);
# 2209 "/usr/include/tcutil.h" 3 4
TCXSTR *tcmpoolpushxstr(TCMPOOL *mpool, TCXSTR *xstr);
# 2218 "/usr/include/tcutil.h" 3 4
TCLIST *tcmpoolpushlist(TCMPOOL *mpool, TCLIST *list);
# 2227 "/usr/include/tcutil.h" 3 4
TCMAP *tcmpoolpushmap(TCMPOOL *mpool, TCMAP *map);
# 2236 "/usr/include/tcutil.h" 3 4
TCTREE *tcmpoolpushtree(TCMPOOL *mpool, TCTREE *tree);





void *tcmpoolmalloc(TCMPOOL *mpool, size_t size);




TCXSTR *tcmpoolxstrnew(TCMPOOL *mpool);




TCLIST *tcmpoollistnew(TCMPOOL *mpool);




TCMAP *tcmpoolmapnew(TCMPOOL *mpool);




TCTREE *tcmpooltreenew(TCMPOOL *mpool);





void tcmpoolpop(TCMPOOL *mpool, _Bool exe);






TCMPOOL *tcmpoolglobal(void);
# 2288 "/usr/include/tcutil.h" 3 4
long tclmax(long a, long b);






long tclmin(long a, long b);






unsigned long tclrand(void);






double tcdrand(void);
# 2318 "/usr/include/tcutil.h" 3 4
double tcdrandnd(double avg, double sd);







int tcstricmp(const char *astr, const char *bstr);






_Bool tcstrfwm(const char *str, const char *key);






_Bool tcstrifwm(const char *str, const char *key);






_Bool tcstrbwm(const char *str, const char *key);






_Bool tcstribwm(const char *str, const char *key);







int tcstrdist(const char *astr, const char *bstr);







int tcstrdistutf(const char *astr, const char *bstr);





char *tcstrtoupper(char *str);





char *tcstrtolower(char *str);





char *tcstrtrim(char *str);





char *tcstrsqzspc(char *str);
# 2403 "/usr/include/tcutil.h" 3 4
char *tcstrsubchr(char *str, const char *rstr, const char *sstr);





int tcstrcntutf(const char *str);






char *tcstrcututf(char *str, int num);
# 2425 "/usr/include/tcutil.h" 3 4
void tcstrutftoucs(const char *str, uint16_t *ary, int *np);
# 2434 "/usr/include/tcutil.h" 3 4
int tcstrucstoutf(const uint16_t *ary, int num, char *str);
# 2444 "/usr/include/tcutil.h" 3 4
TCLIST *tcstrsplit(const char *str, const char *delims);
# 2453 "/usr/include/tcutil.h" 3 4
char *tcstrjoin(const TCLIST *list, char delim);







int64_t tcatoi(const char *str);
# 2470 "/usr/include/tcutil.h" 3 4
int64_t tcatoix(const char *str);







double tcatof(const char *str);







_Bool tcregexmatch(const char *str, const char *regex);
# 2501 "/usr/include/tcutil.h" 3 4
char *tcregexreplace(const char *str, const char *regex, const char *alt);







void tcmd5hash(const void *ptr, int size, char *buf);
# 2519 "/usr/include/tcutil.h" 3 4
void tcarccipher(const void *ptr, int size, const void *kbuf, int ksiz, void *obuf);




double tctime(void);
# 2544 "/usr/include/tcutil.h" 3 4
void tccalendar(int64_t t, int jl, int *yearp, int *monp, int *dayp,
                int *hourp, int *minp, int *secp);
# 2556 "/usr/include/tcutil.h" 3 4
void tcdatestrwww(int64_t t, int jl, char *buf);
# 2567 "/usr/include/tcutil.h" 3 4
void tcdatestrhttp(int64_t t, int jl, char *buf);







int64_t tcstrmktime(const char *str);




int tcjetlag(void);







int tcdayofweek(int year, int mon, int day);
# 2597 "/usr/include/tcutil.h" 3 4
enum {
    TCUNSPACE = 1 << 0,
    TCUNLOWER = 1 << 1,
    TCUNNOACC = 1 << 2,
    TCUNWIDTH = 1 << 3
};

enum {
    TCKWMUTAB = 1 << 0,
    TCKWMUCTRL = 1 << 1,
    TCKWMUBRCT = 1 << 2,
    TCKWNOOVER = 1 << 24,
    TCKWPULEAD = 1 << 25
};

typedef struct {
    uint32_t seq;
    uint32_t hash;
} TCCHIDXNODE;

typedef struct {
    TCCHIDXNODE *nodes;
    int nnum;
} TCCHIDX;





_Bool tcstrisnum(const char *str);






int64_t tcatoih(const char *str);





const char *tcstrskipspc(const char *str);
# 2650 "/usr/include/tcutil.h" 3 4
char *tcstrutfnorm(char *str, int opts);
# 2662 "/usr/include/tcutil.h" 3 4
int tcstrucsnorm(uint16_t *ary, int num, int opts);
# 2677 "/usr/include/tcutil.h" 3 4
TCLIST *tcstrkwic(const char *str, const TCLIST *words, int width, int opts);







TCLIST *tcstrtokenize(const char *str);
# 2695 "/usr/include/tcutil.h" 3 4
TCLIST *tcstrsplit2(const void *ptr, int size);
# 2705 "/usr/include/tcutil.h" 3 4
TCMAP *tcstrsplit3(const char *str, const char *delims);
# 2715 "/usr/include/tcutil.h" 3 4
TCMAP *tcstrsplit4(const void *ptr, int size);
# 2725 "/usr/include/tcutil.h" 3 4
void *tcstrjoin2(const TCLIST *list, int *sp);
# 2735 "/usr/include/tcutil.h" 3 4
char *tcstrjoin3(const TCMAP *map, char delim);
# 2746 "/usr/include/tcutil.h" 3 4
void *tcstrjoin4(const TCMAP *map, int *sp);
# 2757 "/usr/include/tcutil.h" 3 4
void tctopsort(void *base, size_t nmemb, size_t size, size_t top,
               int(*compar)(const void *, const void *));





_Bool tcsleep(double sec);
# 2774 "/usr/include/tcutil.h" 3 4
TCMAP *tcsysinfo(void);
# 2783 "/usr/include/tcutil.h" 3 4
TCCHIDX *tcchidxnew(int range);




void tcchidxdel(TCCHIDX *chidx);







int tcchidxhash(TCCHIDX *chidx, const void *ptr, int size);
# 2811 "/usr/include/tcutil.h" 3 4
char *tcrealpath(const char *path);
# 2823 "/usr/include/tcutil.h" 3 4
_Bool tcstatfile(const char *path, _Bool *isdirp, int64_t *sizep, int64_t *mtimep);
# 2838 "/usr/include/tcutil.h" 3 4
void *tcreadfile(const char *path, int limit, int *sp);
# 2847 "/usr/include/tcutil.h" 3 4
TCLIST *tcreadfilelines(const char *path);







_Bool tcwritefile(const char *path, const void *ptr, int size);







_Bool tccopyfile(const char *src, const char *dest);
# 2872 "/usr/include/tcutil.h" 3 4
TCLIST *tcreaddir(const char *path);
# 2881 "/usr/include/tcutil.h" 3 4
TCLIST *tcglobpat(const char *pattern);






_Bool tcremovelink(const char *path);







_Bool tcwrite(int fd, const void *buf, size_t size);







_Bool tcread(int fd, void *buf, size_t size);







_Bool tclock(int fd, _Bool ex, _Bool nb);





_Bool tcunlock(int fd);







int tcsystem(const char **args, int anum);
# 2941 "/usr/include/tcutil.h" 3 4
char *tcurlencode(const char *ptr, int size);
# 2953 "/usr/include/tcutil.h" 3 4
char *tcurldecode(const char *str, int *sp);
# 2967 "/usr/include/tcutil.h" 3 4
TCMAP *tcurlbreak(const char *str);
# 2977 "/usr/include/tcutil.h" 3 4
char *tcurlresolve(const char *base, const char *target);
# 2986 "/usr/include/tcutil.h" 3 4
char *tcbaseencode(const char *ptr, int size);
# 2998 "/usr/include/tcutil.h" 3 4
char *tcbasedecode(const char *str, int *sp);
# 3007 "/usr/include/tcutil.h" 3 4
char *tcquoteencode(const char *ptr, int size);
# 3019 "/usr/include/tcutil.h" 3 4
char *tcquotedecode(const char *str, int *sp);
# 3029 "/usr/include/tcutil.h" 3 4
char *tcmimeencode(const char *str, const char *encname, _Bool base);
# 3039 "/usr/include/tcutil.h" 3 4
char *tcmimedecode(const char *str, char *enp);
# 3057 "/usr/include/tcutil.h" 3 4
char *tcmimebreak(const char *ptr, int size, TCMAP *headers, int *sp);
# 3067 "/usr/include/tcutil.h" 3 4
TCLIST *tcmimeparts(const char *ptr, int size, const char *boundary);
# 3076 "/usr/include/tcutil.h" 3 4
char *tchexencode(const char *ptr, int size);
# 3088 "/usr/include/tcutil.h" 3 4
char *tchexdecode(const char *str, int *sp);
# 3099 "/usr/include/tcutil.h" 3 4
char *tcpackencode(const char *ptr, int size, int *sp);
# 3112 "/usr/include/tcutil.h" 3 4
char *tcpackdecode(const char *ptr, int size, int *sp);
# 3123 "/usr/include/tcutil.h" 3 4
char *tcbsencode(const char *ptr, int size, int *sp);
# 3136 "/usr/include/tcutil.h" 3 4
char *tcbsdecode(const char *ptr, int size, int *sp);
# 3147 "/usr/include/tcutil.h" 3 4
char *tcdeflate(const char *ptr, int size, int *sp);
# 3160 "/usr/include/tcutil.h" 3 4
char *tcinflate(const char *ptr, int size, int *sp);
# 3171 "/usr/include/tcutil.h" 3 4
char *tcgzipencode(const char *ptr, int size, int *sp);
# 3184 "/usr/include/tcutil.h" 3 4
char *tcgzipdecode(const char *ptr, int size, int *sp);






unsigned int tcgetcrc(const char *ptr, int size);
# 3202 "/usr/include/tcutil.h" 3 4
char *tcbzipencode(const char *ptr, int size, int *sp);
# 3215 "/usr/include/tcutil.h" 3 4
char *tcbzipdecode(const char *ptr, int size, int *sp);
# 3226 "/usr/include/tcutil.h" 3 4
char *tcberencode(const unsigned int *ary, int anum, int *sp);
# 3237 "/usr/include/tcutil.h" 3 4
unsigned int *tcberdecode(const char *ptr, int size, int *np);
# 3246 "/usr/include/tcutil.h" 3 4
char *tcxmlescape(const char *str);
# 3255 "/usr/include/tcutil.h" 3 4
char *tcxmlunescape(const char *str);
# 3269 "/usr/include/tcutil.h" 3 4
char *tcwwwformencode(const TCMAP *params);





void tcwwwformdecode(const char *str, TCMAP *params);
# 3284 "/usr/include/tcutil.h" 3 4
void tcwwwformdecode2(const void *ptr, int size, const char *type, TCMAP *params);
# 3293 "/usr/include/tcutil.h" 3 4
TCLIST *tcxmlbreak(const char *str);
# 3302 "/usr/include/tcutil.h" 3 4
TCMAP *tcxmlattrs(const char *str);







char *tccstrescape(const char *str);







char *tccstrunescape(const char *str);







char *tcjsonescape(const char *str);







char *tcjsonunescape(const char *str);
# 3343 "/usr/include/tcutil.h" 3 4
typedef struct {
    TCLIST *elems;
    char *begsep;
    char *endsep;
    TCMAP *conf;
} TCTMPL;




TCTMPL *tctmplnew(void);




void tctmpldel(TCTMPL *tmpl);






void tctmplsetsep(TCTMPL *tmpl, const char *begsep, const char *endsep);
# 3396 "/usr/include/tcutil.h" 3 4
void tctmplload(TCTMPL *tmpl, const char *str);






_Bool tctmplload2(TCTMPL *tmpl, const char *path);
# 3412 "/usr/include/tcutil.h" 3 4
char *tctmpldump(TCTMPL *tmpl, const TCMAP *vars);







const char *tctmplconf(TCTMPL *tmpl, const char *name);





void tclistpushlist(TCLIST *list, const TCLIST *obj);





void tclistpushmap(TCLIST *list, const TCMAP *obj);






void tcmapputlist(TCMAP *map, const char *kstr, const TCLIST *obj);






void tcmapputmap(TCMAP *map, const char *kstr, const TCMAP *obj);
# 3455 "/usr/include/tcutil.h" 3 4
typedef struct {
    void **array;
    int anum;
    int start;
    int num;
} TCPTRLIST;




TCPTRLIST *tcptrlistnew(void);





TCPTRLIST *tcptrlistnew2(int anum);





TCPTRLIST *tcptrlistdup(const TCPTRLIST *ptrlist);





void tcptrlistdel(TCPTRLIST *ptrlist);





int tcptrlistnum(const TCPTRLIST *ptrlist);







void *tcptrlistval(const TCPTRLIST *ptrlist, int index);





void tcptrlistpush(TCPTRLIST *ptrlist, void *ptr);






void *tcptrlistpop(TCPTRLIST *ptrlist);





void tcptrlistunshift(TCPTRLIST *ptrlist, void *ptr);






void *tcptrlistshift(TCPTRLIST *ptrlist);







void tcptrlistinsert(TCPTRLIST *ptrlist, int index, void *ptr);
# 3540 "/usr/include/tcutil.h" 3 4
void *tcptrlistremove(TCPTRLIST *ptrlist, int index);







void tcptrlistover(TCPTRLIST *ptrlist, int index, void *ptr);





void tcptrlistclear(TCPTRLIST *ptrlist);
# 3563 "/usr/include/tcutil.h" 3 4
typedef struct {
    uint8_t *sp;
    uint8_t *cp;
    int idx;
    int size;
} TCBITSTRM;

typedef unsigned char TCBITMAP;
# 3684 "/usr/include/tcutil.h" 3 4
enum {
    TCESUCCESS,
    TCETHREAD,
    TCEINVALID,
    TCENOFILE,
    TCENOPERM,
    TCEMETA,
    TCERHEAD,
    TCEOPEN,
    TCECLOSE,
    TCETRUNC,
    TCESYNC,
    TCESTAT,
    TCESEEK,
    TCEREAD,
    TCEWRITE,
    TCEMMAP,
    TCELOCK,
    TCEUNLINK,
    TCERENAME,
    TCEMKDIR,
    TCERMDIR,
    TCEKEEP,
    TCENOREC,
    TCEMISC = 9999
};

enum {
    TCDBTHASH,
    TCDBTBTREE,
    TCDBTFIXED,
    TCDBTTABLE
};





const char *tcerrmsg(int ecode);





void *tcmyfatal(const char *message);







void *tczeromap(uint64_t size);




void tczerounmap(void *ptr);




_Bool tcglobalmutexlock(void);




_Bool tcglobalmutexlockshared(void);




_Bool tcglobalmutexunlock(void);





_Bool tcpathlock(const char *path);





_Bool tcpathunlock(const char *path);
# 3778 "/usr/include/tcutil.h" 3 4
int tcnumtostrbin(uint64_t num, char *buf, int col, int fc);
# 3789 "/usr/include/tcutil.h" 3 4
int tccmplexical(const char *aptr, int asiz, const char *bptr, int bsiz, void *op);
# 3800 "/usr/include/tcutil.h" 3 4
int tccmpdecimal(const char *aptr, int asiz, const char *bptr, int bsiz, void *op);
# 3811 "/usr/include/tcutil.h" 3 4
int tccmpint32(const char *aptr, int asiz, const char *bptr, int bsiz, void *op);
# 3822 "/usr/include/tcutil.h" 3 4
int tccmpint64(const char *aptr, int asiz, const char *bptr, int bsiz, void *op);
# 3835 "/usr/include/tcutil.h" 3 4
char *tcbwtencode(const char *ptr, int size, int *idxp);
# 3847 "/usr/include/tcutil.h" 3 4
char *tcbwtdecode(const char *ptr, int size, int idx);





long tclog2l(long num);





double tclog2d(double num);





uint64_t tcpagealign(uint64_t off);
# 4166 "/usr/include/tcutil.h" 3 4

# 5 "tchcheck.c" 2
# 1 "/usr/include/tchdb.h" 1 3 4
# 27 "/usr/include/tchdb.h" 3 4

# 39 "/usr/include/tchdb.h" 3 4
typedef struct {
    void *mmtx;
    void *rmtxs;
    void *dmtx;
    void *tmtx;
    void *wmtx;
    void *eckey;
    char *rpath;
    uint8_t type;
    uint8_t flags;
    uint64_t bnum;
    uint8_t apow;
    uint8_t fpow;
    uint8_t opts;
    char *path;
    int fd;
    uint32_t omode;
    uint64_t rnum;
    uint64_t fsiz;
    uint64_t frec;
    uint64_t dfcur;
    uint64_t iter;
    char *map;
    uint64_t msiz;
    uint64_t xmsiz;
    uint64_t xfsiz;
    uint32_t *ba32;
    uint64_t *ba64;
    uint32_t align;
    uint32_t runit;
    _Bool zmode;
    int32_t fbpmax;
    void *fbpool;
    int32_t fbpnum;
    int32_t fbpmis;
    _Bool async;
    TCXSTR *drpool;
    TCXSTR *drpdef;
    uint64_t drpoff;
    TCMDB *recc;
    uint32_t rcnum;
    TCCODEC enc;
    void *encop;
    TCCODEC dec;
    void *decop;
    int ecode;
    _Bool fatal;
    uint64_t inode;
    time_t mtime;
    uint32_t dfunit;
    uint32_t dfcnt;
    _Bool tran;
    int walfd;
    uint64_t walend;
    int dbgfd;
    int64_t cnt_writerec;
    int64_t cnt_reuserec;
    int64_t cnt_moverec;
    int64_t cnt_readrec;
    int64_t cnt_searchfbp;
    int64_t cnt_insertfbp;
    int64_t cnt_splicefbp;
    int64_t cnt_dividefbp;
    int64_t cnt_mergefbp;
    int64_t cnt_reducefbp;
    int64_t cnt_appenddrp;
    int64_t cnt_deferdrp;
    int64_t cnt_flushdrp;
    int64_t cnt_adjrecc;
    int64_t cnt_defrag;
    int64_t cnt_shiftrec;
    int64_t cnt_trunc;
} TCHDB;

enum {
    HDBFOPEN = 1 << 0,
    HDBFFATAL = 1 << 1
};

enum {
    HDBTLARGE = 1 << 0,
    HDBTDEFLATE = 1 << 1,
    HDBTBZIP = 1 << 2,
    HDBTTCBS = 1 << 3,
    HDBTEXCODEC = 1 << 4
};

enum {
    HDBOREADER = 1 << 0,
    HDBOWRITER = 1 << 1,
    HDBOCREAT = 1 << 2,
    HDBOTRUNC = 1 << 3,
    HDBONOLCK = 1 << 4,
    HDBOLCKNB = 1 << 5,
    HDBOTSYNC = 1 << 6
};





const char *tchdberrmsg(int ecode);




TCHDB *tchdbnew(void);






void tchdbdel(TCHDB *hdb);
# 167 "/usr/include/tchdb.h" 3 4
int tchdbecode(TCHDB *hdb);







_Bool tchdbsetmutex(TCHDB *hdb);
# 193 "/usr/include/tchdb.h" 3 4
_Bool tchdbtune(TCHDB *hdb, int64_t bnum, int8_t apow, int8_t fpow, uint8_t opts);
# 202 "/usr/include/tchdb.h" 3 4
_Bool tchdbsetcache(TCHDB *hdb, int32_t rcnum);
# 211 "/usr/include/tchdb.h" 3 4
_Bool tchdbsetxmsiz(TCHDB *hdb, int64_t xmsiz);
# 220 "/usr/include/tchdb.h" 3 4
_Bool tchdbsetdfunit(TCHDB *hdb, int32_t dfunit);
# 234 "/usr/include/tchdb.h" 3 4
_Bool tchdbopen(TCHDB *hdb, const char *path, int omode);







_Bool tchdbclose(TCHDB *hdb);
# 253 "/usr/include/tchdb.h" 3 4
_Bool tchdbput(TCHDB *hdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 262 "/usr/include/tchdb.h" 3 4
_Bool tchdbput2(TCHDB *hdb, const char *kstr, const char *vstr);
# 273 "/usr/include/tchdb.h" 3 4
_Bool tchdbputkeep(TCHDB *hdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 282 "/usr/include/tchdb.h" 3 4
_Bool tchdbputkeep2(TCHDB *hdb, const char *kstr, const char *vstr);
# 293 "/usr/include/tchdb.h" 3 4
_Bool tchdbputcat(TCHDB *hdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 302 "/usr/include/tchdb.h" 3 4
_Bool tchdbputcat2(TCHDB *hdb, const char *kstr, const char *vstr);
# 314 "/usr/include/tchdb.h" 3 4
_Bool tchdbputasync(TCHDB *hdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz);
# 324 "/usr/include/tchdb.h" 3 4
_Bool tchdbputasync2(TCHDB *hdb, const char *kstr, const char *vstr);







_Bool tchdbout(TCHDB *hdb, const void *kbuf, int ksiz);






_Bool tchdbout2(TCHDB *hdb, const char *kstr);
# 354 "/usr/include/tchdb.h" 3 4
void *tchdbget(TCHDB *hdb, const void *kbuf, int ksiz, int *sp);
# 364 "/usr/include/tchdb.h" 3 4
char *tchdbget2(TCHDB *hdb, const char *kstr);
# 378 "/usr/include/tchdb.h" 3 4
int tchdbget3(TCHDB *hdb, const void *kbuf, int ksiz, void *vbuf, int max);
# 387 "/usr/include/tchdb.h" 3 4
int tchdbvsiz(TCHDB *hdb, const void *kbuf, int ksiz);







int tchdbvsiz2(TCHDB *hdb, const char *kstr);






_Bool tchdbiterinit(TCHDB *hdb);
# 419 "/usr/include/tchdb.h" 3 4
void *tchdbiternext(TCHDB *hdb, int *sp);
# 432 "/usr/include/tchdb.h" 3 4
char *tchdbiternext2(TCHDB *hdb);
# 441 "/usr/include/tchdb.h" 3 4
_Bool tchdbiternext3(TCHDB *hdb, TCXSTR *kxstr, TCXSTR *vxstr);
# 455 "/usr/include/tchdb.h" 3 4
TCLIST *tchdbfwmkeys(TCHDB *hdb, const void *pbuf, int psiz, int max);
# 468 "/usr/include/tchdb.h" 3 4
TCLIST *tchdbfwmkeys2(TCHDB *hdb, const char *pstr, int max);
# 479 "/usr/include/tchdb.h" 3 4
int tchdbaddint(TCHDB *hdb, const void *kbuf, int ksiz, int num);
# 490 "/usr/include/tchdb.h" 3 4
double tchdbadddouble(TCHDB *hdb, const void *kbuf, int ksiz, double num);






_Bool tchdbsync(TCHDB *hdb);
# 516 "/usr/include/tchdb.h" 3 4
_Bool tchdboptimize(TCHDB *hdb, int64_t bnum, int8_t apow, int8_t fpow, uint8_t opts);





_Bool tchdbvanish(TCHDB *hdb);
# 534 "/usr/include/tchdb.h" 3 4
_Bool tchdbcopy(TCHDB *hdb, const char *path);
# 545 "/usr/include/tchdb.h" 3 4
_Bool tchdbtranbegin(TCHDB *hdb);






_Bool tchdbtrancommit(TCHDB *hdb);







_Bool tchdbtranabort(TCHDB *hdb);






const char *tchdbpath(TCHDB *hdb);






uint64_t tchdbrnum(TCHDB *hdb);






uint64_t tchdbfsiz(TCHDB *hdb);
# 596 "/usr/include/tchdb.h" 3 4
void tchdbsetecode(TCHDB *hdb, int ecode, const char *filename, int line, const char *func);





void tchdbsettype(TCHDB *hdb, uint8_t type);





void tchdbsetdbgfd(TCHDB *hdb, int fd);





int tchdbdbgfd(TCHDB *hdb);





_Bool tchdbhasmutex(TCHDB *hdb);






_Bool tchdbmemsync(TCHDB *hdb, _Bool phys);





_Bool tchdbcacheclear(TCHDB *hdb);






uint64_t tchdbbnum(TCHDB *hdb);






uint32_t tchdbalign(TCHDB *hdb);






uint32_t tchdbfbpmax(TCHDB *hdb);






uint64_t tchdbxmsiz(TCHDB *hdb);






uint64_t tchdbinode(TCHDB *hdb);






time_t tchdbmtime(TCHDB *hdb);





int tchdbomode(TCHDB *hdb);





uint8_t tchdbtype(TCHDB *hdb);





uint8_t tchdbflags(TCHDB *hdb);





uint8_t tchdbopts(TCHDB *hdb);





char *tchdbopaque(TCHDB *hdb);






uint64_t tchdbbnumused(TCHDB *hdb);
# 731 "/usr/include/tchdb.h" 3 4
_Bool tchdbsetcodecfunc(TCHDB *hdb, TCCODEC enc, void *encop, TCCODEC dec, void *decop);
# 744 "/usr/include/tchdb.h" 3 4
void tchdbcodecfunc(TCHDB *hdb, TCCODEC *ep, void **eop, TCCODEC *dp, void **dop);





uint32_t tchdbdfunit(TCHDB *hdb);







_Bool tchdbdefrag(TCHDB *hdb, int64_t step);
# 780 "/usr/include/tchdb.h" 3 4
_Bool tchdbputproc(TCHDB *hdb, const void *kbuf, int ksiz, const void *vbuf, int vsiz,
                   TCPDPROC proc, void *op);
# 797 "/usr/include/tchdb.h" 3 4
void *tchdbgetnext(TCHDB *hdb, const void *kbuf, int ksiz, int *sp);
# 807 "/usr/include/tchdb.h" 3 4
char *tchdbgetnext2(TCHDB *hdb, const char *kstr);
# 823 "/usr/include/tchdb.h" 3 4
char *tchdbgetnext3(TCHDB *hdb, const char *kbuf, int ksiz, int *sp, const char **vbp, int *vsp);
# 832 "/usr/include/tchdb.h" 3 4
_Bool tchdbiterinit2(TCHDB *hdb, const void *kbuf, int ksiz);







_Bool tchdbiterinit3(TCHDB *hdb, const char *kstr);
# 856 "/usr/include/tchdb.h" 3 4
_Bool tchdbforeach(TCHDB *hdb, TCITER iter, void *op);






_Bool tchdbtranvoid(TCHDB *hdb);




# 6 "tchcheck.c" 2

# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
                         __const void *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
                          int __c, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
                          __const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
                          size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
                           __const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
    __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
                             __const char *__restrict __delim,
                             char **__restrict __save_ptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
                           char **__restrict __save_ptr)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
                         __const char *__restrict __delim)
    __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 432 "/usr/include/string.h" 3 4

# 8 "tchcheck.c" 2

# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4




# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 25 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/fcntl.h" 2 3 4
# 155 "/usr/include/bits/fcntl.h" 3 4
struct flock
{
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
};
# 222 "/usr/include/bits/fcntl.h" 3 4

# 251 "/usr/include/bits/fcntl.h" 3 4

# 35 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 85 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 130 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 159 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
# 176 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
                              int __advise) __attribute__ ((__nothrow__));
# 198 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
# 213 "/usr/include/fcntl.h" 3 4

# 10 "tchcheck.c" 2

# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4




# 1 "/usr/include/asm-x86_64/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 5 "/usr/include/asm-x86_64/errno.h" 2 3 4
# 6 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 12 "tchcheck.c" 2

# 1 "sglib.h" 1
# 23 "sglib.h"
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
                               unsigned int __line, __const char *__function)
    __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                      unsigned int __line,
                                      __const char *__function)
    __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
    __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 24 "sglib.h" 2
# 14 "tchcheck.c" 2




typedef struct rbtree {
    uint64_t offset;
    uint64_t bucket_index;


    char color_field;
    struct rbtree *left;
    struct rbtree *right;

} rbtree;

int static inline db_offset_comparator( rbtree* a, rbtree* b )
{
    if ( a->offset < b->offset ) {
        return -1;
    } else if ( a->offset > b->offset ) {
        return 1;
    } else {
        return 0;
    }
}
# 47 "tchcheck.c"
struct sglib_rbtree_iterator {
    rbtree *currentelem;
    char pass[128];
    rbtree *path[128];
    short int pathi;
    short int order;
    rbtree *equalto;
    int (*subcomparator)(rbtree *, rbtree *);
};
extern void sglib___rbtree_consistency_check(rbtree *t);
extern void sglib_rbtree_add(rbtree **tree, rbtree *elem);
extern int sglib_rbtree_add_if_not_member(rbtree **tree, rbtree *elem, rbtree **memb);
extern void sglib_rbtree_delete(rbtree **tree, rbtree *elem);
extern int sglib_rbtree_delete_if_member(rbtree **tree, rbtree *elem, rbtree **memb);
extern int sglib_rbtree_is_member(rbtree *t, rbtree *elem);
extern rbtree *sglib_rbtree_find_member(rbtree *t, rbtree *elem);
extern int sglib_rbtree_len(rbtree *t);
extern rbtree *sglib_rbtree_it_init(struct sglib_rbtree_iterator *it, rbtree *tree);
extern rbtree *sglib_rbtree_it_init_preorder(struct sglib_rbtree_iterator *it, rbtree *tree);
extern rbtree *sglib_rbtree_it_init_inorder(struct sglib_rbtree_iterator *it, rbtree *tree);
extern rbtree *sglib_rbtree_it_init_postorder(struct sglib_rbtree_iterator *it, rbtree *tree);
extern rbtree *sglib_rbtree_it_init_on_equal(struct sglib_rbtree_iterator *it, rbtree *tree, int (*subcomparator)(rbtree *, rbtree *), rbtree *equalto);
extern rbtree *sglib_rbtree_it_current(struct sglib_rbtree_iterator *it);
extern rbtree *sglib_rbtree_it_next(struct sglib_rbtree_iterator *it);;
static void sglib___rbtree_fix_left_insertion_discrepancy(rbtree **tree) { {
        rbtree *t, *tl, *a, *b, *c, *ar, *bl, *br, *cl, *cr;
        t = *tree;
        tl = t->left;
        if (t->right!=((void *)0) && (t->right->color_field)==1) {
            if ((tl->color_field)==1) {
                if ((tl->left!=((void *)0) && (tl->left->color_field)==1) || (tl->right!=((void *)0) && (tl->right->color_field)==1)) { {
                        (t->left->color_field) = (0);
                    }; {
                        (t->right->color_field) = (0);
                    }; {
                        (t->color_field) = (1);
                    };
                } } } else {
            if ((tl->color_field)==1) {
                if (tl->left!=((void *)0) && (tl->left->color_field)==1) {
                    a = t;
                    b = tl;
                    c = tl->left;
                    br = b->right;
                    a->left = br;
                    b->left = c;
                    b->right = a; {
                        (a->color_field) = (1);
                    }; {
                        (b->color_field) = (0);
                    };
                    *tree = b;
                } else if (tl->right!=((void *)0) && (tl->right->color_field)==1) {
                    a = t;
                    b = tl;
                    ar=a->right;
                    bl=b->left;
                    c=b->right;
                    cl=c->left;
                    cr=c->right;
                    b->right = cl;
                    a->left = cr;
                    c->left = b;
                    c->right = a; {
                        (c->color_field) = (0);
                    }; {
                        (a->color_field) = (1);
                    };
                    *tree = c;
                } } }};
}static void sglib___rbtree_fix_right_insertion_discrepancy(rbtree **tree) { {
        rbtree *t, *tl, *a, *b, *c, *ar, *bl, *br, *cl, *cr;
        t = *tree;
        tl = t->right;
        if (t->left!=((void *)0) && (t->left->color_field)==1) {
            if ((tl->color_field)==1) {
                if ((tl->right!=((void *)0) && (tl->right->color_field)==1) || (tl->left!=((void *)0) && (tl->left->color_field)==1)) { {
                        (t->right->color_field) = (0);
                    }; {
                        (t->left->color_field) = (0);
                    }; {
                        (t->color_field) = (1);
                    };
                } } } else {
            if ((tl->color_field)==1) {
                if (tl->right!=((void *)0) && (tl->right->color_field)==1) {
                    a = t;
                    b = tl;
                    c = tl->right;
                    br = b->left;
                    a->right = br;
                    b->right = c;
                    b->left = a; {
                        (a->color_field) = (1);
                    }; {
                        (b->color_field) = (0);
                    };
                    *tree = b;
                } else if (tl->left!=((void *)0) && (tl->left->color_field)==1) {
                    a = t;
                    b = tl;
                    ar=a->left;
                    bl=b->right;
                    c=b->left;
                    cl=c->right;
                    cr=c->left;
                    b->left = cl;
                    a->right = cr;
                    c->right = b;
                    c->left = a; {
                        (c->color_field) = (0);
                    }; {
                        (a->color_field) = (1);
                    };
                    *tree = c;
                } } }};
}static int sglib___rbtree_fix_left_deletion_discrepancy(rbtree **tree) {
    int res; {
        rbtree *t, *a, *b, *c, *d, *ar, *bl, *br, *cl, *cr, *dl, *dr;
        t = a = *tree;
        ((t!=((void *)0)) ? (void) (0) : __assert_fail ("t!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
        ar = a->left;
        b = t->right;
        if (b==((void *)0)) {
            (((t->color_field)==1) ? (void) (0) : __assert_fail ("(t->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__)); {
                (t->color_field) = (0);
            };
            res = 0;
        } else {
            bl = b->right;
            br = b->left;
            if ((b->color_field)==1) {
                if (br==((void *)0)) {
                    *tree = b; {
                        (b->color_field) = (0);
                    };
                    b->left = a;
                    a->right = br;
                    res = 0;
                } else {
                    c = br;
                    ((c!=((void *)0) && (c->color_field)==0) ? (void) (0) : __assert_fail ("c!=((void *)0) && (c->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                    cl = c->right;
                    cr = c->left;
                    if ((cl==((void *)0)||(cl->color_field)==0) && (cr==((void *)0)||(cr->color_field)==0)) {
                        *tree = b;
                        b->left = a; {
                            (b->color_field) = (0);
                        };
                        a->right = c; {
                            (c->color_field) = (1);
                        };
                        res = 0;
                    } else if (cl!=((void *)0) && (cl->color_field)==1) {
                        if (cr!=((void *)0) && (cr->color_field)==1) {
                            d = cr;
                            dl = d->right;
                            dr = d->left;
                            *tree = d; {
                                (d->color_field) = (0);
                            };
                            d->right = b;
                            c->left = dl;
                            d->left = a;
                            a->right = dr;
                            res = 0;
                        } else {
                            *tree = c;
                            c->right = b;
                            c->left = a;
                            b->right = bl;
                            b->left = cl;
                            a->right = cr; {
                                (cl->color_field) = (0);
                            };
                            res = 0;
                        } } else if (cr!=((void *)0) && (cr->color_field)==1) {
                        ((cl==((void *)0) || (cl->color_field)==0) ? (void) (0) : __assert_fail ("cl==((void *)0) || (cl->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        d = cr;
                        dl = d->right;
                        dr = d->left;
                        *tree = d; {
                            (d->color_field) = (0);
                        };
                        d->right = b;
                        c->left = dl;
                        d->left = a;
                        a->right = dr;
                        res = 0;
                    } else {
                        ((0) ? (void) (0) : __assert_fail ("0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        res = 0;
                    } } } else {
                if ((bl==((void *)0) || (bl->color_field)==0) && (br==((void *)0) || (br->color_field)==0)) {
                    res = ((a->color_field)==0); {
                        (a->color_field) = (0);
                    }; {
                        (b->color_field) = (1);
                    };
                } else if (bl!=((void *)0) && (bl->color_field)==1) {
                    if (br==((void *)0) || (br->color_field)==0) {
                        *tree = b; {
                            (b->color_field) = ((a->color_field));
                        }; {
                            (a->color_field) = (0);
                        };
                        b->left = a;
                        a->right = br; {
                            (bl->color_field) = (0);
                        };
                        res = 0;
                    } else {
                        ((bl!=((void *)0)) ? (void) (0) : __assert_fail ("bl!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        ((br!=((void *)0)) ? (void) (0) : __assert_fail ("br!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        (((bl->color_field)==1) ? (void) (0) : __assert_fail ("(bl->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        (((br->color_field)==1) ? (void) (0) : __assert_fail ("(br->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        c = br;
                        cl = c->right;
                        cr = c->left;
                        *tree = c; {
                            (c->color_field) = ((a->color_field));
                        }; {
                            (a->color_field) = (0);
                        };
                        c->right = b;
                        c->left = a;
                        b->left = cl;
                        a->right = cr;
                        res = 0;
                    } } else {
                    ((br!=((void *)0) && (br->color_field)==1) ? (void) (0) : __assert_fail ("br!=((void *)0) && (br->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                    c = br;
                    cl = c->right;
                    cr = c->left;
                    *tree = c; {
                        (c->color_field) = ((a->color_field));
                    }; {
                        (a->color_field) = (0);
                    };
                    c->right = b;
                    c->left = a;
                    b->left = cl;
                    a->right = cr;
                    res = 0;
                } } }};
    return(res);
}static int sglib___rbtree_fix_right_deletion_discrepancy(rbtree **tree) {
    int res; {
        rbtree *t, *a, *b, *c, *d, *ar, *bl, *br, *cl, *cr, *dl, *dr;
        t = a = *tree;
        ((t!=((void *)0)) ? (void) (0) : __assert_fail ("t!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
        ar = a->right;
        b = t->left;
        if (b==((void *)0)) {
            (((t->color_field)==1) ? (void) (0) : __assert_fail ("(t->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__)); {
                (t->color_field) = (0);
            };
            res = 0;
        } else {
            bl = b->left;
            br = b->right;
            if ((b->color_field)==1) {
                if (br==((void *)0)) {
                    *tree = b; {
                        (b->color_field) = (0);
                    };
                    b->right = a;
                    a->left = br;
                    res = 0;
                } else {
                    c = br;
                    ((c!=((void *)0) && (c->color_field)==0) ? (void) (0) : __assert_fail ("c!=((void *)0) && (c->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                    cl = c->left;
                    cr = c->right;
                    if ((cl==((void *)0)||(cl->color_field)==0) && (cr==((void *)0)||(cr->color_field)==0)) {
                        *tree = b;
                        b->right = a; {
                            (b->color_field) = (0);
                        };
                        a->left = c; {
                            (c->color_field) = (1);
                        };
                        res = 0;
                    } else if (cl!=((void *)0) && (cl->color_field)==1) {
                        if (cr!=((void *)0) && (cr->color_field)==1) {
                            d = cr;
                            dl = d->left;
                            dr = d->right;
                            *tree = d; {
                                (d->color_field) = (0);
                            };
                            d->left = b;
                            c->right = dl;
                            d->right = a;
                            a->left = dr;
                            res = 0;
                        } else {
                            *tree = c;
                            c->left = b;
                            c->right = a;
                            b->left = bl;
                            b->right = cl;
                            a->left = cr; {
                                (cl->color_field) = (0);
                            };
                            res = 0;
                        } } else if (cr!=((void *)0) && (cr->color_field)==1) {
                        ((cl==((void *)0) || (cl->color_field)==0) ? (void) (0) : __assert_fail ("cl==((void *)0) || (cl->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        d = cr;
                        dl = d->left;
                        dr = d->right;
                        *tree = d; {
                            (d->color_field) = (0);
                        };
                        d->left = b;
                        c->right = dl;
                        d->right = a;
                        a->left = dr;
                        res = 0;
                    } else {
                        ((0) ? (void) (0) : __assert_fail ("0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        res = 0;
                    } } } else {
                if ((bl==((void *)0) || (bl->color_field)==0) && (br==((void *)0) || (br->color_field)==0)) {
                    res = ((a->color_field)==0); {
                        (a->color_field) = (0);
                    }; {
                        (b->color_field) = (1);
                    };
                } else if (bl!=((void *)0) && (bl->color_field)==1) {
                    if (br==((void *)0) || (br->color_field)==0) {
                        *tree = b; {
                            (b->color_field) = ((a->color_field));
                        }; {
                            (a->color_field) = (0);
                        };
                        b->right = a;
                        a->left = br; {
                            (bl->color_field) = (0);
                        };
                        res = 0;
                    } else {
                        ((bl!=((void *)0)) ? (void) (0) : __assert_fail ("bl!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        ((br!=((void *)0)) ? (void) (0) : __assert_fail ("br!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        (((bl->color_field)==1) ? (void) (0) : __assert_fail ("(bl->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        (((br->color_field)==1) ? (void) (0) : __assert_fail ("(br->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                        c = br;
                        cl = c->left;
                        cr = c->right;
                        *tree = c; {
                            (c->color_field) = ((a->color_field));
                        }; {
                            (a->color_field) = (0);
                        };
                        c->left = b;
                        c->right = a;
                        b->right = cl;
                        a->left = cr;
                        res = 0;
                    } } else {
                    ((br!=((void *)0) && (br->color_field)==1) ? (void) (0) : __assert_fail ("br!=((void *)0) && (br->color_field)==1", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                    c = br;
                    cl = c->left;
                    cr = c->right;
                    *tree = c; {
                        (c->color_field) = ((a->color_field));
                    }; {
                        (a->color_field) = (0);
                    };
                    c->left = b;
                    c->right = a;
                    b->right = cl;
                    a->left = cr;
                    res = 0;
                } } }};
    return(res);
}static void sglib___rbtree_add_recursive(rbtree **tree, rbtree *elem) {
    int cmp;
    rbtree *t;
    t = *tree;
    if (t == ((void *)0)) { {
            (elem->color_field) = (1);
        };
        *tree =elem;
    } else {
        cmp = db_offset_comparator(elem, t);
        if (cmp < 0 || (cmp==0 && elem<t)) {
            sglib___rbtree_add_recursive(&t->left, elem);
            if ((t->color_field)==0) sglib___rbtree_fix_left_insertion_discrepancy(tree);
        } else {
            sglib___rbtree_add_recursive(&t->right, elem);
            if ((t->color_field)==0) sglib___rbtree_fix_right_insertion_discrepancy(tree);
        } }}static int sglib___rbtree_delete_rightmost_leaf(rbtree **tree, rbtree **theLeaf) {
    rbtree *t;
    int res, deepDecreased;
    t = *tree;
    res = 0;
    ((t!=((void *)0)) ? (void) (0) : __assert_fail ("t!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
    if (t->right == ((void *)0)) {
        *theLeaf = t;
        if (t->left!=((void *)0)) {
            if ((t->color_field)==0 && (t->left->color_field)==0) res = 1; {
                (t->left->color_field) = (0);
            };
            *tree = t->left;
        } else {
            *tree = ((void *)0);
            res = ((t->color_field)==0);
        } } else {
        deepDecreased = sglib___rbtree_delete_rightmost_leaf(&t->right, theLeaf);
        if (deepDecreased) res = sglib___rbtree_fix_right_deletion_discrepancy(tree);
    } return(res);
}int sglib___rbtree_delete_recursive(rbtree **tree, rbtree *elem) {
    rbtree *t, *theLeaf;
    int cmp, res, deepDecreased;
    t = *tree;
    res = 0;
    if (t==((void *)0)) {
        ((0 && "The element to delete not found in the tree,  use 'delete_if_member'"!=((void *)0)) ? (void) (0) : __assert_fail ("0 && \"The element to delete not found in the tree,  use 'delete_if_member'\"!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
    } else {
        cmp = db_offset_comparator(elem, t);
        if (cmp < 0 || (cmp==0 && elem<t)) {
            deepDecreased = sglib___rbtree_delete_recursive(&t->left, elem);
            if (deepDecreased) {
                res = sglib___rbtree_fix_left_deletion_discrepancy(tree);
            } } else if (cmp > 0 || (cmp==0 && elem>t)) {
            deepDecreased = sglib___rbtree_delete_recursive(&t->right, elem);
            if (deepDecreased) {
                res = sglib___rbtree_fix_right_deletion_discrepancy(tree);
            } } else {
            ((elem==t && "Deleting an element which is non member of the tree, use 'delete_if_member'"!=((void *)0)) ? (void) (0) : __assert_fail ("elem==t && \"Deleting an element which is non member of the tree, use 'delete_if_member'\"!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
            if (t->left == ((void *)0)) {
                if (t->right == ((void *)0)) {
                    *tree = ((void *)0);
                    res = ((t->color_field)==0);
                } else {
                    if ((t->color_field)==0 && (t->right->color_field)==0) res = 1; {
                        (t->right->color_field) = (0);
                    };
                    *tree = t->right;
                } } else {
                deepDecreased = sglib___rbtree_delete_rightmost_leaf(&t->left, &theLeaf);
                theLeaf->left = t->left;
                theLeaf->right = t->right; {
                    (theLeaf->color_field) = ((t->color_field));
                };
                *tree = theLeaf;
                if (deepDecreased) res = sglib___rbtree_fix_left_deletion_discrepancy(tree);
            } } } return(res);
}void sglib_rbtree_add(rbtree **tree, rbtree *elem) {
    elem->left = elem->right = ((void *)0);
    sglib___rbtree_add_recursive(tree, elem); {
        ((*tree)->color_field) = (0);
    };
}void sglib_rbtree_delete(rbtree **tree, rbtree *elem) {
    sglib___rbtree_delete_recursive(tree, elem);
    if (*tree!=((void *)0)) {
        ((*tree)->color_field) = (0);
    };
}rbtree *sglib_rbtree_find_member(rbtree *t, rbtree *elem) {
    rbtree *res; {
        rbtree *_s_;
        int _c_;
        _s_ = (t);
        while (_s_!=((void *)0)) {
            _c_ = db_offset_comparator((elem), _s_);
            if (_c_ < 0) _s_ = _s_->left;
            else if (_c_ > 0) _s_ = _s_->right;
            else break;
        } (res) = _s_;
    };
    return(res);
}int sglib_rbtree_is_member(rbtree *t, rbtree *elem) {
    int cmp;
    while (t!=((void *)0)) {
        cmp = db_offset_comparator(elem, t);
        if (cmp < 0 || (cmp==0 && elem<t)) {
            t = t->left;
        } else if (cmp > 0 || (cmp==0 && elem>t)) {
            t = t->right;
        } else {
            ((t == elem) ? (void) (0) : __assert_fail ("t == elem", "tchcheck.c", 48, __PRETTY_FUNCTION__));
            return(1);
        } } return(0);
}int sglib_rbtree_delete_if_member(rbtree **tree, rbtree *elem, rbtree **memb) {
    if ((*memb=sglib_rbtree_find_member(*tree, elem))!=((void *)0)) {
        sglib_rbtree_delete(tree, *memb);
        return(1);
    } else {
        return(0);
    }}int sglib_rbtree_add_if_not_member(rbtree **tree, rbtree *elem, rbtree **memb) {
    if ((*memb=sglib_rbtree_find_member(*tree, elem))==((void *)0)) {
        sglib_rbtree_add(tree, elem);
        return(1);
    } else {
        return(0);
    }}int sglib_rbtree_len(rbtree *t) {
    int n;
    rbtree *e;
    n = 0; { {
            rbtree *_path_[128];
            rbtree *_right_[128];
            char _pass_[128];
            rbtree *_cn_;
            int _pathi_;
            rbtree *e;
            _cn_ = (t);
            _pathi_ = 0;
            while (_cn_!=((void *)0)) {
                while (_cn_!=((void *)0)) {
                    _path_[_pathi_] = _cn_;
                    _right_[_pathi_] = _cn_->right;
                    _pass_[_pathi_] = 0;
                    _cn_ = _cn_->left;
                    if (1 == 0) {
                        e = _path_[_pathi_]; {
                            n++;
                        } } _pathi_ ++;
                    if (_pathi_ >= 128) ((0 && "the binary_tree is too deep") ? (void) (0) : __assert_fail ("0 && \"the binary_tree is too deep\"", "tchcheck.c", 48, __PRETTY_FUNCTION__));
                } do {
                    _pathi_ --;
                    if ((1==1 && _pass_[_pathi_] == 0) || (1 == 2 && (_pass_[_pathi_] == 1 || _right_[_pathi_]==((void *)0)))) {
                        e = _path_[_pathi_]; {
                            n++;
                        } } _pass_[_pathi_] ++;
                } while (_pathi_>0 && _right_[_pathi_]==((void *)0)) ;
                _cn_ = _right_[_pathi_];
                _right_[_pathi_] = ((void *)0);
                _pathi_ ++;
            }};
    };
    return(n);
}void sglib__rbtree_it_compute_current_elem(struct sglib_rbtree_iterator *it) {
    int i,j,cmp;
    rbtree *s, *eqt;
    int (*subcomparator)(rbtree *, rbtree *);
    eqt = it->equalto;
    subcomparator = it->subcomparator;
    it->currentelem = ((void *)0);
    while (it->pathi > 0 && it->currentelem==((void *)0)) {
        i = it->pathi-1;
        if (i >= 0) {
            if (it->pass[i] >= 2) {
                it->pathi --;
            } else {
                if (it->pass[i] == 0) {
                    s = it->path[i]->left;
                } else {
                    s = it->path[i]->right;
                } if (eqt != ((void *)0)) {
                    if (subcomparator == ((void *)0)) { {
                            rbtree *_s_;
                            int _c_;
                            _s_ = (s);
                            while (_s_!=((void *)0)) {
                                _c_ = db_offset_comparator((eqt), _s_);
                                if (_c_ < 0) _s_ = _s_->left;
                                else if (_c_ > 0) _s_ = _s_->right;
                                else break;
                            } (s) = _s_;
                        };
                    } else { {
                            rbtree *_s_;
                            int _c_;
                            _s_ = (s);
                            while (_s_!=((void *)0)) {
                                _c_ = subcomparator((eqt), _s_);
                                if (_c_ < 0) _s_ = _s_->left;
                                else if (_c_ > 0) _s_ = _s_->right;
                                else break;
                            } (s) = _s_;
                        };
                    } } if (s != ((void *)0)) {
                    j = i+1;
                    it->path[j] = s;
                    it->pass[j] = 0;
                    it->pathi ++;
                } it->pass[i] ++;
            } } if (it->pathi>0 && it->order == it->pass[it->pathi-1]) {
            it->currentelem = it->path[it->pathi-1];
        } }}rbtree *sglib__rbtree_it_init(struct sglib_rbtree_iterator *it, rbtree *tree, int order, int (*subcomparator)(rbtree *, rbtree *), rbtree *equalto) {
    rbtree *t;
    ((it!=((void *)0)) ? (void) (0) : __assert_fail ("it!=((void *)0)", "tchcheck.c", 48, __PRETTY_FUNCTION__));
    it->order = order;
    it->equalto = equalto;
    it->subcomparator = subcomparator;
    if (equalto == ((void *)0)) {
        t = tree;
    } else {
        if (subcomparator == ((void *)0)) { {
                rbtree *_s_;
                int _c_;
                _s_ = (tree);
                while (_s_!=((void *)0)) {
                    _c_ = db_offset_comparator((equalto), _s_);
                    if (_c_ < 0) _s_ = _s_->left;
                    else if (_c_ > 0) _s_ = _s_->right;
                    else break;
                } (t) = _s_;
            };
        } else { {
                rbtree *_s_;
                int _c_;
                _s_ = (tree);
                while (_s_!=((void *)0)) {
                    _c_ = subcomparator((equalto), _s_);
                    if (_c_ < 0) _s_ = _s_->left;
                    else if (_c_ > 0) _s_ = _s_->right;
                    else break;
                } (t) = _s_;
            };
        } } if (t == ((void *)0)) {
        it->pathi = 0;
        it->currentelem = ((void *)0);
    } else {
        it->pathi = 1;
        it->pass[0] = 0;
        it->path[0] = t;
        if (order == 0) {
            it->currentelem = t;
        } else {
            sglib__rbtree_it_compute_current_elem(it);
        } } return(it->currentelem);
}rbtree *sglib_rbtree_it_init(struct sglib_rbtree_iterator *it, rbtree *tree) {
    return(sglib__rbtree_it_init(it, tree, 2, ((void *)0), ((void *)0)));
}rbtree *sglib_rbtree_it_init_preorder(struct sglib_rbtree_iterator *it, rbtree *tree) {
    return(sglib__rbtree_it_init(it, tree, 0, ((void *)0), ((void *)0)));
}rbtree *sglib_rbtree_it_init_inorder(struct sglib_rbtree_iterator *it, rbtree *tree) {
    return(sglib__rbtree_it_init(it, tree, 1, ((void *)0), ((void *)0)));
}rbtree *sglib_rbtree_it_init_postorder(struct sglib_rbtree_iterator *it, rbtree *tree) {
    return(sglib__rbtree_it_init(it, tree, 2, ((void *)0), ((void *)0)));
}rbtree *sglib_rbtree_it_init_on_equal(struct sglib_rbtree_iterator *it, rbtree *tree, int (*subcomparator)(rbtree *, rbtree *), rbtree *equalto) {
    return(sglib__rbtree_it_init(it, tree, 1, subcomparator, equalto));
}rbtree *sglib_rbtree_it_current(struct sglib_rbtree_iterator *it) {
    return(it->currentelem);
}rbtree *sglib_rbtree_it_next(struct sglib_rbtree_iterator *it) {
    sglib__rbtree_it_compute_current_elem(it);
    return(it->currentelem);
}static void sglib___rbtree_consistency_check_recursive(rbtree *t, int *pathdeep, int cdeep) {
    if (t==((void *)0)) {
        if (*pathdeep < 0) *pathdeep = cdeep;
        else ((*pathdeep == cdeep) ? (void) (0) : __assert_fail ("*pathdeep == cdeep", "tchcheck.c", 48, __PRETTY_FUNCTION__));
    } else {
        if (t->left!=((void *)0)) ((db_offset_comparator(t->left, t) <= 0) ? (void) (0) : __assert_fail ("db_offset_comparator(t->left, t) <= 0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
        if (t->right!=((void *)0)) ((db_offset_comparator(t, t->right) <= 0) ? (void) (0) : __assert_fail ("db_offset_comparator(t, t->right) <= 0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
        if ((t->color_field) == 1) {
            ((t->left == ((void *)0) || (t->left->color_field)==0) ? (void) (0) : __assert_fail ("t->left == ((void *)0) || (t->left->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
            ((t->right == ((void *)0) || (t->right->color_field)==0) ? (void) (0) : __assert_fail ("t->right == ((void *)0) || (t->right->color_field)==0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
            sglib___rbtree_consistency_check_recursive(t->left, pathdeep, cdeep);
            sglib___rbtree_consistency_check_recursive(t->right, pathdeep, cdeep);
        } else {
            sglib___rbtree_consistency_check_recursive(t->left, pathdeep, cdeep+1);
            sglib___rbtree_consistency_check_recursive(t->right, pathdeep, cdeep+1);
        } }}void sglib___rbtree_consistency_check(rbtree *t) {
    int pathDeep;
    ((t==((void *)0) || (t->color_field) == 0) ? (void) (0) : __assert_fail ("t==((void *)0) || (t->color_field) == 0", "tchcheck.c", 48, __PRETTY_FUNCTION__));
    pathDeep = -1;
    sglib___rbtree_consistency_check_recursive(t, &pathDeep, 0);
};





typedef struct db_meta {
    uint64_t bucket_count;
    uint64_t bucket_offset;

    uint64_t record_count;
    uint64_t record_offset;

    short alignment_pow;
    short bytes_per;
    char dbpath[4096 +1];

    int fd;

    rbtree* offset_tree;

} db_meta_t;


db_meta_t* dbmeta_new( const char* dbfilename )
{
    TCHDB *hdb;
    db_meta_t *dbmeta;
    int errnum;

    dbmeta = (db_meta_t*)calloc( 1, sizeof( db_meta_t ));

    realpath( dbfilename, dbmeta->dbpath );

    hdb = tchdbnew();

    if ( !tchdbopen( hdb, dbmeta->dbpath , HDBOREADER )) {
        errnum = tchdbecode( hdb );
        fprintf( stderr, "Failure opening database [%s] : %s\n", dbmeta->dbpath, tchdberrmsg( errnum ));
        tchdbdel( hdb );
        exit( 1 );
    }

    dbmeta->bucket_count = hdb->bnum;
    dbmeta->bucket_offset = 256;
    dbmeta->bytes_per = (hdb->opts & HDBTLARGE) ? sizeof(uint64_t) : sizeof(uint32_t);

    dbmeta->record_count = tchdbrnum( hdb );
    dbmeta->record_offset = hdb->frec;
    dbmeta->alignment_pow = hdb->apow;
    dbmeta->offset_tree = ((void *)0);

    tchdbclose( hdb );
    tchdbdel( hdb );

    if ( -1 == ( dbmeta->fd = open( dbmeta->dbpath, 00) ) ) {
        fprintf(stderr, "Failure opening file [%s] : %s\n", dbmeta->dbpath, strerror( (*__errno_location ()) ));
        exit(1);
    }

    return dbmeta;
}


void dbmeta_free( db_meta_t* dbmeta )
{
    close( dbmeta->fd );
    free( dbmeta );
}

void dbmeta_populate_offset_tree( db_meta_t* dbmeta )
{
    uint64_t i;
    uint64_t found = 0;
    uint64_t empty = 0;
    uint64_t dups = 0;

    time_t start = time(((void *)0));

    rbtree* new_node;

    lseek64( dbmeta->fd, dbmeta->bucket_offset, 0 );

    for ( i = 0 ; i < dbmeta->bucket_count ; i++ ) {
        uint64_t offset = 0LL;

        int b = read( dbmeta->fd, &offset, dbmeta->bytes_per);

        if (b != dbmeta->bytes_per ) {
            fprintf(stderr, "read the wrong number of bytes (%d)\n", b );
        }


        if ( offset > 0 ) {

            rbtree *other = ((void *)0);

            new_node = (rbtree*)calloc( 1, sizeof( rbtree ));
            new_node->offset = (offset << dbmeta->alignment_pow);
            new_node->bucket_index = i;

            other = sglib_rbtree_find_member( dbmeta->offset_tree, new_node );

            if ( ((void *)0) == other ) {
                sglib_rbtree_add( &(dbmeta->offset_tree), new_node );
            } else {
                uint64_t diff = new_node->offset - other->offset;
                fprintf(stderr, "Duplicate offset for value %llu at index %llu, other value %llu, other index %llu, diff %llu\n",
                        new_node->offset, new_node->bucket_index,
                        other->offset, other->bucket_index, diff);
            }
            found += 1;
        } else {
            empty += 1;
        }

        if ( i % 1000000 == 0 ) {
            time_t now = time(((void *)0));
            if ( now > start ) {
                uint64_t left = dbmeta->bucket_count - i;
                double rate = ( i / (double)difftime(now, start));
                time_t done_at = (time_t)(now + ( left / rate ));
                struct tm *the_time = localtime( &done_at);
                char time_buf[32];
                strftime( time_buf, 256, "%Y-%m-%d %H:%M:%S", the_time );

                fprintf(stderr, " %llu / %llu : rate = %lf, found = %llu, empty = %llu, finished at %s\r",
                        i, dbmeta->bucket_count , rate, found, empty, time_buf );
                fflush(stderr);
            }
        }

    }
    return;
}

int main( int argc, char **argv )
{

    db_meta_t *dbmeta;
    int errnum;
    uint64_t total = 0;
    uint64_t count = 0;
    double rps = 0.0;
    time_t start = time(((void *)0));
    time_t now;
    double dur;


    if ( argc < 2 ) {
        fprintf(stderr, "Usage: %s database.tch\n", argv[0] );
        exit(1);
    }

    dbmeta = dbmeta_new( argv[1] );
    fprintf( stdout, "Database            : %s\n", dbmeta->dbpath );
    fprintf( stdout, "  number of buckets : %llu\n", dbmeta->bucket_count );
    fprintf( stdout, "  offset of buckets : %llu\n", dbmeta->bucket_offset );
    fprintf( stdout, "  bytes per pointer : %llu\n", dbmeta->bytes_per );
    fprintf( stdout, "  alignment power   : %llu\n", dbmeta->alignment_pow);
    fprintf( stdout, "  number of records : %llu\n", dbmeta->record_count );
    fprintf( stdout, "  offset of records : %llu\n", dbmeta->record_offset );

    dbmeta_populate_offset_tree( dbmeta );

    dbmeta_free( dbmeta );

    exit(0);
}
