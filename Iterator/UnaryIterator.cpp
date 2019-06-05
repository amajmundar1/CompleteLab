#include "iterator.h"

void UnaryIterator::first()
{
	if(self_ptr->get_left() != nullptr){
		current_ptr = self_ptr->get_left();
	}
	else{
		current_ptr = self_ptr->get_right();
	}
}

void UnaryIterator::next()
{
	if(is_done() == true){
		return;
	}
	else{
		current_ptr = nullptr;
	}
}

bool UnaryIterator::is_done()
{
	if(current_ptr == nullptr){
		return true;
	}
	else{
		return false;
	}
}

Base* UnaryIterator::current()
{
	return current_ptr;
}
