#include "Add.h"

double Add::evaluate()
{
    return left->evaluate() + right->evaluate();
}

string Add::stringify()
{
    return (left->stringify() + "+" + right->stringify());
}
