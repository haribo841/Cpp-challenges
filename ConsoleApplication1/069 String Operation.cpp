//Create a function that takes two numbers and a mathematical operator and returns the result.
#include "069 String Operation.h"
#include <stdexcept>
int calculate(int num1, int num2, char op) {
    if ((op == '/' || op == '%') && num2 == 0) {
        throw std::domain_error("Division and modulo require a nonzero divisor");
    }
	switch (op)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	case '%':
		return num1 % num2;
	default:
		throw std::invalid_argument("Unsupported arithmetic operator");
	}
}