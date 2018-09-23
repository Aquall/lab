#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
using UnaryPredicate = bool(*)(int);
using BinaryOperation = int(*)(int,int);
namespace stu
{
template <typename T, typename UnaryPredicate>
bool any_of_(T*arr, int first, int last,UnaryPredicate p)
{
    for(; first < last; ++first)
    {
        if(p(arr[first]))
        {
            return true;
        }
    }
    return false;
}
template <typename T, typename UnaryPredicate>
bool all_of_(T* arr, int first, int last,UnaryPredicate p)
{
    for(; first < last; ++first)
    {
        if(!p(arr[first]))
        {
            return false;
        }
    }
    return true;

}
int all_of__(int* first,int* last,UnaryPredicate p)
{
    for(; first!=last; ++first)
    {
        if(!p(*first))
            return false;
    }
    return true;
}
template <typename Iterator, typename UnaryPredicate>
int all_of(Iterator first,Iterator last,UnaryPredicate p)
{
    for(; first!=last; ++first)
    {
        if(!p(*first))
            return false;
    }
    return true;
}
template <typename T,typename BinaryOperation>
int accumulate_(T* arr,int first, int last, T init, BinaryOperation op)
{
    for(; first < last; ++first)
    {
        init = op(init,arr[first]);

    }
    return init;
}
}


#endif // ALGORITHMS_H_INCLUDED
