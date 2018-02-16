#include "Assignment.h"
#include <iostream>

Assignment::Assignment(uint32_t personId, uint32_t objectId, double benefit):
	person_(Person(personId)),
	object_(Object(objectId)),
	benefit_(benefit)
{}

const Person& Assignment::getPerson() const
{
	return person_;
}

const Object& Assignment::getObject() const
{
	return object_;
}
