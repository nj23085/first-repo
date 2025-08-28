#include<iostream>
using namespace std;
inline int simpleInterest(int money){
return money*2;
};
int main()
{
    int money;
    cout<<"if you invest"<<endl;
    cin>>money;
    cout<<"you will get this money as return after 10 years  : "<<simpleInterest(money)<<endl;
    return 0;
}