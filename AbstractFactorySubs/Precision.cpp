#include "Precision.h"

#include <iostream>

using namespace std;

Op* Precision::createOp(double value){
	return new PrecisionOp(value);
	//ostringstream OS;
	//OS << std::fixed;
	//OS << std::setprecision(2);
	//OS << value;	
	//Op* newOp = new Op(value);
	//return newOp;
}

Rand* Precision::createRand(){
	return new PrecisionRand();
	//Rand* newRand = new Rand();
	//ostringstream OS;
	//OS << std::fixed;
	//OS << std::setprecision(2);
	//return newRand;
}
