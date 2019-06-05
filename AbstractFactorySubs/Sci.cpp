#include "Sci.h"

Op* Sci::createOp(double value)
{
	return new SciOp(value);
}

Rand* Sci::createRand()
{
	return new SciRand();
}
