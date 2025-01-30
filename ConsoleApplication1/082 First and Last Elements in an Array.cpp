//Create a function that takes an array of values and returns the first and last values in a new array.
#include "082 First and Last Elements in an Array.h"
std::vector<std::any> FirstLast(std::vector<std::any> values) {
    if (values.empty()) return {};

    std::any first = values.front();
    std::any last = values.back();

    // Ensure string literals are stored as std::string
    if (first.type() == typeid(const char*)) {
        first = std::string(std::any_cast<const char*>(first));
    }
    if (last.type() == typeid(const char*)) {
        last = std::string(std::any_cast<const char*>(last));
    }

    return { first, last };
}