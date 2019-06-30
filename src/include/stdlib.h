#ifndef STDLIB_H
#define STDLIB_H

#include "../../include/stdlib.h"

hidden int __putenv(char *, size_t, char *);
hidden void __env_rm_add(char *, char *);
hidden int __mkostemps(char *, int, int);
hidden int __ptsname_r(int, char *, size_t);
hidden char *__randname(char *);

#ifndef _NO_BUILTIN_ABORT
#undef  abort
#define abort __builtin_abort
#endif
#ifndef _NO_BUILTIN_ABS
#undef  abs
#define abs __builtin_abs
#endif
#ifndef _NO_BUILTIN_CALLOC
#undef  calloc
#define calloc __builtin_calloc
#endif
#ifndef _NO_BUILTIN_EXIT
#undef  exit
#define exit __builtin_exit
#endif
#ifndef _NO_BUILTIN_LABS
#undef  labs
#define labs __builtin_labs
#endif
#ifndef _NO_BUILTIN_MALLOC
#undef  malloc
#define malloc __builtin_malloc
#endif
#ifndef _NO_BUILTIN__EXIT
#undef  _Exit
#define _Exit __builtin__Exit
#endif
#ifndef _NO_BUILTIN_LLABS
#undef  llabs
#define llabs __builtin_llabs
#endif

#endif
