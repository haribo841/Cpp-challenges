//Create a function that takes an array of numbers. Return the largest number in the array.
#include "067 Largest Number in an Array.h"
#include <algorithm>
int findLargestNum(std::span<const int> values) {
	return *std::ranges::max_element(values);
}
