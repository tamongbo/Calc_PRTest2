#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCal, getZegopTest) {
	Calc calc;
	EXPECT_EQ(1, calc.getZegop(1));
	EXPECT_EQ(4, calc.getZegop(2));
	EXPECT_EQ(9, calc.getZegop(3));
	EXPECT_EQ(16, calc.getZegop(4));
	EXPECT_EQ(25, calc.getZegop(5));
}