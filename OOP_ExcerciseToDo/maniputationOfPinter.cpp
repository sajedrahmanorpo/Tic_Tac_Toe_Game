#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 5, *ptr;
    ptr = &a;
    cout << "The value of a is: " << *ptr << endl;
    *ptr = *ptr + a;
    cout << "The revise value of a is: " << *ptr << endl;
    return 0;
}