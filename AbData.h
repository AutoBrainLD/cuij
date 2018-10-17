/** 
* @author cuijin
* @copyright Copyright (C) 2018  AutoBrain
*/

#ifndef _AB_DATA_H_
#define _AB_DATA_H_

#include <stdint.h>


typedef int8_t         AInt8;
typedef uint8_t        AInt8U;
typedef int16_t        AInt16;
typedef uint16_t       AInt16U;
typedef int32_t        AInt32;
typedef uint32_t       AInt32U;
typedef uint8_t        ACharU;
typedef int8_t         ACharS;
typedef char           AChar;
typedef unsigned       AIntU;
typedef int            AInt;
typedef float          AFloat;
typedef double         ADouble;
typedef void           AVoid;
typedef int64_t        AInt64;
typedef uint64_t       AInt64U;
typedef size_t         ASize;
typedef int            ABool;
typedef unsigned       AId;

typedef void *     ABHandler;



#ifndef _CLIB
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <locale.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#endif


#endif	//_AB_DATA_H_
