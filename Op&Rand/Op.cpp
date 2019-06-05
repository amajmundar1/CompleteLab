#include "Op.h"

using namespace std;

double Op::evaluate()
{
	return opVal;
}

string Op::stringify()
{
	return to_string(opVal);
}
