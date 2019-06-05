#ifndef __STDDOUBLE_H__
#define __STDDOUBLE_H__

#include <iostream>

#include "../base_factory.hpp"

class StdDouble : public BaseFactory {
	
	public:
		Op* createOp(double);
		Rand* createRand();





};

#endif
