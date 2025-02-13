//Create a function that takes an array and a string as arguments and returns the index of the string.
#include "094 Find the Index.h"
int findIndex(vector<string> arr, string str) {
	auto i = std::find(arr.begin(), arr.end(), str) - arr.begin();
	return i == arr.size() ? -1 : i;
}