#include<iostream>
using namespace std;
template<class t1=int,class t2=float,class t3=char>
class nayan{
    public:
    t1 a;
    t2 b;
    t3 c;
    nayan(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
        cout<<"the value of c is :"<<c<<endl;
    }
};
int main()
{
    nayan<> n(4,6.7,'n');
    n.display();
    return 0;
}