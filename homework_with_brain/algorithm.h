#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
#include <cmath>

template <typename T, typename Iterator, typename BinaryOperation>
T accumulate(Iterator first, Iterator last, T init, BinaryOperation op)
{
    for(;first != last; ++first)
    {
        init = op(init,*first);
    }
    return init;
}
template <typename T, typename Iterator>
T average(Iterator first, Iterator last)
{
    return (accumulate(first, last, 0,[](int a, int b){return a + b;}))
     / (last - first);
}
int f(int a, int d, int i)
{
    return a + d * i;
}
int f1(int a, int d, int i)
{
    return a * std::pow(d,i);
}





#endif // ALGORITHM_H_INCLUDED
