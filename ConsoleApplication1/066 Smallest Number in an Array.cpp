//Create a function that takes an array of numbers and returns the smallest number in the set.
#include "066 Smallest Number in an Array.h"
int findSmallestNum(int arr[], int length) {
	int smallest = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i]< smallest)
		{
			smallest = arr[i];
		}
	}
	return smallest;
}