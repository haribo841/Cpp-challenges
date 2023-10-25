#include "pch.h"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\000 True.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\001 Sum of Two Numbers.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\002 Minutes into Seconds.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\003 Next Number from the Integer Passed.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\004 Circuit Power Calculator.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\005 Convert Age to Days.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\006 Area of a Triangle.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\007 Remainder from Two Numbers.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\008 Less than or Equal to Zero.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\009 Less Than 100.cpp"
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