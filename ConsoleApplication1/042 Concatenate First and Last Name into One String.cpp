//Given two strings, firstName and lastName, return a single string in the format "last, first".
#include "042 Concatenate First and Last Name into One String.h"
std::string concatName(const std::string& firstName, const std::string& lastName) {
    std::string result;
    result.reserve(firstName.size() + lastName.size() + 2);
    result.append(lastName).append(", ").append(firstName);
    return result;
}
