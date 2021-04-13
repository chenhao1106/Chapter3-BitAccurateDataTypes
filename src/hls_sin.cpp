#include <ap_fixed.h>
#include <hls_math.h>
#include "hls_sin.h"
const double pi = 3.14;

void hls_sin(float x[128], const int offset) {
	for (int i = 0; i < 128; ++i) {
		x[i] = offset + 0.98 * hls::sinf(2 * pi * i / 64);
	}
}
