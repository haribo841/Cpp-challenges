//Create a function that takes a vector containing only numbers and return the first element.
#include "023 First Element in an Array.h"
int getFirstValue(std::vector<int> arr) {
	return arr.empty() ? -1 : arr[0];
}