#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n; cin >> n;
    // vector<int>v(n);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // for(auto &x : v){
    //     x *= 2;
    // }

    // for(auto val : v){
    //     cout << val << " ";
    // }

    int n; cin >>n;
    vector<int>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int maxVal = v[0];
    int maxInd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > maxVal){
            maxVal = v[i];
            maxInd = i;
        }
    }
    
    cout << "Maximum value: " << maxVal << endl;
    cout << "Maximum Index: " << maxInd << endl;


    // int n; cin >> n;
    // vector<int>v(n);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // int oddCount = 0;
    
    // for(auto x : v){
    //     if(x % 2 == 1){
    //         oddCount++;
    //     }
    // }
    // cout << "Count: " << oddCount;
    return 0;
}