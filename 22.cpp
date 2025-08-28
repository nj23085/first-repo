#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }// counter was incrementing by one as object was created//
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "enter id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of itm with Id " << itemId[i] << "is " << itemPrice[i] << endl;
    }
}
int main()
{
    
    Shop dukaan;
    dukaan.initCounter();
    for (int i = 0; i < 5; i++)
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    return 0;
}