#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);

    void printNum()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNum();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNum();

    return 0;
}