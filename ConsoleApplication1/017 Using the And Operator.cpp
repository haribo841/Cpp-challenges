//Consider a && b:
//a is checked if it is true or false.
//If a is false, false is returned.
//b is checked if it is true or false.
//If b is false, false is returned.
//Otherwise, true is returned (as both a and b are therefore true ).
//Rembember that the default value for bool is false. (eg. var c = new bool(); c is false.)
//The && operator will only return true for true && true.
//Make a function using the && operator.
#include "016 Basic Variable Assignment.h"
bool andAnd(bool a, bool b) {
	return a && b;
}