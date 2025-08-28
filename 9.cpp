#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    /*selection control structure
    if((age<18)&&(age>0)){
        cout<<"you can not come to voting"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid you have to come with your parents for voting"<<endl;
    }
    else if(age<1){
        cout<<"you are yet not born"<<endl;      
    }
    else{
        cout<<"you are an adult you can vote"<<endl;
    }*/
   //switch case statement
   switch (age)
   {
   case 18:
    cout<<"you are 18 years old"<<endl;
    break;
   
    case 22:
    cout<<"you are 22 years old"<<endl;
    break;

     case 2:
    cout<<"you are 2 years old"<<endl;
    break;

   default:
   cout<<"no special cases"<<endl;
    break;
   }
    return 0;
}