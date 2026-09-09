#include <bits/stdc++.h>
using namespace std;

class myClass
{
public:
    void display();
};

void myClass::display()
{
    cout << "Display my function" << endl;
}

int main()
{
    myClass myObj;
    // myObj.display();

    myClass *p = &myObj;
    p->display();
    return 0;
}