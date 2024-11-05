//Create a function that takes three arguments prob, prize, pay and returns true if prob * prize > pay; otherwise return false.
#include "033 Profitable Gamble.h"
bool profitableGamble(float prob, int prize, float pay) {
	return (prob * prize) > pay;
}