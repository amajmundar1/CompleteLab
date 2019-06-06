#ifndef __ABS_HPP__
#define __ABS_HPP__


#include <math.h>
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

class Abs : public Base {

        protected:
                Base* childPtr;

        public:
                Abs();
                Abs(Base* op);
                double evaluate () {
                        return fabs(childPtr->evaluate());
                };
		string stringify() {};
		void accept(CountVisitor* visit) { visit->visit_abs(); }


};

#endif

