#include <stdbool.h>
#include "config.h"

typedef unsigned int UQItype	__attribute__ ((mode (QI)));

_LIBUNWIND_EXPORT const UQItype __clz_tab[256] =
{
  0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
  6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
  7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
};

/*
_LIBUNWIND_EXPORT void __umoddi3() {abort();}
_LIBUNWIND_EXPORT void __udivdi3() {abort();}
_LIBUNWIND_EXPORT void __udivmoddi4() {abort();}
_LIBUNWIND_EXPORT void __divdi3() {abort();}
_LIBUNWIND_EXPORT void __moddi3() {abort();}
_LIBUNWIND_EXPORT void __mulxc3() {abort();}
_LIBUNWIND_EXPORT void __muldc3() {abort();}
_LIBUNWIND_EXPORT void __mulsc3() {abort();}
_LIBUNWIND_EXPORT void __divmoddi4() {abort();}
_LIBUNWIND_EXPORT void __clz_tab() {abort();}
_LIBUNWIND_EXPORT void __udivmodti4() {abort();}
_LIBUNWIND_EXPORT void __udivti3() {abort();}
_LIBUNWIND_EXPORT void __popcountdi2() {abort();}
*/
