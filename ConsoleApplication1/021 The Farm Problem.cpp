//In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals.
//The farmer breeds three species:
//chickens = 2 legs
//cows = 4 legs
//pigs = 4 legs
//The farmer has counted his animals and he gives you a subtotal for each species.
//You have to implement a function that returns the total number of legs of all the animals.
#include "021 The Farm Problem.h"
int animals(int chickens, int cows, int pigs) {
	return (chickens << 1) + (cows << 2) + pigs * 4;
}