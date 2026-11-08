//Write a function that returns the length of a string.
//Make your function recursive.
#include "053 Length of a String.h"
int length(std::string_view str) {
    if (str.empty() || str.front() == '\0')
        return 0;
    return 1 + length(str.substr(1));
}
