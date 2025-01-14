//Create a function that will work as the modulus operator % without using the modulus operator.
//The modulus operator is a way to determine the remainder of a division operation.
// Instead of returning the result of the division, the modulo operation returns the whole number remainder.
#include "065 The Modulus Operator Function.h"
int mod(int a, int b) {
	return a - (a / b) * b;
}