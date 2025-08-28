#include<iostream>
using namespace std;

// function overloading
int sum(int a,int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a ,int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

//overloaded dunction

float volume(double r,float h){
    return (3.14 *r*r*h);
}

int volume(int a){
    return a*a*a;
}

int volume(int l,int b,int h){
    return l*b*h;
}

int main()
{
    int a,b,c;
    cout<<"enter the values of a b c"<<endl;
    cin>>a>>b>>c;
    cout<<"the volume of cylinder is"<<volume(a,b)<<endl;
    cout<<"the volume of cube  is "<<volume(a)<<endl;
    cout<<"the volume of cuboid is "<<volume(a,b,c)<<endl;
    return 0;
}