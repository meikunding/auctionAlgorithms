#include <iostream>
#include "Object.h"


Object::Object(uint32_t identifier): identifier_(identifier), price_(0.0) {}

const uint32_t Object::getIdentifier() const
{
	return identifier_;
}

const double Object::getPrice() const
{
	return price_;
}

void Object::updatePrice(double newPrice)
{
	price_ = newPrice;
}
