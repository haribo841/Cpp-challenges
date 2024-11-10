//Given a Rubik's Cube with a side length of n, return the number of individual stickers that are needed to cover the whole cube.
//The Rubik's cube of side length 1 has 6 stickers.
//The Rubik's cube of side length 2 has 24 stickers.
//The Rubik's cube of side length 3 has 54 stickers.
#include "036 Number of Stickers.h"
int howManyStickers(int n) {
	return n * n * 6;
}