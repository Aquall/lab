#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include "algorithm.h"
#include "data_types.h"
#include <cassert>
#define Arr int arr[10]{1,2,3,4,-5,6,9,8,9,10}
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

}
void task4()
{
    Arr;
    int* min_el = find_element(arr,arr + 10,[](int a, int b){return a < b;});
    assert(min_el - arr== 4);
}
void task5()
{
    PairArr;
    Pair* max_number;//........
}
void task6()
{
    Arr;
    int* min_el = find_element(arr, arr + 10,[](int a, int b){return a < b;});
    int* max_el_end = reverse_find_element(arr, arr + 10,
    [](int a, int b){return a > b;});
    assert (min_el = arr + 4);
    assert (max_el_end = arr + 9);
}

#endif // TASKS_H_INCLUDED
