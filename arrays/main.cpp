#include <iostream>
#include "algorithms.h"
#include "predicates.h"
using namespace std;
int main()
{
    int arr[5] {6,4,-2,32,2};
    std::cout << stu::all_of(arr,0,5,stu::is_even) << std::endl;

    return 0;
}
