//Create a function that takes a name and returns a greeting in the form of a string.
#include <string>
#include <sstream>
#include "020 Name Greeting.h"
std::string helloName(std::string name) {
    // Initial strings
    const char* greetingStart = "Hello ";
    const char* greetingEnd = "!";

    // Calculate lengths
    size_t greetingStartLen = std::strlen(greetingStart);
    size_t nameLen = name.size();
    size_t greetingEndLen = std::strlen(greetingEnd);

    // Total length for the final string, including null terminator
    size_t totalLength = greetingStartLen + nameLen + greetingEndLen;

    // Allocate buffer for the concatenated result
    char* buffer = new char[totalLength + 1]; // +1 for null terminator

    // Explicitly copy safely using std::copy
    char* current = buffer;

    // Copy "Hello "
    std::copy(greetingStart, greetingStart + greetingStartLen, current);
    current += greetingStartLen;

    // Copy the name
    std::copy(name.begin(), name.end(), current);
    current += nameLen;

    // Copy "!"
    std::copy(greetingEnd, greetingEnd + greetingEndLen, current);
    current += greetingEndLen;

    // Null-terminate the string
    *current = '\0';

    // Convert to std::string
    std::string result(buffer);

    // Clean up dynamically allocated memory
    delete[] buffer;

    return result;
}