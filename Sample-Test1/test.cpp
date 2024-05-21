#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../Project3/calc.cpp"
using namespace testing;

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}
TEST(CalcTest, GetGopCorrectTest)
{
	Calc calc;
	EXPECT_EQ(calc.getGop(2, 3),6);
}
TEST(CalcTest, GetGopIncorrectTest)
{
	Calc calc;
	EXPECT_THAT(calc.getGop(2, 0), Ne(2));
}