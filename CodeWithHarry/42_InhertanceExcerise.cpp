#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2;

public:
    void getSimpleCalculator()
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void performOperationSimple()
    {
        cout << "The Devision of both numbers: " << num1 / num2 << endl;
        cout << "The Summation of both numbers: " << num1 + num2 << endl;
        cout << "The Subtraction of both numbers: " << num1 - num2 << endl;
        cout << "The Multiplication of both numbers: " << num1 * num2 << endl;
    }
};

class ScientificCalculator
{
    int num1, num2;

public:
    void getScientificCalculator()
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void performOperationScientific()
    {
        cout << "The Devision of cos(num1) and cos(num2): " << cos(num1) << " and " << cos(num2) << endl;
        cout << "The Summation of sin(num1) and sin(num2): " << sin(num1) << " and " << sin(num2) << endl;
        cout << "The Subtraction of exp(num1) and exp(num2): " << exp(num1) << " and " << exp(num2) << endl;
        cout << "The Multiplication of tan(num1) and tan(num2): " << tan(num1) << " and " << tan(num2) << endl;
    }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.getSimpleCalculator();
    calc.performOperationSimple();
    calc.getScientificCalculator();
    calc.performOperationScientific();
    return 0;
}