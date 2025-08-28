#include<iostream>
using namespace std;
class animal{
    public:
    string name;
    void setName(string n){
name=n;
    }
    void showName(){
        cout<<"Name : "<<name<<endl;
    }
};
class dog: public animal{
    public:
    void makeSound(){
        cout<<name<<" make sound woof!"<<endl;
    }

};
int main()
{
    dog d;
    d.setName("tommy");
    d.showName();
     d.makeSound();
    return 0;
}