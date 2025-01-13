//Create a function that takes an array of numbers and returns the smallest number in the set.
#include "066 Smallest Number in an Array.h"
#include <climits>
int findSmallestNum(int arr[], int length) {
	int smallest = INT_MAX;
	int boundry = arr[length];
	for (int i = 0; i < boundry; i++)
	{
		if (arr[i]< smallest)
		{
			smallest = arr[i];
		}
	}
	return smallest;
}