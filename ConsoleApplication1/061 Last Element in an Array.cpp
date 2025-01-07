//Create a function that accepts an array of numbers and returns the last number in the array.
#include "061 Last Element in an Array.h"
int getLastItem(int arr[], int length) {
	return arr[--length];
}