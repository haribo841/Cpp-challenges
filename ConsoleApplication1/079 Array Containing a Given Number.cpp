//Write a function to check if an array contains a particular number.
#include "079 Array Containing a Given Number.h"
bool check(std::vector<int> arr, int el) {
	auto i = std::find(arr.begin(), arr.end(), el);
	if (i != arr.end()) {
		return true;
	} return false;
}