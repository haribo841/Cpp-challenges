//Given two strings, firstName and lastName, return a single string in the format "last, first".
#include "042 Concatenate First and Last Name into One String.h"
std::string concatName(std::string_view firstName, std::string_view lastName) {
    std::string result;
    result.reserve(firstName.size() + lastName.size() + 2);
    result.append(lastName).append(", ").append(firstName);
    return result;
}
