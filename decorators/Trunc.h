#include <iostream>
#include <string>

#include "../base.hpp"

using namespace std;

class Trunc:public Base
{
private:
    Base* Data;
public:
    Trunc(Base* input);
    double evaluate() {};
    string stringify();
    void accept(CountVisitor* visit) { visit->visit_trunc(); }

};
