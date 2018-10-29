#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED

/*bool is_even(int a)
{
    return a%2 == 0;
}
bool alternate_by_even(int a, int b)
{
    return is_even(a) ^ is_even(b);
}
bool is_progression(int a, int b,int q)
{
    return b / a == q;
}
template <typename Iterator, template BinaryPredicate>
bool binary_all_of(Iterator first, Iterator last, BinaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(!p(*(first),*(first + 1))
    {
        return false;
    }
}
return true;
}
template <typename TernarnyPredicate>
bool binary_all_of(Iterator first, Iterator last,int q,TernarnyPredicate p)
{
    for(; first != last; ++first)
    {
        if(!p(*(first),*(first + 1), q)
    {
        return false;
    }
}
return true;
}
bool task_40(int a, int b, int r)
{
   return std::abs(((a + b) - r));
}
template <typename TernarnyOperation>
int* binary_find_index(Iterator first, Iterator last,int r,TernaryOperation p)
{
    int* element = first;
    int temp = p(*first, *first + 1, r);
    first = first + 2;
    for(; first != last - 1; ++first)
    {
        if(p(*first, *(first + 1), r) < temp)
        {
            element = first;
        }
    }
    return element;
}*/



#endif // OPERATIONS_H_INCLUDED
