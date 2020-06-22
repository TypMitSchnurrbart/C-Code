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

class Truck : public Car                    //Vererbt alles außer private von Car und behandelt es als public in Truck; heißt was in Car noch protec. war ist in Truck public
{
    public:

        Truck(string name, uint16_t power): Car() { c_name = name; c_power = power; }    //Car Konstruktor wird komplett aufgerufen, Alles darin wird ausgeführt

            string inline getName() { return c_name; }
            int inline setName(string name) { c_name = name; }

            uint16_t inline getPower() { return c_power; }
            int inline setPower(uint16_t power) { power = c_power; }
};

int main()
{
    Car v1;
    Truck v2("Multipla", 120);

    cout << "Werte v2: " << v2.getName() << " Leistung: " << v2.getPower() << endl;

    cout << "Size v1: " << sizeof(v1) << " bytes\nSize v2: " << sizeof(v2) << " bytes" << endl;
}

/* Man muss drauf achten nach welcher Klasse interpretiert wird. Eigentlich nimmt er immer die Urklasse im Zweifel */