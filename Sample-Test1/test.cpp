#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"

TEST(CalculatorTest, MinusTest) {
	Calc calc;
	EXPECT_EQ(0, calc.getMinus(1, 1));
	EXPECT_EQ(1, calc.getMinus(2, 1));
	EXPECT_EQ(-1, calc.getMinus(1, 2));
}