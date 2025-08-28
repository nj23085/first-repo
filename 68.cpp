#include<iostream>
using namespace std;
template<class t>
class nayan{
    public:
    t data;
    nayan(t a){
        data=a;
    }
    void display();
};
template<class t>
 void nayan<t>:: display(){
    cout<<data<<endl;
}
void func(int c){
    cout<<"i am first func() "<<c<<endl;
}
template<class t>
void func(t a){
    cout<<"i am templatised func() "<<a<<endl;
}
int main()
{
    /*nayan<float>n(5.8);
    cout<<n.data<<endl;
    n.display();*/
    func(4);//exact match takes the highest priority 
    return 0;
}