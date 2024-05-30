//Write a function that takes two integers (hours, minutes), converts them to seconds, and adds them.
#include "024 Hours and Minutes into Seconds.h"
int convert(int hours, int minutes) {
	return (hours * 3600) + (minutes * 60);
}