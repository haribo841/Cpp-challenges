//Create a function that takes a string and returns the concatenated first and last character.
#include "068 First and Last Character of a String.h"
std::string FirstLast(std::string str) {
	std::string result = "";
	result += str[0];
	result += str[str.length() - 1];
	return result;
}