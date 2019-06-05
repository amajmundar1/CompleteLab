#ifndef __SCI_H__
#define __SCI_H__

#include <iostream>

#include "../base_factory.hpp"
#include "../Op&Rand/Op.h"
#include "../Op&Rand/Rand.h"
#include "../PrecisionAndSci/SciOp.h"
#include "../PrecisionAndSci/SciRand.h"

class Sci : public BaseFactory {
	public:
		Op* createOp(double value);
		Rand* createRand();
};

#endif
