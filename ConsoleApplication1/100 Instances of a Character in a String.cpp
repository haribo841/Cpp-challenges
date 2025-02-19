//Create a function that takes a character and a string as arguments and returns the number of times the character is found in the string.
#include "100 Instances of a Character in a String.h"
int charCount(char myChar, std::string str) {
	int count = 0;
	for (char c : str) {
		if (c == myChar) count++;
	}
	return count;
}