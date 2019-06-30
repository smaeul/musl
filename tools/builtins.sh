#!/bin/sh -e

c90_builtins="abort abs acos asin atan2 atan calloc ceil cosh cos exit exp fabs
floor fmod fprintf fputs frexp fscanf isalnum isalpha iscntrl isdigit isgraph
islower isprint ispunct isspace isupper isxdigit tolower toupper labs ldexp
log10 log malloc memchr memcmp memcpy memset modf pow printf putchar puts scanf
sinh sin sprintf sqrt sscanf strcat strchr strcmp strcpy strcspn strlen strncat
strncmp strncpy strpbrk strrchr strspn strstr tanh tan vfprintf vprintf
vsprintf"
c94_builtins="iswalnum iswalpha iswcntrl iswdigit iswgraph iswlower iswprint
iswpunct iswspace iswupper iswxdigit towlower towupper"
c99_builtins="_Exit acoshf acoshl acosh asinhf asinhl asinh atanhf atanhl atanh
cabsf cabsl cabs cacosf cacoshf cacoshl cacosh cacosl cacos cargf cargl carg
casinf casinhf casinhl casinh casinl casin catanf catanhf catanhl catanh catanl
catan cbrtf cbrtl cbrt ccosf ccoshf ccoshl ccosh ccosl ccos cexpf cexpl cexp
cimagf cimagl cimag clogf clogl clog conjf conjl conj copysignf copysignl
copysign cpowf cpowl cpow cprojf cprojl cproj crealf creall creal csinf csinhf
csinhl csinh csinl csin csqrtf csqrtl csqrt ctanf ctanhf ctanhl ctanh ctanl
ctan erfcf erfcl erfc erff erfl erf exp2f exp2l exp2 expm1f expm1l expm1 fdimf
fdiml fdim fmaf fmal fmaxf fmaxl fmax fma fminf fminl fmin hypotf hypotl hypot
ilogbf ilogbl ilogb imaxabs isblank iswblank lgammaf lgammal lgamma llabs
llrintf llrintl llrint llroundf llroundl llround log1pf log1pl log1p log2f
log2l log2 logbf logbl logb lrintf lrintl lrint lroundf lroundl lround
nearbyintf nearbyintl nearbyint nextafterf nextafterl nextafter nexttowardf
nexttowardl nexttoward remainderf remainderl remainder remquof remquol remquo
rintf rintl rint roundf roundl round scalblnf scalblnl scalbln scalbnf scalbnl
scalbn snprintf tgammaf tgammal tgamma truncf truncl trunc vfscanf vscanf
vsnprintf vsscanf"

cat << EOF

BEGIN {
  pattern = " ($(echo $c90_builtins $c94_builtins $c99_builtins | tr ' ' '|'))\\\\("
}

EOF
cat << 'EOF'

$0 ~ /^[[:alnum:]]+ .*[[:alnum:]]\(.+\)$/ && match($0, pattern) {
  fns[substr($0, RSTART+1, RLENGTH-2)] = ""
}

END {
  for (fn in fns)
    printf("-fno-builtin-%s ", fn)
  printf("\n")
}

EOF
