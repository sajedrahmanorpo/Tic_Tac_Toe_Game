#include <bits/stdc++.h>
using namespace std;

int main(){
    // Basic
    // int a = 5;
    // int *ptr = &a;
    // *pte = 99;
    // cout <<"The value of a is: " << a << endl;

    //new keywowrd
    // int *p = new int(10); // Dinamically initialization
    // cout <<"The value at (p) is: " << *p << endl;

    // new keyword in array
    int *arr = new int[3]; // Dinamically initialization
    arr[0] = 15;
    *(arr+1) = 25;
    arr[2] = 35;
    delete[] arr; // Dinamially aloccate arrey k free korar syntex

    cout <<"The value at arr[0] is: " << arr[0] << endl;
    cout <<"The value at arr[1] is: " << arr[1] << endl;
    cout <<"The value at arr[2] is: " << arr[2] << endl;

    //delete operator

    return 0;
}