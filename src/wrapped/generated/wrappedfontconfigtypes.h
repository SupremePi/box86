/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.10) *
 *******************************************************************/
#ifndef __wrappedfontconfigTYPES_H_
#define __wrappedfontconfigTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFppiuui_t)(void*, void*, int32_t, uint32_t, uint32_t, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FcPatternAdd, iFppiuui_t) \
	GO(FcPatternAddWeak, iFppiuui_t)

#endif // __wrappedfontconfigTYPES_H_
