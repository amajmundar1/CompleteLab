#ifndef __ADD_H__
#define __ADD_H__

#include <iostream>
#include <string>
#include <random>
#include "Operator.h"
//#include "../Iterator/iterator.h"

using namespace std;

class Add : public Operator {
        public:
                Add() : Operator() {}
		
		Add(Base* first, Base* second) : Operator(first, second) {};

                double evaluate();
                std::string stringify();
};

#endif

