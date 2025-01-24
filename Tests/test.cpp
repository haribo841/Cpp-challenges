#include "pch.h"
#include "..\ConsoleApplication1\000 True.cpp"
#include "..\ConsoleApplication1\001 Sum of Two Numbers.cpp"
#include "..\ConsoleApplication1\002 Minutes into Seconds.cpp"
#include "..\ConsoleApplication1\003 Next Number from the Integer Passed.cpp"
#include "..\ConsoleApplication1\004 Circuit Power Calculator.cpp"
#include "..\ConsoleApplication1\005 Convert Age to Days.cpp"
#include "..\ConsoleApplication1\006 Area of a Triangle.cpp"
#include "..\ConsoleApplication1\007 Remainder from Two Numbers.cpp"
#include "..\ConsoleApplication1\008 Less than or Equal to Zero.cpp"
#include "..\ConsoleApplication1\009 Less Than 100.cpp"
#include "..\ConsoleApplication1\010 Are the Numbers Equal.cpp"
#include "..\ConsoleApplication1\011 Return Something to Me.cpp"
#include "..\ConsoleApplication1\012 Flip the Boolean.cpp"
#include "..\ConsoleApplication1\013 Convert Hours into Seconds.cpp"
#include "..\ConsoleApplication1\014 Sum of Polygon Angles.cpp"
#include "..\ConsoleApplication1\015 Are the Numbers Equal.cpp"
#include "..\ConsoleApplication1\016 Basic Variable Assignment.cpp"
#include "..\ConsoleApplication1\017 Using the And Operator.cpp"
#include "..\ConsoleApplication1\018 Basketball Points.cpp"
#include "..\ConsoleApplication1\019 Perimeter of a Rectangle.cpp"
#include "..\ConsoleApplication1\020 Name Greeting.cpp"
#include "..\ConsoleApplication1\021 The Farm Problem.cpp"
#include "..\ConsoleApplication1\022 Football Points.cpp"
#include "..\ConsoleApplication1\023 First Element in an Array.cpp"
#include "..\ConsoleApplication1\024 Hours and Minutes into Seconds.cpp"
#include "..\ConsoleApplication1\025 Buggy Code.cpp"
#include "..\ConsoleApplication1\026 Maximum Edge of a Triangle.cpp"
#include "..\ConsoleApplication1\027 Inches to Feet.cpp"
#include "..\ConsoleApplication1\028 Integer is Divisible By Five.cpp"
#include "..\ConsoleApplication1\029 Correct the Mistakes.cpp"
#include "..\ConsoleApplication1\030 Flip the int Boolean.cpp"
#include "..\ConsoleApplication1\031 Divides Evenly.cpp"
#include "..\ConsoleApplication1\032 Frames Per Second.cpp"
#include "..\ConsoleApplication1\033 Profitable Gamble.cpp"
#include "..\ConsoleApplication1\034 Multiple of 100.cpp"
#include "..\ConsoleApplication1\035 Time for Milk and Cookies.cpp"
#include "..\ConsoleApplication1\036 Number of Stickers.cpp"
#include "..\ConsoleApplication1\037 Stack the Boxes.cpp"
#include "..\ConsoleApplication1\038 Buggy Code 2.cpp"
#include "..\ConsoleApplication1\039 Check Whether a Given Number Is Odd.cpp"
#include "..\ConsoleApplication1\040 Nth Even Number.cpp"
#include "..\ConsoleApplication1\041 Free Coffee Cups.cpp"
#include "..\ConsoleApplication1\042 Concatenate First and Last Name into One String.cpp"
#include "..\ConsoleApplication1\043 Area of a Rectangle.cpp"
#include "..\ConsoleApplication1\044 Empty String.cpp"
#include "..\ConsoleApplication1\045 Compare Strings by Count of Characters.cpp"
#include "..\ConsoleApplication1\046 String Odd or Even.cpp"
#include "..\ConsoleApplication1\047 Return Negative.cpp"
#include "..\ConsoleApplication1\048 Drinks Allowed.cpp"
#include "..\ConsoleApplication1\049 Recreating Function.cpp"
#include "..\ConsoleApplication1\050 Number Even or Odd.cpp"
#include "..\ConsoleApplication1\051 Broken Bridge.cpp"
#include "..\ConsoleApplication1\052 Last Character.cpp"
#include "..\ConsoleApplication1\053 Length of a String.cpp"
#include "..\ConsoleApplication1\054 Max Min Difference.cpp"
#include "..\ConsoleApplication1\055 String as an Integer.cpp"
#include "..\ConsoleApplication1\056 Check String for Spaces.cpp"
#include "..\ConsoleApplication1\057 Both Zero, Negative or Positive.cpp"
#include "..\ConsoleApplication1\058 Char to ASCII.cpp"
#include "..\ConsoleApplication1\059 Length of Number.cpp"
#include "..\ConsoleApplication1\060 Slice of Pie.cpp"
#include "..\ConsoleApplication1\061 Last Element in an Array.cpp"
#include "..\ConsoleApplication1\062 Singular or Plural.cpp"
#include "..\ConsoleApplication1\063 Add, Subtract, Multiply or Divide.cpp"
#include "..\ConsoleApplication1\064 String to Integer and Vice Versa.cpp"
#include "..\ConsoleApplication1\065 The Modulus Operator Function.cpp"
#include "..\ConsoleApplication1\066 Smallest Number in an Array.cpp"
#include "..\ConsoleApplication1\067 Largest Number in an Array.cpp"
#include "..\ConsoleApplication1\068 First and Last Character of a String.cpp"
#include "..\ConsoleApplication1\069 String Operation.cpp"
#include "..\ConsoleApplication1\070 Case Insensitive Comparison.cpp"
#include "..\ConsoleApplication1\071 Difference of Max and Min Numbers in Array.cpp"
#include "..\ConsoleApplication1\072 String Ending Matches.cpp"
#include "..\ConsoleApplication1\073 Find the Index 1.cpp"
#include "..\ConsoleApplication1\074 Amazing Edabit.cpp"
#include "..\ConsoleApplication1\075 OnOff Switches.cpp"
#include "..\ConsoleApplication1\076 Word Endings.cpp"
TEST(test0, returnTrue) {
	EXPECT_EQ(true, returnTrue());
	EXPECT_TRUE(true);
}
TEST(test1, addition) {
	EXPECT_EQ(5, addition(2, 3));
	EXPECT_EQ(-9, addition(-3, -6));
	EXPECT_EQ(10, addition(7, 3));
	EXPECT_TRUE(true);
}
TEST(test2, convert) {
	EXPECT_EQ(360, convert(6));
	EXPECT_EQ(240, convert(4));
	EXPECT_EQ(480, convert(8));
	EXPECT_EQ(3600, convert(60));
	EXPECT_TRUE(true);
}
TEST(test3, addition) {
	EXPECT_EQ(3, addition(2));
	EXPECT_EQ(-8, addition(-9));
	EXPECT_EQ(1, addition(0));
	EXPECT_EQ(1000, addition(999));
	EXPECT_EQ(74, addition(73));
	EXPECT_TRUE(true);
}
TEST(test4, circuitPower) {
	EXPECT_EQ(2300, circuitPower(230, 10));
	EXPECT_EQ(9600, circuitPower(480, 20));
	EXPECT_EQ(330, circuitPower(110, 3));
	EXPECT_EQ(3808800, circuitPower(13800, 276));
	EXPECT_TRUE(true);
}
TEST(test5, calc_age) {
	EXPECT_EQ(3650, calc_age(10));
	EXPECT_EQ(0, calc_age(0));
	EXPECT_EQ(26645, calc_age(73));
	EXPECT_EQ(20440, calc_age(56));
	EXPECT_EQ(6570, calc_age(18));
	EXPECT_EQ(7665, calc_age(21));
	EXPECT_EQ(23725, calc_age(65));
	EXPECT_TRUE(true);
}
TEST(test6, triArea) {
	EXPECT_EQ(3, triArea(3, 2));
	EXPECT_EQ(10, triArea(5, 4));
	EXPECT_EQ(50, triArea(10, 10));
	EXPECT_EQ(0, triArea(0, 60));
	EXPECT_EQ(66, triArea(12, 11));
	EXPECT_TRUE(true);
}
TEST(test7, remainder) {
	EXPECT_EQ(1, remainder(7, 2));
	EXPECT_EQ(3, remainder(3, 4));
	EXPECT_EQ(-9, remainder(-9, -45));
	EXPECT_EQ(0, remainder(5, 5));
	EXPECT_TRUE(true);
}
TEST(test8, lessThanOrEqualToZero) {
	EXPECT_EQ(false, lessThanOrEqualToZero(5));
	EXPECT_EQ(true, lessThanOrEqualToZero(0));
	EXPECT_EQ(true, lessThanOrEqualToZero(-5));
	EXPECT_EQ(false, lessThanOrEqualToZero(1));
	EXPECT_EQ(false, lessThanOrEqualToZero(2));
	EXPECT_EQ(false, lessThanOrEqualToZero(10000));
	EXPECT_EQ(false, lessThanOrEqualToZero(1));
	EXPECT_TRUE(true);
}
TEST(test9, lessThan100) {
	EXPECT_EQ(true, lessThan100(5, 57));
	EXPECT_EQ(false, lessThan100(77, 30));
	EXPECT_EQ(true, lessThan100(0, 59));
	EXPECT_EQ(false, lessThan100(78, 35));
	EXPECT_EQ(true, lessThan100(63, 11));
	EXPECT_EQ(false, lessThan100(37, 99));
	EXPECT_EQ(true, lessThan100(52, 11));
	EXPECT_EQ(false, lessThan100(82, 95));
	EXPECT_EQ(true, lessThan100(17, 44));
	EXPECT_EQ(false, lessThan100(74, 53));
	EXPECT_EQ(true, lessThan100(3, 77));
	EXPECT_EQ(false, lessThan100(25, 80));
	EXPECT_EQ(true, lessThan100(59, 28));
	EXPECT_EQ(false, lessThan100(69, 87));
	EXPECT_EQ(true, lessThan100(10, 45));
	EXPECT_EQ(false, lessThan100(43, 58));
	EXPECT_EQ(true, lessThan100(50, 44));
	EXPECT_EQ(false, lessThan100(74, 89));
	EXPECT_EQ(true, lessThan100(3, 27));
	EXPECT_EQ(false, lessThan100(21, 79));
	EXPECT_TRUE(true);
}
TEST(test10, isSameNum) {
	EXPECT_EQ(false, isSameNum(4, 8));
	EXPECT_EQ(true, isSameNum(2, 2));
	EXPECT_EQ(false, isSameNum(0, 8));
	EXPECT_EQ(true, isSameNum(1, 1));
	EXPECT_EQ(false, isSameNum(12, 3));
	EXPECT_EQ(false, isSameNum(5, 98));
	EXPECT_TRUE(true);
}
TEST(test11, giveMeSomething) {
	EXPECT_EQ("something a", giveMeSomething("a"));
	EXPECT_EQ("something is cooking", giveMeSomething("is cooking"));
	EXPECT_EQ("something  is cooking", giveMeSomething(" is cooking"));
	EXPECT_TRUE(true);
}
TEST(test12, reverse) {
	EXPECT_EQ(false, reverse(true));
	EXPECT_EQ(true, reverse(false));
	EXPECT_TRUE(true);
}
TEST(test13, howManySeconds) {
	EXPECT_EQ(7200, howManySeconds(2));
	EXPECT_EQ(36000, howManySeconds(10));
	EXPECT_EQ(86400, howManySeconds(24));
	EXPECT_EQ(129600, howManySeconds(36));
	EXPECT_TRUE(true);
}
TEST(test14, Expectations) {
	for (int y = 3; y <= 1000; ++y) {
		int expected_sum = y * 180 - 180;
		std::string x = "EXPECT_EQ(sumPolygon(" + std::to_string(y) + "), " + std::to_string(expected_sum) + ");";
		EXPECT_EQ(sumPolygon(y), expected_sum) << x;
	}
}
TEST(test15, isEqual) {
	EXPECT_EQ(true, isEqual(2, 2));
	EXPECT_EQ(true, isEqual(88, 88));
	EXPECT_EQ(false, isEqual(36, 35));
	EXPECT_EQ(true, isEqual(1, 1));
	EXPECT_EQ(false, isEqual(5, 6));
	EXPECT_TRUE(true);
}
TEST(test16, nameString) {
	EXPECT_EQ("MubashirEdabit", nameString("Mubashir"));
	EXPECT_EQ("MattEdabit", nameString("Matt"));
	EXPECT_EQ("C++Edabit", nameString("C++"));
	EXPECT_EQ("AirforceEdabit", nameString("Airforce"));
	EXPECT_TRUE(true);
}
TEST(test17, andAnd) {
	EXPECT_EQ(true, andAnd(true, true));
	EXPECT_EQ(false, andAnd(true, false));
	EXPECT_EQ(false, andAnd(false, true));
	EXPECT_EQ(false, andAnd(false, false));
	EXPECT_TRUE(true);
}
TEST(test18, points) {
	EXPECT_EQ(5, points(1, 1));
	EXPECT_EQ(8, points(1, 2));
	EXPECT_EQ(7, points(2, 1));
	EXPECT_EQ(10, points(2, 2));
	EXPECT_EQ(1398, points(69, 420));
	EXPECT_TRUE(true);
}
TEST(test19, findPerimeter) {
	EXPECT_EQ(26, findPerimeter(6, 7));
	EXPECT_EQ(60, findPerimeter(20, 10));
	EXPECT_EQ(22, findPerimeter(2, 9));
	EXPECT_TRUE(true);
}
TEST(test20, helloName) {
	EXPECT_EQ("Hello Gerald!", helloName("Gerald"));
	EXPECT_EQ("Hello Fatima!", helloName("Fatima"));
	EXPECT_EQ("Hello Ed!", helloName("Ed"));
	EXPECT_EQ("Hello Tiffany!", helloName("Tiffany"));
	EXPECT_TRUE(true);
}
TEST(test21, animals) {
	EXPECT_EQ(50, animals(5, 2, 8));
	EXPECT_EQ(50, animals(3, 4, 7));
	EXPECT_EQ(22, animals(1, 2, 3));
	EXPECT_EQ(34, animals(3, 5, 2));
	EXPECT_TRUE(true);
}
TEST(test22, footballPoints) {
	EXPECT_EQ(5, footballPoints(1, 2, 3));
	EXPECT_EQ(20, footballPoints(5, 5, 5));
	EXPECT_EQ(3, footballPoints(1, 0, 0));
	EXPECT_EQ(0, footballPoints(0, 0, 15));
	EXPECT_EQ(7, footballPoints(0, 7, 0));
	EXPECT_TRUE(true);
}
TEST(test23, getFirstValue) {
	EXPECT_EQ(1, getFirstValue({1, 2, 3}));
	EXPECT_EQ(80, getFirstValue({ 80, 5, 100 }));
	EXPECT_EQ(-500, getFirstValue({ -500, 0, 50 }));
	EXPECT_EQ(75675, getFirstValue({ 75675, 5, 100 }));
	EXPECT_EQ(-52320, getFirstValue({ -52320, 0, 50 }));
	EXPECT_TRUE(true);
}
TEST(test24, convert) {
	EXPECT_EQ(3600, convert(1, 0));
	EXPECT_EQ(3780, convert(1, 3));
	EXPECT_EQ(1800, convert(0, 30));
	EXPECT_TRUE(true);
}
TEST(test25, cubes) {
	EXPECT_EQ(8, cubes(2));
	EXPECT_EQ(27, cubes(3));
	EXPECT_EQ(64, cubes(4));
	EXPECT_EQ(125, cubes(5));
	EXPECT_EQ(1000, cubes(10));
	EXPECT_TRUE(true);
}
TEST(test26, nextEdge) {
	EXPECT_EQ(8, nextEdge(5, 4));
	EXPECT_EQ(10, nextEdge(8, 3));
	EXPECT_EQ(15, nextEdge(7, 9));
	EXPECT_EQ(13, nextEdge(10, 4));
	EXPECT_EQ(8, nextEdge(7, 2));
	EXPECT_TRUE(true);
}
TEST(test27, inchesToFeet) {
	EXPECT_EQ(1, inchesToFeet(12));
	EXPECT_EQ(30, inchesToFeet(360));
	EXPECT_EQ(301, inchesToFeet(3612));
	EXPECT_EQ(27, inchesToFeet(324));
	EXPECT_EQ(251, inchesToFeet(3012));
	EXPECT_EQ(0, inchesToFeet(11));
	EXPECT_TRUE(true);
}
TEST(test28, divisibleByFive) {
	EXPECT_EQ(false, divisibleByFive(7));
	EXPECT_EQ(true, divisibleByFive(5));
	EXPECT_EQ(true, divisibleByFive(15));
	EXPECT_EQ(false, divisibleByFive(33));
	EXPECT_EQ(false, divisibleByFive(-18));
	EXPECT_EQ(false, divisibleByFive(999));
	EXPECT_EQ(false, divisibleByFive(2));
	EXPECT_TRUE(true);
}
TEST(test29, squaed) {
	EXPECT_EQ(100, squaed(10));
	EXPECT_EQ(4761, squaed(69));
	EXPECT_EQ(443556, squaed(666));
	EXPECT_EQ(441, squaed(-21));
	EXPECT_EQ(441, squaed(21));;
	EXPECT_TRUE(true);
}
TEST(test30, flipIntBool) {
	EXPECT_EQ(1, reverse(0));
	EXPECT_EQ(0, reverse(1));
	EXPECT_TRUE(true);
}
TEST(test31, dividesEvenly) {
	EXPECT_EQ(true, dividesEvenly(98, 7));
	EXPECT_EQ(false, dividesEvenly(87, 49));
	EXPECT_EQ(false, dividesEvenly(34, 14));
	EXPECT_EQ(true, dividesEvenly(78, 6));
	EXPECT_EQ(false, dividesEvenly(30, 4));
	EXPECT_EQ(false, dividesEvenly(87, 73));
	EXPECT_EQ(false, dividesEvenly(74, 7));
	EXPECT_EQ(true, dividesEvenly(87, 29));
	EXPECT_EQ(true, dividesEvenly(48, 24));
	EXPECT_EQ(false, dividesEvenly(99, 20));
	EXPECT_EQ(true, dividesEvenly(98, 49));
	EXPECT_EQ(false, dividesEvenly(100, 6));
	EXPECT_EQ(true, dividesEvenly(64, 4));
	EXPECT_EQ(true, dividesEvenly(70, 35));
	EXPECT_EQ(true, dividesEvenly(38, 38));
	EXPECT_EQ(false, dividesEvenly(29, 3));
	EXPECT_EQ(false, dividesEvenly(20, 8));
	EXPECT_EQ(false, dividesEvenly(66, 50));
	EXPECT_EQ(true, dividesEvenly(95, 1));
	EXPECT_EQ(true, dividesEvenly(58, 2));
	EXPECT_TRUE(true);
}
TEST(test32, frames) {
	EXPECT_EQ(60, frames(1, 1));
	EXPECT_EQ(600, frames(10, 1));
	EXPECT_EQ(15000, frames(10, 25));
	EXPECT_EQ(1800000, frames(500, 60));
	EXPECT_EQ(0, frames(0, 60));
	EXPECT_EQ(5940, frames(99, 1));
	EXPECT_EQ(1759800, frames(419, 70));
	EXPECT_EQ(102960, frames(52, 33));
	EXPECT_TRUE(true);
}
TEST(test33, profitableGamble) {
	EXPECT_EQ(true, profitableGamble(0.2, 50, 9));
	EXPECT_EQ(false, profitableGamble(0.9, 1, 2));
	EXPECT_EQ(true, profitableGamble(0.9, 3, 2));
	EXPECT_EQ(true, profitableGamble(0.33, 10, 3.30));
	EXPECT_EQ(false, profitableGamble(0, 1000, 0.01));
	EXPECT_EQ(true, profitableGamble(0.1, 1000, 7));
	EXPECT_EQ(false, profitableGamble(0, 0, 0));
	EXPECT_TRUE(true);
}
TEST(test34, divisibleByHundred) {
	EXPECT_EQ(false, divisibleByHundred(1));
	EXPECT_EQ(true, divisibleByHundred(100));
	EXPECT_EQ(true, divisibleByHundred(1000));
	EXPECT_EQ(true, divisibleByHundred(111000));
	EXPECT_EQ(false, divisibleByHundred(-1));
	EXPECT_EQ(true, divisibleByHundred(0));
	EXPECT_EQ(true, divisibleByHundred(-100));
	EXPECT_TRUE(true);
}
TEST(test35, timeForMilkAndCookies) {
	EXPECT_EQ(true, timeForMilkAndCookies(2013, 11, 24));
	EXPECT_EQ(false, timeForMilkAndCookies(2013, 0, 23));
	EXPECT_EQ(true, timeForMilkAndCookies(3000, 11, 24));
	EXPECT_TRUE(true);
}
TEST(test36, howManyStickers) {
	EXPECT_EQ(6, howManyStickers(1));
	EXPECT_EQ(24, howManyStickers(2));
	EXPECT_EQ(54, howManyStickers(3));
	EXPECT_EQ(96, howManyStickers(4));
	EXPECT_EQ(150, howManyStickers(5));
	EXPECT_EQ(216, howManyStickers(6));
	EXPECT_EQ(294, howManyStickers(7));
	EXPECT_EQ(384, howManyStickers(8));
	EXPECT_EQ(486, howManyStickers(9));
	EXPECT_EQ(600, howManyStickers(10));
	EXPECT_EQ(726, howManyStickers(11));
	EXPECT_EQ(864, howManyStickers(12));
	EXPECT_EQ(1014, howManyStickers(13));
	EXPECT_EQ(1176, howManyStickers(14));
	EXPECT_EQ(1350, howManyStickers(15));
	EXPECT_TRUE(true);
}
TEST(test37, stackBoxes) {
	EXPECT_EQ(1, stackBoxes(1));
	EXPECT_EQ(4, stackBoxes(2));
	EXPECT_EQ(0, stackBoxes(0));
	EXPECT_EQ(25, stackBoxes(5));
	EXPECT_EQ(729, stackBoxes(27));
	EXPECT_EQ(38416, stackBoxes(196));
	EXPECT_EQ(262144, stackBoxes(512));
	EXPECT_TRUE(true);
}
TEST(test38, printArray) {
	EXPECT_EQ((std::vector<int>{1}), printArray(1));
	EXPECT_EQ((std::vector<int>{1, 2}), printArray(2));
	EXPECT_EQ((std::vector<int>{1, 2, 3}), printArray(3));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4}), printArray(4));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5}), printArray(5));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5, 6}), printArray(6));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5, 6, 7}), printArray(7));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8}), printArray(8));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9}), printArray(9));
	EXPECT_EQ((std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}), printArray(10));
	EXPECT_TRUE(true);
}
TEST(test39, isOdd) {
	EXPECT_EQ(true, isOdd(-5));
	EXPECT_EQ(false, isOdd(-50));
	EXPECT_EQ(false, isOdd(0));
	EXPECT_EQ(true, isOdd(25));
	EXPECT_EQ(true, isOdd(-19));
	EXPECT_EQ(false, isOdd(12));
	EXPECT_EQ(true, isOdd(23));
	EXPECT_EQ(true, isOdd(-71));
	EXPECT_TRUE(true);
}
TEST(test40, nthEven) {
	EXPECT_EQ(0, nthEven(1));
	EXPECT_EQ(2, nthEven(2));
	EXPECT_EQ(4, nthEven(3));
	EXPECT_EQ(198, nthEven(100));
	EXPECT_EQ(2597466, nthEven(1298734));
	EXPECT_TRUE(true);
}
TEST(test41, totalCups) {
	EXPECT_EQ(7, totalCups(6));
	EXPECT_EQ(3, totalCups(3));
	EXPECT_EQ(8, totalCups(7));
	EXPECT_EQ(14, totalCups(12));
	EXPECT_EQ(248, totalCups(213));
	EXPECT_EQ(18, totalCups(16));
	EXPECT_TRUE(true);
}
TEST(test42, concatName) {
	EXPECT_EQ("Doe, John", concatName("John", "Doe"));
	EXPECT_EQ("Last, First", concatName("First", "Last"));
	EXPECT_EQ("B, A", concatName("A", "B"));
	EXPECT_EQ(",, ,", concatName(",", ","));
	EXPECT_TRUE(true);
}
TEST(test43, area) {
	EXPECT_EQ(15, area(5, 3));
	EXPECT_EQ(40, area(8, 5));
	EXPECT_EQ(20, area(5, 4));
	EXPECT_EQ(100000000, area(10000, 10000));
	EXPECT_EQ(-1, area(-2, -5));
	EXPECT_EQ(-1, area(0, 3));
	EXPECT_EQ(-1, area(5, -3));
	EXPECT_EQ(-1, area(0, 1));
	EXPECT_EQ(-1, area(-1, 0));
	EXPECT_TRUE(true);
}
TEST(test44, isEmpty) {
	EXPECT_EQ(true, isEmpty(""));
	EXPECT_EQ(false, isEmpty(" "));
	EXPECT_EQ(false, isEmpty("            "));
	EXPECT_EQ(false, isEmpty("38215"));;
	EXPECT_EQ(false, isEmpty("afjabsdf"));
	EXPECT_EQ(false, isEmpty("!?@&"));
	EXPECT_TRUE(true);
}
TEST(test45, comp) {
	EXPECT_EQ(true, comp("AB", "CD"));
	EXPECT_EQ(false, comp("ABC", "DE"));
	EXPECT_EQ(false, comp("hello", "edabit"));
	EXPECT_EQ(true, comp("meow", "woof"));;
	EXPECT_EQ(false, comp("jrnvjrnnt", "cvjknfjvmfvnfjn"));
	EXPECT_EQ(false, comp("jkvnjrt", "krnf"));
	EXPECT_EQ(true, comp("Facebook", "Snapchat"));;
	EXPECT_TRUE(true);
}
TEST(test46, oddOrEven) {
	EXPECT_EQ(true, oddOrEven("apples"));
	EXPECT_EQ(true, oddOrEven("banana"));
	EXPECT_EQ(true, oddOrEven("cherry"));
	EXPECT_EQ(false, oddOrEven("mango"));;
	EXPECT_EQ(false, oddOrEven("peach"));
	EXPECT_EQ(false, oddOrEven("pears"));
	EXPECT_TRUE(true);
}
TEST(test47, returnNegative) {
	EXPECT_EQ(-4, returnNegative(4));
	EXPECT_EQ(-15, returnNegative(15));
	EXPECT_EQ(-4, returnNegative(-4));
	EXPECT_EQ(-42, returnNegative(42));
	EXPECT_EQ(-9, returnNegative(-9));
	EXPECT_EQ(0, returnNegative(0));
	EXPECT_EQ(-1, returnNegative(1));
	EXPECT_EQ(-1, returnNegative(-1));
	EXPECT_TRUE(true);
}
TEST(test48, shouldServeDrinks) {
	EXPECT_EQ(false, shouldServeDrinks(17, true));
	EXPECT_EQ(false, shouldServeDrinks(30, true));
	EXPECT_EQ(true, shouldServeDrinks(24, false));
	EXPECT_EQ(true, shouldServeDrinks(18, false));
	EXPECT_EQ(false, shouldServeDrinks(3, false));
	EXPECT_TRUE(true);
}
TEST(test49, absolute) {
	EXPECT_EQ(0, absolute(0));
	EXPECT_EQ(20.5, absolute(20.5));
	EXPECT_EQ(250, absolute(-250));
	EXPECT_EQ(5, absolute(-5));
	EXPECT_EQ(3.14, absolute(-3.14));
	EXPECT_TRUE(true);
}
TEST(test50, isEvenOrOdd) {
	EXPECT_EQ("odd", isEvenOrOdd(3));
	EXPECT_EQ("even", isEvenOrOdd(0));
	EXPECT_EQ("odd", isEvenOrOdd(7));
	EXPECT_EQ("even", isEvenOrOdd(12));
	EXPECT_EQ("even", isEvenOrOdd(6474));
	EXPECT_EQ("odd", isEvenOrOdd(0563));
	EXPECT_EQ("odd", isEvenOrOdd(3));
	EXPECT_EQ("even", isEvenOrOdd(0000001111100000));
	EXPECT_EQ("odd", isEvenOrOdd(301));
	EXPECT_EQ("odd", isEvenOrOdd(-3));
	EXPECT_EQ("even", isEvenOrOdd(-0));
	EXPECT_EQ("odd", isEvenOrOdd(-7));
	EXPECT_EQ("even", isEvenOrOdd(-12));
	EXPECT_EQ("even", isEvenOrOdd(-6474));
	EXPECT_EQ("odd", isEvenOrOdd(-0563));
	EXPECT_EQ("odd", isEvenOrOdd(-3));
	EXPECT_EQ("even", isEvenOrOdd(-0000001111100000));
	EXPECT_EQ("odd", isEvenOrOdd(-301));
	EXPECT_TRUE(true);
}
TEST(test51, isSafeBridge) {
	EXPECT_EQ(true, isSafeBridge("####"));
	EXPECT_EQ(false, isSafeBridge("## ####"));
	EXPECT_EQ(true, isSafeBridge("#"));
	EXPECT_EQ(false, isSafeBridge("# #"));
	EXPECT_TRUE(true);
}
TEST(test52, isLastCharacterN) {
	EXPECT_EQ(true, isLastCharacterN("Aiden"));
	EXPECT_EQ(false, isLastCharacterN("Roxy"));
	EXPECT_EQ(false, isLastCharacterN("Bert"));
	EXPECT_EQ(true, isLastCharacterN("Dean"));
	EXPECT_EQ(true, isLastCharacterN("Ian"));
	EXPECT_EQ(true, isLastCharacterN("Brian"));
	EXPECT_EQ(false, isLastCharacterN("Daniel"));
	EXPECT_TRUE(true);
}
TEST(test53, length) {
	EXPECT_EQ(8, length("shipment"));
	EXPECT_EQ(5, length("apple"));
	EXPECT_EQ(4, length("make"));
	EXPECT_EQ(1, length("a"));
	EXPECT_EQ(0, length(""));
	EXPECT_TRUE(true);
}
TEST(test54, difference) {
	EXPECT_EQ(24, difference(std::vector<int>{ -9, -8, 6, -9, 15, 6 }));
	EXPECT_EQ(23, difference(std::vector<int>{ -5, 6, 18, 4, 16, -2 }));
	EXPECT_EQ(29, difference(std::vector<int>{ -2, 20, -9, -9, -2, -7 }));
	EXPECT_EQ(24, difference(std::vector<int>{ 4, -2, 11, -9, 15, 2 }));
	EXPECT_EQ(25, difference(std::vector<int>{ 15, 10, 3, -6, 6, 19 }));
	EXPECT_EQ(20, difference(std::vector<int>{ 1, 7, 18, -1, -2, 9 }));
	EXPECT_EQ(17, difference(std::vector<int>{ 5, 1, -9, 7, -8, -10 }));
	EXPECT_EQ(27, difference(std::vector<int>{ -4, 17, -4, 20, -7, 0 }));
	EXPECT_EQ(14, difference(std::vector<int>{ -2, 11, 11, -3, -3, -3 }));
	EXPECT_EQ(19, difference(std::vector<int>{ 1, 15, 14, 20, 10, 6 }));
	EXPECT_EQ(15, difference(std::vector<int>{ 4, 17, 12, 2, 10, 2 }));
	EXPECT_EQ(23, difference(std::vector<int>{ -3, 3, 20, 10, 0, 17 }));
	EXPECT_EQ(23, difference(std::vector<int>{ -3, 6, 20, 9, 6, 7 }));
	EXPECT_EQ(25, difference(std::vector<int>{ 16, 15, 1, 18, -7, -3 }));
	EXPECT_EQ(13, difference(std::vector<int>{ -7, 4, -4, -3, -8, -9 }));
	EXPECT_EQ(10, difference(std::vector<int>{ 15, 8, 17, 18, 10, 10 }));
	EXPECT_EQ(30, difference(std::vector<int>{ -3, 20, 16, 8, 18, -10 }));
	EXPECT_EQ(17, difference(std::vector<int>{ 6, 18, 9, 1, 3, 1 }));
	EXPECT_EQ(30, difference(std::vector<int>{ 20, 18, -2, -10, -10, 17 }));
	EXPECT_EQ(28, difference(std::vector<int>{ 18, 20, -7, -4, -2, -8 }));
	EXPECT_TRUE(true);
}
TEST(test55, StringInt) {
	EXPECT_EQ(6, StringInt("6"));
	EXPECT_EQ(1000, StringInt("1000"));
	EXPECT_EQ(12, StringInt("12"));
	EXPECT_TRUE(true);
}
TEST(test56, HasSpaces) {
	EXPECT_EQ(false, HasSpaces("Foo"));
	EXPECT_EQ(true, HasSpaces("Foo bar"));
	EXPECT_EQ(true, HasSpaces("Foo "));
	EXPECT_EQ(true, HasSpaces(" Foo"));
	EXPECT_EQ(true, HasSpaces(" "));
	EXPECT_EQ(false, HasSpaces(""));
	EXPECT_EQ(false, HasSpaces(",./;'[]-="));
	EXPECT_TRUE(true);
}
TEST(test57, isSame) {
	EXPECT_EQ(true, isSame(-6, -9));
	EXPECT_EQ(true, isSame(6, 2));
	EXPECT_EQ(false, isSame(6, -999));
	EXPECT_EQ(true, isSame(100, 1));
	EXPECT_EQ(true, isSame(0, 0));
	EXPECT_EQ(true, isSame(-80, -5000));
	EXPECT_EQ(false, isSame(0, 2));
	EXPECT_TRUE(true);
}
TEST(test58, ctoa) {
	EXPECT_EQ(32, ctoa(' '));
	EXPECT_EQ(65, ctoa('A'));
	EXPECT_EQ(66, ctoa('B'));
	EXPECT_EQ(67, ctoa('C'));
	EXPECT_EQ(68, ctoa('D'));
	EXPECT_EQ(69, ctoa('E'));
	EXPECT_EQ(70, ctoa('F'));
	EXPECT_EQ(71, ctoa('G'));
	EXPECT_EQ(72, ctoa('H'));
	EXPECT_EQ(73, ctoa('I'));
	EXPECT_EQ(74, ctoa('J'));
	EXPECT_EQ(75, ctoa('K'));
	EXPECT_EQ(76, ctoa('L'));
	EXPECT_EQ(77, ctoa('M'));
	EXPECT_EQ(78, ctoa('N'));
	EXPECT_EQ(79, ctoa('O'));
	EXPECT_EQ(80, ctoa('P'));
	EXPECT_EQ(81, ctoa('Q'));
	EXPECT_EQ(82, ctoa('R'));
	EXPECT_EQ(83, ctoa('S'));
	EXPECT_EQ(84, ctoa('T'));
	EXPECT_EQ(85, ctoa('U'));
	EXPECT_EQ(86, ctoa('V'));
	EXPECT_EQ(87, ctoa('W'));
	EXPECT_EQ(88, ctoa('X'));
	EXPECT_EQ(89, ctoa('Y'));
	EXPECT_EQ(90, ctoa('Z'));
	EXPECT_EQ(91, ctoa('['));
	EXPECT_EQ(92, ctoa('\\'));
	EXPECT_EQ(93, ctoa(']'));
	EXPECT_EQ(94, ctoa('^'));
	EXPECT_EQ(95, ctoa('_'));
	EXPECT_EQ(96, ctoa('`'));
	EXPECT_EQ(97, ctoa('a'));
	EXPECT_EQ(98, ctoa('b'));
	EXPECT_EQ(99, ctoa('c'));
	EXPECT_EQ(100, ctoa('d'));
	EXPECT_EQ(101, ctoa('e'));
	EXPECT_EQ(102, ctoa('f'));
	EXPECT_EQ(103, ctoa('g'));
	EXPECT_EQ(104, ctoa('h'));
	EXPECT_EQ(105, ctoa('i'));
	EXPECT_EQ(106, ctoa('j'));
	EXPECT_EQ(107, ctoa('k'));
	EXPECT_EQ(108, ctoa('l'));
	EXPECT_EQ(109, ctoa('m'));
	EXPECT_EQ(110, ctoa('n'));
	EXPECT_EQ(111, ctoa('o'));
	EXPECT_EQ(112, ctoa('p'));
	EXPECT_EQ(113, ctoa('q'));
	EXPECT_EQ(114, ctoa('r'));
	EXPECT_EQ(115, ctoa('s'));
	EXPECT_EQ(116, ctoa('t'));
	EXPECT_EQ(117, ctoa('u'));
	EXPECT_EQ(118, ctoa('v'));
	EXPECT_EQ(119, ctoa('w'));
	EXPECT_EQ(120, ctoa('x'));
	EXPECT_EQ(121, ctoa('y'));
	EXPECT_EQ(122, ctoa('z'));
	EXPECT_TRUE(true);
}
TEST(test59, Length) {
	EXPECT_EQ(2, Length(12));
	EXPECT_EQ(4, Length(6000));
	EXPECT_EQ(3, Length(314));
	EXPECT_TRUE(true);
}
TEST(test60, equalSlices) {
	EXPECT_EQ(true, equalSlices(8, 3, 2));
	EXPECT_EQ(false, equalSlices(8, 3, 3));
	EXPECT_EQ(true, equalSlices(24, 12, 2));
	EXPECT_EQ(false, equalSlices(5, 6, 1));
	EXPECT_EQ(true, equalSlices(5, 0, 100));
	EXPECT_EQ(true, equalSlices(15, 2, 7));
	EXPECT_EQ(false, equalSlices(15, 2, 8));
	EXPECT_TRUE(true);
}
TEST(test61, getLastItem) {
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 1, 2, 3, 56, 87, 23, 65, 45 };
	int arr3[] = { 1 };
	int arr4[] = { 0 };
	int arr5[] = { -1, 3, 4, -45, -10 };

	EXPECT_EQ(3, getLastItem(arr1, 3));
	EXPECT_EQ(45, getLastItem(arr2, 8));
	EXPECT_EQ(1, getLastItem(arr3, 1));
	EXPECT_EQ(0, getLastItem(arr4, 1));
	EXPECT_EQ(-10, getLastItem(arr5, 5));
}
TEST(test62, isPlural) {
	EXPECT_EQ(true, isPlural("dudes"));
	EXPECT_EQ(true, isPlural("flowers"));
	EXPECT_EQ(true, isPlural("checks"));
	EXPECT_EQ(true, isPlural("varies"));
	EXPECT_EQ(true, isPlural("efforts"));
	EXPECT_EQ(false, isPlural("mood"));
	EXPECT_EQ(false, isPlural("whiteboard"));
	EXPECT_EQ(false, isPlural("cow"));
	EXPECT_EQ(false, isPlural("word"));
	EXPECT_EQ(false, isPlural("love"));
	EXPECT_EQ(false, isPlural("silly"));
	EXPECT_TRUE(true);
}
TEST(test63, operation) {
	EXPECT_EQ("added", operation(12, 12));
	EXPECT_EQ("subtracted", operation(100, 76));
	EXPECT_EQ("multiplied", operation(6, 4));
	EXPECT_EQ("divided", operation(528, 22));
	EXPECT_EQ("Invalid", operation(10, 12));
	EXPECT_TRUE(true);
}
TEST(test64, toInt) {
	EXPECT_EQ(37, toInt("37"));
	EXPECT_EQ(113, toInt("113"));
	EXPECT_EQ(5, toInt("5"));
	EXPECT_EQ(5231, toInt("5231"));
	EXPECT_TRUE(true);
}
TEST(test64, toStr) {
	EXPECT_EQ("37", toStr(37));
	EXPECT_EQ("113", toStr(113));
	EXPECT_EQ("5", toStr(5));
	EXPECT_EQ("5231", toStr(5231));
	EXPECT_TRUE(true);
}
TEST(test65, mod) {
	EXPECT_EQ(0, mod(0, 3));
	EXPECT_EQ(1, mod(1, 3));
	EXPECT_EQ(2, mod(5, 3));
	EXPECT_EQ(4, mod(4, 5));
	EXPECT_EQ(3, mod(218, 5));
	EXPECT_TRUE(true);
}
TEST(test66, findSmallestNum) {
	int arr1[] = { 34, 15, 88, 2 };
	int arr2[] = { 34, -345, -1, 100 };
	int arr3[] = { -76, 345, 1, 0 };
	int arr4[] = { 7, 7, 7 };
	int arr5[] = { 4, 6, 1, 3, 4, 5, 5, 1 };
	int arr6[] = { -4, -6, -8, -1 };
	int arr7[] = { 54, 76, 23, 54 };
	int arr8[] = { 100 };
	int arr9[] = { 0, 1, 2, 3, 4, 5 };

	EXPECT_EQ(2, findSmallestNum(arr1, 4));
	EXPECT_EQ(-345, findSmallestNum(arr2, 4));
	EXPECT_EQ(-76, findSmallestNum(arr3, 4));
	EXPECT_EQ(7, findSmallestNum(arr4, 3));
	EXPECT_EQ(1, findSmallestNum(arr5, 8));
	EXPECT_EQ(-8, findSmallestNum(arr6, 4));
	EXPECT_EQ(23, findSmallestNum(arr7, 4));
	EXPECT_EQ(100, findSmallestNum(arr8, 1));
	EXPECT_EQ(0, findSmallestNum(arr9, 6));
	EXPECT_TRUE(true);
}
TEST(test67, findLargestNum) {
	int arr1[] = { 4, 5, 1, 3 };
	int arr2[] = { 13, 27, 18, 26 };
	int arr3[] = { 32, 35, 37, 39 };
	int arr4[] = { 1000, 1001, 857, 1 };
	int arr5[] = { 27364, 837363, 736736, 73635 };
	int arr6[] = { 30, 2, 40, 3 };
	int arr7[] = { 0, 1, 0, 0, -1 };

	EXPECT_EQ(5, findLargestNum(arr1, 4));
	EXPECT_EQ(27, findLargestNum(arr2, 4));
	EXPECT_EQ(39, findLargestNum(arr3, 4));
	EXPECT_EQ(1001, findLargestNum(arr4, 4));
	EXPECT_EQ(837363, findLargestNum(arr5, 4));
	EXPECT_EQ(40, findLargestNum(arr6, 4));
	EXPECT_EQ(1, findLargestNum(arr7, 5));
	EXPECT_TRUE(true);
}
TEST(test68, FirstLast) {
	EXPECT_EQ("fa", FirstLast("forza"));
	EXPECT_EQ("ki", FirstLast("kali"));
	EXPECT_EQ("as", FirstLast("always"));
	EXPECT_EQ("le", FirstLast("love"));
	EXPECT_EQ("sl", FirstLast("supernatural"));
	EXPECT_EQ("et", FirstLast("edabit"));
	EXPECT_TRUE(true);
}
TEST(test69, calculate) {
	EXPECT_EQ(-76, calculate(24, 100, '-'));
	EXPECT_EQ(-50, calculate(-20, -30, '+'));
	EXPECT_EQ(300, calculate(1500, 5, '/'));
	EXPECT_EQ(114, calculate(38, 3, '*'));
	EXPECT_EQ(4, calculate(49, 5, '%'));
	EXPECT_TRUE(true);
}
TEST(test70, match) {
	EXPECT_EQ(true, match("hello", "hELLo"));
	EXPECT_EQ(true, match("hey", "hey"));
	EXPECT_EQ(true, match("venom", "VENOM"));
	EXPECT_EQ(true, match("maGIciAN", "magician"));
	EXPECT_EQ(true, match("stupIFy", "stupifY"));
	EXPECT_EQ(false, match("bald", "blad"));
	EXPECT_EQ(false, match("motive", "emotive"));
	EXPECT_EQ(false, match("mask", "mAskinG"));
	EXPECT_EQ(false, match("skim", "skimp"));
	EXPECT_EQ(false, match("EXCEl", "exceLs"));
	EXPECT_TRUE(true);
}
TEST(test71, differenceMaxMin) {
	EXPECT_EQ(90, differenceMaxMin(std::vector<int>{ 10, 4, 1, 2, 8, 91 }));
	EXPECT_EQ(124, differenceMaxMin(std::vector<int>{ -70, 43, 34, 54, 22 }));
	EXPECT_TRUE(true);
}
TEST(test72, checkEnding) {
	EXPECT_EQ(true, checkEnding("abc", "bc"));
	EXPECT_EQ(false, checkEnding("abc", "d"));
	EXPECT_EQ(false, checkEnding("samurai", "zi"));
	EXPECT_EQ(true, checkEnding("feminine", "nine"));
	EXPECT_EQ(false, checkEnding("convention", "tio"));
	EXPECT_EQ(false, checkEnding("cooperative", "ooper"));
	EXPECT_EQ(true, checkEnding("extraterrestrial", "xtraterrestrial"));
	EXPECT_EQ(true, checkEnding("access", "ss"));
	EXPECT_EQ(false, checkEnding("motorist", "is"));
	EXPECT_EQ(true, checkEnding("landowner", "landowner"));
	EXPECT_TRUE(true);
}
TEST(test73, search) {
	EXPECT_EQ(1, search(std::vector<int>{ 1, 5, 3 }, 5));
	EXPECT_EQ(2, search(std::vector<int>{ 9, 8, 3 }, 3));
	EXPECT_EQ(-1, search(std::vector<int>{ 1, 2, 3 }, 4));
	EXPECT_EQ(5, search(std::vector<int>{ 1, 5, 3, 10, 17, 20, -6 }, 20));
	EXPECT_EQ(0, search(std::vector<int>{ 1, 1, 1 }, 1));
	EXPECT_TRUE(true);
}
TEST(test74, amazingEdabit) {
	EXPECT_EQ("edabit is amazing.", amazingEdabit("edabit is amazing."));
	EXPECT_EQ("Mubashir is not amazing.", amazingEdabit("Mubashir is amazing."));
	EXPECT_EQ("Trump is not amazing.", amazingEdabit("Trump is amazing."));
	EXPECT_EQ("Infinity is not amazing.", amazingEdabit("Infinity is amazing."));
	EXPECT_EQ("Mubashir and edabit are amazing.", amazingEdabit("Mubashir and edabit are amazing."));
	EXPECT_EQ("Matt is not amazing.", amazingEdabit("Matt is amazing."));
	EXPECT_EQ("Helen is not amazing.", amazingEdabit("Helen is amazing."));
	EXPECT_EQ("Python and edabit are amazing.", amazingEdabit("Python and edabit are amazing."));
	EXPECT_EQ("C++ is not amazing.", amazingEdabit("C++ is amazing."));
	EXPECT_EQ("javascript is not amazing.", amazingEdabit("javascript is amazing."));
	EXPECT_EQ("java is not amazing.", amazingEdabit("java is amazing."));
	EXPECT_EQ("ruby is not amazing.", amazingEdabit("ruby is amazing."));
	EXPECT_EQ("SQL is not amazing.", amazingEdabit("SQL is amazing."));
	EXPECT_EQ("CSS is not amazing.", amazingEdabit("CSS is amazing."));
	EXPECT_EQ("Pakistan is amazing. edabit", amazingEdabit("Pakistan is amazing. edabit"));
	EXPECT_EQ("You and edabit are amazing.", amazingEdabit("You and edabit are amazing."));
	EXPECT_EQ("Matt and edabit are amazing.", amazingEdabit("Matt and edabit are amazing."));
	EXPECT_EQ("Helen and edabit are amazing.", amazingEdabit("Helen and edabit are amazing."));
	EXPECT_EQ("Everyone is not amazing.", amazingEdabit("Everyone is amazing."));
	EXPECT_EQ("Swift and edabit are amazing.", amazingEdabit("Swift and edabit are amazing."));
	EXPECT_TRUE(true);
}
TEST(test75, posCom) {
	EXPECT_EQ(32, posCom(5));
	EXPECT_EQ(16, posCom(4));
	EXPECT_EQ(8, posCom(3));
	EXPECT_EQ(4, posCom(2));
	EXPECT_EQ(2, posCom(1));
	EXPECT_EQ(64, posCom(6));
	EXPECT_EQ(128, posCom(7));
	EXPECT_EQ(256, posCom(8));
	EXPECT_EQ(512, posCom(9));
	EXPECT_EQ(1024, posCom(10));
	EXPECT_EQ(33554432, posCom(25));
	EXPECT_TRUE(true);
}
TEST(test76, addEnding) {
	EXPECT_EQ(std::vector<std::string>({ "cleverly", "meekly", "hurriedly", "nicely" }), addEnding({ "clever", "meek", "hurried", "nice" }, "ly"));
	EXPECT_EQ(std::vector<std::string>({ "newer", "panderer", "scooper" }), addEnding({ "new", "pander", "scoop" }, "er"));
	EXPECT_EQ(std::vector<std::string>({ "bending", "sharpening", "meaning" }), addEnding({ "bend", "sharpen", "mean" }, "ing"));
	EXPECT_EQ(std::vector<std::string>({ "bendy", "toothy", "minty" }), addEnding({ "bend", "tooth", "mint" }, "y"));
	EXPECT_EQ(std::vector<std::string>({ "bendier", "toothier", "mintier" }), addEnding({ "bend", "tooth", "mint" }, "ier"));
	EXPECT_TRUE(true);
}