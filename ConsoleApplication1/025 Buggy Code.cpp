////Emmy has written a function that returns a greeting to users.
//However, she's in love with Mubashir, and would like to greet him slightly differently.
//She added a special case in her function, but she made a mistake.
//Can you help her?
#include "025 Buggy Code.h"
std::string greeting(std::string name)
{
    if (name == "Mubashir") {
        return "Hello, my Love!";
    }
    return "Hello, " + name + "!";
}