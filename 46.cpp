#include<iostream>
using namespace std;
class base{
    int data;
    public:
    base(int i){
        data=i;
        cout<<"base class constructor called"<<endl;
    }
    void printData1(void){
        cout<<"the value of data is "<<data<<endl;
    }
};

class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printData2(void){
        cout<<"the value of data is "<<data1<<endl;
    }
};

class derived:public base,public base1{
    int datad1,datad2;
    public:
    derived(int a,int b,int c,int d):base(a),base1(b){
        datad1=c;
        datad2=d;
        cout<<"derived class constructor is called "<<endl;
    }
    void printData3(void){
        cout<<"the value of datad1 is "<<datad1<<endl;
        cout<<"the value of datad2 is "<<datad2<<endl;
    }

};

int main()
{
    derived nayan(1,2,3,4);
    nayan.printData1();
    nayan.printData2();
    nayan.printData3();
    return 0;
}