#include<iostream>
using namespace std;
class Employee{
    int id[100];
    char name[100];
    int hours[100];
   static int counter;
    public:
     static void initCounter(void){counter=0;}
    void getData(void);
    void setData(void);

};
int Employee :: counter = 0;
void Employee :: setData(void){
    cout<<"enter the name of the employee"<<endl;
    cin>>name;
    cout<<"enter the id of the employee"<<endl;
    cin>>id[counter];
    cout<<"enter the no. of working hours he work in a day"<<endl;
    cin>>hours[counter];
    counter ++;
}
int main(){
    Employee e;
e.initCounter();
int n;
cout<<"enter the no. of emlpoyee you have:"<<endl;
cin>>n;
for (int i = 0; i < n; i++)
{
    e.setData();
}
return 0;
}
