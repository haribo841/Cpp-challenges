//Create a function that takes a string and returns the word count.
//The string will be a sentence.
#include "096 Word Count.h"
int countWords(std::string str) {
	int n = str.length();
    if (n == 0) {
        return 0;
    }
    int wordCount = 0;
    int state = 0; // Initial state is OUT

    // Traverse all characters of the input string
    for (int i = 0; i < n; i++) {
        // Check for backslash and single quote first
        if (str[i] == '\\' || str[i] == '\'') {
            i++; // Skip next character (after backslash)
            continue;
        }

        // If the current character is a word character
        if (isalnum(str[i])) {
            // If previous state was OUT, increment word count and change state to IN
            if (state == 0) {
                wordCount++;
                state = 1;
            }
        }
        // If the current character is not a word character
        else {
            // Change state to OUT
            state = 0;
        }
    }

    return wordCount;
}