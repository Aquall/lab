#ifndef ARRAYS_E_H_INCLUDED
#define ARRAYS_E_H_INCLUDED
#include <cmath>

int task_18 (int* first, int* last, int* k)
{

    for (; first!=last; ++first)
    {
        if(*first < *k)
        {
            return *first;
        }
    }
    return 0;
}
int task_19 (int* first, int* last, int* k, int* p)
{
    for(;first<last;++first)
    {
        if(*first < *k && *first < *p)
        {
            return *first;
        }
    }
    return 0;
}
int accum (int* first, int* last)
{
    int temp = 0;
    for (; first<last; ++first)
    {
        temp = temp + *first;
    }
    return temp;
}
int middle_arythmetic (int* first, int* last)
{
    int temp = last-first;
    return  accum(first, last)/temp;
}
int task_22 (int* first, int* last, int* k, int* l)
{
    return accum (first, k) + accum (l, last);
}
int task_23 (int* first, int* last, int* k, int* l)
{
    int temp = (last-first)-(k-l);
    return task_22(first, last, k, l)/temp;
}
void arithmetic_progression_3 (int* first, int* last, int d, int a)
{
    int temp = 0;
    for(; first<last; ++first)
    {
        *first = a + (temp++)*d;
    }
}

#endif // ARRAYS_E_H_INCLUDED
