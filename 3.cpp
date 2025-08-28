#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number of which you want the multiplication table of :"<<endl;
    cin>>a;
    cout<<"the multiplication table is as follows :"<<endl;
    for (int i = 1; i <= 10; ++i)
    {
        
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    
    return 0;
    
}