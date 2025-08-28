#include<iostream>
using namespace std;
int main()
{
    float l, b;
    cout<<"enter the value of l"<<endl;
    cin>>l;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the area of rectangle is :"<<l*b<<endl;
    cout<<"the greatest number among l and b is :"<<endl;
    if(l>b)
    {
        cout<<"l is greater"<<l<<"<"<<b<<endl;
    }
    else if(l=b)
    {
        cout<<"it is not a rectangle it is a square"<<endl;
    } 
    else
    {
        cout<<"b is greater than l"<<l<<"<"<<b<<endl;
    }
    return 0;
}  