#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<pair<int, string>> p(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> p[i].first >> p[i].second;
    // }

    // for (auto s : p)
    // {
    //     if (s.first % 2 == 0)
    //     {
    //         cout << s.second << " ";
    //     }
    // }
    // cout << endl;

    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(),v.end());

    bool myAssen = true;

    for (int i = 0; i < n-1; i++)
    {
        if(v[i] <= v[i+1]){
        myAssen = false;
        break;
        }
    }
    
    cout << (myAssen ? "Yes" : "No") << endl;
    return 0;
}