#include "gtest/gtest.h"
#include "ip.h"

#include <vector>
#include <string>

TEST(Test_IP, test_make_ip)
{
	std::vector<std::string> ip = {"127", "0", "0", "1"};

	EXPECT_EQ(make_ip(ip), 2130706433);
}
