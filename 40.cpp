#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;
    string name;
public:
    void getDetails(){
     cout<<"Enter the name of student :"<<endl;
     cin>>name;
     cout<<"Enter the roll no. of student :"<<endl;
     cin>>roll_no;
    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. : "<<roll_no<<endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;
    float ssc;
    float english;

public:
    void getMarks(){
        cout<<"Marks obtained in maths :"<<endl;
        cin>>maths;
        cout<<"Marks obtained in physics :"<<endl;
        cin>>physics;
        cout<<"Marks obtained in ssc :"<<endl;
        cin>>ssc;
        cout<<"Marks obtained in english :"<<endl;
        cin>>english;
    }
};

class result : public exam
{
    float total;
    float percentage;

public:
    void calculateResult(){
       total=maths+physics+ssc+english;
       percentage=total*0.25;
    }
    void showResult(){
        cout<<"Your total percentage is : "<<percentage<<endl;
        if (percentage>40)
        {
           cout<<"Congratulations you are pass !"<<endl;
        }
         else if (percentage>90)
         {
            cout<<"You are a schlor student"<<percentage<<endl;
         }
         else if(percentage<40){
            cout<<"Sorry! you are fail. \n Better luck next time!"<<percentage<<endl;
         }
         
        
        
    }
};
int main()
{
    result vedu;
    vedu.getDetails();
    vedu.getMarks();
    vedu.calculateResult();
    vedu.show();
    vedu.showResult();
    return 0;
}