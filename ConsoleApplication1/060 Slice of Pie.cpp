//Create a function that determines whether or not it's possible to split a pie fairly given these three parameters:
//1.Total number of slices.
//2.Number of recipients.
//3.How many slices each person gets.
#include "060 Slice of Pie.h"
bool equalSlices(int total, int people, int each) {
	return people * each <= total;
}