//Create a function that adds a string ending to each member in an array.
#include "076 Word Endings.h"
std::vector<std::string> addEnding(std::vector<std::string> arr, std::string ending) {
    for (std::string& a : arr) {
        a += ending;
    }
    return arr;
}