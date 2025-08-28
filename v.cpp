#include<iostream>
using namespace std;
class shop{
    public:
    int id;
    virtual void display(){
    cout<<"The id of the item is "<<endl;
    cin>>id;
    }
};
class price:public shop{
    public:
    int price;
    void display(){
        cout<<"The price of this item is "<<endl;
        cin>>price;
    }
};
int main()
{
    shop *str;
    price p;
    str=&p;
    str->display();
    p.display();
    return 0;
}