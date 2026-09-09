#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = count(s.begin(), s.end(), 'A');
    int danik = count(s.begin(), s.end(), 'D');

    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}