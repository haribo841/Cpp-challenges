//Create a function that counts the number of syllables a word has.
//Each syllable is separated with a dash -.
#include "098 Syllables Count.h"
int numberSyllables(std::string word) {
	int count = 1;
	for (char c : word) {
		if (c == '-') count++;
	}
	return count;
}