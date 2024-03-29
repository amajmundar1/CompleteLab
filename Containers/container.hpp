#ifndef __CONTAINER_HPP__
#define __CONTAINER_HPP__

#include <list>
#include <vector>
#include <algorithm>

#include "../Sort/sort.hpp"
#include "../base.hpp"

using namespace std;

class Sort;
class Base;

class Container {
    protected:
        Sort* sort_function;

    public:
        /* Constructors */
        Container() : sort_function(nullptr) { };
        Container(Sort* function) : sort_function(function) { };

        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function){
		this->sort_function = sort_function;
	}

        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
        virtual void add_element(Base* element) = 0;
        // iterate through trees and output the expressions (use stringify())
        virtual void print() = 0;
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        virtual void sort() = 0;

        /* Essentially the only functions needed to sort */
        //switch tree locations
        virtual void swap(int i, int j) = 0;
        // get top ptr of tree at index i
        virtual Base* at(int i) = 0;
        // return container size
        virtual int size() = 0;
};

class VectorContainer : public Container {
	protected:
		vector<Base*> baseVec;
		Base* child;

	public:
		VectorContainer() : child(NULL) {}

		VectorContainer(Sort* vectors);

		void sort();
		void add_element(Base* newVal);
		void print();
		void swap(int i, int j);
		Base* at(int i);
		int size();
		

};

class ListContainer : public Container {
	protected:
                list<Base*> baseList;
                Base* child;

        public:
                ListContainer() : child(NULL) {}

                ListContainer(Sort* lists);

                void sort();
                void add_element(Base* newVal);
                void print();
                void swap(int i, int j);
                Base* at(int i);
                int size();



};


#endif //__CONTAINER_HPP__
