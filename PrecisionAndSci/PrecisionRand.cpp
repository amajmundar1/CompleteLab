#include <string>
#include <random>

#include "PrecisionRand.h"


using namespace std;

PrecisionRand::PrecisionRand() {
	//randVal = randVal.evaluate();
}

double PrecisionRand::evaluate() {
	return randVal;
}

std::string PrecisionRand::stringify() {
        std::ostringstream OS;
        OS << setprecision(2);
        OS << std::fixed;
        OS << randVal;

        std::string preciseVal = OS.str();

        return preciseVal;

}

