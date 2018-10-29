#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

void f3(const char* str)
{
    int arr[127] {0};
    for(; *str != 0; ++str)
    {
        ++arr[*str];
    }
    for(int i = 0; i < 128; ++i)
    {
        std::cout << (char)i << " " <<arr[i] << std::endl;
    }
}
void f3_1(const char* str, char* dest, char c)
{
    for(;src != 0; ++src)
    {
        if(*src != c)
        {

        }
    }
}
void f3_1(const char* str,char* dest,char c)
int f7(const char* str)
{
    int arr[127] {0};
    int max_counter = 0;
    char s = 0;
    int counter = 0;
    for(; *str != 0; ++str)
    {
        if(*str == *(str + 1))
        {
            ++counter;
        }
        else
        {
            if(counter > max_counter)
            {
                max_counter = counter;
                s = *str;
            }
            counter = 0;
        }
    }
    return max_counter;
}
void f8(const char* str)
{
    int arr[127] {0};
    for(; *str != 0; ++str)
    {
        ++arr[*str];
    }
    for(int i = 0; i < 128; ++i)
    {
        std::cout << (char)i << " " <<arr[i] << std::endl;
    }
}

void f8_1(const char* src, char* dest, char c)
{
    for(; *src ; ++src)
    {
        if(*src != c)
        {
            *dest = *src;
            ++dest;
        }
    }
    *dest = 0;
}

#endif // ALGORITHM_H_INCLUDED
