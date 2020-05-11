#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class CUser {

    public:
        CUser(string name, int16_t budget = 0) : u_name(name), u_budget(budget) { value_users++; }
        ~CUser() { value_users--; }

    private:
        int value_users;
        string u_name;
        int16_t u_budget;

    void set_budget(int16_t new_budget) { u_budget = u_budget + new_budget; }
    int16_t get_budget() { return u_budget; }
};