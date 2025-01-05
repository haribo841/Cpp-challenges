//Create a function that takes a number n and returns its length.
#include "059 Length of Number.h"
int Length(int n) {
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}