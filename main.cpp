#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "DividerTest.h"



int main(int argc,char* argv[]) {

   std::cout<<"Hello World"<<std::endl;

   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();

}

TEST_F(DividerTest, DividerReturnCorrectValue) {
	ASSERT_DOUBLE_EQ(2.5,divider.divide(5,2));
}

