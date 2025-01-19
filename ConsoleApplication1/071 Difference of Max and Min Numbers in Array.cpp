//Create a function that takes an array and returns the difference between the biggest and smallest numbers
#include "071 Difference of Max and Min Numbers in Array.h"
int differenceMaxMin(std::vector<int> arr) {
	int largest = arr[0];
	int smallest = largest;
	for (int element : arr) {
		if (element > largest) largest = element;
		else if (element < smallest) smallest = element;
	}
	return largest - smallest;
}