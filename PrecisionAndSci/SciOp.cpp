#include "SciOp.h"

double SciOp::evaluate()
{
	return opVal;
}

string SciOp::stringify()
{
    ostringstream StreamObj;
    StreamObj << scientific;
    StreamObj << opVal;
    string strObj = StreamObj.str();

    return strObj;
}
