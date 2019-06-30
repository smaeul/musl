#ifndef STRING_H
#define STRING_H

#include "../../include/string.h"

hidden void *__memrchr(const void *, int, size_t);
hidden char *__stpcpy(char *, const char *);
hidden char *__stpncpy(char *, const char *, size_t);
hidden char *__strchrnul(const char *, int);

#ifndef _NO_BUILTIN_MEMCHR
#undef  memchr
#define memchr __builtin_memchr
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
#ifndef _NO_BUILTIN_STRCAT
#undef  strcat
#define strcat __builtin_strcat
#endif
#ifndef _NO_BUILTIN_STRCHR
#undef  strchr
#define strchr __builtin_strchr
#endif
#ifndef _NO_BUILTIN_STRCMP
#undef  strcmp
#define strcmp __builtin_strcmp
#endif
#ifndef _NO_BUILTIN_STRCPY
#undef  strcpy
#define strcpy __builtin_strcpy
#endif
#ifndef _NO_BUILTIN_STRCSPN
#undef  strcspn
#define strcspn __builtin_strcspn
#endif
#ifndef _NO_BUILTIN_STRLEN
#undef  strlen
#define strlen __builtin_strlen
#endif
#ifndef _NO_BUILTIN_STRNCAT
#undef  strncat
#define strncat __builtin_strncat
#endif
#ifndef _NO_BUILTIN_STRNCMP
#undef  strncmp
#define strncmp __builtin_strncmp
#endif
#ifndef _NO_BUILTIN_STRNCPY
#undef  strncpy
#define strncpy __builtin_strncpy
#endif
#ifndef _NO_BUILTIN_STRPBRK
#undef  strpbrk
#define strpbrk __builtin_strpbrk
#endif
#ifndef _NO_BUILTIN_STRRCHR
#undef  strrchr
#define strrchr __builtin_strrchr
#endif
#ifndef _NO_BUILTIN_STRSPN
#undef  strspn
#define strspn __builtin_strspn
#endif
#ifndef _NO_BUILTIN_STRSTR
#undef  strstr
#define strstr __builtin_strstr
#endif

#endif
