//inheritance in c++
/*--Inheritance allows us to reuse the code 
written inside any class
--Reusing classes saves time and money.
--Reusability is supported using inheritance
--We can reuse the properties of an existing class
by inheriting from it.
--Existing class is called as base class.
--Inherited class is called as derived class.
--Single inheritance:-
one base class ----> one derived class
--Multiple inheritance:-
more than one base class ----> one derived class
--Hierarchial inheritance:-
one base class ----> more than one derived class
--Multilevel inheritance:-deriving a class from already derived class 
one base class ----> one derived class ----> one derived class
ex. animal ---> mammal ----> cow
--Hybrid inheritance:- combination of multiple and
multilevel inheritance

*/


#include<iostream>
using namespace std;
int main()
{
    int n,remainder,reversedNum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    while (n!=0)
    {
        remainder = n%10;
        reversedNum=reversedNum*10 +remainder;
        n/=10;
    }
    cout<<"reversed number is "<<reversedNum<<endl;
    if (reversedNum =n)
    {
        cout<<"the given number is palindrome"<<endl;
    }
    
    else{
        cout<<"it is not palindrome"<<endl;
    }
    
    
    
    return 0;
} 