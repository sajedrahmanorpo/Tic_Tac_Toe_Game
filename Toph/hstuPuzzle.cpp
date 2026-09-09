#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t; cin >> t;
//     while (t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;

//         bool hasH = false;
//         bool hasS = false;
//         bool hasT = false;
//         bool hasU = false;

//         for(auto st: s){
//             if(st == 'H') hasH = true;
//             if(st == 'S') hasS = true;
//             if(st == 'T') hasT = true;
//             if(st == 'U') hasU = true;
//         }

//         if(hasH && hasS && hasT && hasU)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
    
//     return 0;
// }



int main(){
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int>ans(n);
    int maxRight = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if(maxRight > v[i]){
            ans[i] = 1;
        }else{
            ans[i] = 0;
        }
        maxRight = max(maxRight, v[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}