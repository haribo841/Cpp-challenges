//Create a method that returns the number of arguments it was called with.
#include "090 Arguments Count.h"
template<typename... Args>
int NumArgs(Args... args) {
    return sizeof...(args);
}