//Create a function to concatenate two integer vectors.
#include "086 Concatenating Two Integer Arrays.h"
std::vector<int> concat(const std::vector<int>& arr1, const std::vector<int>& arr2) {
	std::vector<int> result = arr1;
	result.insert(result.end(), arr2.begin(), arr2.end());
	return result;
}
