#include <iostream>
#include <cstdlib>
#include <ap_int.h>
#include "unsigned_shift.h"
using namespace std;

int main() {
	// set up test variable
	ap_uint<7> x, ans;

	// test ap_uint shift left (pad zero)
	// initialize x
	x = 51;    // b0110011
	ans = 102; // b1100110

	unsigned_shift(&x, 0, 1);
	assert(x == ans);

	ans = 76;  // b1001100

	unsigned_shift(&x, 0, 1);
	assert(x == ans);

	// test ap_uint shift right (pad zero)
	// initialize x
	x = 51;    // b0110011
	ans = 25;  // b0011001

	unsigned_shift(&x, 1, 1);
	assert(x == ans);

	ans = 12;  // b0001100

	unsigned_shift(&x, 1, 1);
	assert(x == ans);

	return 0;
}
