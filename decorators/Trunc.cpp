#include "Trunc.h"
using namespace std;

Trunc::Trunc(Base* input)
{
    Data = input;
}

string Trunc::stringify()
{
    double temp = Data->evaluate();
    return to_string(temp);
}
