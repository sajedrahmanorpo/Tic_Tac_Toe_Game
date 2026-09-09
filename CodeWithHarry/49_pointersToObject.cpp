#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is real: " << real << endl;
        cout << "The imaginary part is imaginary: " << imaginary << endl;
    }
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1; using pointer
    Complex *ptr = new Complex; // using new keyword
    (*ptr).setData(6, 8); // exactly same as
    // ptr->setData(6, 8);
    // // (*ptr).getData(); exactly same as
    // ptr->getData();

    // Array of object
    Complex *ptr1 = new Complex[4]; // using new keyword
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}