#include "typedef.h"

void test(dType a, dType b, oType &c) {
	oType tmp;

	tmp = a * b;
	c = tmp;
}