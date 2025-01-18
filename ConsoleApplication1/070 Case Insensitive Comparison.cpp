//Write a function that validates whether two strings are identical. Make it case insensitive.
#include "070 Case Insensitive Comparison.h"
#include <algorithm>

bool match(std::string str1, std::string str2) {
    return std::equal(str1.begin(), str1.end(),
        str2.begin(), str2.end(),
        [](char c1, char c2) {
            return std::tolower(c1) == std::tolower(c2);
        });
}
