#ifndef SCHED_H
#define SCHED_H

#include "../../include/sched.h"

#ifndef _NO_BUILTIN_CALLOC
#undef  calloc
#define calloc __builtin_calloc
#endif
#ifndef _NO_BUILTIN_MEMCMP
#undef  memcmp
#define memcmp __builtin_memcmp
#endif
#ifndef _NO_BUILTIN_MEMCPY
#undef  memcpy
#define memcpy __builtin_memcpy
#endif
#ifndef _NO_BUILTIN_MEMSET
#undef  memset
#define memset __builtin_memset
#endif

#endif
