#include <iostream>
#include <cstdlib>
#include <ap_int.h>
#include "signed_shift.h"
using namespace std;

int main() {
	// set up test variable
	ap_int<7> x, ans;

	// test ap_uint shift left (pad zero)
	// initialize x
	x = 51;    // b0110011
	ans = -26; // b1100110

	signed_shift(&x, 0, 1);
	assert(x == ans);

	ans = -52; // b1001100

	signed_shift(&x, 0, 1);
	assert(x == ans);

	// test ap_uint shift right (pad zero)
	// initialize x
	x = -26;   // b1100110
	ans = -13; // b1110011

	signed_shift(&x, 1, 1);
	assert(x == ans);

	ans = -7;  // b1111001

	signed_shift(&x, 1, 1);
	assert(x == ans);

	return 0;
}
