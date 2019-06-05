#include "StdDouble.h"

#include <iostream>

using namespace std;

Op* StdDouble::createOp(double value){
	return new Op(value);
}

Rand* StdDouble::createRand(){
	return new Rand();
}

