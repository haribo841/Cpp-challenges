//Write a function that returns the length of a string.
//Make your function recursive.
#include "053 Length of a String.h"
int length(std::string str) {
    if (str == "\0")
        return 0;
    else
        return 1 + length(str.c_str() + 1);
}