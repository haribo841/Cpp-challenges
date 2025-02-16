//Create a function that takes the month and year (as integers) and returns the number of days in that month.
#include "097 Days in a Month.h"
int days(int month, int year) {
	int lapYear = false;
	if ((year % 4) == 0) {
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0) {
				lapYear = true;
			}
			else {
				lapYear = false;
			}
		}
		else {
			lapYear = true;
		}
	}
	else {
		lapYear = false;
	}
	if (month == 2) {
		if (lapYear) {
			return 29;
		}
		else {
			return 28;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else {
		return 31;
	}
}