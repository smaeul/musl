#ifndef WCTYPE_H
#define WCTYPE_H

#include "../../include/wctype.h"

#ifndef _NO_BUILTIN_ISWALNUM
#undef  iswalnum
#define iswalnum __builtin_iswalnum
#endif
#ifndef _NO_BUILTIN_ISWALPHA
#undef  iswalpha
#define iswalpha __builtin_iswalpha
#endif
#ifndef _NO_BUILTIN_ISWCNTRL
#undef  iswcntrl
#define iswcntrl __builtin_iswcntrl
#endif
#ifndef _NO_BUILTIN_ISWDIGIT
#undef  iswdigit
#define iswdigit __builtin_iswdigit
#endif
#ifndef _NO_BUILTIN_ISWGRAPH
#undef  iswgraph
#define iswgraph __builtin_iswgraph
#endif
#ifndef _NO_BUILTIN_ISWLOWER
#undef  iswlower
#define iswlower __builtin_iswlower
#endif
#ifndef _NO_BUILTIN_ISWPRINT
#undef  iswprint
#define iswprint __builtin_iswprint
#endif
#ifndef _NO_BUILTIN_ISWPUNCT
#undef  iswpunct
#define iswpunct __builtin_iswpunct
#endif
#ifndef _NO_BUILTIN_ISWSPACE
#undef  iswspace
#define iswspace __builtin_iswspace
#endif
#ifndef _NO_BUILTIN_ISWUPPER
#undef  iswupper
#define iswupper __builtin_iswupper
#endif
#ifndef _NO_BUILTIN_ISWXDIGIT
#undef  iswxdigit
#define iswxdigit __builtin_iswxdigit
#endif
#ifndef _NO_BUILTIN_TOWLOWER
#undef  towlower
#define towlower __builtin_towlower
#endif
#ifndef _NO_BUILTIN_TOWUPPER
#undef  towupper
#define towupper __builtin_towupper
#endif
#ifndef _NO_BUILTIN_ISWBLANK
#undef  iswblank
#define iswblank __builtin_iswblank
#endif

#endif
