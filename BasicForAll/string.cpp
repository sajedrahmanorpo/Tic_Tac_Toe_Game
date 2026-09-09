#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char name[20];

    cout << "Enter your name: ";
    // cin >> name; // It takes the first part of name
    gets(name);
    cout << "Welcome --> " << name;
    return 0;
}