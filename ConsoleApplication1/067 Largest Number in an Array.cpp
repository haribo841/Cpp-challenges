//Create a function that takes an array of numbers. Return the largest number in the array.
#include "067 Largest Number in an Array.h"
int findLargestNum(int arr[], int length) {
	int largest = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	return largest;
}