#include "018 Basketball Points.h"
int points(int twoPointers, int threePointers) {
	return (twoPointers<<1) + 3 * threePointers;
}