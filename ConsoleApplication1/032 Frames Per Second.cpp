//Create a function that returns the number of frames shown in a given number of minutes for a certain FPS.
#include "032 Frames Per Second.h"
int frames(int minutes, int fps) {
	return 60 * minutes * fps;
}