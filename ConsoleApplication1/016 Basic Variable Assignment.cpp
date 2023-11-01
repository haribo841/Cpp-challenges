//A student learning C++ was trying to make a function.
// His code should concatenate a passed string name with string "Edabit" and store it in a variable called result.
// He needs your help to fix this code.
#include <string>
#include "016 Basic Variable Assignment.h"
std::string nameString(std::string name) {
	std::string b = "Edabit";
	std::string result = name + b;
	return result;
}