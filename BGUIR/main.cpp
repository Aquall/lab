#include <iostream>
#include "Predicates.h"
#include "Tests.h"
#include "algoritm.h"
#include "algoritm_tests.h"
#include "predicates_tests.h"
#include "functions_tests.h"
struct Pair
{
    int first;
    int second;
};
/*Pair task1(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 0, sum_positive);
    result.second = accumulate_(first, last, 1, mul_negative);
    return result;
}

Pair task2(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 1, mul_is_even);
    result.second = accumulate_(first, last, 0, sum_negativ);
    return result;
}

Pair task3(int* first, int* last)
{
    Pair result;
    result.first = accumulate_(first, last, 0, sum_positive);
    result.second = accumulate_(first, last, 1, abs_negative);
    return result;
}*/
 int factorial( int value)
{
    int temp = 1;
    for(int i = 1; i <= value; ++i)
    {
        temp = temp * i;
    }
    return temp;
}
int main()
{
    /*int arr[6]{1,3,-2,-1,4,30};
    test_accumulate();
    test_min_();
    test_abs_negative();
    test_average_task5();
    task6(arr,arr + 6);
    std::cout << task7(arr, arr + 6) << std::endl;*/
    //std::cout << pow_(2,3);
    std::cout << factorial(20) << std::endl;

    return 0;
}
