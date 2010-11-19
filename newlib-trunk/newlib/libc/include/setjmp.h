/*
	setjmp.h
	stubs for future use.
*/

#ifndef _SETJMP_H_
#define _SETJMP_H_

#include "_ansi.h"

/* @LOCALMOD-START */
/* #include <machine/setjmp.h> */
/*force this (opaque) buffer to be 1k in size and 64bit aligned */
typedef struct {
  double dummy[128];
} jmp_buf;

#define _setjmp(buf) setjmp(buf)
#define _longjmp(buf, val) longjmp(buf, val)
/* @LOCALMOD-END */

_BEGIN_STD_C

void	_EXFUN(longjmp,(jmp_buf __jmpb, int __retval));
int	_EXFUN(setjmp,(jmp_buf __jmpb));

_END_STD_C

#endif /* _SETJMP_H_ */
