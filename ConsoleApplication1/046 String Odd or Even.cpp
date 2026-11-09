//Given a string, return true if its length is even or false if the length is odd.
#include "046 String Odd or Even.h"
bool oddOrEven(std::string_view s) {
    return s.size() % 2 == 0;
}
