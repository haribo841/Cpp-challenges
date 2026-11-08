//Create a function to concatenate two integer vectors.
#include "087 The Study of Wumbology.h"
#include <algorithm>
std::string Wumbo(const std::string& words) {
    std::string result = words;
    std::ranges::replace(result, 'M', 'W');
    return result;
}
