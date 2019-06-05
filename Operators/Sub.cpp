#include "Sub.h"

using namespace std;

double Sub::evaluate()
{
    return left->evaluate() - right->evaluate();
}
string Sub::stringify()
{
    return (left->stringify() + "-" + right->stringify());
}
