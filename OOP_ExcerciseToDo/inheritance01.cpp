#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    int setData1()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void show()
    {
        cout << "The 1st data is: " << getdata1() << endl;
        cout << "The 2nd data is: " << data2 << endl;
        cout << "The 3rd data is: " << data3 << endl;
    }
};

int main()
{
    Derived drv;
    drv.setData1();
    drv.process();
    drv.show();
    return 0;
}