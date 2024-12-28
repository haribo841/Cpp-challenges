//Create a function that takes a string (a random name).
//If the last character of the name is an "n", return true, otherwise return false.
#include "052 Last Character.h"
bool isLastCharacterN(std::string word) {
	return word[word.length() - 1] == 'n';
}