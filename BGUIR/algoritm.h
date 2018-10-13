#ifndef ALGORITM_H_INCLUDED
#define ALGORITM_H_INCLUDED
#include "functions.h"
using BinaryPredicate = bool(*)(int, int);
using BinaryOperation = int(*)(int, int);


int* search_(int* first, int* last, BinaryPredicate p)
{
    int* temp = first++;
    for(; first != last; ++first)
    {
        if(p(*first, *temp))
           {
               temp = first;
           }
    }
    return temp;
}

int accumulate_(int* first, int* last, int init, BinaryOperation p)
{
    for(; first != last; ++first)
    {
        init = p(init, *first);
    }
    return init;
}

int sum_min_max(int* first, int* last)
{
    int* min_el = search_(first,last,min_);
    int* max_el = search_(first,last,max_);
    return *min_el + *max_el;
}



#endif // ALGORITM_H_INCLUDED
