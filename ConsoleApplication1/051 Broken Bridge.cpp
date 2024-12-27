//Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
#include "051 Broken Bridge.h"
bool isSafeBridge(std::string s) {
	for (char c : s)
	{
		if (c == ' ') return false;
	}
	return true;
}