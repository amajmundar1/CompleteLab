#ifndef __ITERATOR_CLASS__
#define __ITERATOR_CLASS__

using namespace std;

#include <stack>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

#include "../base.hpp"
//#include "../Operators/Add.h"
//#include "../Operators/Sub.h"
//#include "../Operators/Div.h"
//#include "../Operators/Mult.h"
//#include "../Operators/Pow.h"


class Base;

class Iterator {
	
	public:
		Base* self_ptr;
		Base* current_ptr;

	public:
		Iterator() {}
		Iterator(Base* ptr) { this->self_ptr = ptr; }
		virtual void first() = 0;
		virtual void next() = 0;
		virtual bool is_done() = 0;
		virtual Base* current() = 0;

};

class BinaryIterator : public Iterator {

	public:
		BinaryIterator() {}
		BinaryIterator(Base* ptr) : Iterator(ptr) {}
		void first();
		void next();
		bool is_done();
		Base* current();

};

class UnaryIterator : public Iterator {

	public:
		UnaryIterator() {}
		UnaryIterator(Base* ptr) : Iterator(ptr) {}
		void first();
		void next();
		bool is_done();
		Base* current();

};

class NullIterator : public Iterator {
	
	public:
		NullIterator() {}
		NullIterator(Base* ptr) : Iterator(ptr) {}
		void first();
		void next();
		bool is_done();
		Base* current();
};

class PreOrderIterator : public Iterator {

	protected:
		stack<Iterator*> iterators;

	public:
		PreOrderIterator() {}
		PreOrderIterator(Base* ptr) : Iterator(ptr) {}
		void first();
		void next();
		bool is_done();
		Base* current();

};

#endif
