#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long total = 0;
        long long sumMin = 0;
        long long maxAll = 0;

        for (int i = 0; i < n; i++)
        {
            total += a[i] + b[i];
            sumMin += min(a[i], b[i]);
            maxAll = max(maxAll, max(a[i], b[i]));
        }

        long long totalPair = 0;
        for (int i = 0; i < n; i++)
        {
            if (max(a[i], b[i]) == maxAll)
            {
                totalPair = min(a[i], b[i]);
                break;
            }
        }

        cout << total - sumMin + totalPair << "\n";
    }

    return 0;
}