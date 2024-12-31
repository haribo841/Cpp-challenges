//Given an array of integers, return the difference between the largest and smallest integers in the array.
#include "054 Max Min Difference.h"
int difference(std::vector<int> nums) {
	int min = nums[0];
	int max = min;
	for (auto& i : nums)
	{
		if (i < min)min = i;
		else if (i > max)max = i;
	}
	return max - min;
}