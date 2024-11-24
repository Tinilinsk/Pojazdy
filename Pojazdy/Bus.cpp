#include "Bus.h"

Bus::Bus(int passengerCapacity, const bool available): Vehicle(available)
{
	_passengerCapacity = passengerCapacity;
}

std::string Bus::getDescription()
{
	return "Autobus, liczba pasazerow: " + std::to_string(_passengerCapacity);
}
