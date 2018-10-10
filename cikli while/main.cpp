#include <iostream>
#include <cmath>


namespace stu
{
int pow(int value, int power)
{
    int result = 1;
    int i = 0;
    while(i<power)
    {
        result *= value;
        ++i;
    }
    return result;
}

int fuctorial(int value)
{
    int result = 1;
    int i = 1;
    while (i<value+1)
    {
        result *= i;
        ++i;

    }
    return result;
}
void print_numbers_revers( int value)
{
    while(value)
    {
        std::cout << value%10;
        value/=10;
    }

}
int reverse_number(int value)
{
    int temp = 0;
    while (value)
    {
        temp = temp*10;
        temp = temp+value%10;
        value = value/10;
    }
    return temp;
}
void print_square(int width, int height)
{
    for(int i = 0; i<height; ++i)
    {
        for(int j = 0; j<width; ++j)
        {
            std::cout<<"*";
        }
        std::cout << std::endl;
    }
}
void print_triangle( int height)
{
    for(int i = 1; i<height; ++i)
    {
        for(int j = 0; j<i; ++j)
        {
            std::cout<<"*";
        }
        std::cout << std::endl;
    }
}
void pythagoras_table(int column, int row )
{
    for(int i = 1; i<column; ++i)
    {
        for( int j = 1; j<row; ++j)
        {
            std::cout << i*j << " " ;
        }
        std::cout <<  std::endl;

    }
}
}

int main()
{
    stu::print_numbers_revers(1456);
    stu::print_square(5,5);
    std::cout << stu::fuctorial(5);

    return 0;
}
