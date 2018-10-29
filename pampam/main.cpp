#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void print_arr(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
}
void lhs(int* arr, int first, int last)
{
    for(; first != last - 1; ++first)
    {
        arr[first] = arr[first + 1];
    }
    arr[last - 1] = 0;
}
std::string to_binary(int value)
{
    std::string result;
    for(; value != 0 ; value = value >> 1 )
    {
        result.push_back((value &1) + '0');
    }
    std::reverse(result.begin(),result.end());
    return result;
}
char to_hex_digit(int value)
{
    if(value < 10)
    {
        return value + '0';
    }
    switch(value)
    {
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    }
}
std::string to_hex(int value)
{
    std::string result;
    for(; value != 0; value = value >> 4)
    {

       result.push_back(to_hex_digit(value &15));
    }
    std::reverse(result.begin(),result.end());
    return result;
}
int main()
{
    int arr[8] {0,1,1,0,0,0,1,0};
    //lhs(arr,0,8);
    //print_arr(arr,8);
    //cout << to_binary(1349) << endl;
    cout << to_hex(1336);
    //int result = 1 << 2;
    //cout << result << endl;
    return 0;
}

