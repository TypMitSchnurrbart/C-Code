#include <iostream>
using namespace std;

class C_vector {

    public:

    C_vector(double i_x, double i_y, double i_z): x(i_x), y(i_y), z(i_z) {}

    double x;
    double y;
    double z;

    C_vector operator+(const C_vector &input_vector) {          //Deklariere für die Klasse C_vector dass der operator + folgendes tut; das "C_vector" am Anfang sagt dass ein Objekt zurückkommt
                                                                //Übergabe-Wert ist das Objekt welches hinter dem Operator steht (v2); v1 ist implizit dabei!!!
        C_vector result(0, 0, 0);                               //v1 ist dann mit this->"wert" oder einfach nur "wert" erreichbar
        result.x = this->x + input_vector.x;                    
        result.y = this->y + input_vector.y;
        result.z = this->z + input_vector.z;
        return result;                                          //Return ein Objekt dass somit zu v3 wird!
    }

    friend ostream& operator<<(ostream& print, const C_vector &vektor) {        //Hier muss friend sein, weil ostream eigentlich private ist! Friend umgeht private!

        print << vektor.x << "\n" << vektor.y << "\n" << vektor.z << endl;
        return print;
    }
};

int main()
{
    C_vector v1(1, 2, 3);
    C_vector v2(4, 4, 0);
    C_vector v3 = v1 + v2;          //Ohne Definition von + als Operator der Klasse -> Fehler; man muss also + als Operator überladen da "+" schon existiert; sonst müsste man 
                                    //eine ganze Methode C_vector::addiere(v1, v2) schreiben die diese Funktion  erfüllt

    cout << v2;

}