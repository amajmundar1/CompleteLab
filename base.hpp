#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
#include <iostream>
#include "./Iterator/iterator.h"
//#include "./Iterator/BinaryIterator.cpp"
//#include "./Iterator/UnaryIterator.cpp"

using namespace std;

class Iterator;
//class BinaryIterator;
//class UnaryIterator;
//class NullIterator;

class Base {
    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
	virtual Base* get_left() = 0;
	virtual Base* get_right() = 0;
	virtual Iterator* create_iterator() = 0;

};
/*
class BinaryOperator : public Base {
	protected:
		Base* left;
		Base* right;

	public:
		BinaryOperator() {}
		BinaryOperator(Base* lhs, Base* rhs) : left(lhs), right(rhs) {}
		Base* get_left(){
			return left;
		}
		Base* get_right(){
			return right;
		}
		double evaluate() {}
		std::string stringify() {}
		Iterator* create_iterator(){
			return new BinaryIterator(this);
		}
};
class UnaryOperator : public Base {
        protected:
                Base* op;
        public:
                UnaryOperator() {}
                UnaryOperator(Base* Op) : op(Op) {}
                Base* get_left(){
			return op;
		}
                Base* get_right(){
			return NULL;
		}
		double evaluate() {}
		std::string stringify() {}
                Iterator* create_iterator(){
			return new UnaryIterator(this);
		}
};

class DummyRoot : public UnaryOperator {
	public:
		DummyRoot() : UnaryOperator() {}
		DummyRoot(Base* root) : UnaryOperator(root) {}
		std::string stringify() {
			cout << "ROOT";
		}
		double evaluate(){
			return op->evaluate();
		}
};
*/
#endif //__BASE_HPP__
