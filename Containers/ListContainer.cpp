#include <list>
#include <iostream>

#include "container.hpp"

using namespace std;

ListContainer::ListContainer(Sort* List) : child(NULL) {
    sort_function = List;
}

void ListContainer::sort() {
    sort_function->sort(this);
}

void ListContainer::add_element(Base *newVal)
{
    baseList.push_back(newVal);
}

void ListContainer::print()
{
    list <int> :: iterator it;
    for(auto v : baseList)
    {
        cout << v->evaluate() << "\n";
    }
}

Base* ListContainer::at(int i)
{
    list<Base*>::iterator it = baseList.begin();
    for(int j = 0; j < i; j++)
    {
        ++it;
    }
    return *it;
}

void ListContainer::swap(int i, int j)
{
    list<Base*>::iterator i1 = baseList.begin();
    for(int k = 0; k < i; ++k)
    {
        ++i1;
    }
    
    list<Base*>::iterator i2 = baseList.begin();
    for (int l = 0; l < j; ++l)
    {
        ++i2;
    }
    std::swap(*i1, *i2);
    //Base* temp = *i1;
    //i1 = i2;
    //*i2 = temp;
    
}

int ListContainer::size()
{
    return baseList.size();
}
