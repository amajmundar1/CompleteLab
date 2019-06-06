#pragma once

#include "../base.hpp"

class Operator : public Base
{
	protected:
		Base* left;
		Base* right;

	public:
		Operator() : left(nullptr), right(nullptr) {};
		Operator(Base* left, Base* right) : left(left), right(right) {};
		Base* get_left()
		{
			return this->left;
		}
		Base* get_right()
		{
			return this->right;
		}
		virtual double evaluate() = 0;
		virtual string stringify() = 0;
		Iterator* create_iterator()
		{
			return new BinaryIterator(this);
		}
		void accept(CountVisitor* visit) { }
};
