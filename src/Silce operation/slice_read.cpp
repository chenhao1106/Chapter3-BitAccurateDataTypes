#include <ap_int.h>
#include "slice_read.h"

void slice_read(ap_uint<6> x, ap_uint<3>* out1, ap_uint<3>* out2) {
	*out1 = x(5, 3);
	*out2 = x(2, 0);
}
