// test_my_math.cpp
#include "000 Test.h"

/*

Describe(return_true)
{
  It(test1)
  {
      Assert::That(returnTrue(), Equals(true));
  }
};

TEST(AddFunctionTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddFunctionTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(AddFunctionTest, MixedNumbers) {
    EXPECT_EQ(add(1, -5), -4);
}

*/
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}