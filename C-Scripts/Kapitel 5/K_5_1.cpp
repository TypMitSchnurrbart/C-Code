#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class  CTasse
{
    /*Wenn nichts angegeben(public,...) ist alles "private" */

public:
    CTasse(string name, string color, int32_t radius) :t_name(name), t_color(color), t_radius(radius){}                  //Konstruktor Initialisieren von Objekten
   
    //Getter Methoden 
    string get_Name(){ return t_name; }
    string get_Color(){ return t_color; }
    int32_t get_Radius(){ return t_radius; }

    //Setter Methode
    void set_Raidus( int32_t carryvalue ) {t_radius = carryvalue;}
   
    //Destruktor
    ~ CTasse(){};                 

private:
    string t_name;
    string t_color;
    int32_t t_radius;
};

string a;

int main() 
{
    //Random Input gelernt!!
    printf("Geben sie etwas ein!: ");
    cin >> a;
    cout << a << endl;

    CTasse toll("Liebs", "Gruen", 24);

    cout << toll.get_Name() << endl;                        //Output-Stream zum "print" nach der Reihenfolge mit ENDLINE abgeschlossen
  
}


