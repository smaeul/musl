#ifndef MATH_H
#define MATH_H

#include "../../include/math.h"

#ifndef _NO_BUILTIN_ACOS
#undef  acos
#define acos __builtin_acos
#endif
#ifndef _NO_BUILTIN_ASIN
#undef  asin
#define asin __builtin_asin
#endif
#ifndef _NO_BUILTIN_ATAN2
#undef  atan2
#define atan2 __builtin_atan2
#endif
#ifndef _NO_BUILTIN_ATAN
#undef  atan
#define atan __builtin_atan
#endif
#ifndef _NO_BUILTIN_CEIL
#undef  ceil
#define ceil __builtin_ceil
#endif
#ifndef _NO_BUILTIN_COSH
#undef  cosh
#define cosh __builtin_cosh
#endif
#ifndef _NO_BUILTIN_COS
#undef  cos
#define cos __builtin_cos
#endif
#ifndef _NO_BUILTIN_EXP
#undef  exp
#define exp __builtin_exp
#endif
#ifndef _NO_BUILTIN_FABS
#undef  fabs
#define fabs __builtin_fabs
#endif
#ifndef _NO_BUILTIN_FLOOR
#undef  floor
#define floor __builtin_floor
#endif
#ifndef _NO_BUILTIN_FMOD
#undef  fmod
#define fmod __builtin_fmod
#endif
#ifndef _NO_BUILTIN_FREXP
#undef  frexp
#define frexp __builtin_frexp
#endif
#ifndef _NO_BUILTIN_LDEXP
#undef  ldexp
#define ldexp __builtin_ldexp
#endif
#ifndef _NO_BUILTIN_LOG10
#undef  log10
#define log10 __builtin_log10
#endif
#ifndef _NO_BUILTIN_LOG
#undef  log
#define log __builtin_log
#endif
#ifndef _NO_BUILTIN_MODF
#undef  modf
#define modf __builtin_modf
#endif
#ifndef _NO_BUILTIN_POW
#undef  pow
#define pow __builtin_pow
#endif
#ifndef _NO_BUILTIN_SINH
#undef  sinh
#define sinh __builtin_sinh
#endif
#ifndef _NO_BUILTIN_SIN
#undef  sin
#define sin __builtin_sin
#endif
#ifndef _NO_BUILTIN_SQRT
#undef  sqrt
#define sqrt __builtin_sqrt
#endif
#ifndef _NO_BUILTIN_TANH
#undef  tanh
#define tanh __builtin_tanh
#endif
#ifndef _NO_BUILTIN_TAN
#undef  tan
#define tan __builtin_tan
#endif
#ifndef _NO_BUILTIN_ACOSHF
#undef  acoshf
#define acoshf __builtin_acoshf
#endif
#ifndef _NO_BUILTIN_ACOSHL
#undef  acoshl
#define acoshl __builtin_acoshl
#endif
#ifndef _NO_BUILTIN_ACOSH
#undef  acosh
#define acosh __builtin_acosh
#endif
#ifndef _NO_BUILTIN_ASINHF
#undef  asinhf
#define asinhf __builtin_asinhf
#endif
#ifndef _NO_BUILTIN_ASINHL
#undef  asinhl
#define asinhl __builtin_asinhl
#endif
#ifndef _NO_BUILTIN_ASINH
#undef  asinh
#define asinh __builtin_asinh
#endif
#ifndef _NO_BUILTIN_ATANHF
#undef  atanhf
#define atanhf __builtin_atanhf
#endif
#ifndef _NO_BUILTIN_ATANHL
#undef  atanhl
#define atanhl __builtin_atanhl
#endif
#ifndef _NO_BUILTIN_ATANH
#undef  atanh
#define atanh __builtin_atanh
#endif
#ifndef _NO_BUILTIN_CBRTF
#undef  cbrtf
#define cbrtf __builtin_cbrtf
#endif
#ifndef _NO_BUILTIN_CBRTL
#undef  cbrtl
#define cbrtl __builtin_cbrtl
#endif
#ifndef _NO_BUILTIN_CBRT
#undef  cbrt
#define cbrt __builtin_cbrt
#endif
#ifndef _NO_BUILTIN_COPYSIGNF
#undef  copysignf
#define copysignf __builtin_copysignf
#endif
#ifndef _NO_BUILTIN_COPYSIGNL
#undef  copysignl
#define copysignl __builtin_copysignl
#endif
#ifndef _NO_BUILTIN_COPYSIGN
#undef  copysign
#define copysign __builtin_copysign
#endif
#ifndef _NO_BUILTIN_ERFCF
#undef  erfcf
#define erfcf __builtin_erfcf
#endif
#ifndef _NO_BUILTIN_ERFCL
#undef  erfcl
#define erfcl __builtin_erfcl
#endif
#ifndef _NO_BUILTIN_ERFC
#undef  erfc
#define erfc __builtin_erfc
#endif
#ifndef _NO_BUILTIN_ERFF
#undef  erff
#define erff __builtin_erff
#endif
#ifndef _NO_BUILTIN_ERFL
#undef  erfl
#define erfl __builtin_erfl
#endif
#ifndef _NO_BUILTIN_ERF
#undef  erf
#define erf __builtin_erf
#endif
#ifndef _NO_BUILTIN_EXP2F
#undef  exp2f
#define exp2f __builtin_exp2f
#endif
#ifndef _NO_BUILTIN_EXP2L
#undef  exp2l
#define exp2l __builtin_exp2l
#endif
#ifndef _NO_BUILTIN_EXP2
#undef  exp2
#define exp2 __builtin_exp2
#endif
#ifndef _NO_BUILTIN_EXPM1F
#undef  expm1f
#define expm1f __builtin_expm1f
#endif
#ifndef _NO_BUILTIN_EXPM1L
#undef  expm1l
#define expm1l __builtin_expm1l
#endif
#ifndef _NO_BUILTIN_EXPM1
#undef  expm1
#define expm1 __builtin_expm1
#endif
#ifndef _NO_BUILTIN_FDIMF
#undef  fdimf
#define fdimf __builtin_fdimf
#endif
#ifndef _NO_BUILTIN_FDIML
#undef  fdiml
#define fdiml __builtin_fdiml
#endif
#ifndef _NO_BUILTIN_FDIM
#undef  fdim
#define fdim __builtin_fdim
#endif
#ifndef _NO_BUILTIN_FMAF
#undef  fmaf
#define fmaf __builtin_fmaf
#endif
#ifndef _NO_BUILTIN_FMAL
#undef  fmal
#define fmal __builtin_fmal
#endif
#ifndef _NO_BUILTIN_FMAXF
#undef  fmaxf
#define fmaxf __builtin_fmaxf
#endif
#ifndef _NO_BUILTIN_FMAXL
#undef  fmaxl
#define fmaxl __builtin_fmaxl
#endif
#ifndef _NO_BUILTIN_FMAX
#undef  fmax
#define fmax __builtin_fmax
#endif
#ifndef _NO_BUILTIN_FMA
#undef  fma
#define fma __builtin_fma
#endif
#ifndef _NO_BUILTIN_FMINF
#undef  fminf
#define fminf __builtin_fminf
#endif
#ifndef _NO_BUILTIN_FMINL
#undef  fminl
#define fminl __builtin_fminl
#endif
#ifndef _NO_BUILTIN_FMIN
#undef  fmin
#define fmin __builtin_fmin
#endif
#ifndef _NO_BUILTIN_HYPOTF
#undef  hypotf
#define hypotf __builtin_hypotf
#endif
#ifndef _NO_BUILTIN_HYPOTL
#undef  hypotl
#define hypotl __builtin_hypotl
#endif
#ifndef _NO_BUILTIN_HYPOT
#undef  hypot
#define hypot __builtin_hypot
#endif
#ifndef _NO_BUILTIN_ILOGBF
#undef  ilogbf
#define ilogbf __builtin_ilogbf
#endif
#ifndef _NO_BUILTIN_ILOGBL
#undef  ilogbl
#define ilogbl __builtin_ilogbl
#endif
#ifndef _NO_BUILTIN_ILOGB
#undef  ilogb
#define ilogb __builtin_ilogb
#endif
#ifndef _NO_BUILTIN_LGAMMAF
#undef  lgammaf
#define lgammaf __builtin_lgammaf
#endif
#ifndef _NO_BUILTIN_LGAMMAL
#undef  lgammal
#define lgammal __builtin_lgammal
#endif
#ifndef _NO_BUILTIN_LGAMMA
#undef  lgamma
#define lgamma __builtin_lgamma
#endif
#ifndef _NO_BUILTIN_LLRINTF
#undef  llrintf
#define llrintf __builtin_llrintf
#endif
#ifndef _NO_BUILTIN_LLRINTL
#undef  llrintl
#define llrintl __builtin_llrintl
#endif
#ifndef _NO_BUILTIN_LLRINT
#undef  llrint
#define llrint __builtin_llrint
#endif
#ifndef _NO_BUILTIN_LLROUNDF
#undef  llroundf
#define llroundf __builtin_llroundf
#endif
#ifndef _NO_BUILTIN_LLROUNDL
#undef  llroundl
#define llroundl __builtin_llroundl
#endif
#ifndef _NO_BUILTIN_LLROUND
#undef  llround
#define llround __builtin_llround
#endif
#ifndef _NO_BUILTIN_LOG1PF
#undef  log1pf
#define log1pf __builtin_log1pf
#endif
#ifndef _NO_BUILTIN_LOG1PL
#undef  log1pl
#define log1pl __builtin_log1pl
#endif
#ifndef _NO_BUILTIN_LOG1P
#undef  log1p
#define log1p __builtin_log1p
#endif
#ifndef _NO_BUILTIN_LOG2F
#undef  log2f
#define log2f __builtin_log2f
#endif
#ifndef _NO_BUILTIN_LOG2L
#undef  log2l
#define log2l __builtin_log2l
#endif
#ifndef _NO_BUILTIN_LOG2
#undef  log2
#define log2 __builtin_log2
#endif
#ifndef _NO_BUILTIN_LOGBF
#undef  logbf
#define logbf __builtin_logbf
#endif
#ifndef _NO_BUILTIN_LOGBL
#undef  logbl
#define logbl __builtin_logbl
#endif
#ifndef _NO_BUILTIN_LOGB
#undef  logb
#define logb __builtin_logb
#endif
#ifndef _NO_BUILTIN_LRINTF
#undef  lrintf
#define lrintf __builtin_lrintf
#endif
#ifndef _NO_BUILTIN_LRINTL
#undef  lrintl
#define lrintl __builtin_lrintl
#endif
#ifndef _NO_BUILTIN_LRINT
#undef  lrint
#define lrint __builtin_lrint
#endif
#ifndef _NO_BUILTIN_LROUNDF
#undef  lroundf
#define lroundf __builtin_lroundf
#endif
#ifndef _NO_BUILTIN_LROUNDL
#undef  lroundl
#define lroundl __builtin_lroundl
#endif
#ifndef _NO_BUILTIN_LROUND
#undef  lround
#define lround __builtin_lround
#endif
#ifndef _NO_BUILTIN_NEARBYINTF
#undef  nearbyintf
#define nearbyintf __builtin_nearbyintf
#endif
#ifndef _NO_BUILTIN_NEARBYINTL
#undef  nearbyintl
#define nearbyintl __builtin_nearbyintl
#endif
#ifndef _NO_BUILTIN_NEARBYINT
#undef  nearbyint
#define nearbyint __builtin_nearbyint
#endif
#ifndef _NO_BUILTIN_NEXTAFTERF
#undef  nextafterf
#define nextafterf __builtin_nextafterf
#endif
#ifndef _NO_BUILTIN_NEXTAFTERL
#undef  nextafterl
#define nextafterl __builtin_nextafterl
#endif
#ifndef _NO_BUILTIN_NEXTAFTER
#undef  nextafter
#define nextafter __builtin_nextafter
#endif
#ifndef _NO_BUILTIN_NEXTTOWARDF
#undef  nexttowardf
#define nexttowardf __builtin_nexttowardf
#endif
#ifndef _NO_BUILTIN_NEXTTOWARDL
#undef  nexttowardl
#define nexttowardl __builtin_nexttowardl
#endif
#ifndef _NO_BUILTIN_NEXTTOWARD
#undef  nexttoward
#define nexttoward __builtin_nexttoward
#endif
#ifndef _NO_BUILTIN_REMAINDERF
#undef  remainderf
#define remainderf __builtin_remainderf
#endif
#ifndef _NO_BUILTIN_REMAINDERL
#undef  remainderl
#define remainderl __builtin_remainderl
#endif
#ifndef _NO_BUILTIN_REMAINDER
#undef  remainder
#define remainder __builtin_remainder
#endif
#ifndef _NO_BUILTIN_REMQUOF
#undef  remquof
#define remquof __builtin_remquof
#endif
#ifndef _NO_BUILTIN_REMQUOL
#undef  remquol
#define remquol __builtin_remquol
#endif
#ifndef _NO_BUILTIN_REMQUO
#undef  remquo
#define remquo __builtin_remquo
#endif
#ifndef _NO_BUILTIN_RINTF
#undef  rintf
#define rintf __builtin_rintf
#endif
#ifndef _NO_BUILTIN_RINTL
#undef  rintl
#define rintl __builtin_rintl
#endif
#ifndef _NO_BUILTIN_RINT
#undef  rint
#define rint __builtin_rint
#endif
#ifndef _NO_BUILTIN_ROUNDF
#undef  roundf
#define roundf __builtin_roundf
#endif
#ifndef _NO_BUILTIN_ROUNDL
#undef  roundl
#define roundl __builtin_roundl
#endif
#ifndef _NO_BUILTIN_ROUND
#undef  round
#define round __builtin_round
#endif
#ifndef _NO_BUILTIN_SCALBLNF
#undef  scalblnf
#define scalblnf __builtin_scalblnf
#endif
#ifndef _NO_BUILTIN_SCALBLNL
#undef  scalblnl
#define scalblnl __builtin_scalblnl
#endif
#ifndef _NO_BUILTIN_SCALBLN
#undef  scalbln
#define scalbln __builtin_scalbln
#endif
#ifndef _NO_BUILTIN_SCALBNF
#undef  scalbnf
#define scalbnf __builtin_scalbnf
#endif
#ifndef _NO_BUILTIN_SCALBNL
#undef  scalbnl
#define scalbnl __builtin_scalbnl
#endif
#ifndef _NO_BUILTIN_SCALBN
#undef  scalbn
#define scalbn __builtin_scalbn
#endif
#ifndef _NO_BUILTIN_TGAMMAF
#undef  tgammaf
#define tgammaf __builtin_tgammaf
#endif
#ifndef _NO_BUILTIN_TGAMMAL
#undef  tgammal
#define tgammal __builtin_tgammal
#endif
#ifndef _NO_BUILTIN_TGAMMA
#undef  tgamma
#define tgamma __builtin_tgamma
#endif
#ifndef _NO_BUILTIN_TRUNCF
#undef  truncf
#define truncf __builtin_truncf
#endif
#ifndef _NO_BUILTIN_TRUNCL
#undef  truncl
#define truncl __builtin_truncl
#endif
#ifndef _NO_BUILTIN_TRUNC
#undef  trunc
#define trunc __builtin_trunc
#endif

#endif
