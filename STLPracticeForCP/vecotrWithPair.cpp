#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> sdnt;
    for (int i = 0; i < n; i++)
    {
        int roll, marks;
        cin >> roll >> marks;
        sdnt.push_back({roll, marks});
    }

    sort(sdnt.begin(),sdnt.end(),(pair<int, int>a, pair<int, int>b))
    
    return 0;
}