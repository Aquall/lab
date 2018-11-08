#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include "algorithm.h"
#include "data_types.h"
#include "predicates.h"
#include <cassert>
#define Arr int arr[10]{7,2,3,4,-5,6,9,8,9,10}
#define PairArr Pair arr[10]{Pair(2,9),Pair(2,10),Pair(2,11),Pair(3,12),\
Pair(5,6),Pair(7,25),Pair(10,9),Pair(4,-3),Pair(-13,13),Pair(11,-121)}

void task1()
{
    Arr;
    int* min_el = find_element(arr,arr + 10,[](int a, int b)
    {
        return a < b;
    });
    int* max_el = find_element(arr,arr + 10,[](int a, int b)
    {
        return a > b;
    });
    assert (min_el == arr + 4);
    assert (max_el == arr + 9);
}
void task2()
{
    PairArr;
    Pair* min_sqrt = find_element(arr,arr + 10,less_sqrt);
    assert (min_sqrt == arr + 9);
}
void task3()
{
    PairArr;
    Pair* max_sqrt = find_element(arr,arr + 10,greater_sqrt);
    assert (max_sqrt == arr + 5);
}
void task4()
{
    Arr;
    int* min_el = find_element(arr,arr + 10,[](int a, int b)
    {
        return a < b;
    });
    assert(min_el == arr + 4);
}
void task5()
{
    PairArr;
    Pair* max_number = find_element(arr,arr + 10,max_density);
    assert (max_number == arr + 6);
}
void task6()
{
    Arr;int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });
    int* min_el = find_eleint min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });ment(arr, arr + 10,[](int a, int b)
    {
        return a < b;int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });
    });
    int* max_el_end = reverse_find_element(arr, arr + 10,
                               int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });            [](int a, inint min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });t b)
    {int min_el = find_element_( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });
        return a > b;
    });
    assert (min_el == arr + 4);
    assert (max_el_end == arr + 9);
}
/*void task7()
{
    Arr;
    int* min_index = find_index_element(arr, arr + 10,
                                        [](int a, int b)
    {
        return a < b;
    });
    int* max_index = find_index_element(arr, arr + 10,
                                        [](int a, int b)
    {
        return a > b;
    });
    assert (min_index == 4);
    assert (max_index == 9);
}*/
void task12()
{
    Arr;
    int* min_positive_number =  find_element(arr, arr + 10,min_positive);
    assert (min_positive_number == arr );
}
void task13()
{
    Arr;
    int* min_positive_number =  find_element(arr, arr + 10,max_not_even);
    assert (min_positive_number == arr + 6);
}
/*void task14()
{
    Arr;
    int* temp =  find_element(arr, arr + 10,greater_min);
    assert (temp == arr + 3);
}*/
void task16()
{
    Arr;
    int* min_el = find_element( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });
    int* counter_ = counter(arr, min_el);
    assert (counter == 3);
}
void task17()
{
    Arr;
    int* max_el = find_element( arr , arr + 10, [](int a, int b)
    {
        return a > b;
    });
    int* counter_ = counter(arr, min_el);
    assert (counter == 0);
}
void task18()
{
     Arr;
    int* max_el = find_element( arr , arr + 10, [](int a, int b)
    {
        return a > b;
    });
    int* min_el = find_element( arr , arr + 10, [](int a, int b)
    {
        return a < b;
    });
    int* counter_ = counter(min_el, min_el);
    assert (counter == 4);
}



#endif // TASKS_H_INCLUDED
