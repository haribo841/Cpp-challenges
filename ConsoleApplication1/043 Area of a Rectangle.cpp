//Create a function that calculates the area of a rectangle. If the arguments are invalid, your function must return -1.
#include "043 Area of a Rectangle.h"
int area(int h, int w) {
	return h <= 0 || w <= 0 ? -1 : h * w;
}