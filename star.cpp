#include<iostream>
using namespace std;
void starPattern(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    int rows;
    cout<<"enter the number of rows you want"<<endl;
    cin>>rows;
    starPattern(rows);
    return 0;
}
