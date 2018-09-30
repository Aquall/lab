#ifndef MASIV_H_INCLUDED
#define MASIV_H_INCLUDED
#include <cmath>
using namespace std;
void iota(int* first,int* last,int value)
{
    while(first!=last)
    {
        *first = value;
        ++value;
        ++first;
    }
}
template <typename Iterator>
void print_arr( Iterator first,Iterator last)
{
    for(; first!=last; ++first)
    {
        cout << *first << endl;
    }
}
void task_arr(int* first,int* last,int k)
{
    for(; first!=last; first += k)
    {
        cout << *first << endl;
    }
}
void print_array15_not_even(int* arr,int size)
{
    for(int i = size - 1; i > -1; i += 2)
    {
        cout    <<      arr[i]        << endl;
    }
}
void print_array15__even(long long int* arr,int size)
{
    for(int i = 1; i<size; i += 2)
    {
        cout << arr[i] << endl;
    }
}
void fill_fibonachi(long long int* arr,int times)
{
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2;i < times; ++i)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
}




#endif // MASIV_H_INCLUDED
