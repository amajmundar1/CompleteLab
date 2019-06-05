#include "SciRand.h"

double SciRand::evaluate()
{
	return randVal;
}

string SciRand::stringify()
{
    ostringstream StreamObj;
    StreamObj << scientific;
    StreamObj << randVal;
    string strObj = StreamObj.str();
    return strObj;
}
