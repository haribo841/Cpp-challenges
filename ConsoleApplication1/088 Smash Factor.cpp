//Smash factor is a term in golf that relates to the amount of energy transferred from the club head to the golf ball.
//The formula for calculating smash factor is ball speed divided by club speed.
//Create a function that takes ball speed bs and club speed cs as arguments and returns the smash factor to the nearest hundredth.
#include "088 Smash Factor.h"
double smashFactor(double bs, double cs) {
	double result = bs / cs;
	result = std::round(result * 100.0) / 100.0;
	return result;
}
