#include <time.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    bool input = false;
    bool output = false;
    int diff = 0, trigger = 300;
    clock_t start;
    clock_t stopp;

    cout << "Press q to exit!" << endl;

    while (true) 
    {
        int16_t key = static_cast<int16_t>(getch());
        while (input == false)
        {
            int16_t key = static_cast<int16_t>(getch());
            if (key == 27) {                                  //Number 27 stands for the ESC Key after 7-bit ASCII in Decimal
                input = true;           
                start = clock();                            //Get Time of Error Occurance
            }
            else { input = false; }
        }

        while (input == true) 
        {
            int16_t key = static_cast<int16_t>(getch());
            stopp = clock();
            diff = (stopp - start) * 1000;
            cout << "Diff = " << diff << "ms" << endl;

            if (input == true && diff > trigger) {
                output = true;
            }
            else {
                output = false;
            }
        }

        if (output) {
            cout << "ALARM!!" << endl;
        }

        if (key == 113) { return 0; }                           //Exit Statement through pressing "q" 
    }

}

/*Müll, Fehler liegt im Ansatz
Lösung wäre dass man ein Objekt erstellt welches den Zeitwert des Setzens als Attribut aufweist und dann das ganze dauerhaft vergleicht solange der Knopf gedrückt wird.

Wenn der Wert unter 100 liegt und aufhört -> lösche Zeitwert Objekt, wenn über 100 Alarm!

Irgend eine Reset Funktion sollte da sein!
*/