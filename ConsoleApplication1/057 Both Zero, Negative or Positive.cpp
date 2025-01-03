//Write a function that returns true if both numbers are:
//Smaller than 0, OR ...
//Greater than 0, OR ...
//Exactly 0
//Otherwise, return false.
#include "057 Both Zero, Negative or Positive.h"
bool isSame(int a, int b) {
	return (a < 0 && b < 0) || (a > 0 && b > 0) || (a == 0 && b == 0);
}