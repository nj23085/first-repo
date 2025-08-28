#include<iostream>
using namespace std;

// inline function
inline int product(int a, int b){
    return a*b;
}

float moneyRecieved(int currentMoney, float factor=1.10)
{
    return currentMoney*factor;
}
int main()
{
    int a, b;

    float money;
   /* cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is : "<<product(a,b)<<endl;*/
    cout<<"if you have "<<money<<"Rs in your bank account you will recieve "<<moneyRecieved(money)<<"after one year";
    
    return 0;
}