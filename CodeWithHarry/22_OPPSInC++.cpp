#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a1, int b2, int c3); // Declaration;
    void getData(){
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
    
};

void Employee :: setData(int a1, int b2, int c3){
    a = a1;
    b = b2;
    c = c3;
} 

int main(){
    Employee orpo;
    orpo.b = 300;
    orpo.setData(1, 2, 3);
    orpo.d = 100;
    orpo.e = 200;
    orpo.getData();

    return 0;
}
