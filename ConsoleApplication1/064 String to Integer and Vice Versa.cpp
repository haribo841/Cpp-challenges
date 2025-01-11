//Write two functions :
//toInt() : A function to convert a string to an integer.
//toStr() : A function to convert an integer to a string.
#include "064 String to Integer and Vice Versa.h"
int toInt(std::string string) {
	return std::stoi(string);
}

std::string toStr(int integer) {
	return std::to_string(integer);
}