#include "Vehicle.h"

Vehicle::Vehicle(const bool available)
{
    _available = available;
}

bool Vehicle::isAvailable()
{
    return _available;
}
