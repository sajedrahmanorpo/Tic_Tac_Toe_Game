#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string row1, row2;
        cin >> row1 >> row2;

        bool code = true;
        for (int i = 0; i < n; i++)
        {
            if((row1[i] == 'R' && row2[i] != 'R') || (row2[i] == 'R' && row1[i] != 'R')){
                code = false;
                break;
            }
        }
        
        cout << (code ? "YES" : "NO") << endl;
    }
    return 0;
}