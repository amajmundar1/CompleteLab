#include <iostream>
#include <string>
#include "../base.hpp"

using namespace std;

class Paren:public Base
{
private:
    Base* Data;
public:
    Paren(Base* input);
    double evaluate() {};
    string stringify();
    void accept(CountVisitor* visit) { visit->visit_paren(); }

};
