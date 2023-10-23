#include "008 Less than or Equal to Zero.h"
bool lessThanOrEqualToZero(int num) {
	return num <= 0;
}
bool lessThanOrEqualToZero2(int num) {
	return !(num > 0);
}
bool lessThanOrEqualToZero3(int num) {
	return num >0?false:true;
}
bool lessThanOrEqualToZero4(int num) {
	if (num > 0) return false;
	else return true;
}
bool lessThanOrEqualToZero5(int num) {
	if (num > 0) return false;
	return true;
}
bool lessThanOrEqualToZero6(int num) {
	if (num <= 0) return true;
}