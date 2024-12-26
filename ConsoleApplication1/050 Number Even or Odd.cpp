//Create a function that takes a number as an argument and returns "even" for even numbers and "odd" for odd numbers.
#include "050 Number Even or Odd.h"
std::string isEvenOrOdd(int num) {
	return num % 2 == 0 ? "even" : "odd";
}