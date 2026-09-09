#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string trg = "hello";
    int pos = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == trg[pos])
        {
            pos++;
            if (pos == 5)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}