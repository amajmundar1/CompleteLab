#include <iostream>

#include "sort.hpp"
#include "../Containers/container.hpp"

SelectionSort::SelectionSort()
{
    childPtr = NULL;
}

void SelectionSort::sort(Container* tempSort)
{
    int i, j, first;
    childPtr = tempSort;
    int n = tempSort->size();
    for(i=0; i < n-1; i++)
    {
        first = i;
        for(j=i+1; j < n; j++)
        {
            if(tempSort->at(j)->evaluate() < tempSort->at(first)->evaluate())
            {
                first = j;
            }
        }
        tempSort->swap(i, first);
    }
}
