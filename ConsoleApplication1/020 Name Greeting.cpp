//Create a function that takes a name and returns a greeting in the form of a string.
#include <string>
#include "020 Name Greeting.h"
std::string helloName(const std::string& name) {
    return std::string("Hello ") + name + "!";
}
