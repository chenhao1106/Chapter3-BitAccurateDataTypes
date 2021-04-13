#include <ap_fixed.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "hls_sin.h"
using namespace std;
const double pi = 3.14;
const double OFFSET = 0.0;

int main()
{
	fstream fptr;
	fptr.open("tmp.txt", fstream::out);

	float c[128];
	for (int i = 0; i < 128; ++i) {
		c[i] = OFFSET + 0.98 * sinf(2 * pi * i / 64);
	}

	float x[128];
	hls_sin(x, OFFSET);

	fptr << left << showpos << fixed << setprecision(16);
	fptr << "c_math               hls_math             error" << endl;
	for (int i = 0; i < 128; ++i) {
		fptr << setw(18) << c[i] << "  ";
		fptr << setw(18) << x[i] << "  ";
		fptr << setw(18) << c[i] - x[i] << endl;
	}

	fptr.close();
}
