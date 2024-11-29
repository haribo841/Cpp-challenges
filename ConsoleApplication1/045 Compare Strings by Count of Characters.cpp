//Create a function that takes two strings as arguments and return either true or false depending on whether the
//total number of characters in the first string is equal to the total number of characters in the second string.
#include "045 Compare Strings by Count of Characters.h"
bool comp(std::string str1, std::string str2) {
	return str1.length() == str2.length();
}