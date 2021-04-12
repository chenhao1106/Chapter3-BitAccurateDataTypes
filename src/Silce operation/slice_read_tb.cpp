#include <iostream>
#include <cstdlib>
#include <ap_int.h>
#include "slice_read.h"
using namespace std;

int main() {
	ap_uint<6> x;
	ap_uint<3> out1, out2, ans1, ans2;

	x = 41;    // 101001
	ans1 = 5;  // 101
	ans2 = 1;  // 001

	slice_read(x, &out1, &out2);
	assert(out1 == ans1);
	assert(out2 == ans2);


	return 0;
}
