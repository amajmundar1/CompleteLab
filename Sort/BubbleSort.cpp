#include <iostream>

#include "sort.hpp"
#include "../Containers/container.hpp"

BubbleSort::BubbleSort(){
	childPtr = NULL;
}

void BubbleSort::sort(Container* tempSort){
	childPtr = tempSort;
	for (int i = 0; i < tempSort->size(); ++i){

		for (int j = 0; j < tempSort->size(); ++j){

			if(j != tempSort->size() - 1){

				if (tempSort->at(j)->evaluate() > tempSort->at(j				 + 1)->evaluate()){
					tempSort->swap(j, j + 1);
				}

			}

		}

	}
}
