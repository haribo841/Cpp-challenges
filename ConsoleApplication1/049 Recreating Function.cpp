//The abs function returns the absolute value of a number.
//This means that it returns a number's positive value.
//You can think of it as the distance away from zero.
//Create a function that recreates this functionality.
#include "049 Recreating Function.h"
double absolute(double n) {
	return n < 0 ? -n : n;
}