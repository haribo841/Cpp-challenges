//Create a function that takes an array of numbers and returns the smallest number in the set.
#include "066 Smallest Number in an Array.h"
#include <algorithm>
int findSmallestNum(std::span<const int> values) {
	return *std::ranges::min_element(values);
}
