#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> sixseven(n);
        for(int i=0;i<n;i++) cin >> sixseven[i];
        map<long long,int> freq;
        for(auto x: sixseven) freq[x]++;
        int mx = 0;
        for(auto &p: freq) mx = max(mx, p.second);
        int ans = n - mx;
        cout << ans << "\n";
    }
    return 0;
}