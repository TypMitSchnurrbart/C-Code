#ifndef _TEST_HEADER_H_
#define _TEST_HEADER_H_

#include <string>
using namespace std;

template <class Temp>
class Random {

    public:


        Random( Temp var_1, Temp var_2) : typ_1(var_1), typ_2(var_2) { instances++; }
        virtual ~Random() { instances--; }

        inline Temp getTyp_1() { return this->typ_1; }
        inline Temp getTyp_2() { return this->typ_2; }

        inline void setTyp_1(Temp var) { this->typ_1 = var; return; }
        inline void setTyp_2(Temp var) { this->typ_2 = var; return; }

        int inline getInstances() { return instances; }

        Temp randomshit(int zahl);
        Temp randomshit(string text);
        Temp randomshit(float zahle);

    protected:
        Temp typ_1;
        Temp typ_2;
        int instances = {0};
};

#endif

