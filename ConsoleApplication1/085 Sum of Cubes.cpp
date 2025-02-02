//Create a function that takes in an array of numbers and returns the sum of its cubes.
#include "085 Sum of Cubes.h"
int sumOfCubes(std::vector<int> nums) {
    int result = 0;
    for (const auto& i : nums) {
        result += i * i * i;
    }
    return result;
}