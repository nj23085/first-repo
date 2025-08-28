#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
        cout<<"the table is : "<<endl;
    do
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
        
    } while (i<=10);
    
    return 0;
}