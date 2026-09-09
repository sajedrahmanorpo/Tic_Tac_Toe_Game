#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    set<string>s = {"abc", "acb", "bac", "cba"};
    while (t--)
    {   string st; cin >> st;
        if(s.count(st)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}