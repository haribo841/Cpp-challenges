//Create a function that takes a string and changes the word amazing to not amazing.
//Return the string without any change if the word edabit is part of the string.
#include "074 Amazing Edabit.h"
std::string amazingEdabit(std::string str) {
    // Check if "edabit" is part of the string
    if (str.find("edabit") != std::string::npos) {
        return str; // Return unchanged if "edabit" is found
    }

    // Find the position of the word "amazing"
    size_t pos = str.find("amazing");
    if (pos != std::string::npos) {
        // Replace "amazing" with "not amazing"
        str.replace(pos, 7, "not amazing"); // 7 is the length of "amazing"
    }

    return str;
}