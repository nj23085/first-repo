#include<iostream>
using namespace std;
int main()
{
    //basic example of pointer
    int a=4;
    int* ptr=&a;
    cout<<"the value of a is "<<*(ptr)<<endl;

    //new keyword
    int *p =new int(40);
    cout<<"the value at address p is "<<*(p)<<endl; 
    return 0;
}