#ifndef _AUCTION_H
#define _AUCTION_H


#include <cstdint>
#include "AuctionData.h"

class Auction
{
	public:
		Auction();
		~Auction();

		void runAlgorithm(AuctionData& data);

	private:
		uint32_t biddingRounds_;
		double bidIncrement_;

};

#endif
