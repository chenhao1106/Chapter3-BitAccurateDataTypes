#include <iostream>
#include <cstdlib>
#include <ap_int.h>
#include "slice_write.h"
using namespace std;

int main() {
	ap_uint<6> x, ans;
	ap_uint<3> w;

	x = 41;  // 101001
	w = 5;   // 101
	ans = 45;

	slice_write(&x, &w, 0);
	assert(x == ans);

	return 0;
}
