#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    float f = {123.0f};

    int8_t i = static_cast<int8_t>(f);

    cout << i << endl << f << endl;

}