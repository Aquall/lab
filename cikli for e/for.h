#ifndef FOR_H_INCLUDED
#define FOR_H_INCLUDED
#include <cmath>
using namespace std;

int sum_numbers(int sum)
{
    for (int i=50; i<=100; ++i)
    {
        sum+=i;
    }
    return sum;
}
double for10(double temp)
{
    for(double i = 1; i <= 5; i++)
    {
        temp = temp + 1/i;
    }
    return temp;
}
double for11(double temp)
{
    for(int i = 1; i <= 5; i++)
    {
        temp = pow(temp + i,2);
    }
    return temp;
}
double for12(double temp)
{
    for(double i = 1.1; i < 2; i = i + 0.1)
    {
        temp = temp * i;
    }
    return temp;

}
double for13(double temp, double result)
{
    for(double i = 1.1; i < 1.5; i = i+0.1)
    {
        temp = temp + i;
    }
    return result;
}
int for14(int temp)
{

    for(int i = 1; i < (2*3-1); i = i + 2)
    {
        temp = temp + i;
    }
    return temp;
}
int for15(int value, int power)
{
    for(int i = 0; i <= power; ++i)
    {
        value = i*i;
    }
    return value;
}


#endif // FOR_H_INCLUDED
