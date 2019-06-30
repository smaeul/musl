#ifndef INTTYPES_H
#define INTTYPES_H

#include "../../include/inttypes.h"

#ifndef _NO_BUILTIN_IMAXABS
#undef  imaxabs
#define imaxabs __builtin_imaxabs
#endif

#endif
