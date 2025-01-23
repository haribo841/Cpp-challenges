//Create a function that returns how many possible arrangements can come from a certain number of switches (on / off).
//In other words, for a given number of switches, how many different patterns of on and off can we have?
#include "075 OnOff Switches.h"
int posCom(int n) {
	return 1 << n;
}