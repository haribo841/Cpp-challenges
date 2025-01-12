//Write two functions :
//toInt() : A function to convert a string to an integer.
//toStr() : A function to convert an integer to a string.
#include "064 String to Integer and Vice Versa.h"
int toInt(std::string string) {
    int i = 0;
    // Traversing string
    for (char c : string) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
    }
    return i;
}

std::string toStr(int integer) {
    std::string result;
    bool isNegative = integer < 0;
    if (isNegative) {
        integer = -integer;
    }
    do {
        result += '0' + (integer % 10); // Extract the last digit
        integer /= 10;
    } while (integer > 0);
    
    if (isNegative) {
        result += '-';
    }
    std::reverse(result.begin(), result.end());
    return result;
}