#ifndef _ASSIGNMENT_H
#define _ASSIGNMENT_H

#include "Person.h"
#include "Object.h"

class Assignment
{
	public:
		Assignment(uint32_t personId, uint32_t objectId, double benefit);
		const Person& getPerson() const;
		const Object& getObject() const;

	private:
		Person person_;
		Object object_;
		double benefit_;
};

#endif
