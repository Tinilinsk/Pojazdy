#include "Car.h"

Car::Car(int seatCount, const bool available): Vehicle(available)
{
	_seatCount = seatCount;
}

std::string Car::getDescription()
{
	return "Samochod liczba miejsc: " + std::to_string(_seatCount);
}
