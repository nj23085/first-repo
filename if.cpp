#include<iostream>
using namespace std;
int main()
{
    int sa,sb;
    cout<<"the score of indian team is :"<<endl;
    cin>>sa;
    cout<<"the score of australian team is :"<<endl;
    cin>>sb;
    cout<<"THE RESULT OF THIS EXICITING MATCH IS : "<<endl;
    if (sa>sb)
    {
        cout<<"INDIAN TEAM HAS WON THE MATCH"<<endl;
    }
    else if (sb>sa)
    {
       cout<<"AUSTRALIAN TEAM HAS WON THE MATCH"<<endl;
    }
    else if (sa=sb)
    {
        cout<<"THE MATCH HAS BEEN TIED"<<endl;
    }
    else
    {
        cout<<"the match has been abondoned"<<endl;
    }
    
    
    
    return 0;
}