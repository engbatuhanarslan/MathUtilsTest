#include "math_utils.h"
#include <gtest/gtest.h>

TEST(MathUtilsTest, AddFunction) {
    EXPECT_EQ(Add(2, 3), 5);
    EXPECT_EQ(Add(-1, 1), 0);
}

TEST(MathUtilsTest, DivFunction) {
    EXPECT_EQ(Div(5, 0), 0) << "5 / 0 should equal 0";
    EXPECT_EQ(Div(-1, 1), -1);
}


TEST(MathUtilsTest, FactorialFunction) {
    EXPECT_EQ(Factorial(0), 1);
    EXPECT_EQ(Factorial(5), 120);
    EXPECT_EQ(Factorial(-3), -1);
}

TEST(MathUtilsTest, SubFunction) {
    EXPECT_EQ(Sub(1, -1), 2);
    EXPECT_EQ(Sub(3, -3), 6);
    EXPECT_EQ(Sub(2, 3), -1);
    EXPECT_EQ(Sub(2, 4), -1) << "2 - 4 should equal -1 (Test)";
}

TEST(MathUtilsTest, Sub_PositiveMinusPositive) {
    EXPECT_EQ(Sub(5, 3), 2);
}

TEST(MathUtilsTest, Sub_ResultNegative) {
    EXPECT_EQ(Sub(3, 5), -2);
}