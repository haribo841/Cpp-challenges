//Write a function that classifies the missing angle as either "acute", "right", or "obtuse" based on its degrees.
#include "078 Missing Third Angle.h"
std::string missingAngle(int angle1, int angle2) {
	const int missing = 180 - angle1 - angle2;
	if (missing < 90) {
		return "acute";
	}
	if (missing > 90) {
		return "obtuse";
	}
	return "right";
}
