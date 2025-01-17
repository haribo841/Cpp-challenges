//Write a function that validates whether two strings are identical. Make it case insensitive.
#include "070 Case Insensitive Comparison.h"
#include <algorithm>
bool match(std::string str1, std::string str2) {
    std::string str1Lower = str1;
    std::string str2Lower = str2;

    std::transform(str1Lower.begin(), str1Lower.end(), str1Lower.begin(), ::tolower);
    std::transform(str2Lower.begin(), str2Lower.end(), str2Lower.begin(), ::tolower);

    return str1Lower == str2Lower;
}