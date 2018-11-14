#include <iostream>

using namespace std;
template <class T>
struct Sum
{
    T result = 0;
    void operator()(T value)
    {
        result += value;
    }
};

template <typename Iter, typename Functor>
Functor for_each_(Iter first, Iter last, Functor f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}
int main()
{
    Sum<int> sum;
    Sum<int> sum_even;
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < 10; ++i)
    {
        sum(arr[i]);
        if(arr[i] % 2 == 0)
        {
            sum_even(arr[i]);
        }
    }
    std::cout << sum.result << std::endl;
    std::cout << sum_even.result << std::endl;
    for_each_(arr, arr + 10, [](int a){std::cout << a << " ";});
    auto result = for_each_(arr, arr + 10, Sum<int>());
    std::cout << result.result << std::endl;
    return 0;
}
