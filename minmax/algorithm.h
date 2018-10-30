#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

template <typename Iterator, typename BinaryPredicate>
Iterator find_element(Iterator first, Iterator last, BinaryPredicate p)
{
    Iterator element = first;
    for(; first < last; ++first)
    {
        if(p(*first,*element))
        {
            element = first;
        }
    }
    return element;
}
template <typename Iterator, typename BinaryPredicate>
Iterator reverse_find_element(Iterator first, Iterator last, BinaryPredicate p)
{
    Iterator element = (last - 1);
    for(; last >= first; --last )
    {
        if(p(*last,*element))
        {
            element = last;
        }
    }
    return element;
}


#endif // ALGORITHM_H_INCLUDED
