//You have started your journey from home.
//Given a string of directions (N=North, W=West, S=South, E=East), you will walk for one minute in each direction.
//Determine whether a set of directions will lead you back to the starting position or not.
#include "095 Back to Home.h"
bool backToHome(std::string directions) {
	int x = 0;
	int y = 0;
	for (char c : directions) {
		if (c == 'N') y++;
		else if (c == 'S') y--;
		else if (c == 'E') x++;
		else if (c == 'W') x--;
	}
	return x == 0 && y == 0;
}