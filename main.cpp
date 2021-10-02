#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Divider.h"



int main(int argc,char* argv[]) {

   std::cout<<"Hello World"<<std::endl;
   
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}
