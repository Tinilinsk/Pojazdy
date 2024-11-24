#include "Bike.h"

Bike::Bike(bool hasBasket, const bool available): Vehicle(available)
{
	_hasBasket = hasBasket;
}

std::string Bike::getDescription()
{
	if (_hasBasket == true) {
		return "Rower z koszykiem";
	}
	else {
		return "Rower bez koszykiem";
	}
	
}
