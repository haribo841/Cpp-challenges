//Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
#include "051 Broken Bridge.h"
#include <algorithm>
bool isSafeBridge(const std::string& s) {
	return std::ranges::none_of(s, [](char character) { return character == ' '; });
}
