#include <gtest/gtest.h>
#include "cal.cpp"

TEST(CalculatorTest, Addition) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(CalculatorTest, Subtraction) {
    EXPECT_EQ(subtract(5, 3), 2);
}

TEST(CalculatorTest, Multiplication) {
    EXPECT_EQ(multiply(4, 2), 8);
}

TEST(CalculatorTest, Division) {
    EXPECT_EQ(divide(10, 2), 5);
    EXPECT_THROW(divide(10, 0), std::invalid_argument);
}