#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);
     v.push_back(50);

     for (int i = 0; i < v.size(); ++i)
     {
         cout << v[i] << " ";
     }


    // ---> Asceding & Descending Order

    // vector<int> v = {3,4,1,6,2};
    // sort(v.begin(), v.end());
    // sort(v.rbegin(), v.rend());
    // for(int x : v) cout << x << " "; 


    // ---> Sort Vector of Pairs by First Element

    // vector<pair<int, int>> vp = {{3, 100}, {1, 200}, {2, 150}};
    // sort(vp.begin(), vp.end());
    // for(auto x : vp) cout << x.first << " " << x.second << endl;


    // 
    return 0;
}