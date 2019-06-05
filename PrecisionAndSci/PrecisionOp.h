#ifndef __PRECISIONOP_H__
#define __PRECISIONOP_H__

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <string>

#include "../Op&Rand/Op.h"


class PrecisionOp : public Op {

	public :
		PrecisionOp() {};
		PrecisionOp(double);
		double evaluate();
		std::string stringify();




};

#endif
