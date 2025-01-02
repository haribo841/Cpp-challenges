//Create a function that takes a string and returns it as an integer.
#include "055 String as an Integer.h"
int StringInt(std::string str) {
    int result = 0;
    for (char ch : str) {
        result = result * 10 + (ch - '0');
    }
    return result;
}