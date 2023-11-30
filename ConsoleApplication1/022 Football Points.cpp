//Create a function that takes the number of wins, draws and losses and calculates the number of points a football team has obtained so far.
//wins get 3 points
//draws get 1 point
//losses get 0 points
#include "022 Football Points.h"
int footballPoints(int wins, int draws, int losses) {
	return wins * 3 + draws * 1;
}
int footballPoints2(int wins, int draws, int losses) {
	return wins * 3 + draws;
}