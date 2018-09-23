#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
namespace stu
{
template <typename T, typename UnaryPredicate>
bool any_of(T*arr, int first, int last,UnaryPredicate p)
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
bool all_of(T* arr, int first, int last,UnaryPredicate p)
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
}


#endif // ALGORITHMS_H_INCLUDED
