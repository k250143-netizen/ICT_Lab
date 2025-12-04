#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(string b, int s, int doors) : Vehicle(b, s) {
        numberOfDoors = doors;
    }

    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;  
        cout << "Doors: " << numberOfDoors << endl; 
    }
};

int main() {
    Car c("Toyota", 180, 4);
    c.show();

    return 0;
}
