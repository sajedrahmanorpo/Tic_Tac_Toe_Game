#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x = 20;
int main(){
    int x = 10;
    :: x = 30;
    // cout << x << endl; // op is 10
    cout << :: x << endl; // op is 20
    return 0;
}