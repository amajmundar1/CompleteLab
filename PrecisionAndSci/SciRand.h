#ifndef __SCIRAND_H__
#define __SCIRAND_H__

#include <iostream>
#include <sstream>

#include "../Op&Rand/Rand.h"

using namespace std;

class SciRand : public Rand {
	public:
		SciRand() {};
		double evaluate();
		string stringify();
};

#endif

