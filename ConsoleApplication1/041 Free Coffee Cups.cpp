//For each of the 6 coffee cups I buy, I get a 7th cup free.
//In total, I get 7 cups.
//Create a function that takes n cups bought and return as an integer the total number of cups I would get.
#include "041 Free Coffee Cups.h"
int totalCups(int n) {
	return n + (n / 6);
}