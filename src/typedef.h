#ifndef __TYPEDEFS__
#define __TYPEDEFS__
#include <ap_int.h>

#ifdef NATIVE_TYPES
	typedef short int dType;
	typedef int oType;
#else
	typedef ap_int<7> dType;
	typedef ap_int<14> oType;
#endif

#endif
