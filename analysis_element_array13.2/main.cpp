#include <iostream>
#include "algorithm.h"
#include "predicates.h"
#include "tasks.h"

using namespace std;

int main()
{
    int arr[10]{1,2,3,3,3,3,3,3,3,3};
    //task_48();
    int* same = counter(arr,arr + 10, same);
    for_each(arr, arr + 10,[same](int a)
    {
        std::cout << a << std::endl;
    });
    cout << vlad_pidor(arr,arr + 10);
    return 0;
}
