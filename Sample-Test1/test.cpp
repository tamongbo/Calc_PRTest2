#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"

TEST(TestCaseName, getSumPositiveNumber) {
	Calc calc;
	EXPECT_EQ(3, calc.getSum(1, 2));
}

TEST(TestCaseName, getSumNegativeNumber) {
	Calc calc;
	EXPECT_EQ(-3, calc.getSum(-1, -2));
}

TEST(CalcTest, getSumSumPositiveNumTest) {
	Calc c;

	EXPECT_EQ(6, c.getSumSum(1, 2, 3));
}

TEST(CalcTest, getSumSumNegativeNumTest) {
	Calc c;

	EXPECT_EQ(-6, c.getSumSum(-1, -2, -3));
}