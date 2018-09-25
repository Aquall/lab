#ifndef MY_LIB_H_INCLUDED
#define MY_LIB_H_INCLUDED
#include <iostream>
bool is_even(int a)
{
    return a%2==0;

}
bool is_positive(int a)
{
    return a>0;

}
bool f(int b)
{
    return is_even(b)|| is_positive(b);
}
int get_digit(int value)
{
    return value%10;
}
bool f1(int a, int b)
{
    return !is_even(a)|| !is_even(b);

}
bool f2(int a, int b)
{
    return !is_even(a)^!is_even(b);
}
bool f4(int a, int b,int c)
{
    return (a==b)|| (a==c) || (b==c);
}
bool f5(int a, int b,int c)
{
    return (a==(-b))|| (a==(-c)) || (b==(-c));
}
bool f6(int a)
{
    return (a%10)<((a/10)%10);
}
int min_value(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
int min_value3(int a, int b, int c)
{
    return min_value (min_value(a,b),c);
}
bool f3(int a)
{
    return (get_digit(a)==4)&&is_positive(a);

}
bool is_3digit(int a)
{
    return (a/100 <= 9) && (a/100 >= 1);
}
bool is_multiply(int a,int b)
{
    return a%b==0;
}
bool f8( int a)
{
    return is_positive (a) && is_3digit(a);

}
bool f9(int a)
{
    return is_positive(a) && is_even(a);
}
void f10 (int b)
{
    if(f9(b))
    {
        std::cout<<b+1<<std::endl;
    }
    else
    {

        std::cout<<b<<std::endl;
    }
}
bool f11 (int a)
{
    return is_3digit(a) && (get_digit (a) == 3);
}
bool f12 (int c)
{
    if (f11(c))
    {
        std::cout<<"Hello"<<std::endl;
    }
    else
    {

        std::cout<<"World"<<std::endl;
    }
}
bool f13(int a)
{
    return is_multiply(a,4) || (a==10);
}

bool f14(int a, int b, int c){
return a==b==c==10;
}
double sqaure(double side)
{
    return side*side;
}
double perimeter (double side)
{
    return side*4;
}
double hipotinyze (double a, double b)
{
    double temp = pow(a,2)+pow(b,2) ;
    return sqrt(temp);
}
double get_sqaure diagonal (double side)
{
    return side*sqrt(2);
}
bool f15 (int a,int b,)
{
    return is_even (a) && is_even (b);
}

#endif // MY_LIB_H_INCLUDED
