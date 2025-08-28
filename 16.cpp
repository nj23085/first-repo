#include<iostream>
using namespace std;

//call by reference using pointer

void swapPointer(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}


int main()
{
    int x,y;
    cout<<"the value of x is  "<<endl;
    cin>>x;
    cout<<"tthe value of y is "<<endl;
    cin>>y;
    swapPointer(&x,&y);
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
    return 0;
} 