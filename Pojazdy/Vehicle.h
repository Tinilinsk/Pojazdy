#pragma once

#include <string>
#include <iostream>

class Vehicle {
protected:
	bool _available;
public:
	Vehicle(const bool available);
	virtual std::string getDescription() = 0;
	bool isAvailable();
};
	