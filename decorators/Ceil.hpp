#ifndef __CEIL_HPP__
#define __CEIL_HPP__


#include <math.h>
#include "../base.hpp"
#include "../base.hpp"
#include "../Operators/Mult.h"
#include "../Operators/Add.h"
#include "../Operators/Sub.h"
#include "../Operators/Div.h"
#include "../Operators/Pow.h"
#include "../Op&Rand/Op.h"
#include "../Op&Rand/Rand.h"
#include "../Sort/sort.hpp"
#include "../Containers/container.hpp"



class Base;

class Ceil : public Base {

	protected:
		Base* childPtr;

	public:
		Ceil();
		Ceil(Base* op);
		double evaluate () {
			return ceil(childPtr->evaluate());
		};
		string stringify() {};
		void accept(CountVisitor* visit) { visit->visit_ceil(); }


};

#endif
