#include <bits/stdc++.h>
using namespace std;

class Shop{
    int id;
    float price;
public:
    void setData(int i, float p){
        id = i;
        price = p;
    }

    void getData(){
        cout << "Code of this iteam is: " << id << endl;
        cout << "Price of this iteam is: " << price << endl;
    }
};

int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item: " << i+1<<endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
    return 0;
}