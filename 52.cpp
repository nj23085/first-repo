#include<iostream>
using namespace std;
class kirana{
    int id;
    float price;
    public:
    void setData(int a,int b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main()
{
    int size=3;
    int p,i;
    float q;
    kirana *ptr=new kirana[size];
    kirana *ptrTemp=ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<" Enter the id and price of item "<<i+1<<": "<<endl;
        cin>>p>>q;
        (*ptr).setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"item no.: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}