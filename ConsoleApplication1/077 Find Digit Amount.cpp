//Create a function that takes a number as an argument and returns the amount of digits it has.
#include "077 Find Digit Amount.h"
#include <string>
int findDigitAmount(int num) {
	return std::to_string(num).size();
}