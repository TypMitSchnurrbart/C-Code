#include <iostream>
#include <conio.h>
#include <chrono>
using namespace std;

int main()
{
    int trigger = 3000;
    int runs = 0;

    chrono::_V2::system_clock::time_point start_time;
    chrono::_V2::system_clock::time_point end_time;

    while (true) {                                                      //Code always needs a true or false input

        while (static_cast<uint16_t>(getch()) == 49) {

            if (runs == 0) {
            start_time = std::chrono::high_resolution_clock::now();
            runs = 1;
            }

            end_time = std::chrono::high_resolution_clock::now();
            auto time = end_time - start_time;

            if ((time/std::chrono::milliseconds(1) % 500) == 0) { 
                cout << "Possible Error detected... " << endl; 
            }
            else if (time/std::chrono::milliseconds(1) > trigger) {
            cout << "Error Confirmed!!! Abort now!" << endl;
            }

            if (static_cast<uint16_t>(getch()) == 113) { return 0; }
        }
        runs = 0;
        cout << "Working.... everything seems fine." << endl;
        if (static_cast<uint16_t>(getch()) == 113) { return 0; }
    }
}
