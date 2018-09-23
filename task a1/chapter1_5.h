#ifndef CHAPTER1_5_H_INCLUDED
#define CHAPTER1_5_H_INCLUDED
#include <iostream>
#include <cmath>

namespace stu
{
template <typename T>
T max(T x,T y)
{
    if(x >= y)
    {
        return x;

    }
    return y;
}
template <typename T>
T max3(T x,T y,T z)
{

    return stu::max<T>(stu::max<T>(x,y),z);


    return y;
}
template <typename T>
T min(T x,T y)
{
    if(x <= y)
    {
        return x;
    }
    return y;
}
template <typename T>
T min3(T x,T y,T z)
{
    return stu::min<T>(stu::min<T>(x,y),z);
}
double f2(double x, double y, double z)
{
    double num = std::pow(stu::max3<double>(x,y,z),2) - std::pow(2,x)*stu::min3<double>(x,y,z);
    double denum = std::sin(2) + stu::max<double>(x,y) / stu::min<double>(x,y);
    return num / denum;
}
bool is_triangle_exist(int side1, int side2, int side3)
{
    return (side1 < side2+side3) && (side2 < side1+side3) && (side3 < side1 + side2);
}
bool is_acute_triangle(double side1, double side2, double side3)
{
    return (side1 < pow(side2+side3,2)) && (side2 < pow(side1+side3,2)) && (side3 < pow(side1 + side2,2));
}
void f3(double x, double y, double z)
{
    if(is_triangle_exist(x,y,z))
    {
        std::cout << "triangle is exist , ";
        if(is_acute_triangle(x,y,z))
        {
            std::cout << "triangle is acute" << std::endl;

        }
        return;
    }
    std::cout << "triangle is not exist and is not acute " << std::endl;
}
double f5(double x, double y, double z)
{
    if(x+z+y < 1)
    {
        return min3(x,y,z);
    }
    return 0;
}
}







#endif // CHAPTER1_5_H_INCLUDED
