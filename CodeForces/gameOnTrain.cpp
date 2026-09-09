#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>h(n);
        for(auto &x: h){
            cin >> x;
        }
        
        int mn = *min_element(h.begin(), h.end());
        int mx = *max_element(h.begin(), h.end());

        cout << mx - mn + 1 << endl;
    }
    
    return 0;
}