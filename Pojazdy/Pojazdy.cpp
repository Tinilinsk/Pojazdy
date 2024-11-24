
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Bike.h"
#include <vector>

int main()
{
    std::vector<Vehicle*> vehicles;

    vehicles.push_back(new Car(5, true));
    vehicles.push_back(new Bike(false, true));
    vehicles.push_back(new Bus(30, false));

    for (auto& vehicle : vehicles) {
        std::cout << vehicle->getDescription() << "\n";
    }

    for (auto& vehicle : vehicles) {
        std::cout << std::boolalpha << vehicle->isAvailable() << "\n";
    }

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }




    return 0;
}
