#include <iostream>
#include "algorithm.h"
#include "print.h"
#include "operations.h"
#include "fill.h"
#include "util.h"
using namespace std;

int main()
{
    //int arr[10]{1,2,4,-3,-7,-8,26,354,10,11};
    //Pair<VInt,VInt> result = transform_array_(arr,10,[](int a){return a < 0;});
    //print_array(result.first.begin(),result.first.end());
    //print_array(result.second.begin(),result.second.end());
    Get_Fibonachi a;
    //std::cout << a.fibs.size();
    for(int i = 0; i < 10; ++i)
    {
        std::cout << a() << std::endl;
    }
    //int arr[5]{0};
    //fill_array(arr,5,f1,1,2);
    //print_array(arr,5);
    //print_array(arr,5);
    //accumulate(array,array + 5, 0,)
    return 0;
}
