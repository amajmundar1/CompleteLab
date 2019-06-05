#ifndef __SCIOP_H__
#define __SCIOP_H__

#include <iostream>
#include <sstream>

#include "../Op&Rand/Op.h"

using namespace std;

class SciOp : public Op {
	public:
		SciOp(double insVal)
		{
			opVal = insVal;
		}
		double evaluate();
		string stringify();


};

#endif

