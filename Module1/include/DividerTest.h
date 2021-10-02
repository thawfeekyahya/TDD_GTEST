#ifndef DIVIDER_TEST_H
#define DIVIDER_TEST_H

#include <gtest/gtest.h>
#include "Divider.h"

using namespace ::testing;

class DividerTest: public Test {
public:
    DividerTest();
    Divider divider;
};


#endif //DIVIDER_TEST_H
