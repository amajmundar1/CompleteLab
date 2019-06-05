#ifndef __MULT_H__
#define __MULT_H__

#include <iostream>
#include "Operator.h"
#include <string>

using namespace std;

class Mult : public Operator {
        public:
                Mult() : Operator() { }

                Mult(Base* first, Base* second) : Operator(first, second) {};

                double evaluate();
                string stringify();


};

#endif

