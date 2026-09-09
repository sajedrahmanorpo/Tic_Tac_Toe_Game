#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// This will not swap a and b
// void swapNum(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by reference    (1st way)
// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Call by reference using C++ refernce variable    (2nd way)
void swapReferenceVer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swapNum(x, y); ---> This will not swap a and b
    // swapPointer(&x, &y); ---> This will exicute a into b and b into a
    swapReferenceVer(x, y); // ---> This will swap a into b and b into a
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}