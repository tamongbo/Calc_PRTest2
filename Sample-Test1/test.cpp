#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"
using namespace testing;

TEST(CalculatorTest, MinusTest) {
	Calc calc;
	EXPECT_EQ(0, calc.getMinus(1, 1));
	EXPECT_EQ(1, calc.getMinus(2, 1));
	EXPECT_EQ(-1, calc.getMinus(1, 2));
}

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

TEST(CalcTest, GetGopCorrectTest) {
	Calc calc;
	EXPECT_EQ(calc.getGop(2, 3),6);
}

TEST(CalcTest, GetGopIncorrectTest) {
	Calc calc;
	EXPECT_THAT(calc.getGop(2, 0), Ne(2));
}

TEST(TestCal, getZegopTest) {
	Calc calc;
	EXPECT_EQ(1, calc.getZegop(1));
	EXPECT_EQ(4, calc.getZegop(2));
	EXPECT_EQ(9, calc.getZegop(3));
	EXPECT_EQ(16, calc.getZegop(4));
	EXPECT_EQ(25, calc.getZegop(5));
}

