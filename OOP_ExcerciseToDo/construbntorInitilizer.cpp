#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    const int admissionFee;
    const int examFee;

    Student(int x, int y)
    : admissionFee (x), examFee (y)
    {
        // admissionFee = x; // we can't declare here 
        cout << admissionFee << endl;
        cout << examFee << endl;
    }
};
int main(){
    Student a1(1509, 500);

    return 0;
}