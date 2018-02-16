#include <iostream>
#include "Auction.h"
#include "gtest/gtest.h"


int main (int argc, char* argv[])
{
	std::cout << "Testing auction..." << std::endl;

	::testing::InitGoogleTest(&argc, argv);



	return RUN_ALL_TESTS();
}
