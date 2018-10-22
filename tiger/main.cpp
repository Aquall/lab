#include <iostream>
#include "predicates.h"
#include "algorithms.h"
struct Pair
{
    int first;
    int second;
};
int main()
{

    int arr[10]{-4,-35,-40,0,0,-17,0,-20,-3,-100};
    //Vector result1;
    //Vector result2;
    //fill_arrays(arr,result1,result2,10,is_negative);
    //result1.print();
    //result2.print();
    //Vector result = f(arr,10);
    //result.print();
    //bubble_sort(arr,10,min_abs);
    // print_array(arr,0,10);
    //int temp = search(arr,10,min_abs);
    //int result3 = count(arr,10,temp);
    //std::cout << result3 << std::endl;
    //std::cout<< none_of(arr,10,0) << std::endl;
    //std::cout << task8(arr,10,mul_negative) << std::endl;
    Pair result;
    result.first = accumulate(arr, 10, is_even);
    result.second = accumulate(arr, 10, is_not_even);\
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;
    return 0;
}
