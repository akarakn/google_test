#include <limits.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.h"


using ::testing::Return;
using ::testing::_;

class TestCalc : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST(AdditionTest,twoValues){
   Calc calc;
   EXPECT_EQ(9,calc.add(4,5));
   EXPECT_EQ(2,calc.add(1,1));
}

class MockCalc : public Calc {
 public:
   MOCK_METHOD(int, add, (const int x, const int y), (override));
};

TEST(mockTest,twoValues){
   MockCalc calc;
   EXPECT_CALL(calc,add(_,_)).WillOnce(Return(0));
   EXPECT_EQ(2,calc.add(1,1));
}