#include "Mult.h"

double Mult::evaluate()
{
    return left->evaluate() * right->evaluate();
}

string Mult::stringify()
{
    return (left->stringify() + "*" + right->stringify());
}
