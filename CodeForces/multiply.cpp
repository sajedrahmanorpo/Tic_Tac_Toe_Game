#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int sixseven = 0;
        for (char c : S)
            if (!(c == 'N' || c == 'W' || c == 'D'))
                sixseven++; // legal ball

        int o = sixseven / 6, b = sixseven % 6;
        if (b == 0)
            cout << o << (o == 1 ? " OVER\n" : " OVERS\n");
        else if (o == 0)
            cout << b << (b == 1 ? " BALL\n" : " BALLS\n");
        else
            cout << o << (o == 1 ? " OVER " : " OVERS ")
                 << b << (b == 1 ? " BALL\n" : " BALLS\n");
    }
}
