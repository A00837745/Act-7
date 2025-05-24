#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
int resul = mul(5, 1);

EXPECT_EQ(resul, 5);
}
