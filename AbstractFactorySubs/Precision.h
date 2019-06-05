#ifndef __PRECISION_H__
#define __PRECISION_H__

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ostream>

#include "../base_factory.hpp"
#include "../Op&Rand/Op.h"
#include "../Op&Rand/Rand.h"
#include "../PrecisionAndSci/PrecisionOp.h"
#include "../PrecisionAndSci/PrecisionRand.h"

class Precision : public BaseFactory {

	public:
		Op* createOp(double value);
		Rand* createRand();		

};

#endif
