#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
template <typename Iterator>
void print_array(Iterator first, Iterator last)
{
    for(; first < last; ++first)
    {
        std::cout << *first << " ";
    }
}
template <typename T,typename UnaryOperation>
void print_if(T* arr,int size,UnaryOperation p)
{
    for(int i = 0; i != size; ++i)
    {
        if(p(arr[i]))
        {
            std::cout << arr[i] << " ";
        }
    }
}
template <typename T,typename UnaryOperation>
void print_step(T* arr, int size, UnaryOperation op)
{
    for(int i = 0; i < size; i = op(i))
    {
        std::cout << arr[i] << " ";
    }
}

#endif // PRINT_H_INCLUDED
