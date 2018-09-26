#include <iostream>
#include <cmath>

using namespace std;
double f(double x, double y,double z)
{
    double num = pow(x,y*sqrt(x)) * 0.5 * pow(x,y*x+4);
    double num1 = pow(y,1.0/(2*sin(x)));
    double num2 = pow(num1,cos(x));
    double num3 = abs(x) * num2;
    double result = num/num3;
    return result;
}

int main()
{
    cout << f(1,1,1);
    return 0;
}
