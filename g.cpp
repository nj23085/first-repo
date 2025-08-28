#include<iostream>
using namespace std;
inline int money(int totalPrice){
    return totalPrice*0.18 + totalPrice; 
};
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void getPrice(void);
    void setPrice(void);
    void displaytotalPrice(void);
};
void shop :: setPrice(void){
    cout<<"enter the id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;

}
void shop :: displaytotalPrice(void){
    int totalPrice =0;
    for (int i = 0; i < counter; i++)
    {
        totalPrice += itemPrice[i];
    }
    int finalPrice = money(totalPrice);
    cout<<"total price of all items before tax :"<<totalPrice<<endl;
    cout<<"total price of all items after tax :"<<finalPrice<<endl;
    
}
int main(){
     shop store;
     store.initCounter();
     int n;
     cout<<"how many items do you want to add :"<<endl;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
        store.setPrice();
     }
     store.displaytotalPrice();
     return 0;
     
}