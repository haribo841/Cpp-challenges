#include "pch.h"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\000 True.cpp"
#include "C:\Users\Lenovo\Documents\GitHub\ConsoleApplication1\ConsoleApplication1\001 Sum of Two Numbers.cpp"
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