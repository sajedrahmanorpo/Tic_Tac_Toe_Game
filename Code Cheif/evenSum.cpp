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
        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        bool ok = false;
        for (auto x : v)
        {
            if ((sum - x) % 2 == 0)
            {
                ok = true;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}