//You are counting points for a basketball game,
//given the amount of 3-pointers scored and 2-pointers scored,
//find the final points for the team and return that value
//([2 -pointers scored, 3-pointers scored]).
#include "018 Basketball Points.h"
int points(int twoPointers, int threePointers) {
	return (twoPointers << 1) + 3 * threePointers;
}