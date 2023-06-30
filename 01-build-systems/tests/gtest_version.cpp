#include <sstream>

#include <gtest/gtest.h>

#include "lib.h"

TEST(version, simple) {
  ASSERT_TRUE(version() > 0);
}


