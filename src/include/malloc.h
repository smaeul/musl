#ifndef MALLOC_H
#define MALLOC_H

#include "../../include/malloc.h"

#ifndef _NO_BUILTIN_CALLOC
#undef  calloc
#define calloc __builtin_calloc
#endif
#ifndef _NO_BUILTIN_MALLOC
#undef  malloc
#define malloc __builtin_malloc
#endif

#endif
