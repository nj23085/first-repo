#include<iostream>
using namespace std;

//structure in c++

struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

//unions in c++
union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    /*struct employee nayan;
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.car<<endl; 
    nayan.eId=1;
    nayan.favChar='c';
    nayan.salary=1200000;
    cout<<"the value is "<<nayan.eId<<endl;
    cout<<"the value is "<<nayan.favChar<<endl;
    cout<<"the value is "<<nayan.salary<<endl;*/
    return 0;
}