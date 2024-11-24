//Create a function that takes a vector containing only numbers and return the first element.
#include "023 First Element in an Array.h"
int getFirstValue(std::vector<int> arr) {
    // Directly check if the vector is empty using pointer logic
    return (arr.data() == nullptr || arr.data() == arr.data() + arr.size()) ? -1 : *arr.data();
}