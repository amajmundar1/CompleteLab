#include "Div.h"

double Div::evaluate()
{
    return left->evaluate() / right->evaluate();
}

string Div::stringify()
{
    return (left->stringify() + "/" + right->stringify());
}
