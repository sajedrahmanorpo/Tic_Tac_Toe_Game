#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // int a = n / 10;
        // int b = n % 10;
        // cout << a + b << endl;

        int a = n / 10;
        int b = a + n - (a * 10);

        cout << b << endl;

        return 0;
    }
}