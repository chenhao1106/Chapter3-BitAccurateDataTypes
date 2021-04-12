#ifndef __HLS_SIN_H__
#define __HLS_SIN_H__

#include <ap_fixed.h>

void hls_sin(ap_fixed<7, 1> x[128], const int offset);

#endif