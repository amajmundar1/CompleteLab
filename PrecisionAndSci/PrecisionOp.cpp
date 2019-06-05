#include <string>

#include "PrecisionOp.h"

using namespace std;

double PrecisionOp::evaluate()
{
	return opVal;
}
PrecisionOp::PrecisionOp(double newVal) {
	opVal = newVal;
}

std::string PrecisionOp::stringify() {
	std::stringstream OS;
	OS << std::fixed;
	OS << std::setprecision(2);
	OS << opVal;
	
	std::string preciseVal = OS.str();

	return preciseVal;
	

}
