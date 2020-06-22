#include <iostream>
#include <string>
#include <fstream>
#include "header.h"     //muss in "" wenn die Datei nicht im Standart Include Pfad liegt, sonst darf <>. Bei großen Projekten alles in <> und lieder Include Pfad ändern.

using namespace std;


int inline DHBW::interne_funktion(int zahl) { return zahl--; }

int main() {

    //Structs------------------------------------------------
    struct Test_Struct
    {
        int x;
        string y;
        bool z;
    };

    typedef struct Typ
    {
        int x;
        string y;
        bool z;
    }StructName;        //typedef ermöglicht dass wir das struct einem Namenzuweisen der als "Typ" fungiert; heißt ich kann ein typedef struct anlegen der das klassische "int" ersetzt
    
    const struct Test_Struct t = {12, "hallo", true};
    const StructName b = {12, "Ja moin!", false};

    cout << b.x << endl << t.y << endl;


    cout << endl << endl;
    //Eingabe durch File-Stream---------------------------------
    ifstream ein;
    char zeile[128];    //Array aus Charactern; solang darf die Zeile sein

    ein.open("input.txt", ios::in);

    while (!ein.eof())
    {
        ein.getline(zeile, sizeof(zeile));  //Liest die Zeile mit entsprechender "Anzahl" von Charactern. Also 128 Character! Überschreibt aber für jede neue Zeile.
        cout << zeile << endl;
    }
    

    cout << endl << endl;
    //Namespaces-----------------------------------------------

    int zahl = {2};
    int inline interne_funktion(int zahl); { return zahl--; }
    cout << "Test" << zahl << endl << interne_funktion(zahl) << endl << DHBW::interne_funktion(zahl) << endl;

}