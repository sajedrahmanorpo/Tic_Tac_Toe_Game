#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// union money
// {
//     int rice;
//     char car;
//     float pounds;
// }; 

int main(){
    
    enum Meal{breakfast, lunch, dinner};
    // cout << breakfast; // op will come (0);
    Meal m1 = breakfast;
    Meal m2 = lunch;
    cout << m1 << endl;
    cout << m2 << endl;

    // union money M1;
    // M1.rice = 34;
    // M1.car = 'A';
    // M1.pounds = 17657;
    // cout << M1.pounds;

    // ep sajed;
    // sajed.eId = 1;
    // sajed.favChar = 'C';
    // sajed.salary = 10000000;

    // cout << "The value is " << sajed.eId << endl;
    // cout << "The value is " << sajed.favChar << endl;
    // cout << "The value is " << sajed.salary << endl;
    
    return 0;
}