#ifndef _OBJECT_H
#define _OBJECT_H


#include <cstdint>

class Object
{
	public:
		Object(uint32_t identifier);

		const uint32_t getIdentifier() const;
		const double getPrice() const;

		void updatePrice(double newPrice);

	private:
		uint32_t identifier_;
		double price_;
};

#endif
