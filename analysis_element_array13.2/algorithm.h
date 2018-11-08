#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED


template <class Iter, class UO>
void for_each(Iter first, Iter last, UO p)
{
    for(; first != last; ++first)
    {
        p(*first);
    }
}
template <class Iter, class BO>
Iter counter(Iter first, Iter last, BO op)
{
    int counter = 0;
    for(; first != last; ++first)
    {
        if(op(*first, *(first + 1)))
        {
            ++counter;
        }
    }
    return counter;
}



#endif // ALGORITHM_H_INCLUDED
