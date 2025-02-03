//Create a function to concatenate two integer vectors.
#include "086 Concatenating Two Integer Arrays.h"
std::vector<int> concat(std::vector<int> arr1, std::vector<int> arr2) {
	for (size_t i = 0; i < arr2.size(); i++)
	{
		arr1.push_back(arr2[i]);
	}
	return arr1;
}