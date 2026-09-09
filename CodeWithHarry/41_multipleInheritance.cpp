#include <bits/stdc++.h>
using namespace std;

class Base1
{
protected:
    int baseNum1;

public:
    void setNum1(int b1)
    {
        baseNum1 = b1;
    }
};

class Base2
{
protected:
    int baseNum2;

public:
    void setNum2(int b2)
    {
        baseNum2 = b2;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "The baseNum1 is: " << baseNum1 << endl;
        cout << "The baseNum2 is: " << baseNum2 << endl;
        cout << "The sum of two number is: " << baseNum1 + baseNum2 << endl;
    }
};

int main()
{
    Derived d1;
    d1.setNum1(10);
    d1.setNum2(20);
    d1.display();
    return 0;
}