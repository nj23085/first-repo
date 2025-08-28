#include<iostream>
using namespace std;
class number{
int a;
public:
number(){
    a=0;
}
number(int num){
    a=num;
}
number(number &obj){
    cout<<"copy constuctor called "<<endl;
    a=obj.a;
}
void display(){
    cout<<"the number for this object is "<<a<<endl;

}
};
int main()
{
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(x);//copy constructor invoked
    z1.display();

    //z2=z; copy constructor not called because there is only assignment operator
    
    number z3=z;//copy constructor is invoked as object is created in this line itself
    return 0;
}

/* copy constructor is a type of constuctor which
 makes the copy of another object.
compiler allocates each program a copy constructor
when no copy constructor is found in program then copy constructor is given by the compiler
  */