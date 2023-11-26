//In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals.
//The farmer breeds three species:
//chickens = 2 legs
//cows = 4 legs
//pigs = 4 legs
//The farmer has counted his animals and he gives you a subtotal for each species.
//You have to implement a function that returns the total number of legs of all the animals.
#include "021 The Farm Problem.h"
int animals(int chickens, int cows, int pigs) {
	return chickens * 2 + cows * 4 + pigs * 4;
}
int animals2(int chickens, int cows, int pigs) {
	return (chickens << 1) + cows * 4 + pigs * 4;
}
int animals3(int chickens, int cows, int pigs) {
	return chickens * 2 + (cows << 2) + pigs * 4;
}
int animals4(int chickens, int cows, int pigs) {
	return chickens * 2 + cows * 4 + (pigs << 2);
}
int animals5(int chickens, int cows, int pigs) {
	return (chickens << 1) + (cows << 2) + pigs * 4;
}
int animals6(int chickens, int cows, int pigs) {
	return (chickens << 1) + cows * 4 + (pigs << 2);
}
int animals7(int chickens, int cows, int pigs) {
	return chickens * 2 + (cows << 2) + (pigs << 2);
}
int animals8(int chickens, int cows, int pigs) {
	return (chickens << 1) + (cows << 2) + (pigs << 2);
}
int animals9(int chickens, int cows, int pigs) {
	return chickens * 2 + (cows + pigs) * 4;
}
int animals10(int chickens, int cows, int pigs) {
	return (chickens << 1) + (cows + pigs) * 4;
}
int animals11(int chickens, int cows, int pigs) {
	return chickens * 2 + ((cows + pigs) << 2);
}
int animals12(int chickens, int cows, int pigs) {
	return (chickens << 1) + ((cows + pigs) << 2);
}
int animals16(int chickens, int cows, int pigs) {
	return 2 * (chickens + ((cows + pigs) << 1));
}
int animals17(int chickens, int cows, int pigs) {
	return (chickens + ((cows + pigs) << 1)) << 1;
}