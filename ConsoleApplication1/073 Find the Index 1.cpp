//Create a function that finds the index of the first occurence of a given item.
#include "073 Find the Index 1.h"
int search(std::vector<int> arr, int item) {
	auto i = std::find(arr.begin(), arr.end(), item) - arr.begin();
	return i == arr.size() ? -1 : i;
}