#include <iostream>
#include "AuctionData.h"


AuctionData& AuctionData::Instance()
{
	static AuctionData instance;
	return instance;
}

bool AuctionData::addAssignment(const Assignment& newAssignment)
{
	bool isDuplicate = false;

	//ensure this assignment was not already added (person,object tuple)
	//todo: can probably improve runtime by keeping track of what tuples get added
	for(std::vector<Assignment>::iterator it=data_.begin(); it!=data_.end(); ++it)
	{
		if ( (it->getObject().getIdentifier() == newAssignment.getObject().getIdentifier()) &&
			 (it->getPerson().getIdentifier() == newAssignment.getPerson().getIdentifier()) )
		{
			isDuplicate = true;
			break;
		}
	}

	if (!isDuplicate)
	{
		data_.push_back(newAssignment);
	}

	return isDuplicate;
}
