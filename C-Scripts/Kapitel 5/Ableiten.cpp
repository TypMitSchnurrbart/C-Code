#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Car
{
    public:

        Car() : c_name("default"), c_power(0) {}

    protected:

        string c_name;
        uint16_t c_power;
        
};

class Truck : public Car
{
    public:

        Truck(string name, uint16_t power): Car() { c_name = name; c_power = power; }

            string inline getName() { return c_name; }
            int inline setName(string name) { c_name = name; }

            uint8_t inline getPower() { return c_power; }
            int inline setPower(uint16_t power) { power = c_power; }
};

int main()
{
    Car v1();
    Truck v2("multipla", 120);

    cout << "Werte v2: " << v2.getName() << v2.getPower() << endl;

    cout << "Size v1: " << sizeof(v1) << "\nSize v2: " << sizeof(v2);
}