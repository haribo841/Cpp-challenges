#include "pch.h"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\000 True.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\001 Sum of Two Numbers.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\002 Next Number from the Integer Passed.cpp"
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

TEST(test2, addition) {
	EXPECT_EQ(3, addition(2));
	EXPECT_EQ(-8, addition(-9));
	EXPECT_EQ(1, addition(0));
	EXPECT_EQ(1000, addition(999));
	EXPECT_EQ(74, addition(73));
	EXPECT_TRUE(true);
}
TEST(test2, preincrementation) {
	EXPECT_EQ(3, preincrementation(2));
	EXPECT_EQ(-8, preincrementation(-9));
	EXPECT_EQ(1, preincrementation(0));
	EXPECT_EQ(1000, preincrementation(999));
	EXPECT_EQ(74, preincrementation(73));
	EXPECT_TRUE(true);
}