//A bartender is writing a simple program to determine whether he should serve drinks to someone.
//He only serves drinks to people 18 and older and when he's not on break.
//Given the person's age, and whether break time is in session, create a function which returns whether he should serve drinks.
#include "048 Drinks Allowed.h"
bool shouldServeDrinks(int age, bool onBreak) {
	return age > 17 && !onBreak;
}