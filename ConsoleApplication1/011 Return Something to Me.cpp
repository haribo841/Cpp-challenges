#include <string>
#include "011 Return Something to Me.h"
std::string giveMeSomething(std::string a) {
	return "something " + a;
}
std::string giveMeSomething2(const std::string& a) {
	return "something " + a;
}