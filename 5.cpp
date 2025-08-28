#include <iostream>
using namespace std;
int main()
{ 
    int a = 45;
    int b = 18;
    int r, sum;
    float pi = 3.14;
    float area;
    cout << "The value of a is : " << a << endl
         << "The value of b is : " << b << endl;
    cout << "enter the value of r" << endl;
    cin >> r;
    sum = a + b;
    area = pi * r * r;
    cout << "the sum of a and b is : " << a << "+" << b << "=" << sum << endl;
    cout << "the area of circle is : " << pi << "*" << r << "*" << r << "=" << area << endl;
    return 0;
}