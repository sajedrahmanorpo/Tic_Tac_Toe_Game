// using namespace std;
// #include <bits/stdc++.h>

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         set<int> F;
//         vector<int> a;
//         for (int i = 0; i < n; i++)
//             for (int v = 1; v <= 2 * n; v++)
//                 if (!F.count(v) && (a.empty() || !F.count(a.back() + v)))
//                 {
//                     a.push_back(v);
//                     F.insert(v);
//                     if (a.size() > 1)
//                         F.insert(a[a.size() - 2] + v);
//                     break;
//                 }
//         for (int x : a)
//             cout << x << " ";
//         cout << "\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());

        long long k = -1;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                long long diff = b[i] - a[i];
                if (diff <= 0 || (k != -1 && diff != k)) {
                    ok = false; break;
                }
                k = diff;
            } else if (k != -1 && a[i] + k <= b[i]) {
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}