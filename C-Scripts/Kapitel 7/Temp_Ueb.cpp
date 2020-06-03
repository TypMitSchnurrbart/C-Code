#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Deklaration der Klasse Stack als Template mit Temp; einfach alle "variablen" Datentypen als "Temp"
template <class Temp>
class Stack {

    public:

        Stack( Temp input_a, Temp input_b, Temp input_c) : a(input_a), b(input_b), c(input_c) {}    //Hier könnte auch Default stehen; sonst normaler Konstruktor
        Temp bit_size();

        friend ostream& operator<<(ostream& print, const Stack &some_stack )
        {
            print << "Anzahl durchschnittlich verwendeter Bytes: " << some_stack.bit_size() << endl;
            return print;
        }

    protected:

        Temp a,b,c;
};

//Deklaration der Methode bit_size der Klasse Stack
template <class Temp>
Temp Stack<Temp>::bit_size ()
{
    Temp max_wert;

    max_wert = (sizeof(a) + sizeof(b) + sizeof(c))/3;

    return max_wert;
}

int main() {

    //Erstellen des Objekts "horst" mit der Definition "uint16_t" für Temp in der Klasse
    Stack <uint16_t> horst(23, 45, 12);
    cout << horst;

    //Erstellen des Objekts "detlef" mit der Definition "double" für Temp in der Klasse
    Stack <double> detlef(0.123, -0.43, 1.342);
    cout << detlef;
}