//Create a function that takes a string and returns the word count.
//The string will be a sentence.
#include "096 Word Count.h"
#include <cctype>
int countWords(const std::string& str) {
    int wordCount = 0;
    bool inWord = false;
    std::size_t index = 0;

    while (index < str.size()) {
        const char current = str[index];
        if (current == '\\' || current == '\'') {
            ++index;
            if (index < str.size()) {
                ++index;
            }
            continue;
        }

        if (std::isalnum(static_cast<unsigned char>(current))) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
        ++index;
    }

    return wordCount;
}
