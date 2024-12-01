//Given a string, return true if its length is even or false if the length is odd.
#include "046 String Odd or Even.h"
bool oddOrEven(std::string s) {
    int count = 0; // Counter for the string
    // Manually count characters in the string
    for (char c : s) {
        count++;
    }
    return count % 2 == 0;
}