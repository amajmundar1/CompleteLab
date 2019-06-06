#ifndef __OP_H__
#define __OP_H__

#include <iostream>
#include <random>
#include "../base.hpp"
#include "../Iterator/iterator.h"
#include "../visitor.hpp"

using namespace std;

class Op : public Base {
protected:
        double opVal;
public:
        Op() : opVal(0) {}

        Op(double insVal) : opVal(insVal) {}

        double evaluate();	
        string stringify();
	Base* get_left(){
		return nullptr;
	}
	Base* get_right(){
		return nullptr;
	}
	Iterator* create_iterator(){
		return new NullIterator(this);
	}
	void accept(CountVisitor* visit) { visit->visit_op(); }

};

#endif

