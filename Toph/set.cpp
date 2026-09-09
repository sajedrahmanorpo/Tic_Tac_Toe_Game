#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> s;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for (int j = 0; j < M; j++) {
        int y; cin >> y;
        s.insert(y);
    }

    int cnt = 0;
    for (auto val : s) {
        if (cnt > 0) cout << " ";
        cout << val;
        cnt++;
    }
    cout << "\n";

    return 0;
}