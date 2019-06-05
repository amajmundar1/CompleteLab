#include <vector>
#include <iostream>

#include "container.hpp"

using namespace std;

VectorContainer::VectorContainer(Sort* vectors) : child(NULL) {
	sort_function = vectors;
}

void VectorContainer::sort() {
	sort_function->sort(this);
}

void VectorContainer::add_element(Base* newVal){
	baseVec.push_back(newVal);
}

void VectorContainer::print(){
	for (unsigned i = 0; i < baseVec.size(); i++){
		std::cout << baseVec.at(i)->evaluate() << std::endl;
	}
}
void VectorContainer::swap(int i, int j){
	Base* temp = baseVec.at(i);
	baseVec.at(i) = baseVec.at(j);
	baseVec.at(j) = temp;
}
Base* VectorContainer::at(int i){
	return baseVec.at(i);
}
int VectorContainer::size(){
	return baseVec.size();
} 
