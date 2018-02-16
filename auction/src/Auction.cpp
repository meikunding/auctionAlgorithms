#include <iostream>
#include "Auction.h"


Auction::Auction() : biddingRounds_(0), bidIncrement_(0.0)
{
	std::cout << "Auction::Auction() - Constructor hit" << std::endl;
}

Auction::~Auction()
{
	std::cout << "Auction::~Auction() - Destructor hit" << std::endl;
}

void Auction::runAlgorithm(AuctionData& data)
{
	std::cout << "Auction::runAlgorithm() - Running Auction Algorithm..." << std::endl;
}
