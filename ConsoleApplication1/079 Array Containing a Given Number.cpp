//Write a function to check if an array contains a particular number.
#include "079 Array Containing a Given Number.h"
#include <algorithm>
bool check(const std::vector<int>& arr, int el) {
	if (const auto found = std::ranges::find(arr, el); found != arr.end()) {
		return true;
	}
	return false;
}
