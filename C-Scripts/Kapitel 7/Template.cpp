// class templates
#include <string>
#include <iostream>
using namespace std;

// Definition der Klasse
template <class T>
class mypair {
    T a, b;         //Einheit der Variablen a, b ist T. Also variabel

  public:
    mypair (T first, T second) : a(first), b(second) {}  //Konstruktor mit den beiden Variablen als T deklariert, dann mit der zuordnung
    T getmax ();                                            // T beschreibt hier dass der Rückgabe werden ein Template wird
    virtual ~mypair()
};

// Zu Beachten:

// Methodendefinitionen von Templateklassen müssen im selben 
// Source-File wie die Klassendefinition abliegen. 
// Das Skript verweist auf Header-Files weil es der übliche 
// Ablageort in einem größeren Projekt wäre.

// Methodendefinitionen ausserhalb der Klasse (also nicht inline) 
// müssen das template<...> Präfix vorangestellt haben

// Definition der Methode getmax
template <class T>
T mypair<T>::getmax ()
{
  T max_wert;
  max_wert = a>b? a : b; 
  return max_wert;
}
//

// Verwendung im Programm
int main () {
  mypair <int> myobject (100, 24);      //Erstellen des Objekts mit: klasse <var-typ> object (übergabewerte);
  cout << myobject.getmax();
  return 0;
}