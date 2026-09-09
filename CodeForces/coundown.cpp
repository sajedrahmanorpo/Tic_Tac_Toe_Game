#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;
    int best = x;
    int worst = x;
    int result = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> x;

        if (x > best)
        {
            best = x;
            result++;
        }
        else if (x < worst)
        {
            worst = x;
            result++;
        }
    }

    cout << result;

    return 0;
}