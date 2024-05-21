#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(CalcTest, getSumSumTest) {
	Calc c;

	EXPECT_EQ(6, c.getSumSum(1, 2, 3));
}
