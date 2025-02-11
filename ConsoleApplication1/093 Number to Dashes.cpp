//Create a function that takes a number (from 1 - 60) and returns a corresponding string of hyphens.
#include "093 Number to Dashes.h"
std::string Go(int num) {
    std::vector<int> myvector;
    for (size_t i = 0; i < num; i++)
    {
        myvector.push_back('-');
    }
	return std::string(myvector.begin(), myvector.end());
}