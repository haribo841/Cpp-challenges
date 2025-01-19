//Create a function that takes two strings and returns true if the first string ends with the second string; otherwise return false.
#include "072 String Ending Matches.h"
bool checkEnding(std::string str1, std::string str2) {
    if (str2.size() > str1.size()) return false;
    return str1.compare(str1.size() - str2.size(), str2.size(), str2) == 0;
}