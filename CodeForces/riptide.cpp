#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a.begin(), a.end());
    
    if (a[0] == a[1] || a[1] == a[2]) {
        cout << 0 << endl;
        return;
    }
    long long rounds = min(a[1] - a[0], a[2] - a[1]);
    cout << rounds << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}