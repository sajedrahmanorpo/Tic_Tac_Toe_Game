#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>v={10, 20, 30};
    // for(auto &x : v){
    //     x += 5;
    // }
    // for(auto x : v){
    //     cout << x << " ";
    // }

    // int n;
    // cin >> n;

    // vector<int>v(n);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for(auto x : v){
    //     if(x % 2 == 0){
    //         cout << x << " ";
    //     }
    // }

    // int n;
    // cin >> n;

    // vector<int>v(n);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // for(int i = 0; i < n/2; i++){
    //     swap(v[i],v[n-i-1]);
    // }

    // for(auto x: v){
    //     cout <<x <<" ";
    // }

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;

    auto it = find(v.begin(), v.end(), x);

    if (it != v.end())
    {
        v.erase(it);
        cout << x << " deleted. Updated vector: ";
        for (auto val : v)
        {
            cout << val << " ";
        }
    }
    else
        cout << x << " not found in vector.";

    return 0;
}