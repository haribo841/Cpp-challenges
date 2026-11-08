//Create a function that finds the index of the first occurence of a given item.
#include "073 Find the Index 1.h"
#include <algorithm>
#include <iterator>
int search(const std::vector<int>& arr, int item) {
	const auto found = std::ranges::find(arr, item);
	return found == arr.end() ? -1 : static_cast<int>(std::distance(arr.begin(), found));
}
