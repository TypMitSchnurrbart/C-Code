#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class CCar {

    public:
        CCar(int id, string brand, string name, int16_t power, bool rented) : c_id(id), c_brand(brand), c_name(name), c_power(power), c_rented(rented) { car_number++; }
        ~CCar(){ car_number--; };

    protected:
        int c_id;
        string c_brand;
        string c_name;
        int16_t c_power;
        bool c_rented;
        int16_t car_number;

    void set_c_rented(int c_id) 
    {
        //set car with c_id = c_id as "true"
    }
};