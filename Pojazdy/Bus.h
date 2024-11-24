#pragma once

#include "Vehicle.h"

class Bus : public Vehicle
{
private:
	int _passengerCapacity;
public:
	Bus(int passengerCapacity, const bool available);
	std::string getDescription() override;
};