#include "Abs.hpp"

Abs::Abs(){
	childPtr = NULL;
}

Abs::Abs(Base* op) {
	childPtr = op;
}
