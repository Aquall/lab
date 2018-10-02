#include <iostream>
#include <cmath>

using namespace std;
using BinaryOperation = int (*)(int, int);
int accumulate_ (int* array ,int result, int first, int last, BinaryOperation p)
{
    for(;first<last;++first)
    {
        result = p(result,array[first]);
    }
    return result;

}
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int arr[5]{1,6,4,5,3};
    int result = accumulate_(arr, 0, 2, 5, sum);
    cout << result << endl;
    return 0;
}
