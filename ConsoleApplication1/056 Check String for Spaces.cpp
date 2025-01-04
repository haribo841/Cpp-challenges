//Create a function that returns true if a string contains any spaces.
#include "056 Check String for Spaces.h"
bool HasSpaces(std::string str) {
    for (char ch : str) {
        if (ch == ' ')return  true;
    }
    return  false;
}