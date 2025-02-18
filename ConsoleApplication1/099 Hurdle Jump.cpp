//Create a function that takes an array of hurdle heights and a jumper's jump height, and determine whether or not the hurdler can clear all the hurdles.
//A hurdler can clear a hurdle if their jump height is greater than or equal to the hurdle height.
#include "099 Hurdle Jump.h"
bool hurdleJump(std::vector<int> hurdles, int jumpHeight) {
    if (hurdles.empty()) {
        // Decide what the behavior should be when there are no hurdles.
        // For example, you might consider it a win (true) or a loss (false).
        return true; // or return false;
    }
    return *std::max_element(hurdles.begin(), hurdles.end()) <= jumpHeight;
}