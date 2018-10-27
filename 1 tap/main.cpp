#include <iostream>

using namespace std;
bool less_(int a, int b)
{
    return a < b;
}
template <typename UnaryPredicate>
int find_index(int* arr, int first, int last,UnaryPredicate op)
{
    int el = arr[first];
    int index_el = first;
    for(; first < last; ++first)
    {
        if(op(arr[first],el))
        {
            el = arr[first];
            index_el = first;
        }
    }
    return el;
}
int accumulate(int* arr, int first, int last)
{
    int sum = 0;
    for(; first < last; ++first)
    {
        sum += arr[first];
    }
    return sum;
}
int main()
{
    int arr[5]{9,-30,2,1,8};
    int min_el = find_index(arr,0,5,less_);
    cout << accumulate(arr,min_el,5) << endl;
    return 0;
}
