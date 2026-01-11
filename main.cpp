#include <iostream>
#include "City.h"
#include "Driver.h"

using namespace std;

int main() {
    City myCity(3); 
    myCity.addRoad(0, 1, 10);
    myCity.addRoad(1, 2, 20);
    myCity.addRoad(0, 2, 30);
    cout << "City distance matrix:\n";
    myCity.display();

    cout << "\nDistance between location 0 and 2: "
         << myCity.getDistance(0, 2) << endl;
         
    Driver driver1(1, 0);
    Driver driver2(2, 2);
    cout << "\nDriver 1 ID: " << driver1.getId() 
         << ", Location: " << driver1.getLocation() 
         << ", Available: " << driver1.isAvailable() << endl;

    cout << "Driver 2 ID: " << driver2.getId() 
         << ", Location: " << driver2.getLocation() 
         << ", Available: " << driver2.isAvailable() << endl;

}
