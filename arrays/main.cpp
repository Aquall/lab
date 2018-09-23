#include <iostream>
#include "algorithms.h"
#include "predicates.h"
using namespace std;
using UnaryPredicate = bool(*)(int);
using BinaryOperation = int(*)(int,int);
namespace stu
{

}
int main()
{
    int arr[5] {6,4,-2,32,2};
    std::cout<<stu::all_of(arr,arr+5,stu::is_positive) << std::endl;
    //cout << arr;
    //std::cout << stu::accumulate_(arr,1,4,1000,[](int a, int b){return a + b;}) << std::endl;

    return 0;
}
