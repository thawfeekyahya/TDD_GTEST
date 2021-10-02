#include "DividerTest.h"
#include <gtest/gtest.h>
#include "Divider.h"

using namespace ::testing;

DividerTest::DividerTest() {
 
}

TEST_F(DividerTest, DividerReturnCorrectValue) {
	ASSERT_DOUBLE_EQ(2.5,divider.divide(5,2));
}
