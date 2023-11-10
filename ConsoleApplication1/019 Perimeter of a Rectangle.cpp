#include "019 Perimeter of a Rectangle.h"
int findPerimeter(int length, int width) {
	return (length + width)<<1;
}
int findPerimeter2(int length, int width) {
	return (length<<1) + (width<<1);
}
int findPerimeter3(int length, int width) {
	return 2 * (length + width);
}
int findPerimeter4(int length, int width) {
	return 2 * length + 2 * width;
}