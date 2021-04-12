#include <ap_int.h>
#include "signed_shift.h"

void signed_shift(ap_int<7>* x, bool direc, int amount) {
	if (direc == 0) {
		*x <<= amount;
	}
	else {
		*x >>= amount;
	}
}
