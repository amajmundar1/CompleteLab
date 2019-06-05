#ifndef __SORT_HPP__
#define __SORT_HPP__

using namespace std;

#include <vector>
#include <list>

#include "../Containers/container.hpp"
#include "../base.hpp"
class Container;

class Sort {
    public:
        /* Constructors */
        Sort() {};

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

class BubbleSort : public Sort {
	protected: 
		Container* childPtr;
		vector<Base*> parentVec;
	public: 
		BubbleSort();
		
		BubbleSort(Container* tempSort) : childPtr(tempSort) {}

		void sort(Container* tempSort);
		
};

class SelectionSort : public Sort {
	protected: 
		Container* childPtr;
	public:
		SelectionSort();

		SelectionSort(Container* tempSort) : childPtr(tempSort) {}

		void sort(Container* tempSort);


};
#endif //__SORT_HPP__
