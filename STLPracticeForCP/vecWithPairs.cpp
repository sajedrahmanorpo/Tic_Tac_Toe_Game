#include <bits/stdc++.h>
using namespace std;

// bool cmp(pair<int, int>a, pair<int, int>b){
//     return a.second < b.second;
// }

int main(){
    int n; cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        vp.push_back({roll, marks});
    }

    // sort(vp.begin(), vp.end(), cmp);
    pair<int, int> top = vp[0];
    for(auto v : vp){
    // if(v.second >= 80) cout << "Roll: " << v.first << endl;
    if(v.second > top.second) top = v;
    }
    cout << "Topper's Roll is: " << top.first << "Marks: " << top.second << endl;
    return 0;
}