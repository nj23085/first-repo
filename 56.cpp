#include<iostream>
using namespace std;
class base{
    public:
    int var1=1;
    virtual void display(){
        cout<<"1 Displaying base class variable var1  "
        <<var1<<endl;
    }
};
class derived:public base{
    public:
    int var2=2;
    void display(){
         cout<<"2 Displaying base class variable var1  "
        <<var1<<endl;
         cout<<"2 Displaying base class variable var2  "
        <<var2<<endl;
    }
};
int main()
{
    base  *bptr;
    base b;
    derived d;
    bptr=&d;
    bptr->display();
    return 0;
}