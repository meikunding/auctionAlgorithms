#include <iostream>
#include "Auction.h"


int main (int argc, char* argv[])
{
	//declare the auction utility
	Auction auctionUtility;

	//fetch instance of auction data & populate it
	AuctionData& myData = AuctionData::Instance();

	//run the auction algorithm
	auctionUtility.runAlgorithm(myData);

	return 0;
}
