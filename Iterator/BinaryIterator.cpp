#include "iterator.h"

void BinaryIterator::first()
{
	current_ptr = self_ptr->get_left();
}

void BinaryIterator::next()
{
	if(is_done() == true){
		return;
	}
	else if(current_ptr == self_ptr->get_left()){
		current_ptr = self_ptr->get_right();
	}
	else{
		current_ptr = nullptr;
	}
}

bool BinaryIterator::is_done()
{
	if(current_ptr == nullptr){
		return true;
	}
	else{
		return false;
	}
}

Base* BinaryIterator::current()
{
	return this->current_ptr;
}
