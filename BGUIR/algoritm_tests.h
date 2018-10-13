#ifndef ALGORITM_TESTS_H_INCLUDED
#define ALGORITM_TESTS_H_INCLUDED
#include "algoritm.h"
#include <cassert>
#include "tasks.h"
void test_accumulate()
{
    int array[5]{3, 5, 7, 9, 11};
    assert(35 == accumulate_(array, array + 5, 0, [](int a, int b){return a + b;}));
}
void test_sum_min_max()
{
    int array[5]{3, 5, 7, 9, 11};
    assert(14 ==sum_min_max(array, array + 5));
}
void test_average_task5()
{
    int array[5]{3, 5, 7, 9, 11};
    assert(7==average_task5(array,array + 5));
}



#endif // ALGORITM_TESTS_H_INCLUDED
