#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0, orVal = 0;
        while (n--) {
            long long a;
            cin >> a;
            sum += a;
            orVal |= a;
        }

        cout << (sum == orVal ? "Yes" : "No") << "\n";
    }
}