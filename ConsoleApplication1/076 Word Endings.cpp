//Create a function that adds a string ending to each member in an array.
#include "076 Word Endings.h"
std::vector<std::string> addEnding(const std::vector<std::string>& arr, const std::string& ending) {
    std::vector<std::string> result = arr;
    for (std::string& a : result) {
        a += ending;
    }
    return result;
}
