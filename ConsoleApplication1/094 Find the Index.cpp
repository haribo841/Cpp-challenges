//Create a function that takes an array and a string as arguments and returns the index of the string.
#include "094 Find the Index.h"
#include <algorithm>
#include <iterator>
int findIndex(const std::vector<std::string>& arr, const std::string& str) {
	const auto found = std::ranges::find(arr, str);
	return found == arr.end() ? -1 : static_cast<int>(std::distance(arr.begin(), found));
}
