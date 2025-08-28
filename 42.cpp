#include<iostream>
#include<math.h>
using namespace std;
class simpleCalculator{
    private:
    int a,b;
    public:
    void set(){
       cout<<"Enter the value  of a:"<<endl;
       cin>>a;
       cout<<"Enter the value of b:"<<endl;
       cin>>b;
    }
    void show(){
       cout<<"The sum of a and b is : "<<a+b<<endl;
       cout<<"The difference of a and b is : "<<a-b<<endl;
       cout<<"The product of a and b is : "<<a*b<<endl;
       cout<<"The division of a and b is : "<<a/b<<endl;
    }
};
class scientificCalculator{
    private:
    int a;
    public:
    void setA(){
        cout<<"enter the value of a:"<<endl;
        cin>>a;
    }
    void performOperations(){
        cout<<"The value of cos a is "<<cos(a)<<endl;
        cout<<"The value of sin a is "<<sin(a)<<endl;
        cout<<"The value of tan a is "<<tan(a)<<endl;
        cout<<"The value of log a is "<<log(a)<<endl;
    }
};
class hybridCalculator: public simpleCalculator,public scientificCalculator{

};
int main()
{
    hybridCalculator calc;
    calc.set();
    calc.show();
    calc.setA();
    calc.performOperations();
    return 0;
}