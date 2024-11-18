//Given two strings, firstName and lastName, return a single string in the format "last, first".
#include "042 Concatenate First and Last Name into One String.h"
std::string concatName(std::string firstName, std::string lastName) {
	return lastName + ", " + firstName;
}