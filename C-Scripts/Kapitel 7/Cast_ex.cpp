#include <iostream>
using namespace std;

int main() {

    float f = 123.0f;

    int16_t i = static_cast<int16_t>(f);

    cout << i << endl << f << endl; 
}