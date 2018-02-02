#include <iostream>
#include "auction.h"


int main (int argc, char* argv[])
{
	std::cout << "Testing auction..." << std::endl;

	Auction auctionUtility;
	AuctionData myData;
	auctionUtility.runAlgorithm(myData);

	return 0;
}