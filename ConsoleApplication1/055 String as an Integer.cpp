//Create a function that takes a string and returns it as an integer.
#include "055 String as an Integer.h"
int StringInt(std::string str) {
	int result = 0;
	int length = str.length();
	int counter = 0;
	for (size_t i = 0; i < length; i++)
	{
		int power = 1;
		for (int j = length - i; j > 1; j--)
		{
			power *= 10;
		}
		result += (str[i] - '0') * power;
	}

	return result;
}