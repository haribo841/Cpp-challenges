//Create a function that returns true if a string contains any spaces.
#include "056 Check String for Spaces.h"
#include <algorithm>
bool HasSpaces(const std::string& str) {
    return std::ranges::any_of(str, [](char character) { return character == ' '; });
}
