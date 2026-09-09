#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
    int n;
    string a, b;
    cin >> n >> a >> b;
    
    if(a[0]=='(' && a[n-1]==')' && b[0]=='(' && b[n-1]==')')
        cout << "YES\n";
    else
        cout << "NO\n";
    }
    return 0;
}