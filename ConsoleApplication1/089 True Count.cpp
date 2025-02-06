//Create a function which returns the number of true values there are in an array.
#include "089 True Count.h"
int countTrue(std::vector<bool> arr) {
	int result = 0;
	for (int i : arr) {
		if (i) {
			result++;
		}
	}
	return result;
}