#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string pass = "";
    s[0] = toupper(s[0]);
    for (auto ch : s)
    {
        if (ch == 's')
        {
            pass += "$";
        }
        else if (ch == 'i')
        {
            pass += "!";
        }
        else if (ch == 'o')
        {
            pass += "()";
        }
        else
        {
            pass += ch;
        }
    }

    pass += '.';
    cout << pass << endl;

    return 0;
}