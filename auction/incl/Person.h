#ifndef _PERSON_H
#define _PERSON_H


#include <cstdint>
#include "Object.h"

class Person
{
	public:
		Person(uint32_t identifier_);
		uint32_t getIdentifier() const;

	private:
		uint32_t identifier_;
};

#endif
