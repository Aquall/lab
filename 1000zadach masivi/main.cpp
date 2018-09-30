#include <iostream>
#include "masiv.h"

using namespace std;


int main()
{
    long long int arr[300];
    //iota(arr,arr+50,100);
    fill_fibonachi(arr,300);
    print_arr(arr,arr+300);
    //task_arr(arr,arr+50,10);
    //print_array15_not_even(arr,10);
    //print_array15__even(arr,10);
    return 0;
}
