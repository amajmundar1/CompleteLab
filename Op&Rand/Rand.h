#ifndef __RAND_H__
#define __RAND_H__

#include <iostream>
#include <random>
#include "../base.hpp"
#include "../Iterator/iterator.h"
#include "../visitor.hpp"
#include <string>

class Rand : public Base {
	protected:
		double randVal;
	public:
		Rand();
		double evaluate();
		std::string stringify();
		Base* get_left(){
			return nullptr;
		}
        	Base* get_right(){
			return nullptr;
		}
        	Iterator* create_iterator(){
			return new NullIterator(this);
		}
		void accept(CountVisitor* visit) { visit->visit_rand(); }


};

#endif
			
			
