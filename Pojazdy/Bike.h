#pragma once

#include "Vehicle.h"

class Bike : public Vehicle
{
private:
	bool _hasBasket;
public:
	Bike(bool hasBasket, const bool available);
	std::string getDescription() override;
};