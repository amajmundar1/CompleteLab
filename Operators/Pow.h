#ifndef __POW_H__
#define __POW_H__

#include <iostream>
#include <random>
#include <string>

#include "Operator.h"

using namespace std;

class Pow : public Operator {
public:
        Pow() : Operator() { }

        Pow(Base* childVal, Base* childVal2) : Operator(childVal, childVal2) {};

        double evaluate();
        string stringify();
	void accept(CountVisitor* visit) { visit->visit_pow(); }


};

#endif

