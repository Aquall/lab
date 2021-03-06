#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
#include "algorithm.h"
#include <vector>
#define Vec std::vector<int> v(1,2,3,4,5);
#define Arr int arr[2][5]{{2,2,2,12,15},{2,2,2,2,25}};

/*void test()
{
    Arr;
        for(int i = 0; i < 2; ++i)
        {
            for(int j = 0; j < 5; ++j)
            {
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }

        for(int i = 0; i < 10; ++i)
        {
            if(i == 5)
            {
                std::cout << std::endl;
            }
            std::cout << arr[0][i] << " ";
        }
}*/
void test1()
{
    Arr;
    for(int i = 0; i < 5; ++i)
    {
        arr[1][i] *= 10;
    }
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void test2()
{
    Arr;
    int counter = 0;
    for(int i = 0; i != 2; ++i)
    {
        int* max_el = stu::find_max(*(arr + i),*(arr + i) + 5, stu::greater<int> );
        int temp = stu::accumulate(*(arr + i), max_el,[](int a, int b){return a + b;},0);
        std::cout << *max_el << " " << temp << std::endl;
        //std::cout << temp - *max_el << " ";
        if(temp - *max_el < *max_el)
        {
            ++counter;
        }
    }
    std::cout << counter;
}


#endif // TEST_H_INCLUDED
