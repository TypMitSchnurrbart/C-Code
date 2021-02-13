#include <iostream>
#include "test_header.h"
using namespace std;

template <class Temp>
Temp Random<Temp>::randomshit(int zahl) {

    cout << "Das Objekt ist vom Typ Int" << endl;
    return this->getTyp_1();
}
template <class Temp>
Temp Random<Temp>::randomshit(string text) {

    cout << "Das Objekt ist vom Typ String" << endl;
    return this->getTyp_1();
}
template <class Temp>
Temp Random<Temp>::randomshit(float zahle) {

    cout << "Das Objekt ist vom Typ float" << endl;
    return this->getTyp_1();
}



int main() {

    Random <int> Entity_1(23, 13);
    Random <string> Entity_2("ja", "moin");
    Random <float> Entity_3(0.433, 12.123);

    cout << Entity_1.randomshit(Entity_1.getTyp_1()) << endl << Entity_2.randomshit(Entity_2.getTyp_2()) << endl;

    cout << 0xA2F1 << endl << 071;    
}

