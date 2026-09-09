#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Id of your item price " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id" << itemId[i] << "is" << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dokaan;
    dokaan.initCounter();
    dokaan.setPrice();
    dokaan.setPrice();
    dokaan.setPrice();
    dokaan.displayPrice();
    return 0;
}