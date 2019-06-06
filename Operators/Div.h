#ifndef __DIV_H__
#define __DIV_H__

#include <iostream>
#include <random>
#include <string>
#include "Operator.h"

using namespace std;

class Div : public Operator {
        public:
                Div() : Operator() { };

                Div(Base* first, Base* second) : Operator(first, second) {};

                double evaluate();
                string stringify();
		void accept(CountVisitor* visit) { visit->visit_div(); }

};

#endif

