//Create a function which returns "upper" if all the letters in a word are uppercase, "lower" if lowercase and "mixed" for any mix of the two.
#include "092 Lowercase, Uppercase or Mixed.h"
std::string getCase(std::string str) {
	bool upper = false;
	bool lower = false;
	for (char c : str)
	{
		if (isupper(c))
			upper = true;
		else if (islower(c))
			lower = true;
	}
	if (upper && lower)
		return "mixed";
	else if (upper)
		return "upper";
	else
		return "lower";
}