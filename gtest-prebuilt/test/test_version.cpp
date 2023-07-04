#include <gtest/gtest.h>

#include "version.hpp"

TEST(MainTest, Version)
{
    EXPECT_GT(version(), 0);
}