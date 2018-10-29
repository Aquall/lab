#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED
#include <vector>
/*using VInt = std::vector<int>;
template <typename T>
struct Arrays
{
    T* arr1;
    int size1 = 0;
    T* arr2;
    int size2 = 0;

};
template <typename T1,typename T2>
struct Pair
{
    T1 first;
    T2 second;
};
template <typename UnaryPredicate>
Arrays<int> transform_array(int* arr, int size, UnaryPredicate p)
{
    Arrays<int> result;
    result.arr1 = new int [size];
    result.arr2 = new int [size];
    int j = 0;
    int k = 0;
    for(int i = 0; i < size; ++i)
    {
        if(p(arr[i]))
        {
            result.arr1[j] = arr[i];
            j++;
            result.size1++;
        }
        else
        {
            result.arr2[k] = arr[i];
            k++;
            result.size2++;
        }
    }
    return result;
}

template <typename UnaryPredicate>
Pair<VInt,VInt> transform_array_(int* arr, int size,UnaryPredicate p)
{
    Pair<VInt,VInt> result;
    for(int i = 0; i < size; ++i)
    {

        if(p(arr[i]))
        {
            result.first.push_back(arr[i]);
        }
        else
        {
            result.second.push_back(arr[i]);
        }
    }
    return result;
}*/


#endif // UTIL_H_INCLUDED
