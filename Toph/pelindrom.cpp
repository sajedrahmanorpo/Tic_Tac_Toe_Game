#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(s==rev){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}