#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class  CTasse
{
    /*Wenn nichts angegeben(public,...) ist alles "private" */

public:
    CTasse(string name, string color, int32_t radius) :t_name(name), t_color(color), t_radius(radius){}             //Konstruktor Initialisieren von Objekten; mit def der Daten Typen

   
    //Getter Methoden 
    string get_Name(){ return t_name; }             //string;int;etc defines data type of return value of the function
    string get_Color(){ return t_color; }           //static Values are shared for all objects; and they exist before the first object
    int32_t get_Radius(){ return t_radius; }

    //Setter Methode
    void set_Radius(int32_t carryvalue) { t_radius = carryvalue; }
   
    //Destruktor
    ~ CTasse(){};                 

private:
    string t_name;
    string t_color;
    int32_t t_radius;
};


//----------------------Main-Area--------------------------------
string a;
string color_cache;
string color = "";

int main() 
{
    //Random Input gelernt!! Hat nichts
    printf("Wie soll Ihre Tasse heissen?: ");
    cin >> a;

    while (true) {

        printf("Welche Farbe soll Ihre Tassen haben? [r, g, b]: ");
        cin >> color_cache;

        if (color_cache == "r") 
        {
            color = "rot";
            break;
        }
        else if (color_cache == "g")
        {
            color = "gruen";
            break;
        }
        else if (color_cache == "b")
        {
            color = "blau";
            break;
        }
        else
        {
            cout << "False Input, Please try again!\n";
        }
    }
    
    CTasse tasse_1(a, color, 24);

    cout << tasse_1.get_Name() << endl << tasse_1.get_Color() << endl;                        //Output-Stream zum "print" nach der Reihenfolge mit ENDLINE abgeschlossen
  
}

