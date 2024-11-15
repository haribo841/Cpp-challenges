//Mubashir created an infinite loop!
//Help him by fixing the code to pass this challenge.
#include "038 Buggy Code 2.h"
std::vector<int> printArray(int n) {
    std::vector<int> newArray;

    for (int i = 1; i <= n; i++) {
        newArray.push_back(i);
    }

    return newArray;
}