#include "iterator.h"

void NullIterator::first()
{
	return;
}

void NullIterator::next()
{
	return;
}

bool NullIterator::is_done()
{
	return true;
}

Base* NullIterator::current()
{
	return nullptr;
}
