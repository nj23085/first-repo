#include<iostream>
using namespace std;
class base{
    public:
    int var1;
    void display(){
        cout<<"Displaying base class variable var1  "
        <<var1<<endl;
    }
};
class derived:public base{
    public:
    int var2;
    void display(){
         cout<<"Displaying base class variable var1  "
        <<var1<<endl;
         cout<<"Displaying base class variable var2  "
        <<var2<<endl;
    }
};
int main()
{
    base *base_pointer;
    base b1;
    derived d1;
    base_pointer = &d1;//pointing to derived class
    base_pointer->var1=34;
    //base_pointer->var2=34; it throws an error
    base_pointer->display();

    derived *derived_pointer;
    derived_pointer=&d1;
    derived_pointer->var2=98;
    derived_pointer->display();
    return 0;
}