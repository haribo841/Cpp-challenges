//Create a function that takes two numbers and a mathematical operator and returns the result.
#include "069 String Operation.h"
int calculate(int num1, int num2, char op) {
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
	}
}