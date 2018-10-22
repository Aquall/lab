#include <iostream>

using namespace std;

namespace stu
{
void print_array(int* first,int* last)
{
    for(; first!=last; ++ first)
    {
        std::cout << *first << std::endl;
    }
}
template <class T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;

}
void iter_swap(int* a, int* b)
{
    swap(*a, *b);
}
template <class BinaryPredicate, class Iterator>
void buble_sort(Iterator arr,int size,BinaryPredicate p)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = 0; j != size - i - 1; ++j)
        {
            if(p(arr[j],arr[j + 1]))
            {
                stu::swap(arr[j],arr[j + 1]);
            }
        }
    }
}
    bool less(int a, int b)
    {
        return a < b;
    }
}

int main()
{

    //int a = 1;
    //int b = 2;
    //stu::swap(a,b);
    //stu::iter_swap(&a, &b);
    int arr[5] {1,3,2,5,4};
    stu::buble_sort(arr,5, stu::less);
    stu::print_array(arr, arr + 5);
    return 0;
}
