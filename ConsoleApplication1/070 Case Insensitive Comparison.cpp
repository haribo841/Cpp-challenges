//Write a function that validates whether two strings are identical. Make it case insensitive.
#include "070 Case Insensitive Comparison.h"
#include <algorithm>
#include <cctype>

bool match(const std::string& str1, const std::string& str2) {
    return std::ranges::equal(str1, str2,
        [](unsigned char c1, unsigned char c2) {
            return std::tolower(c1) == std::tolower(c2);
        });
}
