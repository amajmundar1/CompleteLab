#include "Pow.h"
#include <math.h>

using namespace std;

double Pow::evaluate()
{
	double powVal;
        powVal = pow(left->evaluate(), right->evaluate());
   	return powVal;
}
string Pow::stringify()
{
    string powVal = to_string(left->evaluate());
    string power = to_string(right->evaluate());
    return (powVal + "^" + power);

}
