#include <bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(void); // This is a default constructor;

    void printNum()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void){
    a = 10;
    b = 0;
}
int main(){
    Complex c;
    c.printNum();
    return 0;
}