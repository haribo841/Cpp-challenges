//Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.
#include "026 Maximum Edge of a Triangle.h"
int nextEdge(int side1, int side2) {
	return (side1 + side2) - 1;
}