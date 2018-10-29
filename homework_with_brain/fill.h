#ifndef FILL_H_INCLUDED
#define FILL_H_INCLUDED
#include <vector>
struct Get_Fibonachi
{
    std::vector<int> fibs;
    int counter;
    Get_Fibonachi()
    {
        counter = 0;
        fibs.push_back(0);
        fibs.push_back(1);
    }
    int operator()()
    {
        fibs.push_back(fibs[counter] + fibs[counter + 1]);
        return fibs[counter++];
    }

};
template <typename T,typename TernaryOperation>
void fill_array(T* arr, int size, TernaryOperation p, T a, T d)
{
    for(int i = 0; i != size; ++i)
    {
        arr[i] = p(a,d,i);
    }
}
int get_fibonachi(int value)
{
    return value * 2;
}
template <typename T,typename UnaryPredicate>
void fill_array(T* arr, int size, UnaryPredicate op)
{

}



#endif // FILL_H_INCLUDED
