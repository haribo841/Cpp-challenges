//Create a function that takes a name and returns a greeting in the form of a string.
#include <string>
#include <sstream>
#include "020 Name Greeting.h"
std::string helloName(std::string name) {
    std::string result = "Hello ";
    result.append(name);
    result.append("!");
    return result;
}