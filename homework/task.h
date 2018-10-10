#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED
#include <cmath>
//using UnaryPredicate = bool(*)(double,double,double);
double f(double f, double m)
{
    return m = f / 3.28;
}
void task3()
{
system("mode con cols=80 lines=25");
    for(int i = 0; i < 80; i++)
        std::cout << "_";
    std::cout << std::endl;

    std::cout << " 1      | f  |       =      0.304878        | m |\n";

    for(int i = 0; i < 80; i++)
        std::cout << "_";
    std::cout << std::endl;
}
double discriminant(double a, double b, double c)
{
    double d = pow(b,2) - 4*a*c;
    if(d < 0)
    {
        return false;
    }
    if(d == 0)
    {
        return -b/(2*a);
    }

}




#endif // TASK_H_INCLUDED
