#include "input.h"

int customer()
{
    string input_cache;

    while (true) {

        cout << "Welcome to Car Shareing Hinterdupfingen\nWhat action do you want to make?\n";
        cout << "Rent a Car [1]\nRegsiter as new User [2]\n";
        cin >> input_cache;

        if (input_cache == "1") 
        {
            cout << "Renting a Car...\n";
            break;
        }
        else if (input_cache == "2")
        {
            cout << "Register a new User...\n";
            break;
        }
        else
        {
            cout << "Wrong Input! Please try again.\n\n";
        }
    }
}

int admin()
{
    string input_cache;

    while (true) {

        cout << "Welcome to Car Shareing Hinterdupfingen\nWhat action do you want to make?\n";
        cout << "Rent a Car [1]\nAdd a Car [2]\n";
        cin >> input_cache;

        if (input_cache == "1") 
        {
            cout << "Renting a Car...\n";
            break;
        }
        else if (input_cache == "2")
        {
            cout << "Adding a Car...\n";
            break;
        }
        else
        {
            cout << "Wrong Input! Please try again!\n\n";
        }
    }
}
