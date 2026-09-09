#include <bits/stdc++.h>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 9, int c = 6)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value data is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s1(1);
    s1.printData();
    return 0;
}