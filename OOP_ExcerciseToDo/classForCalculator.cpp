#include <bits/stdc++.h>
using namespace std;

class Calculaor
{
private:
    int a, b;

    void add()
    {
        cout << "Sum: " << a + b << endl;
    }

    void sub()
    {
        cout << "Differnce: " << a - b << endl;
    }

public:
    void input(int x, int y)
    {
        a = x;
        b = y;
        add();
        sub();
    }
};

int main()
{
    Calculaor calc;
    calc.input(10, 4);
    return 0;
}