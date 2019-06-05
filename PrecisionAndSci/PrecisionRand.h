#ifndef __PRECISIONRAND_H__
#define __PRECISIONRAND_H__

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <string>

#include "../Op&Rand/Rand.h"


class PrecisionRand : public Rand {

	public:
		PrecisionRand();
		//PrecisionRand(double);
		double evaluate();
		std::string stringify();


};

#endif

