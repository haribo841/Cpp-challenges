//Create a function that takes a name and returns a greeting in the form of a string.
#include <string>
#include <sstream>
#include "020 Name Greeting.h"
std::string helloName(std::string name) {
    // Initial string "Hello "
    const char* greetingStart = "Hello ";
    size_t greetingStartLen = std::strlen(greetingStart);

    // Add "!" at the end
    const char* greetingEnd = "!";
    size_t greetingEndLen = std::strlen(greetingEnd);

    // Total length for the final string
    size_t totalLength = greetingStartLen + name.size() + greetingEndLen;

    // Allocate buffer
    char* buffer = new char[totalLength + 1]; // +1 for null terminator

    // Copy "Hello " with Warning C6386
    std::memcpy(buffer, greetingStart, greetingStartLen);

    // Copy `name`
    std::memcpy(buffer + greetingStartLen, name.c_str(), name.size());

    // Copy "!"
    std::memcpy(buffer + greetingStartLen + name.size(), greetingEnd, greetingEndLen);

    // Null-terminate the string
    buffer[totalLength] = '\0';

    // Convert to std::string
    std::string result(buffer);

    // Clean up dynamically allocated memory
    delete[] buffer;

    return result; // Return the constructed string
}