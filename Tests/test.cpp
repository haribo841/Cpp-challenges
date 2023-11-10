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
	EXPECT_EQ(2300, circuitPower(230,10));
	EXPECT_EQ(9600, circuitPower(480,20));
	EXPECT_EQ(330, circuitPower(110,3));
	EXPECT_EQ(3808800, circuitPower(13800,276));
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
	EXPECT_EQ(false, isSameNum(4,8));
	EXPECT_EQ(true, isSameNum(2,2));
	EXPECT_EQ(false, isSameNum(0,8));
	EXPECT_EQ(true, isSameNum(1,1));
	EXPECT_EQ(false, isSameNum(12,3));
	EXPECT_EQ(false, isSameNum(5,98));
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
TEST(test19, findPerimeter2) {
	EXPECT_EQ(26, findPerimeter2(6, 7));
	EXPECT_EQ(60, findPerimeter2(20, 10));
	EXPECT_EQ(22, findPerimeter2(2, 9));
	EXPECT_TRUE(true);
}
TEST(test19, findPerimeter3) {
	EXPECT_EQ(26, findPerimeter3(6, 7));
	EXPECT_EQ(60, findPerimeter3(20, 10));
	EXPECT_EQ(22, findPerimeter3(2, 9));
	EXPECT_TRUE(true);
}
TEST(test19, findPerimeter4) {
	EXPECT_EQ(26, findPerimeter4(6, 7));
	EXPECT_EQ(60, findPerimeter4(20, 10));
	EXPECT_EQ(22, findPerimeter4(2, 9));
	EXPECT_TRUE(true);
}