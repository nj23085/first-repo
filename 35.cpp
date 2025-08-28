#include<iostream>
using namespace std;

/* destructor dellocates or free the memory 
accessed or currently in use by the constructor
Destructor never takes an arguments nor does it 
return any value*/
int count=0;
class num {
    public:
    num(){
        count++; // it is  global variable which is assigned 0 outside the main function
        cout<<"this is the time  when constructor is called afor an object number"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is  called for object number"<<count<<endl;
        count--;
    }
};
int main()
{
cout<<"wee are inside our main function"<<endl;
cout<<"creating first object n1"<<endl;
num n1;
{
    cout<<"entering this block"<<endl;
    cout<<"creating two more objects"<<endl;
    num n2,n3;
    cout<<"exiting this block"<<endl;
} // this is an block in which things are created and destroyed just after exiting the block
cout<<"back to main"<<endl;
    return 0;
}