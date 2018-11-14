#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

namespace stu
{
template <typename T>
bool greater(T a, T b)
{
    return a > b;
}

template <typename Iter,typename UP>
Iter find_if(Iter first, Iter last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}

template <typename Iter,typename BP>
Iter find_max(Iter first, Iter last, BP op)
{
    Iter el = first;
    for(; first != last; ++first)
    {
        if(op(*first, *el))
        {
            el = first;
        }
    }
    return el;
}
template <typename T, typename Iter, typename BP>
T accumulate(Iter first, Iter last, BP p, T temp)
{
    for(;first != last; ++first)
    {
        temp = p(temp,*first);
    }
    return temp;
}
}

#endif // ALGORITHM_H_INCLUDED
