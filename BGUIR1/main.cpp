#include <iostream>

using namespace std;
int sum_array(int* first,int* last)
{
    int sum = 0;
    for(;first != last; ++first)
    {
        if(*(first + 1) == 0)
        {
            sum = sum + *first;
        }
    }
    return sum;
}
int main()
{
   int arr[5]{1,2,3,-2,5};
   cout << sum_array(arr,arr + 5) << endl;
    return 0;
}
