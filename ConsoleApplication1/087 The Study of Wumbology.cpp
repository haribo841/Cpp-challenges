//Create a function to concatenate two integer vectors.
#include "087 The Study of Wumbology.h"
std::string Wumbo(std::string words) {
    for (size_t i = 0; i < words.size(); i++)
    {
        if (words[i] == 'M') {
            words[i] = 'W';
        }
    }
    return words;
}