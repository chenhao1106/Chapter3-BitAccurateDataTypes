#include <ap_int.h>
#include <fstream>
#include <hls_math.h>
using namespace std;
const double pi = 3.14;
const int OFFSET = 64;

int main() {
	fstream fptr;
	fptr.open("tmp.txt", fstream::out);
	ap_uint<7> x[128];
	for (int i = 0; i < 128; ++i) {
		x[i] = OFFSET + 63 * hls::sin(2 * pi * i / 64);
		fptr << x[i] << endl;
	}
	fptr.close();
}
