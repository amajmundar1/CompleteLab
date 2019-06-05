#ifndef __SUB_H__
#define __SUB_H__

#include <iostream>
#include <random>
#include <string>
#include "Operator.h"

using namespace std;

class Sub : public Operator {
public:
        Sub() : Operator() { }

        Sub(Base* first, Base* second) : Operator(first, second) {} ;	

        double evaluate();
        string stringify();
};

#endif

