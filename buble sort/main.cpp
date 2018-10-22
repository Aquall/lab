#include <iostream>

using namespace std;
int swap_(int * a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int* array, int first, int last)
{
    for(; first < last; ++first)
    {
        cout << array[first] << endl;
    }
}
void bubble_sort(int* array, int size)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = 0; j < size - i - 1; ++j)
        {
          if(array[j] < array[j + 1])
          {
             swap_(array + j, array + j + 1);
          }
        }
    }
}

int main()
{
    int a = 4;
    int b = 5;
    int array[5]{12,3,5,7,6};
    //swap_(&a, &b);
    //std::cout << a << " " << b << endl;
    bubble_sort(array,5);
    print_array(array,0,5);


    return 0;
}
