#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED
#include <iostream>
#include "Predicates.h"
#include "Tests.h"
#include "algoritm.h"
#include "algoritm_tests.h"
#include "predicates_tests.h"
#include "functions_tests.h"
int average_task5(int* first, int* last)
{
    int temp  = accumulate_(first,last,0,sum_);
    return temp/ (last - first);
}
void task6(int* first, int* last)
{
    int* min_el = search_(first, last, min_);
    int* max_el = search_(first, last, max_);
    std::cout << "value :" << *min_el << "   index   " << min_el - first << std::endl;
    std::cout << "value :" << *max_el << "  index  " << max_el - first << std::endl;
}
int task7(int* first, int* last)
{
    int* min_el = search_(first, last, min_);
    int* max_el = search_(first, last, max_);
    return std::abs(max_el - min_el) - 1;
}
int average_task8(int* first, int* last)
{
    int temp  = accumulate_(first,last,0,sum_);
    return temp/ (last - first);
}



#endif // TASKS_H_INCLUDED
