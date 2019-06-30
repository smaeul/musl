#ifndef STDIO_H
#define STDIO_H

#define __DEFINED_struct__IO_FILE

#include "../../include/stdio.h"

#undef stdin
#undef stdout
#undef stderr

extern hidden FILE __stdin_FILE;
extern hidden FILE __stdout_FILE;
extern hidden FILE __stderr_FILE;

#define stdin (&__stdin_FILE)
#define stdout (&__stdout_FILE)
#define stderr (&__stderr_FILE)

#ifndef _NO_BUILTIN_FPRINTF
#undef  fprintf
#define fprintf __builtin_fprintf
#endif
#ifndef _NO_BUILTIN_FPUTS
#undef  fputs
#define fputs __builtin_fputs
#endif
#ifndef _NO_BUILTIN_FSCANF
#undef  fscanf
#define fscanf __builtin_fscanf
#endif
#ifndef _NO_BUILTIN_PRINTF
#undef  printf
#define printf __builtin_printf
#endif
#ifndef _NO_BUILTIN_PUTCHAR
#undef  putchar
#define putchar __builtin_putchar
#endif
#ifndef _NO_BUILTIN_PUTS
#undef  puts
#define puts __builtin_puts
#endif
#ifndef _NO_BUILTIN_SCANF
#undef  scanf
#define scanf __builtin_scanf
#endif
#ifndef _NO_BUILTIN_SPRINTF
#undef  sprintf
#define sprintf __builtin_sprintf
#endif
#ifndef _NO_BUILTIN_SSCANF
#undef  sscanf
#define sscanf __builtin_sscanf
#endif
#ifndef _NO_BUILTIN_VFPRINTF
#undef  vfprintf
#define vfprintf __builtin_vfprintf
#endif
#ifndef _NO_BUILTIN_VPRINTF
#undef  vprintf
#define vprintf __builtin_vprintf
#endif
#ifndef _NO_BUILTIN_VSPRINTF
#undef  vsprintf
#define vsprintf __builtin_vsprintf
#endif
#ifndef _NO_BUILTIN_SNPRINTF
#undef  snprintf
#define snprintf __builtin_snprintf
#endif
#ifndef _NO_BUILTIN_VFSCANF
#undef  vfscanf
#define vfscanf __builtin_vfscanf
#endif
#ifndef _NO_BUILTIN_VSCANF
#undef  vscanf
#define vscanf __builtin_vscanf
#endif
#ifndef _NO_BUILTIN_VSNPRINTF
#undef  vsnprintf
#define vsnprintf __builtin_vsnprintf
#endif
#ifndef _NO_BUILTIN_VSSCANF
#undef  vsscanf
#define vsscanf __builtin_vsscanf
#endif

#endif
