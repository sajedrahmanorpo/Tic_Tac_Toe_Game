#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string sum;
        cin >> sum;

        int a = sum[0] - '0';
        int b = sum[2] - '0';
        
        cout << a+b << endl;
    }
    
    return 0;
}