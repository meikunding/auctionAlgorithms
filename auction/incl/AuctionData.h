#ifndef _AUCTION_DATA_H
#define _AUCTION_DATA_H


#include <vector>
#include "Assignment.h"

class AuctionData
{
	public:
		static AuctionData& Instance();
		AuctionData(AuctionData& other) = delete;		//prevent copy construction
		void operator=(AuctionData& other) = delete;	//prevent copy assignment

		bool addAssignment(const Assignment& newAssignment);

	private:
		AuctionData(){};				//prevent construction
		std::vector<Assignment> data_;
};

#endif
