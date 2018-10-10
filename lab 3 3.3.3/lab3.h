#ifndef LAB3_H_INCLUDED
#define LAB3_H_INCLUDED
#include <cmath>
bool first_task(int a)
{
    if(a<=9 && a%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool second_task(int a, int b)
{
    if(a>0 || b>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int discharge_counter(int a)
{
    int counter = 0;
    for (; a; a /= 10 )
    {
        counter = counter + 1;
    }
    return counter;
}
bool third_task(int a)
{
    if(discharge_counter(a)==5 && a<0)
    {
        return true;
    }
    else
    {
        return false ;
    }
}
int last_number(int a)
{
    return a%10;
}
bool fourth_task(int a)
{
    if(discharge_counter(a)==3 && last_number(a)!= 3 )
    {
        return a+1;
    }
    else
    {
        return false;
    }
}
void fifth_task()
{
    std::cout << "the module is always positive, incorrect task((";
}







#endif // LAB3_H_INCLUDED
