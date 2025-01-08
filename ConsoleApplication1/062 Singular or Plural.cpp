//Create a function that takes in a word and determines whether or not it is plural.
//A plural word is one that ends in "s".
#include "062 Singular or Plural.h"
bool isPlural(std::string word) {
	return word[word.length()-1] == 's';
}