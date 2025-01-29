//Write a function to reverse an array.
#include "081 Reverse an Array.h"
std::vector<int> reverse(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        std::swap(arr[i], arr[n - i - 1]);
    }
    return arr;
}