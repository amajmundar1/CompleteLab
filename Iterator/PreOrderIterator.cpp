#include "iterator.h"

void PreOrderIterator::first(){
	if(!iterators.empty()){
                while(!iterators.empty()) {
                        iterators.pop();
                }
        }
        Iterator* temp = this->self_ptr->create_iterator();
        temp->first();
        iterators.push(temp);
        return;

}
void PreOrderIterator::next(){
	Iterator* i = this->iterators.top()->current()->create_iterator();
    	i->first();
    	this->iterators.push(i);
    	while(this->iterators.size() > 0 && this->iterators.top()->is_done()) {
       		this-> iterators.pop();
        	if(!iterators.empty()){
            		this->iterators.top()->next();
        	}
    	}
}
bool PreOrderIterator::is_done(){
	if(iterators.empty()) {
       		return true;
   	} 
   	return false;
}
Base* PreOrderIterator::current(){
	if(this->iterators.size() > 0){
     		return iterators.top()->current();
    	}
    	else {
        	return NULL;
    	}
}

