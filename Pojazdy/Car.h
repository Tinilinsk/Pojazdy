#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int _seatCount;
public:
	Car(int seatCount, const bool available);
	std::string getDescription() override;
};