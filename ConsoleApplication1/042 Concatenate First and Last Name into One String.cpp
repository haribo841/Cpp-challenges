//Given two strings, firstName and lastName, return a single string in the format "last, first".
#include "042 Concatenate First and Last Name into One String.h"
std::string concatName(std::string firstName, std::string lastName) {
    size_t firstNameLen = firstName.size();
    size_t lastNameLen = lastName.size();
    size_t totalSize = lastNameLen + 2 + firstNameLen; // ", " adds 2 chars

    // Dynamically allocate memory for the result
    char* buffer = new char[totalSize + 1]; // +1 for null terminator

    // Copy lastName to buffer
    std::memcpy(buffer, lastName.c_str(), lastNameLen);

    // Add ", "
    buffer[lastNameLen] = ',';
    buffer[lastNameLen + 1] = ' ';

    // Append firstName
    std::memcpy(buffer + lastNameLen + 2, firstName.c_str(), firstNameLen);

    // Null-terminate the string
    buffer[totalSize] = '\0';

    // Convert to std::string for the return value
    std::string result(buffer);

    // Clean up dynamically allocated memory
    delete[] buffer;

    return result;
}