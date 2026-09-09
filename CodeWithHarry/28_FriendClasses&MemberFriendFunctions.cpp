#include <bits/stdc++.h>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex o1, Complex o2);
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

class Complex
{
    int a, b;
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{ 
    Complex o1, o2;
    o1.setNum(1, 4);
    o2.setNum(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    return 0;
}