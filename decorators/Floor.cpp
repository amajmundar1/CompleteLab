#include "Floor.hpp"

Floor::Floor(){
        childPtr = NULL;
}
Floor::Floor(Base* op) {
        childPtr = op;
}

