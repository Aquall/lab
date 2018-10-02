#include <iostream>

using namespace std;
void task3()
{
    system("mode con cols=70 lines=25");
    for(int i = 0; i < 70; i++)
        cout << "_";
    cout << endl;

    cout << " 1  \t | f \t |  = \t  0.304878 \t | m |\n";

    for(int i = 0; i < 70; i++)
        cout << "_";
    cout << endl;
}
int main()
{
   task3();
    return 0;
}
