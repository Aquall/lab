#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
int sum_(int a, int b)
{
    return a + b;
}
int sum_positive(int a, int b)
{
    if(b > 0)
    {
        return a + b;
    }
    return a;
}

int abs_negative(int a, int b)
{
    if(b < 0)
    {
        return std::abs(a) + std::abs(b);
    }
    return a;
}

int mul_negative(int a, int b)
{
    if(b < 0)
    {
        return a * b;
    }
    return a;
}

int mul_is_even(int a, int b)
{
    if(a % 2 ==0)
    {
        return a * b;
    }
    return a;
}

int sum_negativ(int a, int b)
{
    if(b < 0)
    {
        return a + b;
    }
     return a;
}
int pow_(int value, int power)
{
    int temp = 1;
    for(int i = 0; i < power; ++i )
    {
        temp = temp * value;
    }
    return temp;
}

#endif // FUNCTIONS_H_INCLUDED
