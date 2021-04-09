#include <ap_fixed.h>
#include <iostream>
#include <fstream>
#include <hls_math.h>
using namespace std;
const double pi = 3.14;
const double OFFSET = 0.2;

int main() {
	fstream fptr;
	fptr.open("tmp.txt", fstream::out);
	ap_fixed<7, 1, AP_RND, AP_SAT> x[128];
	for (int i = 0; i < 128; ++i) {
		x[i] = OFFSET + 0.98 * hls::sin(2 * pi * i / 64);
		fptr << x[i] << endl;
	}
	fptr.close();
}
