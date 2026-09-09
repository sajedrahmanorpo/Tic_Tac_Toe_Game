#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        for (int i = 0; i + 2 < n; i++)
        {
            if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                s[i+2] = '*';
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}