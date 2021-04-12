#include <ap_int.h>
#include "slice_write.h"

void slice_write(ap_uint<6>* x, ap_uint<3>* w, int base) {
	(*x)(base + 2, base) = *w ;
}
