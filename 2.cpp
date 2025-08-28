#include<iostream>
using namespace std;
int main()
{
    float a,b,sum,subtract,multiply;
    float divide;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    sum=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;
    cout<<"the sum of a and b is : "<<a<<"+"<<b<<"="<<sum<<endl;
    cout<<"the difference of a and b is : "<<a<<"-"<<b<<"="<<subtract<<endl;
    cout<<"the product of a and b is : "<<a<<"*"<<b<<"="<<multiply<<endl;
    cout<<"the division of a and b is : "<<a<<"/"<<b<<"="<<divide<<endl;

    return 0;
}