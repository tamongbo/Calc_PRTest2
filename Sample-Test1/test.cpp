#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(CalcTest, getSumSumPositiveNumTest) {
	Calc c;

	EXPECT_EQ(6, c.getSumSum(1, 2, 3));
}

TEST(CalcTest, getSumSumNegativeNumTest) {
	Calc c;

	EXPECT_EQ(-6, c.getSumSum(-1, -2, -3));
}
