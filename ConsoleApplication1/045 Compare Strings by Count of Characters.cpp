//Create a function that takes two strings as arguments and return either true or false depending on whether the
//total number of characters in the first string is equal to the total number of characters in the second string.
#include "045 Compare Strings by Count of Characters.h"
bool comp(std::string str1, std::string str2) {
    int count1 = 0; // Counter for the first string
    int count2 = 0; // Counter for the second string

    // Manually count characters in the first string
    for (char c : str1) {
        count1++;
    }

    // Manually count characters in the second string
    for (char c : str2) {
        count2++;
    }

    // Compare the counts
    return count1 == count2;
}