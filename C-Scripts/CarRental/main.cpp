#include <iostream>
#include <string>
#include <getopt.h>
#include "input.h"
using namespace std;


int help()
/*Get Help-Page of the Script*/ 
{
    cout << "Loading help page of Car Rental...\n\t-h = open this Help\n\t-v = Show version of Programm\n\nIf still problems occur please contact the developer.\n";
}

int version()
/*Get Version of the Script*/
{
    cout << "Current Version: 0.1 pre-Alpha\nCopyrigt by Alexander Mueller\n";
}

int setup(bool admin_mode)
/*Starting the Rent-Service differing from Costumers to Admin
param: admin_mode {bool}
*/ 
{
    if (admin_mode == false)
    {
        customer();
    }
    else
    {
        admin();
    }
}


int main(int argc, char* argv[]) 
{
    char c;
    bool admin_mode = false;

    while((c = getopt(argc, argv, "hva:")) >= 0) switch(c)
    {
    case 'h' : help();
                exit(1);
    case 'v' : version();
                exit(1);
    case 'a' : if ((string)optarg == "admin") {         //type if optarg uncertain; not true
                    admin_mode = true; 
                    break; 
                    }
    default:
        cout << "Wrong Inputs! Type -h for further advise!\n";
        exit(3);
    }
    setup(admin_mode);
}