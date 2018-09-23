#include <iostream>
using UnaryPredicate = bool(*)(int);
namespace stu
{
bool is_positive(int value)
{
    return value > 0;
}
bool is_even(int value)
{
    return value % 2 == 0;
}

bool all_of(int* arr, int first, int last,UnaryPredicate p)
{
    for(; first < last; ++first)
    {
        if(!p(arr[first]))
        {
            return false;
        }
    }
    return true;

}
}

int main()
{
    int arr[5] {6,4,-2,32,2};
    std::cout << stu::all_of(arr,0,5,stu::is_even) << std::endl;

    return 0;
}
