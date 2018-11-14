#include <iostream>
#include "test.h"
#include "algorithm.h"

using namespace std;
using UP = bool(*)(int);

bool is_even(int a)
{
    return a%2 == 0;
}
int* find_if(int* first, int* last, UP p)
{
    for(; first != last; ++ first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}
int main()
{
    //test();
    //test1();
    test2();
    /*int arr[10]{1,9,3,4,5,6,7,8,9,10};
    int arr2[]
    cout << "Hello world!" << endl;*/
    return 0;
}
