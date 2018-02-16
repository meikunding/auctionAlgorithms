#include <iostream>
#include "Person.h"


Person::Person(uint32_t identifier): identifier_(identifier) {}

uint32_t Person::getIdentifier() const
{
	return identifier_;
}
