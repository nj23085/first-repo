#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"enter the id of employee";
        cin>>id;
    }
     void getId(void){
        cout<<"the id of this employee is"<<id<<endl;
    
     }
};
int main()
{
   /* Employee harry,rohan,lavish,shruti;
    harry.setId();*/
//this way is useful for small no. of employees 
//for large set of data this process is very complicated and hard to use
Employee fb[4];
for (int i = 0; i < 4; i++)
{
    fb[i].setId();
    fb[i].getId();
}

    return 0;
}