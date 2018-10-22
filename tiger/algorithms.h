#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <iostream>
#include "vector.h"
void print_array(int* arr, int first, int last)
{
    for(; first != last; ++first)
    {
        std::cout << arr[first] << " ";
    }
    std::cout << std::endl;
}
template <typename BinaryPredicate>
void fill_arrays(int* arr, Vector& result1, Vector& result2, int size, BinaryPredicate p)
{
    int j = 0;
    int k = 0;
    for(int i = 0; i < size; ++i)
    {
        if(p(arr[i]))
        {
            result1.push_back(arr[i]);
        }
        else
        {
            result2.push_back(arr[i]);
        }
    }
}
Vector f(int* arr, int size)
{
    Vector result;
    for(int i = 0; i < size; i = i + 2)
    {
        result.push_back(arr[i]);

    }
    for(int i = 1; i < size; i = i + 2)
    {
        result.push_back(arr[i]);

    }
    return result;
}
template <typename BinaryPredicate>
void bubble_sort(int* arr,int size, BinaryPredicate op)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size - 1 - i; ++j)
        {
            if(op(arr[j],arr[j+1]))
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
template <typename BinaryPredicate>
int search(int* arr, int size, BinaryPredicate p)
{
    int element = arr[0];
    int index_element = element;
    for(int i = 0; i < size; ++i)
    {
        if(p(arr[i],element))
           {
             element = arr[i];
             index_element = i;
           }
    }
    return element;
}
int count(int* arr,int size, int value)
{
    int counter = 0;
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] == value)
        {
        counter++;
        }
    }
    return counter;
}
int none_of(int* arr, int size,int value)
{
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] == value)
        {
            return false;
        }

    }
    return true;
}
template <typename BinaryPredicate>
int task8(int* arr, int size, BinaryPredicate p)
{
    for(int i = 0; i < size - 1; ++i)
    {
        if(p(arr[i],arr[i+1]))
        {
            return i;
        }
    }
    return -1;
}
template <typename UnaryPredicate>
int accumulate(int* arr, int size, UnaryPredicate p)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        if(p(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

#endif // ALGORITHMS_H_INCLUDED
