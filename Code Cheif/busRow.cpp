#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int N, M, X;
    cin >> N >> M >> X;
    
    int R = (X + M - 1) / M;
    
    int front_walk = R;
    int back_walk = N - R + 1;
    
    cout << min(front_walk, back_walk) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}