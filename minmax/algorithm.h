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
/*Iterator find_index_element(Iterator first, Iterator last, BinaryPredicate p)
{
    int element = *first;
    int index_element = first;
    for(; first < last; ++first)
    {
        if(p(*first,element))
        {
            element = *first;
            index_element = first;


        }
    }
    return index_element;
}*/
template <typename Iterator>
Iterator counter(Iterator first, Iterator last)
{
    int counter = 0;
    for(; first != last; ++ first)
    {
        ++counter;
    }
    return counter;
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
