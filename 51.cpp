#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }

    void setData(int a, int b){
        real=a;
        imaginary=b;
    }
};
int main()
{
    complex c1;
    complex *ptr=&c1;
    c1.setData(40,50);
    c1.getData();
       return 0;
}