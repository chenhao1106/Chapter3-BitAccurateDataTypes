#include <ap_int.h>
#include "unsigned_shift.h"

void unsigned_shift(ap_uint<7>* x, bool direc, int amount) {
	if (direc == 0) {
		*x <<= amount;
	}
	else {
		*x >>= amount;
	}
}
