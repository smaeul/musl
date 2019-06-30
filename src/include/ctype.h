#ifndef CTYPE_H
#define CTYPE_H

#include "../../include/ctype.h"

#ifndef _NO_BUILTIN_ISALNUM
#undef  isalnum
#define isalnum __builtin_isalnum
#endif
#ifndef _NO_BUILTIN_ISALPHA
#undef  isalpha
#define isalpha __builtin_isalpha
#endif
#ifndef _NO_BUILTIN_ISCNTRL
#undef  iscntrl
#define iscntrl __builtin_iscntrl
#endif
#ifndef _NO_BUILTIN_ISDIGIT
#undef  isdigit
#define isdigit __builtin_isdigit
#endif
#ifndef _NO_BUILTIN_ISGRAPH
#undef  isgraph
#define isgraph __builtin_isgraph
#endif
#ifndef _NO_BUILTIN_ISLOWER
#undef  islower
#define islower __builtin_islower
#endif
#ifndef _NO_BUILTIN_ISPRINT
#undef  isprint
#define isprint __builtin_isprint
#endif
#ifndef _NO_BUILTIN_ISPUNCT
#undef  ispunct
#define ispunct __builtin_ispunct
#endif
#ifndef _NO_BUILTIN_ISSPACE
#undef  isspace
#define isspace __builtin_isspace
#endif
#ifndef _NO_BUILTIN_ISUPPER
#undef  isupper
#define isupper __builtin_isupper
#endif
#ifndef _NO_BUILTIN_ISXDIGIT
#undef  isxdigit
#define isxdigit __builtin_isxdigit
#endif
#ifndef _NO_BUILTIN_TOLOWER
#undef  tolower
#define tolower __builtin_tolower
#endif
#ifndef _NO_BUILTIN_TOUPPER
#undef  toupper
#define toupper __builtin_toupper
#endif
#ifndef _NO_BUILTIN_ISBLANK
#undef  isblank
#define isblank __builtin_isblank
#endif

#endif
