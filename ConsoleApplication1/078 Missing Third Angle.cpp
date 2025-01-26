//Write a function that classifies the missing angle as either "acute", "right", or "obtuse" based on its degrees.
#include "078 Missing Third Angle.h"
#include <string>
std::string missingAngle(int angle1, int angle2) {
	return 180 - (angle1 + angle2) < 90 ? "acute" : 180 - (angle1 + angle2) > 90 ? "obtuse" : "right";
}