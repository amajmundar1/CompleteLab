#include "Paren.h"

Paren::Paren(Base* input)
{
    Data = input;
}

string Paren::stringify()
{
    return "(" + Data->stringify() + ")";
}
