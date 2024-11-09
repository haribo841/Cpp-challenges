//Christmas Eve is almost upon us, so naturally we need to prepare some milk and cookies for Santa!
//Create a function that accepts a (year, month, day) of date and returns true if it's Christmas Eve (December 24th) and false otherwise.
//Keep in mind that month of Date is 0 based, meaning December is the 11th month while January is 0.
#include "035 Time for Milk and Cookies.h"
bool timeForMilkAndCookies(int year, int month, int day) {
	return month == 11 && day == 24;
}